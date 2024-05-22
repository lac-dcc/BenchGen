#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func1();
void func2(const unsigned long PATH0);
void func4();

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
      scalar1++;
      int scalar2 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func3(rng());
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/2 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         int scalar3 = 1;
         scalar3++;
         scalar2--;
      }
      printf("DELETE!\n");
      func1();
      int scalar3 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func2(rng());
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/2 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         int scalar4 = 1;
         scalar4++;
         int scalar5 = 1;
         scalar4++;
         printf("DELETE!\n");
         func4();
         int scalar6 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         func3(rng());
         scalar1--;
      }
      if(PATH0 & 1) {
         int scalar4 = 1;
         scalar3++;
         printf("DELETE!\n");
         func4();
      }
      else {
         int scalar4 = 1;
         scalar1--;
         int loop7 = 0;
         int loopLimit7 = (rand()%10)/2 + 1;
         for(; loop7 < loopLimit7; loop7++) {
            scalar1++;
         }
         printf("DELETE!\n");
      }
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      printf("DELETE!\n");
   }
   int loop1 = 0;
   int loopLimit1 = (rand()%10)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar3--;
   }
}

void func1() {
   int loop3 = 0;
   int loopLimit3 = (rand()%10)/2 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      int scalar3 = 1;
      scalar3++;
      scalar3--;
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
      }
      else {
         int scalar4 = 1;
         scalar4--;
         int loop4 = 0;
         int loopLimit4 = (rand()%10)/2 + 1;
         for(; loop4 < loopLimit4; loop4++) {
            scalar4++;
         }
         printf("DELETE!\n");
      }
   }
   else {
      printf("DELETE!\n");
   }
   int loop5 = 0;
   int loopLimit5 = (rand()%10)/2 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar4--;
   }
}

void func4() {
}

