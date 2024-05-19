#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1();
void func2(const unsigned long PATH0);

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
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         if(PATH0 & 1) {
         }
         else {
            int scalar1 = 1;
            scalar1++;
         }
         func1();
      }
      printf("DELETE!\n");
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func2(rng());
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      int scalar3 = 1;
      if(PATH0 & 2) {
         int scalar4 = 1;
         scalar4++;
      }
      else {
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 4) {
         int scalar4 = 1;
         printf("DELETE!\n");
         int scalar5 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         scalar2++;
         scalar3--;
      }
      else {
         scalar2--;
      }
   }
}

void func1() {
}

void func2(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 1) {
   }
   else {
   }
}

