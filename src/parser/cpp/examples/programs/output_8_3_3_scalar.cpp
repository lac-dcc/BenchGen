#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   int scalar1 = 1;
   if(rng() & 1) {
      scalar1++;
      printf("DELETE!\n");
   }
   else {
      scalar0--;
      printf("DELETE!\n");
   }
   printf("DELETE!\n");
   for(int loop0 = 0; loop0 < 3; loop0++) {
      int scalar2 = 1;
      scalar0++;
      func0(rng());
      int scalar3 = 1;
      for(int loop9 = 0; loop9 < 3; loop9++) {
         int scalar4 = 1;
         int scalar5 = 1;
         if(rng() & 1) {
            scalar5++;
            printf("DELETE!\n");
         }
         else {
            scalar2--;
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         int scalar6 = 1;
         printf("DELETE!\n");
         int scalar7 = 1;
         scalar7++;
         int scalar8 = 1;
         func5(rng());
         for(int loop10 = 0; loop10 < 3; loop10++) {
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            if(rng() & 1) {
               scalar8++;
            }
            else {
               scalar8--;
            }
         }
         printf("DELETE!\n");
         int scalar9 = 1;
         scalar2++;
         int scalar10 = 1;
         func5(rng());
      }
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0) {
   int scalar3 = 1;
   printf("DELETE!\n");
   int scalar4 = 1;
   scalar4++;
   int scalar5 = 1;
   func5(rng());
   for(int loop3 = 0; loop3 < 3; loop3++) {
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 1) {
         scalar3++;
      }
      else {
         scalar4--;
      }
   }
   printf("DELETE!\n");
   int scalar6 = 1;
   scalar5++;
   int scalar7 = 1;
   func5(rng());
   if(PATH0 & 2) {
      int scalar8 = 1;
      func1(rng());
   }
   else {
      for(int loop6 = 0; loop6 < 3; loop6++) {
         int scalar8 = 1;
         int scalar9 = 1;
         if(PATH0 & 4) {
            scalar9++;
            printf("DELETE!\n");
         }
         else {
            scalar3--;
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         int scalar10 = 1;
         scalar7++;
         int scalar11 = 1;
         func3(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop1 = 0; loop1 < 3; loop1++) {
         int scalar6 = 1;
         if (scalar6 == 0) {
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
   for(int loop2 = 0; loop2 < 3; loop2++) {
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

void func1(const unsigned long PATH0) {
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
      func2(rng());
   }
}

void func2(const unsigned long PATH0) {
   for(int loop5 = 0; loop5 < 3; loop5++) {
      int scalar9 = 1;
      int scalar10 = 1;
      if(PATH0 & 1) {
         scalar9++;
         printf("DELETE!\n");
      }
      else {
         scalar10--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop7 = 0; loop7 < 3; loop7++) {
         int scalar12 = 1;
         if (scalar12 == 0) {
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
   for(int loop8 = 0; loop8 < 3; loop8++) {
      int scalar12 = 1;
      int scalar13 = 1;
      if(PATH0 & 1) {
         scalar12++;
         printf("DELETE!\n");
      }
      else {
         scalar12--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

