#include "ex9_3.h" 
Array func4(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array29;
   if (pCounter > 0) {
      array29 = vars->data[--pCounter];
      array29.refC++;
   } else {
      array29.size = 865;
      array29.refC = 1;
      array29.data = (unsigned int*)malloc(array29.size*sizeof(unsigned int));
      memset(array29.data, 0, array29.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop14 = 0;
      unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         for (int i = 0; i < array29.size; i++) {
            array29.data[i]--;
         }
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array29;
      Array array30 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/2 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         for (int i = 0; i < array29.size; i++) {
            array29.data[i]++;
         }
      }
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array29;
      params1.data[1] = array30;
      Array array31 = func5(&params1, loopsFactor);
      free(params1.data);
      array31.refC--;
      if(array31.refC == 0) {
         free(array31.data);
      }
      array30.refC--;
      if(array30.refC == 0) {
         free(array30.data);
      }
   }
   else {
      Array array32;
      if (pCounter > 0) {
         array32 = vars->data[--pCounter];
         array32.refC++;
      } else {
         array32.size = 117;
         array32.refC = 1;
         array32.data = (unsigned int*)malloc(array32.size*sizeof(unsigned int));
         memset(array32.data, 0, array32.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array32.size; i++) {
         array32.data[i]++;
      }
      for (int i = 0; i < array32.size; i++) {
         if (array32.data[i] == 81) { 
            return array32;
         }
      }
      for (int i = 0; i < array32.size; i++) {
         array32.data[i]--;
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array29;
      params0.data[1] = array32;
      Array array33 = func8(&params0, rng(), loopsFactor);
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
   unsigned int loop16 = 0;
   unsigned int loopLimit16 = (rand()%loopsFactor)/2 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      for (int i = 0; i < array29.size; i++) {
         array29.data[i]++;
      }
      Array array34;
      if (pCounter > 0) {
         array34 = vars->data[--pCounter];
         array34.refC++;
      } else {
         array34.size = 856;
         array34.refC = 1;
         array34.data = (unsigned int*)malloc(array34.size*sizeof(unsigned int));
         memset(array34.data, 0, array34.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array34.size; i++) {
         array34.data[i]++;
      }
      for (int i = 0; i < array34.size; i++) {
         if (array34.data[i] == 86) { 
            return array34;
         }
      }
      for (int i = 0; i < array34.size; i++) {
         array34.data[i]--;
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array29;
      params0.data[1] = array34;
      Array array35 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      array35.refC--;
      if(array35.refC == 0) {
         free(array35.data);
      }
      array34.refC--;
      if(array34.refC == 0) {
         free(array34.data);
      }
   }
   return array29;
}

