import subprocess
import csv
import argparse
import os
import re

TCC = "tcc"
GCC = "gcc"
CLANG = "clang"
compilers = [TCC, GCC, CLANG]

header = ["Program", "Compiler", 
          "Compilation_User(s)", "Compilation_Sys(s)", 
          "Exec_User(s)", "Exec_Sys(s)"]

def run_comparison(programs_dir):
    os.makedirs('results', exist_ok=True)
    with open (f'results/comparison_results.csv', 'w', newline='') as csvfile:
        csv_writer = csv.writer(csvfile, delimiter=',')
        csv_writer.writerow(header) 
        if os.path.isdir(programs_dir):
            for program in os.listdir(programs_dir):  
                for compiler in compilers: 
                    program_path = os.path.join(programs_dir, program)
                    compiler_option = f'CC={compiler}'
                    print(f'Compiling [{compiler}] {program}...')
                    comp_time = subprocess.run(["time", "make", "-C", program_path, compiler_option], stdout=subprocess.PIPE,  stderr=subprocess.PIPE)
                    comp_time = comp_time.stderr.decode()
                    user_time_comp = re.search(r'(\d+\.\d+)user', comp_time)
                    system_time_comp = re.search(r'(\d+\.\d+)system', comp_time)
                    
                    print(f'Running [{compiler}] {program}...')
                    run_command = f'./{program_path}/{program}_{compiler}'
                    run_time = subprocess.run(["time", run_command, "100"], stdout=subprocess.PIPE,  stderr=subprocess.PIPE)
                    run_time = run_time.stderr.decode()
                    user_time_run = re.search(r'(\d+\.\d+)user', run_time)
                    system_time_run = re.search(r'(\d+\.\d+)system', run_time)
                    
                    
                    new_row = [program, compiler, user_time_comp.group(1), system_time_comp.group(1), user_time_run.group(1), system_time_run.group(1)]
                    csv_writer.writerow(new_row) 
                    subprocess.run(["make", "clean", "-C", program_path, compiler_option], stdout=subprocess.PIPE,  stderr=subprocess.PIPE)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Run perf stat over a set of programs.')
    parser.add_argument('programs_dir', help='Path to the set of programs.')
    args = parser.parse_args()
    run_comparison(args.programs_dir)