#include "ex2.h" 
Array func17(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array7;
   if (pCounter > 0) {
      array7 = vars->data[--pCounter];
   } else {
      array7.size = 59;
      array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
      memset(array7.data, 0, array7.size*sizeof(unsigned int));
   }
   return array7;
}

