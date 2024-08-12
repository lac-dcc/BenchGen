#include "ex5.h" 
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   if(PATH0 & 1) {
      unsigned int loop2 = 0;
      unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         Array array2;
         if (pCounter > 0) {
            array2 = vars->data[--pCounter];
         } else {
            array2.size = 777;
            array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
            memset(array2.data, 0, array2.size*sizeof(unsigned int));
         }
         unsigned int loop3 = 0;
         unsigned int loopLimit3 = (rand()%loopsFactor)/4 + 1;
         for(; loop3 < loopLimit3; loop3++) {
            ArrayParam params0;
            params0.size = 1;
            params0.data = (Array*)malloc(params0.size*sizeof(Array));
            params0.data[0] = array2;
            Array array3 = func6(&params0, rng(), loopsFactor);
            if (params0.size > 0) {
               free(params0.data);
               params0.size = 0;
            }
            if (array3.size > 0) {
               free(array3.data);
               array3.size = 0;
            }
            Array array4;
            if (pCounter > 0) {
               array4 = vars->data[--pCounter];
            } else {
               array4.size = 649;
               array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
               memset(array4.data, 0, array4.size*sizeof(unsigned int));
            }
            unsigned int loop6 = 0;
            unsigned int loopLimit6 = (rand()%loopsFactor)/5 + 1;
            for(; loop6 < loopLimit6; loop6++) {
               for (int i = 0; i < array3.size; i++) {
                  array3.data[i]++;
               }
               ArrayParam params1;
               params1.size = 3;
               params1.data = (Array*)malloc(params1.size*sizeof(Array));
               params1.data[0] = array2;
               params1.data[1] = array3;
               params1.data[2] = array4;
               Array array5 = func4(&params1, loopsFactor);
               if (params1.size > 0) {
                  free(params1.data);
                  params1.size = 0;
               }
               for (int i = 0; i < array4.size; i++) {
                  if (array4.data[i] == 40) { 
                     return array4;
                  }
               }
               for (int i = 0; i < array4.size; i++) {
                  if (array4.data[i] == 72) { 
                     return array4;
                  }
               }
               if (array5.size > 0) {
                  free(array5.data);
                  array5.size = 0;
               }
            }
            if (array4.size > 0) {
               free(array4.data);
               array4.size = 0;
            }
         }
         if (array2.size > 0) {
            free(array2.data);
            array2.size = 0;
         }
      }
   }
   else {
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/3 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         Array array2;
         if (pCounter > 0) {
            array2 = vars->data[--pCounter];
         } else {
            array2.size = 736;
            array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
            memset(array2.data, 0, array2.size*sizeof(unsigned int));
         }
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array2;
         Array array3 = func5(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         for (int i = 0; i < array3.size; i++) {
            if (array3.data[i] == 82) { 
               return array3;
            }
         }
         Array array4;
         if (pCounter > 0) {
            array4 = vars->data[--pCounter];
         } else {
            array4.size = 530;
            array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
            memset(array4.data, 0, array4.size*sizeof(unsigned int));
         }
         unsigned int loop9 = 0;
         unsigned int loopLimit9 = (rand()%loopsFactor)/4 + 1;
         for(; loop9 < loopLimit9; loop9++) {
            for (int i = 0; i < array4.size; i++) {
               array4.data[i]++;
            }
            Array array5;
            if (pCounter > 0) {
               array5 = vars->data[--pCounter];
            } else {
               array5.size = 123;
               array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
               memset(array5.data, 0, array5.size*sizeof(unsigned int));
            }
            for (int i = 0; i < array5.size; i++) {
               array5.data[i]--;
            }
            if (array5.size > 0) {
               free(array5.data);
               array5.size = 0;
            }
         }
         Array array5;
         if (pCounter > 0) {
            array5 = vars->data[--pCounter];
         } else {
            array5.size = 135;
            array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
            memset(array5.data, 0, array5.size*sizeof(unsigned int));
         }
         unsigned int loop10 = 0;
         unsigned int loopLimit10 = (rand()%loopsFactor)/4 + 1;
         for(; loop10 < loopLimit10; loop10++) {
            for (int i = 0; i < array3.size; i++) {
               array3.data[i]--;
            }
         }
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
         for (int i = 0; i < array4.size; i++) {
            if (array4.data[i] == 22) { 
               return array4;
            }
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
   }
   Array array2;
   if (pCounter > 0) {
      array2 = vars->data[--pCounter];
   } else {
      array2.size = 58;
      array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
      memset(array2.data, 0, array2.size*sizeof(unsigned int));
   }
   return array2;
}

