#include "ex8_2.h" 
Array func5(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array7;
   if (pCounter > 0) {
      array7 = vars->data[--pCounter];
      array7.refC++;
   } else {
      array7.size = 530;
      array7.refC = 1;
      array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
      memset(array7.data, 0, array7.size*sizeof(unsigned int));
   }
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      for (int i = 0; i < array7.size; i++) {
         array7.data[i]++;
      }
   }
   for (int i = 0; i < array7.size; i++) {
      if (array7.data[i] == 67) { 
         return array7;
      }
   }
   return array7;
}

