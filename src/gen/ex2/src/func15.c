#include "ex2.h" 
Array func15(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
   } else {
      array5.size = 84;
      array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
      memset(array5.data, 0, array5.size*sizeof(unsigned int));
   }
   unsigned int loop11 = 0;
   unsigned int loopLimit11 = (rand()%loopsFactor)/3 + 1;
   for(; loop11 < loopLimit11; loop11++) {
      for (int i = 0; i < array5.size; i++) {
         array5.data[i]++;
      }
      for (int i = 0; i < array5.size; i++) {
         if (array5.data[i] == 5) { 
            return array5;
         }
      }
      if(PATH0 & 1) {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array5;
         Array array6 = func19(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array6.size > 0) {
            free(array6.data);
            array6.size = 0;
         }
      }
      else {
      }
   }
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   return array5;
}

