#include "P2_SL.h" 
sortedlist_t* func15(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist12 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist12->n = 0;
   sortedlist12->root = NULL;
   return sortedlist12;
}

