#include "ex7_4.h" 
Array func2(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array39;
   if (pCounter > 0) {
      array39 = vars->data[--pCounter];
      array39.refC++;
   } else {
      array39.size = 378;
      array39.refC = 1;
      array39.data = (unsigned int*)malloc(array39.size*sizeof(unsigned int));
      memset(array39.data, 0, array39.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array39;
   Array array40 = func11(&params0, loopsFactor);
   free(params0.data);
   Array array41;
   if (pCounter > 0) {
      array41 = vars->data[--pCounter];
      array41.refC++;
   } else {
      array41.size = 97;
      array41.refC = 1;
      array41.data = (unsigned int*)malloc(array41.size*sizeof(unsigned int));
      memset(array41.data, 0, array41.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/1 + 1;
      for(; loop9 < loopLimit9; loop9++) {
      }
   }
   else {
      Array array42;
      if (pCounter > 0) {
         array42 = vars->data[--pCounter];
         array42.refC++;
      } else {
         array42.size = 902;
         array42.refC = 1;
         array42.data = (unsigned int*)malloc(array42.size*sizeof(unsigned int));
         memset(array42.data, 0, array42.size*sizeof(unsigned int));
      }
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array39;
      params1.data[1] = array40;
      params1.data[2] = array41;
      params1.data[3] = array42;
      Array array43 = func9(&params1, loopsFactor);
      free(params1.data);
      array43.refC--;
      if(array43.refC == 0) {
         free(array43.data);
      }
      array42.refC--;
      if(array42.refC == 0) {
         free(array42.data);
      }
   }
   for (int i = 0; i < array40.size; i++) {
      if (array40.data[i] == 56) { 
         return array40;
      }
   }
   Array array44;
   if (pCounter > 0) {
      array44 = vars->data[--pCounter];
      array44.refC++;
   } else {
      array44.size = 301;
      array44.refC = 1;
      array44.data = (unsigned int*)malloc(array44.size*sizeof(unsigned int));
      memset(array44.data, 0, array44.size*sizeof(unsigned int));
   }
   Array array45;
   if (pCounter > 0) {
      array45 = vars->data[--pCounter];
      array45.refC++;
   } else {
      array45.size = 280;
      array45.refC = 1;
      array45.data = (unsigned int*)malloc(array45.size*sizeof(unsigned int));
      memset(array45.data, 0, array45.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array40.size; i++) {
      array40.data[i]++;
   }
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (rand()%loopsFactor)/1 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      for (int i = 0; i < array40.size; i++) {
         array40.data[i]--;
      }
   }
   ArrayParam params1;
   params1.size = 5;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array39;
   params1.data[1] = array40;
   params1.data[2] = array41;
   params1.data[3] = array44;
   params1.data[4] = array45;
   Array array46 = func10(&params1, loopsFactor);
   free(params1.data);
   Array array47;
   if (pCounter > 0) {
      array47 = vars->data[--pCounter];
      array47.refC++;
   } else {
      array47.size = 444;
      array47.refC = 1;
      array47.data = (unsigned int*)malloc(array47.size*sizeof(unsigned int));
      memset(array47.data, 0, array47.size*sizeof(unsigned int));
   }
   ArrayParam params2;
   params2.size = 7;
   params2.data = (Array*)malloc(params2.size*sizeof(Array));
   params2.data[0] = array39;
   params2.data[1] = array40;
   params2.data[2] = array41;
   params2.data[3] = array44;
   params2.data[4] = array45;
   params2.data[5] = array46;
   params2.data[6] = array47;
   Array array48 = func5(&params2, rng(), loopsFactor);
   free(params2.data);
   array48.refC--;
   if(array48.refC == 0) {
      free(array48.data);
   }
   array47.refC--;
   if(array47.refC == 0) {
      free(array47.data);
   }
   array46.refC--;
   if(array46.refC == 0) {
      free(array46.data);
   }
   array44.refC--;
   if(array44.refC == 0) {
      free(array44.data);
   }
   array41.refC--;
   if(array41.refC == 0) {
      free(array41.data);
   }
   array40.refC--;
   if(array40.refC == 0) {
      free(array40.data);
   }
   array39.refC--;
   if(array39.refC == 0) {
      free(array39.data);
   }
   return array45;
}

