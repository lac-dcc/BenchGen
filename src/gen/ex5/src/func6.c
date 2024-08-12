#include "ex5.h" 
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   if(PATH0 & 1) {
      unsigned int loop4 = 0;
      unsigned int loopLimit4 = (rand()%loopsFactor)/5 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         Array array4;
         if (pCounter > 0) {
            array4 = vars->data[--pCounter];
         } else {
            array4.size = 793;
            array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
            memset(array4.data, 0, array4.size*sizeof(unsigned int));
         }
         if (array4.size > 0) {
            free(array4.data);
            array4.size = 0;
         }
      }
   }
   else {
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/5 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         Array array4;
         if (pCounter > 0) {
            array4 = vars->data[--pCounter];
         } else {
            array4.size = 335;
            array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
            memset(array4.data, 0, array4.size*sizeof(unsigned int));
         }
         if (array4.size > 0) {
            free(array4.data);
            array4.size = 0;
         }
      }
   }
   Array array4;
   if (pCounter > 0) {
      array4 = vars->data[--pCounter];
   } else {
      array4.size = 386;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      memset(array4.data, 0, array4.size*sizeof(unsigned int));
   }
   return array4;
}

