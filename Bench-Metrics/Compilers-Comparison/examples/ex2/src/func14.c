#include "ex2.h" 
Array func14(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   unsigned int loop9 = 0;
   unsigned int loopLimit9 = (rand()%loopsFactor)/4 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      Array array6;
      if (pCounter > 0) {
         array6 = vars->data[--pCounter];
      } else {
         array6.size = 526;
         array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
         memset(array6.data, 0, array6.size*sizeof(unsigned int));
      }
      if(PATH0 & 1) {
      }
      else {
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 80) { 
            return array6;
         }
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
   }
   Array array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
   } else {
      array6.size = 956;
      array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
      memset(array6.data, 0, array6.size*sizeof(unsigned int));
   }
   return array6;
}

