#include "ex7_2.h" 
Array func5(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array11;
   if (pCounter > 0) {
      array11 = vars->data[--pCounter];
      array11.refC++;
   } else {
      array11.size = 929;
      array11.refC = 1;
      array11.data = (unsigned int*)malloc(array11.size*sizeof(unsigned int));
      memset(array11.data, 0, array11.size*sizeof(unsigned int));
   }
   return array11;
}
