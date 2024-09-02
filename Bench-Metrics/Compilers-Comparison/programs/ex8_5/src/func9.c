#include "ex8_5.h" 
Array func9(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array79;
   if (pCounter > 0) {
      array79 = vars->data[--pCounter];
      array79.refC++;
   } else {
      array79.size = 282;
      array79.refC = 1;
      array79.data = (unsigned int*)malloc(array79.size*sizeof(unsigned int));
      memset(array79.data, 0, array79.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array79;
   Array array80 = func15(&params0, loopsFactor);
   free(params0.data);
   if(PATH0 & 1) {
      Array array83;
      if (pCounter > 0) {
         array83 = vars->data[--pCounter];
         array83.refC++;
      } else {
         array83.size = 468;
         array83.refC = 1;
         array83.data = (unsigned int*)malloc(array83.size*sizeof(unsigned int));
         memset(array83.data, 0, array83.size*sizeof(unsigned int));
      }
      unsigned int loop25 = 0;
      unsigned int loopLimit25 = (rand()%loopsFactor)/2 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         for (int i = 0; i < array83.size; i++) {
            array83.data[i]--;
         }
         for (int i = 0; i < array79.size; i++) {
            if (array79.data[i] == 31) { 
               return array79;
            }
         }
      }
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array79;
      params1.data[1] = array80;
      params1.data[2] = array83;
      Array array84 = func24(&params1, rng(), loopsFactor);
      free(params1.data);
      array84.refC--;
      if(array84.refC == 0) {
         free(array84.data);
      }
      array83.refC--;
      if(array83.refC == 0) {
         free(array83.data);
      }
   }
   else {
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array79;
      params1.data[1] = array80;
      Array array85 = func16(&params1, loopsFactor);
      free(params1.data);
      array85.refC--;
      if(array85.refC == 0) {
         free(array85.data);
      }
   }
   array80.refC--;
   if(array80.refC == 0) {
      free(array80.data);
   }
   return array79;
}

