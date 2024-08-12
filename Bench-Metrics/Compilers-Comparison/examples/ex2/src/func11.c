#include "ex2.h" 
Array func11(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array7;
   if (pCounter > 0) {
      array7 = vars->data[--pCounter];
   } else {
      array7.size = 444;
      array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
      memset(array7.data, 0, array7.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array7;
   Array array8 = func15(&params0, rng(), loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   for (int i = 0; i < array7.size; i++) {
      if (array7.data[i] == 65) { 
         return array7;
      }
   }
   unsigned int loop42 = 0;
   unsigned int loopLimit42 = (rand()%loopsFactor)/2 + 1;
   for(; loop42 < loopLimit42; loop42++) {
      for (int i = 0; i < array7.size; i++) {
         array7.data[i]--;
      }
      for (int i = 0; i < array7.size; i++) {
         if (array7.data[i] == 82) { 
            return array7;
         }
      }
      if(PATH0 & 1) {
         Array array9;
         if (pCounter > 0) {
            array9 = vars->data[--pCounter];
         } else {
            array9.size = 258;
            array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
            memset(array9.data, 0, array9.size*sizeof(unsigned int));
         }
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array7;
         params1.data[1] = array8;
         params1.data[2] = array9;
         Array array10 = func20(&params1, loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array10.size > 0) {
            free(array10.data);
            array10.size = 0;
         }
         if (array9.size > 0) {
            free(array9.data);
            array9.size = 0;
         }
      }
      else {
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array7;
         params1.data[1] = array8;
         Array array9 = func21(&params1, loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array9.size > 0) {
            free(array9.data);
            array9.size = 0;
         }
      }
   }
   ArrayParam params1;
   params1.size = 2;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array7;
   params1.data[1] = array8;
   Array array9 = func16(&params1, loopsFactor);
   if (params1.size > 0) {
      free(params1.data);
      params1.size = 0;
   }
   if (array9.size > 0) {
      free(array9.data);
      array9.size = 0;
   }
   if (array8.size > 0) {
      free(array8.data);
      array8.size = 0;
   }
   return array9;
}

