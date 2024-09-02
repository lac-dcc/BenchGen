#include "ex7_1.h" 
Array func2(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
      array4.refC++;
   } else {
      array4.size = 690;
      array4.refC = 1;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      memset(array4.data, 0, array4.size*sizeof(unsigned int));
   }
   return array4;
}

