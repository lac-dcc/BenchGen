#ifndef tmpaeyzc_i_
#define tmpaeyzc_i_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef DEBUG
    #define DEBUG_NEW(id) printf("[NEW]\t\tId %d created\n", id)
    #define DEBUG_COPY(id) printf("[COPY]\t\tId %d copied\n", id)
    #define DEBUG_RETURN(id) printf("[RETURN]\tId %d returned\n", id)
    #define DEBUG_FREE(id) printf("[FREE]\t\tId %d freed\n", id)
#else
    #define DEBUG_NEW(id)
    #define DEBUG_COPY(id)
    #define DEBUG_RETURN(id)
    #define DEBUG_FREE(id)
#endif
#ifdef COUNT
    #define COUNT_INSERT() printf("insert\n")
    #define COUNT_REMOVE() printf("remove\n")
    #define COUNT_CONTAINS() printf("contains\n")
#else
    #define COUNT_INSERT()
    #define COUNT_REMOVE()
    #define COUNT_CONTAINS()
#endif
#include <stdbool.h>
#include <glib.h>
typedef struct ghash_t {
     GHashTable* hash;
     size_t refC;
     int id;
} ghash_t;
typedef struct {
   ghash_t** data;
   size_t size;
} ghash_t_param;

unsigned long get_path();
int rng();
ghash_t* func0(ghash_t_param* vars, int loopsFactor);
ghash_t* func1(ghash_t_param* vars, int loopsFactor);
ghash_t* func2(ghash_t_param* vars, int loopsFactor);
ghash_t* func3(ghash_t_param* vars, int loopsFactor);
#endif