#include "ex2.h" 
Array func16(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
   } else {
      array6.size = 364;
      array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
      memset(array6.data, 0, array6.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array6;
   Array array7 = func17(&params0, loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   for (int i = 0; i < array6.size; i++) {
      if (array6.data[i] == 87) { 
         return array6;
      }
   }
   unsigned int loop13 = 0;
   unsigned int loopLimit13 = (rand()%loopsFactor)/3 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]--;
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 78) { 
            return array6;
         }
      }
   }
   ArrayParam params1;
   params1.size = 2;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array6;
   params1.data[1] = array7;
   Array array8 = func18(&params1, loopsFactor);
   if (params1.size > 0) {
      free(params1.data);
      params1.size = 0;
   }
   if (array8.size > 0) {
      free(array8.data);
      array8.size = 0;
   }
   if (array7.size > 0) {
      free(array7.data);
      array7.size = 0;
   }
   return array6;
}

