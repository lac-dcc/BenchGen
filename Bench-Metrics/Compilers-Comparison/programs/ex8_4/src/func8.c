#include "ex8_4.h" 
Array func8(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array array45;
      if (pCounter > 0) {
         array45 = vars->data[--pCounter];
         array45.refC++;
      } else {
         array45.size = 555;
         array45.refC = 1;
         array45.data = (unsigned int*)malloc(array45.size*sizeof(unsigned int));
         memset(array45.data, 0, array45.size*sizeof(unsigned int));
      }
      unsigned int loop14 = 0;
      unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         for (int i = 0; i < array45.size; i++) {
            array45.data[i]--;
         }
         for (int i = 0; i < array45.size; i++) {
            if (array45.data[i] == 64) { 
               return array45;
            }
         }
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array45;
      Array array46 = func18(&params0, rng(), loopsFactor);
      free(params0.data);
      array46.refC--;
      if(array46.refC == 0) {
         free(array46.data);
      }
      array45.refC--;
      if(array45.refC == 0) {
         free(array45.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array47 = func14(&params0, loopsFactor);
      free(params0.data);
      array47.refC--;
      if(array47.refC == 0) {
         free(array47.data);
      }
   }
   Array array48;
   if (pCounter > 0) {
      array48 = vars->data[--pCounter];
      array48.refC++;
   } else {
      array48.size = 500;
      array48.refC = 1;
      array48.data = (unsigned int*)malloc(array48.size*sizeof(unsigned int));
      memset(array48.data, 0, array48.size*sizeof(unsigned int));
   }
   return array48;
}

