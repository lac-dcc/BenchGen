#include "07_val.h" 
Array func3(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array10;
   if (pCounter > 0) {
      array10 = vars->data[--pCounter];
      array10.refC++;
   } else {
      array10.size = 67;
      array10.refC = 1;
      array10.data = (unsigned int*)malloc(array10.size*sizeof(unsigned int));
      memset(array10.data, 0, array10.size*sizeof(unsigned int));
   }
   return array10;
}

