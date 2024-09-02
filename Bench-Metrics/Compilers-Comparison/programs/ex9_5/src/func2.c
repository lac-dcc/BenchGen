#include "ex9_5.h" 
Array func2(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
      array5.refC++;
   } else {
      array5.size = 736;
      array5.refC = 1;
      array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
      memset(array5.data, 0, array5.size*sizeof(unsigned int));
   }
   unsigned int loop2 = 0;
   unsigned int loopLimit2 = (rand()%loopsFactor)/2 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      for (int i = 0; i < array5.size; i++) {
         array5.data[i]--;
      }
   }
   Array array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
      array6.refC++;
   } else {
      array6.size = 368;
      array6.refC = 1;
      array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
      memset(array6.data, 0, array6.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop3 = 0;
      unsigned int loopLimit3 = (rand()%loopsFactor)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         Array array7;
         if (pCounter > 0) {
            array7 = vars->data[--pCounter];
            array7.refC++;
         } else {
            array7.size = 567;
            array7.refC = 1;
            array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
            memset(array7.data, 0, array7.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array5.size; i++) {
            array5.data[i]--;
         }
         for (int i = 0; i < array7.size; i++) {
            if (array7.data[i] == 30) { 
               return array7;
            }
         }
         array7.refC--;
         if(array7.refC == 0) {
            free(array7.data);
         }
      }
   }
   else {
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array5;
      params0.data[1] = array6;
      Array array8 = func11(&params0, loopsFactor);
      free(params0.data);
      array8.refC--;
      if(array8.refC == 0) {
         free(array8.data);
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array5;
   params0.data[1] = array6;
   Array array12 = func8(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      for (int i = 0; i < array5.size; i++) {
         array5.data[i]++;
      }
   }
   ArrayParam params1;
   params1.size = 3;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array5;
   params1.data[1] = array6;
   params1.data[2] = array12;
   Array array22 = func5(&params1, rng(), loopsFactor);
   free(params1.data);
   for (int i = 0; i < array22.size; i++) {
      if (array22.data[i] == 9) { 
         return array22;
      }
   }
   array12.refC--;
   if(array12.refC == 0) {
      free(array12.data);
   }
   array6.refC--;
   if(array6.refC == 0) {
      free(array6.data);
   }
   array5.refC--;
   if(array5.refC == 0) {
      free(array5.data);
   }
   return array22;
}

