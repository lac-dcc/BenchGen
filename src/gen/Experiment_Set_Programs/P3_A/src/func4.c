#include "P3_A.h" 
array_t* func4(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
      array4->refC++;
   } else {
      array4 = (array_t*)malloc(sizeof(array_t));
      array4->size = 690;
      array4->refC = 1;
      array4->data = (unsigned int*)malloc(array4->size*sizeof(unsigned int));
      memset(array4->data, 0, array4->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/4 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      for (int i = 0; i < array4->size; i++) {
         array4->data[i]++;
      }
   }
   unsigned int loop4 = 0;
   unsigned int loopLimit4 = (rand()%loopsFactor)/4 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      for (int i = 0; i < array4->size; i++) {
         array4->data[i]++;
      }
   }
   return array4;
}

