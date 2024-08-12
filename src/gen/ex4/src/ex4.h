#ifndef ex4
#define ex4
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
Array func0(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func4(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func12(ArrayParam* vars, int loopsFactor);
Array func13(ArrayParam* vars, int loopsFactor);
Array func8(ArrayParam* vars, int loopsFactor);
Array func14(ArrayParam* vars, int loopsFactor);
Array func15(ArrayParam* vars, int loopsFactor);
Array func9(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func5(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func10(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func11(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func2(ArrayParam* vars, int loopsFactor);
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func1(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func7(ArrayParam* vars, int loopsFactor);
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
#endif