#include "ex8_4.h" 
Array func16(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array9;
   if (pCounter > 0) {
      array9 = vars->data[--pCounter];
      array9.refC++;
   } else {
      array9.size = 58;
      array9.refC = 1;
      array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
      memset(array9.data, 0, array9.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array9.size; i++) {
      array9.data[i]--;
   }
   for (int i = 0; i < array9.size; i++) {
      if (array9.data[i] == 93) { 
         return array9;
      }
   }
   return array9;
}

