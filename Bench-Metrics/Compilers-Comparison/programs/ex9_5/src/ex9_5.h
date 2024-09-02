#ifndef ex9_5
#define ex9_5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
   unsigned int* data;
   size_t size;
   size_t refC;
} Array;
typedef struct {
   Array* data;
   size_t size;
} ArrayParam;

unsigned long rng();
Array func0(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func2(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func11(ArrayParam* vars, int loopsFactor);
Array func14(ArrayParam* vars, int loopsFactor);
Array func8(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func15(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func12(ArrayParam* vars, int loopsFactor);
Array func5(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func16(ArrayParam* vars, int loopsFactor);
Array func13(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func9(ArrayParam* vars, int loopsFactor);
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func10(ArrayParam* vars, int loopsFactor);
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func7(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func4(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func1(ArrayParam* vars, int loopsFactor);
#endif