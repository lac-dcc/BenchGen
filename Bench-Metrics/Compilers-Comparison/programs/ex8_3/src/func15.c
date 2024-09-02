#include "ex8_3.h" 
Array func15(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array31;
   if (pCounter > 0) {
      array31 = vars->data[--pCounter];
      array31.refC++;
   } else {
      array31.size = 492;
      array31.refC = 1;
      array31.data = (unsigned int*)malloc(array31.size*sizeof(unsigned int));
      memset(array31.data, 0, array31.size*sizeof(unsigned int));
   }
   unsigned int loop9 = 0;
   unsigned int loopLimit9 = (rand()%loopsFactor)/2 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      for (int i = 0; i < array31.size; i++) {
         array31.data[i]++;
      }
   }
   for (int i = 0; i < array31.size; i++) {
      if (array31.data[i] == 1) { 
         return array31;
      }
   }
   return array31;
}

