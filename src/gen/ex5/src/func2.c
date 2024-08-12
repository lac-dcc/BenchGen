#include "ex5.h" 
Array func2(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   Array array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
   } else {
      array4.size = 11;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      memset(array4.data, 0, array4.size*sizeof(unsigned int));
   }
   Array array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
   } else {
      array5.size = 42;
      array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
      memset(array5.data, 0, array5.size*sizeof(unsigned int));
   }
   unsigned int loop12 = 0;
   unsigned int loopLimit12 = (rand()%loopsFactor)/4 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      for (int i = 0; i < array5.size; i++) {
         array5.data[i]--;
      }
   }
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   return array5;
}

