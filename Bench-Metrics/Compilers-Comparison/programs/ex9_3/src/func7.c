#include "ex9_3.h" 
Array func7(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array26;
   if (pCounter > 0) {
      array26 = vars->data[--pCounter];
      array26.refC++;
   } else {
      array26.size = 467;
      array26.refC = 1;
      array26.data = (unsigned int*)malloc(array26.size*sizeof(unsigned int));
      memset(array26.data, 0, array26.size*sizeof(unsigned int));
   }
   unsigned int loop12 = 0;
   unsigned int loopLimit12 = (rand()%loopsFactor)/2 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      for (int i = 0; i < array26.size; i++) {
         array26.data[i]--;
      }
   }
   unsigned int loop13 = 0;
   unsigned int loopLimit13 = (rand()%loopsFactor)/2 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      for (int i = 0; i < array26.size; i++) {
         array26.data[i]++;
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array26;
   Array array27 = func10(&params0, loopsFactor);
   free(params0.data);
   for (int i = 0; i < array26.size; i++) {
      if (array26.data[i] == 52) { 
         return array26;
      }
   }
   array27.refC--;
   if(array27.refC == 0) {
      free(array27.data);
   }
   return array26;
}

