#include "P2_A.h" 
array_t* func7(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array15;
   if (pCounter > 0) {
      array15 = vars->data[--pCounter];
      array15->refC++;
   } else {
      array15 = (array_t*)malloc(sizeof(array_t));
      array15->size = 327;
      array15->refC = 1;
      array15->data = (unsigned int*)malloc(array15->size*sizeof(unsigned int));
      memset(array15->data, 0, array15->size*sizeof(unsigned int));
   }
   for (int i = 0; i < array15->size; i++) {
      if (array15->data[i] == 5) { 
         return array15;
      }
   }
   return array15;
}
