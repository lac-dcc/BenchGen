#include "ex3.h" 
Array func6(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array11;
   if (pCounter > 0) {
      array11 = vars->data[--pCounter];
   } else {
      array11.size = 537;
      array11.data = (unsigned int*)malloc(array11.size*sizeof(unsigned int));
      memset(array11.data, 0, array11.size*sizeof(unsigned int));
   }
   return array11;
}

