#include "Mybench.h" 
Array func0(int loopsFactor) {
   Array array1;
   array1.size = 886;
   array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      Array array2 = func1(loopsFactor);
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         for (int i = 0; i < array2.size; i++) {
            array2.data[i]++; 
         }
      }
      Array array3 = func2(loopsFactor);
      if (array3.size > 0) {
         free(array3.data);
         array3.size = 0;
      }
      Array array4;
      array4.size = 567;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         Array array5 = func3(loopsFactor);
         unsigned int loop9 = 0;
         unsigned int loopLimit9 = (rand()%loopsFactor)/3 + 1;
         for(; loop9 < loopLimit9; loop9++) {
            for (int i = 0; i < array3.size; i++) {
               array3.data[i]++; 
            }
         }
         Array array6 = func4(loopsFactor);
         if (array6.size > 0) {
            free(array6.data);
            array6.size = 0;
         }
         Array array7;
         array7.size = 862;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         unsigned int loop10 = 0;
         unsigned int loopLimit10 = (rand()%loopsFactor)/3 + 1;
         for(; loop10 < loopLimit10; loop10++) {
            for (int i = 0; i < array7.size; i++) {
               array7.data[i]--; 
            }
         }
         if (array7.size > 0) {
            free(array7.data);
            array7.size = 0;
         }
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
         for (int i = 0; i < array2.size; i++) {
            array2.data[i]--; 
         }
      }
      if (array4.size > 0) {
         free(array4.data);
         array4.size = 0;
      }
      if (array3.size > 0) {
         free(array3.data);
         array3.size = 0;
      }
   }
   if (array1.size > 0) {
      free(array1.data);
      array1.size = 0;
   }
   return array1;
}

