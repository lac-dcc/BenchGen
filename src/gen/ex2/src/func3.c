#include "ex2.h" 
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array3;
   if (pCounter > 0) {
      array3 = vars->data[--pCounter];
   } else {
      array3.size = 481;
      array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
      memset(array3.data, 0, array3.size*sizeof(unsigned int));
   }
   unsigned int loop21 = 0;
   unsigned int loopLimit21 = (rand()%loopsFactor)/2 + 1;
   for(; loop21 < loopLimit21; loop21++) {
      for (int i = 0; i < array3.size; i++) {
         array3.data[i]++;
      }
      for (int i = 0; i < array3.size; i++) {
         if (array3.data[i] == 27) { 
            return array3;
         }
      }
      if(PATH0 & 1) {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array3;
         Array array4 = func7(&params0, rng(), loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array4.size > 0) {
            free(array4.data);
            array4.size = 0;
         }
      }
      else {
         Array array4;
         if (pCounter > 0) {
            array4 = vars->data[--pCounter];
         } else {
            array4.size = 856;
            array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
            memset(array4.data, 0, array4.size*sizeof(unsigned int));
         }
         unsigned int loop22 = 0;
         unsigned int loopLimit22 = (rand()%loopsFactor)/3 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            for (int i = 0; i < array4.size; i++) {
               array4.data[i]++;
            }
            for (int i = 0; i < array4.size; i++) {
               if (array4.data[i] == 86) { 
                  return array4;
               }
            }
            if(PATH0 & 2) {
               ArrayParam params0;
               params0.size = 2;
               params0.data = (Array*)malloc(params0.size*sizeof(Array));
               params0.data[0] = array3;
               params0.data[1] = array4;
               Array array5 = func14(&params0, rng(), loopsFactor);
               if (params0.size > 0) {
                  free(params0.data);
                  params0.size = 0;
               }
               if (array5.size > 0) {
                  free(array5.data);
                  array5.size = 0;
               }
            }
            else {
               Array array5;
               if (pCounter > 0) {
                  array5 = vars->data[--pCounter];
               } else {
                  array5.size = 306;
                  array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
                  memset(array5.data, 0, array5.size*sizeof(unsigned int));
               }
               unsigned int loop23 = 0;
               unsigned int loopLimit23 = (rand()%loopsFactor)/4 + 1;
               for(; loop23 < loopLimit23; loop23++) {
                  for (int i = 0; i < array5.size; i++) {
                     array5.data[i]++;
                  }
                  for (int i = 0; i < array5.size; i++) {
                     if (array5.data[i] == 24) { 
                        return array5;
                     }
                  }
                  if(PATH0 & 4) {
                     ArrayParam params0;
                     params0.size = 3;
                     params0.data = (Array*)malloc(params0.size*sizeof(Array));
                     params0.data[0] = array3;
                     params0.data[1] = array4;
                     params0.data[2] = array5;
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
         }
         if (array4.size > 0) {
            free(array4.data);
            array4.size = 0;
         }
      }
   }
   if (array3.size > 0) {
      free(array3.data);
      array3.size = 0;
   }
   return array3;
}

