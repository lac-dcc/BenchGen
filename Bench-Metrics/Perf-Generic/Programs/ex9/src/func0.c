#include "ex9.h" 
Array func0(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array2;
   if (pCounter > 0) {
      array2 = vars->data[--pCounter];
      array2.refC++;
   } else {
      array2.size = 362;
      array2.refC = 1;
      array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
      memset(array2.data, 0, array2.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop1 = 0;
      unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         Array array3;
         if (pCounter > 0) {
            array3 = vars->data[--pCounter];
            array3.refC++;
         } else {
            array3.size = 27;
            array3.refC = 1;
            array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
            memset(array3.data, 0, array3.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array2.size; i++) {
            array2.data[i]--;
         }
         for (int i = 0; i < array3.size; i++) {
            if (array3.data[i] == 63) { 
               return array3;
            }
         }
         array3.refC--;
         if(array3.refC == 0) {
            free(array3.data);
         }
      }
   }
   else {
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array2;
      Array array4 = func2(&params0, loopsFactor);
      free(params0.data);
      array4.refC--;
      if(array4.refC == 0) {
         free(array4.data);
      }
   }
   return array2;
}

