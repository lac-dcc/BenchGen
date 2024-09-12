import subprocess
import os
import argparse
import sys
import csv

def get_program_size(program) -> int:
    size_result : subprocess.CompletedProcess = subprocess.run(f"size {program}", shell=True, capture_output=True, text=True)
    if size_result.returncode != 0:
        print(f"Error in {program}")
        sys.exit(1)
    size_str = size_result.stdout.split('\n')[1].split('\t')
    return int(size_str[0])

def generate_size_table(programs_path):
    with open("sizes.csv", 'w', newline='') as csvfile:
        csv_writer = csv.writer(csvfile, delimiter=',')
        csv_writer.writerow(["File", "Size"])
        for program in os.listdir(programs_path):
            csv_writer.writerow([program, get_program_size(os.path.join(programs_path, program))])

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Run "size" for multiple programs and create a CSV report.')
    parser.add_argument('programs_path', help='Path to the programs.')
    args = parser.parse_args()
    generate_size_table(args.programs_path)