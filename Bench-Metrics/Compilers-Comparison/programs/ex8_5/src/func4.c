#include "ex8_5.h" 
Array func4(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array32;
   if (pCounter > 0) {
      array32 = vars->data[--pCounter];
      array32.refC++;
   } else {
      array32.size = 444;
      array32.refC = 1;
      array32.data = (unsigned int*)malloc(array32.size*sizeof(unsigned int));
      memset(array32.data, 0, array32.size*sizeof(unsigned int));
   }
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (rand()%loopsFactor)/3 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      if(PATH0 & 1) {
         Array array33;
         if (pCounter > 0) {
            array33 = vars->data[--pCounter];
            array33.refC++;
         } else {
            array33.size = 619;
            array33.refC = 1;
            array33.data = (unsigned int*)malloc(array33.size*sizeof(unsigned int));
            memset(array33.data, 0, array33.size*sizeof(unsigned int));
         }
         unsigned int loop11 = 0;
         unsigned int loopLimit11 = (rand()%loopsFactor)/4 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            for (int i = 0; i < array32.size; i++) {
               array32.data[i]--;
            }
            for (int i = 0; i < array33.size; i++) {
               if (array33.data[i] == 31) { 
                  return array33;
               }
            }
         }
         ArrayParam params0;
         params0.size = 2;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array32;
         params0.data[1] = array33;
         Array array34 = func24(&params0, rng(), loopsFactor);
         free(params0.data);
         array34.refC--;
         if(array34.refC == 0) {
            free(array34.data);
         }
         array33.refC--;
         if(array33.refC == 0) {
            free(array33.data);
         }
      }
      else {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array32;
         Array array35 = func16(&params0, loopsFactor);
         free(params0.data);
         array35.refC--;
         if(array35.refC == 0) {
            free(array35.data);
         }
      }
      Array array36;
      if (pCounter > 0) {
         array36 = vars->data[--pCounter];
         array36.refC++;
      } else {
         array36.size = 675;
         array36.refC = 1;
         array36.data = (unsigned int*)malloc(array36.size*sizeof(unsigned int));
         memset(array36.data, 0, array36.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array32;
      params0.data[1] = array36;
      Array array37 = func17(&params0, loopsFactor);
      free(params0.data);
      if(PATH0 & 2) {
         Array array38;
         if (pCounter > 0) {
            array38 = vars->data[--pCounter];
            array38.refC++;
         } else {
            array38.size = 567;
            array38.refC = 1;
            array38.data = (unsigned int*)malloc(array38.size*sizeof(unsigned int));
            memset(array38.data, 0, array38.size*sizeof(unsigned int));
         }
         unsigned int loop12 = 0;
         unsigned int loopLimit12 = (rand()%loopsFactor)/4 + 1;
         for(; loop12 < loopLimit12; loop12++) {
            for (int i = 0; i < array32.size; i++) {
               array32.data[i]--;
            }
            for (int i = 0; i < array36.size; i++) {
               if (array36.data[i] == 53) { 
                  return array36;
               }
            }
         }
         array38.refC--;
         if(array38.refC == 0) {
            free(array38.data);
         }
      }
      else {
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array32;
         params1.data[1] = array36;
         params1.data[2] = array37;
         Array array39 = func22(&params1, loopsFactor);
         free(params1.data);
         array39.refC--;
         if(array39.refC == 0) {
            free(array39.data);
         }
      }
      for (int i = 0; i < array36.size; i++) {
         if (array36.data[i] == 83) { 
            return array36;
         }
      }
      array37.refC--;
      if(array37.refC == 0) {
         free(array37.data);
      }
      array36.refC--;
      if(array36.refC == 0) {
         free(array36.data);
      }
   }
   for (int i = 0; i < array32.size; i++) {
      array32.data[i]--;
   }
   for (int i = 0; i < array32.size; i++) {
      if (array32.data[i] == 28) { 
         return array32;
      }
   }
   return array32;
}

