#include "Bench1.h" 
Array func5(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
   } else {
      array4.size = 862;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
   }
   return array4;
}

