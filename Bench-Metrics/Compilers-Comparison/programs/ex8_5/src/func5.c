#include "ex8_5.h" 
Array func5(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array42;
   if (pCounter > 0) {
      array42 = vars->data[--pCounter];
      array42.refC++;
   } else {
      array42.size = 368;
      array42.refC = 1;
      array42.data = (unsigned int*)malloc(array42.size*sizeof(unsigned int));
      memset(array42.data, 0, array42.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array42;
   Array array43 = func10(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop13 = 0;
   unsigned int loopLimit13 = (rand()%loopsFactor)/3 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      for (int i = 0; i < array42.size; i++) {
         array42.data[i]++;
      }
   }
   for (int i = 0; i < array43.size; i++) {
      if (array43.data[i] == 96) { 
         return array43;
      }
   }
   array42.refC--;
   if(array42.refC == 0) {
      free(array42.data);
   }
   return array43;
}

