#include "ex2.h" 
Array func13(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
   } else {
      array5.size = 229;
      array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
      memset(array5.data, 0, array5.size*sizeof(unsigned int));
   }
   unsigned int loop6 = 0;
   unsigned int loopLimit6 = (rand()%loopsFactor)/3 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      for (int i = 0; i < array5.size; i++) {
         array5.data[i]--;
      }
      unsigned int loop7 = 0;
      unsigned int loopLimit7 = (rand()%loopsFactor)/4 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         Array array6;
         if (pCounter > 0) {
            array6 = vars->data[--pCounter];
         } else {
            array6.size = 421;
            array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
            memset(array6.data, 0, array6.size*sizeof(unsigned int));
         }
         if(PATH0 & 1) {
         }
         else {
         }
         for (int i = 0; i < array6.size; i++) {
            if (array6.data[i] == 84) { 
               return array6;
            }
         }
         if (array6.size > 0) {
            free(array6.data);
            array6.size = 0;
         }
      }
   }
   return array5;
}

