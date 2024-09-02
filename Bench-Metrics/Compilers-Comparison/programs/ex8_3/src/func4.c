#include "ex8_3.h" 
Array func4(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array11;
   if (pCounter > 0) {
      array11 = vars->data[--pCounter];
      array11.refC++;
   } else {
      array11.size = 11;
      array11.refC = 1;
      array11.data = (unsigned int*)malloc(array11.size*sizeof(unsigned int));
      memset(array11.data, 0, array11.size*sizeof(unsigned int));
   }
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      for (int i = 0; i < array11.size; i++) {
         if (array11.data[i] == 29) { 
            return array11;
         }
      }
   }
   for (int i = 0; i < array11.size; i++) {
      array11.data[i]--;
   }
   for (int i = 0; i < array11.size; i++) {
      if (array11.data[i] == 19) { 
         return array11;
      }
   }
   return array11;
}

