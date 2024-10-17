#include "P2_A.h" 
array_t* func2(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
      array6->refC++;
   } else {
      array6 = (array_t*)malloc(sizeof(array_t));
      array6->size = 429;
      array6->refC = 1;
      array6->data = (unsigned int*)malloc(array6->size*sizeof(unsigned int));
      memset(array6->data, 0, array6->size*sizeof(unsigned int));
   }
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      for (int i = 0; i < array6->size; i++) {
         array6->data[i]--;
      }
   }
   unsigned int loop6 = 0;
   unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      for (int i = 0; i < array6->size; i++) {
         array6->data[i]++;
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array6;
   array_t* array7 = func6(&params0, loopsFactor);
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

