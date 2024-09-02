#include "ex8_5.h" 
Array func16(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array22;
   if (pCounter > 0) {
      array22 = vars->data[--pCounter];
      array22.refC++;
   } else {
      array22.size = 808;
      array22.refC = 1;
      array22.data = (unsigned int*)malloc(array22.size*sizeof(unsigned int));
      memset(array22.data, 0, array22.size*sizeof(unsigned int));
   }
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/3 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      for (int i = 0; i < array22.size; i++) {
         if (array22.data[i] == 78) { 
            return array22;
         }
      }
   }
   for (int i = 0; i < array22.size; i++) {
      array22.data[i]--;
   }
   for (int i = 0; i < array22.size; i++) {
      if (array22.data[i] == 3) { 
         return array22;
      }
   }
   return array22;
}

