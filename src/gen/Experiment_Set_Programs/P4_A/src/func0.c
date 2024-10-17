#include "P4_A.h" 
array_t* func0(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
      array5->refC++;
   } else {
      array5 = (array_t*)malloc(sizeof(array_t));
      array5->size = 782;
      array5->refC = 1;
      array5->data = (unsigned int*)malloc(array5->size*sizeof(unsigned int));
      memset(array5->data, 0, array5->size*sizeof(unsigned int));
   }
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      for (int i = 0; i < array5->size; i++) {
         array5->data[i]--;
      }
   }
   unsigned int loop6 = 0;
   unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      array_t* array6;
      if (pCounter > 0) {
         array6 = vars->data[--pCounter];
         array6->refC++;
      } else {
         array6 = (array_t*)malloc(sizeof(array_t));
         array6->size = 862;
         array6->refC = 1;
         array6->data = (unsigned int*)malloc(array6->size*sizeof(unsigned int));
         memset(array6->data, 0, array6->size*sizeof(unsigned int));
      }
      array_t* array7;
      if (pCounter > 0) {
         array7 = vars->data[--pCounter];
         array7->refC++;
      } else {
         array7 = (array_t*)malloc(sizeof(array_t));
         array7->size = 123;
         array7->refC = 1;
         array7->data = (unsigned int*)malloc(array7->size*sizeof(unsigned int));
         memset(array7->data, 0, array7->size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6->size; i++) {
         if (array6->data[i] == 35) { 
            return array6;
         }
      }
      unsigned int loop7 = 0;
      unsigned int loopLimit7 = (rand()%loopsFactor)/3 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         for (int i = 0; i < array7->size; i++) {
            if (array7->data[i] == 2) { 
               return array7;
            }
         }
      }
      array7->refC--;
      if(array7->refC == 0) {
         free(array7->data);
         free(array7);
      }
      array6->refC--;
      if(array6->refC == 0) {
         free(array6->data);
         free(array6);
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array5;
   array_t* array8 = func4(&params0, rng(), loopsFactor);
   free(params0.data);
   for (int i = 0; i < array5->size; i++) {
      if (array5->data[i] == 29) { 
         return array5;
      }
   }
   array5->refC--;
   if(array5->refC == 0) {
      free(array5->data);
      free(array5);
   }
   return array8;
}

