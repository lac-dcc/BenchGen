#include "P1_A.h" 
array_t* func11(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array9;
   if (pCounter > 0) {
      array9 = vars->data[--pCounter];
      array9->refC++;
   } else {
      array9 = (array_t*)malloc(sizeof(array_t));
      array9->size = 929;
      array9->refC = 1;
      array9->data = (unsigned int*)malloc(array9->size*sizeof(unsigned int));
      memset(array9->data, 0, array9->size*sizeof(unsigned int));
   }
   unsigned int loop4 = 0;
   unsigned int loopLimit4 = (rand()%loopsFactor)/2 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      for (int i = 0; i < array9->size; i++) {
         array9->data[i]--;
      }
   }
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      for (int i = 0; i < array9->size; i++) {
         array9->data[i]++;
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array9;
   array_t* array10 = func14(&params0, loopsFactor);
   free(params0.data);
   for (int i = 0; i < array9->size; i++) {
      if (array9->data[i] == 29) { 
         return array9;
      }
   }
   array9->refC--;
   if(array9->refC == 0) {
      free(array9->data);
      free(array9);
   }
   return array10;
}

