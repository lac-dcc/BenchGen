#include "P1_A.h" 
array_t* func2(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
      array5->refC++;
   } else {
      array5 = (array_t*)malloc(sizeof(array_t));
      array5->size = 736;
      array5->refC = 1;
      array5->data = (unsigned int*)malloc(array5->size*sizeof(unsigned int));
      memset(array5->data, 0, array5->size*sizeof(unsigned int));
   }
   unsigned int loop2 = 0;
   unsigned int loopLimit2 = (rand()%loopsFactor)/2 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      for (int i = 0; i < array5->size; i++) {
         array5->data[i]--;
      }
   }
   array_t* array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
      array6->refC++;
   } else {
      array6 = (array_t*)malloc(sizeof(array_t));
      array6->size = 368;
      array6->refC = 1;
      array6->data = (unsigned int*)malloc(array6->size*sizeof(unsigned int));
      memset(array6->data, 0, array6->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop3 = 0;
      unsigned int loopLimit3 = (rand()%loopsFactor)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         array_t* array7;
         if (pCounter > 0) {
            array7 = vars->data[--pCounter];
            array7->refC++;
         } else {
            array7 = (array_t*)malloc(sizeof(array_t));
            array7->size = 567;
            array7->refC = 1;
            array7->data = (unsigned int*)malloc(array7->size*sizeof(unsigned int));
            memset(array7->data, 0, array7->size*sizeof(unsigned int));
         }
         for (int i = 0; i < array5->size; i++) {
            array5->data[i]--;
         }
         for (int i = 0; i < array7->size; i++) {
            if (array7->data[i] == 30) { 
               return array7;
            }
         }
         array7->refC--;
         if(array7->refC == 0) {
            free(array7->data);
            free(array7);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array5;
      params0.data[1] = array6;
      array_t* array8 = func11(&params0, loopsFactor);
      free(params0.data);
      array8->refC--;
      if(array8->refC == 0) {
         free(array8->data);
         free(array8);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array5;
   params0.data[1] = array6;
   array_t* array12 = func8(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      for (int i = 0; i < array5->size; i++) {
         array5->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 3;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array5;
   params1.data[1] = array6;
   params1.data[2] = array12;
   array_t* array22 = func5(&params1, rng(), loopsFactor);
   free(params1.data);
   for (int i = 0; i < array22->size; i++) {
      if (array22->data[i] == 9) { 
         return array22;
      }
   }
   array12->refC--;
   if(array12->refC == 0) {
      free(array12->data);
      free(array12);
   }
   array6->refC--;
   if(array6->refC == 0) {
      free(array6->data);
      free(array6);
   }
   array5->refC--;
   if(array5->refC == 0) {
      free(array5->data);
      free(array5);
   }
   return array22;
}

