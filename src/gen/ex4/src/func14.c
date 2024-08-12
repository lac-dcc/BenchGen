#include "ex4.h" 
Array func14(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
   } else {
      array6.size = 135;
      array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
      memset(array6.data, 0, array6.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array6.size; i++) {
      array6.data[i]++;
   }
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/2 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]--;
      }
   }
   for (int i = 0; i < array6.size; i++) {
      array6.data[i]--;
   }
   for (int i = 0; i < array6.size; i++) {
      if (array6.data[i] == 69) { 
         return array6;
      }
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   return array6;
}

