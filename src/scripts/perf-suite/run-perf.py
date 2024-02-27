import subprocess
import csv
import argparse
import os

def run_perf_stat(bench_list, lit_path, perf_events, output_csv):
    with open(output_csv, 'w', newline='') as csvfile:
        csv_writer = csv.writer(csvfile, delimiter=',')
        with open(perf_events, 'r') as event_file:
            events_list = event_file.read().strip().split('\n')
        # Write header to CSV
        csv_writer.writerow(["File"] + events_list)
        with open(bench_list, 'r') as bench_list:
            for file_name in bench_list:
                file_name = file_name.strip() 
                # Define the perf stat command 
                perf_command = f"perf stat -o temp.txt -x, -e {','.join(events_list)} {lit_path} -j 1 {file_name}"
                try:
                    print(f"Running {file_name}...")
                    result = subprocess.check_output(perf_command, shell=True, stderr=subprocess.STDOUT, text=True)
                except subprocess.CalledProcessError as e:
                    print(f"Error running perf stat for {file_name}: {e.output}")
                with open('temp.txt', 'r') as perf_result:
                    perf_output = perf_result.read().strip()
                    file_name = file_name.split(sep="/").pop(-1)
                    perf_result = [file_name]
                    for line in perf_output.split('\n')[1:]:
                        if(line.strip()):
                            perf_result.append(line.split(',')[0].strip())
                    csv_writer.writerow(perf_result)
                os.remove('temp.txt')
                with open('log.txt', 'w') as log:
                    log.write(result)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Run perf stat for multiple files and create a CSV report.')
    parser.add_argument('bench_list', help='List of benchmarks to run.')
    parser.add_argument('lit_path', help='Path to the llvm-lit tool.')
    parser.add_argument('perf_events', help='File with the list of Metrics you are intrested to capture.')
    parser.add_argument('output_csv', help='Output CSV file.')
    args = parser.parse_args()
    # Run perf stat for each file in the list and write results to CSV
    run_perf_stat(args.bench_list, args.lit_path, args.perf_events, args.output_csv)
