#include "ex8_4.h" 
Array func19(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array28;
   if (pCounter > 0) {
      array28 = vars->data[--pCounter];
      array28.refC++;
   } else {
      array28.size = 795;
      array28.refC = 1;
      array28.data = (unsigned int*)malloc(array28.size*sizeof(unsigned int));
      memset(array28.data, 0, array28.size*sizeof(unsigned int));
   }
   return array28;
}

