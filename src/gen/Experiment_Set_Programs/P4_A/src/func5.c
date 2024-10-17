#include "P4_A.h" 
array_t* func5(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array20;
   if (pCounter > 0) {
      array20 = vars->data[--pCounter];
      array20->refC++;
   } else {
      array20 = (array_t*)malloc(sizeof(array_t));
      array20->size = 364;
      array20->refC = 1;
      array20->data = (unsigned int*)malloc(array20->size*sizeof(unsigned int));
      memset(array20->data, 0, array20->size*sizeof(unsigned int));
   }
   for (int i = 0; i < array20->size; i++) {
      if (array20->data[i] == 50) { 
         return array20;
      }
   }
   return array20;
}

