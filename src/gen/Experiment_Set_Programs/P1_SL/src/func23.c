#include "P1_SL.h" 
sortedlist_t* func23(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist15 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist15->n = 0;
   sortedlist15->root = NULL;
   return sortedlist15;
}

