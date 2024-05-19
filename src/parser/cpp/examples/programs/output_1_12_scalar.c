#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
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
      int scalar1 = 1;
      int scalar2 = 1;
      if(PATH0 & 1) {
         scalar2++;
         printf("DELETE!\n");
      }
      else {
         scalar1--;
         printf("DELETE!\n");
      }
      if(PATH0 & 2) {
      }
      else {
         int scalar3 = 1;
         scalar1++;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar3 = 1;
      printf("DELETE!\n");
      int scalar4 = 1;
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 4) {
            scalar4++;
         }
         else {
            scalar3--;
         }
      }
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/2 + 1;
      for(; loop2 < loopLimit2; loop2++) {
      }
      func1(rng());
      printf("DELETE!\n");
      int scalar5 = 1;
      scalar3++;
      int scalar6 = 1;
      int scalar7 = 1;
      scalar2++;
      func2(rng());
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         int scalar8 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func3();
   }
}

void func3() {
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/2 + 1;
   for(; loop4 < loopLimit4; loop4++) {
   }
}

