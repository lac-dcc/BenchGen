#include "ex3.h" 
Array func4(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   if(PATH0 & 1) {
      Array array12;
      if (pCounter > 0) {
         array12 = vars->data[--pCounter];
      } else {
         array12.size = 750;
         array12.data = (unsigned int*)malloc(array12.size*sizeof(unsigned int));
         memset(array12.data, 0, array12.size*sizeof(unsigned int));
      }
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array12;
         Array array13 = func6(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         for (int i = 0; i < array12.size; i++) {
            if (array12.data[i] == 76) { 
               return array12;
            }
         }
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array12;
         params1.data[1] = array13;
         Array array14 = func7(&params1, loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array14.size > 0) {
            free(array14.data);
            array14.size = 0;
         }
         if (array13.size > 0) {
            free(array13.data);
            array13.size = 0;
         }
      }
      if (array12.size > 0) {
         free(array12.data);
         array12.size = 0;
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array12 = func5(&params0, loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array12.size > 0) {
         free(array12.data);
         array12.size = 0;
      }
   }
   Array array12;
   if (pCounter > 0) {
      array12 = vars->data[--pCounter];
   } else {
      array12.size = 584;
      array12.data = (unsigned int*)malloc(array12.size*sizeof(unsigned int));
      memset(array12.data, 0, array12.size*sizeof(unsigned int));
   }
   return array12;
}

