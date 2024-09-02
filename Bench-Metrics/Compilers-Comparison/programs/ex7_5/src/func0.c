#include "ex7_5.h" 
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
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array2;
         Array array3 = func12(&params0, loopsFactor);
         free(params0.data);
         Array array5;
         if (pCounter > 0) {
            array5 = vars->data[--pCounter];
            array5.refC++;
         } else {
            array5.size = 763;
            array5.refC = 1;
            array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
            memset(array5.data, 0, array5.size*sizeof(unsigned int));
         }
         if(PATH0 & 2) {
            unsigned int loop1 = 0;
            unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
            for(; loop1 < loopLimit1; loop1++) {
            }
         }
         else {
            Array array6;
            if (pCounter > 0) {
               array6 = vars->data[--pCounter];
               array6.refC++;
            } else {
               array6.size = 926;
               array6.refC = 1;
               array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
               memset(array6.data, 0, array6.size*sizeof(unsigned int));
            }
            ArrayParam params1;
            params1.size = 4;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array2;
            params1.data[1] = array3;
            params1.data[2] = array5;
            params1.data[3] = array6;
            Array array7 = func13(&params1, loopsFactor);
            free(params1.data);
            array7.refC--;
            if(array7.refC == 0) {
               free(array7.data);
            }
            array6.refC--;
            if(array6.refC == 0) {
               free(array6.data);
            }
         }
         for (int i = 0; i < array2.size; i++) {
            if (array2.data[i] == 29) { 
               return array2;
            }
         }
         Array array9;
         if (pCounter > 0) {
            array9 = vars->data[--pCounter];
            array9.refC++;
         } else {
            array9.size = 782;
            array9.refC = 1;
            array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
            memset(array9.data, 0, array9.size*sizeof(unsigned int));
         }
         Array array10;
         if (pCounter > 0) {
            array10 = vars->data[--pCounter];
            array10.refC++;
         } else {
            array10.size = 530;
            array10.refC = 1;
            array10.data = (unsigned int*)malloc(array10.size*sizeof(unsigned int));
            memset(array10.data, 0, array10.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array5.size; i++) {
            array5.data[i]++;
         }
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (rand()%loopsFactor)/2 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            for (int i = 0; i < array9.size; i++) {
               array9.data[i]--;
            }
         }
         ArrayParam params1;
         params1.size = 5;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array2;
         params1.data[1] = array3;
         params1.data[2] = array5;
         params1.data[3] = array9;
         params1.data[4] = array10;
         Array array11 = func14(&params1, loopsFactor);
         free(params1.data);
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
         ArrayParam params2;
         params2.size = 7;
         params2.data = (Array*)malloc(params2.size*sizeof(Array));
         params2.data[0] = array2;
         params2.data[1] = array3;
         params2.data[2] = array5;
         params2.data[3] = array9;
         params2.data[4] = array10;
         params2.data[5] = array11;
         params2.data[6] = array13;
         Array array14 = func6(&params2, rng(), loopsFactor);
         free(params2.data);
         Array array27;
         if (pCounter > 0) {
            array27 = vars->data[--pCounter];
            array27.refC++;
         } else {
            array27.size = 582;
            array27.refC = 1;
            array27.data = (unsigned int*)malloc(array27.size*sizeof(unsigned int));
            memset(array27.data, 0, array27.size*sizeof(unsigned int));
         }
         if(PATH0 & 4) {
            unsigned int loop6 = 0;
            unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
            for(; loop6 < loopLimit6; loop6++) {
               for (int i = 0; i < array2.size; i++) {
                  if (array2.data[i] == 14) { 
                     return array2;
                  }
               }
               Array array28;
               if (pCounter > 0) {
                  array28 = vars->data[--pCounter];
                  array28.refC++;
               } else {
                  array28.size = 367;
                  array28.refC = 1;
                  array28.data = (unsigned int*)malloc(array28.size*sizeof(unsigned int));
                  memset(array28.data, 0, array28.size*sizeof(unsigned int));
               }
               ArrayParam params3;
               params3.size = 10;
               params3.data = (Array*)malloc(params3.size*sizeof(Array));
               params3.data[0] = array2;
               params3.data[1] = array3;
               params3.data[2] = array5;
               params3.data[3] = array9;
               params3.data[4] = array10;
               params3.data[5] = array11;
               params3.data[6] = array13;
               params3.data[7] = array14;
               params3.data[8] = array27;
               params3.data[9] = array28;
               Array array29 = func12(&params3, loopsFactor);
               free(params3.data);
               Array array30;
               if (pCounter > 0) {
                  array30 = vars->data[--pCounter];
                  array30.refC++;
               } else {
                  array30.size = 43;
                  array30.refC = 1;
                  array30.data = (unsigned int*)malloc(array30.size*sizeof(unsigned int));
                  memset(array30.data, 0, array30.size*sizeof(unsigned int));
               }
               if(PATH0 & 8) {
                  unsigned int loop7 = 0;
                  unsigned int loopLimit7 = (rand()%loopsFactor)/3 + 1;
                  for(; loop7 < loopLimit7; loop7++) {
                  }
               }
               else {
                  Array array31;
                  if (pCounter > 0) {
                     array31 = vars->data[--pCounter];
                     array31.refC++;
                  } else {
                     array31.size = 750;
                     array31.refC = 1;
                     array31.data = (unsigned int*)malloc(array31.size*sizeof(unsigned int));
                     memset(array31.data, 0, array31.size*sizeof(unsigned int));
                  }
                  ArrayParam params4;
                  params4.size = 13;
                  params4.data = (Array*)malloc(params4.size*sizeof(Array));
                  params4.data[0] = array2;
                  params4.data[1] = array3;
                  params4.data[2] = array5;
                  params4.data[3] = array9;
                  params4.data[4] = array10;
                  params4.data[5] = array11;
                  params4.data[6] = array13;
                  params4.data[7] = array14;
                  params4.data[8] = array27;
                  params4.data[9] = array28;
                  params4.data[10] = array29;
                  params4.data[11] = array30;
                  params4.data[12] = array31;
                  Array array32 = func13(&params4, loopsFactor);
                  free(params4.data);
                  array32.refC--;
                  if(array32.refC == 0) {
                     free(array32.data);
                  }
                  array31.refC--;
                  if(array31.refC == 0) {
                     free(array31.data);
                  }
               }
               for (int i = 0; i < array2.size; i++) {
                  if (array2.data[i] == 78) { 
                     return array2;
                  }
               }
               Array array33;
               if (pCounter > 0) {
                  array33 = vars->data[--pCounter];
                  array33.refC++;
               } else {
                  array33.size = 788;
                  array33.refC = 1;
                  array33.data = (unsigned int*)malloc(array33.size*sizeof(unsigned int));
                  memset(array33.data, 0, array33.size*sizeof(unsigned int));
               }
               Array array34;
               if (pCounter > 0) {
                  array34 = vars->data[--pCounter];
                  array34.refC++;
               } else {
                  array34.size = 584;
                  array34.refC = 1;
                  array34.data = (unsigned int*)malloc(array34.size*sizeof(unsigned int));
                  memset(array34.data, 0, array34.size*sizeof(unsigned int));
               }
               for (int i = 0; i < array14.size; i++) {
                  array14.data[i]++;
               }
               unsigned int loop8 = 0;
               unsigned int loopLimit8 = (rand()%loopsFactor)/3 + 1;
               for(; loop8 < loopLimit8; loop8++) {
                  for (int i = 0; i < array28.size; i++) {
                     array28.data[i]--;
                  }
               }
               ArrayParam params4;
               params4.size = 14;
               params4.data = (Array*)malloc(params4.size*sizeof(Array));
               params4.data[0] = array2;
               params4.data[1] = array3;
               params4.data[2] = array5;
               params4.data[3] = array9;
               params4.data[4] = array10;
               params4.data[5] = array11;
               params4.data[6] = array13;
               params4.data[7] = array14;
               params4.data[8] = array27;
               params4.data[9] = array28;
               params4.data[10] = array29;
               params4.data[11] = array30;
               params4.data[12] = array33;
               params4.data[13] = array34;
               Array array35 = func14(&params4, loopsFactor);
               free(params4.data);
               array35.refC--;
               if(array35.refC == 0) {
                  free(array35.data);
               }
               array34.refC--;
               if(array34.refC == 0) {
                  free(array34.data);
               }
               array33.refC--;
               if(array33.refC == 0) {
                  free(array33.data);
               }
               array30.refC--;
               if(array30.refC == 0) {
                  free(array30.data);
               }
               array29.refC--;
               if(array29.refC == 0) {
                  free(array29.data);
               }
               array28.refC--;
               if(array28.refC == 0) {
                  free(array28.data);
               }
            }
         }
         else {
            Array array36;
            if (pCounter > 0) {
               array36 = vars->data[--pCounter];
               array36.refC++;
            } else {
               array36.size = 932;
               array36.refC = 1;
               array36.data = (unsigned int*)malloc(array36.size*sizeof(unsigned int));
               memset(array36.data, 0, array36.size*sizeof(unsigned int));
            }
            Array array37;
            if (pCounter > 0) {
               array37 = vars->data[--pCounter];
               array37.refC++;
            } else {
               array37.size = 60;
               array37.refC = 1;
               array37.data = (unsigned int*)malloc(array37.size*sizeof(unsigned int));
               memset(array37.data, 0, array37.size*sizeof(unsigned int));
            }
            Array array38;
            if (pCounter > 0) {
               array38 = vars->data[--pCounter];
               array38.refC++;
            } else {
               array38.size = 676;
               array38.refC = 1;
               array38.data = (unsigned int*)malloc(array38.size*sizeof(unsigned int));
               memset(array38.data, 0, array38.size*sizeof(unsigned int));
            }
            for (int i = 0; i < array2.size; i++) {
               array2.data[i]++;
            }
            unsigned int loop9 = 0;
            unsigned int loopLimit9 = (rand()%loopsFactor)/2 + 1;
            for(; loop9 < loopLimit9; loop9++) {
               for (int i = 0; i < array14.size; i++) {
                  array14.data[i]--;
               }
            }
            ArrayParam params3;
            params3.size = 12;
            params3.data = (Array*)malloc(params3.size*sizeof(Array));
            params3.data[0] = array2;
            params3.data[1] = array3;
            params3.data[2] = array5;
            params3.data[3] = array9;
            params3.data[4] = array10;
            params3.data[5] = array11;
            params3.data[6] = array13;
            params3.data[7] = array14;
            params3.data[8] = array27;
            params3.data[9] = array36;
            params3.data[10] = array37;
            params3.data[11] = array38;
            Array array39 = func10(&params3, loopsFactor);
            free(params3.data);
            ArrayParam params4;
            params4.size = 13;
            params4.data = (Array*)malloc(params4.size*sizeof(Array));
            params4.data[0] = array2;
            params4.data[1] = array3;
            params4.data[2] = array5;
            params4.data[3] = array9;
            params4.data[4] = array10;
            params4.data[5] = array11;
            params4.data[6] = array13;
            params4.data[7] = array14;
            params4.data[8] = array27;
            params4.data[9] = array36;
            params4.data[10] = array37;
            params4.data[11] = array38;
            params4.data[12] = array39;
            Array array40 = func7(&params4, loopsFactor);
            free(params4.data);
            array40.refC--;
            if(array40.refC == 0) {
               free(array40.data);
            }
            array39.refC--;
            if(array39.refC == 0) {
               free(array39.data);
            }
            array38.refC--;
            if(array38.refC == 0) {
               free(array38.data);
            }
            array37.refC--;
            if(array37.refC == 0) {
               free(array37.data);
            }
            array36.refC--;
            if(array36.refC == 0) {
               free(array36.data);
            }
         }
         for (int i = 0; i < array10.size; i++) {
            if (array10.data[i] == 29) { 
               return array10;
            }
         }
         Array array49;
         if (pCounter > 0) {
            array49 = vars->data[--pCounter];
            array49.refC++;
         } else {
            array49.size = 31;
            array49.refC = 1;
            array49.data = (unsigned int*)malloc(array49.size*sizeof(unsigned int));
            memset(array49.data, 0, array49.size*sizeof(unsigned int));
         }
         Array array50;
         if (pCounter > 0) {
            array50 = vars->data[--pCounter];
            array50.refC++;
         } else {
            array50.size = 117;
            array50.refC = 1;
            array50.data = (unsigned int*)malloc(array50.size*sizeof(unsigned int));
            memset(array50.data, 0, array50.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array50.size; i++) {
            array50.data[i]++;
         }
         unsigned int loop12 = 0;
         unsigned int loopLimit12 = (rand()%loopsFactor)/2 + 1;
         for(; loop12 < loopLimit12; loop12++) {
            for (int i = 0; i < array9.size; i++) {
               array9.data[i]--;
            }
         }
         ArrayParam params3;
         params3.size = 11;
         params3.data = (Array*)malloc(params3.size*sizeof(Array));
         params3.data[0] = array2;
         params3.data[1] = array3;
         params3.data[2] = array5;
         params3.data[3] = array9;
         params3.data[4] = array10;
         params3.data[5] = array11;
         params3.data[6] = array13;
         params3.data[7] = array14;
         params3.data[8] = array27;
         params3.data[9] = array49;
         params3.data[10] = array50;
         Array array51 = func8(&params3, rng(), loopsFactor);
         free(params3.data);
         array51.refC--;
         if(array51.refC == 0) {
            free(array51.data);
         }
         array50.refC--;
         if(array50.refC == 0) {
            free(array50.data);
         }
         array49.refC--;
         if(array49.refC == 0) {
            free(array49.data);
         }
         array27.refC--;
         if(array27.refC == 0) {
            free(array27.data);
         }
         array14.refC--;
         if(array14.refC == 0) {
            free(array14.data);
         }
         array13.refC--;
         if(array13.refC == 0) {
            free(array13.data);
         }
         array11.refC--;
         if(array11.refC == 0) {
            free(array11.data);
         }
         array10.refC--;
         if(array10.refC == 0) {
            free(array10.data);
         }
         array9.refC--;
         if(array9.refC == 0) {
            free(array9.data);
         }
         array5.refC--;
         if(array5.refC == 0) {
            free(array5.data);
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
      Array array60;
      if (pCounter > 0) {
         array60 = vars->data[--pCounter];
         array60.refC++;
      } else {
         array60.size = 708;
         array60.refC = 1;
         array60.data = (unsigned int*)malloc(array60.size*sizeof(unsigned int));
         memset(array60.data, 0, array60.size*sizeof(unsigned int));
      }
      Array array61;
      if (pCounter > 0) {
         array61 = vars->data[--pCounter];
         array61.refC++;
      } else {
         array61.size = 715;
         array61.refC = 1;
         array61.data = (unsigned int*)malloc(array61.size*sizeof(unsigned int));
         memset(array61.data, 0, array61.size*sizeof(unsigned int));
      }
      Array array62;
      if (pCounter > 0) {
         array62 = vars->data[--pCounter];
         array62.refC++;
      } else {
         array62.size = 340;
         array62.refC = 1;
         array62.data = (unsigned int*)malloc(array62.size*sizeof(unsigned int));
         memset(array62.data, 0, array62.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array60.size; i++) {
         array60.data[i]++;
      }
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/1 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         for (int i = 0; i < array60.size; i++) {
            array60.data[i]--;
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array60;
      params0.data[1] = array61;
      params0.data[2] = array62;
      Array array63 = func4(&params0, rng(), loopsFactor);
      free(params0.data);
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array60;
      params1.data[1] = array61;
      params1.data[2] = array62;
      params1.data[3] = array63;
      Array array77 = func2(&params1, rng(), loopsFactor);
      free(params1.data);
      array77.refC--;
      if(array77.refC == 0) {
         free(array77.data);
      }
      array63.refC--;
      if(array63.refC == 0) {
         free(array63.data);
      }
      array62.refC--;
      if(array62.refC == 0) {
         free(array62.data);
      }
      array61.refC--;
      if(array61.refC == 0) {
         free(array61.data);
      }
      array60.refC--;
      if(array60.refC == 0) {
         free(array60.data);
      }
   }
   Array array109;
   if (pCounter > 0) {
      array109 = vars->data[--pCounter];
      array109.refC++;
   } else {
      array109.size = 305;
      array109.refC = 1;
      array109.data = (unsigned int*)malloc(array109.size*sizeof(unsigned int));
      memset(array109.data, 0, array109.size*sizeof(unsigned int));
   }
   return array109;
}

