#include "P1_A.h" 
array_t* func5(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array23;
   if (pCounter > 0) {
      array23 = vars->data[--pCounter];
      array23->refC++;
   } else {
      array23 = (array_t*)malloc(sizeof(array_t));
      array23->size = 651;
      array23->refC = 1;
      array23->data = (unsigned int*)malloc(array23->size*sizeof(unsigned int));
      memset(array23->data, 0, array23->size*sizeof(unsigned int));
   }
   for (int i = 0; i < array23->size; i++) {
      array23->data[i]++;
   }
   for (int i = 0; i < array23->size; i++) {
      if (array23->data[i] == 32) { 
         return array23;
      }
   }
   for (int i = 0; i < array23->size; i++) {
      array23->data[i]--;
   }
   array_t* array24;
   if (pCounter > 0) {
      array24 = vars->data[--pCounter];
      array24->refC++;
   } else {
      array24 = (array_t*)malloc(sizeof(array_t));
      array24->size = 676;
      array24->refC = 1;
      array24->data = (unsigned int*)malloc(array24->size*sizeof(unsigned int));
      memset(array24->data, 0, array24->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop11 = 0;
      unsigned int loopLimit11 = (rand()%loopsFactor)/2 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         array_t* array25;
         if (pCounter > 0) {
            array25 = vars->data[--pCounter];
            array25->refC++;
         } else {
            array25 = (array_t*)malloc(sizeof(array_t));
            array25->size = 368;
            array25->refC = 1;
            array25->data = (unsigned int*)malloc(array25->size*sizeof(unsigned int));
            memset(array25->data, 0, array25->size*sizeof(unsigned int));
         }
         for (int i = 0; i < array24->size; i++) {
            array24->data[i]--;
         }
         for (int i = 0; i < array24->size; i++) {
            if (array24->data[i] == 26) { 
               return array24;
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
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array23;
      params0.data[1] = array24;
      array_t* array26 = func16(&params0, loopsFactor);
      free(params0.data);
      array26->refC--;
      if(array26->refC == 0) {
         free(array26->data);
         free(array26);
      }
   }
   array_t_param params0;
   params0.size = 2;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array23;
   params0.data[1] = array24;
   array_t* array28 = func13(&params0, rng(), loopsFactor);
   free(params0.data);
   array28->refC--;
   if(array28->refC == 0) {
      free(array28->data);
      free(array28);
   }
   array24->refC--;
   if(array24->refC == 0) {
      free(array24->data);
      free(array24);
   }
   return array23;
}

