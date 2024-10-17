#include "P5_A.h" 
array_t* func6(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array10;
   if (pCounter > 0) {
      array10 = vars->data[--pCounter];
      array10->refC++;
   } else {
      array10 = (array_t*)malloc(sizeof(array_t));
      array10->size = 42;
      array10->refC = 1;
      array10->data = (unsigned int*)malloc(array10->size*sizeof(unsigned int));
      memset(array10->data, 0, array10->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      for (int i = 0; i < array10->size; i++) {
         array10->data[i]++;
      }
   }
   return array10;
}

