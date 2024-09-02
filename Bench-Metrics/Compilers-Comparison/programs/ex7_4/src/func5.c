#include "ex7_4.h" 
Array func5(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      unsigned int loop11 = 0;
      unsigned int loopLimit11 = (rand()%loopsFactor)/1 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         Array array49;
         if (pCounter > 0) {
            array49 = vars->data[--pCounter];
            array49.refC++;
         } else {
            array49.size = 117;
            array49.refC = 1;
            array49.data = (unsigned int*)malloc(array49.size*sizeof(unsigned int));
            memset(array49.data, 0, array49.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array49.size; i++) {
            if (array49.data[i] == 71) { 
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
      Array array50;
      if (pCounter > 0) {
         array50 = vars->data[--pCounter];
         array50.refC++;
      } else {
         array50.size = 481;
         array50.refC = 1;
         array50.data = (unsigned int*)malloc(array50.size*sizeof(unsigned int));
         memset(array50.data, 0, array50.size*sizeof(unsigned int));
      }
      Array array51;
      if (pCounter > 0) {
         array51 = vars->data[--pCounter];
         array51.refC++;
      } else {
         array51.size = 675;
         array51.refC = 1;
         array51.data = (unsigned int*)malloc(array51.size*sizeof(unsigned int));
         memset(array51.data, 0, array51.size*sizeof(unsigned int));
      }
      Array array52;
      if (pCounter > 0) {
         array52 = vars->data[--pCounter];
         array52.refC++;
      } else {
         array52.size = 709;
         array52.refC = 1;
         array52.data = (unsigned int*)malloc(array52.size*sizeof(unsigned int));
         memset(array52.data, 0, array52.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array51.size; i++) {
         array51.data[i]++;
      }
      unsigned int loop12 = 0;
      unsigned int loopLimit12 = (rand()%loopsFactor)/1 + 1;
      for(; loop12 < loopLimit12; loop12++) {
         for (int i = 0; i < array50.size; i++) {
            array50.data[i]--;
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array50;
      params0.data[1] = array51;
      params0.data[2] = array52;
      Array array53 = func10(&params0, loopsFactor);
      free(params0.data);
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array50;
      params1.data[1] = array51;
      params1.data[2] = array52;
      params1.data[3] = array53;
      Array array54 = func7(&params1, loopsFactor);
      free(params1.data);
      array54.refC--;
      if(array54.refC == 0) {
         free(array54.data);
      }
      array53.refC--;
      if(array53.refC == 0) {
         free(array53.data);
      }
      array52.refC--;
      if(array52.refC == 0) {
         free(array52.data);
      }
      array51.refC--;
      if(array51.refC == 0) {
         free(array51.data);
      }
      array50.refC--;
      if(array50.refC == 0) {
         free(array50.data);
      }
   }
   Array array55;
   if (pCounter > 0) {
      array55 = vars->data[--pCounter];
      array55.refC++;
   } else {
      array55.size = 965;
      array55.refC = 1;
      array55.data = (unsigned int*)malloc(array55.size*sizeof(unsigned int));
      memset(array55.data, 0, array55.size*sizeof(unsigned int));
   }
   Array array56;
   if (pCounter > 0) {
      array56 = vars->data[--pCounter];
      array56.refC++;
   } else {
      array56.size = 306;
      array56.refC = 1;
      array56.data = (unsigned int*)malloc(array56.size*sizeof(unsigned int));
      memset(array56.data, 0, array56.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array56.size; i++) {
      array56.data[i]++;
   }
   unsigned int loop13 = 0;
   unsigned int loopLimit13 = (rand()%loopsFactor)/1 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      for (int i = 0; i < array56.size; i++) {
         array56.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array55;
   params0.data[1] = array56;
   Array array57 = func8(&params0, loopsFactor);
   free(params0.data);
   array57.refC--;
   if(array57.refC == 0) {
      free(array57.data);
   }
   array56.refC--;
   if(array56.refC == 0) {
      free(array56.data);
   }
   return array55;
}

