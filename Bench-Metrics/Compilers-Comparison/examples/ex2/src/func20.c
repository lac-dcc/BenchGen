#include "ex2.h" 
Array func20(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array6;
   if (pCounter > 0) {
      array6 = vars->data[--pCounter];
   } else {
      array6.size = 58;
      array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
      memset(array6.data, 0, array6.size*sizeof(unsigned int));
   }
   return array6;
}

