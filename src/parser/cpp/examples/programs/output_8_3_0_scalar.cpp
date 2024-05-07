#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   int scalar1 = 1;
   int scalar2 = 1;
   int scalar3 = 1;
   func0(rng());
   printf("DELETE!\n");
   int scalar4 = 1;
   scalar0++;
   int scalar5 = 1;
   func2(rng());
   int scalar6 = 1;
   printf("DELETE!\n");
   int scalar7 = 1;
   scalar4++;
   int scalar8 = 1;
   func4(rng());
   for(int loop6 = 0; loop6 < 3; loop6++) {
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      if(rng() & 1) {
         scalar5++;
      }
      else {
         scalar7--;
      }
   }
   printf("DELETE!\n");
   int scalar9 = 1;
   scalar3++;
   int scalar10 = 1;
   func4(rng());
   int scalar11 = 1;
   int scalar12 = 1;
   if(rng() & 1) {
      scalar1++;
      printf("DELETE!\n");
   }
   else {
      scalar9--;
      printf("DELETE!\n");
   }
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop0 = 0; loop0 < 3; loop0++) {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func1(rng());
   }
}

void func1(const unsigned long PATH0) {
   for(int loop1 = 0; loop1 < 3; loop1++) {
      int scalar4 = 1;
      int scalar5 = 1;
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

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop2 = 0; loop2 < 3; loop2++) {
         int scalar6 = 1;
         if (scalar6 == 0) {
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
   for(int loop3 = 0; loop3 < 3; loop3++) {
      int scalar6 = 1;
      int scalar7 = 1;
      if(PATH0 & 1) {
         scalar7++;
         printf("DELETE!\n");
      }
      else {
         scalar6--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop4 = 0; loop4 < 3; loop4++) {
         int scalar9 = 1;
         if (scalar9 == 0) {
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
   for(int loop5 = 0; loop5 < 3; loop5++) {
      int scalar9 = 1;
      int scalar10 = 1;
      if(PATH0 & 1) {
         scalar10++;
         printf("DELETE!\n");
      }
      else {
         scalar9--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

