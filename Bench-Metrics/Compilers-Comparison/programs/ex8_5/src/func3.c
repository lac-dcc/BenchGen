#include "ex8_5.h" 
Array func3(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array99;
   if (pCounter > 0) {
      array99 = vars->data[--pCounter];
      array99.refC++;
   } else {
      array99.size = 255;
      array99.refC = 1;
      array99.data = (unsigned int*)malloc(array99.size*sizeof(unsigned int));
      memset(array99.data, 0, array99.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array99;
   Array array100 = func6(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop29 = 0;
   unsigned int loopLimit29 = (rand()%loopsFactor)/2 + 1;
   for(; loop29 < loopLimit29; loop29++) {
      for (int i = 0; i < array100.size; i++) {
         array100.data[i]++;
      }
   }
   for (int i = 0; i < array99.size; i++) {
      if (array99.data[i] == 39) { 
         return array99;
      }
   }
   array99.refC--;
   if(array99.refC == 0) {
      free(array99.data);
   }
   return array100;
}

