#include "ex7_4.h" 
Array func4(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array30;
   if (pCounter > 0) {
      array30 = vars->data[--pCounter];
      array30.refC++;
   } else {
      array30.size = 808;
      array30.refC = 1;
      array30.data = (unsigned int*)malloc(array30.size*sizeof(unsigned int));
      memset(array30.data, 0, array30.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array30;
   Array array31 = func11(&params0, loopsFactor);
   free(params0.data);
   Array array32;
   if (pCounter > 0) {
      array32 = vars->data[--pCounter];
      array32.refC++;
   } else {
      array32.size = 788;
      array32.refC = 1;
      array32.data = (unsigned int*)malloc(array32.size*sizeof(unsigned int));
      memset(array32.data, 0, array32.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop7 = 0;
      unsigned int loopLimit7 = (rand()%loopsFactor)/1 + 1;
      for(; loop7 < loopLimit7; loop7++) {
      }
   }
   else {
      Array array33;
      if (pCounter > 0) {
         array33 = vars->data[--pCounter];
         array33.refC++;
      } else {
         array33.size = 584;
         array33.refC = 1;
         array33.data = (unsigned int*)malloc(array33.size*sizeof(unsigned int));
         memset(array33.data, 0, array33.size*sizeof(unsigned int));
      }
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array30;
      params1.data[1] = array31;
      params1.data[2] = array32;
      params1.data[3] = array33;
      Array array34 = func9(&params1, loopsFactor);
      free(params1.data);
      array34.refC--;
      if(array34.refC == 0) {
         free(array34.data);
      }
      array33.refC--;
      if(array33.refC == 0) {
         free(array33.data);
      }
   }
   for (int i = 0; i < array32.size; i++) {
      if (array32.data[i] == 99) { 
         return array32;
      }
   }
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
   Array array36;
   if (pCounter > 0) {
      array36 = vars->data[--pCounter];
      array36.refC++;
   } else {
      array36.size = 60;
      array36.refC = 1;
      array36.data = (unsigned int*)malloc(array36.size*sizeof(unsigned int));
      memset(array36.data, 0, array36.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array31.size; i++) {
      array31.data[i]++;
   }
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/1 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      for (int i = 0; i < array35.size; i++) {
         array35.data[i]--;
      }
   }
   ArrayParam params1;
   params1.size = 5;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array30;
   params1.data[1] = array31;
   params1.data[2] = array32;
   params1.data[3] = array35;
   params1.data[4] = array36;
   Array array37 = func10(&params1, loopsFactor);
   free(params1.data);
   for (int i = 0; i < array36.size; i++) {
      if (array36.data[i] == 86) { 
         return array36;
      }
   }
   array37.refC--;
   if(array37.refC == 0) {
      free(array37.data);
   }
   array36.refC--;
   if(array36.refC == 0) {
      free(array36.data);
   }
   array35.refC--;
   if(array35.refC == 0) {
      free(array35.data);
   }
   array32.refC--;
   if(array32.refC == 0) {
      free(array32.data);
   }
   array31.refC--;
   if(array31.refC == 0) {
      free(array31.data);
   }
   return array30;
}

