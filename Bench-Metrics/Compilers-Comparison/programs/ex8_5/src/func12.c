#include "ex8_5.h" 
Array func12(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array array13;
      if (pCounter > 0) {
         array13 = vars->data[--pCounter];
         array13.refC++;
      } else {
         array13.size = 413;
         array13.refC = 1;
         array13.data = (unsigned int*)malloc(array13.size*sizeof(unsigned int));
         memset(array13.data, 0, array13.size*sizeof(unsigned int));
      }
      unsigned int loop6 = 0;
      unsigned int loopLimit6 = (rand()%loopsFactor)/3 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         for (int i = 0; i < array13.size; i++) {
            array13.data[i]--;
         }
         for (int i = 0; i < array13.size; i++) {
            if (array13.data[i] == 80) { 
               return array13;
            }
         }
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array13;
      Array array14 = func24(&params0, rng(), loopsFactor);
      free(params0.data);
      array14.refC--;
      if(array14.refC == 0) {
         free(array14.data);
      }
      array13.refC--;
      if(array13.refC == 0) {
         free(array13.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array21 = func16(&params0, loopsFactor);
      free(params0.data);
      array21.refC--;
      if(array21.refC == 0) {
         free(array21.data);
      }
   }
   Array array23;
   if (pCounter > 0) {
      array23 = vars->data[--pCounter];
      array23.refC++;
   } else {
      array23.size = 754;
      array23.refC = 1;
      array23.data = (unsigned int*)malloc(array23.size*sizeof(unsigned int));
      memset(array23.data, 0, array23.size*sizeof(unsigned int));
   }
   return array23;
}

