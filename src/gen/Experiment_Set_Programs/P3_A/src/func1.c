#include "P3_A.h" 
array_t* func1(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
      array6->refC++;
   } else {
      array6 = (array_t*)malloc(sizeof(array_t));
      array6->size = 567;
      array6->refC = 1;
      array6->data = (unsigned int*)malloc(array6->size*sizeof(unsigned int));
      memset(array6->data, 0, array6->size*sizeof(unsigned int));
   }
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/3 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      for (int i = 0; i < array6->size; i++) {
         array6->data[i]--;
      }
   }
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/3 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      for (int i = 0; i < array6->size; i++) {
         array6->data[i]++;
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array6;
   array_t* array7 = func5(&params0, rng(), loopsFactor);
   free(params0.data);
   for (int i = 0; i < array6->size; i++) {
      if (array6->data[i] == 58) { 
         return array6;
      }
   }
   array6->refC--;
   if(array6->refC == 0) {
      free(array6->data);
      free(array6);
   }
   return array7;
}

