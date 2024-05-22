#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func5();
void func6(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);

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
      int scalar3 = 1;
      int scalar4 = 1;
      scalar4++;
      func4(rng());
      if(PATH0 & 1) {
         scalar2++;
         printf("DELETE!\n");
      }
      else {
         scalar4--;
         printf("DELETE!\n");
      }
      int scalar5 = 1;
      int scalar6 = 1;
      if(PATH0 & 2) {
         scalar6++;
         printf("DELETE!\n");
      }
      else {
         scalar2--;
         printf("DELETE!\n");
      }
      if(PATH0 & 4) {
      }
      else {
         int scalar7 = 1;
         scalar4++;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar7 = 1;
      printf("DELETE!\n");
      if(PATH0 & 8) {
         func6(rng());
         printf("DELETE!\n");
         int scalar8 = 1;
         scalar2++;
      }
      else {
         int scalar8 = 1;
         scalar6++;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar8 = 1;
      printf("DELETE!\n");
      int scalar9 = 1;
      func6(rng());
      printf("DELETE!\n");
      int scalar10 = 1;
      scalar8++;
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 16) {
            scalar10++;
         }
         else {
            int scalar11 = 1;
            int scalar12 = 1;
            scalar12++;
            func4(rng());
            scalar11--;
         }
      }
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         func6(rng());
         printf("DELETE!\n");
         int scalar11 = 1;
         scalar10++;
      }
      func1(rng());
      printf("DELETE!\n");
      int scalar11 = 1;
      scalar9++;
      int scalar12 = 1;
      int scalar13 = 1;
      scalar4++;
      func4(rng());
      int scalar14 = 1;
      int scalar15 = 1;
      int scalar16 = 1;
      if(PATH0 & 32) {
         scalar14++;
         printf("DELETE!\n");
      }
      else {
         scalar7--;
         printf("DELETE!\n");
      }
      if(PATH0 & 64) {
      }
      else {
         int scalar17 = 1;
         scalar6++;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar17 = 1;
      printf("DELETE!\n");
      int scalar18 = 1;
      scalar14++;
      func2(rng());
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         int scalar5 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func5();
   }
}

void func5() {
   int loop2 = 0;
   int loopLimit2 = (rand()%10)/2 + 1;
   for(; loop2 < loopLimit2; loop2++) {
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func6(rng());
      printf("DELETE!\n");
      int scalar11 = 1;
      scalar11++;
   }
   else {
      int scalar11 = 1;
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 2) {
            scalar11++;
         }
         else {
            scalar11--;
         }
      }
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/2 + 1;
      for(; loop6 < loopLimit6; loop6++) {
      }
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/2 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         int scalar19 = 1;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         int scalar20 = 1;
         int scalar21 = 1;
         scalar20++;
         func4(rng());
         printf("DELETE!\n");
      }
   }
   else {
      func3(rng());
   }
}

void func3(const unsigned long PATH0) {
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/2 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      int scalar19 = 1;
      int scalar20 = 1;
      if(PATH0 & 1) {
         scalar20++;
         printf("DELETE!\n");
      }
      else {
         scalar19--;
         printf("DELETE!\n");
      }
      if(PATH0 & 2) {
      }
      else {
         int scalar21 = 1;
         scalar19++;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar21 = 1;
      printf("DELETE!\n");
   }
}

