#include "ex2.h" 
Array func10(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
   } else {
      array6.size = 139;
      array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
      memset(array6.data, 0, array6.size*sizeof(unsigned int));
   }
   unsigned int loop37 = 0;
   unsigned int loopLimit37 = (rand()%loopsFactor)/2 + 1;
   for(; loop37 < loopLimit37; loop37++) {
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]++;
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 69) { 
            return array6;
         }
      }
      if(PATH0 & 1) {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array6;
         Array array7 = func14(&params0, rng(), loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array7.size > 0) {
            free(array7.data);
            array7.size = 0;
         }
      }
      else {
         Array array7;
         if (pCounter > 0) {
            array7 = vars->data[--pCounter];
         } else {
            array7.size = 542;
            array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
            memset(array7.data, 0, array7.size*sizeof(unsigned int));
         }
         unsigned int loop38 = 0;
         unsigned int loopLimit38 = (rand()%loopsFactor)/3 + 1;
         for(; loop38 < loopLimit38; loop38++) {
            for (int i = 0; i < array6.size; i++) {
               array6.data[i]++;
            }
            for (int i = 0; i < array7.size; i++) {
               if (array7.data[i] == 7) { 
                  return array7;
               }
            }
            if(PATH0 & 2) {
               ArrayParam params0;
               params0.size = 2;
               params0.data = (Array*)malloc(params0.size*sizeof(Array));
               params0.data[0] = array6;
               params0.data[1] = array7;
               Array array8 = func19(&params0, loopsFactor);
               if (params0.size > 0) {
                  free(params0.data);
                  params0.size = 0;
               }
               if (array8.size > 0) {
                  free(array8.data);
                  array8.size = 0;
               }
            }
            else {
            }
         }
         if (array7.size > 0) {
            free(array7.data);
            array7.size = 0;
         }
      }
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   return array6;
}

