#include "P1_A.h" 
array_t* func14(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array11;
   if (pCounter > 0) {
      array11 = vars->data[--pCounter];
      array11->refC++;
   } else {
      array11 = (array_t*)malloc(sizeof(array_t));
      array11->size = 456;
      array11->refC = 1;
      array11->data = (unsigned int*)malloc(array11->size*sizeof(unsigned int));
      memset(array11->data, 0, array11->size*sizeof(unsigned int));
   }
   return array11;
}

