#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func7();
void func8(const unsigned long PATH0);
void func5();
void func6(const unsigned long PATH0);
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
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         int scalar3 = 1;
         scalar1++;
         int scalar4 = 1;
         scalar2++;
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int loop5 = 0;
         int loopLimit5 = (rand()%10)/3 + 1;
         for(; loop5 < loopLimit5; loop5++) {
            int scalar6 = 1;
            scalar3++;
            scalar2--;
         }
         printf("DELETE!\n");
         func5();
         int scalar6 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         scalar3--;
      }
      printf("DELETE!\n");
      func1();
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func2(rng());
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         int scalar4 = 1;
         scalar4++;
         int scalar5 = 1;
         scalar3++;
         int scalar6 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int loop15 = 0;
         int loopLimit15 = (rand()%10)/3 + 1;
         for(; loop15 < loopLimit15; loop15++) {
            int scalar7 = 1;
            scalar5++;
            int scalar8 = 1;
            scalar6++;
            printf("DELETE!\n");
            func7();
            int scalar9 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            scalar6--;
         }
         printf("DELETE!\n");
         func4();
         int scalar7 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func3(rng());
         scalar4--;
      }
      if(PATH0 & 1) {
         int scalar4 = 1;
         scalar3++;
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int loop17 = 0;
         int loopLimit17 = (rand()%10)/2 + 1;
         for(; loop17 < loopLimit17; loop17++) {
            int scalar6 = 1;
            scalar3++;
            int scalar7 = 1;
            scalar2++;
            printf("DELETE!\n");
            func7();
            int scalar8 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            scalar7--;
         }
         printf("DELETE!\n");
         func4();
      }
      else {
         int scalar4 = 1;
         scalar3--;
         int loop18 = 0;
         int loopLimit18 = (rand()%10)/2 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            scalar1++;
         }
         printf("DELETE!\n");
      }
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
         int scalar3 = 1;
         scalar3++;
         printf("DELETE!\n");
         func7();
      }
      else {
         int scalar3 = 1;
         scalar3--;
         int loop1 = 0;
         int loopLimit1 = (rand()%10)/2 + 1;
         for(; loop1 < loopLimit1; loop1++) {
            scalar3++;
         }
         printf("DELETE!\n");
      }
   }
   else {
      printf("DELETE!\n");
   }
   int loop2 = 0;
   int loopLimit2 = (rand()%10)/2 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar3--;
   }
}

void func7() {
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      printf("DELETE!\n");
   }
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/3 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      scalar6--;
   }
}

void func5() {
   int loop6 = 0;
   int loopLimit6 = (rand()%10)/3 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      int scalar6 = 1;
      scalar6++;
      scalar6--;
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
      }
      else {
         int scalar7 = 1;
         scalar7--;
         int loop7 = 0;
         int loopLimit7 = (rand()%10)/3 + 1;
         for(; loop7 < loopLimit7; loop7++) {
            scalar7++;
         }
         printf("DELETE!\n");
      }
   }
   else {
      printf("DELETE!\n");
   }
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/3 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      int scalar7 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      scalar7--;
   }
}

void func1() {
   int loop9 = 0;
   int loopLimit9 = (rand()%10)/2 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      int scalar3 = 1;
      scalar3++;
      int scalar4 = 1;
      scalar4++;
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/3 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         int scalar6 = 1;
         scalar5++;
         scalar5--;
      }
      printf("DELETE!\n");
      func5();
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      scalar6--;
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
         int scalar4 = 1;
         scalar4++;
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/2 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            int scalar6 = 1;
            scalar4++;
            scalar4--;
         }
         printf("DELETE!\n");
         func5();
      }
      else {
         int scalar4 = 1;
         scalar4--;
         int loop12 = 0;
         int loopLimit12 = (rand()%10)/2 + 1;
         for(; loop12 < loopLimit12; loop12++) {
            scalar4++;
         }
         printf("DELETE!\n");
      }
   }
   else {
      printf("DELETE!\n");
   }
   int loop13 = 0;
   int loopLimit13 = (rand()%10)/2 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar4--;
   }
}

void func4() {
   int loop16 = 0;
   int loopLimit16 = (rand()%10)/3 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      int scalar7 = 1;
      scalar7++;
      int scalar8 = 1;
      scalar7++;
      printf("DELETE!\n");
      func7();
      int scalar9 = 1;
      if (scalar9 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      scalar9--;
   }
}

