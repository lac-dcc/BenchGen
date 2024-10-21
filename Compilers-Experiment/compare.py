import subprocess
import csv
import argparse
import sys
import os
import re


compilers = ["tcc", "gcc", "clang"]
cflags = ["-O0", "-O1", "-O2", "-O3"]

header = ["Program", "Compiler", "Opt", "Binary_Size(B)", 
          "Compilation_User(s)", "Compilation_Sys(s)", 
          "Exec_User(s)", "Exec_Sys(s)"]


def get_program_size(program) -> int:
    size_result : subprocess.CompletedProcess = subprocess.run(f"size {program}", shell=True, capture_output=True, text=True)
    if size_result.returncode != 0:
        print(f"Error: couldn't get program size {program}")
        sys.exit(1)
    size_str = size_result.stdout.split('\n')[1].split('\t')
    return int(size_str[0])


def get_comp_time(program_path, compiler, flag):
    comp_time = subprocess.run(["time", "make", "-C", program_path, compiler, flag], stdout=subprocess.PIPE,  stderr=subprocess.PIPE)
    comp_time = comp_time.stderr.decode()
    user_time_comp = re.search(r'(\d+\.\d+)user', comp_time)
    system_time_comp = re.search(r'(\d+\.\d+)system', comp_time)
    return (user_time_comp, system_time_comp)

def get_exec_time(program):
    run_time = subprocess.run(["time", program, "0", "100"], stdout=subprocess.PIPE,  stderr=subprocess.PIPE)
    run_time = run_time.stderr.decode()
    user_time_run = re.search(r'(\d+\.\d+)user', run_time)
    system_time_run = re.search(r'(\d+\.\d+)system', run_time)
    return (user_time_run, system_time_run)
    

def run_comparison(programs_dir):
    os.makedirs('results', exist_ok=True)
    with open (f'results/comparison_results.csv', 'w', newline='') as csvfile:
        csv_writer = csv.writer(csvfile, delimiter=',')
        csv_writer.writerow(header) 
        if os.path.isdir(programs_dir):
            for program in os.listdir(programs_dir):
                print(f'Running for {program} ...')
                
                program_path = os.path.join(programs_dir, program)
                tcc_run = f'./{program_path}/{program}_tcc'
                tcc_comp_time = get_comp_time(program_path, "CC=tcc", "CFLAGS=")
                # print(f'Running [tcc] {tcc_run} ...')
                tcc_run_time = get_exec_time(tcc_run)
                
                tcc_size = get_program_size(tcc_run)
                new_row = [program, "tcc", "NONE", tcc_size, tcc_comp_time[0].group(1), tcc_comp_time[1].group(1), tcc_run_time[0].group(1), tcc_run_time[1].group(1)]
                csv_writer.writerow(new_row) 
                subprocess.run(["make", "clean", "-C", program_path, "CC=tcc"], stdout=subprocess.PIPE,  stderr=subprocess.PIPE)
                
                for compiler in compilers[1:]: 
                    compiler_option = f'CC={compiler}'
                    for flag in cflags:
                        flag_option = f'CFLAGS={flag}'
                        run_command = f'./{program_path}/{program}_{compiler}'
                        
                        # print(f'Compiling [{compiler} {flag}] {run_command} ...')
                        comp_time = get_comp_time(program_path, compiler_option, flag_option)
                        # print(f'Running [{compiler} {flag}] {run_command} ...')
                        run_time = get_exec_time(run_command)
                        size = get_program_size(run_command)           
                        new_row = [program, compiler, flag[1:], size, comp_time[0].group(1), comp_time[1].group(1), run_time[0].group(1), run_time[1].group(1)]
                        csv_writer.writerow(new_row) 
                        subprocess.run(["make", "clean", "-C", program_path, compiler_option], stdout=subprocess.PIPE,  stderr=subprocess.PIPE)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Run perf stat over a set of programs.')
    parser.add_argument('programs_dir', help='Path to the set of programs.')
    args = parser.parse_args()
    run_comparison(args.programs_dir)