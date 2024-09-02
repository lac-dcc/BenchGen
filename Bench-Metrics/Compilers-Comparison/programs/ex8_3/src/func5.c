#include "ex8_3.h" 
Array func5(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array14;
   if (pCounter > 0) {
      array14 = vars->data[--pCounter];
      array14.refC++;
   } else {
      array14.size = 413;
      array14.refC = 1;
      array14.data = (unsigned int*)malloc(array14.size*sizeof(unsigned int));
      memset(array14.data, 0, array14.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array14;
   Array array15 = func10(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop4 = 0;
   unsigned int loopLimit4 = (rand()%loopsFactor)/3 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      for (int i = 0; i < array14.size; i++) {
         array14.data[i]++;
      }
   }
   for (int i = 0; i < array14.size; i++) {
      if (array14.data[i] == 73) { 
         return array14;
      }
   }
   array15.refC--;
   if(array15.refC == 0) {
      free(array15.data);
   }
   return array14;
}

