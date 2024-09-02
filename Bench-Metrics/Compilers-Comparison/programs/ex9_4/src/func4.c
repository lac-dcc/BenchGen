#include "ex9_4.h" 
Array func4(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array47;
   if (pCounter > 0) {
      array47 = vars->data[--pCounter];
      array47.refC++;
   } else {
      array47.size = 365;
      array47.refC = 1;
      array47.data = (unsigned int*)malloc(array47.size*sizeof(unsigned int));
      memset(array47.data, 0, array47.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (rand()%loopsFactor)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         for (int i = 0; i < array47.size; i++) {
            array47.data[i]--;
         }
      }
      Array array48;
      if (pCounter > 0) {
         array48 = vars->data[--pCounter];
         array48.refC++;
      } else {
         array48.size = 936;
         array48.refC = 1;
         array48.data = (unsigned int*)malloc(array48.size*sizeof(unsigned int));
         memset(array48.data, 0, array48.size*sizeof(unsigned int));
      }
      if(PATH0 & 2) {
         unsigned int loop22 = 0;
         unsigned int loopLimit22 = (rand()%loopsFactor)/2 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            Array array49;
            if (pCounter > 0) {
               array49 = vars->data[--pCounter];
               array49.refC++;
            } else {
               array49.size = 432;
               array49.refC = 1;
               array49.data = (unsigned int*)malloc(array49.size*sizeof(unsigned int));
               memset(array49.data, 0, array49.size*sizeof(unsigned int));
            }
            for (int i = 0; i < array49.size; i++) {
               array49.data[i]--;
            }
            for (int i = 0; i < array49.size; i++) {
               if (array49.data[i] == 28) { 
                  return array49;
               }
            }
            array49.refC--;
            if(array49.refC == 0) {
               free(array49.data);
            }
         }
      }
      else {
         ArrayParam params0;
         params0.size = 2;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array47;
         params0.data[1] = array48;
         Array array50 = func11(&params0, loopsFactor);
         free(params0.data);
         array50.refC--;
         if(array50.refC == 0) {
            free(array50.data);
         }
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array47;
      params0.data[1] = array48;
      Array array51 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop23 = 0;
      unsigned int loopLimit23 = (rand()%loopsFactor)/2 + 1;
      for(; loop23 < loopLimit23; loop23++) {
         for (int i = 0; i < array51.size; i++) {
            array51.data[i]++;
         }
      }
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array47;
      params1.data[1] = array48;
      params1.data[2] = array51;
      Array array52 = func5(&params1, loopsFactor);
      free(params1.data);
      array52.refC--;
      if(array52.refC == 0) {
         free(array52.data);
      }
      array51.refC--;
      if(array51.refC == 0) {
         free(array51.data);
      }
      array48.refC--;
      if(array48.refC == 0) {
         free(array48.data);
      }
   }
   else {
      Array array53;
      if (pCounter > 0) {
         array53 = vars->data[--pCounter];
         array53.refC++;
      } else {
         array53.size = 237;
         array53.refC = 1;
         array53.data = (unsigned int*)malloc(array53.size*sizeof(unsigned int));
         memset(array53.data, 0, array53.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array53.size; i++) {
         array53.data[i]++;
      }
      for (int i = 0; i < array53.size; i++) {
         if (array53.data[i] == 18) { 
            return array53;
         }
      }
      for (int i = 0; i < array47.size; i++) {
         array47.data[i]--;
      }
      Array array54;
      if (pCounter > 0) {
         array54 = vars->data[--pCounter];
         array54.refC++;
      } else {
         array54.size = 143;
         array54.refC = 1;
         array54.data = (unsigned int*)malloc(array54.size*sizeof(unsigned int));
         memset(array54.data, 0, array54.size*sizeof(unsigned int));
      }
      if(PATH0 & 4) {
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (rand()%loopsFactor)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            Array array55;
            if (pCounter > 0) {
               array55 = vars->data[--pCounter];
               array55.refC++;
            } else {
               array55.size = 11;
               array55.refC = 1;
               array55.data = (unsigned int*)malloc(array55.size*sizeof(unsigned int));
               memset(array55.data, 0, array55.size*sizeof(unsigned int));
            }
            for (int i = 0; i < array47.size; i++) {
               array47.data[i]--;
            }
            for (int i = 0; i < array53.size; i++) {
               if (array53.data[i] == 76) { 
                  return array53;
               }
            }
            array55.refC--;
            if(array55.refC == 0) {
               free(array55.data);
            }
         }
      }
      else {
         ArrayParam params0;
         params0.size = 3;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array47;
         params0.data[1] = array53;
         params0.data[2] = array54;
         Array array56 = func11(&params0, loopsFactor);
         free(params0.data);
         array56.refC--;
         if(array56.refC == 0) {
            free(array56.data);
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array47;
      params0.data[1] = array53;
      params0.data[2] = array54;
      Array array57 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      array57.refC--;
      if(array57.refC == 0) {
         free(array57.data);
      }
      array54.refC--;
      if(array54.refC == 0) {
         free(array54.data);
      }
      array53.refC--;
      if(array53.refC == 0) {
         free(array53.data);
      }
   }
   unsigned int loop25 = 0;
   unsigned int loopLimit25 = (rand()%loopsFactor)/2 + 1;
   for(; loop25 < loopLimit25; loop25++) {
      for (int i = 0; i < array47.size; i++) {
         array47.data[i]++;
      }
      Array array58;
      if (pCounter > 0) {
         array58 = vars->data[--pCounter];
         array58.refC++;
      } else {
         array58.size = 606;
         array58.refC = 1;
         array58.data = (unsigned int*)malloc(array58.size*sizeof(unsigned int));
         memset(array58.data, 0, array58.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array47.size; i++) {
         array47.data[i]++;
      }
      for (int i = 0; i < array47.size; i++) {
         if (array47.data[i] == 18) { 
            return array47;
         }
      }
      for (int i = 0; i < array47.size; i++) {
         array47.data[i]--;
      }
      Array array59;
      if (pCounter > 0) {
         array59 = vars->data[--pCounter];
         array59.refC++;
      } else {
         array59.size = 688;
         array59.refC = 1;
         array59.data = (unsigned int*)malloc(array59.size*sizeof(unsigned int));
         memset(array59.data, 0, array59.size*sizeof(unsigned int));
      }
      if(PATH0 & 8) {
         unsigned int loop26 = 0;
         unsigned int loopLimit26 = (rand()%loopsFactor)/3 + 1;
         for(; loop26 < loopLimit26; loop26++) {
            Array array60;
            if (pCounter > 0) {
               array60 = vars->data[--pCounter];
               array60.refC++;
            } else {
               array60.size = 369;
               array60.refC = 1;
               array60.data = (unsigned int*)malloc(array60.size*sizeof(unsigned int));
               memset(array60.data, 0, array60.size*sizeof(unsigned int));
            }
            for (int i = 0; i < array58.size; i++) {
               array58.data[i]--;
            }
            for (int i = 0; i < array58.size; i++) {
               if (array58.data[i] == 96) { 
                  return array58;
               }
            }
            array60.refC--;
            if(array60.refC == 0) {
               free(array60.data);
            }
         }
      }
      else {
         ArrayParam params0;
         params0.size = 3;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array47;
         params0.data[1] = array58;
         params0.data[2] = array59;
         Array array61 = func11(&params0, loopsFactor);
         free(params0.data);
         array61.refC--;
         if(array61.refC == 0) {
            free(array61.data);
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array47;
      params0.data[1] = array58;
      params0.data[2] = array59;
      Array array62 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      array62.refC--;
      if(array62.refC == 0) {
         free(array62.data);
      }
      array59.refC--;
      if(array59.refC == 0) {
         free(array59.data);
      }
      array58.refC--;
      if(array58.refC == 0) {
         free(array58.data);
      }
   }
   return array47;
}

