#include "P5_A.h" 
array_t* func0(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array51;
   if (pCounter > 0) {
      array51 = vars->data[--pCounter];
      array51->refC++;
   } else {
      array51 = (array_t*)malloc(sizeof(array_t));
      array51->size = 395;
      array51->refC = 1;
      array51->data = (unsigned int*)malloc(array51->size*sizeof(unsigned int));
      memset(array51->data, 0, array51->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop48 = 0;
      unsigned int loopLimit48 = (rand()%loopsFactor)/3 + 1;
      for(; loop48 < loopLimit48; loop48++) {
         array_t* array52;
         if (pCounter > 0) {
            array52 = vars->data[--pCounter];
            array52->refC++;
         } else {
            array52 = (array_t*)malloc(sizeof(array_t));
            array52->size = 29;
            array52->refC = 1;
            array52->data = (unsigned int*)malloc(array52->size*sizeof(unsigned int));
            memset(array52->data, 0, array52->size*sizeof(unsigned int));
         }
         for (int i = 0; i < array52->size; i++) {
            if (array52->data[i] == 35) { 
               return array52;
            }
         }
         unsigned int loop49 = 0;
         unsigned int loopLimit49 = (rand()%loopsFactor)/4 + 1;
         for(; loop49 < loopLimit49; loop49++) {
            for (int i = 0; i < array52->size; i++) {
               array52->data[i]++;
            }
         }
         array52->refC--;
         if(array52->refC == 0) {
            free(array52->data);
            free(array52);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array51;
      array_t* array53 = func7(&params0, loopsFactor);
      free(params0.data);
      array53->refC--;
      if(array53->refC == 0) {
         free(array53->data);
         free(array53);
      }
   }
   unsigned int loop50 = 0;
   unsigned int loopLimit50 = (rand()%loopsFactor)/3 + 1;
   for(; loop50 < loopLimit50; loop50++) {
      for (int i = 0; i < array51->size; i++) {
         array51->data[i]++;
      }
      for (int i = 0; i < array51->size; i++) {
         array51->data[i]--;
      }
      for (int i = 0; i < array51->size; i++) {
         array51->data[i]--;
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array51;
   array_t* array54 = func4(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop51 = 0;
   unsigned int loopLimit51 = (rand()%loopsFactor)/3 + 1;
   for(; loop51 < loopLimit51; loop51++) {
      for (int i = 0; i < array51->size; i++) {
         array51->data[i]--;
      }
   }
   for (int i = 0; i < array54->size; i++) {
      array54->data[i]--;
   }
   array_t_param params1;
   params1.size = 2;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array51;
   params1.data[1] = array54;
   array_t* array55 = func1(&params1, loopsFactor);
   free(params1.data);
   array55->refC--;
   if(array55->refC == 0) {
      free(array55->data);
      free(array55);
   }
   array51->refC--;
   if(array51->refC == 0) {
      free(array51->data);
      free(array51);
   }
   return array54;
}

