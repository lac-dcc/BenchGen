#include "P2_A.h" 
array_t* func3(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array11;
   if (pCounter > 0) {
      array11 = vars->data[--pCounter];
      array11->refC++;
   } else {
      array11 = (array_t*)malloc(sizeof(array_t));
      array11->size = 537;
      array11->refC = 1;
      array11->data = (unsigned int*)malloc(array11->size*sizeof(unsigned int));
      memset(array11->data, 0, array11->size*sizeof(unsigned int));
   }
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      for (int i = 0; i < array11->size; i++) {
         array11->data[i]--;
      }
   }
   for (int i = 0; i < array11->size; i++) {
      array11->data[i]++;
   }
   for (int i = 0; i < array11->size; i++) {
      if (array11->data[i] == 70) { 
         return array11;
      }
   }
   for (int i = 0; i < array11->size; i++) {
      array11->data[i]--;
   }
   return array11;
}

