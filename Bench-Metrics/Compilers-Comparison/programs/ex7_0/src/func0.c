#include "ex7_0.h" 
Array func0(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
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
   return array2;
}

