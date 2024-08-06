#include "Mybench.h" 
Array func2(int loopsFactor) {
   Array array4 = func3(loopsFactor);
   unsigned int loop6 = 0;
   unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      for (int i = 0; i < array4.size; i++) {
         array4.data[i]++; 
      }
   }
   Array array5 = func4(loopsFactor);
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   Array array6;
   array6.size = 736;
   array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/2 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]--; 
      }
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   if (array4.size > 0) {
      free(array4.data);
      array4.size = 0;
   }
   return array6;
}

