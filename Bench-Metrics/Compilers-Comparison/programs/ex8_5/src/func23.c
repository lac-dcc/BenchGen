#include "ex8_5.h" 
Array func23(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array10;
   if (pCounter > 0) {
      array10 = vars->data[--pCounter];
      array10.refC++;
   } else {
      array10.size = 456;
      array10.refC = 1;
      array10.data = (unsigned int*)malloc(array10.size*sizeof(unsigned int));
      memset(array10.data, 0, array10.size*sizeof(unsigned int));
   }
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/4 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      for (int i = 0; i < array10.size; i++) {
         array10.data[i]++;
      }
   }
   for (int i = 0; i < array10.size; i++) {
      if (array10.data[i] == 29) { 
         return array10;
      }
   }
   return array10;
}

