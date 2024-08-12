#include "ex4.h" 
Array func15(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
   } else {
      array5.size = 413;
      array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
      memset(array5.data, 0, array5.size*sizeof(unsigned int));
   }
   return array5;
}

