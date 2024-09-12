# Running Linux Perf Over Generic Programs

The current directory contains a Python script, _runPerf.py_, that utilizes Linux Perf for profiling CPU performance of a generic set of program. 
Moreover, _runPerf.py_ captures the `perf stat` output to generate a CSV file containing the data obtained during the execution.

### Dependencies

To run __runPerf.py_, you will need:

| Dependency | Version   | Installation Link                                    |
|------------|-----------|------------------------------------------------------|
| Linux Perf    | >= 5.4.2  | [Linux Perf website](https://perf.wiki.kernel.org/index.php/Main_Page)             |
| Python3    | >= 3.8.10  | [Python website](https://www.python.org)             |


## Usage

To run the script, you need to provide four essential inputs:
- **programs_dir**: A path containing the programs you want to run.
- **_compiler_path_**: The compiler path you want to use to compile the programs.
- **_compiler_flags_ (Optional)**: Compiler flags.
