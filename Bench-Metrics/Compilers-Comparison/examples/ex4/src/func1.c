#include "ex4.h" 
Array func1(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array3;
   if (pCounter > 0) {
      array3 = vars->data[--pCounter];
   } else {
      array3.size = 500;
      array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
      memset(array3.data, 0, array3.size*sizeof(unsigned int));
   }
   Array array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
   } else {
      array4.size = 34;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      memset(array4.data, 0, array4.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array3.size; i++) {
      array3.data[i]++;
   }
   if(PATH0 & 1) {
      Array array5;
      if (pCounter > 0) {
         array5 = vars->data[--pCounter];
      } else {
         array5.size = 124;
         array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
         memset(array5.data, 0, array5.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array4.size; i++) {
         if (array4.data[i] == 87) { 
            return array4;
         }
      }
      if (array5.size > 0) {
         free(array5.data);
         array5.size = 0;
      }
   }
   else {
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array3;
      params0.data[1] = array4;
      Array array5 = func10(&params0, rng(), loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array5.size > 0) {
         free(array5.data);
         array5.size = 0;
      }
      Array array6;
      if (pCounter > 0) {
         array6 = vars->data[--pCounter];
      } else {
         array6.size = 743;
         array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
         memset(array6.data, 0, array6.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 27) { 
            return array6;
         }
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
   }
   unsigned int loop19 = 0;
   unsigned int loopLimit19 = (rand()%loopsFactor)/2 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      Array array5;
      if (pCounter > 0) {
         array5 = vars->data[--pCounter];
      } else {
         array5.size = 365;
         array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
         memset(array5.data, 0, array5.size*sizeof(unsigned int));
      }
      if (array5.size > 0) {
         free(array5.data);
         array5.size = 0;
      }
      unsigned int loop20 = 0;
      unsigned int loopLimit20 = (rand()%loopsFactor)/3 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         ArrayParam params0;
         params0.size = 3;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array3;
         params0.data[1] = array4;
         params0.data[2] = array5;
         Array array6 = func13(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array6.size > 0) {
            free(array6.data);
            array6.size = 0;
         }
      }
   }
   if(PATH0 & 2) {
      Array array5;
      if (pCounter > 0) {
         array5 = vars->data[--pCounter];
      } else {
         array5.size = 936;
         array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
         memset(array5.data, 0, array5.size*sizeof(unsigned int));
      }
      Array array6;
      if (pCounter > 0) {
         array6 = vars->data[--pCounter];
      } else {
         array6.size = 432;
         array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
         memset(array6.data, 0, array6.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]++;
      }
      if(PATH0 & 4) {
      }
      else {
         Array array7;
         if (pCounter > 0) {
            array7 = vars->data[--pCounter];
         } else {
            array7.size = 437;
            array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
            memset(array7.data, 0, array7.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array6.size; i++) {
            array6.data[i]--;
         }
         for (int i = 0; i < array3.size; i++) {
            array3.data[i]--;
         }
         for (int i = 0; i < array5.size; i++) {
            if (array5.data[i] == 74) { 
               return array5;
            }
         }
         if (array7.size > 0) {
            free(array7.data);
            array7.size = 0;
         }
      }
      ArrayParam params0;
      params0.size = 4;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array3;
      params0.data[1] = array4;
      params0.data[2] = array5;
      params0.data[3] = array6;
      Array array7 = func15(&params0, loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
      if (array5.size > 0) {
         free(array5.data);
         array5.size = 0;
      }
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (rand()%loopsFactor)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         ArrayParam params1;
         params1.size = 5;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array3;
         params1.data[1] = array4;
         params1.data[2] = array5;
         params1.data[3] = array6;
         params1.data[4] = array7;
         Array array8 = func9(&params1, rng(), loopsFactor);
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
   else {
      Array array5;
      if (pCounter > 0) {
         array5 = vars->data[--pCounter];
      } else {
         array5.size = 395;
         array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
         memset(array5.data, 0, array5.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array5.size; i++) {
         array5.data[i]--;
      }
      for (int i = 0; i < array4.size; i++) {
         array4.data[i]--;
      }
      for (int i = 0; i < array3.size; i++) {
         if (array3.data[i] == 93) { 
            return array3;
         }
      }
      if (array5.size > 0) {
         free(array5.data);
         array5.size = 0;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array3;
   params0.data[1] = array4;
   Array array5 = func7(&params0, loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   if (array4.size > 0) {
      free(array4.data);
      array4.size = 0;
   }
   if (array3.size > 0) {
      free(array3.data);
      array3.size = 0;
   }
   unsigned int loop22 = 0;
   unsigned int loopLimit22 = (rand()%loopsFactor)/2 + 1;
   for(; loop22 < loopLimit22; loop22++) {
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array3;
      params1.data[1] = array4;
      params1.data[2] = array5;
      Array array6 = func3(&params1, rng(), loopsFactor);
      if (params1.size > 0) {
         free(params1.data);
         params1.size = 0;
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
   }
   return array3;
}

