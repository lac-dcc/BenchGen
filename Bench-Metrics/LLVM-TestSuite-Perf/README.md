# Running Linux Perf Over LLVM Test-Suite Benchmarks

The current directory contains a Python script, _tsuite-perf.py_, that utilizes Linux Perf for profiling CPU performance of LLVM Test-Suite Benchmarks. 
Moreover, _tsuite-perf.py_ captures the `perf stat` output to generate a CSV file containing the data obtained during the execution.


### Dependencies

To run _tsuite-perf.py_, you will need:

| Dependency | Version   | Installation Link                                    |
|------------|-----------|------------------------------------------------------|
| llvm-lit        | >= 17.0.6   | [llvm-lit website](https://llvm.org/docs/CommandGuide/lit.html)|
| Linux Perf    | >= 5.4.2  | [Linux Perf website](https://perf.wiki.kernel.org/index.php/Main_Page)             |
| test-suite    | >= 17.0.6 | [Test-Suite website](https://llvm.org/docs/TestSuiteGuide.html)             |
| Python3    | >= 3.8.10  | [Python website](https://www.python.org)             |



## Usage

To run the script, you need to provide four essential inputs:
- **_bench_list_**: This should be a text file containing the paths of the benchmarks from test-suite build.
- **_lit-path_**: Path to your llvm-lit Installation.
- **_perf_events_**: Provide a text file listing the events to be measured by 'perf' during the execution.
- **_output_csv_**: Specify the name of the output CSV file that will be generated in the current working directory.

In the current directory you can find examples of a _perf_events_ and _bench_list_ inputs. 

Usage example:
`python3 tsuite-perf.py benchList.txt path/to/llvm-lit perfEvents.txt benchs-measures.csv`


## Details

The script _tsuite-perf.py_ uses the command `perf stat` to measure the events given as input. 
Therefore, _tsuite-perf.py_ executes the benchmarks separately, each benchmark is executed only once.
A log file will be generated containing the output of the executions, you can check if any errors occurred during the execution.
