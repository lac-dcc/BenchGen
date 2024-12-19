import subprocess
import csv
import argparse
import os
def run_pass(dir_path, output_name):
    os.makedirs('partial_results', exist_ok=True)
    if os.path.isdir(dir_path):
        for program in os.listdir(dir_path):
            program_path = os.path.join(dir_path, program)
            executable_path = os.path.join(program_path, f'{program}_clang.bc')
            print(f'Compiling {program}...')
            subprocess.run(["make", "-C", program_path] + [f'CC=clang'], stdout=subprocess.DEVNULL)
            if os.path.exists(executable_path):
                print(f'Running for {program}...')
                subprocess.run(f"opt -load-pass-plugin ./MP-Pass/libCGAnalyzer.so -passes=\"fExtractor\" -disable-output {executable_path} 2> partial_results/{program}.csv", shell=True)
                subprocess.run(["make", "-C", program_path, "clean", f"CC=clang"], stdout=subprocess.DEVNULL)
        print("Creating final table...")
        subprocess.run(['python3', 'mergeTable.py', './partial_results', output_name])
if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Run Feature Extractor over the programs') 
    parser.add_argument('dir_path', help='Directory with the programs you are intrested to run.')
    parser.add_argument('output_name', help='Name of output csv.')
    args = parser.parse_args()
    run_pass(args.dir_path, args.output_name)