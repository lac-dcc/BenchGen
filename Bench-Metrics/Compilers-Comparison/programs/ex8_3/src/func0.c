#include "ex8_3.h" 
Array func0(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
      array1.refC++;
   } else {
      array1.size = 386;
      array1.refC = 1;
      array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
      memset(array1.data, 0, array1.size*sizeof(unsigned int));
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      if(PATH0 & 1) {
         Array array2;
         if (pCounter > 0) {
            array2 = vars->data[--pCounter];
            array2.refC++;
         } else {
            array2.size = 492;
            array2.refC = 1;
            array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
            memset(array2.data, 0, array2.size*sizeof(unsigned int));
         }
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            for (int i = 0; i < array2.size; i++) {
               array2.data[i]--;
            }
            for (int i = 0; i < array2.size; i++) {
               if (array2.data[i] == 62) { 
                  return array2;
               }
            }
         }
         ArrayParam params0;
         params0.size = 2;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array1;
         params0.data[1] = array2;
         Array array3 = func10(&params0, rng(), loopsFactor);
         free(params0.data);
         array3.refC--;
         if(array3.refC == 0) {
            free(array3.data);
         }
         array2.refC--;
         if(array2.refC == 0) {
            free(array2.data);
         }
      }
      else {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array1;
         Array array10 = func4(&params0, loopsFactor);
         free(params0.data);
         array10.refC--;
         if(array10.refC == 0) {
            free(array10.data);
         }
      }
      Array array12;
      if (pCounter > 0) {
         array12 = vars->data[--pCounter];
         array12.refC++;
      } else {
         array12.size = 537;
         array12.refC = 1;
         array12.data = (unsigned int*)malloc(array12.size*sizeof(unsigned int));
         memset(array12.data, 0, array12.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array1;
      params0.data[1] = array12;
      Array array13 = func5(&params0, loopsFactor);
      free(params0.data);
      if(PATH0 & 2) {
         Array array16;
         if (pCounter > 0) {
            array16 = vars->data[--pCounter];
            array16.refC++;
         } else {
            array16.size = 170;
            array16.refC = 1;
            array16.data = (unsigned int*)malloc(array16.size*sizeof(unsigned int));
            memset(array16.data, 0, array16.size*sizeof(unsigned int));
         }
         unsigned int loop5 = 0;
         unsigned int loopLimit5 = (rand()%loopsFactor)/3 + 1;
         for(; loop5 < loopLimit5; loop5++) {
            for (int i = 0; i < array1.size; i++) {
               array1.data[i]--;
            }
            for (int i = 0; i < array12.size; i++) {
               if (array12.data[i] == 5) { 
                  return array12;
               }
            }
         }
         array16.refC--;
         if(array16.refC == 0) {
            free(array16.data);
         }
      }
      else {
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array1;
         params1.data[1] = array12;
         params1.data[2] = array13;
         Array array17 = func14(&params1, loopsFactor);
         free(params1.data);
         array17.refC--;
         if(array17.refC == 0) {
            free(array17.data);
         }
      }
      for (int i = 0; i < array1.size; i++) {
         if (array1.data[i] == 95) { 
            return array1;
         }
      }
      array13.refC--;
      if(array13.refC == 0) {
         free(array13.data);
      }
      array12.refC--;
      if(array12.refC == 0) {
         free(array12.data);
      }
   }
   return array1;
}

