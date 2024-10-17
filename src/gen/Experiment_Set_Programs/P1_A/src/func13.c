#include "P1_A.h" 
array_t* func13(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array29;
   if (pCounter > 0) {
      array29 = vars->data[--pCounter];
      array29->refC++;
   } else {
      array29 = (array_t*)malloc(sizeof(array_t));
      array29->size = 492;
      array29->refC = 1;
      array29->data = (unsigned int*)malloc(array29->size*sizeof(unsigned int));
      memset(array29->data, 0, array29->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop12 = 0;
      unsigned int loopLimit12 = (rand()%loopsFactor)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
         for (int i = 0; i < array29->size; i++) {
            array29->data[i]--;
         }
      }
      unsigned int loop13 = 0;
      unsigned int loopLimit13 = (rand()%loopsFactor)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         for (int i = 0; i < array29->size; i++) {
            array29->data[i]++;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array29;
      array_t* array30 = func14(&params0, loopsFactor);
      free(params0.data);
      array30->refC--;
      if(array30->refC == 0) {
         free(array30->data);
         free(array30);
      }
   }
   else {
      array_t* array31;
      if (pCounter > 0) {
         array31 = vars->data[--pCounter];
         array31->refC++;
      } else {
         array31 = (array_t*)malloc(sizeof(array_t));
         array31->size = 286;
         array31->refC = 1;
         array31->data = (unsigned int*)malloc(array31->size*sizeof(unsigned int));
         memset(array31->data, 0, array31->size*sizeof(unsigned int));
      }
      for (int i = 0; i < array31->size; i++) {
         array31->data[i]++;
      }
      for (int i = 0; i < array31->size; i++) {
         if (array31->data[i] == 89) { 
            return array31;
         }
      }
      for (int i = 0; i < array29->size; i++) {
         array29->data[i]--;
      }
      array31->refC--;
      if(array31->refC == 0) {
         free(array31->data);
         free(array31);
      }
   }
   unsigned int loop14 = 0;
   unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
   for(; loop14 < loopLimit14; loop14++) {
      for (int i = 0; i < array29->size; i++) {
         array29->data[i]++;
      }
      array_t* array32;
      if (pCounter > 0) {
         array32 = vars->data[--pCounter];
         array32->refC++;
      } else {
         array32 = (array_t*)malloc(sizeof(array_t));
         array32->size = 440;
         array32->refC = 1;
         array32->data = (unsigned int*)malloc(array32->size*sizeof(unsigned int));
         memset(array32->data, 0, array32->size*sizeof(unsigned int));
      }
      for (int i = 0; i < array32->size; i++) {
         array32->data[i]++;
      }
      for (int i = 0; i < array32->size; i++) {
         if (array32->data[i] == 17) { 
            return array32;
         }
      }
      for (int i = 0; i < array32->size; i++) {
         array32->data[i]--;
      }
      array32->refC--;
      if(array32->refC == 0) {
         free(array32->data);
         free(array32);
      }
   }
   return array29;
}

