#include "ex9_5.h" 
Array func16(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array27;
   if (pCounter > 0) {
      array27 = vars->data[--pCounter];
      array27.refC++;
   } else {
      array27.size = 570;
      array27.refC = 1;
      array27.data = (unsigned int*)malloc(array27.size*sizeof(unsigned int));
      memset(array27.data, 0, array27.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array27.size; i++) {
      if (array27.data[i] == 78) { 
         return array27;
      }
   }
   return array27;
}

