#include "ex3.h" 
Array func5(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array9;
   if (pCounter > 0) {
      array9 = vars->data[--pCounter];
   } else {
      array9.size = 782;
      array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
      memset(array9.data, 0, array9.size*sizeof(unsigned int));
   }
   return array9;
}

