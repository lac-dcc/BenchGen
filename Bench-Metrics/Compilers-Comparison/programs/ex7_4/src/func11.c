#include "ex7_4.h" 
Array func11(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array21;
   if (pCounter > 0) {
      array21 = vars->data[--pCounter];
      array21.refC++;
   } else {
      array21.size = 980;
      array21.refC = 1;
      array21.data = (unsigned int*)malloc(array21.size*sizeof(unsigned int));
      memset(array21.data, 0, array21.size*sizeof(unsigned int));
   }
   return array21;
}

