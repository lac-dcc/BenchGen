#include "teste.h" 
array_t* func1(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array12;
   if (pCounter > 0) {
      array12 = vars->data[--pCounter];
      array12->refC++;
   } else {
      array12 = (array_t*)malloc(sizeof(array_t));
      array12->size = 315;
      array12->refC = 1;
      array12->data = (unsigned int*)malloc(array12->size*sizeof(unsigned int));
      memset(array12->data, 0, array12->size*sizeof(unsigned int));
   }
   for (int i = 0; i < array12->size; i++) {
      if (array12->data[i] == 13) { 
         return array12;
      }
   }
   return array12;
}

