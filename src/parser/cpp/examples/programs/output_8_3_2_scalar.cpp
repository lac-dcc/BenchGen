#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);

int main() {
   if(rng() & 1) {
      if(rng() & 1) {
         int scalar0 = 1;
         int scalar1 = 1;
         int scalar2 = 1;
         if(rng() & 1) {
            scalar1++;
            printf("DELETE!\n");
         }
         else {
            scalar1--;
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         if (scalar0 == 0) {
            printf("IS 0!");
         }
      }
      else {
         for(int loop0 = 0; loop0 < 3; loop0++) {
            int scalar0 = 1;
            func1(rng());
            printf("DELETE!\n");
            int scalar1 = 1;
            scalar0++;
            int scalar2 = 1;
            func3(rng());
         }
      }
   }
   else {
      func0(rng());
   }
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func1(const unsigned long PATH0) {
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
      func2(rng());
   }
}

void func2(const unsigned long PATH0) {
   for(int loop2 = 0; loop2 < 3; loop2++) {
      int scalar1 = 1;
      int scalar2 = 1;
      if(PATH0 & 1) {
         scalar2++;
         printf("DELETE!\n");
      }
      else {
         scalar2--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop3 = 0; loop3 < 3; loop3++) {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func4(rng());
   }
}

void func4(const unsigned long PATH0) {
   for(int loop4 = 0; loop4 < 3; loop4++) {
      int scalar3 = 1;
      int scalar4 = 1;
      if(PATH0 & 1) {
         scalar4++;
         printf("DELETE!\n");
      }
      else {
         scalar4--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   for(int loop5 = 0; loop5 < 3; loop5++) {
      int scalar0 = 1;
      printf("DELETE!\n");
      int scalar1 = 1;
      scalar0++;
      int scalar2 = 1;
      func5(rng());
      for(int loop8 = 0; loop8 < 3; loop8++) {
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 1) {
            scalar1++;
         }
         else {
            scalar0--;
         }
      }
      printf("DELETE!\n");
      int scalar3 = 1;
      scalar2++;
      int scalar4 = 1;
      func5(rng());
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop6 = 0; loop6 < 3; loop6++) {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func6(rng());
   }
}

void func6(const unsigned long PATH0) {
   for(int loop7 = 0; loop7 < 3; loop7++) {
      int scalar3 = 1;
      int scalar4 = 1;
      if(PATH0 & 1) {
         scalar3++;
         printf("DELETE!\n");
      }
      else {
         scalar4--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

