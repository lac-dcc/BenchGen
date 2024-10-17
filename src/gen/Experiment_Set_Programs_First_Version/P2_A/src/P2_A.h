#ifndef P2_A
#define P2_A
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
   unsigned int* data;
   size_t size;
   size_t refC;
} array_t;
typedef struct {
   array_t** data;
   size_t size;
} array_t_param;

unsigned long rng();
array_t* func5(array_t_param* vars, const unsigned long PATH0, int loopsFactor);
array_t* func2(array_t_param* vars, int loopsFactor);
array_t* func6(array_t_param* vars, int loopsFactor);
array_t* func3(array_t_param* vars, int loopsFactor);
array_t* func7(array_t_param* vars, int loopsFactor);
array_t* func4(array_t_param* vars, const unsigned long PATH0, int loopsFactor);
array_t* func0(array_t_param* vars, int loopsFactor);
array_t* func1(array_t_param* vars, int loopsFactor);
#endif