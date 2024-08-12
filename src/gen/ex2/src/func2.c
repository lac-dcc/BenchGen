#include "ex2.h" 
Array func2(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      Array array3;
      if (pCounter > 0) {
         array3 = vars->data[--pCounter];
      } else {
         array3.size = 386;
         array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
         memset(array3.data, 0, array3.size*sizeof(unsigned int));
      }
      if(PATH0 & 1) {
         Array array4;
         if (pCounter > 0) {
            array4 = vars->data[--pCounter];
         } else {
            array4.size = 492;
            array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
            memset(array4.data, 0, array4.size*sizeof(unsigned int));
         }
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            Array array5;
            if (pCounter > 0) {
               array5 = vars->data[--pCounter];
            } else {
               array5.size = 649;
               array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
               memset(array5.data, 0, array5.size*sizeof(unsigned int));
            }
            if(PATH0 & 2) {
            }
            else {
            }
            for (int i = 0; i < array4.size; i++) {
               if (array4.data[i] == 62) { 
                  return array4;
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
         Array array5 = func12(&params0, loopsFactor);
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
            array6.size = 782;
            array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
            memset(array6.data, 0, array6.size*sizeof(unsigned int));
         }
         unsigned int loop4 = 0;
         unsigned int loopLimit4 = (rand()%loopsFactor)/3 + 1;
         for(; loop4 < loopLimit4; loop4++) {
            for (int i = 0; i < array5.size; i++) {
               array5.data[i]++;
            }
            for (int i = 0; i < array5.size; i++) {
               if (array5.data[i] == 23) { 
                  return array5;
               }
            }
            if(PATH0 & 4) {
               ArrayParam params1;
               params1.size = 4;
               params1.data = (Array*)malloc(params1.size*sizeof(Array));
               params1.data[0] = array3;
               params1.data[1] = array4;
               params1.data[2] = array5;
               params1.data[3] = array6;
               Array array7 = func19(&params1, loopsFactor);
               if (params1.size > 0) {
                  free(params1.data);
                  params1.size = 0;
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
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
      }
      else {
         if(PATH0 & 8) {
            Array array4;
            if (pCounter > 0) {
               array4 = vars->data[--pCounter];
            } else {
               array4.size = 802;
               array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
               memset(array4.data, 0, array4.size*sizeof(unsigned int));
            }
            ArrayParam params0;
            params0.size = 2;
            params0.data = (Array*)malloc(params0.size*sizeof(Array));
            params0.data[0] = array3;
            params0.data[1] = array4;
            Array array5 = func20(&params0, loopsFactor);
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
         }
         else {
            ArrayParam params0;
            params0.size = 1;
            params0.data = (Array*)malloc(params0.size*sizeof(Array));
            params0.data[0] = array3;
            Array array4 = func21(&params0, loopsFactor);
            if (params0.size > 0) {
               free(params0.data);
               params0.size = 0;
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
         Array array4 = func13(&params0, rng(), loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array4.size > 0) {
            free(array4.data);
            array4.size = 0;
         }
      }
      if(PATH0 & 16) {
         Array array4;
         if (pCounter > 0) {
            array4 = vars->data[--pCounter];
         } else {
            array4.size = 198;
            array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
            memset(array4.data, 0, array4.size*sizeof(unsigned int));
         }
         unsigned int loop8 = 0;
         unsigned int loopLimit8 = (rand()%loopsFactor)/3 + 1;
         for(; loop8 < loopLimit8; loop8++) {
            for (int i = 0; i < array3.size; i++) {
               array3.data[i]++;
            }
            for (int i = 0; i < array4.size; i++) {
               if (array4.data[i] == 70) { 
                  return array4;
               }
            }
            if(PATH0 & 32) {
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
                  array5.size = 862;
                  array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
                  memset(array5.data, 0, array5.size*sizeof(unsigned int));
               }
               unsigned int loop10 = 0;
               unsigned int loopLimit10 = (rand()%loopsFactor)/4 + 1;
               for(; loop10 < loopLimit10; loop10++) {
                  for (int i = 0; i < array5.size; i++) {
                     array5.data[i]++;
                  }
                  for (int i = 0; i < array4.size; i++) {
                     if (array4.data[i] == 81) { 
                        return array4;
                     }
                  }
                  if(PATH0 & 64) {
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
      else {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array3;
         Array array4 = func15(&params0, rng(), loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         for (int i = 0; i < array4.size; i++) {
            if (array4.data[i] == 57) { 
               return array4;
            }
         }
         unsigned int loop12 = 0;
         unsigned int loopLimit12 = (rand()%loopsFactor)/3 + 1;
         for(; loop12 < loopLimit12; loop12++) {
            for (int i = 0; i < array3.size; i++) {
               array3.data[i]--;
            }
            for (int i = 0; i < array4.size; i++) {
               if (array4.data[i] == 82) { 
                  return array4;
               }
            }
            if(PATH0 & 128) {
               Array array5;
               if (pCounter > 0) {
                  array5 = vars->data[--pCounter];
               } else {
                  array5.size = 545;
                  array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
                  memset(array5.data, 0, array5.size*sizeof(unsigned int));
               }
               ArrayParam params1;
               params1.size = 3;
               params1.data = (Array*)malloc(params1.size*sizeof(Array));
               params1.data[0] = array3;
               params1.data[1] = array4;
               params1.data[2] = array5;
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
               params1.size = 2;
               params1.data = (Array*)malloc(params1.size*sizeof(Array));
               params1.data[0] = array3;
               params1.data[1] = array4;
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
         }
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array3;
         params1.data[1] = array4;
         Array array5 = func16(&params1, loopsFactor);
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
      }
      for (int i = 0; i < array3.size; i++) {
         if (array3.data[i] == 51) { 
            return array3;
         }
      }
      if (array3.size > 0) {
         free(array3.data);
         array3.size = 0;
      }
   }
   Array array3;
   if (pCounter > 0) {
      array3 = vars->data[--pCounter];
   } else {
      array3.size = 754;
      array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
      memset(array3.data, 0, array3.size*sizeof(unsigned int));
   }
   return array3;
}

