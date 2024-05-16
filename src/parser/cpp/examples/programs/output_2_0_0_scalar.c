#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func3();
void func4();
void func5();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   int scalar1 = 1;
   int scalar2 = 1;
   if(rng() & 1) {
      int loop0 = 0;
      int loopLimit0 = (rand()%10)/1 + 1;;
      for(; loop0 < loopLimit0; loop0++) {
         if(rng() & 1) {
         }
         else {
         }
      }
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/1 + 1;;
      for(; loop1 < loopLimit1; loop1++) {
         func3();
      }
   }
   else {
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/1 + 1;;
      for(; loop2 < loopLimit2; loop2++) {
         int loop3 = 0;
         int loopLimit3 = (rand()%10)/2 + 1;;
         for(; loop3 < loopLimit3; loop3++) {
            if(rng() & 1) {
            }
            else {
            }
         }
         int loop4 = 0;
         int loopLimit4 = (rand()%10)/2 + 1;;
         for(; loop4 < loopLimit4; loop4++) {
            func3();
         }
      }
   }
   if(rng() & 1) {
   }
   else {
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/1 + 1;;
      for(; loop5 < loopLimit5; loop5++) {
      }
   }
   int loop6 = 0;
   int loopLimit6 = (rand()%10)/1 + 1;;
   for(; loop6 < loopLimit6; loop6++) {
      if(rng() & 1) {
         func4();
      }
      else {
         if(rng() & 1) {
         }
         else {
            int scalar3 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func5();
      }
   }
   int loop7 = 0;
   int loopLimit7 = (rand()%10)/1 + 1;;
   for(; loop7 < loopLimit7; loop7++) {
      func0(rng());
   }
   if(rng() & 1) {
      func4();
   }
   else {
      int scalar3 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   func1(rng());
   func2(rng());
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func3() {
}

void func4() {
   int scalar3 = 1;
   scalar3++;
   scalar3++;
   printf("DELETE!\n");
}

void func5() {
}

void func0(const unsigned long PATH0) {
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/2 + 1;;
   for(; loop8 < loopLimit8; loop8++) {
      if(PATH0 & 1) {
      }
      else {
      }
   }
   int loop9 = 0;
   int loopLimit9 = (rand()%10)/2 + 1;;
   for(; loop9 < loopLimit9; loop9++) {
      func3();
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/1 + 1;;
      for(; loop10 < loopLimit10; loop10++) {
      }
   }
}

void func2(const unsigned long PATH0) {
   int scalar3 = 1;
   func4();
   scalar3++;
   scalar3++;
   if(PATH0 & 1) {
   }
   else {
      int loop11 = 0;
      int loopLimit11 = (rand()%10)/1 + 1;;
      for(; loop11 < loopLimit11; loop11++) {
      }
   }
   printf("DELETE!\n");
}

