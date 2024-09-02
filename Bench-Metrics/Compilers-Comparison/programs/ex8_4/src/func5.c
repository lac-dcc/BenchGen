#include "ex8_4.h" 
Array func5(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array23;
   if (pCounter > 0) {
      array23 = vars->data[--pCounter];
      array23.refC++;
   } else {
      array23.size = 808;
      array23.refC = 1;
      array23.data = (unsigned int*)malloc(array23.size*sizeof(unsigned int));
      memset(array23.data, 0, array23.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array23;
   Array array24 = func10(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/3 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      for (int i = 0; i < array23.size; i++) {
         array23.data[i]++;
      }
   }
   for (int i = 0; i < array23.size; i++) {
      if (array23.data[i] == 3) { 
         return array23;
      }
   }
   array23.refC--;
   if(array23.refC == 0) {
      free(array23.data);
   }
   return array24;
}

