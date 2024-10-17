#include "P2_A.h" 
array_t* func6(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array8;
   if (pCounter > 0) {
      array8 = vars->data[--pCounter];
      array8->refC++;
   } else {
      array8 = (array_t*)malloc(sizeof(array_t));
      array8->size = 929;
      array8->refC = 1;
      array8->data = (unsigned int*)malloc(array8->size*sizeof(unsigned int));
      memset(array8->data, 0, array8->size*sizeof(unsigned int));
   }
   return array8;
}

