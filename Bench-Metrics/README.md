# Benchmark Metrics

The Benchmark Metrics is a part of the project that collects metrics from widely-used benchmark collections, such as SPEC CPU and the LLVM Test Suite. These metrics are used to evaluate the quality of programs generated by our Benchmark Generator.

## Metrics Collected

We collect two types of metrics: dynamic and static.

- **Dynamic Metrics:**  We use the Linux performance tool (perf) to measure performance metrics from benchmarks at runtime.
- **Static Metrics:** We use an LLVM pass to extract MilePost GCC features from the benchmarks.


### Linux Perf

`Perf` is a performance analysis tool for Linux.

- The directory [LLVM-TestSuite-Perf](https://github.com/lac-dcc/BenchGen/tree/main/Bench-Metrics/LLVM-TestSuite-Perf) contains detailed information on extracting `perf` metrics for LLVM Test Suite benchmarks.
- The directory [Spec-Perf](https://github.com/lac-dcc/BenchGen/tree/main/Bench-Metrics/SPEC-Perf) contains detailed information on extracting `perf` metrics for SPEC CPU 2017 benchmarks.
- Also, the directory [Perf-Generic](https://github.com/lac-dcc/BenchGen/tree/main/Bench-Metrics/Perf-Generic) contains detailed information on extracting `perf` metrics for a generic set of programs.

You can find our Perf measures in this [sheet](https://docs.google.com/spreadsheets/d/1am40z-zQE-eRAPvXTr9_ebvCjsg6u3nGflNv9FHGdVo/edit?usp=sharing).

### MilePost GCC Features
Milepost GCC describe a set of features we can measure statically from programs, such structures counts and CFG information, these features provide us powerfull insights aboout the program behavior.
The method we used to extract these metrics will be described here soon.

You can find our MilePost Features measures in this [sheet](https://docs.google.com/spreadsheets/d/1j-T1jtHk2AGQxafabMxmEP_okLFXLHHsXgaTFG5cxtc/edit?usp=sharing).

## References and External Links

- [Linux Perf Wiki](https://perf.wiki.kernel.org/index.php/Main_Page)
- [SPEC CPU 2017](https://www.spec.org/cpu2017/)
- [Milepost](https://en.wikipedia.org/wiki/MILEPOST_GCC)
- [Our Perf Measures](https://docs.google.com/spreadsheets/d/1am40z-zQE-eRAPvXTr9_ebvCjsg6u3nGflNv9FHGdVo/edit?usp=sharing)
- [Our MP Features Measures](https://docs.google.com/spreadsheets/d/1j-T1jtHk2AGQxafabMxmEP_okLFXLHHsXgaTFG5cxtc/edit?usp=sharing)
