#include "P5_A.h" 
array_t* func5(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
      array4->refC++;
   } else {
      array4 = (array_t*)malloc(sizeof(array_t));
      array4->size = 59;
      array4->refC = 1;
      array4->data = (unsigned int*)malloc(array4->size*sizeof(unsigned int));
      memset(array4->data, 0, array4->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop2 = 0;
   unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      for (int i = 0; i < array4->size; i++) {
         array4->data[i]++;
      }
   }
   for (int i = 0; i < array4->size; i++) {
      if (array4->data[i] == 40) { 
         return array4;
      }
   }
   if(PATH0 & 2) {
   }
   else {
   }
   for (int i = 0; i < array4->size; i++) {
      array4->data[i]--;
   }
   for (int i = 0; i < array4->size; i++) {
      if (array4->data[i] == 36) { 
         return array4;
      }
   }
   return array4;
}

