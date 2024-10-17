#include "P2_A.h" 
array_t* func1(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array26;
   if (pCounter > 0) {
      array26 = vars->data[--pCounter];
      array26->refC++;
   } else {
      array26 = (array_t*)malloc(sizeof(array_t));
      array26->size = 301;
      array26->refC = 1;
      array26->data = (unsigned int*)malloc(array26->size*sizeof(unsigned int));
      memset(array26->data, 0, array26->size*sizeof(unsigned int));
   }
   return array26;
}

