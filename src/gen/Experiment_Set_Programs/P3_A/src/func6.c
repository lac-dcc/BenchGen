#include "P3_A.h" 
array_t* func6(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array13;
   if (pCounter > 0) {
      array13 = vars->data[--pCounter];
      array13->refC++;
   } else {
      array13 = (array_t*)malloc(sizeof(array_t));
      array13->size = 862;
      array13->refC = 1;
      array13->data = (unsigned int*)malloc(array13->size*sizeof(unsigned int));
      memset(array13->data, 0, array13->size*sizeof(unsigned int));
   }
   for (int i = 0; i < array13->size; i++) {
      if (array13->data[i] == 96) { 
         return array13;
      }
   }
   return array13;
}

