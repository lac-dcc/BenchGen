#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
   int loop0 = 0;
   int loopLimit0 = ceil((rand()%10)/1);
   for(; loop0 < loopLimit0; loop0++) {
      int scalar2 = 1;
      scalar0++;
      func0(rng());
      int scalar3 = 1;
      int loop10 = 0;
      int loopLimit10 = ceil((rand()%10)/2);
      for(; loop10 < loopLimit10; loop10++) {
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
         int loop11 = 0;
         int loopLimit11 = ceil((rand()%10)/3);
         for(; loop11 < loopLimit11; loop11++) {
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
         int loop12 = 0;
         int loopLimit12 = ceil((rand()%10)/3);
         for(; loop12 < loopLimit12; loop12++) {
            printf("DELETE!\n");
            int scalar9 = 1;
            scalar2++;
            int scalar10 = 1;
            func5(rng());
         }
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
   int loop3 = 0;
   int loopLimit3 = ceil((rand()%10)/2);
   for(; loop3 < loopLimit3; loop3++) {
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
   int loop4 = 0;
   int loopLimit4 = ceil((rand()%10)/2);
   for(; loop4 < loopLimit4; loop4++) {
      printf("DELETE!\n");
      int scalar6 = 1;
      scalar5++;
      int scalar7 = 1;
      func5(rng());
   }
   if(PATH0 & 2) {
      int scalar6 = 1;
      func1(rng());
   }
   else {
      int loop7 = 0;
      int loopLimit7 = ceil((rand()%10)/2);
      for(; loop7 < loopLimit7; loop7++) {
         int scalar6 = 1;
         int scalar7 = 1;
         if(PATH0 & 4) {
            scalar6++;
            printf("DELETE!\n");
         }
         else {
            scalar4--;
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         int scalar8 = 1;
         scalar3++;
         int scalar9 = 1;
         func3(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = ceil((rand()%10)/2);
      for(; loop1 < loopLimit1; loop1++) {
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
   int loop2 = 0;
   int loopLimit2 = ceil((rand()%10)/2);
   for(; loop2 < loopLimit2; loop2++) {
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
      int loop5 = 0;
      int loopLimit5 = ceil((rand()%10)/2);
      for(; loop5 < loopLimit5; loop5++) {
         int scalar7 = 1;
         if (scalar7 == 0) {
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
   int loop6 = 0;
   int loopLimit6 = ceil((rand()%10)/2);
   for(; loop6 < loopLimit6; loop6++) {
      int scalar7 = 1;
      int scalar8 = 1;
      if(PATH0 & 1) {
         scalar7++;
         printf("DELETE!\n");
      }
      else {
         scalar8--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop8 = 0;
      int loopLimit8 = ceil((rand()%10)/3);
      for(; loop8 < loopLimit8; loop8++) {
         int scalar10 = 1;
         if (scalar10 == 0) {
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
   int loop9 = 0;
   int loopLimit9 = ceil((rand()%10)/3);
   for(; loop9 < loopLimit9; loop9++) {
      int scalar10 = 1;
      int scalar11 = 1;
      if(PATH0 & 1) {
         scalar10++;
         printf("DELETE!\n");
      }
      else {
         scalar10--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

