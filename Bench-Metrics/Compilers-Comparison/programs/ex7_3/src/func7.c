#include "ex7_3.h" 
Array func7(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array8;
   if (pCounter > 0) {
      array8 = vars->data[--pCounter];
      array8.refC++;
   } else {
      array8.size = 211;
      array8.refC = 1;
      array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
      memset(array8.data, 0, array8.size*sizeof(unsigned int));
   }
   return array8;
}

