#include "Bench1.h" 
Array func6(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array3;
   if (pCounter > 0) {
      array3 = vars->data[--pCounter];
   } else {
      array3.size = 135;
      array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
   }
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      for (int i = 0; i < array3.size; i++) {
         array3.data[i]--;
      }
   }
   return array3;
}

