'''
This script is designed to run Linux's 'perf stat' over SPEC CPU 2017 'run cpu' command.
Also, it will execute the 'run cpu' command using the 'train' size, and it will perform only one iteration.

To run the script, you need to provide four essential inputs:

    file_list: This should be a text file containing the names of the benchmarks 
        for which the 'runcpu' command will be executed.

    config_file: Specify the name of the configuration file to be used during 
        the 'runcpu' execution. This file must be located within the 'config' 
        folder of your SPEC installation.

    perf_events: Provide a text file listing the events to be measured by 'perf' 
        during the execution.

    output_csv: Specify the name of the output CSV file that will be generated 
        in the current working directory.

In the current directory, there are examples provided for the 'file_list' and 'perf_events' inputs: benchs.txt and events.txt, respectively. 

Before executing this script, ensure that the 'runcpu' command is available in your system's PATH. 
Additionally, make sure that the SPEC paths are properly configured by running the 'shrc' script,
provided by SPEC.

A paper analyzing similar results by using Linux Perf over SPEC 2017 can be found here:
https://tosiron.com/papers/2018/SPEC2017_ISPASS18.pdf
'''

import subprocess
import csv
import argparse
import os

def run_perf_stat(file_list, config_file, perf_events, output_csv):
    with open(output_csv, 'w', newline='') as csvfile:
        csv_writer = csv.writer(csvfile, delimiter=',')
        with open(perf_events, 'r') as event_file:
            events_list = event_file.read().strip().split('\n')
        # Write header to CSV
        csv_writer.writerow(["File"] + events_list)
        with open(file_list, 'r') as file_list:
            for file_name in file_list:
                file_name = file_name.strip() 
                # Define the perf stat command 
                perf_command = f"perf stat -o temp.txt -x, -e {','.join(events_list)} runcpu --config={config_file} --size=train --iterations=1 {file_name}"
                try:
                    print(f"Running {file_name}...")
                    result = subprocess.check_output(perf_command, shell=True, stderr=subprocess.STDOUT, text=True)
                except subprocess.CalledProcessError as e:
                    print(f"Error running perf stat for {file_name}: {e.output}")
                with open('temp.txt', 'r') as perf_result:
                    perf_output = perf_result.read().strip()
                    perf_result = [file_name]
                    for line in perf_output.split('\n')[1:]:
                        if(line.strip()):
                            perf_result.append(line.split(',')[0].strip())
                    csv_writer.writerow(perf_result)
                os.remove('temp.txt')

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Run perf stat for multiple files and create a CSV report.')
    parser.add_argument('file_list', help='List of file names to run runcpu on.')
    parser.add_argument('config_file', help='Path to the SPEC CPU config file.')
    parser.add_argument('perf_events', help='File with the list of Metrics you are intrested to capture.')
    parser.add_argument('output_csv', help='Output CSV file.')
    args = parser.parse_args()
    # Run perf stat for each file in the list and write results to CSV
    run_perf_stat(args.file_list, args.config_file, args.perf_events, args.output_csv)
