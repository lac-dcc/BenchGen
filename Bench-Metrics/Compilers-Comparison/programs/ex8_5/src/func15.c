#include "ex8_5.h" 
Array func15(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array81;
   if (pCounter > 0) {
      array81 = vars->data[--pCounter];
      array81.refC++;
   } else {
      array81.size = 624;
      array81.refC = 1;
      array81.data = (unsigned int*)malloc(array81.size*sizeof(unsigned int));
      memset(array81.data, 0, array81.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array81;
   Array array82 = func18(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop24 = 0;
   unsigned int loopLimit24 = (rand()%loopsFactor)/2 + 1;
   for(; loop24 < loopLimit24; loop24++) {
      for (int i = 0; i < array81.size; i++) {
         array81.data[i]++;
      }
   }
   for (int i = 0; i < array82.size; i++) {
      if (array82.data[i] == 79) { 
         return array82;
      }
   }
   array82.refC--;
   if(array82.refC == 0) {
      free(array82.data);
   }
   return array81;
}

