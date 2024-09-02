#include "ex7_4.h" 
Array func9(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array7;
   if (pCounter > 0) {
      array7 = vars->data[--pCounter];
      array7.refC++;
   } else {
      array7.size = 211;
      array7.refC = 1;
      array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
      memset(array7.data, 0, array7.size*sizeof(unsigned int));
   }
   return array7;
}

