#include "ex9_4.h" 
Array func13(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array19;
   if (pCounter > 0) {
      array19 = vars->data[--pCounter];
      array19.refC++;
   } else {
      array19.size = 545;
      array19.refC = 1;
      array19.data = (unsigned int*)malloc(array19.size*sizeof(unsigned int));
      memset(array19.data, 0, array19.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      for (int i = 0; i < array19.size; i++) {
         array19.data[i]++;
      }
   }
   return array19;
}

