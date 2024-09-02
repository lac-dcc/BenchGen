#include "ex8_5.h" 
Array func27(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array20;
   if (pCounter > 0) {
      array20 = vars->data[--pCounter];
      array20.refC++;
   } else {
      array20.size = 814;
      array20.refC = 1;
      array20.data = (unsigned int*)malloc(array20.size*sizeof(unsigned int));
      memset(array20.data, 0, array20.size*sizeof(unsigned int));
   }
   return array20;
}

