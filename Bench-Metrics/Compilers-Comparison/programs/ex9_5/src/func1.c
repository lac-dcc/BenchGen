#include "ex9_5.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array92;
   if (pCounter > 0) {
      array92 = vars->data[--pCounter];
      array92.refC++;
   } else {
      array92.size = 348;
      array92.refC = 1;
      array92.data = (unsigned int*)malloc(array92.size*sizeof(unsigned int));
      memset(array92.data, 0, array92.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array92.size; i++) {
      if (array92.data[i] == 59) { 
         return array92;
      }
   }
   return array92;
}

