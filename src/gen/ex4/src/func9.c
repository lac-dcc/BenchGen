#include "ex4.h" 
Array func9(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   if(PATH0 & 1) {
      Array array6;
      if (pCounter > 0) {
         array6 = vars->data[--pCounter];
      } else {
         array6.size = 980;
         array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
         memset(array6.data, 0, array6.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 73) { 
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
      Array array6 = func12(&params0, loopsFactor);
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
         array7.size = 170;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         memset(array7.data, 0, array7.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 81) { 
            return array6;
         }
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
   }
   unsigned int loop6 = 0;
   unsigned int loopLimit6 = (rand()%loopsFactor)/4 + 1;
   for(; loop6 < loopLimit6; loop6++) {
   }
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array6 = func14(&params0, loopsFactor);
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

