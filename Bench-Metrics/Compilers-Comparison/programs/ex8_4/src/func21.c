#include "ex8_4.h" 
Array func21(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array32;
   if (pCounter > 0) {
      array32 = vars->data[--pCounter];
      array32.refC++;
   } else {
      array32.size = 301;
      array32.refC = 1;
      array32.data = (unsigned int*)malloc(array32.size*sizeof(unsigned int));
      memset(array32.data, 0, array32.size*sizeof(unsigned int));
   }
   return array32;
}

