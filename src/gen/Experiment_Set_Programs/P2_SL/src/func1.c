#include "P2_SL.h" 
sortedlist_t* func1(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist123 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist123->n = 0;
   sortedlist123->root = NULL;
   return sortedlist123;
}

