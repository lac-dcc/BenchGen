#include "ex9_2.h" 
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
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/2 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      for (int i = 0; i < array5.size; i++) {
         array5.data[i]++;
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array5;
   Array array6 = func5(&params0, loopsFactor);
   free(params0.data);
   for (int i = 0; i < array6.size; i++) {
      if (array6.data[i] == 35) { 
         return array6;
      }
   }
   array5.refC--;
   if(array5.refC == 0) {
      free(array5.data);
   }
   return array6;
}

