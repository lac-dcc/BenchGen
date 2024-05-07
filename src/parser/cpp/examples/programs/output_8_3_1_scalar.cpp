#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func0();
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func1();
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);

int main() {
   for(int loop0 = 0; loop0 < 3; loop0++) {
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
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func0() {
   int scalar0 = 1;
   func2(rng());
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop1 = 0; loop1 < 3; loop1++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func3(rng());
   }
}

void func3(const unsigned long PATH0) {
   for(int loop2 = 0; loop2 < 3; loop2++) {
      int scalar1 = 1;
      int scalar2 = 1;
      if(PATH0 & 1) {
         scalar1++;
         printf("DELETE!\n");
      }
      else {
         scalar2--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func1() {
   printf("DELETE!\n");
   int scalar0 = 1;
   scalar0++;
   int scalar1 = 1;
   func4(rng());
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop3 = 0; loop3 < 3; loop3++) {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func5(rng());
   }
}

void func5(const unsigned long PATH0) {
   for(int loop4 = 0; loop4 < 3; loop4++) {
      int scalar2 = 1;
      int scalar3 = 1;
      if(PATH0 & 1) {
         scalar3++;
         printf("DELETE!\n");
      }
      else {
         scalar2--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

