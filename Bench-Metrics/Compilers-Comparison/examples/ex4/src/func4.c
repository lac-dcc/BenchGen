#include "ex4.h" 
Array func4(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array3;
   if (pCounter > 0) {
      array3 = vars->data[--pCounter];
   } else {
      array3.size = 492;
      array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
      memset(array3.data, 0, array3.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array3.size; i++) {
      array3.data[i]++;
   }
   if(PATH0 & 1) {
      Array array4;
      if (pCounter > 0) {
         array4 = vars->data[--pCounter];
      } else {
         array4.size = 421;
         array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
         memset(array4.data, 0, array4.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array3.size; i++) {
         if (array3.data[i] == 27) { 
            return array3;
         }
      }
      if (array4.size > 0) {
         free(array4.data);
         array4.size = 0;
      }
   }
   else {
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array3;
      Array array4 = func12(&params0, loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array4.size > 0) {
         free(array4.data);
         array4.size = 0;
      }
      Array array5;
      if (pCounter > 0) {
         array5 = vars->data[--pCounter];
      } else {
         array5.size = 926;
         array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
         memset(array5.data, 0, array5.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array3.size; i++) {
         if (array3.data[i] == 26) { 
            return array3;
         }
      }
      if (array5.size > 0) {
         free(array5.data);
         array5.size = 0;
      }
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
   }
   if(PATH0 & 2) {
      Array array4;
      if (pCounter > 0) {
         array4 = vars->data[--pCounter];
      } else {
         array4.size = 172;
         array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
         memset(array4.data, 0, array4.size*sizeof(unsigned int));
      }
      if (array4.size > 0) {
         free(array4.data);
         array4.size = 0;
      }
      unsigned int loop2 = 0;
      unsigned int loopLimit2 = (rand()%loopsFactor)/2 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         ArrayParam params0;
         params0.size = 2;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array3;
         params0.data[1] = array4;
         Array array5 = func13(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
      }
   }
   else {
      Array array4;
      if (pCounter > 0) {
         array4 = vars->data[--pCounter];
      } else {
         array4.size = 567;
         array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
         memset(array4.data, 0, array4.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array4.size; i++) {
         array4.data[i]--;
      }
      for (int i = 0; i < array3.size; i++) {
         array3.data[i]--;
      }
      for (int i = 0; i < array3.size; i++) {
         if (array3.data[i] == 62) { 
            return array3;
         }
      }
      if (array4.size > 0) {
         free(array4.data);
         array4.size = 0;
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array3;
   Array array4 = func8(&params0, loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   if (array4.size > 0) {
      free(array4.data);
      array4.size = 0;
   }
   if (array3.size > 0) {
      free(array3.data);
      array3.size = 0;
   }
   return array3;
}

