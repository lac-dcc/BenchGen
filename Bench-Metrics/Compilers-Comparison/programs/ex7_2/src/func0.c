#include "ex7_2.h" 
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
         array2.refC--;
         if(array2.refC == 0) {
            free(array2.data);
         }
      }
   }
   else {
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
      Array array4;
      if (pCounter > 0) {
         array4 = vars->data[--pCounter];
         array4.refC++;
      } else {
         array4.size = 27;
         array4.refC = 1;
         array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
         memset(array4.data, 0, array4.size*sizeof(unsigned int));
      }
      Array array5;
      if (pCounter > 0) {
         array5 = vars->data[--pCounter];
         array5.refC++;
      } else {
         array5.size = 690;
         array5.refC = 1;
         array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
         memset(array5.data, 0, array5.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array4.size; i++) {
         array4.data[i]++;
      }
      unsigned int loop1 = 0;
      unsigned int loopLimit1 = (rand()%loopsFactor)/1 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         for (int i = 0; i < array5.size; i++) {
            array5.data[i]--;
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array3;
      params0.data[1] = array4;
      params0.data[2] = array5;
      Array array6 = func4(&params0, loopsFactor);
      free(params0.data);
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array3;
      params1.data[1] = array4;
      params1.data[2] = array5;
      params1.data[3] = array6;
      Array array8 = func2(&params1, loopsFactor);
      free(params1.data);
      array8.refC--;
      if(array8.refC == 0) {
         free(array8.data);
      }
      array6.refC--;
      if(array6.refC == 0) {
         free(array6.data);
      }
      array5.refC--;
      if(array5.refC == 0) {
         free(array5.data);
      }
      array4.refC--;
      if(array4.refC == 0) {
         free(array4.data);
      }
      array3.refC--;
      if(array3.refC == 0) {
         free(array3.data);
      }
   }
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
   return array12;
}

