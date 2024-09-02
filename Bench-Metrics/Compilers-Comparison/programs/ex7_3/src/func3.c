#include "ex7_3.h" 
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array32;
   if (pCounter > 0) {
      array32 = vars->data[--pCounter];
      array32.refC++;
   } else {
      array32.size = 403;
      array32.refC = 1;
      array32.data = (unsigned int*)malloc(array32.size*sizeof(unsigned int));
      memset(array32.data, 0, array32.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array32;
   Array array33 = func6(&params0, loopsFactor);
   free(params0.data);
   Array array34;
   if (pCounter > 0) {
      array34 = vars->data[--pCounter];
      array34.refC++;
   } else {
      array34.size = 399;
      array34.refC = 1;
      array34.data = (unsigned int*)malloc(array34.size*sizeof(unsigned int));
      memset(array34.data, 0, array34.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop7 = 0;
      unsigned int loopLimit7 = (rand()%loopsFactor)/1 + 1;
      for(; loop7 < loopLimit7; loop7++) {
      }
   }
   else {
      Array array35;
      if (pCounter > 0) {
         array35 = vars->data[--pCounter];
         array35.refC++;
      } else {
         array35.size = 932;
         array35.refC = 1;
         array35.data = (unsigned int*)malloc(array35.size*sizeof(unsigned int));
         memset(array35.data, 0, array35.size*sizeof(unsigned int));
      }
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array32;
      params1.data[1] = array33;
      params1.data[2] = array34;
      params1.data[3] = array35;
      Array array36 = func7(&params1, loopsFactor);
      free(params1.data);
      array36.refC--;
      if(array36.refC == 0) {
         free(array36.data);
      }
      array35.refC--;
      if(array35.refC == 0) {
         free(array35.data);
      }
   }
   for (int i = 0; i < array32.size; i++) {
      if (array32.data[i] == 39) { 
         return array32;
      }
   }
   Array array37;
   if (pCounter > 0) {
      array37 = vars->data[--pCounter];
      array37.refC++;
   } else {
      array37.size = 12;
      array37.refC = 1;
      array37.data = (unsigned int*)malloc(array37.size*sizeof(unsigned int));
      memset(array37.data, 0, array37.size*sizeof(unsigned int));
   }
   Array array38;
   if (pCounter > 0) {
      array38 = vars->data[--pCounter];
      array38.refC++;
   } else {
      array38.size = 226;
      array38.refC = 1;
      array38.data = (unsigned int*)malloc(array38.size*sizeof(unsigned int));
      memset(array38.data, 0, array38.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array33.size; i++) {
      array33.data[i]++;
   }
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/1 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      for (int i = 0; i < array38.size; i++) {
         array38.data[i]--;
      }
   }
   ArrayParam params1;
   params1.size = 5;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array32;
   params1.data[1] = array33;
   params1.data[2] = array34;
   params1.data[3] = array37;
   params1.data[4] = array38;
   Array array39 = func8(&params1, loopsFactor);
   free(params1.data);
   for (int i = 0; i < array38.size; i++) {
      if (array38.data[i] == 34) { 
         return array38;
      }
   }
   array39.refC--;
   if(array39.refC == 0) {
      free(array39.data);
   }
   array37.refC--;
   if(array37.refC == 0) {
      free(array37.data);
   }
   array34.refC--;
   if(array34.refC == 0) {
      free(array34.data);
   }
   array33.refC--;
   if(array33.refC == 0) {
      free(array33.data);
   }
   array32.refC--;
   if(array32.refC == 0) {
      free(array32.data);
   }
   return array38;
}

