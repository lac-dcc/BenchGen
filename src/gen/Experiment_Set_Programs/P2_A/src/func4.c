#include "P2_A.h" 
array_t* func4(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array17;
   if (pCounter > 0) {
      array17 = vars->data[--pCounter];
      array17->refC++;
   } else {
      array17 = (array_t*)malloc(sizeof(array_t));
      array17->size = 895;
      array17->refC = 1;
      array17->data = (unsigned int*)malloc(array17->size*sizeof(unsigned int));
      memset(array17->data, 0, array17->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop14 = 0;
      unsigned int loopLimit14 = (rand()%loopsFactor)/3 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         for (int i = 0; i < array17->size; i++) {
            array17->data[i]--;
         }
      }
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/3 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         for (int i = 0; i < array17->size; i++) {
            array17->data[i]++;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array17;
      array_t* array18 = func6(&params0, loopsFactor);
      free(params0.data);
      array18->refC--;
      if(array18->refC == 0) {
         free(array18->data);
         free(array18);
      }
   }
   else {
      array_t* array19;
      if (pCounter > 0) {
         array19 = vars->data[--pCounter];
         array19->refC++;
      } else {
         array19 = (array_t*)malloc(sizeof(array_t));
         array19->size = 434;
         array19->refC = 1;
         array19->data = (unsigned int*)malloc(array19->size*sizeof(unsigned int));
         memset(array19->data, 0, array19->size*sizeof(unsigned int));
      }
      unsigned int loop16 = 0;
      unsigned int loopLimit16 = (rand()%loopsFactor)/3 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         for (int i = 0; i < array17->size; i++) {
            array17->data[i]--;
         }
      }
      for (int i = 0; i < array19->size; i++) {
         array19->data[i]++;
      }
      for (int i = 0; i < array17->size; i++) {
         if (array17->data[i] == 87) { 
            return array17;
         }
      }
      for (int i = 0; i < array17->size; i++) {
         array17->data[i]--;
      }
      array19->refC--;
      if(array19->refC == 0) {
         free(array19->data);
         free(array19);
      }
   }
   unsigned int loop17 = 0;
   unsigned int loopLimit17 = (rand()%loopsFactor)/3 + 1;
   for(; loop17 < loopLimit17; loop17++) {
      for (int i = 0; i < array17->size; i++) {
         array17->data[i]++;
      }
      array_t* array20;
      if (pCounter > 0) {
         array20 = vars->data[--pCounter];
         array20->refC++;
      } else {
         array20 = (array_t*)malloc(sizeof(array_t));
         array20->size = 178;
         array20->refC = 1;
         array20->data = (unsigned int*)malloc(array20->size*sizeof(unsigned int));
         memset(array20->data, 0, array20->size*sizeof(unsigned int));
      }
      unsigned int loop18 = 0;
      unsigned int loopLimit18 = (rand()%loopsFactor)/4 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         for (int i = 0; i < array17->size; i++) {
            array17->data[i]--;
         }
      }
      for (int i = 0; i < array17->size; i++) {
         array17->data[i]++;
      }
      for (int i = 0; i < array20->size; i++) {
         if (array20->data[i] == 51) { 
            return array20;
         }
      }
      for (int i = 0; i < array17->size; i++) {
         array17->data[i]--;
      }
      array20->refC--;
      if(array20->refC == 0) {
         free(array20->data);
         free(array20);
      }
   }
   return array17;
}

