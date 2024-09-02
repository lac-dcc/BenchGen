#include "ex8_2.h" 
Array func8(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array14;
   if (pCounter > 0) {
      array14 = vars->data[--pCounter];
      array14.refC++;
   } else {
      array14.size = 91;
      array14.refC = 1;
      array14.data = (unsigned int*)malloc(array14.size*sizeof(unsigned int));
      memset(array14.data, 0, array14.size*sizeof(unsigned int));
   }
   return array14;
}

