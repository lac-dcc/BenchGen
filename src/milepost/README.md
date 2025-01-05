## GCC Milepost Features

Milepost is a set of 56 program features, introduced by [Fursin et al](https://ebonilla.github.io/papers/fursin-et-al-ijpp-2011.pdf).
These features include number of basic blocks, number of edges in the control flow graph, number of function calls, etc (see Table 2 in the original paper).
To collect the features, we have used the MilePost implementation available in the [YaCoS](https://homepages.dcc.ufmg.br/~fernando/publications/papers/ZanellaSBLP20.pdf) compiler.
The data that we report in this repository is the same data that we have used in two other papers to explore the space of compiler optimizations in clang, by [Faustino et al](https://homepages.dcc.ufmg.br/~fernando/publications/papers/FaustinoJCL22.pdf) and by [Damasio et al.](https://homepages.dcc.ufmg.br/~fernando/publications/papers/CGO23_ThaisDamasio.pdf)
See more about Milepost in [Milepost Wikipedia](https://en.wikipedia.org/wiki/MILEPOST_GCC).


## Building Milepost

Once in Milepost build directory (```$ cd src/milepost/build```):

1) Set the LLVM installation directory  ```$ LLVM_INSTALL_DIR=llvm_project_dir```

    usually ```/usr/lib/llvm-<x>``` (where ```x``` is the llvm version) on linux

2) Set Up the build: ```$ cmake -DLLVM_INSTALL_DIR=$LLVM_INSTALL_DIR -G "Build System" -B build/```
you can use _Ninja_ as Build System

3) Compile it: ```$ cd build``` and ```$ cmake --build .``` or ```$ ninja``` if using ninja as Build System.

## Running
1) Compile your program to llvm IR: ```$ clang++ -emit-llvm -S myprogram.cpp -o myprogram.ll```

    for programs generated with benchGen ```$ make llvm``` can generate all ```.ll``` files

2) Run the pass: ```opt -load-pass-plugin ../build/lib/libCGAnalyzer.so -passes "fExtractor" -disable-output myprogram.ll```
