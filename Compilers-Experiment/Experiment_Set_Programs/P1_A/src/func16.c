#include "P1_A.h" 
array_t* func16(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array27;
   if (pCounter > 0) {
      array27 = vars->data[--pCounter];
      array27->refC++;
   } else {
      array27 = (array_t*)malloc(sizeof(array_t));
      array27->size = 570;
      array27->refC = 1;
      array27->data = (unsigned int*)malloc(array27->size*sizeof(unsigned int));
      memset(array27->data, 0, array27->size*sizeof(unsigned int));
   }
   for (int i = 0; i < array27->size; i++) {
      if (array27->data[i] == 78) { 
         return array27;
      }
   }
   return array27;
}

