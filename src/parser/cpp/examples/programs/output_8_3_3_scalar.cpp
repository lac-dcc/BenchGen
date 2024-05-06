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
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      int scalar3 = 1;
      scalar1++;
      func0(rng());
      int scalar4 = 1;
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         int scalar6 = 1;
         int scalar7 = 1;
         if(rng() & 1) {
            scalar3++;
            printf("DELETE!\n");
         }
         else {
            scalar0--;
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         int scalar8 = 1;
         printf("DELETE!\n");
         int scalar9 = 1;
         scalar7++;
         int scalar10 = 1;
         func5(rng());
         for(int scalar11 = 0; scalar11 < 10; scalar11++) {
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            if(rng() & 1) {
               scalar2++;
            }
            else {
               scalar2--;
            }
         }
         printf("DELETE!\n");
         int scalar11 = 1;
         scalar2++;
         int scalar12 = 1;
         func5(rng());
      }
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar2--;
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
   int scalar4 = 1;
   printf("DELETE!\n");
   int scalar5 = 1;
   scalar5++;
   int scalar6 = 1;
   func5(rng());
   for(int scalar7 = 0; scalar7 < 10; scalar7++) {
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 1) {
         scalar5++;
      }
      else {
         scalar5--;
      }
   }
   printf("DELETE!\n");
   int scalar7 = 1;
   scalar6++;
   int scalar8 = 1;
   func5(rng());
   if(PATH0 & 2) {
      int scalar9 = 1;
      func1(rng());
   }
   else {
      for(int scalar9 = 0; scalar9 < 10; scalar9++) {
         int scalar10 = 1;
         int scalar11 = 1;
         if(PATH0 & 4) {
            scalar7++;
            printf("DELETE!\n");
         }
         else {
            scalar10--;
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         int scalar12 = 1;
         scalar10++;
         int scalar13 = 1;
         func3(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar7 = 0; scalar7 < 10; scalar7++) {
         int scalar8 = 1;
         if (scalar8 == 0) {
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
   for(int scalar7 = 0; scalar7 < 10; scalar7++) {
      int scalar8 = 1;
      int scalar9 = 1;
      if(PATH0 & 1) {
         scalar8++;
         printf("DELETE!\n");
      }
      else {
         scalar8--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar10 = 0; scalar10 < 10; scalar10++) {
         int scalar11 = 1;
         if (scalar11 == 0) {
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
   for(int scalar10 = 0; scalar10 < 10; scalar10++) {
      int scalar11 = 1;
      int scalar12 = 1;
      if(PATH0 & 1) {
         scalar12++;
         printf("DELETE!\n");
      }
      else {
         scalar11--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar14 = 0; scalar14 < 10; scalar14++) {
         int scalar15 = 1;
         if (scalar14 == 0) {
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
   for(int scalar14 = 0; scalar14 < 10; scalar14++) {
      int scalar15 = 1;
      int scalar16 = 1;
      if(PATH0 & 1) {
         scalar15++;
         printf("DELETE!\n");
      }
      else {
         scalar15--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

