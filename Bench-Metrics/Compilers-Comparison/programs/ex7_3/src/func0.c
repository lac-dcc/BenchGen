#include "ex7_3.h" 
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
         Array array3 = func6(&params0, loopsFactor);
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
            Array array7 = func7(&params1, loopsFactor);
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
         Array array11 = func8(&params1, loopsFactor);
         free(params1.data);
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
      Array array14;
      if (pCounter > 0) {
         array14 = vars->data[--pCounter];
         array14.refC++;
      } else {
         array14.size = 167;
         array14.refC = 1;
         array14.data = (unsigned int*)malloc(array14.size*sizeof(unsigned int));
         memset(array14.data, 0, array14.size*sizeof(unsigned int));
      }
      Array array15;
      if (pCounter > 0) {
         array15 = vars->data[--pCounter];
         array15.refC++;
      } else {
         array15.size = 393;
         array15.refC = 1;
         array15.data = (unsigned int*)malloc(array15.size*sizeof(unsigned int));
         memset(array15.data, 0, array15.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array14.size; i++) {
         array14.data[i]++;
      }
      unsigned int loop3 = 0;
      unsigned int loopLimit3 = (rand()%loopsFactor)/1 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         for (int i = 0; i < array14.size; i++) {
            array14.data[i]--;
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array13;
      params0.data[1] = array14;
      params0.data[2] = array15;
      Array array16 = func4(&params0, loopsFactor);
      free(params0.data);
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array13;
      params1.data[1] = array14;
      params1.data[2] = array15;
      params1.data[3] = array16;
      Array array18 = func2(&params1, loopsFactor);
      free(params1.data);
      array18.refC--;
      if(array18.refC == 0) {
         free(array18.data);
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
      array13.refC--;
      if(array13.refC == 0) {
         free(array13.data);
      }
   }
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
   return array27;
}

