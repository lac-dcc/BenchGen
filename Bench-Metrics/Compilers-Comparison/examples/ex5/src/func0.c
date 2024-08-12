#include "ex5.h" 
Array func0(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array1 = func3(&params0, rng(), loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array1.size > 0) {
         free(array1.data);
         array1.size = 0;
      }
      Array array2;
      if (pCounter > 0) {
         array2 = vars->data[--pCounter];
      } else {
         array2.size = 167;
         array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
         memset(array2.data, 0, array2.size*sizeof(unsigned int));
      }
      unsigned int loop11 = 0;
      unsigned int loopLimit11 = (rand()%loopsFactor)/3 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         for (int i = 0; i < array2.size; i++) {
            array2.data[i]++;
         }
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array1;
         params1.data[1] = array2;
         Array array3 = func2(&params1, loopsFactor);
         if (params1.size > 0) {
            free(params1.data);
            params1.size = 0;
         }
         for (int i = 0; i < array1.size; i++) {
            if (array1.data[i] == 19) { 
               return array1;
            }
         }
         for (int i = 0; i < array3.size; i++) {
            if (array3.data[i] == 37) { 
               return array3;
            }
         }
         if (array3.size > 0) {
            free(array3.data);
            array3.size = 0;
         }
      }
      if (array2.size > 0) {
         free(array2.data);
         array2.size = 0;
      }
   }
   Array array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
   } else {
      array1.size = 198;
      array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
      memset(array1.data, 0, array1.size*sizeof(unsigned int));
   }
   return array1;
}

