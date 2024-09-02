#include "ex8_5.h" 
Array func19(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop15 = 0;
   unsigned int loopLimit15 = (rand()%loopsFactor)/3 + 1;
   for(; loop15 < loopLimit15; loop15++) {
   }
   Array array47;
   if (pCounter > 0) {
      array47 = vars->data[--pCounter];
      array47.refC++;
   } else {
      array47.size = 193;
      array47.refC = 1;
      array47.data = (unsigned int*)malloc(array47.size*sizeof(unsigned int));
      memset(array47.data, 0, array47.size*sizeof(unsigned int));
   }
   return array47;
}

