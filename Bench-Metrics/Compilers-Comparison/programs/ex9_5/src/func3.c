#include "ex9_5.h" 
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array59;
   if (pCounter > 0) {
      array59 = vars->data[--pCounter];
      array59.refC++;
   } else {
      array59.size = 917;
      array59.refC = 1;
      array59.data = (unsigned int*)malloc(array59.size*sizeof(unsigned int));
      memset(array59.data, 0, array59.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array59.size; i++) {
      array59.data[i]++;
   }
   for (int i = 0; i < array59.size; i++) {
      if (array59.data[i] == 43) { 
         return array59;
      }
   }
   for (int i = 0; i < array59.size; i++) {
      array59.data[i]--;
   }
   Array array60;
   if (pCounter > 0) {
      array60 = vars->data[--pCounter];
      array60.refC++;
   } else {
      array60.size = 183;
      array60.refC = 1;
      array60.data = (unsigned int*)malloc(array60.size*sizeof(unsigned int));
      memset(array60.data, 0, array60.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop26 = 0;
      unsigned int loopLimit26 = (rand()%loopsFactor)/2 + 1;
      for(; loop26 < loopLimit26; loop26++) {
         Array array61;
         if (pCounter > 0) {
            array61 = vars->data[--pCounter];
            array61.refC++;
         } else {
            array61.size = 490;
            array61.refC = 1;
            array61.data = (unsigned int*)malloc(array61.size*sizeof(unsigned int));
            memset(array61.data, 0, array61.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array61.size; i++) {
            array61.data[i]--;
         }
         for (int i = 0; i < array60.size; i++) {
            if (array60.data[i] == 25) { 
               return array60;
            }
         }
         array61.refC--;
         if(array61.refC == 0) {
            free(array61.data);
         }
      }
   }
   else {
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array59;
      params0.data[1] = array60;
      Array array62 = func11(&params0, loopsFactor);
      free(params0.data);
      array62.refC--;
      if(array62.refC == 0) {
         free(array62.data);
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array59;
   params0.data[1] = array60;
   Array array63 = func8(&params0, rng(), loopsFactor);
   free(params0.data);
   array60.refC--;
   if(array60.refC == 0) {
      free(array60.data);
   }
   array59.refC--;
   if(array59.refC == 0) {
      free(array59.data);
   }
   return array63;
}

