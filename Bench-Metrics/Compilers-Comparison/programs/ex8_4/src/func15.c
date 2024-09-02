#include "ex8_4.h" 
Array func15(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array52;
   if (pCounter > 0) {
      array52 = vars->data[--pCounter];
      array52.refC++;
   } else {
      array52.size = 859;
      array52.refC = 1;
      array52.data = (unsigned int*)malloc(array52.size*sizeof(unsigned int));
      memset(array52.data, 0, array52.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array52;
   Array array53 = func18(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop15 = 0;
   unsigned int loopLimit15 = (rand()%loopsFactor)/2 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      for (int i = 0; i < array53.size; i++) {
         array53.data[i]++;
      }
   }
   for (int i = 0; i < array53.size; i++) {
      if (array53.data[i] == 28) { 
         return array53;
      }
   }
   array52.refC--;
   if(array52.refC == 0) {
      free(array52.data);
   }
   return array53;
}

