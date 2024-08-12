#include "ex3.h" 
Array func0(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array2;
   if (pCounter > 0) {
      array2 = vars->data[--pCounter];
   } else {
      array2.size = 777;
      array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
      memset(array2.data, 0, array2.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array2.size; i++) {
      array2.data[i]++;
   }
   Array array3;
   if (pCounter > 0) {
      array3 = vars->data[--pCounter];
   } else {
      array3.size = 793;
      array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
      memset(array3.data, 0, array3.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      for (int i = 0; i < array3.size; i++) {
         if (array3.data[i] == 86) { 
            return array3;
         }
      }
   }
   else {
      Array array4;
      if (pCounter > 0) {
         array4 = vars->data[--pCounter];
      } else {
         array4.size = 492;
         array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
         memset(array4.data, 0, array4.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array2.size; i++) {
         array2.data[i]++;
      }
      if (array4.size > 0) {
         free(array4.data);
         array4.size = 0;
      }
   }
   for (int i = 0; i < array3.size; i++) {
      if (array3.data[i] == 62) { 
         return array3;
      }
   }
   if (array3.size > 0) {
      free(array3.data);
      array3.size = 0;
   }
   Array array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
   } else {
      array4.size = 27;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      memset(array4.data, 0, array4.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array4.size; i++) {
      array4.data[i]++;
   }
   Array array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
   } else {
      array5.size = 59;
      array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
      memset(array5.data, 0, array5.size*sizeof(unsigned int));
   }
   if(PATH0 & 2) {
      for (int i = 0; i < array5.size; i++) {
         if (array5.data[i] == 26) { 
            return array5;
         }
      }
   }
   else {
      Array array6;
      if (pCounter > 0) {
         array6 = vars->data[--pCounter];
      } else {
         array6.size = 540;
         array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
         memset(array6.data, 0, array6.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array3.size; i++) {
         array3.data[i]++;
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
   }
   for (int i = 0; i < array2.size; i++) {
      if (array2.data[i] == 36) { 
         return array2;
      }
   }
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   Array array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
   } else {
      array6.size = 211;
      array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
      memset(array6.data, 0, array6.size*sizeof(unsigned int));
   }
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      Array array7;
      if (pCounter > 0) {
         array7 = vars->data[--pCounter];
      } else {
         array7.size = 368;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         memset(array7.data, 0, array7.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array5.size; i++) {
         array5.data[i]++;
      }
      ArrayParam params0;
      params0.size = 6;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array2;
      params0.data[1] = array3;
      params0.data[2] = array4;
      params0.data[3] = array5;
      params0.data[4] = array6;
      params0.data[5] = array7;
      Array array8 = func5(&params0, loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array8.size > 0) {
         free(array8.data);
         array8.size = 0;
      }
      for (int i = 0; i < array7.size; i++) {
         if (array7.data[i] == 23) { 
            return array7;
         }
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   Array array7;
   if (pCounter > 0) {
      array7 = vars->data[--pCounter];
   } else {
      array7.size = 67;
      array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
      memset(array7.data, 0, array7.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array3.size; i++) {
      if (array3.data[i] == 29) { 
         return array3;
      }
   }
   ArrayParam params0;
   params0.size = 6;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array2;
   params0.data[1] = array3;
   params0.data[2] = array4;
   params0.data[3] = array5;
   params0.data[4] = array6;
   params0.data[5] = array7;
   Array array8 = func2(&params0, loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   for (int i = 0; i < array4.size; i++) {
      array4.data[i]++;
   }
   for (int i = 0; i < array3.size; i++) {
      array3.data[i]++;
   }
   for (int i = 0; i < array6.size; i++) {
      if (array6.data[i] == 21) { 
         return array6;
      }
   }
   if(PATH0 & 4) {
      if(PATH0 & 8) {
         Array array9;
         if (pCounter > 0) {
            array9 = vars->data[--pCounter];
         } else {
            array9.size = 919;
            array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
            memset(array9.data, 0, array9.size*sizeof(unsigned int));
         }
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (rand()%loopsFactor)/1 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            ArrayParam params1;
            params1.size = 8;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array2;
            params1.data[1] = array3;
            params1.data[2] = array4;
            params1.data[3] = array5;
            params1.data[4] = array6;
            params1.data[5] = array7;
            params1.data[6] = array8;
            params1.data[7] = array9;
            Array array10 = func6(&params1, loopsFactor);
            if (params1.size > 0) {
               free(params1.data);
               params1.size = 0;
            }
            for (int i = 0; i < array4.size; i++) {
               if (array4.data[i] == 15) { 
                  return array4;
               }
            }
            ArrayParam params2;
            params2.size = 9;
            params2.data = (Array*)malloc(params2.size*sizeof(Array));
            params2.data[0] = array2;
            params2.data[1] = array3;
            params2.data[2] = array4;
            params2.data[3] = array5;
            params2.data[4] = array6;
            params2.data[5] = array7;
            params2.data[6] = array8;
            params2.data[7] = array9;
            params2.data[8] = array10;
            Array array11 = func7(&params2, loopsFactor);
            if (params2.size > 0) {
               free(params2.data);
               params2.size = 0;
            }
            if (array11.size > 0) {
               free(array11.data);
               array11.size = 0;
            }
            if (array10.size > 0) {
               free(array10.data);
               array10.size = 0;
            }
         }
         if (array9.size > 0) {
            free(array9.data);
            array9.size = 0;
         }
      }
      else {
         ArrayParam params1;
         params1.size = 7;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array2;
         params1.data[1] = array3;
         params1.data[2] = array4;
         params1.data[3] = array5;
         params1.data[4] = array6;
         params1.data[5] = array7;
         params1.data[6] = array8;
         Array array9 = func5(&params1, loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         if (array9.size > 0) {
            free(array9.data);
            array9.size = 0;
         }
      }
   }
   else {
      Array array9;
      if (pCounter > 0) {
         array9 = vars->data[--pCounter];
      } else {
         array9.size = 980;
         array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
         memset(array9.data, 0, array9.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 73) { 
            return array6;
         }
      }
      ArrayParam params1;
      params1.size = 8;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array2;
      params1.data[1] = array3;
      params1.data[2] = array4;
      params1.data[3] = array5;
      params1.data[4] = array6;
      params1.data[5] = array7;
      params1.data[6] = array8;
      params1.data[7] = array9;
      Array array10 = func7(&params1, loopsFactor);
      if (params1.size > 0) {
         free(params1.data);
         params1.size = 0;
      }
      for (int i = 0; i < array7.size; i++) {
         array7.data[i]++;
      }
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]++;
      }
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 5) { 
            return array6;
         }
      }
      if(PATH0 & 16) {
      }
      else {
      }
      if (array10.size > 0) {
         free(array10.data);
         array10.size = 0;
      }
      if (array9.size > 0) {
         free(array9.data);
         array9.size = 0;
      }
   }
   if (array8.size > 0) {
      free(array8.data);
      array8.size = 0;
   }
   if (array7.size > 0) {
      free(array7.data);
      array7.size = 0;
   }
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/1 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      Array array9;
      if (pCounter > 0) {
         array9 = vars->data[--pCounter];
      } else {
         array9.size = 925;
         array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
         memset(array9.data, 0, array9.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]++;
      }
      ArrayParam params1;
      params1.size = 8;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array2;
      params1.data[1] = array3;
      params1.data[2] = array4;
      params1.data[3] = array5;
      params1.data[4] = array6;
      params1.data[5] = array7;
      params1.data[6] = array8;
      params1.data[7] = array9;
      Array array10 = func1(&params1, rng(), loopsFactor);
      if (params1.size > 0) {
         free(params1.data);
         params1.size = 0;
      }
      if (array10.size > 0) {
         free(array10.data);
         array10.size = 0;
      }
      for (int i = 0; i < array3.size; i++) {
         if (array3.data[i] == 32) { 
            return array3;
         }
      }
      if (array9.size > 0) {
         free(array9.data);
         array9.size = 0;
      }
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   for (int i = 0; i < array6.size; i++) {
      if (array6.data[i] == 76) { 
         return array6;
      }
   }
   return array2;
}

