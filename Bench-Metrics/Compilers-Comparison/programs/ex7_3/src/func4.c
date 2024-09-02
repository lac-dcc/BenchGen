#include "ex7_3.h" 
Array func4(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array17;
   if (pCounter > 0) {
      array17 = vars->data[--pCounter];
      array17.refC++;
   } else {
      array17.size = 919;
      array17.refC = 1;
      array17.data = (unsigned int*)malloc(array17.size*sizeof(unsigned int));
      memset(array17.data, 0, array17.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array17.size; i++) {
      if (array17.data[i] == 37) { 
         return array17;
      }
   }
   for (int i = 0; i < array17.size; i++) {
      if (array17.data[i] == 24) { 
         return array17;
      }
   }
   return array17;
}

