#include "ex2.h" 
Array func12(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array6 = func17(&params0, loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   for (int i = 0; i < array6.size; i++) {
      if (array6.data[i] == 40) { 
         return array6;
      }
   }
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]--;
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 36) { 
            return array6;
         }
      }
   }
   ArrayParam params1;
   params1.size = 1;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array6;
   Array array7 = func18(&params1, loopsFactor);
   if (params1.size > 0) {
      free(params1.data);
      params1.size = 0;
   }
   if (array7.size > 0) {
      free(array7.data);
      array7.size = 0;
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   return array7;
}

