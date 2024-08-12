#include "ex4.h" 
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   if(PATH0 & 1) {
      Array array7;
      if (pCounter > 0) {
         array7 = vars->data[--pCounter];
      } else {
         array7.size = 928;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         memset(array7.data, 0, array7.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array7.size; i++) {
         if (array7.data[i] == 76) { 
            return array7;
         }
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array7 = func4(&params0, rng(), loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
      Array array8;
      if (pCounter > 0) {
         array8 = vars->data[--pCounter];
      } else {
         array8.size = 443;
         array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
         memset(array8.data, 0, array8.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array8.size; i++) {
         if (array8.data[i] == 13) { 
            return array8;
         }
      }
      if (array8.size > 0) {
         free(array8.data);
         array8.size = 0;
      }
   }
   unsigned int loop23 = 0;
   unsigned int loopLimit23 = (rand()%loopsFactor)/3 + 1;
   for(; loop23 < loopLimit23; loop23++) {
      Array array7;
      if (pCounter > 0) {
         array7 = vars->data[--pCounter];
      } else {
         array7.size = 538;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         memset(array7.data, 0, array7.size*sizeof(unsigned int));
      }
      Array array8;
      if (pCounter > 0) {
         array8 = vars->data[--pCounter];
      } else {
         array8.size = 606;
         array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
         memset(array8.data, 0, array8.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array7.size; i++) {
         array7.data[i]++;
      }
      if(PATH0 & 2) {
      }
      else {
         Array array9;
         if (pCounter > 0) {
            array9 = vars->data[--pCounter];
         } else {
            array9.size = 904;
            array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
            memset(array9.data, 0, array9.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array8.size; i++) {
            array8.data[i]--;
         }
         for (int i = 0; i < array7.size; i++) {
            array7.data[i]--;
         }
         for (int i = 0; i < array7.size; i++) {
            if (array7.data[i] == 69) { 
               return array7;
            }
         }
         if (array9.size > 0) {
            free(array9.data);
            array9.size = 0;
         }
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array7;
      params0.data[1] = array8;
      Array array9 = func15(&params0, loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array9.size > 0) {
         free(array9.data);
         array9.size = 0;
      }
      if (array8.size > 0) {
         free(array8.data);
         array8.size = 0;
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
      unsigned int loop24 = 0;
      unsigned int loopLimit24 = (rand()%loopsFactor)/4 + 1;
      for(; loop24 < loopLimit24; loop24++) {
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array7;
         params1.data[1] = array8;
         params1.data[2] = array9;
         Array array10 = func9(&params1, rng(), loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array10.size > 0) {
            free(array10.data);
            array10.size = 0;
         }
      }
   }
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array7 = func6(&params0, rng(), loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   if (array7.size > 0) {
      free(array7.data);
      array7.size = 0;
   }
   return array7;
}

