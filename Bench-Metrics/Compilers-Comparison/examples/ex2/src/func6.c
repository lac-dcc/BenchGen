#include "ex2.h" 
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array3;
   if (pCounter > 0) {
      array3 = vars->data[--pCounter];
   } else {
      array3.size = 335;
      array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
      memset(array3.data, 0, array3.size*sizeof(unsigned int));
   }
   unsigned int loop77 = 0;
   unsigned int loopLimit77 = (rand()%loopsFactor)/2 + 1;
   for(; loop77 < loopLimit77; loop77++) {
      for (int i = 0; i < array3.size; i++) {
         array3.data[i]--;
      }
      unsigned int loop78 = 0;
      unsigned int loopLimit78 = (rand()%loopsFactor)/3 + 1;
      for(; loop78 < loopLimit78; loop78++) {
         Array array4;
         if (pCounter > 0) {
            array4 = vars->data[--pCounter];
         } else {
            array4.size = 900;
            array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
            memset(array4.data, 0, array4.size*sizeof(unsigned int));
         }
         if(PATH0 & 1) {
            Array array5;
            if (pCounter > 0) {
               array5 = vars->data[--pCounter];
            } else {
               array5.size = 238;
               array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
               memset(array5.data, 0, array5.size*sizeof(unsigned int));
            }
            unsigned int loop79 = 0;
            unsigned int loopLimit79 = (rand()%loopsFactor)/4 + 1;
            for(; loop79 < loopLimit79; loop79++) {
               Array array6;
               if (pCounter > 0) {
                  array6 = vars->data[--pCounter];
               } else {
                  array6.size = 971;
                  array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
                  memset(array6.data, 0, array6.size*sizeof(unsigned int));
               }
               if(PATH0 & 2) {
               }
               else {
               }
               for (int i = 0; i < array4.size; i++) {
                  if (array4.data[i] == 89) { 
                     return array4;
                  }
               }
               if (array6.size > 0) {
                  free(array6.data);
                  array6.size = 0;
               }
            }
            ArrayParam params0;
            params0.size = 3;
            params0.data = (Array*)malloc(params0.size*sizeof(Array));
            params0.data[0] = array3;
            params0.data[1] = array4;
            params0.data[2] = array5;
            Array array6 = func12(&params0, loopsFactor);
            if (params0.size > 0) {
               free(params0.data);
               params0.size = 0;
            }
            if (array6.size > 0) {
               free(array6.data);
               array6.size = 0;
            }
            Array array7;
            if (pCounter > 0) {
               array7 = vars->data[--pCounter];
            } else {
               array7.size = 988;
               array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
               memset(array7.data, 0, array7.size*sizeof(unsigned int));
            }
            unsigned int loop80 = 0;
            unsigned int loopLimit80 = (rand()%loopsFactor)/4 + 1;
            for(; loop80 < loopLimit80; loop80++) {
               for (int i = 0; i < array5.size; i++) {
                  array5.data[i]++;
               }
               for (int i = 0; i < array3.size; i++) {
                  if (array3.data[i] == 43) { 
                     return array3;
                  }
               }
               if(PATH0 & 4) {
                  ArrayParam params1;
                  params1.size = 5;
                  params1.data = (Array*)malloc(params1.size*sizeof(Array));
                  params1.data[0] = array3;
                  params1.data[1] = array4;
                  params1.data[2] = array5;
                  params1.data[3] = array6;
                  params1.data[4] = array7;
                  Array array8 = func19(&params1, loopsFactor);
                  if (params1.size > 0) {
                     free(params1.data);
                     params1.size = 0;
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
                  array5.size = 829;
                  array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
                  memset(array5.data, 0, array5.size*sizeof(unsigned int));
               }
               ArrayParam params0;
               params0.size = 3;
               params0.data = (Array*)malloc(params0.size*sizeof(Array));
               params0.data[0] = array3;
               params0.data[1] = array4;
               params0.data[2] = array5;
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
               params0.size = 2;
               params0.data = (Array*)malloc(params0.size*sizeof(Array));
               params0.data[0] = array3;
               params0.data[1] = array4;
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
            ArrayParam params0;
            params0.size = 2;
            params0.data = (Array*)malloc(params0.size*sizeof(Array));
            params0.data[0] = array3;
            params0.data[1] = array4;
            Array array5 = func13(&params0, rng(), loopsFactor);
            if (params0.size > 0) {
               free(params0.data);
               params0.size = 0;
            }
            if (array5.size > 0) {
               free(array5.data);
               array5.size = 0;
            }
         }
         if(PATH0 & 16) {
            Array array5;
            if (pCounter > 0) {
               array5 = vars->data[--pCounter];
            } else {
               array5.size = 541;
               array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
               memset(array5.data, 0, array5.size*sizeof(unsigned int));
            }
            unsigned int loop81 = 0;
            unsigned int loopLimit81 = (rand()%loopsFactor)/4 + 1;
            for(; loop81 < loopLimit81; loop81++) {
               for (int i = 0; i < array3.size; i++) {
                  array3.data[i]++;
               }
               for (int i = 0; i < array5.size; i++) {
                  if (array5.data[i] == 32) { 
                     return array5;
                  }
               }
               if(PATH0 & 32) {
                  ArrayParam params0;
                  params0.size = 3;
                  params0.data = (Array*)malloc(params0.size*sizeof(Array));
                  params0.data[0] = array3;
                  params0.data[1] = array4;
                  params0.data[2] = array5;
                  Array array6 = func14(&params0, rng(), loopsFactor);
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
                  Array array6;
                  if (pCounter > 0) {
                     array6 = vars->data[--pCounter];
                  } else {
                     array6.size = 42;
                     array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
                     memset(array6.data, 0, array6.size*sizeof(unsigned int));
                  }
                  unsigned int loop82 = 0;
                  unsigned int loopLimit82 = (rand()%loopsFactor)/5 + 1;
                  for(; loop82 < loopLimit82; loop82++) {
                     for (int i = 0; i < array3.size; i++) {
                        array3.data[i]++;
                     }
                     for (int i = 0; i < array4.size; i++) {
                        if (array4.data[i] == 23) { 
                           return array4;
                        }
                     }
                     if(PATH0 & 64) {
                        ArrayParam params0;
                        params0.size = 4;
                        params0.data = (Array*)malloc(params0.size*sizeof(Array));
                        params0.data[0] = array3;
                        params0.data[1] = array4;
                        params0.data[2] = array5;
                        params0.data[3] = array6;
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
            }
            if (array5.size > 0) {
               free(array5.data);
               array5.size = 0;
            }
         }
         else {
            ArrayParam params0;
            params0.size = 2;
            params0.data = (Array*)malloc(params0.size*sizeof(Array));
            params0.data[0] = array3;
            params0.data[1] = array4;
            Array array5 = func15(&params0, rng(), loopsFactor);
            if (params0.size > 0) {
               free(params0.data);
               params0.size = 0;
            }
            for (int i = 0; i < array3.size; i++) {
               if (array3.data[i] == 90) { 
                  return array3;
               }
            }
            unsigned int loop83 = 0;
            unsigned int loopLimit83 = (rand()%loopsFactor)/4 + 1;
            for(; loop83 < loopLimit83; loop83++) {
               for (int i = 0; i < array3.size; i++) {
                  array3.data[i]--;
               }
               for (int i = 0; i < array5.size; i++) {
                  if (array5.data[i] == 67) { 
                     return array5;
                  }
               }
               if(PATH0 & 128) {
                  Array array6;
                  if (pCounter > 0) {
                     array6 = vars->data[--pCounter];
                  } else {
                     array6.size = 677;
                     array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
                     memset(array6.data, 0, array6.size*sizeof(unsigned int));
                  }
                  ArrayParam params1;
                  params1.size = 4;
                  params1.data = (Array*)malloc(params1.size*sizeof(Array));
                  params1.data[0] = array3;
                  params1.data[1] = array4;
                  params1.data[2] = array5;
                  params1.data[3] = array6;
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
                  params1.size = 3;
                  params1.data = (Array*)malloc(params1.size*sizeof(Array));
                  params1.data[0] = array3;
                  params1.data[1] = array4;
                  params1.data[2] = array5;
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
            }
            ArrayParam params1;
            params1.size = 3;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array3;
            params1.data[1] = array4;
            params1.data[2] = array5;
            Array array6 = func16(&params1, loopsFactor);
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
         for (int i = 0; i < array3.size; i++) {
            if (array3.data[i] == 57) { 
               return array3;
            }
         }
         if (array4.size > 0) {
            free(array4.data);
            array4.size = 0;
         }
      }
   }
   return array3;
}

