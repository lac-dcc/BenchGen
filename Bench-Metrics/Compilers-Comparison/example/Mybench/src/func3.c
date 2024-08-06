#include "Mybench.h" 
Array func3(int loopsFactor) {
   Array array5;
   array5.size = 335;
   array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
   unsigned int loop2 = 0;
   unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
   for(; loop2 < loopLimit2; loop2++) {
   }
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   return array5;
}

