#include "ex9_0.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
      array5.refC++;
   } else {
      array5.size = 368;
      array5.refC = 1;
      array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
      memset(array5.data, 0, array5.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array5.size; i++) {
      if (array5.data[i] == 29) { 
         return array5;
      }
   }
   return array5;
}

