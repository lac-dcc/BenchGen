#include "P1_A.h" 
array_t* func8(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array13;
   if (pCounter > 0) {
      array13 = vars->data[--pCounter];
      array13->refC++;
   } else {
      array13 = (array_t*)malloc(sizeof(array_t));
      array13->size = 198;
      array13->refC = 1;
      array13->data = (unsigned int*)malloc(array13->size*sizeof(unsigned int));
      memset(array13->data, 0, array13->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop6 = 0;
      unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         for (int i = 0; i < array13->size; i++) {
            array13->data[i]--;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array13;
      array_t* array14 = func15(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         for (int i = 0; i < array14->size; i++) {
            array14->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array13;
      params1.data[1] = array14;
      array_t* array16 = func12(&params1, loopsFactor);
      free(params1.data);
      array16->refC--;
      if(array16->refC == 0) {
         free(array16->data);
         free(array16);
      }
      array14->refC--;
      if(array14->refC == 0) {
         free(array14->data);
         free(array14);
      }
   }
   else {
      array_t* array18;
      if (pCounter > 0) {
         array18 = vars->data[--pCounter];
         array18->refC++;
      } else {
         array18 = (array_t*)malloc(sizeof(array_t));
         array18->size = 846;
         array18->refC = 1;
         array18->data = (unsigned int*)malloc(array18->size*sizeof(unsigned int));
         memset(array18->data, 0, array18->size*sizeof(unsigned int));
      }
      for (int i = 0; i < array18->size; i++) {
         array18->data[i]++;
      }
      for (int i = 0; i < array18->size; i++) {
         if (array18->data[i] == 57) { 
            return array18;
         }
      }
      for (int i = 0; i < array13->size; i++) {
         array13->data[i]--;
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array13;
      params0.data[1] = array18;
      array_t* array19 = func15(&params0, rng(), loopsFactor);
      free(params0.data);
      array19->refC--;
      if(array19->refC == 0) {
         free(array19->data);
         free(array19);
      }
      array18->refC--;
      if(array18->refC == 0) {
         free(array18->data);
         free(array18);
      }
   }
   unsigned int loop9 = 0;
   unsigned int loopLimit9 = (rand()%loopsFactor)/2 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      for (int i = 0; i < array13->size; i++) {
         array13->data[i]++;
      }
      array_t* array20;
      if (pCounter > 0) {
         array20 = vars->data[--pCounter];
         array20->refC++;
      } else {
         array20 = (array_t*)malloc(sizeof(array_t));
         array20->size = 814;
         array20->refC = 1;
         array20->data = (unsigned int*)malloc(array20->size*sizeof(unsigned int));
         memset(array20->data, 0, array20->size*sizeof(unsigned int));
      }
      for (int i = 0; i < array20->size; i++) {
         array20->data[i]++;
      }
      for (int i = 0; i < array13->size; i++) {
         if (array13->data[i] == 64) { 
            return array13;
         }
      }
      for (int i = 0; i < array20->size; i++) {
         array20->data[i]--;
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array13;
      params0.data[1] = array20;
      array_t* array21 = func15(&params0, rng(), loopsFactor);
      free(params0.data);
      array21->refC--;
      if(array21->refC == 0) {
         free(array21->data);
         free(array21);
      }
      array20->refC--;
      if(array20->refC == 0) {
         free(array20->data);
         free(array20);
      }
   }
   return array13;
}

