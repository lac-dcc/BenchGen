#ifndef ex8_5
#define ex8_5
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
Array func10(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func11(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func22(ArrayParam* vars, int loopsFactor);
Array func23(ArrayParam* vars, int loopsFactor);
Array func12(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func24(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func25(ArrayParam* vars, int loopsFactor);
Array func26(ArrayParam* vars, int loopsFactor);
Array func27(ArrayParam* vars, int loopsFactor);
Array func16(ArrayParam* vars, int loopsFactor);
Array func13(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func17(ArrayParam* vars, int loopsFactor);
Array func4(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func5(ArrayParam* vars, int loopsFactor);
Array func18(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func19(ArrayParam* vars, int loopsFactor);
Array func20(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func21(ArrayParam* vars, int loopsFactor);
Array func14(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func7(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func8(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func9(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func15(ArrayParam* vars, int loopsFactor);
Array func2(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func1(ArrayParam* vars, const unsigned long PATH0, int loopsFactor);
Array func3(ArrayParam* vars, int loopsFactor);
#endif