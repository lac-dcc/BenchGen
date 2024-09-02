#include "ex9_3.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array38;
   if (pCounter > 0) {
      array38 = vars->data[--pCounter];
      array38.refC++;
   } else {
      array38.size = 708;
      array38.refC = 1;
      array38.data = (unsigned int*)malloc(array38.size*sizeof(unsigned int));
      memset(array38.data, 0, array38.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array38.size; i++) {
      if (array38.data[i] == 40) { 
         return array38;
      }
   }
   return array38;
}

