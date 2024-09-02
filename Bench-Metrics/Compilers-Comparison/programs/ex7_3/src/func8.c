#include "ex7_3.h" 
Array func8(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array12;
   if (pCounter > 0) {
      array12 = vars->data[--pCounter];
      array12.refC++;
   } else {
      array12.size = 22;
      array12.refC = 1;
      array12.data = (unsigned int*)malloc(array12.size*sizeof(unsigned int));
      memset(array12.data, 0, array12.size*sizeof(unsigned int));
   }
   return array12;
}

