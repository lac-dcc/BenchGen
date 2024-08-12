#include "ex2.h" 
Array func0(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
   } else {
      array1.size = 886;
      array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
      memset(array1.data, 0, array1.size*sizeof(unsigned int));
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
         Array array2 = func2(&params0, rng(), loopsFactor);
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
         Array array2;
         if (pCounter > 0) {
            array2 = vars->data[--pCounter];
         } else {
            array2.size = 932;
            array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
            memset(array2.data, 0, array2.size*sizeof(unsigned int));
         }
         unsigned int loop14 = 0;
         unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
         for(; loop14 < loopLimit14; loop14++) {
            for (int i = 0; i < array1.size; i++) {
               array1.data[i]++;
            }
            for (int i = 0; i < array1.size; i++) {
               if (array1.data[i] == 68) { 
                  return array1;
               }
            }
            if(PATH0 & 2) {
               ArrayParam params0;
               params0.size = 2;
               params0.data = (Array*)malloc(params0.size*sizeof(Array));
               params0.data[0] = array1;
               params0.data[1] = array2;
               Array array3 = func7(&params0, rng(), loopsFactor);
               if (params0.size > 0) {
                  free(params0.data);
                  params0.size = 0;
               }
               if (array3.size > 0) {
                  free(array3.data);
                  array3.size = 0;
               }
            }
            else {
               Array array3;
               if (pCounter > 0) {
                  array3 = vars->data[--pCounter];
               } else {
                  array3.size = 441;
                  array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
                  memset(array3.data, 0, array3.size*sizeof(unsigned int));
               }
               unsigned int loop18 = 0;
               unsigned int loopLimit18 = (rand()%loopsFactor)/3 + 1;
               for(; loop18 < loopLimit18; loop18++) {
                  for (int i = 0; i < array1.size; i++) {
                     array1.data[i]++;
                  }
                  for (int i = 0; i < array3.size; i++) {
                     if (array3.data[i] == 44) { 
                        return array3;
                     }
                  }
                  if(PATH0 & 4) {
                     ArrayParam params0;
                     params0.size = 3;
                     params0.data = (Array*)malloc(params0.size*sizeof(Array));
                     params0.data[0] = array1;
                     params0.data[1] = array2;
                     params0.data[2] = array3;
                     Array array4 = func14(&params0, rng(), loopsFactor);
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
                        array4.size = 440;
                        array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
                        memset(array4.data, 0, array4.size*sizeof(unsigned int));
                     }
                     unsigned int loop19 = 0;
                     unsigned int loopLimit19 = (rand()%loopsFactor)/4 + 1;
                     for(; loop19 < loopLimit19; loop19++) {
                        for (int i = 0; i < array2.size; i++) {
                           array2.data[i]++;
                        }
                        for (int i = 0; i < array4.size; i++) {
                           if (array4.data[i] == 17) { 
                              return array4;
                           }
                        }
                        if(PATH0 & 8) {
                           ArrayParam params0;
                           params0.size = 4;
                           params0.data = (Array*)malloc(params0.size*sizeof(Array));
                           params0.data[0] = array1;
                           params0.data[1] = array2;
                           params0.data[2] = array3;
                           params0.data[3] = array4;
                           Array array5 = func19(&params0, loopsFactor);
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
            }
         }
         if (array2.size > 0) {
            free(array2.data);
            array2.size = 0;
         }
      }
   }
   if (array1.size > 0) {
      free(array1.data);
      array1.size = 0;
   }
   unsigned int loop20 = 0;
   unsigned int loopLimit20 = (rand()%loopsFactor)/1 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array1;
      Array array2 = func3(&params0, rng(), loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      for (int i = 0; i < array1.size; i++) {
         if (array1.data[i] == 29) { 
            return array1;
         }
      }
      unsigned int loop24 = 0;
      unsigned int loopLimit24 = (rand()%loopsFactor)/2 + 1;
      for(; loop24 < loopLimit24; loop24++) {
         for (int i = 0; i < array2.size; i++) {
            array2.data[i]--;
         }
         for (int i = 0; i < array2.size; i++) {
            if (array2.data[i] == 70) { 
               return array2;
            }
         }
         if(PATH0 & 16) {
            Array array3;
            if (pCounter > 0) {
               array3 = vars->data[--pCounter];
            } else {
               array3.size = 368;
               array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
               memset(array3.data, 0, array3.size*sizeof(unsigned int));
            }
            unsigned int loop25 = 0;
            unsigned int loopLimit25 = (rand()%loopsFactor)/3 + 1;
            for(; loop25 < loopLimit25; loop25++) {
               Array array4;
               if (pCounter > 0) {
                  array4 = vars->data[--pCounter];
               } else {
                  array4.size = 708;
                  array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
                  memset(array4.data, 0, array4.size*sizeof(unsigned int));
               }
               if(PATH0 & 32) {
                  Array array5;
                  if (pCounter > 0) {
                     array5 = vars->data[--pCounter];
                  } else {
                     array5.size = 715;
                     array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
                     memset(array5.data, 0, array5.size*sizeof(unsigned int));
                  }
                  ArrayParam params1;
                  params1.size = 5;
                  params1.data = (Array*)malloc(params1.size*sizeof(Array));
                  params1.data[0] = array1;
                  params1.data[1] = array2;
                  params1.data[2] = array3;
                  params1.data[3] = array4;
                  params1.data[4] = array5;
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
                  params1.size = 4;
                  params1.data = (Array*)malloc(params1.size*sizeof(Array));
                  params1.data[0] = array1;
                  params1.data[1] = array2;
                  params1.data[2] = array3;
                  params1.data[3] = array4;
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
               if(PATH0 & 64) {
                  Array array5;
                  if (pCounter > 0) {
                     array5 = vars->data[--pCounter];
                  } else {
                     array5.size = 796;
                     array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
                     memset(array5.data, 0, array5.size*sizeof(unsigned int));
                  }
                  unsigned int loop26 = 0;
                  unsigned int loopLimit26 = (rand()%loopsFactor)/4 + 1;
                  for(; loop26 < loopLimit26; loop26++) {
                     for (int i = 0; i < array4.size; i++) {
                        array4.data[i]++;
                     }
                     for (int i = 0; i < array4.size; i++) {
                        if (array4.data[i] == 45) { 
                           return array4;
                        }
                     }
                     if(PATH0 & 128) {
                        ArrayParam params1;
                        params1.size = 5;
                        params1.data = (Array*)malloc(params1.size*sizeof(Array));
                        params1.data[0] = array1;
                        params1.data[1] = array2;
                        params1.data[2] = array3;
                        params1.data[3] = array4;
                        params1.data[4] = array5;
                        Array array6 = func19(&params1, loopsFactor);
                        if (params1.size > 0) {
                           free(params1.data);
                           params1.size = 0;
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
                  ArrayParam params1;
                  params1.size = 4;
                  params1.data = (Array*)malloc(params1.size*sizeof(Array));
                  params1.data[0] = array1;
                  params1.data[1] = array2;
                  params1.data[2] = array3;
                  params1.data[3] = array4;
                  Array array5 = func17(&params1, loopsFactor);
                  if (params1.size > 0) {
                     free(params1.data);
                     params1.size = 0;
                  }
                  for (int i = 0; i < array2.size; i++) {
                     if (array2.data[i] == 55) { 
                        return array2;
                     }
                  }
                  unsigned int loop27 = 0;
                  unsigned int loopLimit27 = (rand()%loopsFactor)/4 + 1;
                  for(; loop27 < loopLimit27; loop27++) {
                     for (int i = 0; i < array5.size; i++) {
                        array5.data[i]--;
                     }
                     for (int i = 0; i < array4.size; i++) {
                        if (array4.data[i] == 64) { 
                           return array4;
                        }
                     }
                  }
                  ArrayParam params2;
                  params2.size = 5;
                  params2.data = (Array*)malloc(params2.size*sizeof(Array));
                  params2.data[0] = array1;
                  params2.data[1] = array2;
                  params2.data[2] = array3;
                  params2.data[3] = array4;
                  params2.data[4] = array5;
                  Array array6 = func18(&params2, loopsFactor);
                  if (params2.size > 0) {
                     free(params2.data);
                     params2.size = 0;
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
               for (int i = 0; i < array2.size; i++) {
                  if (array2.data[i] == 50) { 
                     return array2;
                  }
               }
               if (array4.size > 0) {
                  free(array4.data);
                  array4.size = 0;
               }
            }
            ArrayParam params1;
            params1.size = 3;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array1;
            params1.data[1] = array2;
            params1.data[2] = array3;
            Array array4 = func8(&params1, rng(), loopsFactor);
            if (params1.size > 0) {
               free(params1.data);
               params1.size = 0;
            }
            if (array4.size > 0) {
               free(array4.data);
               array4.size = 0;
            }
            Array array5;
            if (pCounter > 0) {
               array5 = vars->data[--pCounter];
            } else {
               array5.size = 859;
               array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
               memset(array5.data, 0, array5.size*sizeof(unsigned int));
            }
            unsigned int loop29 = 0;
            unsigned int loopLimit29 = (rand()%loopsFactor)/3 + 1;
            for(; loop29 < loopLimit29; loop29++) {
               for (int i = 0; i < array2.size; i++) {
                  array2.data[i]++;
               }
               for (int i = 0; i < array3.size; i++) {
                  if (array3.data[i] == 51) { 
                     return array3;
                  }
               }
               if(PATH0 & 256) {
                  ArrayParam params2;
                  params2.size = 5;
                  params2.data = (Array*)malloc(params2.size*sizeof(Array));
                  params2.data[0] = array1;
                  params2.data[1] = array2;
                  params2.data[2] = array3;
                  params2.data[3] = array4;
                  params2.data[4] = array5;
                  Array array6 = func14(&params2, rng(), loopsFactor);
                  if (params2.size > 0) {
                     free(params2.data);
                     params2.size = 0;
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
                     array6.size = 228;
                     array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
                     memset(array6.data, 0, array6.size*sizeof(unsigned int));
                  }
                  unsigned int loop30 = 0;
                  unsigned int loopLimit30 = (rand()%loopsFactor)/4 + 1;
                  for(; loop30 < loopLimit30; loop30++) {
                     for (int i = 0; i < array6.size; i++) {
                        array6.data[i]++;
                     }
                     for (int i = 0; i < array6.size; i++) {
                        if (array6.data[i] == 74) { 
                           return array6;
                        }
                     }
                     if(PATH0 & 512) {
                        ArrayParam params2;
                        params2.size = 6;
                        params2.data = (Array*)malloc(params2.size*sizeof(Array));
                        params2.data[0] = array1;
                        params2.data[1] = array2;
                        params2.data[2] = array3;
                        params2.data[3] = array4;
                        params2.data[4] = array5;
                        params2.data[5] = array6;
                        Array array7 = func19(&params2, loopsFactor);
                        if (params2.size > 0) {
                           free(params2.data);
                           params2.size = 0;
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
            if (array3.size > 0) {
               free(array3.data);
               array3.size = 0;
            }
         }
         else {
            if(PATH0 & 1024) {
               Array array3;
               if (pCounter > 0) {
                  array3 = vars->data[--pCounter];
               } else {
                  array3.size = 858;
                  array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
                  memset(array3.data, 0, array3.size*sizeof(unsigned int));
               }
               unsigned int loop31 = 0;
               unsigned int loopLimit31 = (rand()%loopsFactor)/3 + 1;
               for(; loop31 < loopLimit31; loop31++) {
                  Array array4;
                  if (pCounter > 0) {
                     array4 = vars->data[--pCounter];
                  } else {
                     array4.size = 395;
                     array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
                     memset(array4.data, 0, array4.size*sizeof(unsigned int));
                  }
                  if(PATH0 & 2048) {
                  }
                  else {
                  }
                  for (int i = 0; i < array2.size; i++) {
                     if (array2.data[i] == 37) { 
                        return array2;
                     }
                  }
                  if (array4.size > 0) {
                     free(array4.data);
                     array4.size = 0;
                  }
               }
               ArrayParam params1;
               params1.size = 3;
               params1.data = (Array*)malloc(params1.size*sizeof(Array));
               params1.data[0] = array1;
               params1.data[1] = array2;
               params1.data[2] = array3;
               Array array4 = func12(&params1, loopsFactor);
               if (params1.size > 0) {
                  free(params1.data);
                  params1.size = 0;
               }
               if (array4.size > 0) {
                  free(array4.data);
                  array4.size = 0;
               }
               Array array5;
               if (pCounter > 0) {
                  array5 = vars->data[--pCounter];
               } else {
                  array5.size = 793;
                  array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
                  memset(array5.data, 0, array5.size*sizeof(unsigned int));
               }
               unsigned int loop32 = 0;
               unsigned int loopLimit32 = (rand()%loopsFactor)/3 + 1;
               for(; loop32 < loopLimit32; loop32++) {
                  for (int i = 0; i < array4.size; i++) {
                     array4.data[i]++;
                  }
                  for (int i = 0; i < array4.size; i++) {
                     if (array4.data[i] == 43) { 
                        return array4;
                     }
                  }
                  if(PATH0 & 4096) {
                     ArrayParam params2;
                     params2.size = 5;
                     params2.data = (Array*)malloc(params2.size*sizeof(Array));
                     params2.data[0] = array1;
                     params2.data[1] = array2;
                     params2.data[2] = array3;
                     params2.data[3] = array4;
                     params2.data[4] = array5;
                     Array array6 = func19(&params2, loopsFactor);
                     if (params2.size > 0) {
                        free(params2.data);
                        params2.size = 0;
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
               if (array4.size > 0) {
                  free(array4.data);
                  array4.size = 0;
               }
            }
            else {
               if(PATH0 & 8192) {
                  Array array3;
                  if (pCounter > 0) {
                     array3 = vars->data[--pCounter];
                  } else {
                     array3.size = 928;
                     array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
                     memset(array3.data, 0, array3.size*sizeof(unsigned int));
                  }
                  ArrayParam params1;
                  params1.size = 3;
                  params1.data = (Array*)malloc(params1.size*sizeof(Array));
                  params1.data[0] = array1;
                  params1.data[1] = array2;
                  params1.data[2] = array3;
                  Array array4 = func20(&params1, loopsFactor);
                  if (params1.size > 0) {
                     free(params1.data);
                     params1.size = 0;
                  }
                  if (array4.size > 0) {
                     free(array4.data);
                     array4.size = 0;
                  }
                  if (array3.size > 0) {
                     free(array3.data);
                     array3.size = 0;
                  }
               }
               else {
                  ArrayParam params1;
                  params1.size = 2;
                  params1.data = (Array*)malloc(params1.size*sizeof(Array));
                  params1.data[0] = array1;
                  params1.data[1] = array2;
                  Array array3 = func21(&params1, loopsFactor);
                  if (params1.size > 0) {
                     free(params1.data);
                     params1.size = 0;
                  }
                  if (array3.size > 0) {
                     free(array3.data);
                     array3.size = 0;
                  }
               }
               ArrayParam params1;
               params1.size = 2;
               params1.data = (Array*)malloc(params1.size*sizeof(Array));
               params1.data[0] = array1;
               params1.data[1] = array2;
               Array array3 = func13(&params1, rng(), loopsFactor);
               if (params1.size > 0) {
                  free(params1.data);
                  params1.size = 0;
               }
               if (array3.size > 0) {
                  free(array3.data);
                  array3.size = 0;
               }
            }
            ArrayParam params1;
            params1.size = 2;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array1;
            params1.data[1] = array2;
            Array array3 = func9(&params1, rng(), loopsFactor);
            if (params1.size > 0) {
               free(params1.data);
               params1.size = 0;
            }
            if (array3.size > 0) {
               free(array3.data);
               array3.size = 0;
            }
         }
      }
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array1;
      params1.data[1] = array2;
      Array array3 = func4(&params1, rng(), loopsFactor);
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

