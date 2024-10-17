#include "P3_A.h" 
array_t* func0(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array24;
   if (pCounter > 0) {
      array24 = vars->data[--pCounter];
      array24->refC++;
   } else {
      array24 = (array_t*)malloc(sizeof(array_t));
      array24->size = 399;
      array24->refC = 1;
      array24->data = (unsigned int*)malloc(array24->size*sizeof(unsigned int));
      memset(array24->data, 0, array24->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop22 = 0;
      unsigned int loopLimit22 = (rand()%loopsFactor)/3 + 1;
      for(; loop22 < loopLimit22; loop22++) {
         array_t* array25;
         if (pCounter > 0) {
            array25 = vars->data[--pCounter];
            array25->refC++;
         } else {
            array25 = (array_t*)malloc(sizeof(array_t));
            array25->size = 932;
            array25->refC = 1;
            array25->data = (unsigned int*)malloc(array25->size*sizeof(unsigned int));
            memset(array25->data, 0, array25->size*sizeof(unsigned int));
         }
         for (int i = 0; i < array24->size; i++) {
            if (array24->data[i] == 76) { 
               return array24;
            }
         }
         unsigned int loop23 = 0;
         unsigned int loopLimit23 = (rand()%loopsFactor)/4 + 1;
         for(; loop23 < loopLimit23; loop23++) {
            for (int i = 0; i < array24->size; i++) {
               array24->data[i]++;
            }
         }
         array25->refC--;
         if(array25->refC == 0) {
            free(array25->data);
            free(array25);
         }
      }
   }
   else {
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array24;
      array_t* array26 = func6(&params0, loopsFactor);
      free(params0.data);
      array26->refC--;
      if(array26->refC == 0) {
         free(array26->data);
         free(array26);
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array24;
   array_t* array27 = func3(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop34 = 0;
   unsigned int loopLimit34 = (rand()%loopsFactor)/3 + 1;
   for(; loop34 < loopLimit34; loop34++) {
      for (int i = 0; i < array24->size; i++) {
         array24->data[i]--;
      }
   }
   array24->refC--;
   if(array24->refC == 0) {
      free(array24->data);
      free(array24);
   }
   return array27;
}

