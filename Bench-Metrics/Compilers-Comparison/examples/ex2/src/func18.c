#include "ex2.h" 
Array func18(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array8;
   if (pCounter > 0) {
      array8 = vars->data[--pCounter];
   } else {
      array8.size = 368;
      array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
      memset(array8.data, 0, array8.size*sizeof(unsigned int));
   }
   return array8;
}

