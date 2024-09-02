#include "ex8_5.h" 
Array func26(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array18;
   if (pCounter > 0) {
      array18 = vars->data[--pCounter];
      array18.refC++;
   } else {
      array18.size = 313;
      array18.refC = 1;
      array18.data = (unsigned int*)malloc(array18.size*sizeof(unsigned int));
      memset(array18.data, 0, array18.size*sizeof(unsigned int));
   }
   return array18;
}

