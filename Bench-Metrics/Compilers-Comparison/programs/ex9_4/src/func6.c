#include "ex9_4.h" 
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array26;
   if (pCounter > 0) {
      array26 = vars->data[--pCounter];
      array26.refC++;
   } else {
      array26.size = 378;
      array26.refC = 1;
      array26.data = (unsigned int*)malloc(array26.size*sizeof(unsigned int));
      memset(array26.data, 0, array26.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop13 = 0;
      unsigned int loopLimit13 = (rand()%loopsFactor)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         for (int i = 0; i < array26.size; i++) {
            array26.data[i]--;
         }
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array26;
      Array array27 = func13(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop14 = 0;
      unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         for (int i = 0; i < array26.size; i++) {
            array26.data[i]++;
         }
      }
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array26;
      params1.data[1] = array27;
      Array array28 = func10(&params1, loopsFactor);
      free(params1.data);
      array28.refC--;
      if(array28.refC == 0) {
         free(array28.data);
      }
      array27.refC--;
      if(array27.refC == 0) {
         free(array27.data);
      }
   }
   else {
      Array array30;
      if (pCounter > 0) {
         array30 = vars->data[--pCounter];
         array30.refC++;
      } else {
         array30.size = 444;
         array30.refC = 1;
         array30.data = (unsigned int*)malloc(array30.size*sizeof(unsigned int));
         memset(array30.data, 0, array30.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array30.size; i++) {
         array30.data[i]++;
      }
      for (int i = 0; i < array26.size; i++) {
         if (array26.data[i] == 29) { 
            return array26;
         }
      }
      for (int i = 0; i < array30.size; i++) {
         array30.data[i]--;
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array26;
      params0.data[1] = array30;
      Array array31 = func13(&params0, rng(), loopsFactor);
      free(params0.data);
      array31.refC--;
      if(array31.refC == 0) {
         free(array31.data);
      }
      array30.refC--;
      if(array30.refC == 0) {
         free(array30.data);
      }
   }
   unsigned int loop15 = 0;
   unsigned int loopLimit15 = (rand()%loopsFactor)/2 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      for (int i = 0; i < array26.size; i++) {
         array26.data[i]++;
      }
      Array array32;
      if (pCounter > 0) {
         array32 = vars->data[--pCounter];
         array32.refC++;
      } else {
         array32.size = 481;
         array32.refC = 1;
         array32.data = (unsigned int*)malloc(array32.size*sizeof(unsigned int));
         memset(array32.data, 0, array32.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array32.size; i++) {
         array32.data[i]++;
      }
      for (int i = 0; i < array32.size; i++) {
         if (array32.data[i] == 27) { 
            return array32;
         }
      }
      for (int i = 0; i < array32.size; i++) {
         array32.data[i]--;
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array26;
      params0.data[1] = array32;
      Array array33 = func13(&params0, rng(), loopsFactor);
      free(params0.data);
      array33.refC--;
      if(array33.refC == 0) {
         free(array33.data);
      }
      array32.refC--;
      if(array32.refC == 0) {
         free(array32.data);
      }
   }
   return array26;
}

