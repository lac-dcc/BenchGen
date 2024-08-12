#include "ex2.h" 
Array func4(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
   } else {
      array4.size = 590;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      memset(array4.data, 0, array4.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array4;
   Array array5 = func10(&params0, rng(), loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   for (int i = 0; i < array4.size; i++) {
      if (array4.data[i] == 11) { 
         return array4;
      }
   }
   unsigned int loop39 = 0;
   unsigned int loopLimit39 = (rand()%loopsFactor)/2 + 1;
   for(; loop39 < loopLimit39; loop39++) {
      for (int i = 0; i < array4.size; i++) {
         array4.data[i]--;
      }
      for (int i = 0; i < array4.size; i++) {
         if (array4.data[i] == 99) { 
            return array4;
         }
      }
      if(PATH0 & 1) {
         Array array6;
         if (pCounter > 0) {
            array6 = vars->data[--pCounter];
         } else {
            array6.size = 343;
            array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
            memset(array6.data, 0, array6.size*sizeof(unsigned int));
         }
         unsigned int loop40 = 0;
         unsigned int loopLimit40 = (rand()%loopsFactor)/3 + 1;
         for(; loop40 < loopLimit40; loop40++) {
            Array array7;
            if (pCounter > 0) {
               array7 = vars->data[--pCounter];
            } else {
               array7.size = 746;
               array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
               memset(array7.data, 0, array7.size*sizeof(unsigned int));
            }
            if(PATH0 & 2) {
            }
            else {
            }
            for (int i = 0; i < array4.size; i++) {
               if (array4.data[i] == 40) { 
                  return array4;
               }
            }
            if (array7.size > 0) {
               free(array7.data);
               array7.size = 0;
            }
         }
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array4;
         params1.data[1] = array5;
         params1.data[2] = array6;
         Array array7 = func12(&params1, loopsFactor);
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
            array8.size = 311;
            array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
            memset(array8.data, 0, array8.size*sizeof(unsigned int));
         }
         unsigned int loop41 = 0;
         unsigned int loopLimit41 = (rand()%loopsFactor)/3 + 1;
         for(; loop41 < loopLimit41; loop41++) {
            for (int i = 0; i < array4.size; i++) {
               array4.data[i]++;
            }
            for (int i = 0; i < array4.size; i++) {
               if (array4.data[i] == 1) { 
                  return array4;
               }
            }
            if(PATH0 & 4) {
               ArrayParam params2;
               params2.size = 5;
               params2.data = (Array*)malloc(params2.size*sizeof(Array));
               params2.data[0] = array4;
               params2.data[1] = array5;
               params2.data[2] = array6;
               params2.data[3] = array7;
               params2.data[4] = array8;
               Array array9 = func19(&params2, loopsFactor);
               if (params2.size > 0) {
                  free(params2.data);
                  params2.size = 0;
               }
               if (array9.size > 0) {
                  free(array9.data);
                  array9.size = 0;
               }
            }
            else {
            }
         }
         if (array8.size > 0) {
            free(array8.data);
            array8.size = 0;
         }
         if (array6.size > 0) {
            free(array6.data);
            array6.size = 0;
         }
      }
      else {
         if(PATH0 & 8) {
            Array array6;
            if (pCounter > 0) {
               array6 = vars->data[--pCounter];
            } else {
               array6.size = 730;
               array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
               memset(array6.data, 0, array6.size*sizeof(unsigned int));
            }
            ArrayParam params1;
            params1.size = 3;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array4;
            params1.data[1] = array5;
            params1.data[2] = array6;
            Array array7 = func20(&params1, loopsFactor);
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
         else {
            ArrayParam params1;
            params1.size = 2;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array4;
            params1.data[1] = array5;
            Array array6 = func21(&params1, loopsFactor);
            if (params1.size > 0) {
               free(params1.data);
               params1.size = 0;
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
         Array array6 = func13(&params1, rng(), loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array6.size > 0) {
            free(array6.data);
            array6.size = 0;
         }
      }
   }
   ArrayParam params1;
   params1.size = 2;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array4;
   params1.data[1] = array5;
   Array array6 = func11(&params1, rng(), loopsFactor);
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
   return array4;
}

