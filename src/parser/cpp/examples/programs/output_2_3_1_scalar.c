#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func5(const unsigned long PATH0);
void func6();
void func7(const unsigned long PATH0);
void func0();
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func1();
void func4(const unsigned long PATH0);

int main() {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;;
   for(; loop0 < loopLimit0; loop0++) {
      int scalar0 = 1;
      int scalar1 = 1;
      int scalar2 = 1;
      scalar1++;
      func5(rng());
      if(rng() & 1) {
         scalar0++;
         printf("DELETE!\n");
      }
      else {
         scalar1--;
         printf("DELETE!\n");
      }
      int scalar3 = 1;
      int scalar4 = 1;
      if(rng() & 1) {
         scalar3++;
         printf("DELETE!\n");
      }
      else {
         scalar0--;
         printf("DELETE!\n");
      }
      if(rng() & 1) {
      }
      else {
         int scalar5 = 1;
         scalar4++;
         if (scalar0 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar5 = 1;
      printf("DELETE!\n");
      int scalar6 = 1;
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/2 + 1;;
      for(; loop3 < loopLimit3; loop3++) {
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         if(rng() & 1) {
            scalar3++;
         }
         else {
            scalar2--;
         }
      }
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;;
      for(; loop4 < loopLimit4; loop4++) {
      }
      if(rng() & 1) {
         int scalar7 = 1;
         func7(rng());
         printf("DELETE!\n");
         int scalar8 = 1;
         scalar4++;
      }
      else {
         int scalar7 = 1;
         scalar2++;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar7 = 1;
      int scalar8 = 1;
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/2 + 1;;
      for(; loop5 < loopLimit5; loop5++) {
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         if(rng() & 1) {
            scalar4++;
         }
         else {
            scalar6--;
         }
      }
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/2 + 1;;
      for(; loop6 < loopLimit6; loop6++) {
      }
      printf("DELETE!\n");
      if(rng() & 1) {
         func0();
      }
      else {
         func1();
      }
   }
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;;
      for(; loop1 < loopLimit1; loop1++) {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func6();
   }
}

void func6() {
   int loop2 = 0;
   int loopLimit2 = (rand()%10)/2 + 1;;
   for(; loop2 < loopLimit2; loop2++) {
   }
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
   }
}

void func0() {
   int scalar9 = 1;
   scalar9++;
   func2(rng());
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/2 + 1;;
      for(; loop7 < loopLimit7; loop7++) {
         int scalar10 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         int scalar11 = 1;
         scalar10++;
         func5(rng());
         printf("DELETE!\n");
      }
   }
   else {
      func3(rng());
   }
}

void func3(const unsigned long PATH0) {
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/2 + 1;;
   for(; loop8 < loopLimit8; loop8++) {
      int scalar10 = 1;
      int scalar11 = 1;
      if(PATH0 & 1) {
         scalar11++;
         printf("DELETE!\n");
      }
      else {
         scalar10--;
         printf("DELETE!\n");
      }
      if(PATH0 & 2) {
      }
      else {
         int scalar12 = 1;
         scalar10++;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar12 = 1;
      printf("DELETE!\n");
   }
}

void func1() {
   int scalar9 = 1;
   func4(rng());
   printf("DELETE!\n");
   int scalar10 = 1;
   scalar10++;
   int scalar11 = 1;
   scalar10++;
   func5(rng());
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar10 = 1;
      func7(rng());
      printf("DELETE!\n");
      int scalar11 = 1;
      scalar10++;
   }
   else {
      int scalar10 = 1;
      int loop9 = 0;
      int loopLimit9 = (rand()%10)/2 + 1;;
      for(; loop9 < loopLimit9; loop9++) {
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 2) {
            scalar10++;
         }
         else {
            scalar10--;
         }
      }
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/2 + 1;;
      for(; loop10 < loopLimit10; loop10++) {
      }
   }
}

