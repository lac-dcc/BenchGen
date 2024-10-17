#include "P5_A.h" 
array_t* func1(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array56;
   if (pCounter > 0) {
      array56 = vars->data[--pCounter];
      array56->refC++;
   } else {
      array56 = (array_t*)malloc(sizeof(array_t));
      array56->size = 840;
      array56->refC = 1;
      array56->data = (unsigned int*)malloc(array56->size*sizeof(unsigned int));
      memset(array56->data, 0, array56->size*sizeof(unsigned int));
   }
   return array56;
}

