#include "ex4.h" 
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
   for (int i = 0; i < array1.size; i++) {
      array1.data[i]++;
   }
   if(PATH0 & 1) {
      Array array2;
      if (pCounter > 0) {
         array2 = vars->data[--pCounter];
      } else {
         array2.size = 915;
         array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
         memset(array2.data, 0, array2.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array2.size; i++) {
         if (array2.data[i] == 35) { 
            return array2;
         }
      }
      if (array2.size > 0) {
         free(array2.data);
         array2.size = 0;
      }
   }
   else {
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array1;
      Array array2 = func4(&params0, rng(), loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array2.size > 0) {
         free(array2.data);
         array2.size = 0;
      }
      Array array3;
      if (pCounter > 0) {
         array3 = vars->data[--pCounter];
      } else {
         array3.size = 11;
         array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
         memset(array3.data, 0, array3.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array2.size; i++) {
         if (array2.data[i] == 29) { 
            return array2;
         }
      }
      if (array3.size > 0) {
         free(array3.data);
         array3.size = 0;
      }
   }
   unsigned int loop4 = 0;
   unsigned int loopLimit4 = (rand()%loopsFactor)/2 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      Array array2;
      if (pCounter > 0) {
         array2 = vars->data[--pCounter];
      } else {
         array2.size = 373;
         array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
         memset(array2.data, 0, array2.size*sizeof(unsigned int));
      }
      Array array3;
      if (pCounter > 0) {
         array3 = vars->data[--pCounter];
      } else {
         array3.size = 421;
         array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
         memset(array3.data, 0, array3.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array3.size; i++) {
         array3.data[i]++;
      }
      if(PATH0 & 2) {
      }
      else {
         Array array4;
         if (pCounter > 0) {
            array4 = vars->data[--pCounter];
         } else {
            array4.size = 784;
            array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
            memset(array4.data, 0, array4.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array2.size; i++) {
            array2.data[i]--;
         }
         for (int i = 0; i < array3.size; i++) {
            array3.data[i]--;
         }
         for (int i = 0; i < array1.size; i++) {
            if (array1.data[i] == 15) { 
               return array1;
            }
         }
         if (array4.size > 0) {
            free(array4.data);
            array4.size = 0;
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array1;
      params0.data[1] = array2;
      params0.data[2] = array3;
      Array array4 = func15(&params0, loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array4.size > 0) {
         free(array4.data);
         array4.size = 0;
      }
      if (array3.size > 0) {
         free(array3.data);
         array3.size = 0;
      }
      if (array2.size > 0) {
         free(array2.data);
         array2.size = 0;
      }
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/3 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         ArrayParam params1;
         params1.size = 4;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array1;
         params1.data[1] = array2;
         params1.data[2] = array3;
         params1.data[3] = array4;
         Array array5 = func9(&params1, rng(), loopsFactor);
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
   if(PATH0 & 4) {
      Array array2;
      if (pCounter > 0) {
         array2 = vars->data[--pCounter];
      } else {
         array2.size = 84;
         array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
         memset(array2.data, 0, array2.size*sizeof(unsigned int));
      }
      Array array3;
      if (pCounter > 0) {
         array3 = vars->data[--pCounter];
      } else {
         array3.size = 327;
         array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
         memset(array3.data, 0, array3.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array3.size; i++) {
         array3.data[i]++;
      }
      if(PATH0 & 8) {
         Array array4;
         if (pCounter > 0) {
            array4 = vars->data[--pCounter];
         } else {
            array4.size = 505;
            array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
            memset(array4.data, 0, array4.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array3.size; i++) {
            if (array3.data[i] == 29) { 
               return array3;
            }
         }
         if (array4.size > 0) {
            free(array4.data);
            array4.size = 0;
         }
      }
      else {
         ArrayParam params0;
         params0.size = 3;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array1;
         params0.data[1] = array2;
         params0.data[2] = array3;
         Array array4 = func12(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array4.size > 0) {
            free(array4.data);
            array4.size = 0;
         }
         Array array5;
         if (pCounter > 0) {
            array5 = vars->data[--pCounter];
         } else {
            array5.size = 857;
            array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
            memset(array5.data, 0, array5.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array5.size; i++) {
            if (array5.data[i] == 95) { 
               return array5;
            }
         }
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
      }
      unsigned int loop7 = 0;
      unsigned int loopLimit7 = (rand()%loopsFactor)/2 + 1;
      for(; loop7 < loopLimit7; loop7++) {
      }
      if(PATH0 & 16) {
         Array array4;
         if (pCounter > 0) {
            array4 = vars->data[--pCounter];
         } else {
            array4.size = 582;
            array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
            memset(array4.data, 0, array4.size*sizeof(unsigned int));
         }
         if (array4.size > 0) {
            free(array4.data);
            array4.size = 0;
         }
         unsigned int loop8 = 0;
         unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
         for(; loop8 < loopLimit8; loop8++) {
            ArrayParam params0;
            params0.size = 4;
            params0.data = (Array*)malloc(params0.size*sizeof(Array));
            params0.data[0] = array1;
            params0.data[1] = array2;
            params0.data[2] = array3;
            params0.data[3] = array4;
            Array array5 = func13(&params0, loopsFactor);
            if (params0.size > 0) {
               free(params0.data);
               params0.size = 0;
            }
            if (array5.size > 0) {
               free(array5.data);
               array5.size = 0;
            }
         }
      }
      else {
         Array array4;
         if (pCounter > 0) {
            array4 = vars->data[--pCounter];
         } else {
            array4.size = 814;
            array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
            memset(array4.data, 0, array4.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array4.size; i++) {
            array4.data[i]--;
         }
         for (int i = 0; i < array3.size; i++) {
            array3.data[i]--;
         }
         for (int i = 0; i < array1.size; i++) {
            if (array1.data[i] == 43) { 
               return array1;
            }
         }
         if (array4.size > 0) {
            free(array4.data);
            array4.size = 0;
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array1;
      params0.data[1] = array2;
      params0.data[2] = array3;
      Array array4 = func8(&params0, loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array4.size > 0) {
         free(array4.data);
         array4.size = 0;
      }
      if (array3.size > 0) {
         free(array3.data);
         array3.size = 0;
      }
      if (array2.size > 0) {
         free(array2.data);
         array2.size = 0;
      }
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/2 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         ArrayParam params1;
         params1.size = 4;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array1;
         params1.data[1] = array2;
         params1.data[2] = array3;
         params1.data[3] = array4;
         Array array5 = func5(&params1, rng(), loopsFactor);
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
   else {
      Array array2;
      if (pCounter > 0) {
         array2 = vars->data[--pCounter];
      } else {
         array2.size = 117;
         array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
         memset(array2.data, 0, array2.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array2.size; i++) {
         array2.data[i]--;
      }
      for (int i = 0; i < array2.size; i++) {
         array2.data[i]--;
      }
      for (int i = 0; i < array2.size; i++) {
         if (array2.data[i] == 75) { 
            return array2;
         }
      }
      if (array2.size > 0) {
         free(array2.data);
         array2.size = 0;
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array1;
   Array array2 = func2(&params0, loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   if (array2.size > 0) {
      free(array2.data);
      array2.size = 0;
   }
   if (array1.size > 0) {
      free(array1.data);
      array1.size = 0;
   }
   return array2;
}

