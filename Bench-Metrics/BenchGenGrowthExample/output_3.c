#include <stdio.h>
#include <stdlib.h>

typedef struct {
   unsigned int* data;
   int size;
} Array;
int loopsFactor = 100;

unsigned long rng();
Array func0();
Array func1();
Array func2();

int main(int argc, char** argv) {
   if (argc < 2 || argc > 3) {
      printf("Usage: %s <paths seed> <loops factor (optional)>\n", argv[0]);
      return 1;
   }
   if (argc == 3) {
      loopsFactor = atoi(argv[2]);
   }
   srand(atol(argv[1]));
   Array array0 = func0();
   if (array0.size > 0) {
      free(array0.data);
      array0.size = 0;
   }
   return 0;
}

unsigned long rng() {
   unsigned long n = rand();
   return (n << 32) | rand();
}

Array func0() {
   Array array1;
   array1.size = 886;
   array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      Array array2 = func1();
      unsigned int loop2 = 0;
      unsigned int loopLimit2 = (rand()%loopsFactor)/2 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         for (int i = 0; i < array2.size; i++) {
            array2.data[i]++; 
         }
      }
      Array array3 = func2();
      if (array3.size > 0) {
         free(array3.data);
         array3.size = 0;
      }
      Array array4;
      array4.size = 421;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      unsigned int loop3 = 0;
      unsigned int loopLimit3 = (rand()%loopsFactor)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         for (int i = 0; i < array3.size; i++) {
            array3.data[i]--; 
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

Array func1() {
   Array array3;
   array3.size = 915;
   array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
   }
   if (array3.size > 0) {
      free(array3.data);
      array3.size = 0;
   }
   return array3;
}

Array func2() {
   Array array4;
   array4.size = 492;
   array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
   return array4;
}

