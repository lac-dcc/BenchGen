#include "ex9_2.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array23;
   if (pCounter > 0) {
      array23 = vars->data[--pCounter];
      array23.refC++;
   } else {
      array23.size = 739;
      array23.refC = 1;
      array23.data = (unsigned int*)malloc(array23.size*sizeof(unsigned int));
      memset(array23.data, 0, array23.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array23.size; i++) {
      if (array23.data[i] == 26) { 
         return array23;
      }
   }
   return array23;
}

