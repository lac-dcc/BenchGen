#include "ex7_5.h" 
Array func8(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array52;
   if (pCounter > 0) {
      array52 = vars->data[--pCounter];
      array52.refC++;
   } else {
      array52.size = 567;
      array52.refC = 1;
      array52.data = (unsigned int*)malloc(array52.size*sizeof(unsigned int));
      memset(array52.data, 0, array52.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array52;
   Array array53 = func12(&params0, loopsFactor);
   free(params0.data);
   Array array54;
   if (pCounter > 0) {
      array54 = vars->data[--pCounter];
      array54.refC++;
   } else {
      array54.size = 353;
      array54.refC = 1;
      array54.data = (unsigned int*)malloc(array54.size*sizeof(unsigned int));
      memset(array54.data, 0, array54.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop13 = 0;
      unsigned int loopLimit13 = (rand()%loopsFactor)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
      }
   }
   else {
      Array array55;
      if (pCounter > 0) {
         array55 = vars->data[--pCounter];
         array55.refC++;
      } else {
         array55.size = 586;
         array55.refC = 1;
         array55.data = (unsigned int*)malloc(array55.size*sizeof(unsigned int));
         memset(array55.data, 0, array55.size*sizeof(unsigned int));
      }
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array52;
      params1.data[1] = array53;
      params1.data[2] = array54;
      params1.data[3] = array55;
      Array array56 = func13(&params1, loopsFactor);
      free(params1.data);
      array56.refC--;
      if(array56.refC == 0) {
         free(array56.data);
      }
      array55.refC--;
      if(array55.refC == 0) {
         free(array55.data);
      }
   }
   for (int i = 0; i < array54.size; i++) {
      if (array54.data[i] == 19) { 
         return array54;
      }
   }
   Array array57;
   if (pCounter > 0) {
      array57 = vars->data[--pCounter];
      array57.refC++;
   } else {
      array57.size = 624;
      array57.refC = 1;
      array57.data = (unsigned int*)malloc(array57.size*sizeof(unsigned int));
      memset(array57.data, 0, array57.size*sizeof(unsigned int));
   }
   Array array58;
   if (pCounter > 0) {
      array58 = vars->data[--pCounter];
      array58.refC++;
   } else {
      array58.size = 528;
      array58.refC = 1;
      array58.data = (unsigned int*)malloc(array58.size*sizeof(unsigned int));
      memset(array58.data, 0, array58.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array53.size; i++) {
      array53.data[i]++;
   }
   unsigned int loop14 = 0;
   unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
   for(; loop14 < loopLimit14; loop14++) {
      for (int i = 0; i < array54.size; i++) {
         array54.data[i]--;
      }
   }
   ArrayParam params1;
   params1.size = 5;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array52;
   params1.data[1] = array53;
   params1.data[2] = array54;
   params1.data[3] = array57;
   params1.data[4] = array58;
   Array array59 = func14(&params1, loopsFactor);
   free(params1.data);
   for (int i = 0; i < array59.size; i++) {
      if (array59.data[i] == 70) { 
         return array59;
      }
   }
   array59.refC--;
   if(array59.refC == 0) {
      free(array59.data);
   }
   array58.refC--;
   if(array58.refC == 0) {
      free(array58.data);
   }
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
   return array52;
}

