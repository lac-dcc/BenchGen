#include "ex3.h" 
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array13;
   if (pCounter > 0) {
      array13 = vars->data[--pCounter];
   } else {
      array13.size = 846;
      array13.data = (unsigned int*)malloc(array13.size*sizeof(unsigned int));
      memset(array13.data, 0, array13.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      for (int i = 0; i < array13.size; i++) {
         if (array13.data[i] == 13) { 
            return array13;
         }
      }
   }
   else {
      Array array14;
      if (pCounter > 0) {
         array14 = vars->data[--pCounter];
      } else {
         array14.size = 857;
         array14.data = (unsigned int*)malloc(array14.size*sizeof(unsigned int));
         memset(array14.data, 0, array14.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array13.size; i++) {
         array13.data[i]++;
      }
      if (array14.size > 0) {
         free(array14.data);
         array14.size = 0;
      }
   }
   for (int i = 0; i < array13.size; i++) {
      if (array13.data[i] == 82) { 
         return array13;
      }
   }
   if (array13.size > 0) {
      free(array13.data);
      array13.size = 0;
   }
   for (int i = 0; i < array13.size; i++) {
      array13.data[i]++;
   }
   return array13;
}

