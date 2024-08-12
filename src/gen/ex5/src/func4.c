#include "ex5.h" 
Array func4(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
   } else {
      array6.size = 27;
      array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
      memset(array6.data, 0, array6.size*sizeof(unsigned int));
   }
   Array array7;
   if (pCounter > 0) {
      array7 = vars->data[--pCounter];
   } else {
      array7.size = 690;
      array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
      memset(array7.data, 0, array7.size*sizeof(unsigned int));
   }
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/6 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      for (int i = 0; i < array7.size; i++) {
         array7.data[i]--;
      }
   }
   if (array7.size > 0) {
      free(array7.data);
      array7.size = 0;
   }
   return array7;
}

