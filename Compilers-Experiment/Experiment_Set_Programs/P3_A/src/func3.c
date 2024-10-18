#include "P3_A.h" 
array_t* func3(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array28;
   if (pCounter > 0) {
      array28 = vars->data[--pCounter];
      array28->refC++;
   } else {
      array28 = (array_t*)malloc(sizeof(array_t));
      array28->size = 795;
      array28->refC = 1;
      array28->data = (unsigned int*)malloc(array28->size*sizeof(unsigned int));
      memset(array28->data, 0, array28->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop24 = 0;
      unsigned int loopLimit24 = (rand()%loopsFactor)/3 + 1;
      for(; loop24 < loopLimit24; loop24++) {
         for (int i = 0; i < array28->size; i++) {
            array28->data[i]--;
         }
      }
      unsigned int loop25 = 0;
      unsigned int loopLimit25 = (rand()%loopsFactor)/3 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         for (int i = 0; i < array28->size; i++) {
            array28->data[i]++;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array28;
      array_t* array29 = func5(&params0, rng(), loopsFactor);
      free(params0.data);
      array29->refC--;
      if(array29->refC == 0) {
         free(array29->data);
         free(array29);
      }
   }
   else {
      unsigned int loop26 = 0;
      unsigned int loopLimit26 = (rand()%loopsFactor)/3 + 1;
      for(; loop26 < loopLimit26; loop26++) {
         for (int i = 0; i < array28->size; i++) {
            array28->data[i]--;
         }
      }
      unsigned int loop27 = 0;
      unsigned int loopLimit27 = (rand()%loopsFactor)/3 + 1;
      for(; loop27 < loopLimit27; loop27++) {
         for (int i = 0; i < array28->size; i++) {
            array28->data[i]++;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array28;
      array_t* array30 = func5(&params0, rng(), loopsFactor);
      free(params0.data);
      array30->refC--;
      if(array30->refC == 0) {
         free(array30->data);
         free(array30);
      }
   }
   unsigned int loop28 = 0;
   unsigned int loopLimit28 = (rand()%loopsFactor)/3 + 1;
   for(; loop28 < loopLimit28; loop28++) {
      for (int i = 0; i < array28->size; i++) {
         array28->data[i]++;
      }
      unsigned int loop29 = 0;
      unsigned int loopLimit29 = (rand()%loopsFactor)/4 + 1;
      for(; loop29 < loopLimit29; loop29++) {
         for (int i = 0; i < array28->size; i++) {
            array28->data[i]--;
         }
      }
      unsigned int loop30 = 0;
      unsigned int loopLimit30 = (rand()%loopsFactor)/4 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         for (int i = 0; i < array28->size; i++) {
            array28->data[i]++;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array28;
      array_t* array31 = func5(&params0, rng(), loopsFactor);
      free(params0.data);
      array31->refC--;
      if(array31->refC == 0) {
         free(array31->data);
         free(array31);
      }
   }
   unsigned int loop31 = 0;
   unsigned int loopLimit31 = (rand()%loopsFactor)/3 + 1;
   for(; loop31 < loopLimit31; loop31++) {
      for (int i = 0; i < array28->size; i++) {
         array28->data[i]++;
      }
      unsigned int loop32 = 0;
      unsigned int loopLimit32 = (rand()%loopsFactor)/4 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         for (int i = 0; i < array28->size; i++) {
            array28->data[i]--;
         }
      }
      unsigned int loop33 = 0;
      unsigned int loopLimit33 = (rand()%loopsFactor)/4 + 1;
      for(; loop33 < loopLimit33; loop33++) {
         for (int i = 0; i < array28->size; i++) {
            array28->data[i]++;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array28;
      array_t* array32 = func5(&params0, rng(), loopsFactor);
      free(params0.data);
      array32->refC--;
      if(array32->refC == 0) {
         free(array32->data);
         free(array32);
      }
   }
   return array28;
}

