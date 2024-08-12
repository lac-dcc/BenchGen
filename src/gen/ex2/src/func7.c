#include "ex2.h" 
Array func7(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   unsigned int loop15 = 0;
   unsigned int loopLimit15 = (rand()%loopsFactor)/3 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      Array array4;
      if (pCounter > 0) {
         array4 = vars->data[--pCounter];
      } else {
         array4.size = 12;
         array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
         memset(array4.data, 0, array4.size*sizeof(unsigned int));
      }
      if(PATH0 & 1) {
         Array array5;
         if (pCounter > 0) {
            array5 = vars->data[--pCounter];
         } else {
            array5.size = 226;
            array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
            memset(array5.data, 0, array5.size*sizeof(unsigned int));
         }
         ArrayParam params0;
         params0.size = 2;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array4;
         params0.data[1] = array5;
         Array array6 = func20(&params0, loopsFactor);
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
      }
      else {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array4;
         Array array5 = func21(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
      }
      if(PATH0 & 2) {
         Array array5;
         if (pCounter > 0) {
            array5 = vars->data[--pCounter];
         } else {
            array5.size = 539;
            array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
            memset(array5.data, 0, array5.size*sizeof(unsigned int));
         }
         unsigned int loop16 = 0;
         unsigned int loopLimit16 = (rand()%loopsFactor)/4 + 1;
         for(; loop16 < loopLimit16; loop16++) {
            for (int i = 0; i < array5.size; i++) {
               array5.data[i]++;
            }
            for (int i = 0; i < array4.size; i++) {
               if (array4.data[i] == 34) { 
                  return array4;
               }
            }
            if(PATH0 & 4) {
               ArrayParam params0;
               params0.size = 2;
               params0.data = (Array*)malloc(params0.size*sizeof(Array));
               params0.data[0] = array4;
               params0.data[1] = array5;
               Array array6 = func19(&params0, loopsFactor);
               if (params0.size > 0) {
                  free(params0.data);
                  params0.size = 0;
               }
               if (array6.size > 0) {
                  free(array6.data);
                  array6.size = 0;
               }
            }
            else {
            }
         }
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
      }
      else {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array4;
         Array array5 = func17(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         for (int i = 0; i < array5.size; i++) {
            if (array5.data[i] == 97) { 
               return array5;
            }
         }
         unsigned int loop17 = 0;
         unsigned int loopLimit17 = (rand()%loopsFactor)/4 + 1;
         for(; loop17 < loopLimit17; loop17++) {
            for (int i = 0; i < array4.size; i++) {
               array4.data[i]--;
            }
            for (int i = 0; i < array5.size; i++) {
               if (array5.data[i] == 92) { 
                  return array5;
               }
            }
         }
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array4;
         params1.data[1] = array5;
         Array array6 = func18(&params1, loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array6.size > 0) {
            free(array6.data);
            array6.size = 0;
         }
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
      }
      for (int i = 0; i < array4.size; i++) {
         if (array4.data[i] == 1) { 
            return array4;
         }
      }
      if (array4.size > 0) {
         free(array4.data);
         array4.size = 0;
      }
   }
   Array array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
   } else {
      array4.size = 280;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      memset(array4.data, 0, array4.size*sizeof(unsigned int));
   }
   return array4;
}

