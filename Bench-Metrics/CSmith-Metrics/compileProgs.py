import subprocess
import os
import argparse
import sys

def compile_programs(programs_path) -> int:
    os.makedirs("compiled_progs", exist_ok=True)
    for program in os.listdir(programs_path):
        program_path = os.path.join(programs_path, program)
        size_result : subprocess.CompletedProcess = subprocess.run(f"clang {program_path} -I/home/lucas/LaC/csmith/build/include -o compiled_progs/{program}.out", shell=True, capture_output=True, text=True)
    if size_result.returncode != 0:
        print(f"Error in {program}")
        sys.exit(1)
    size_str = size_result.stdout.split('\n')[1].split('\t')
    return int(size_str[0])

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Compile a set of CSmith programs.')
    parser.add_argument('programs_path', help='Path to the programs.')
    args = parser.parse_args()
    compile_programs(args.programs_path)