#include "P4_A.h" 
array_t* func4(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array9;
   if (pCounter > 0) {
      array9 = vars->data[--pCounter];
      array9->refC++;
   } else {
      array9 = (array_t*)malloc(sizeof(array_t));
      array9->size = 393;
      array9->refC = 1;
      array9->data = (unsigned int*)malloc(array9->size*sizeof(unsigned int));
      memset(array9->data, 0, array9->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      for (int i = 0; i < array9->size; i++) {
         array9->data[i]++;
      }
   }
   return array9;
}

