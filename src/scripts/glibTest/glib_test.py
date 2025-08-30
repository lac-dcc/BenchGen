#!/usr/bin/env python3

import subprocess
import pathlib
import tempfile
import json
import random
import shutil
import logging
import itertools
import csv

logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

BENCHGEN_ROOT = pathlib.Path("../../gen/").resolve()
HYPERFINE_WARMUP = 1
HYPERFINE_RUNS = 2
OUTPUT = "out.csv"

DEPTH = 6

GRAMMAR = """
A0 = A1 A1 A1 A1;
A1 = A2 A2 A2 A2;
A2 = A3 A3 A3 A3;
A3 = insert insert insert insert;
B = LOOP(IF(CALL(B), C));
C = B {} B;
"""

SEED = """
new A0 B
"""

def benchgen(depth, grammar, seed, var):
    logger.info(f"running benchgen for var type {var} (depth={depth})")
    program_root = pathlib.Path(tempfile.mkdtemp(dir=BENCHGEN_ROOT))
    
    with open(program_root/"rule.txt", "w") as f:
        f.write(grammar)

    with open(program_root/"seed.txt", "w") as f:
        f.write(seed)

    proc = subprocess.run(
        [
            "./benchGen",
            str(depth),
            program_root.relative_to(BENCHGEN_ROOT)/"rule.txt",
            program_root.relative_to(BENCHGEN_ROOT)/"seed.txt",
            program_root.name,
            var
        ],
        capture_output = True,
        text = True,
        cwd = BENCHGEN_ROOT
    )
    
    if proc.returncode != 0:
        raise RuntimeError("Error running benchgen:", proc.stderr)

    return program_root

def hyperfine(cmd):
    proc = subprocess.run([
        "hyperfine",
        "-w", str(HYPERFINE_WARMUP),
        "-r", str(HYPERFINE_RUNS),
        "--export-json", "-",
        "--style", "none",
        "-N",
        cmd
    ], capture_output=True, text=True)

    if proc.returncode != 0:
        raise RuntimeError(proc.stderr)

    return json.loads(proc.stdout)["results"][0]["mean"]

def generate_grammar(i, r, c):
    logger.info(f"generating grammar with parameters i={i}, r={r}, c={c}")
    ops = ["insert"] * i + ["remove"] * r + ["contains"] * c
    random.shuffle(ops)
    return GRAMMAR.format(" ".join(ops))

def make(program_root, flags):
    logger.info(f"making {program_root.name} (flags: {' '.join(flags)})")
    proc = subprocess.run(
        ["make", program_root.name, *flags],
        capture_output = True,
        text = True,
        cwd = program_root
    )

    if proc.returncode != 0:
        raise RuntimeError("Error compiling program: ", proc.stderr)

def run(program_root):
    # make with COUNT flag first
    make(program_root, ["CFLAGS='-DCOUNT'"])

    logger.info(f"running {program_root.name}")
    proc = subprocess.run(
        [f"./{program_root.name}"],
        cwd = program_root,
        capture_output=True,
        text=True
    )
    stdout = proc.stdout
    i, r, c = stdout.count("insert"), stdout.count("remove"), stdout.count("contains")
    logger.info(f"generated program has {i} insertions {r} removals and {c} queries")
     
    # remake without flags
    make(program_root, ["-B"])  
    logger.info(f"hyperfining {program_root.name}")
    time = hyperfine(program_root/program_root.name)
    return time, stdout.count("insert"), stdout.count("remove"), stdout.count("contains")

def generate_and_run(var, i, r, c):
    grammar = generate_grammar(i, r, c)
    program_root = benchgen(DEPTH, grammar, SEED, var)
    time, i_count, r_count, c_count = run(program_root)
    logger.info(f"clearing {program_root.name}")
    shutil.rmtree(program_root)
    return var, i_count, r_count, c_count, time

if __name__ == "__main__":
    for var in ["ghash", "glist", "garray", "gqueue", "gtree"]:
        for i, r, c in itertools.product(range(11), repeat=3):
            res = generate_and_run(var, i, r, c)
            logger.info(f"writing {res} to output file")
            with open(OUTPUT, "a", newline="") as f:
                    writer = csv.writer(f)
                    writer.writerow(res)
