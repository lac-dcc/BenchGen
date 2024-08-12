#include "ex4.h" 
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
   } else {
      array4.size = 567;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      memset(array4.data, 0, array4.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array4.size; i++) {
      array4.data[i]++;
   }
   Array array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
   } else {
      array5.size = 497;
      array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
      memset(array5.data, 0, array5.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array5.size; i++) {
      array5.data[i]++;
   }
   if(PATH0 & 1) {
      Array array6;
      if (pCounter > 0) {
         array6 = vars->data[--pCounter];
      } else {
         array6.size = 586;
         array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
         memset(array6.data, 0, array6.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 6) { 
            return array6;
         }
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
   }
   else {
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array4;
      params0.data[1] = array5;
      Array array6 = func12(&params0, loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
      Array array7;
      if (pCounter > 0) {
         array7 = vars->data[--pCounter];
      } else {
         array7.size = 219;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         memset(array7.data, 0, array7.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array4.size; i++) {
         if (array4.data[i] == 28) { 
            return array4;
         }
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
   }
   unsigned int loop14 = 0;
   unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
   for(; loop14 < loopLimit14; loop14++) {
   }
   if(PATH0 & 2) {
      Array array6;
      if (pCounter > 0) {
         array6 = vars->data[--pCounter];
      } else {
         array6.size = 871;
         array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
         memset(array6.data, 0, array6.size*sizeof(unsigned int));
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/2 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         ArrayParam params0;
         params0.size = 3;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array4;
         params0.data[1] = array5;
         params0.data[2] = array6;
         Array array7 = func13(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array7.size > 0) {
            free(array7.data);
            array7.size = 0;
         }
      }
   }
   else {
      Array array6;
      if (pCounter > 0) {
         array6 = vars->data[--pCounter];
      } else {
         array6.size = 829;
         array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
         memset(array6.data, 0, array6.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array4.size; i++) {
         array4.data[i]--;
      }
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]--;
      }
      for (int i = 0; i < array4.size; i++) {
         if (array4.data[i] == 68) { 
            return array4;
         }
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array4;
   params0.data[1] = array5;
   Array array6 = func8(&params0, loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   unsigned int loop16 = 0;
   unsigned int loopLimit16 = (rand()%loopsFactor)/2 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]--;
      }
   }
   for (int i = 0; i < array5.size; i++) {
      array5.data[i]--;
   }
   for (int i = 0; i < array4.size; i++) {
      if (array4.data[i] == 96) { 
         return array4;
      }
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   if(PATH0 & 4) {
      Array array7;
      if (pCounter > 0) {
         array7 = vars->data[--pCounter];
      } else {
         array7.size = 723;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         memset(array7.data, 0, array7.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 45) { 
            return array6;
         }
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
   }
   else {
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array4;
      params1.data[1] = array5;
      params1.data[2] = array6;
      Array array7 = func10(&params1, rng(), loopsFactor);
      if (params1.size > 0) {
         free(params1.data);
         params1.size = 0;
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
      Array array8;
      if (pCounter > 0) {
         array8 = vars->data[--pCounter];
      } else {
         array8.size = 451;
         array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
         memset(array8.data, 0, array8.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array5.size; i++) {
         if (array5.data[i] == 55) { 
            return array5;
         }
      }
      if (array8.size > 0) {
         free(array8.data);
         array8.size = 0;
      }
   }
   unsigned int loop17 = 0;
   unsigned int loopLimit17 = (rand()%loopsFactor)/2 + 1;
   for(; loop17 < loopLimit17; loop17++) {
      Array array7;
      if (pCounter > 0) {
         array7 = vars->data[--pCounter];
      } else {
         array7.size = 379;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         memset(array7.data, 0, array7.size*sizeof(unsigned int));
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
      unsigned int loop18 = 0;
      unsigned int loopLimit18 = (rand()%loopsFactor)/3 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         ArrayParam params1;
         params1.size = 4;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array4;
         params1.data[1] = array5;
         params1.data[2] = array6;
         params1.data[3] = array7;
         Array array8 = func13(&params1, loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array8.size > 0) {
            free(array8.data);
            array8.size = 0;
         }
      }
   }
   return array6;
}

