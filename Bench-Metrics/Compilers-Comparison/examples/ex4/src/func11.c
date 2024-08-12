#include "ex4.h" 
Array func11(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array7;
   if (pCounter > 0) {
      array7 = vars->data[--pCounter];
   } else {
      array7.size = 795;
      array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
      memset(array7.data, 0, array7.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array7.size; i++) {
      array7.data[i]++;
   }
   Array array8;
   if (pCounter > 0) {
      array8 = vars->data[--pCounter];
   } else {
      array8.size = 434;
      array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
      memset(array8.data, 0, array8.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array7.size; i++) {
      array7.data[i]++;
   }
   if(PATH0 & 1) {
   }
   else {
      Array array9;
      if (pCounter > 0) {
         array9 = vars->data[--pCounter];
      } else {
         array9.size = 467;
         array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
         memset(array9.data, 0, array9.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array7.size; i++) {
         array7.data[i]--;
      }
      for (int i = 0; i < array9.size; i++) {
         array9.data[i]--;
      }
      for (int i = 0; i < array9.size; i++) {
         if (array9.data[i] == 17) { 
            return array9;
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
   unsigned int loop12 = 0;
   unsigned int loopLimit12 = (rand()%loopsFactor)/3 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      for (int i = 0; i < array8.size; i++) {
         array8.data[i]--;
      }
   }
   for (int i = 0; i < array9.size; i++) {
      array9.data[i]--;
   }
   for (int i = 0; i < array8.size; i++) {
      if (array8.data[i] == 80) { 
         return array8;
      }
   }
   if (array9.size > 0) {
      free(array9.data);
      array9.size = 0;
   }
   if(PATH0 & 2) {
      Array array10;
      if (pCounter > 0) {
         array10 = vars->data[--pCounter];
      } else {
         array10.size = 286;
         array10.data = (unsigned int*)malloc(array10.size*sizeof(unsigned int));
         memset(array10.data, 0, array10.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array8.size; i++) {
         if (array8.data[i] == 65) { 
            return array8;
         }
      }
      if (array10.size > 0) {
         free(array10.data);
         array10.size = 0;
      }
   }
   else {
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array7;
      params1.data[1] = array8;
      params1.data[2] = array9;
      Array array10 = func12(&params1, loopsFactor);
      if (params1.size > 0) {
         free(params1.data);
         params1.size = 0;
      }
      if (array10.size > 0) {
         free(array10.data);
         array10.size = 0;
      }
      Array array11;
      if (pCounter > 0) {
         array11 = vars->data[--pCounter];
      } else {
         array11.size = 444;
         array11.data = (unsigned int*)malloc(array11.size*sizeof(unsigned int));
         memset(array11.data, 0, array11.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array11.size; i++) {
         if (array11.data[i] == 40) { 
            return array11;
         }
      }
      if (array11.size > 0) {
         free(array11.data);
         array11.size = 0;
      }
   }
   unsigned int loop13 = 0;
   unsigned int loopLimit13 = (rand()%loopsFactor)/3 + 1;
   for(; loop13 < loopLimit13; loop13++) {
   }
   return array7;
}

