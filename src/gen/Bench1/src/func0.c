#include "Bench1.h" 
Array func0(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
   } else {
      array1.size = 886;
      array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
   }
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      for (int i = 0; i < array1.size; i++) {
         array1.data[i]++;
      }
      for (int i = 0; i < array1.size; i++) {
         if (array1.data[i] == 93) { 
            return array1;
         }
      }
      if(PATH0 & 1) {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array1;
         Array array2 = func2(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array2.size > 0) {
            free(array2.data);
            array2.size = 0;
         }
      }
      else {
      }
   }
   if (array1.size > 0) {
      free(array1.data);
      array1.size = 0;
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/1 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array1;
      Array array2 = func3(&params0, loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      for (int i = 0; i < array2.size; i++) {
         if (array2.data[i] == 90) { 
            return array2;
         }
      }
      unsigned int loop2 = 0;
      unsigned int loopLimit2 = (rand()%loopsFactor)/2 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         for (int i = 0; i < array2.size; i++) {
            array2.data[i]--;
         }
         for (int i = 0; i < array2.size; i++) {
            if (array2.data[i] == 26) { 
               return array2;
            }
         }
      }
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array1;
      params1.data[1] = array2;
      Array array3 = func4(&params1, loopsFactor);
      if (params1.size > 0) {
         free(params1.data);
         params1.size = 0;
      }
      if (array3.size > 0) {
         free(array3.data);
         array3.size = 0;
      }
      if (array2.size > 0) {
         free(array2.data);
         array2.size = 0;
      }
   }
   return array1;
}

