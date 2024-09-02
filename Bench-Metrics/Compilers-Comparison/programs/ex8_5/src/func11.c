#include "ex8_5.h" 
Array func11(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      if(PATH0 & 1) {
         Array array5;
         if (pCounter > 0) {
            array5 = vars->data[--pCounter];
            array5.refC++;
         } else {
            array5.size = 736;
            array5.refC = 1;
            array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
            memset(array5.data, 0, array5.size*sizeof(unsigned int));
         }
         unsigned int loop4 = 0;
         unsigned int loopLimit4 = (rand()%loopsFactor)/4 + 1;
         for(; loop4 < loopLimit4; loop4++) {
            for (int i = 0; i < array5.size; i++) {
               array5.data[i]--;
            }
            for (int i = 0; i < array5.size; i++) {
               if (array5.data[i] == 67) { 
                  return array5;
               }
            }
         }
         array5.refC--;
         if(array5.refC == 0) {
            free(array5.data);
         }
      }
      else {
         ArrayParam params0;
         params0.size = 0;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         Array array6 = func22(&params0, loopsFactor);
         free(params0.data);
         array6.refC--;
         if(array6.refC == 0) {
            free(array6.data);
         }
      }
      Array array8;
      if (pCounter > 0) {
         array8 = vars->data[--pCounter];
         array8.refC++;
      } else {
         array8.size = 22;
         array8.refC = 1;
         array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
         memset(array8.data, 0, array8.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array8;
      Array array9 = func23(&params0, loopsFactor);
      free(params0.data);
      for (int i = 0; i < array9.size; i++) {
         if (array9.data[i] == 19) { 
            return array9;
         }
      }
      array9.refC--;
      if(array9.refC == 0) {
         free(array9.data);
      }
      array8.refC--;
      if(array8.refC == 0) {
         free(array8.data);
      }
   }
   Array array11;
   if (pCounter > 0) {
      array11 = vars->data[--pCounter];
      array11.refC++;
   } else {
      array11.size = 784;
      array11.refC = 1;
      array11.data = (unsigned int*)malloc(array11.size*sizeof(unsigned int));
      memset(array11.data, 0, array11.size*sizeof(unsigned int));
   }
   return array11;
}

