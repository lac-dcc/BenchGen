#include "ex8_4.h" 
Array func20(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array30;
   if (pCounter > 0) {
      array30 = vars->data[--pCounter];
      array30.refC++;
   } else {
      array30.size = 97;
      array30.refC = 1;
      array30.data = (unsigned int*)malloc(array30.size*sizeof(unsigned int));
      memset(array30.data, 0, array30.size*sizeof(unsigned int));
   }
   return array30;
}

