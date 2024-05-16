#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0();

int main() {
   if(rng() & 1) {
      if(rng() & 1) {
         int scalar0 = 1;
         if (scalar0 == 0) {
            printf("IS 0!");
         }
      }
      else {
         int loop0 = 0;
         int loopLimit0 = (rand()%10)/1 + 1;;
         for(; loop0 < loopLimit0; loop0++) {
         }
      }
   }
   else {
      func0();
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
   int loop1 = 0;
   int loopLimit1 = (rand()%10)/1 + 1;;
   for(; loop1 < loopLimit1; loop1++) {
   }
}

