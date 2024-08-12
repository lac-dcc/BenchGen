#include "ex3.h" 
Array func1(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   if(PATH0 & 1) {
      Array array11;
      if (pCounter > 0) {
         array11 = vars->data[--pCounter];
      } else {
         array11.size = 336;
         array11.data = (unsigned int*)malloc(array11.size*sizeof(unsigned int));
         memset(array11.data, 0, array11.size*sizeof(unsigned int));
      }
      unsigned int loop4 = 0;
      unsigned int loopLimit4 = (rand()%loopsFactor)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array11;
         Array array12 = func3(&params0, rng(), loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         for (int i = 0; i < array12.size; i++) {
            if (array12.data[i] == 34) { 
               return array12;
            }
         }
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array11;
         params1.data[1] = array12;
         Array array13 = func2(&params1, loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array13.size > 0) {
            free(array13.data);
            array13.size = 0;
         }
         if (array12.size > 0) {
            free(array12.data);
            array12.size = 0;
         }
      }
      if (array11.size > 0) {
         free(array11.data);
         array11.size = 0;
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array11 = func4(&params0, rng(), loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array11.size > 0) {
         free(array11.data);
         array11.size = 0;
      }
   }
   Array array11;
   if (pCounter > 0) {
      array11 = vars->data[--pCounter];
   } else {
      array11.size = 651;
      array11.data = (unsigned int*)malloc(array11.size*sizeof(unsigned int));
      memset(array11.data, 0, array11.size*sizeof(unsigned int));
   }
   return array11;
}

