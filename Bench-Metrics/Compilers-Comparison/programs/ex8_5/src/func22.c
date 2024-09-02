#include "ex8_5.h" 
Array func22(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array7;
   if (pCounter > 0) {
      array7 = vars->data[--pCounter];
      array7.refC++;
   } else {
      array7.size = 123;
      array7.refC = 1;
      array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
      memset(array7.data, 0, array7.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array7.size; i++) {
      array7.data[i]--;
   }
   for (int i = 0; i < array7.size; i++) {
      if (array7.data[i] == 29) { 
         return array7;
      }
   }
   return array7;
}

