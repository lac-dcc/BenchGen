#include "ex8_5.h" 
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
         Array array31 = func4(&params0, rng(), loopsFactor);
         free(params0.data);
         array31.refC--;
         if(array31.refC == 0) {
            free(array31.data);
         }
      }
      Array array40;
      if (pCounter > 0) {
         array40 = vars->data[--pCounter];
         array40.refC++;
      } else {
         array40.size = 732;
         array40.refC = 1;
         array40.data = (unsigned int*)malloc(array40.size*sizeof(unsigned int));
         memset(array40.data, 0, array40.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array1;
      params0.data[1] = array40;
      Array array41 = func5(&params0, loopsFactor);
      free(params0.data);
      if(PATH0 & 2) {
         Array array44;
         if (pCounter > 0) {
            array44 = vars->data[--pCounter];
            array44.refC++;
         } else {
            array44.size = 618;
            array44.refC = 1;
            array44.data = (unsigned int*)malloc(array44.size*sizeof(unsigned int));
            memset(array44.data, 0, array44.size*sizeof(unsigned int));
         }
         unsigned int loop14 = 0;
         unsigned int loopLimit14 = (rand()%loopsFactor)/3 + 1;
         for(; loop14 < loopLimit14; loop14++) {
            for (int i = 0; i < array40.size; i++) {
               array40.data[i]--;
            }
            for (int i = 0; i < array41.size; i++) {
               if (array41.data[i] == 51) { 
                  return array41;
               }
            }
         }
         ArrayParam params1;
         params1.size = 4;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array1;
         params1.data[1] = array40;
         params1.data[2] = array41;
         params1.data[3] = array44;
         Array array45 = func18(&params1, rng(), loopsFactor);
         free(params1.data);
         array45.refC--;
         if(array45.refC == 0) {
            free(array45.data);
         }
         array44.refC--;
         if(array44.refC == 0) {
            free(array44.data);
         }
      }
      else {
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array1;
         params1.data[1] = array40;
         params1.data[2] = array41;
         Array array55 = func14(&params1, rng(), loopsFactor);
         free(params1.data);
         array55.refC--;
         if(array55.refC == 0) {
            free(array55.data);
         }
      }
      for (int i = 0; i < array40.size; i++) {
         if (array40.data[i] == 28) { 
            return array40;
         }
      }
      array41.refC--;
      if(array41.refC == 0) {
         free(array41.data);
      }
      array40.refC--;
      if(array40.refC == 0) {
         free(array40.data);
      }
   }
   return array1;
}

