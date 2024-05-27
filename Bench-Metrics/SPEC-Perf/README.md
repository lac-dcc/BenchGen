# Running Linux Perf Over SPEC CPU 2017 Benchmarks

The current directory contains a Python script, _spec_perf.py_, that utilizes Linux Perf for profiling CPU performance of SPEC CPU 2017 Benchmarks. 
Moreover, _spec_perf.py_ captures the `perf stat` output to generate a CSV file containing the data obtained during the execution.

## Requirements

To run _spec_perf.py_, you will need an installation of SPEC CPU 2017 available on your system. 
Hence, ensure that the `runcpu` command is available in your system's PATH. 
Additionally, make sure that the SPEC paths are **properly** configured by running the `shrc` script provided by SPEC, and you must have a configuration file for SPEC to use as input.

### Dependencies

To run __spec_perf.py_, you will need:

| Dependency | Version   | Installation Link                                    |
|------------|-----------|------------------------------------------------------|
| Linux Perf    | >= 5.4.2  | [Linux Perf website](https://perf.wiki.kernel.org/index.php/Main_Page)             |
| Python3    | >= 3.8.10  | [Python website](https://www.python.org)             |


## Usage

To run the script, you need to provide four essential inputs:
- **_file_list_**: This should be a text file containing the names of the benchmarks for which the `runcpu` command will be executed.
- **_config_file_**: Specify the name of the configuration file to be used during the `runcpu` execution. This file must be located within the _config_ folder of your SPEC installation.
- **_perf_events_**: Provide a text file listing the events to be measured by 'perf' during the execution.
- **_output_csv_**: Specify the name of the output CSV file that will be generated in the current working directory.

In the current directory you can find examples of a _perf_events_ and _file_list_ inputs. 

Usage example:
`python3 spec_perf.py benchs.txt myConfig events.txt myOutput.csv`


## Details

The script _spec_perf.py_ uses the command `perf stat` to measure the events given as input. 
To run the benchmarks, _spec_perf.py_ uses the command `runcpu` with the size _train_ (check it out in the SPEC documentation), with only one iteration. 
Therefore, _spec_perf.py_ executes the benchmarks separately, each benchmark is executed only once.

## References and External Links

- [Linux Perf Wiki](https://perf.wiki.kernel.org/index.php/Main_Page)
- SPEC CPU 2017 _runcpu_ [documentation](https://www.spec.org/cpu2017/Docs/runcpu.html)
- [Example of Results Obtained by this script](https://docs.google.com/spreadsheets/d/1bNtAY_j0wPFdN9hoHJHgonwYf9CIREU0H3PiAuO4SHE/edit?usp=sharing)
