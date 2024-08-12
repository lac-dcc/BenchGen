#include "ex2.h" 
Array func9(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
   } else {
      array4.size = 763;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      memset(array4.data, 0, array4.size*sizeof(unsigned int));
   }
   unsigned int loop33 = 0;
   unsigned int loopLimit33 = (rand()%loopsFactor)/3 + 1;
   for(; loop33 < loopLimit33; loop33++) {
      for (int i = 0; i < array4.size; i++) {
         array4.data[i]--;
      }
      unsigned int loop34 = 0;
      unsigned int loopLimit34 = (rand()%loopsFactor)/4 + 1;
      for(; loop34 < loopLimit34; loop34++) {
         Array array5;
         if (pCounter > 0) {
            array5 = vars->data[--pCounter];
         } else {
            array5.size = 538;
            array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
            memset(array5.data, 0, array5.size*sizeof(unsigned int));
         }
         if(PATH0 & 1) {
            Array array6;
            if (pCounter > 0) {
               array6 = vars->data[--pCounter];
            } else {
               array6.size = 606;
               array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
               memset(array6.data, 0, array6.size*sizeof(unsigned int));
            }
            ArrayParam params0;
            params0.size = 3;
            params0.data = (Array*)malloc(params0.size*sizeof(Array));
            params0.data[0] = array4;
            params0.data[1] = array5;
            params0.data[2] = array6;
            Array array7 = func20(&params0, loopsFactor);
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
         }
         else {
            ArrayParam params0;
            params0.size = 2;
            params0.data = (Array*)malloc(params0.size*sizeof(Array));
            params0.data[0] = array4;
            params0.data[1] = array5;
            Array array6 = func21(&params0, loopsFactor);
            if (params0.size > 0) {
               free(params0.data);
               params0.size = 0;
            }
            if (array6.size > 0) {
               free(array6.data);
               array6.size = 0;
            }
         }
         if(PATH0 & 2) {
            Array array6;
            if (pCounter > 0) {
               array6 = vars->data[--pCounter];
            } else {
               array6.size = 818;
               array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
               memset(array6.data, 0, array6.size*sizeof(unsigned int));
            }
            unsigned int loop35 = 0;
            unsigned int loopLimit35 = (rand()%loopsFactor)/5 + 1;
            for(; loop35 < loopLimit35; loop35++) {
               for (int i = 0; i < array4.size; i++) {
                  array4.data[i]++;
               }
               for (int i = 0; i < array4.size; i++) {
                  if (array4.data[i] == 69) { 
                     return array4;
                  }
               }
               if(PATH0 & 4) {
                  ArrayParam params0;
                  params0.size = 3;
                  params0.data = (Array*)malloc(params0.size*sizeof(Array));
                  params0.data[0] = array4;
                  params0.data[1] = array5;
                  params0.data[2] = array6;
                  Array array7 = func19(&params0, loopsFactor);
                  if (params0.size > 0) {
                     free(params0.data);
                     params0.size = 0;
                  }
                  if (array7.size > 0) {
                     free(array7.data);
                     array7.size = 0;
                  }
               }
               else {
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
            Array array6 = func17(&params0, loopsFactor);
            if (params0.size > 0) {
               free(params0.data);
               params0.size = 0;
            }
            for (int i = 0; i < array4.size; i++) {
               if (array4.data[i] == 24) { 
                  return array4;
               }
            }
            unsigned int loop36 = 0;
            unsigned int loopLimit36 = (rand()%loopsFactor)/5 + 1;
            for(; loop36 < loopLimit36; loop36++) {
               for (int i = 0; i < array4.size; i++) {
                  array4.data[i]--;
               }
               for (int i = 0; i < array4.size; i++) {
                  if (array4.data[i] == 83) { 
                     return array4;
                  }
               }
            }
            ArrayParam params1;
            params1.size = 3;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array4;
            params1.data[1] = array5;
            params1.data[2] = array6;
            Array array7 = func18(&params1, loopsFactor);
            if (params1.size > 0) {
               free(params1.data);
               params1.size = 0;
            }
            if (array7.size > 0) {
               free(array7.data);
               array7.size = 0;
            }
            if (array6.size > 0) {
               free(array6.data);
               array6.size = 0;
            }
         }
         for (int i = 0; i < array5.size; i++) {
            if (array5.data[i] == 72) { 
               return array5;
            }
         }
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
      }
   }
   return array4;
}

