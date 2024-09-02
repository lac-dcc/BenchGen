#include "ex8_3.h" 
Array func7(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/2 + 1;
   for(; loop7 < loopLimit7; loop7++) {
   }
   Array array23;
   if (pCounter > 0) {
      array23 = vars->data[--pCounter];
      array23.refC++;
   } else {
      array23.size = 403;
      array23.refC = 1;
      array23.data = (unsigned int*)malloc(array23.size*sizeof(unsigned int));
      memset(array23.data, 0, array23.size*sizeof(unsigned int));
   }
   return array23;
}

