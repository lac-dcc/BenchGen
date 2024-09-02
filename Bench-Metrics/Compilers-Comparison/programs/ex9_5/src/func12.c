#include "ex9_5.h" 
Array func12(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array17;
   if (pCounter > 0) {
      array17 = vars->data[--pCounter];
      array17.refC++;
   } else {
      array17.size = 305;
      array17.refC = 1;
      array17.data = (unsigned int*)malloc(array17.size*sizeof(unsigned int));
      memset(array17.data, 0, array17.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array17.size; i++) {
      array17.data[i]++;
   }
   for (int i = 0; i < array17.size; i++) {
      if (array17.data[i] == 27) { 
         return array17;
      }
   }
   for (int i = 0; i < array17.size; i++) {
      array17.data[i]--;
   }
   return array17;
}

