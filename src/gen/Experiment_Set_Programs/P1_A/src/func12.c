#include "P1_A.h" 
array_t* func12(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array17;
   if (pCounter > 0) {
      array17 = vars->data[--pCounter];
      array17->refC++;
   } else {
      array17 = (array_t*)malloc(sizeof(array_t));
      array17->size = 305;
      array17->refC = 1;
      array17->data = (unsigned int*)malloc(array17->size*sizeof(unsigned int));
      memset(array17->data, 0, array17->size*sizeof(unsigned int));
   }
   for (int i = 0; i < array17->size; i++) {
      array17->data[i]++;
   }
   for (int i = 0; i < array17->size; i++) {
      if (array17->data[i] == 27) { 
         return array17;
      }
   }
   for (int i = 0; i < array17->size; i++) {
      array17->data[i]--;
   }
   return array17;
}

