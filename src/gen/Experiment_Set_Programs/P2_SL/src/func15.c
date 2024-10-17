#include "P2_SL.h" 
sortedlist_t* func15(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist12;
   if (pCounter > 0) {
      sortedlist12 = vars->data[--pCounter];
      sortedlist12->refC++;
   } else {
        sortedlist12 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
        sortedlist12->refC = 1;
        sortedlist12->n = 0;
        sortedlist12->root = NULL;
   }
   return sortedlist12;
}

