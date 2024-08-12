#include "ex4.h" 
Array func5(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   if(PATH0 & 1) {
      Array array6;
      if (pCounter > 0) {
         array6 = vars->data[--pCounter];
      } else {
         array6.size = 808;
         array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
         memset(array6.data, 0, array6.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 78) { 
            return array6;
         }
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array6 = func10(&params0, rng(), loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
      Array array7;
      if (pCounter > 0) {
         array7 = vars->data[--pCounter];
      } else {
         array7.size = 739;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         memset(array7.data, 0, array7.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 26) { 
            return array6;
         }
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
   }
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (rand()%loopsFactor)/3 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      Array array6;
      if (pCounter > 0) {
         array6 = vars->data[--pCounter];
      } else {
         array6.size = 586;
         array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
         memset(array6.data, 0, array6.size*sizeof(unsigned int));
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
      unsigned int loop11 = 0;
      unsigned int loopLimit11 = (rand()%loopsFactor)/4 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array6;
         Array array7 = func13(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array7.size > 0) {
            free(array7.data);
            array7.size = 0;
         }
      }
   }
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array6 = func11(&params0, rng(), loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   return array6;
}

