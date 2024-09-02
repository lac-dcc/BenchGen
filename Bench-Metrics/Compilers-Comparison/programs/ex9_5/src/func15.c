#include "ex9_5.h" 
Array func15(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array15;
   if (pCounter > 0) {
      array15 = vars->data[--pCounter];
      array15.refC++;
   } else {
      array15.size = 91;
      array15.refC = 1;
      array15.data = (unsigned int*)malloc(array15.size*sizeof(unsigned int));
      memset(array15.data, 0, array15.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/2 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      for (int i = 0; i < array15.size; i++) {
         array15.data[i]++;
      }
   }
   return array15;
}

