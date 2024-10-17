#ifndef P4_SL
#define P4_SL
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct cell_t {
     struct cell_t* next;
     unsigned int val;
} cell_t;
typedef struct sortedlist_t {
     cell_t* root;
     unsigned int n;
} sortedlist_t;
typedef struct {
   sortedlist_t** data;
   size_t size;
} sortedlist_t_param;

unsigned long rng();
sortedlist_t* func6(sortedlist_t_param* vars, int loopsFactor);
sortedlist_t* func3(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor);
sortedlist_t* func7(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor);
sortedlist_t* func0(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor);
sortedlist_t* func8(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor);
sortedlist_t* func4(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor);
sortedlist_t* func5(sortedlist_t_param* vars, int loopsFactor);
sortedlist_t* func1(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor);
sortedlist_t* func2(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor);
#endif