#include "ex7_4.h" 
Array func0(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      unsigned int loop0 = 0;
      unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
      for(; loop0 < loopLimit0; loop0++) {
         Array array2;
         if (pCounter > 0) {
            array2 = vars->data[--pCounter];
            array2.refC++;
         } else {
            array2.size = 492;
            array2.refC = 1;
            array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
            memset(array2.data, 0, array2.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array2.size; i++) {
            if (array2.data[i] == 21) { 
               return array2;
            }
         }
         Array array3;
         if (pCounter > 0) {
            array3 = vars->data[--pCounter];
            array3.refC++;
         } else {
            array3.size = 362;
            array3.refC = 1;
            array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
            memset(array3.data, 0, array3.size*sizeof(unsigned int));
         }
         ArrayParam params0;
         params0.size = 2;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array2;
         params0.data[1] = array3;
         Array array4 = func6(&params0, rng(), loopsFactor);
         free(params0.data);
         Array array12;
         if (pCounter > 0) {
            array12 = vars->data[--pCounter];
            array12.refC++;
         } else {
            array12.size = 58;
            array12.refC = 1;
            array12.data = (unsigned int*)malloc(array12.size*sizeof(unsigned int));
            memset(array12.data, 0, array12.size*sizeof(unsigned int));
         }
         if(PATH0 & 2) {
            unsigned int loop3 = 0;
            unsigned int loopLimit3 = (rand()%loopsFactor)/2 + 1;
            for(; loop3 < loopLimit3; loop3++) {
               Array array13;
               if (pCounter > 0) {
                  array13 = vars->data[--pCounter];
                  array13.refC++;
               } else {
                  array13.size = 69;
                  array13.refC = 1;
                  array13.data = (unsigned int*)malloc(array13.size*sizeof(unsigned int));
                  memset(array13.data, 0, array13.size*sizeof(unsigned int));
               }
               for (int i = 0; i < array4.size; i++) {
                  if (array4.data[i] == 93) { 
                     return array4;
                  }
               }
               array13.refC--;
               if(array13.refC == 0) {
                  free(array13.data);
               }
            }
         }
         else {
            Array array14;
            if (pCounter > 0) {
               array14 = vars->data[--pCounter];
               array14.refC++;
            } else {
               array14.size = 456;
               array14.refC = 1;
               array14.data = (unsigned int*)malloc(array14.size*sizeof(unsigned int));
               memset(array14.data, 0, array14.size*sizeof(unsigned int));
            }
            Array array15;
            if (pCounter > 0) {
               array15 = vars->data[--pCounter];
               array15.refC++;
            } else {
               array15.size = 11;
               array15.refC = 1;
               array15.data = (unsigned int*)malloc(array15.size*sizeof(unsigned int));
               memset(array15.data, 0, array15.size*sizeof(unsigned int));
            }
            Array array16;
            if (pCounter > 0) {
               array16 = vars->data[--pCounter];
               array16.refC++;
            } else {
               array16.size = 42;
               array16.refC = 1;
               array16.data = (unsigned int*)malloc(array16.size*sizeof(unsigned int));
               memset(array16.data, 0, array16.size*sizeof(unsigned int));
            }
            for (int i = 0; i < array3.size; i++) {
               array3.data[i]++;
            }
            unsigned int loop4 = 0;
            unsigned int loopLimit4 = (rand()%loopsFactor)/2 + 1;
            for(; loop4 < loopLimit4; loop4++) {
               for (int i = 0; i < array14.size; i++) {
                  array14.data[i]--;
               }
            }
            ArrayParam params1;
            params1.size = 7;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array2;
            params1.data[1] = array3;
            params1.data[2] = array4;
            params1.data[3] = array12;
            params1.data[4] = array14;
            params1.data[5] = array15;
            params1.data[6] = array16;
            Array array17 = func10(&params1, loopsFactor);
            free(params1.data);
            ArrayParam params2;
            params2.size = 8;
            params2.data = (Array*)malloc(params2.size*sizeof(Array));
            params2.data[0] = array2;
            params2.data[1] = array3;
            params2.data[2] = array4;
            params2.data[3] = array12;
            params2.data[4] = array14;
            params2.data[5] = array15;
            params2.data[6] = array16;
            params2.data[7] = array17;
            Array array18 = func7(&params2, loopsFactor);
            free(params2.data);
            array18.refC--;
            if(array18.refC == 0) {
               free(array18.data);
            }
            array17.refC--;
            if(array17.refC == 0) {
               free(array17.data);
            }
            array16.refC--;
            if(array16.refC == 0) {
               free(array16.data);
            }
            array15.refC--;
            if(array15.refC == 0) {
               free(array15.data);
            }
            array14.refC--;
            if(array14.refC == 0) {
               free(array14.data);
            }
         }
         for (int i = 0; i < array4.size; i++) {
            if (array4.data[i] == 70) { 
               return array4;
            }
         }
         Array array22;
         if (pCounter > 0) {
            array22 = vars->data[--pCounter];
            array22.refC++;
         } else {
            array22.size = 996;
            array22.refC = 1;
            array22.data = (unsigned int*)malloc(array22.size*sizeof(unsigned int));
            memset(array22.data, 0, array22.size*sizeof(unsigned int));
         }
         Array array23;
         if (pCounter > 0) {
            array23 = vars->data[--pCounter];
            array23.refC++;
         } else {
            array23.size = 281;
            array23.refC = 1;
            array23.data = (unsigned int*)malloc(array23.size*sizeof(unsigned int));
            memset(array23.data, 0, array23.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array12.size; i++) {
            array12.data[i]++;
         }
         unsigned int loop5 = 0;
         unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
         for(; loop5 < loopLimit5; loop5++) {
            for (int i = 0; i < array12.size; i++) {
               array12.data[i]--;
            }
         }
         ArrayParam params1;
         params1.size = 6;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array2;
         params1.data[1] = array3;
         params1.data[2] = array4;
         params1.data[3] = array12;
         params1.data[4] = array22;
         params1.data[5] = array23;
         Array array24 = func8(&params1, loopsFactor);
         free(params1.data);
         array24.refC--;
         if(array24.refC == 0) {
            free(array24.data);
         }
         array23.refC--;
         if(array23.refC == 0) {
            free(array23.data);
         }
         array22.refC--;
         if(array22.refC == 0) {
            free(array22.data);
         }
         array12.refC--;
         if(array12.refC == 0) {
            free(array12.data);
         }
         array4.refC--;
         if(array4.refC == 0) {
            free(array4.data);
         }
         array3.refC--;
         if(array3.refC == 0) {
            free(array3.data);
         }
         array2.refC--;
         if(array2.refC == 0) {
            free(array2.data);
         }
      }
   }
   else {
      Array array26;
      if (pCounter > 0) {
         array26 = vars->data[--pCounter];
         array26.refC++;
      } else {
         array26.size = 582;
         array26.refC = 1;
         array26.data = (unsigned int*)malloc(array26.size*sizeof(unsigned int));
         memset(array26.data, 0, array26.size*sizeof(unsigned int));
      }
      Array array27;
      if (pCounter > 0) {
         array27 = vars->data[--pCounter];
         array27.refC++;
      } else {
         array27.size = 545;
         array27.refC = 1;
         array27.data = (unsigned int*)malloc(array27.size*sizeof(unsigned int));
         memset(array27.data, 0, array27.size*sizeof(unsigned int));
      }
      Array array28;
      if (pCounter > 0) {
         array28 = vars->data[--pCounter];
         array28.refC++;
      } else {
         array28.size = 814;
         array28.refC = 1;
         array28.data = (unsigned int*)malloc(array28.size*sizeof(unsigned int));
         memset(array28.data, 0, array28.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array26.size; i++) {
         array26.data[i]++;
      }
      unsigned int loop6 = 0;
      unsigned int loopLimit6 = (rand()%loopsFactor)/1 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         for (int i = 0; i < array28.size; i++) {
            array28.data[i]--;
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array26;
      params0.data[1] = array27;
      params0.data[2] = array28;
      Array array29 = func4(&params0, rng(), loopsFactor);
      free(params0.data);
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array26;
      params1.data[1] = array27;
      params1.data[2] = array28;
      params1.data[3] = array29;
      Array array38 = func2(&params1, rng(), loopsFactor);
      free(params1.data);
      array38.refC--;
      if(array38.refC == 0) {
         free(array38.data);
      }
      array29.refC--;
      if(array29.refC == 0) {
         free(array29.data);
      }
      array28.refC--;
      if(array28.refC == 0) {
         free(array28.data);
      }
      array27.refC--;
      if(array27.refC == 0) {
         free(array27.data);
      }
      array26.refC--;
      if(array26.refC == 0) {
         free(array26.data);
      }
   }
   Array array58;
   if (pCounter > 0) {
      array58 = vars->data[--pCounter];
      array58.refC++;
   } else {
      array58.size = 829;
      array58.refC = 1;
      array58.data = (unsigned int*)malloc(array58.size*sizeof(unsigned int));
      memset(array58.data, 0, array58.size*sizeof(unsigned int));
   }
   return array58;
}

