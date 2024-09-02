#include "ex8_5.h" 
Array func7(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop20 = 0;
   unsigned int loopLimit20 = (rand()%loopsFactor)/2 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      if(PATH0 & 1) {
         Array array65;
         if (pCounter > 0) {
            array65 = vars->data[--pCounter];
            array65.refC++;
         } else {
            array65.size = 590;
            array65.refC = 1;
            array65.data = (unsigned int*)malloc(array65.size*sizeof(unsigned int));
            memset(array65.data, 0, array65.size*sizeof(unsigned int));
         }
         unsigned int loop21 = 0;
         unsigned int loopLimit21 = (rand()%loopsFactor)/3 + 1;
         for(; loop21 < loopLimit21; loop21++) {
            for (int i = 0; i < array65.size; i++) {
               array65.data[i]--;
            }
            for (int i = 0; i < array65.size; i++) {
               if (array65.data[i] == 54) { 
                  return array65;
               }
            }
         }
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array65;
         Array array66 = func24(&params0, rng(), loopsFactor);
         free(params0.data);
         array66.refC--;
         if(array66.refC == 0) {
            free(array66.data);
         }
         array65.refC--;
         if(array65.refC == 0) {
            free(array65.data);
         }
      }
      else {
         ArrayParam params0;
         params0.size = 0;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         Array array67 = func16(&params0, loopsFactor);
         free(params0.data);
         array67.refC--;
         if(array67.refC == 0) {
            free(array67.data);
         }
      }
      Array array68;
      if (pCounter > 0) {
         array68 = vars->data[--pCounter];
         array68.refC++;
      } else {
         array68.size = 464;
         array68.refC = 1;
         array68.data = (unsigned int*)malloc(array68.size*sizeof(unsigned int));
         memset(array68.data, 0, array68.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array68;
      Array array69 = func17(&params0, loopsFactor);
      free(params0.data);
      if(PATH0 & 2) {
         Array array70;
         if (pCounter > 0) {
            array70 = vars->data[--pCounter];
            array70.refC++;
         } else {
            array70.size = 355;
            array70.refC = 1;
            array70.data = (unsigned int*)malloc(array70.size*sizeof(unsigned int));
            memset(array70.data, 0, array70.size*sizeof(unsigned int));
         }
         unsigned int loop22 = 0;
         unsigned int loopLimit22 = (rand()%loopsFactor)/3 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            for (int i = 0; i < array69.size; i++) {
               array69.data[i]--;
            }
            for (int i = 0; i < array70.size; i++) {
               if (array70.data[i] == 11) { 
                  return array70;
               }
            }
         }
         array70.refC--;
         if(array70.refC == 0) {
            free(array70.data);
         }
      }
      else {
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array68;
         params1.data[1] = array69;
         Array array71 = func22(&params1, loopsFactor);
         free(params1.data);
         array71.refC--;
         if(array71.refC == 0) {
            free(array71.data);
         }
      }
      for (int i = 0; i < array69.size; i++) {
         if (array69.data[i] == 43) { 
            return array69;
         }
      }
      array69.refC--;
      if(array69.refC == 0) {
         free(array69.data);
      }
      array68.refC--;
      if(array68.refC == 0) {
         free(array68.data);
      }
   }
   Array array72;
   if (pCounter > 0) {
      array72 = vars->data[--pCounter];
      array72.refC++;
   } else {
      array72.size = 746;
      array72.refC = 1;
      array72.data = (unsigned int*)malloc(array72.size*sizeof(unsigned int));
      memset(array72.data, 0, array72.size*sizeof(unsigned int));
   }
   return array72;
}

