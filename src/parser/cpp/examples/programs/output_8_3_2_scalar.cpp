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
         for(int scalar0 = 0; scalar0 < 10; scalar0++) {
            int scalar1 = 1;
            func1(rng());
            printf("DELETE!\n");
            int scalar2 = 1;
            scalar1++;
            int scalar3 = 1;
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
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int scalar3 = 1;
         if (scalar3 == 0) {
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
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      int scalar3 = 1;
      int scalar4 = 1;
      if(PATH0 & 1) {
         scalar4++;
         printf("DELETE!\n");
      }
      else {
         scalar3--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         int scalar5 = 1;
         if (scalar4 == 0) {
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
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      int scalar5 = 1;
      int scalar6 = 1;
      if(PATH0 & 1) {
         scalar4++;
         printf("DELETE!\n");
      }
      else {
         scalar5--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      int scalar1 = 1;
      printf("DELETE!\n");
      int scalar2 = 1;
      scalar2++;
      int scalar3 = 1;
      func5(rng());
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         if (scalar3 == 0) {
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
      int scalar4 = 1;
      scalar1++;
      int scalar5 = 1;
      func5(rng());
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         int scalar5 = 1;
         if (scalar5 == 0) {
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
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      int scalar5 = 1;
      int scalar6 = 1;
      if(PATH0 & 1) {
         scalar6++;
         printf("DELETE!\n");
      }
      else {
         scalar5--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

