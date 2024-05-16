#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0();
void func1();

int main() {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;;
   for(; loop0 < loopLimit0; loop0++) {
      if(rng() & 1) {
         func0();
      }
      else {
         func1();
      }
   }
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func0() {
}

void func1() {
}

