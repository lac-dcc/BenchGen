#include "P5_A.h" 
array_t* func2(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
      array6->refC++;
   } else {
      array6 = (array_t*)malloc(sizeof(array_t));
      array6->size = 123;
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
      array_t* array7;
      if (pCounter > 0) {
         array7 = vars->data[--pCounter];
         array7->refC++;
      } else {
         array7 = (array_t*)malloc(sizeof(array_t));
         array7->size = 135;
         array7->refC = 1;
         array7->data = (unsigned int*)malloc(array7->size*sizeof(unsigned int));
         memset(array7->data, 0, array7->size*sizeof(unsigned int));
      }
      array_t* array8;
      if (pCounter > 0) {
         array8 = vars->data[--pCounter];
         array8->refC++;
      } else {
         array8 = (array_t*)malloc(sizeof(array_t));
         array8->size = 929;
         array8->refC = 1;
         array8->data = (unsigned int*)malloc(array8->size*sizeof(unsigned int));
         memset(array8->data, 0, array8->size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6->size; i++) {
         if (array6->data[i] == 22) { 
            return array6;
         }
      }
      unsigned int loop7 = 0;
      unsigned int loopLimit7 = (rand()%loopsFactor)/3 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         for (int i = 0; i < array6->size; i++) {
            if (array6->data[i] == 69) { 
               return array6;
            }
         }
      }
      array8->refC--;
      if(array8->refC == 0) {
         free(array8->data);
         free(array8);
      }
      array7->refC--;
      if(array7->refC == 0) {
         free(array7->data);
         free(array7);
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array6;
   array_t* array9 = func6(&params0, rng(), loopsFactor);
   free(params0.data);
   for (int i = 0; i < array9->size; i++) {
      if (array9->data[i] == 19) { 
         return array9;
      }
   }
   array9->refC--;
   if(array9->refC == 0) {
      free(array9->data);
      free(array9);
   }
   return array6;
}

