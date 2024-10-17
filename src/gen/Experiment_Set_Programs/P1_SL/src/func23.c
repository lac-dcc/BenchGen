#include "Experiment_Set_Programs/P1_SL.h" 
sortedlist_t* func23(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist15;
   if (pCounter > 0) {
      sortedlist15 = vars->data[--pCounter];
      sortedlist15->refC++;
   } else {
        sortedlist15 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
        sortedlist15->refC = 1;
        sortedlist15->n = 0;
        sortedlist15->root = NULL;
   }
   return sortedlist15;
}

