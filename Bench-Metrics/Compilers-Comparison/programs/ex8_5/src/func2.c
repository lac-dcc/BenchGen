#include "ex8_5.h" 
Array func2(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array87;
   if (pCounter > 0) {
      array87 = vars->data[--pCounter];
      array87.refC++;
   } else {
      array87.size = 959;
      array87.refC = 1;
      array87.data = (unsigned int*)malloc(array87.size*sizeof(unsigned int));
      memset(array87.data, 0, array87.size*sizeof(unsigned int));
   }
   unsigned int loop26 = 0;
   unsigned int loopLimit26 = (rand()%loopsFactor)/2 + 1;
   for(; loop26 < loopLimit26; loop26++) {
      if(PATH0 & 1) {
         Array array88;
         if (pCounter > 0) {
            array88 = vars->data[--pCounter];
            array88.refC++;
         } else {
            array88.size = 773;
            array88.refC = 1;
            array88.data = (unsigned int*)malloc(array88.size*sizeof(unsigned int));
            memset(array88.data, 0, array88.size*sizeof(unsigned int));
         }
         unsigned int loop27 = 0;
         unsigned int loopLimit27 = (rand()%loopsFactor)/3 + 1;
         for(; loop27 < loopLimit27; loop27++) {
            for (int i = 0; i < array88.size; i++) {
               array88.data[i]--;
            }
            for (int i = 0; i < array87.size; i++) {
               if (array87.data[i] == 90) { 
                  return array87;
               }
            }
         }
         ArrayParam params0;
         params0.size = 2;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array87;
         params0.data[1] = array88;
         Array array89 = func18(&params0, rng(), loopsFactor);
         free(params0.data);
         array89.refC--;
         if(array89.refC == 0) {
            free(array89.data);
         }
         array88.refC--;
         if(array88.refC == 0) {
            free(array88.data);
         }
      }
      else {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array87;
         Array array90 = func14(&params0, rng(), loopsFactor);
         free(params0.data);
         array90.refC--;
         if(array90.refC == 0) {
            free(array90.data);
         }
      }
      Array array91;
      if (pCounter > 0) {
         array91 = vars->data[--pCounter];
         array91.refC++;
      } else {
         array91.size = 340;
         array91.refC = 1;
         array91.data = (unsigned int*)malloc(array91.size*sizeof(unsigned int));
         memset(array91.data, 0, array91.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array87;
      params0.data[1] = array91;
      Array array92 = func15(&params0, loopsFactor);
      free(params0.data);
      if(PATH0 & 2) {
         Array array93;
         if (pCounter > 0) {
            array93 = vars->data[--pCounter];
            array93.refC++;
         } else {
            array93.size = 376;
            array93.refC = 1;
            array93.data = (unsigned int*)malloc(array93.size*sizeof(unsigned int));
            memset(array93.data, 0, array93.size*sizeof(unsigned int));
         }
         unsigned int loop28 = 0;
         unsigned int loopLimit28 = (rand()%loopsFactor)/3 + 1;
         for(; loop28 < loopLimit28; loop28++) {
            for (int i = 0; i < array92.size; i++) {
               array92.data[i]--;
            }
            for (int i = 0; i < array87.size; i++) {
               if (array87.data[i] == 7) { 
                  return array87;
               }
            }
         }
         ArrayParam params1;
         params1.size = 4;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array87;
         params1.data[1] = array91;
         params1.data[2] = array92;
         params1.data[3] = array93;
         Array array94 = func24(&params1, rng(), loopsFactor);
         free(params1.data);
         array94.refC--;
         if(array94.refC == 0) {
            free(array94.data);
         }
         array93.refC--;
         if(array93.refC == 0) {
            free(array93.data);
         }
      }
      else {
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array87;
         params1.data[1] = array91;
         params1.data[2] = array92;
         Array array95 = func16(&params1, loopsFactor);
         free(params1.data);
         array95.refC--;
         if(array95.refC == 0) {
            free(array95.data);
         }
      }
      for (int i = 0; i < array92.size; i++) {
         if (array92.data[i] == 12) { 
            return array92;
         }
      }
      array92.refC--;
      if(array92.refC == 0) {
         free(array92.data);
      }
      array91.refC--;
      if(array91.refC == 0) {
         free(array91.data);
      }
   }
   for (int i = 0; i < array87.size; i++) {
      array87.data[i]--;
   }
   for (int i = 0; i < array87.size; i++) {
      if (array87.data[i] == 59) { 
         return array87;
      }
   }
   return array87;
}

