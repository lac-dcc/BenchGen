#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1();
void func3();
void func4();
void func2();

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
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func1();
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         int scalar3 = 1;
         printf("DELETE!\n");
      }
      if(PATH0 & 1) {
         scalar1++;
      }
      else {
      }
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         int scalar3 = 1;
         printf("DELETE!\n");
      }
      if(PATH0 & 2) {
         scalar1++;
      }
      else {
      }
      int scalar3 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/2 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         int scalar5 = 1;
         func4();
         int scalar6 = 1;
         scalar3++;
         func3();
         int scalar7 = 1;
         printf("DELETE!\n");
      }
      if(PATH0 & 4) {
         scalar4++;
      }
      else {
         int scalar5 = 1;
         scalar4++;
         func3();
      }
      int scalar5 = 1;
      func2();
   }
}

void func1() {
   int scalar3 = 1;
   scalar3++;
   func3();
   int loop2 = 0;
   int loopLimit2 = (rand()%10)/2 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      int scalar4 = 1;
      int scalar5 = 1;
      int scalar6 = 1;
      func4();
   }
}

void func3() {
   int loop1 = 0;
   int loopLimit1 = (rand()%10)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      int scalar4 = 1;
      int scalar5 = 1;
   }
}

void func4() {
   int scalar7 = 1;
   scalar7++;
   scalar7++;
   int loop3 = 0;
   int loopLimit3 = (rand()%10)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
   }
}

void func2() {
   int scalar6 = 1;
   scalar6++;
   scalar6++;
   int loop7 = 0;
   int loopLimit7 = (rand()%10)/2 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      int scalar7 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      if (scalar6 == 0) {
         printf("IS 0!");
      }
   }
}

