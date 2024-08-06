#include "Bench1.h" 
Array func1(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/1 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      Array array2;
      if (pCounter > 0) {
         array2 = vars->data[--pCounter];
      } else {
         array2.size = 368;
         array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
      }
      if(PATH0 & 1) {
      }
      else {
      }
      for (int i = 0; i < array2.size; i++) {
         if (array2.data[i] == 29) { 
            return array2;
         }
      }
      if (array2.size > 0) {
         free(array2.data);
         array2.size = 0;
      }
   }
   unsigned int loop4 = 0;
   unsigned int loopLimit4 = (rand()%loopsFactor)/1 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      if(PATH0 & 2) {
         Array array2;
         if (pCounter > 0) {
            array2 = vars->data[--pCounter];
         } else {
            array2.size = 782;
            array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
         }
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array2;
         Array array3 = func5(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
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
      else {
         ArrayParam params0;
         params0.size = 0;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         Array array2 = func6(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array2.size > 0) {
            free(array2.data);
            array2.size = 0;
         }
      }
   }
   Array array2;
   if (pCounter > 0) {
      array2 = vars->data[--pCounter];
   } else {
      array2.size = 22;
      array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
   }
   return array2;
}

