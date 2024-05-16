#include <stdio.h>
#include <stdlib.h>


unsigned long rng();

int main() {
   int scalar0 = 1;
   int scalar1 = 1;
   int scalar2 = 1;
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

