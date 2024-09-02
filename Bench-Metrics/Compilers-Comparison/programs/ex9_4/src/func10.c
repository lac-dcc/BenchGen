#include "ex9_4.h" 
Array func10(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array29;
   if (pCounter > 0) {
      array29 = vars->data[--pCounter];
      array29.refC++;
   } else {
      array29.size = 301;
      array29.refC = 1;
      array29.data = (unsigned int*)malloc(array29.size*sizeof(unsigned int));
      memset(array29.data, 0, array29.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array29.size; i++) {
      array29.data[i]++;
   }
   for (int i = 0; i < array29.size; i++) {
      if (array29.data[i] == 41) { 
         return array29;
      }
   }
   for (int i = 0; i < array29.size; i++) {
      array29.data[i]--;
   }
   return array29;
}

