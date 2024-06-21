#include <stdio.h>
#include <stdlib.h>

typedef struct {
   unsigned int* data;
   int size;
} Array;
int loopsFactor = 100;

unsigned long rng();
Array func0();

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
   }
   if (array1.size > 0) {
      free(array1.data);
      array1.size = 0;
   }
   return array1;
}

