import subprocess
import csv
import argparse
import os

perf_events = """cpu-cycles
instructions
cache-references
cache-misses
branch-instructions
branch-misses
page-faults
branch-loads
branch-load-misses
L1-dcache-loads
L1-dcache-load-misses
L1-dcache-stores
L1-dcache-store-misses
L1-dcache-prefetches
L1-dcache-prefetch-misses
L1-icache-loads
L1-icache-load-misses
L1-icache-prefetches
L1-icache-prefetch-misses
LLC-loads
LLC-load-misses
LLC-stores
LLC-store-misses
LLC-prefetch-misses
dTLB-loads
dTLB-load-misses
dTLB-stores
dTLB-store-misses
dTLB-prefetches
dTLB-prefetch-misses
iTLB-loads
iTLB-load-misses"""

def run_perf_stat(programs_dir, compiler, flags):
    os.makedirs('result', exist_ok=True)
    with open('result/results.csv', 'w', newline='') as csvfile:
        csv_writer = csv.writer(csvfile, delimiter=',')
        events_list = perf_events.strip().split('\n')
        csv_writer.writerow(["Program"] + events_list)
        if os.path.isdir(programs_dir):
            for program in os.listdir(programs_dir):
                program_path = os.path.join(programs_dir, program)
                executable_path = os.path.join(program_path, f'{program}_{compiler}')
                print(f'Compiling {program}...')
                subprocess.run(["make", "-C", program_path] + [f'CC={compiler}'] + ["CFLAGS="] + flags, stdout=subprocess.DEVNULL)
                if os.path.exists(executable_path):
                    print(f'Running {program}...')
                    perf_command = ["perf", "stat", "-o", "temp.txt", "-x,"]
                    perf_command += ["-e", ','.join(events_list), executable_path]
                    subprocess.run(perf_command, stdout=subprocess.DEVNULL)
                    with open('temp.txt', 'r') as perf_result:
                        perf_output = perf_result.read().strip()
                        perf_result_list = [program]
                        for line in perf_output.split('\n')[1:]:
                            if line.strip():
                                perf_result_list.append(line.split(',')[0].strip())
                        csv_writer.writerow(perf_result_list)
                    os.remove('temp.txt')
                    subprocess.run(["make", "-C", program_path, "clean"], stdout=subprocess.DEVNULL)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Run perf stat over a set of programs.')
    parser.add_argument('programs_dir', help='Path to the set of programs.')
    parser.add_argument('compiler', help='Compiler name or path.')
    parser.add_argument('-f', '--flags', nargs='*', help='Compiler Flags')
    args = parser.parse_args()
    flags = [f'-{flag}' for flag in args.flags] if args.flags else []
    run_perf_stat(args.programs_dir, args.compiler, flags)