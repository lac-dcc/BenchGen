#include "P4_A.h" 
array_t* func1(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array22;
   if (pCounter > 0) {
      array22 = vars->data[--pCounter];
      array22->refC++;
   } else {
      array22 = (array_t*)malloc(sizeof(array_t));
      array22->size = 754;
      array22->refC = 1;
      array22->data = (unsigned int*)malloc(array22->size*sizeof(unsigned int));
      memset(array22->data, 0, array22->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (rand()%loopsFactor)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         for (int i = 0; i < array22->size; i++) {
            array22->data[i]--;
         }
      }
      unsigned int loop22 = 0;
      unsigned int loopLimit22 = (rand()%loopsFactor)/2 + 1;
      for(; loop22 < loopLimit22; loop22++) {
         array_t* array23;
         if (pCounter > 0) {
            array23 = vars->data[--pCounter];
            array23->refC++;
         } else {
            array23 = (array_t*)malloc(sizeof(array_t));
            array23->size = 932;
            array23->refC = 1;
            array23->data = (unsigned int*)malloc(array23->size*sizeof(unsigned int));
            memset(array23->data, 0, array23->size*sizeof(unsigned int));
         }
         array_t* array24;
         if (pCounter > 0) {
            array24 = vars->data[--pCounter];
            array24->refC++;
         } else {
            array24 = (array_t*)malloc(sizeof(array_t));
            array24->size = 60;
            array24->refC = 1;
            array24->data = (unsigned int*)malloc(array24->size*sizeof(unsigned int));
            memset(array24->data, 0, array24->size*sizeof(unsigned int));
         }
         for (int i = 0; i < array24->size; i++) {
            if (array24->data[i] == 68) { 
               return array24;
            }
         }
         unsigned int loop23 = 0;
         unsigned int loopLimit23 = (rand()%loopsFactor)/3 + 1;
         for(; loop23 < loopLimit23; loop23++) {
            for (int i = 0; i < array23->size; i++) {
               if (array23->data[i] == 12) { 
                  return array23;
               }
            }
         }
         array24->refC--;
         if(array24->refC == 0) {
            free(array24->data);
            free(array24);
         }
         array23->refC--;
         if(array23->refC == 0) {
            free(array23->data);
            free(array23);
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array22;
      array_t* array25 = func4(&params0, rng(), loopsFactor);
      free(params0.data);
      array25->refC--;
      if(array25->refC == 0) {
         free(array25->data);
         free(array25);
      }
   }
   else {
      array_t* array26;
      if (pCounter > 0) {
         array26 = vars->data[--pCounter];
         array26->refC++;
      } else {
         array26 = (array_t*)malloc(sizeof(array_t));
         array26->size = 94;
         array26->refC = 1;
         array26->data = (unsigned int*)malloc(array26->size*sizeof(unsigned int));
         memset(array26->data, 0, array26->size*sizeof(unsigned int));
      }
      if(PATH0 & 2) {
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (rand()%loopsFactor)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            array_t* array27;
            if (pCounter > 0) {
               array27 = vars->data[--pCounter];
               array27->refC++;
            } else {
               array27 = (array_t*)malloc(sizeof(array_t));
               array27->size = 539;
               array27->refC = 1;
               array27->data = (unsigned int*)malloc(array27->size*sizeof(unsigned int));
               memset(array27->data, 0, array27->size*sizeof(unsigned int));
            }
            for (int i = 0; i < array22->size; i++) {
               if (array22->data[i] == 70) { 
                  return array22;
               }
            }
            unsigned int loop25 = 0;
            unsigned int loopLimit25 = (rand()%loopsFactor)/3 + 1;
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
         params0.data[0] = array22;
         params0.data[1] = array26;
         array_t* array28 = func5(&params0, loopsFactor);
         free(params0.data);
         array28->refC--;
         if(array28->refC == 0) {
            free(array28->data);
            free(array28);
         }
      }
      unsigned int loop26 = 0;
      unsigned int loopLimit26 = (rand()%loopsFactor)/2 + 1;
      for(; loop26 < loopLimit26; loop26++) {
         for (int i = 0; i < array26->size; i++) {
            array26->data[i]++;
         }
         for (int i = 0; i < array26->size; i++) {
            array26->data[i]--;
         }
         for (int i = 0; i < array22->size; i++) {
            array22->data[i]--;
         }
      }
      array26->refC--;
      if(array26->refC == 0) {
         free(array26->data);
         free(array26);
      }
   }
   unsigned int loop27 = 0;
   unsigned int loopLimit27 = (rand()%loopsFactor)/2 + 1;
   for(; loop27 < loopLimit27; loop27++) {
      for (int i = 0; i < array22->size; i++) {
         array22->data[i]++;
      }
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
      if(PATH0 & 4) {
         unsigned int loop28 = 0;
         unsigned int loopLimit28 = (rand()%loopsFactor)/3 + 1;
         for(; loop28 < loopLimit28; loop28++) {
            array_t* array30;
            if (pCounter > 0) {
               array30 = vars->data[--pCounter];
               array30->refC++;
            } else {
               array30 = (array_t*)malloc(sizeof(array_t));
               array30->size = 652;
               array30->refC = 1;
               array30->data = (unsigned int*)malloc(array30->size*sizeof(unsigned int));
               memset(array30->data, 0, array30->size*sizeof(unsigned int));
            }
            for (int i = 0; i < array30->size; i++) {
               if (array30->data[i] == 1) { 
                  return array30;
               }
            }
            unsigned int loop29 = 0;
            unsigned int loopLimit29 = (rand()%loopsFactor)/4 + 1;
            for(; loop29 < loopLimit29; loop29++) {
               for (int i = 0; i < array30->size; i++) {
                  array30->data[i]++;
               }
            }
            array30->refC--;
            if(array30->refC == 0) {
               free(array30->data);
               free(array30);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array22;
         params0.data[1] = array29;
         array_t* array31 = func5(&params0, loopsFactor);
         free(params0.data);
         array31->refC--;
         if(array31->refC == 0) {
            free(array31->data);
            free(array31);
         }
      }
      unsigned int loop30 = 0;
      unsigned int loopLimit30 = (rand()%loopsFactor)/3 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         for (int i = 0; i < array29->size; i++) {
            array29->data[i]++;
         }
         for (int i = 0; i < array29->size; i++) {
            array29->data[i]--;
         }
         for (int i = 0; i < array22->size; i++) {
            array22->data[i]--;
         }
      }
      array29->refC--;
      if(array29->refC == 0) {
         free(array29->data);
         free(array29);
      }
   }
   return array22;
}

