#include "Mybench.h" 
Array func1(int loopsFactor) {
   Array array3;
   array3.size = 915;
   array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      Array array4 = func3(loopsFactor);
      unsigned int loop3 = 0;
      unsigned int loopLimit3 = (rand()%loopsFactor)/3 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         for (int i = 0; i < array3.size; i++) {
            array3.data[i]++; 
         }
      }
      Array array5 = func4(loopsFactor);
      if (array5.size > 0) {
         free(array5.data);
         array5.size = 0;
      }
      Array array6;
      array6.size = 27;
      array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
      unsigned int loop4 = 0;
      unsigned int loopLimit4 = (rand()%loopsFactor)/3 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         for (int i = 0; i < array5.size; i++) {
            array5.data[i]--; 
         }
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
      if (array5.size > 0) {
         free(array5.data);
         array5.size = 0;
      }
   }
   if (array3.size > 0) {
      free(array3.data);
      array3.size = 0;
   }
   return array3;
}

