#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4();
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func5(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   int scalar1 = 1;
   int scalar2 = 1;
   int scalar3 = 1;
   scalar3++;
   func0(rng());
   int scalar4 = 1;
   func2(rng());
   printf("DELETE!\n");
   int scalar5 = 1;
   scalar2++;
   int scalar6 = 1;
   scalar4++;
   func3(rng());
   int scalar7 = 1;
   int scalar8 = 1;
   func5(rng());
   printf("DELETE!\n");
   int scalar9 = 1;
   scalar3++;
   int scalar10 = 1;
   int loop6 = 0;
   int loopLimit6 = (rand()%10)/1 + 1;;
   for(; loop6 < loopLimit6; loop6++) {
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      if(rng() & 1) {
         scalar9++;
      }
      else {
         scalar10--;
      }
   }
   int loop7 = 0;
   int loopLimit7 = (rand()%10)/1 + 1;;
   for(; loop7 < loopLimit7; loop7++) {
   }
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/1 + 1;;
   for(; loop8 < loopLimit8; loop8++) {
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      if(rng() & 1) {
         scalar0++;
      }
      else {
         scalar10--;
      }
   }
   int loop9 = 0;
   int loopLimit9 = (rand()%10)/1 + 1;;
   for(; loop9 < loopLimit9; loop9++) {
      int scalar11 = 1;
      func5(rng());
      printf("DELETE!\n");
      int scalar12 = 1;
      scalar8++;
   }
   int scalar11 = 1;
   int scalar12 = 1;
   int scalar13 = 1;
   scalar5++;
   func3(rng());
   if(rng() & 1) {
      scalar9++;
      printf("DELETE!\n");
   }
   else {
      scalar2--;
      printf("DELETE!\n");
   }
   int scalar14 = 1;
   int scalar15 = 1;
   if(rng() & 1) {
      scalar10++;
      printf("DELETE!\n");
   }
   else {
      scalar14--;
      printf("DELETE!\n");
   }
   if(rng() & 1) {
   }
   else {
      int scalar16 = 1;
      scalar4++;
      if (scalar14 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
   int scalar16 = 1;
   printf("DELETE!\n");
   int scalar17 = 1;
   int loop10 = 0;
   int loopLimit10 = (rand()%10)/1 + 1;;
   for(; loop10 < loopLimit10; loop10++) {
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      if(rng() & 1) {
         scalar5++;
      }
      else {
         scalar0--;
      }
   }
   int loop11 = 0;
   int loopLimit11 = (rand()%10)/1 + 1;;
   for(; loop11 < loopLimit11; loop11++) {
   }
   if(rng() & 1) {
      int scalar18 = 1;
      func5(rng());
      printf("DELETE!\n");
      int scalar19 = 1;
      scalar2++;
   }
   else {
      int scalar18 = 1;
      scalar6++;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
   int scalar18 = 1;
   int scalar19 = 1;
   int loop12 = 0;
   int loopLimit12 = (rand()%10)/1 + 1;;
   for(; loop12 < loopLimit12; loop12++) {
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      if(rng() & 1) {
         scalar13++;
      }
      else {
         scalar16--;
      }
   }
   int loop13 = 0;
   int loopLimit13 = (rand()%10)/1 + 1;;
   for(; loop13 < loopLimit13; loop13++) {
   }
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
   if(PATH0 & 1) {
      int loop0 = 0;
      int loopLimit0 = (rand()%10)/1 + 1;;
      for(; loop0 < loopLimit0; loop0++) {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         int scalar5 = 1;
         scalar5++;
         func3(rng());
         printf("DELETE!\n");
      }
   }
   else {
      func1(rng());
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;;
      for(; loop1 < loopLimit1; loop1++) {
         int scalar6 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func4();
   }
}

void func4() {
   int loop2 = 0;
   int loopLimit2 = (rand()%10)/2 + 1;;
   for(; loop2 < loopLimit2; loop2++) {
   }
}

void func1(const unsigned long PATH0) {
   int loop3 = 0;
   int loopLimit3 = (rand()%10)/1 + 1;;
   for(; loop3 < loopLimit3; loop3++) {
      int scalar4 = 1;
      int scalar5 = 1;
      if(PATH0 & 1) {
         scalar5++;
         printf("DELETE!\n");
      }
      else {
         scalar5--;
         printf("DELETE!\n");
      }
      if(PATH0 & 2) {
      }
      else {
         int scalar6 = 1;
         scalar5++;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar6 = 1;
      printf("DELETE!\n");
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar5 = 1;
      func5(rng());
      printf("DELETE!\n");
      int scalar6 = 1;
      scalar6++;
   }
   else {
      int scalar5 = 1;
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/1 + 1;;
      for(; loop4 < loopLimit4; loop4++) {
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 2) {
            scalar5++;
         }
         else {
            scalar5--;
         }
      }
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/1 + 1;;
      for(; loop5 < loopLimit5; loop5++) {
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
   }
}

