#include "ex9_4.h" 
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array35;
   if (pCounter > 0) {
      array35 = vars->data[--pCounter];
      array35.refC++;
   } else {
      array35.size = 624;
      array35.refC = 1;
      array35.data = (unsigned int*)malloc(array35.size*sizeof(unsigned int));
      memset(array35.data, 0, array35.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array35.size; i++) {
      array35.data[i]++;
   }
   for (int i = 0; i < array35.size; i++) {
      if (array35.data[i] == 32) { 
         return array35;
      }
   }
   for (int i = 0; i < array35.size; i++) {
      array35.data[i]--;
   }
   Array array36;
   if (pCounter > 0) {
      array36 = vars->data[--pCounter];
      array36.refC++;
   } else {
      array36.size = 503;
      array36.refC = 1;
      array36.data = (unsigned int*)malloc(array36.size*sizeof(unsigned int));
      memset(array36.data, 0, array36.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop17 = 0;
      unsigned int loopLimit17 = (rand()%loopsFactor)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         Array array37;
         if (pCounter > 0) {
            array37 = vars->data[--pCounter];
            array37.refC++;
         } else {
            array37.size = 19;
            array37.refC = 1;
            array37.data = (unsigned int*)malloc(array37.size*sizeof(unsigned int));
            memset(array37.data, 0, array37.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array35.size; i++) {
            array35.data[i]--;
         }
         for (int i = 0; i < array35.size; i++) {
            if (array35.data[i] == 8) { 
               return array35;
            }
         }
         array37.refC--;
         if(array37.refC == 0) {
            free(array37.data);
         }
      }
   }
   else {
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array35;
      params0.data[1] = array36;
      Array array38 = func11(&params0, loopsFactor);
      free(params0.data);
      array38.refC--;
      if(array38.refC == 0) {
         free(array38.data);
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array35;
   params0.data[1] = array36;
   Array array39 = func8(&params0, rng(), loopsFactor);
   free(params0.data);
   array36.refC--;
   if(array36.refC == 0) {
      free(array36.data);
   }
   array35.refC--;
   if(array35.refC == 0) {
      free(array35.data);
   }
   return array39;
}

