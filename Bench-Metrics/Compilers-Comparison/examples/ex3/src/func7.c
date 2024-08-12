#include "ex3.h" 
Array func7(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array12;
   if (pCounter > 0) {
      array12 = vars->data[--pCounter];
   } else {
      array12.size = 413;
      array12.data = (unsigned int*)malloc(array12.size*sizeof(unsigned int));
      memset(array12.data, 0, array12.size*sizeof(unsigned int));
   }
   return array12;
}

