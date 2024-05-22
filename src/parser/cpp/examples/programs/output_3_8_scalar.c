#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1();
void func5();
void func3(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func6();
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
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         int scalar1 = 1;
         func1();
         func3(rng());
      }
      int scalar1 = 1;
      scalar1++;
      scalar1--;
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         int scalar2 = 1;
         func3(rng());
         printf("DELETE!\n");
      }
      func2(rng());
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
         if(PATH0 & 1) {
            func3(rng());
         }
         else {
            int scalar2 = 1;
            scalar1++;
            scalar2--;
            int loop13 = 0;
            int loopLimit13 = (rand()%10)/3 + 1;
            for(; loop13 < loopLimit13; loop13++) {
               int scalar3 = 1;
               func5();
               printf("DELETE!\n");
            }
         }
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 2) {
            int scalar3 = 1;
            int scalar4 = 1;
            int loop14 = 0;
            int loopLimit14 = (rand()%10)/3 + 1;
            for(; loop14 < loopLimit14; loop14++) {
               int scalar5 = 1;
               func4();
               func5();
            }
         }
         else {
            printf("DELETE!\n");
         }
      }
   }
}

void func1() {
   int scalar2 = 1;
   scalar2++;
   scalar2--;
   int loop2 = 0;
   int loopLimit2 = (rand()%10)/3 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      int scalar3 = 1;
      func5();
      printf("DELETE!\n");
   }
}

void func5() {
   int scalar4 = 1;
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
}

void func3(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   int loop3 = 0;
   int loopLimit3 = (rand()%10)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      if(PATH0 & 1) {
      }
      else {
      }
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 2) {
         int scalar4 = 1;
         int scalar5 = 1;
      }
      else {
         printf("DELETE!\n");
      }
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/3 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      if(PATH0 & 4) {
      }
      else {
      }
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 8) {
         int scalar4 = 1;
         int scalar5 = 1;
      }
      else {
         printf("DELETE!\n");
      }
   }
}

void func2(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   int loop6 = 0;
   int loopLimit6 = (rand()%10)/2 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      if(PATH0 & 1) {
         func5();
      }
      else {
         int scalar3 = 1;
         scalar3++;
         scalar2--;
         int loop7 = 0;
         int loopLimit7 = (rand()%10)/3 + 1;
         for(; loop7 < loopLimit7; loop7++) {
            int scalar4 = 1;
            printf("DELETE!\n");
         }
      }
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 2) {
         int scalar4 = 1;
         int scalar5 = 1;
         int loop8 = 0;
         int loopLimit8 = (rand()%10)/3 + 1;
         for(; loop8 < loopLimit8; loop8++) {
            int scalar6 = 1;
            func6();
         }
      }
      else {
         printf("DELETE!\n");
      }
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop9 = 0;
   int loopLimit9 = (rand()%10)/2 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      if(PATH0 & 4) {
         func5();
      }
      else {
         int scalar3 = 1;
         scalar2++;
         scalar2--;
         int loop10 = 0;
         int loopLimit10 = (rand()%10)/3 + 1;
         for(; loop10 < loopLimit10; loop10++) {
            int scalar4 = 1;
            printf("DELETE!\n");
         }
      }
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 8) {
         int scalar4 = 1;
         int scalar5 = 1;
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/3 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            int scalar6 = 1;
            func6();
         }
      }
      else {
         printf("DELETE!\n");
      }
   }
}

void func6() {
}

void func4() {
   int scalar6 = 1;
   scalar6++;
   scalar6--;
   int loop15 = 0;
   int loopLimit15 = (rand()%10)/4 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      int scalar7 = 1;
      printf("DELETE!\n");
   }
}

