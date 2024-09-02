#include "ex9_3.h" 
Array func2(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
      array5.refC++;
   } else {
      array5.size = 736;
      array5.refC = 1;
      array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
      memset(array5.data, 0, array5.size*sizeof(unsigned int));
   }
   unsigned int loop2 = 0;
   unsigned int loopLimit2 = (rand()%loopsFactor)/2 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      for (int i = 0; i < array5.size; i++) {
         array5.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array5;
   Array array6 = func8(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop4 = 0;
   unsigned int loopLimit4 = (rand()%loopsFactor)/2 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]++;
      }
   }
   ArrayParam params1;
   params1.size = 2;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array5;
   params1.data[1] = array6;
   Array array8 = func5(&params1, loopsFactor);
   free(params1.data);
   for (int i = 0; i < array6.size; i++) {
      if (array6.data[i] == 29) { 
         return array6;
      }
   }
   array8.refC--;
   if(array8.refC == 0) {
      free(array8.data);
   }
   array6.refC--;
   if(array6.refC == 0) {
      free(array6.data);
   }
   return array5;
}

