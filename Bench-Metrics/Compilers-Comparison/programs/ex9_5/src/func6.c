#include "ex9_5.h" 
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array40;
   if (pCounter > 0) {
      array40 = vars->data[--pCounter];
      array40.refC++;
   } else {
      array40.size = 245;
      array40.refC = 1;
      array40.data = (unsigned int*)malloc(array40.size*sizeof(unsigned int));
      memset(array40.data, 0, array40.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop19 = 0;
      unsigned int loopLimit19 = (rand()%loopsFactor)/2 + 1;
      for(; loop19 < loopLimit19; loop19++) {
         for (int i = 0; i < array40.size; i++) {
            array40.data[i]--;
         }
      }
      Array array41;
      if (pCounter > 0) {
         array41 = vars->data[--pCounter];
         array41.refC++;
      } else {
         array41.size = 451;
         array41.refC = 1;
         array41.data = (unsigned int*)malloc(array41.size*sizeof(unsigned int));
         memset(array41.data, 0, array41.size*sizeof(unsigned int));
      }
      if(PATH0 & 2) {
         unsigned int loop20 = 0;
         unsigned int loopLimit20 = (rand()%loopsFactor)/2 + 1;
         for(; loop20 < loopLimit20; loop20++) {
            Array array42;
            if (pCounter > 0) {
               array42 = vars->data[--pCounter];
               array42.refC++;
            } else {
               array42.size = 921;
               array42.refC = 1;
               array42.data = (unsigned int*)malloc(array42.size*sizeof(unsigned int));
               memset(array42.data, 0, array42.size*sizeof(unsigned int));
            }
            for (int i = 0; i < array42.size; i++) {
               array42.data[i]--;
            }
            for (int i = 0; i < array42.size; i++) {
               if (array42.data[i] == 88) { 
                  return array42;
               }
            }
            array42.refC--;
            if(array42.refC == 0) {
               free(array42.data);
            }
         }
      }
      else {
         ArrayParam params0;
         params0.size = 2;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array40;
         params0.data[1] = array41;
         Array array43 = func16(&params0, loopsFactor);
         free(params0.data);
         array43.refC--;
         if(array43.refC == 0) {
            free(array43.data);
         }
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array40;
      params0.data[1] = array41;
      Array array44 = func13(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (rand()%loopsFactor)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         for (int i = 0; i < array41.size; i++) {
            array41.data[i]++;
         }
      }
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array40;
      params1.data[1] = array41;
      params1.data[2] = array44;
      Array array45 = func10(&params1, loopsFactor);
      free(params1.data);
      array45.refC--;
      if(array45.refC == 0) {
         free(array45.data);
      }
      array44.refC--;
      if(array44.refC == 0) {
         free(array44.data);
      }
      array41.refC--;
      if(array41.refC == 0) {
         free(array41.data);
      }
   }
   else {
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
      for (int i = 0; i < array40.size; i++) {
         array40.data[i]++;
      }
      for (int i = 0; i < array48.size; i++) {
         if (array48.data[i] == 37) { 
            return array48;
         }
      }
      for (int i = 0; i < array40.size; i++) {
         array40.data[i]--;
      }
      Array array49;
      if (pCounter > 0) {
         array49 = vars->data[--pCounter];
         array49.refC++;
      } else {
         array49.size = 275;
         array49.refC = 1;
         array49.data = (unsigned int*)malloc(array49.size*sizeof(unsigned int));
         memset(array49.data, 0, array49.size*sizeof(unsigned int));
      }
      if(PATH0 & 4) {
         unsigned int loop22 = 0;
         unsigned int loopLimit22 = (rand()%loopsFactor)/2 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            Array array50;
            if (pCounter > 0) {
               array50 = vars->data[--pCounter];
               array50.refC++;
            } else {
               array50.size = 407;
               array50.refC = 1;
               array50.data = (unsigned int*)malloc(array50.size*sizeof(unsigned int));
               memset(array50.data, 0, array50.size*sizeof(unsigned int));
            }
            for (int i = 0; i < array49.size; i++) {
               array49.data[i]--;
            }
            for (int i = 0; i < array48.size; i++) {
               if (array48.data[i] == 58) { 
                  return array48;
               }
            }
            array50.refC--;
            if(array50.refC == 0) {
               free(array50.data);
            }
         }
      }
      else {
         ArrayParam params0;
         params0.size = 3;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array40;
         params0.data[1] = array48;
         params0.data[2] = array49;
         Array array51 = func16(&params0, loopsFactor);
         free(params0.data);
         array51.refC--;
         if(array51.refC == 0) {
            free(array51.data);
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array40;
      params0.data[1] = array48;
      params0.data[2] = array49;
      Array array52 = func13(&params0, rng(), loopsFactor);
      free(params0.data);
      array52.refC--;
      if(array52.refC == 0) {
         free(array52.data);
      }
      array49.refC--;
      if(array49.refC == 0) {
         free(array49.data);
      }
      array48.refC--;
      if(array48.refC == 0) {
         free(array48.data);
      }
   }
   unsigned int loop23 = 0;
   unsigned int loopLimit23 = (rand()%loopsFactor)/2 + 1;
   for(; loop23 < loopLimit23; loop23++) {
      for (int i = 0; i < array40.size; i++) {
         array40.data[i]++;
      }
      Array array53;
      if (pCounter > 0) {
         array53 = vars->data[--pCounter];
         array53.refC++;
      } else {
         array53.size = 818;
         array53.refC = 1;
         array53.data = (unsigned int*)malloc(array53.size*sizeof(unsigned int));
         memset(array53.data, 0, array53.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array40.size; i++) {
         array40.data[i]++;
      }
      for (int i = 0; i < array53.size; i++) {
         if (array53.data[i] == 11) { 
            return array53;
         }
      }
      for (int i = 0; i < array40.size; i++) {
         array40.data[i]--;
      }
      Array array54;
      if (pCounter > 0) {
         array54 = vars->data[--pCounter];
         array54.refC++;
      } else {
         array54.size = 529;
         array54.refC = 1;
         array54.data = (unsigned int*)malloc(array54.size*sizeof(unsigned int));
         memset(array54.data, 0, array54.size*sizeof(unsigned int));
      }
      if(PATH0 & 8) {
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (rand()%loopsFactor)/3 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            Array array55;
            if (pCounter > 0) {
               array55 = vars->data[--pCounter];
               array55.refC++;
            } else {
               array55.size = 776;
               array55.refC = 1;
               array55.data = (unsigned int*)malloc(array55.size*sizeof(unsigned int));
               memset(array55.data, 0, array55.size*sizeof(unsigned int));
            }
            for (int i = 0; i < array40.size; i++) {
               array40.data[i]--;
            }
            for (int i = 0; i < array55.size; i++) {
               if (array55.data[i] == 63) { 
                  return array55;
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
         params0.data[0] = array40;
         params0.data[1] = array53;
         params0.data[2] = array54;
         Array array56 = func16(&params0, loopsFactor);
         free(params0.data);
         array56.refC--;
         if(array56.refC == 0) {
            free(array56.data);
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array40;
      params0.data[1] = array53;
      params0.data[2] = array54;
      Array array57 = func13(&params0, rng(), loopsFactor);
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
   return array40;
}

