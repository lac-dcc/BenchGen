#include "Bench1.h" 
Array func2(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array3;
   if (pCounter > 0) {
      array3 = vars->data[--pCounter];
   } else {
      array3.size = 386;
      array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
   }
   return array3;
}

