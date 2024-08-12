#include "ex2.h" 
Array func5(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array4 = func10(&params0, rng(), loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   for (int i = 0; i < array4.size; i++) {
      if (array4.data[i] == 42) { 
         return array4;
      }
   }
   unsigned int loop64 = 0;
   unsigned int loopLimit64 = (rand()%loopsFactor)/2 + 1;
   for(; loop64 < loopLimit64; loop64++) {
      for (int i = 0; i < array4.size; i++) {
         array4.data[i]--;
      }
      for (int i = 0; i < array4.size; i++) {
         if (array4.data[i] == 89) { 
            return array4;
         }
      }
      if(PATH0 & 1) {
         Array array5;
         if (pCounter > 0) {
            array5 = vars->data[--pCounter];
         } else {
            array5.size = 872;
            array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
            memset(array5.data, 0, array5.size*sizeof(unsigned int));
         }
         unsigned int loop65 = 0;
         unsigned int loopLimit65 = (rand()%loopsFactor)/3 + 1;
         for(; loop65 < loopLimit65; loop65++) {
            Array array6;
            if (pCounter > 0) {
               array6 = vars->data[--pCounter];
            } else {
               array6.size = 908;
               array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
               memset(array6.data, 0, array6.size*sizeof(unsigned int));
            }
            if(PATH0 & 2) {
            }
            else {
            }
            for (int i = 0; i < array4.size; i++) {
               if (array4.data[i] == 98) { 
                  return array4;
               }
            }
            if (array6.size > 0) {
               free(array6.data);
               array6.size = 0;
            }
         }
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array4;
         params1.data[1] = array5;
         Array array6 = func12(&params1, loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array6.size > 0) {
            free(array6.data);
            array6.size = 0;
         }
         Array array7;
         if (pCounter > 0) {
            array7 = vars->data[--pCounter];
         } else {
            array7.size = 808;
            array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
            memset(array7.data, 0, array7.size*sizeof(unsigned int));
         }
         unsigned int loop66 = 0;
         unsigned int loopLimit66 = (rand()%loopsFactor)/3 + 1;
         for(; loop66 < loopLimit66; loop66++) {
            for (int i = 0; i < array5.size; i++) {
               array5.data[i]++;
            }
            for (int i = 0; i < array4.size; i++) {
               if (array4.data[i] == 3) { 
                  return array4;
               }
            }
            if(PATH0 & 4) {
               ArrayParam params2;
               params2.size = 4;
               params2.data = (Array*)malloc(params2.size*sizeof(Array));
               params2.data[0] = array4;
               params2.data[1] = array5;
               params2.data[2] = array6;
               params2.data[3] = array7;
               Array array8 = func19(&params2, loopsFactor);
               if (params2.size > 0) {
                  free(params2.data);
                  params2.size = 0;
               }
               if (array8.size > 0) {
                  free(array8.data);
                  array8.size = 0;
               }
            }
            else {
            }
         }
         if (array7.size > 0) {
            free(array7.data);
            array7.size = 0;
         }
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
      }
      else {
         if(PATH0 & 8) {
            Array array5;
            if (pCounter > 0) {
               array5 = vars->data[--pCounter];
            } else {
               array5.size = 133;
               array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
               memset(array5.data, 0, array5.size*sizeof(unsigned int));
            }
            ArrayParam params1;
            params1.size = 2;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array4;
            params1.data[1] = array5;
            Array array6 = func20(&params1, loopsFactor);
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
         else {
            ArrayParam params1;
            params1.size = 1;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array4;
            Array array5 = func21(&params1, loopsFactor);
            if (params1.size > 0) {
               free(params1.data);
               params1.size = 0;
            }
            if (array5.size > 0) {
               free(array5.data);
               array5.size = 0;
            }
         }
         ArrayParam params1;
         params1.size = 1;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array4;
         Array array5 = func13(&params1, rng(), loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
      }
   }
   ArrayParam params1;
   params1.size = 1;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array4;
   Array array5 = func11(&params1, rng(), loopsFactor);
   if (params1.size > 0) {
      free(params1.data);
      params1.size = 0;
   }
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   if (array4.size > 0) {
      free(array4.data);
      array4.size = 0;
   }
   return array4;
}

