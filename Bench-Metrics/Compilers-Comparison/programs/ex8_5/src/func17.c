#include "ex8_5.h" 
Array func17(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array27;
   if (pCounter > 0) {
      array27 = vars->data[--pCounter];
      array27.refC++;
   } else {
      array27.size = 539;
      array27.refC = 1;
      array27.data = (unsigned int*)malloc(array27.size*sizeof(unsigned int));
      memset(array27.data, 0, array27.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array27;
   Array array28 = func24(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/3 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      for (int i = 0; i < array27.size; i++) {
         array27.data[i]++;
      }
   }
   for (int i = 0; i < array27.size; i++) {
      if (array27.data[i] == 67) { 
         return array27;
      }
   }
   array27.refC--;
   if(array27.refC == 0) {
      free(array27.data);
   }
   return array28;
}

