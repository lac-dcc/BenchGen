#include "ex7_5.h" 
Array func10(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array26;
   if (pCounter > 0) {
      array26 = vars->data[--pCounter];
      array26.refC++;
   } else {
      array26.size = 505;
      array26.refC = 1;
      array26.data = (unsigned int*)malloc(array26.size*sizeof(unsigned int));
      memset(array26.data, 0, array26.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array26.size; i++) {
      if (array26.data[i] == 29) { 
         return array26;
      }
   }
   for (int i = 0; i < array26.size; i++) {
      if (array26.data[i] == 57) { 
         return array26;
      }
   }
   return array26;
}

