#include "ex9_5.h" 
Array func7(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array67;
   if (pCounter > 0) {
      array67 = vars->data[--pCounter];
      array67.refC++;
   } else {
      array67.size = 348;
      array67.refC = 1;
      array67.data = (unsigned int*)malloc(array67.size*sizeof(unsigned int));
      memset(array67.data, 0, array67.size*sizeof(unsigned int));
   }
   unsigned int loop28 = 0;
   unsigned int loopLimit28 = (rand()%loopsFactor)/2 + 1;
   for(; loop28 < loopLimit28; loop28++) {
      for (int i = 0; i < array67.size; i++) {
         array67.data[i]--;
      }
   }
   Array array68;
   if (pCounter > 0) {
      array68 = vars->data[--pCounter];
      array68.refC++;
   } else {
      array68.size = 622;
      array68.refC = 1;
      array68.data = (unsigned int*)malloc(array68.size*sizeof(unsigned int));
      memset(array68.data, 0, array68.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop29 = 0;
      unsigned int loopLimit29 = (rand()%loopsFactor)/2 + 1;
      for(; loop29 < loopLimit29; loop29++) {
         Array array69;
         if (pCounter > 0) {
            array69 = vars->data[--pCounter];
            array69.refC++;
         } else {
            array69.size = 828;
            array69.refC = 1;
            array69.data = (unsigned int*)malloc(array69.size*sizeof(unsigned int));
            memset(array69.data, 0, array69.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array69.size; i++) {
            array69.data[i]--;
         }
         for (int i = 0; i < array67.size; i++) {
            if (array67.data[i] == 46) { 
               return array67;
            }
         }
         array69.refC--;
         if(array69.refC == 0) {
            free(array69.data);
         }
      }
   }
   else {
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array67;
      params0.data[1] = array68;
      Array array70 = func16(&params0, loopsFactor);
      free(params0.data);
      array70.refC--;
      if(array70.refC == 0) {
         free(array70.data);
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array67;
   params0.data[1] = array68;
   Array array71 = func13(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop30 = 0;
   unsigned int loopLimit30 = (rand()%loopsFactor)/2 + 1;
   for(; loop30 < loopLimit30; loop30++) {
      for (int i = 0; i < array68.size; i++) {
         array68.data[i]++;
      }
   }
   ArrayParam params1;
   params1.size = 3;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array67;
   params1.data[1] = array68;
   params1.data[2] = array71;
   Array array72 = func10(&params1, loopsFactor);
   free(params1.data);
   for (int i = 0; i < array68.size; i++) {
      if (array68.data[i] == 30) { 
         return array68;
      }
   }
   array72.refC--;
   if(array72.refC == 0) {
      free(array72.data);
   }
   array68.refC--;
   if(array68.refC == 0) {
      free(array68.data);
   }
   array67.refC--;
   if(array67.refC == 0) {
      free(array67.data);
   }
   return array71;
}
