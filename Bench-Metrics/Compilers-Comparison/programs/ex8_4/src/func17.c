#include "ex8_4.h" 
Array func17(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array14;
   if (pCounter > 0) {
      array14 = vars->data[--pCounter];
      array14.refC++;
   } else {
      array14.size = 370;
      array14.refC = 1;
      array14.data = (unsigned int*)malloc(array14.size*sizeof(unsigned int));
      memset(array14.data, 0, array14.size*sizeof(unsigned int));
   }
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/3 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      for (int i = 0; i < array14.size; i++) {
         array14.data[i]++;
      }
   }
   for (int i = 0; i < array14.size; i++) {
      if (array14.data[i] == 91) { 
         return array14;
      }
   }
   return array14;
}

