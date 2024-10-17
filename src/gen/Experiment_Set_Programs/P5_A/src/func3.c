#include "P5_A.h" 
array_t* func3(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array19;
   if (pCounter > 0) {
      array19 = vars->data[--pCounter];
      array19->refC++;
   } else {
      array19 = (array_t*)malloc(sizeof(array_t));
      array19->size = 750;
      array19->refC = 1;
      array19->data = (unsigned int*)malloc(array19->size*sizeof(unsigned int));
      memset(array19->data, 0, array19->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop17 = 0;
      unsigned int loopLimit17 = (rand()%loopsFactor)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         for (int i = 0; i < array19->size; i++) {
            array19->data[i]--;
         }
      }
      unsigned int loop18 = 0;
      unsigned int loopLimit18 = (rand()%loopsFactor)/2 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         array_t* array20;
         if (pCounter > 0) {
            array20 = vars->data[--pCounter];
            array20->refC++;
         } else {
            array20 = (array_t*)malloc(sizeof(array_t));
            array20->size = 808;
            array20->refC = 1;
            array20->data = (unsigned int*)malloc(array20->size*sizeof(unsigned int));
            memset(array20->data, 0, array20->size*sizeof(unsigned int));
         }
         array_t* array21;
         if (pCounter > 0) {
            array21 = vars->data[--pCounter];
            array21->refC++;
         } else {
            array21 = (array_t*)malloc(sizeof(array_t));
            array21->size = 276;
            array21->refC = 1;
            array21->data = (unsigned int*)malloc(array21->size*sizeof(unsigned int));
            memset(array21->data, 0, array21->size*sizeof(unsigned int));
         }
         for (int i = 0; i < array21->size; i++) {
            if (array21->data[i] == 88) { 
               return array21;
            }
         }
         unsigned int loop19 = 0;
         unsigned int loopLimit19 = (rand()%loopsFactor)/3 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            for (int i = 0; i < array19->size; i++) {
               if (array19->data[i] == 3) { 
                  return array19;
               }
            }
         }
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
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array19;
      array_t* array22 = func6(&params0, rng(), loopsFactor);
      free(params0.data);
      array22->refC--;
      if(array22->refC == 0) {
         free(array22->data);
         free(array22);
      }
   }
   else {
      array_t* array23;
      if (pCounter > 0) {
         array23 = vars->data[--pCounter];
         array23->refC++;
      } else {
         array23 = (array_t*)malloc(sizeof(array_t));
         array23->size = 399;
         array23->refC = 1;
         array23->data = (unsigned int*)malloc(array23->size*sizeof(unsigned int));
         memset(array23->data, 0, array23->size*sizeof(unsigned int));
      }
      if(PATH0 & 2) {
         unsigned int loop20 = 0;
         unsigned int loopLimit20 = (rand()%loopsFactor)/2 + 1;
         for(; loop20 < loopLimit20; loop20++) {
            array_t* array24;
            if (pCounter > 0) {
               array24 = vars->data[--pCounter];
               array24->refC++;
            } else {
               array24 = (array_t*)malloc(sizeof(array_t));
               array24->size = 932;
               array24->refC = 1;
               array24->data = (unsigned int*)malloc(array24->size*sizeof(unsigned int));
               memset(array24->data, 0, array24->size*sizeof(unsigned int));
            }
            for (int i = 0; i < array19->size; i++) {
               if (array19->data[i] == 76) { 
                  return array19;
               }
            }
            unsigned int loop21 = 0;
            unsigned int loopLimit21 = (rand()%loopsFactor)/3 + 1;
            for(; loop21 < loopLimit21; loop21++) {
               for (int i = 0; i < array19->size; i++) {
                  array19->data[i]++;
               }
            }
            array24->refC--;
            if(array24->refC == 0) {
               free(array24->data);
               free(array24);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array19;
         params0.data[1] = array23;
         array_t* array25 = func7(&params0, loopsFactor);
         free(params0.data);
         array25->refC--;
         if(array25->refC == 0) {
            free(array25->data);
            free(array25);
         }
      }
      unsigned int loop22 = 0;
      unsigned int loopLimit22 = (rand()%loopsFactor)/2 + 1;
      for(; loop22 < loopLimit22; loop22++) {
         for (int i = 0; i < array19->size; i++) {
            array19->data[i]++;
         }
         for (int i = 0; i < array19->size; i++) {
            array19->data[i]--;
         }
         for (int i = 0; i < array19->size; i++) {
            array19->data[i]--;
         }
      }
      array23->refC--;
      if(array23->refC == 0) {
         free(array23->data);
         free(array23);
      }
   }
   unsigned int loop23 = 0;
   unsigned int loopLimit23 = (rand()%loopsFactor)/2 + 1;
   for(; loop23 < loopLimit23; loop23++) {
      for (int i = 0; i < array19->size; i++) {
         array19->data[i]++;
      }
      array_t* array26;
      if (pCounter > 0) {
         array26 = vars->data[--pCounter];
         array26->refC++;
      } else {
         array26 = (array_t*)malloc(sizeof(array_t));
         array26->size = 795;
         array26->refC = 1;
         array26->data = (unsigned int*)malloc(array26->size*sizeof(unsigned int));
         memset(array26->data, 0, array26->size*sizeof(unsigned int));
      }
      if(PATH0 & 4) {
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (rand()%loopsFactor)/3 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            array_t* array27;
            if (pCounter > 0) {
               array27 = vars->data[--pCounter];
               array27->refC++;
            } else {
               array27 = (array_t*)malloc(sizeof(array_t));
               array27->size = 570;
               array27->refC = 1;
               array27->data = (unsigned int*)malloc(array27->size*sizeof(unsigned int));
               memset(array27->data, 0, array27->size*sizeof(unsigned int));
            }
            for (int i = 0; i < array27->size; i++) {
               if (array27->data[i] == 78) { 
                  return array27;
               }
            }
            unsigned int loop25 = 0;
            unsigned int loopLimit25 = (rand()%loopsFactor)/4 + 1;
            for(; loop25 < loopLimit25; loop25++) {
               for (int i = 0; i < array27->size; i++) {
                  array27->data[i]++;
               }
            }
            array27->refC--;
            if(array27->refC == 0) {
               free(array27->data);
               free(array27);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array19;
         params0.data[1] = array26;
         array_t* array28 = func7(&params0, loopsFactor);
         free(params0.data);
         array28->refC--;
         if(array28->refC == 0) {
            free(array28->data);
            free(array28);
         }
      }
      unsigned int loop26 = 0;
      unsigned int loopLimit26 = (rand()%loopsFactor)/3 + 1;
      for(; loop26 < loopLimit26; loop26++) {
         for (int i = 0; i < array19->size; i++) {
            array19->data[i]++;
         }
         for (int i = 0; i < array26->size; i++) {
            array26->data[i]--;
         }
         for (int i = 0; i < array19->size; i++) {
            array19->data[i]--;
         }
      }
      array26->refC--;
      if(array26->refC == 0) {
         free(array26->data);
         free(array26);
      }
   }
   return array19;
}

