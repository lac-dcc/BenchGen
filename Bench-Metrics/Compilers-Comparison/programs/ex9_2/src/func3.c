#include "ex9_2.h" 
Array func3(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array11;
   if (pCounter > 0) {
      array11 = vars->data[--pCounter];
      array11.refC++;
   } else {
      array11.size = 537;
      array11.refC = 1;
      array11.data = (unsigned int*)malloc(array11.size*sizeof(unsigned int));
      memset(array11.data, 0, array11.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array11.size; i++) {
      array11.data[i]++;
   }
   for (int i = 0; i < array11.size; i++) {
      if (array11.data[i] == 15) { 
         return array11;
      }
   }
   for (int i = 0; i < array11.size; i++) {
      array11.data[i]--;
   }
   return array11;
}

