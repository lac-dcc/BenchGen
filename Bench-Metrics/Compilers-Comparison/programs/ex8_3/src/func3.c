#include "ex8_3.h" 
Array func3(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array41;
   if (pCounter > 0) {
      array41 = vars->data[--pCounter];
      array41.refC++;
   } else {
      array41.size = 19;
      array41.refC = 1;
      array41.data = (unsigned int*)malloc(array41.size*sizeof(unsigned int));
      memset(array41.data, 0, array41.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array41;
   Array array42 = func6(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop12 = 0;
   unsigned int loopLimit12 = (rand()%loopsFactor)/2 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      for (int i = 0; i < array41.size; i++) {
         array41.data[i]++;
      }
   }
   for (int i = 0; i < array42.size; i++) {
      if (array42.data[i] == 40) { 
         return array42;
      }
   }
   array41.refC--;
   if(array41.refC == 0) {
      free(array41.data);
   }
   return array42;
}

