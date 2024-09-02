#include "ex8_3.h" 
Array func14(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array18;
   if (pCounter > 0) {
      array18 = vars->data[--pCounter];
      array18.refC++;
   } else {
      array18.size = 505;
      array18.refC = 1;
      array18.data = (unsigned int*)malloc(array18.size*sizeof(unsigned int));
      memset(array18.data, 0, array18.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array18.size; i++) {
      array18.data[i]--;
   }
   for (int i = 0; i < array18.size; i++) {
      if (array18.data[i] == 13) { 
         return array18;
      }
   }
   return array18;
}

