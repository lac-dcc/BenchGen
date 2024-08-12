#include "ex2.h" 
Array func21(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
   } else {
      array5.size = 393;
      array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
      memset(array5.data, 0, array5.size*sizeof(unsigned int));
   }
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/3 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      for (int i = 0; i < array5.size; i++) {
         array5.data[i]--;
      }
   }
   return array5;
}

