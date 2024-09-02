#include "ex8_2.h" 
Array func4(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
      array4.refC++;
   } else {
      array4.size = 926;
      array4.refC = 1;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      memset(array4.data, 0, array4.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array4.size; i++) {
      array4.data[i]--;
   }
   for (int i = 0; i < array4.size; i++) {
      if (array4.data[i] == 72) { 
         return array4;
      }
   }
   return array4;
}

