#include "ex2.h" 
Array func8(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array5 = func15(&params0, rng(), loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   for (int i = 0; i < array5.size; i++) {
      if (array5.data[i] == 64) { 
         return array5;
      }
   }
   unsigned int loop28 = 0;
   unsigned int loopLimit28 = (rand()%loopsFactor)/3 + 1;
   for(; loop28 < loopLimit28; loop28++) {
      for (int i = 0; i < array5.size; i++) {
         array5.data[i]--;
      }
      for (int i = 0; i < array5.size; i++) {
         if (array5.data[i] == 87) { 
            return array5;
         }
      }
      if(PATH0 & 1) {
         Array array6;
         if (pCounter > 0) {
            array6 = vars->data[--pCounter];
         } else {
            array6.size = 856;
            array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
            memset(array6.data, 0, array6.size*sizeof(unsigned int));
         }
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array5;
         params1.data[1] = array6;
         Array array7 = func20(&params1, loopsFactor);
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
      }
      else {
         ArrayParam params1;
         params1.size = 1;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array5;
         Array array6 = func21(&params1, loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array6.size > 0) {
            free(array6.data);
            array6.size = 0;
         }
      }
   }
   ArrayParam params1;
   params1.size = 1;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array5;
   Array array6 = func16(&params1, loopsFactor);
   if (params1.size > 0) {
      free(params1.data);
      params1.size = 0;
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   return array6;
}

