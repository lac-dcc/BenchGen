#include "ex9_4.h" 
Array func12(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array13;
   if (pCounter > 0) {
      array13 = vars->data[--pCounter];
      array13.refC++;
   } else {
      array13.size = 537;
      array13.refC = 1;
      array13.data = (unsigned int*)malloc(array13.size*sizeof(unsigned int));
      memset(array13.data, 0, array13.size*sizeof(unsigned int));
   }
   return array13;
}

