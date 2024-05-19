#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1();
void func2();
void func3();

int main() {
   int scalar0 = 1;
   func0(rng());
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0) {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      func1();
      if(PATH0 & 1) {
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func2();
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/2 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         func3();
      }
      if(PATH0 & 4) {
      }
      else {
         int loop3 = 0;
         int loopLimit3 = (rand()%10)/2 + 1;
         for(; loop3 < loopLimit3; loop3++) {
         }
      }
      int scalar2 = 1;
      int scalar3 = 1;
      printf("DELETE!\n");
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 8) {
      }
      else {
      }
   }
}

void func1() {
   int scalar1 = 1;
   scalar1++;
   scalar1++;
   printf("DELETE!\n");
}

void func2() {
}

void func3() {
}

