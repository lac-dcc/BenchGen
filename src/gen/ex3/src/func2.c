#include "ex3.h" 
Array func2(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array9;
   if (pCounter > 0) {
      array9 = vars->data[--pCounter];
   } else {
      array9.size = 22;
      array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
      memset(array9.data, 0, array9.size*sizeof(unsigned int));
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/1 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      Array array10;
      if (pCounter > 0) {
         array10 = vars->data[--pCounter];
      } else {
         array10.size = 58;
         array10.data = (unsigned int*)malloc(array10.size*sizeof(unsigned int));
         memset(array10.data, 0, array10.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array10.size; i++) {
         array10.data[i]++;
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array9;
      params0.data[1] = array10;
      Array array11 = func5(&params0, loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      if (array11.size > 0) {
         free(array11.data);
         array11.size = 0;
      }
      for (int i = 0; i < array10.size; i++) {
         if (array10.data[i] == 56) { 
            return array10;
         }
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
   return array9;
}

