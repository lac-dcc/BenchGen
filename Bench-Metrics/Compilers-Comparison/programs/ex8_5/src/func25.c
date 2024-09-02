#include "ex8_5.h" 
Array func25(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array16;
   if (pCounter > 0) {
      array16 = vars->data[--pCounter];
      array16.refC++;
   } else {
      array16.size = 84;
      array16.refC = 1;
      array16.data = (unsigned int*)malloc(array16.size*sizeof(unsigned int));
      memset(array16.data, 0, array16.size*sizeof(unsigned int));
   }
   return array16;
}

