#include "ex8_2.h" 
Array func2(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array18;
   if (pCounter > 0) {
      array18 = vars->data[--pCounter];
      array18.refC++;
   } else {
      array18.size = 505;
      array18.refC = 1;
      array18.data = (unsigned int*)malloc(array18.size*sizeof(unsigned int));
      memset(array18.data, 0, array18.size*sizeof(unsigned int));
   }
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      for (int i = 0; i < array18.size; i++) {
         if (array18.data[i] == 29) { 
            return array18;
         }
      }
   }
   for (int i = 0; i < array18.size; i++) {
      array18.data[i]--;
   }
   for (int i = 0; i < array18.size; i++) {
      if (array18.data[i] == 24) { 
         return array18;
      }
   }
   return array18;
}

