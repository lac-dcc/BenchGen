#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func4();
void func2(const unsigned long PATH0);

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
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int scalar3 = 1;
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         scalar2++;
         scalar1++;
      }
      printf("DELETE!\n");
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/2 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         int scalar4 = 1;
         scalar4++;
         scalar2--;
      }
      func3(rng());
      printf("DELETE!\n");
      func1(rng());
      int scalar4 = 1;
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         int scalar5 = 1;
         scalar3++;
         scalar5--;
      }
      printf("DELETE!\n");
      int scalar5 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int scalar6 = 1;
      int loop9 = 0;
      int loopLimit9 = (rand()%10)/2 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         scalar3++;
         scalar3++;
      }
      func4();
      int scalar7 = 1;
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/2 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         if(PATH0 & 1) {
            if (scalar7 == 0) {
               printf("IS 0!");
            }
         }
         else {
            scalar2--;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
         }
      }
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      func2(rng());
      func3(rng());
      int scalar8 = 1;
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
         if(PATH0 & 2) {
            if (scalar8 == 0) {
               printf("IS 0!");
            }
         }
         else {
            scalar2--;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
         }
         int scalar9 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int scalar10 = 1;
         int loop13 = 0;
         int loopLimit13 = (rand()%10)/3 + 1;
         for(; loop13 < loopLimit13; loop13++) {
            scalar3++;
            scalar10++;
         }
         printf("DELETE!\n");
      }
      if (scalar6 == 0) {
         printf("IS 0!");
      }
   }
}

void func3(const unsigned long PATH0) {
   int loop3 = 0;
   int loopLimit3 = (rand()%10)/2 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      int scalar4 = 1;
      printf("DELETE!\n");
   }
   if(PATH0 & 1) {
   }
   else {
      int scalar4 = 1;
      scalar4++;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar4--;
      scalar4--;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func1(const unsigned long PATH0) {
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/2 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      int scalar4 = 1;
      func3(rng());
      printf("DELETE!\n");
   }
   int scalar4 = 1;
   int loop5 = 0;
   int loopLimit5 = (rand()%10)/2 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      int scalar5 = 1;
      scalar4++;
      scalar5--;
   }
   printf("DELETE!\n");
   if(PATH0 & 1) {
      int scalar5 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int scalar6 = 1;
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/2 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         scalar5++;
         scalar6++;
      }
      printf("DELETE!\n");
   }
   else {
      int scalar5 = 1;
      scalar4++;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar4--;
      scalar4--;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      int scalar6 = 1;
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/2 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         int scalar7 = 1;
         scalar7++;
         scalar4--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4() {
   int scalar7 = 1;
   printf("DELETE!\n");
}

void func2(const unsigned long PATH0) {
   int scalar8 = 1;
   func4();
   int scalar9 = 1;
   int loop11 = 0;
   int loopLimit11 = (rand()%10)/2 + 1;
   for(; loop11 < loopLimit11; loop11++) {
      if(PATH0 & 1) {
         if (scalar8 == 0) {
            printf("IS 0!");
         }
      }
      else {
         scalar8--;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
      }
   }
   if (scalar9 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
}

