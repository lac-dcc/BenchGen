#include "P3_A.h" 
array_t* func2(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array15;
   if (pCounter > 0) {
      array15 = vars->data[--pCounter];
      array15->refC++;
   } else {
      array15 = (array_t*)malloc(sizeof(array_t));
      array15->size = 336;
      array15->refC = 1;
      array15->data = (unsigned int*)malloc(array15->size*sizeof(unsigned int));
      memset(array15->data, 0, array15->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/3 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         for (int i = 0; i < array15->size; i++) {
            array15->data[i]--;
         }
      }
      unsigned int loop16 = 0;
      unsigned int loopLimit16 = (rand()%loopsFactor)/3 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         for (int i = 0; i < array15->size; i++) {
            array15->data[i]++;
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array15;
      array_t* array16 = func5(&params0, rng(), loopsFactor);
      free(params0.data);
      array16->refC--;
      if(array16->refC == 0) {
         free(array16->data);
         free(array16);
      }
   }
   else {
      array_t* array17;
      if (pCounter > 0) {
         array17 = vars->data[--pCounter];
         array17->refC++;
      } else {
         array17 = (array_t*)malloc(sizeof(array_t));
         array17->size = 857;
         array17->refC = 1;
         array17->data = (unsigned int*)malloc(array17->size*sizeof(unsigned int));
         memset(array17->data, 0, array17->size*sizeof(unsigned int));
      }
      if(PATH0 & 2) {
         unsigned int loop17 = 0;
         unsigned int loopLimit17 = (rand()%loopsFactor)/3 + 1;
         for(; loop17 < loopLimit17; loop17++) {
            array_t* array18;
            if (pCounter > 0) {
               array18 = vars->data[--pCounter];
               array18->refC++;
            } else {
               array18 = (array_t*)malloc(sizeof(array_t));
               array18->size = 124;
               array18->refC = 1;
               array18->data = (unsigned int*)malloc(array18->size*sizeof(unsigned int));
               memset(array18->data, 0, array18->size*sizeof(unsigned int));
            }
            for (int i = 0; i < array15->size; i++) {
               if (array15->data[i] == 82) { 
                  return array15;
               }
            }
            unsigned int loop18 = 0;
            unsigned int loopLimit18 = (rand()%loopsFactor)/4 + 1;
            for(; loop18 < loopLimit18; loop18++) {
               for (int i = 0; i < array15->size; i++) {
                  array15->data[i]++;
               }
            }
            array18->refC--;
            if(array18->refC == 0) {
               free(array18->data);
               free(array18);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array15;
         params0.data[1] = array17;
         array_t* array19 = func6(&params0, loopsFactor);
         free(params0.data);
         array19->refC--;
         if(array19->refC == 0) {
            free(array19->data);
            free(array19);
         }
      }
      array17->refC--;
      if(array17->refC == 0) {
         free(array17->data);
         free(array17);
      }
   }
   unsigned int loop19 = 0;
   unsigned int loopLimit19 = (rand()%loopsFactor)/3 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      for (int i = 0; i < array15->size; i++) {
         array15->data[i]++;
      }
      array_t* array20;
      if (pCounter > 0) {
         array20 = vars->data[--pCounter];
         array20->refC++;
      } else {
         array20 = (array_t*)malloc(sizeof(array_t));
         array20->size = 364;
         array20->refC = 1;
         array20->data = (unsigned int*)malloc(array20->size*sizeof(unsigned int));
         memset(array20->data, 0, array20->size*sizeof(unsigned int));
      }
      if(PATH0 & 4) {
         unsigned int loop20 = 0;
         unsigned int loopLimit20 = (rand()%loopsFactor)/4 + 1;
         for(; loop20 < loopLimit20; loop20++) {
            array_t* array21;
            if (pCounter > 0) {
               array21 = vars->data[--pCounter];
               array21->refC++;
            } else {
               array21 = (array_t*)malloc(sizeof(array_t));
               array21->size = 43;
               array21->refC = 1;
               array21->data = (unsigned int*)malloc(array21->size*sizeof(unsigned int));
               memset(array21->data, 0, array21->size*sizeof(unsigned int));
            }
            for (int i = 0; i < array21->size; i++) {
               if (array21->data[i] == 87) { 
                  return array21;
               }
            }
            unsigned int loop21 = 0;
            unsigned int loopLimit21 = (rand()%loopsFactor)/5 + 1;
            for(; loop21 < loopLimit21; loop21++) {
               for (int i = 0; i < array15->size; i++) {
                  array15->data[i]++;
               }
            }
            array21->refC--;
            if(array21->refC == 0) {
               free(array21->data);
               free(array21);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array15;
         params0.data[1] = array20;
         array_t* array22 = func6(&params0, loopsFactor);
         free(params0.data);
         array22->refC--;
         if(array22->refC == 0) {
            free(array22->data);
            free(array22);
         }
      }
      array20->refC--;
      if(array20->refC == 0) {
         free(array20->data);
         free(array20);
      }
   }
   return array15;
}

