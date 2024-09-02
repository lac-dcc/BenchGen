#include "ex9_4.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array65;
   if (pCounter > 0) {
      array65 = vars->data[--pCounter];
      array65.refC++;
   } else {
      array65.size = 669;
      array65.refC = 1;
      array65.data = (unsigned int*)malloc(array65.size*sizeof(unsigned int));
      memset(array65.data, 0, array65.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array65.size; i++) {
      if (array65.data[i] == 42) { 
         return array65;
      }
   }
   return array65;
}

