#include "P3_A.h" 
array_t* func5(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array8;
   if (pCounter > 0) {
      array8 = vars->data[--pCounter];
      array8->refC++;
   } else {
      array8 = (array_t*)malloc(sizeof(array_t));
      array8->size = 135;
      array8->refC = 1;
      array8->data = (unsigned int*)malloc(array8->size*sizeof(unsigned int));
      memset(array8->data, 0, array8->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop9 = 0;
   unsigned int loopLimit9 = (rand()%loopsFactor)/3 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      for (int i = 0; i < array8->size; i++) {
         array8->data[i]++;
      }
   }
   return array8;
}

