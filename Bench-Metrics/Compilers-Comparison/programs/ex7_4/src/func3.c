#include "ex7_4.h" 
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array63;
   if (pCounter > 0) {
      array63 = vars->data[--pCounter];
      array63.refC++;
   } else {
      array63.size = 451;
      array63.refC = 1;
      array63.data = (unsigned int*)malloc(array63.size*sizeof(unsigned int));
      memset(array63.data, 0, array63.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array63.size; i++) {
      if (array63.data[i] == 55) { 
         return array63;
      }
   }
   Array array64;
   if (pCounter > 0) {
      array64 = vars->data[--pCounter];
      array64.refC++;
   } else {
      array64.size = 379;
      array64.refC = 1;
      array64.data = (unsigned int*)malloc(array64.size*sizeof(unsigned int));
      memset(array64.data, 0, array64.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array63;
   params0.data[1] = array64;
   Array array65 = func6(&params0, rng(), loopsFactor);
   free(params0.data);
   Array array66;
   if (pCounter > 0) {
      array66 = vars->data[--pCounter];
      array66.refC++;
   } else {
      array66.size = 228;
      array66.refC = 1;
      array66.data = (unsigned int*)malloc(array66.size*sizeof(unsigned int));
      memset(array66.data, 0, array66.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/1 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         Array array67;
         if (pCounter > 0) {
            array67 = vars->data[--pCounter];
            array67.refC++;
         } else {
            array67.size = 841;
            array67.refC = 1;
            array67.data = (unsigned int*)malloc(array67.size*sizeof(unsigned int));
            memset(array67.data, 0, array67.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array63.size; i++) {
            if (array63.data[i] == 93) { 
               return array63;
            }
         }
         array67.refC--;
         if(array67.refC == 0) {
            free(array67.data);
         }
      }
   }
   else {
      Array array68;
      if (pCounter > 0) {
         array68 = vars->data[--pCounter];
         array68.refC++;
      } else {
         array68.size = 500;
         array68.refC = 1;
         array68.data = (unsigned int*)malloc(array68.size*sizeof(unsigned int));
         memset(array68.data, 0, array68.size*sizeof(unsigned int));
      }
      Array array69;
      if (pCounter > 0) {
         array69 = vars->data[--pCounter];
         array69.refC++;
      } else {
         array69.size = 34;
         array69.refC = 1;
         array69.data = (unsigned int*)malloc(array69.size*sizeof(unsigned int));
         memset(array69.data, 0, array69.size*sizeof(unsigned int));
      }
      Array array70;
      if (pCounter > 0) {
         array70 = vars->data[--pCounter];
         array70.refC++;
      } else {
         array70.size = 764;
         array70.refC = 1;
         array70.data = (unsigned int*)malloc(array70.size*sizeof(unsigned int));
         memset(array70.data, 0, array70.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array68.size; i++) {
         array68.data[i]++;
      }
      unsigned int loop16 = 0;
      unsigned int loopLimit16 = (rand()%loopsFactor)/1 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         for (int i = 0; i < array66.size; i++) {
            array66.data[i]--;
         }
      }
      ArrayParam params1;
      params1.size = 7;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array63;
      params1.data[1] = array64;
      params1.data[2] = array65;
      params1.data[3] = array66;
      params1.data[4] = array68;
      params1.data[5] = array69;
      params1.data[6] = array70;
      Array array71 = func10(&params1, loopsFactor);
      free(params1.data);
      ArrayParam params2;
      params2.size = 8;
      params2.data = (Array*)malloc(params2.size*sizeof(Array));
      params2.data[0] = array63;
      params2.data[1] = array64;
      params2.data[2] = array65;
      params2.data[3] = array66;
      params2.data[4] = array68;
      params2.data[5] = array69;
      params2.data[6] = array70;
      params2.data[7] = array71;
      Array array72 = func7(&params2, loopsFactor);
      free(params2.data);
      array72.refC--;
      if(array72.refC == 0) {
         free(array72.data);
      }
      array71.refC--;
      if(array71.refC == 0) {
         free(array71.data);
      }
      array70.refC--;
      if(array70.refC == 0) {
         free(array70.data);
      }
      array69.refC--;
      if(array69.refC == 0) {
         free(array69.data);
      }
      array68.refC--;
      if(array68.refC == 0) {
         free(array68.data);
      }
   }
   for (int i = 0; i < array66.size; i++) {
      if (array66.data[i] == 65) { 
         return array66;
      }
   }
   Array array73;
   if (pCounter > 0) {
      array73 = vars->data[--pCounter];
      array73.refC++;
   } else {
      array73.size = 859;
      array73.refC = 1;
      array73.data = (unsigned int*)malloc(array73.size*sizeof(unsigned int));
      memset(array73.data, 0, array73.size*sizeof(unsigned int));
   }
   Array array74;
   if (pCounter > 0) {
      array74 = vars->data[--pCounter];
      array74.refC++;
   } else {
      array74.size = 936;
      array74.refC = 1;
      array74.data = (unsigned int*)malloc(array74.size*sizeof(unsigned int));
      memset(array74.data, 0, array74.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array73.size; i++) {
      array73.data[i]++;
   }
   unsigned int loop17 = 0;
   unsigned int loopLimit17 = (rand()%loopsFactor)/1 + 1;
   for(; loop17 < loopLimit17; loop17++) {
      for (int i = 0; i < array74.size; i++) {
         array74.data[i]--;
      }
   }
   ArrayParam params1;
   params1.size = 6;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array63;
   params1.data[1] = array64;
   params1.data[2] = array65;
   params1.data[3] = array66;
   params1.data[4] = array73;
   params1.data[5] = array74;
   Array array75 = func8(&params1, loopsFactor);
   free(params1.data);
   for (int i = 0; i < array65.size; i++) {
      if (array65.data[i] == 7) { 
         return array65;
      }
   }
   array75.refC--;
   if(array75.refC == 0) {
      free(array75.data);
   }
   array73.refC--;
   if(array73.refC == 0) {
      free(array73.data);
   }
   array66.refC--;
   if(array66.refC == 0) {
      free(array66.data);
   }
   array65.refC--;
   if(array65.refC == 0) {
      free(array65.data);
   }
   array64.refC--;
   if(array64.refC == 0) {
      free(array64.data);
   }
   array63.refC--;
   if(array63.refC == 0) {
      free(array63.data);
   }
   return array74;
}

