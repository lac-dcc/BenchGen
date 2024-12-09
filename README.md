# BenchGen

## Introduction

The BenchGen project aims to synthesize programs that are sufficiently expressive to stress-test computing systems, such as operating systems, compiler optimizations, memory allocation libraries and even computer architectures.
BenchGen implements an [L-System](https://en.wikipedia.org/wiki/L-system) to generate programs from a seed string and a set of production rules, enabling the creation of large programs through iterative expansion of the L-System. Additionally, our goal is for BenchGen to generate programs that are as similar as possible to widely used benchmarks, such as SPEC CPU 2017 and the LLVM Test Suite.
The program generator is entirely written in C++.

BenchGen project is financed by FAPEMIG and sponsored by Google.

## Generating a Program

### Building BenchGen

After cloning the repository, you can build the project by running the `make` command in the `src/gen` directory. Notice that CLANG++ is used as the default compiler.

```bash
git clone --recurse-submodules https://github.com/lac-dcc/BenchGen.git
cd src/gen
make
```

### Creating the Rules

To generate a program, you will need to create a file containing the [production rules](<https://en.wikipedia.org/wiki/Production_(computer_science)>) and a file containing the seed string to be used by the L-System.
You can find a set of examples in the directory `src/gen`. An example of production rules and seed string is:

**Production Rule**:

```txt
A = IF(A, new new new);
```

**Seed String**:

```txt
new CALL(new LOOP(A) new new new) contains
```

### Running BenchGen

To run BenchGen, you need to provide the following five parameters:

1. **Number of Iterations**
2. **Production Rules** (file containing the production rules)
3. **Seed String File** (file containing the seed string)
4. **Program Name**
5. **Variable Type**. (`array` or `sortedlist`)

An example of usage is:

```bash
./benchGen 1 productionRule.txt seedString.txt myProgram array
```

After that, BenchGen will generate a program with the following structure:

```
myProgram/
├── Makefile
├── README.md
└── src
    ├── func0.c
    ├── func1.c
    ├── func2.c
    ├── func3.c
    ├── func4.c
    ├── rng.c
    ├── myProgram.c
    └── myProgram.h
```

## Running a program

Generated programs have their own README. Here we have a simpler explanation.

Use the following command to compile a generated program:

```bash
make
```

And run a generated program with the following command:

```bash
./<program_name>
```
## Running a program with LLVM

Generated programs have their own README. Here we have a simpler explanation.

Use the following command to compile a generated program:

```bash
make llvm
```

And run a generated program with the following command:

```bash
./<program_name>
```

The Makefile will generate the programs in .ll format, which will be located in the ./ll directory.

Note: To confirm that the program is running correctly, simply check if it generates messages on stdout.

## Structure

There are two main directories in the project, `src` and `Bench-Metrics`:

[src](./src/): code components of BenchGen can be found in the `src` folder, each documented in their own directories. \
[Bench-Metrics](./Bench-Metrics): the Benchmark Metrics is a part of the project that collects metrics from benchmarks.

## Documentation

Visit our documentation avaliable [here](https://benchgen.github.io/index.html)

## Acknowledgements

The BenchGen project is financed by [FAPEMIG](http://www.fapemig.br/pt/) and Google. We appreciate their support and contributions to the development of this project.
