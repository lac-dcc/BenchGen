#include "ex8_4.h" 
Array func2(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array57;
   if (pCounter > 0) {
      array57 = vars->data[--pCounter];
      array57.refC++;
   } else {
      array57.size = 11;
      array57.refC = 1;
      array57.data = (unsigned int*)malloc(array57.size*sizeof(unsigned int));
      memset(array57.data, 0, array57.size*sizeof(unsigned int));
   }
   unsigned int loop17 = 0;
   unsigned int loopLimit17 = (rand()%loopsFactor)/2 + 1;
   for(; loop17 < loopLimit17; loop17++) {
      if(PATH0 & 1) {
         Array array58;
         if (pCounter > 0) {
            array58 = vars->data[--pCounter];
            array58.refC++;
         } else {
            array58.size = 928;
            array58.refC = 1;
            array58.data = (unsigned int*)malloc(array58.size*sizeof(unsigned int));
            memset(array58.data, 0, array58.size*sizeof(unsigned int));
         }
         unsigned int loop18 = 0;
         unsigned int loopLimit18 = (rand()%loopsFactor)/3 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            for (int i = 0; i < array58.size; i++) {
               array58.data[i]--;
            }
            for (int i = 0; i < array57.size; i++) {
               if (array57.data[i] == 4) { 
                  return array57;
               }
            }
         }
         ArrayParam params0;
         params0.size = 2;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array57;
         params0.data[1] = array58;
         Array array59 = func18(&params0, rng(), loopsFactor);
         free(params0.data);
         array59.refC--;
         if(array59.refC == 0) {
            free(array59.data);
         }
         array58.refC--;
         if(array58.refC == 0) {
            free(array58.data);
         }
      }
      else {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array57;
         Array array60 = func14(&params0, loopsFactor);
         free(params0.data);
         array60.refC--;
         if(array60.refC == 0) {
            free(array60.data);
         }
      }
      Array array61;
      if (pCounter > 0) {
         array61 = vars->data[--pCounter];
         array61.refC++;
      } else {
         array61.size = 606;
         array61.refC = 1;
         array61.data = (unsigned int*)malloc(array61.size*sizeof(unsigned int));
         memset(array61.data, 0, array61.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array57;
      params0.data[1] = array61;
      Array array62 = func15(&params0, loopsFactor);
      free(params0.data);
      if(PATH0 & 2) {
         Array array63;
         if (pCounter > 0) {
            array63 = vars->data[--pCounter];
            array63.refC++;
         } else {
            array63.size = 818;
            array63.refC = 1;
            array63.data = (unsigned int*)malloc(array63.size*sizeof(unsigned int));
            memset(array63.data, 0, array63.size*sizeof(unsigned int));
         }
         unsigned int loop19 = 0;
         unsigned int loopLimit19 = (rand()%loopsFactor)/3 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            for (int i = 0; i < array57.size; i++) {
               array57.data[i]--;
            }
            for (int i = 0; i < array57.size; i++) {
               if (array57.data[i] == 69) { 
                  return array57;
               }
            }
         }
         array63.refC--;
         if(array63.refC == 0) {
            free(array63.data);
         }
      }
      else {
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array57;
         params1.data[1] = array61;
         params1.data[2] = array62;
         Array array64 = func16(&params1, loopsFactor);
         free(params1.data);
         array64.refC--;
         if(array64.refC == 0) {
            free(array64.data);
         }
      }
      for (int i = 0; i < array57.size; i++) {
         if (array57.data[i] == 24) { 
            return array57;
         }
      }
      array62.refC--;
      if(array62.refC == 0) {
         free(array62.data);
      }
      array61.refC--;
      if(array61.refC == 0) {
         free(array61.data);
      }
   }
   for (int i = 0; i < array57.size; i++) {
      array57.data[i]--;
   }
   for (int i = 0; i < array57.size; i++) {
      if (array57.data[i] == 83) { 
         return array57;
      }
   }
   return array57;
}

