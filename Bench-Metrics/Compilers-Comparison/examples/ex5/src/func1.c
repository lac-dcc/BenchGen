#include "ex5.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
   } else {
      array1.size = 370;
      array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
      memset(array1.data, 0, array1.size*sizeof(unsigned int));
   }
   unsigned int loop13 = 0;
   unsigned int loopLimit13 = (rand()%loopsFactor)/2 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      for (int i = 0; i < array1.size; i++) {
         array1.data[i]--;
      }
   }
   if (array1.size > 0) {
      free(array1.data);
      array1.size = 0;
   }
   return array1;
}

