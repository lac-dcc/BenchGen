#include "Experiment_Set_Programs/P5_SL.h" 
sortedlist_t* func1(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist119;
   if (pCounter > 0) {
      sortedlist119 = vars->data[--pCounter];
      sortedlist119->refC++;
   } else {
        sortedlist119 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
        sortedlist119->refC = 1;
        sortedlist119->n = 0;
        sortedlist119->root = NULL;
   }
   return sortedlist119;
}

