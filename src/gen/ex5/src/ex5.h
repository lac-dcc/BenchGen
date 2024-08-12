#ifndef ex5
#define ex5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
   unsigned int* data;
   int size;
} Array;
typedef struct {
   Array* data;
   int size;
} ArrayParam;

unsigned long rng();
Array func0(ArrayParam* vars, int loopsFactor);
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func4(ArrayParam* vars, int loopsFactor);
Array func5(ArrayParam* vars, int loopsFactor);
Array func2(ArrayParam* vars, int loopsFactor);
Array func1(ArrayParam* vars, int loopsFactor);
#endif