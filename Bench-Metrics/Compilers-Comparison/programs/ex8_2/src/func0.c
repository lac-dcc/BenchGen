#include "ex8_2.h" 
Array func0(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
      array1.refC++;
   } else {
      array1.size = 386;
      array1.refC = 1;
      array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
      memset(array1.data, 0, array1.size*sizeof(unsigned int));
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      if(PATH0 & 1) {
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
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            for (int i = 0; i < array2.size; i++) {
               array2.data[i]--;
            }
            for (int i = 0; i < array2.size; i++) {
               if (array2.data[i] == 62) { 
                  return array2;
               }
            }
         }
         array2.refC--;
         if(array2.refC == 0) {
            free(array2.data);
         }
      }
      else {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array1;
         Array array3 = func4(&params0, loopsFactor);
         free(params0.data);
         array3.refC--;
         if(array3.refC == 0) {
            free(array3.data);
         }
      }
      Array array5;
      if (pCounter > 0) {
         array5 = vars->data[--pCounter];
         array5.refC++;
      } else {
         array5.size = 211;
         array5.refC = 1;
         array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
         memset(array5.data, 0, array5.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array1;
      params0.data[1] = array5;
      Array array6 = func5(&params0, loopsFactor);
      free(params0.data);
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 2) { 
            return array6;
         }
      }
      array6.refC--;
      if(array6.refC == 0) {
         free(array6.data);
      }
      array5.refC--;
      if(array5.refC == 0) {
         free(array5.data);
      }
   }
   return array1;
}

