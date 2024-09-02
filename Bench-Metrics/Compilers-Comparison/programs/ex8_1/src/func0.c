#include "ex8_1.h" 
Array func0(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
      array1.refC++;
   } else {
      array1.size = 386;
      array1.refC = 1;
      array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
      memset(array1.data, 0, array1.size*sizeof(unsigned int));
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      for (int i = 0; i < array1.size; i++) {
         if (array1.data[i] == 49) { 
            return array1;
         }
      }
   }
   return array1;
}

