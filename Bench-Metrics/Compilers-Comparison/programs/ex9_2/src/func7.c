#include "ex9_2.h" 
Array func7(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array15;
   if (pCounter > 0) {
      array15 = vars->data[--pCounter];
      array15.refC++;
   } else {
      array15.size = 305;
      array15.refC = 1;
      array15.data = (unsigned int*)malloc(array15.size*sizeof(unsigned int));
      memset(array15.data, 0, array15.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array15.size; i++) {
      if (array15.data[i] == 84) { 
         return array15;
      }
   }
   return array15;
}

