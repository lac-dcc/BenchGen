#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0();
void func1(const unsigned long PATH0);
void func7();
void func2();
void func8(const unsigned long PATH0);
void func9();
void func10();
void func11();
void func3();
void func4();
void func12();
void func5();
void func6();

int main() {
   int scalar0 = 1;
   func0();
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func0() {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      func1(rng());
      func2();
      func3();
      func4();
      int scalar1 = 1;
      int scalar2 = 1;
      func12();
      func5();
      scalar2--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int scalar3 = 1;
      int scalar4 = 1;
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
      }
      func6();
      int scalar5 = 1;
      func12();
      int scalar6 = 1;
      int scalar7 = 1;
      func7();
      scalar3--;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/2 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         func8(rng());
         func9();
         func10();
         func11();
      }
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar1 = 1;
      scalar1++;
      scalar1--;
      scalar1--;
   }
   else {
      int scalar1 = 1;
      func7();
      scalar1--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func7() {
   int scalar2 = 1;
   scalar2--;
}

void func2() {
   func8(rng());
   func9();
   func10();
   func11();
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar1 = 1;
      scalar1++;
      scalar1--;
      scalar1--;
   }
   else {
   }
}

void func9() {
}

void func10() {
   int loop1 = 0;
   int loopLimit1 = (rand()%10)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func11() {
}

void func3() {
   int loop2 = 0;
   int loopLimit2 = (rand()%10)/2 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func4() {
   int scalar1 = 1;
   int loop3 = 0;
   int loopLimit3 = (rand()%10)/2 + 1;
   for(; loop3 < loopLimit3; loop3++) {
   }
}

void func12() {
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/2 + 1;
   for(; loop4 < loopLimit4; loop4++) {
   }
}

void func5() {
   int scalar3 = 1;
   scalar3--;
}

void func6() {
   int loop6 = 0;
   int loopLimit6 = (rand()%10)/2 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      int scalar5 = 1;
      func7();
      scalar5--;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

