#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1();
void func6();
void func7();
void func8();
void func9();
void func10();
void func11();
void func2(const unsigned long PATH0);
void func3();
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   int scalar1 = 1;
   int scalar2 = 1;
   if(rng() & 1) {
      func0(rng());
   }
   else {
      int scalar3 = 1;
      if(rng() & 1) {
         func1();
      }
      else {
         int loop3 = 0;
         int loopLimit3 = (rand()%10)/1 + 1;;
         for(; loop3 < loopLimit3; loop3++) {
            int scalar4 = 1;
            scalar0++;
            int loop4 = 0;
            int loopLimit4 = (rand()%10)/2 + 1;;
            for(; loop4 < loopLimit4; loop4++) {
            }
            int scalar5 = 1;
            if(rng() & 1) {
               scalar4--;
            }
            else {
               int loop5 = 0;
               int loopLimit5 = (rand()%10)/2 + 1;;
               for(; loop5 < loopLimit5; loop5++) {
                  scalar0++;
               }
            }
            int scalar6 = 1;
            scalar1++;
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   if(rng() & 1) {
      func8();
   }
   else {
      int scalar3 = 1;
      if(rng() & 1) {
         func10();
      }
      else {
         int loop6 = 0;
         int loopLimit6 = (rand()%10)/1 + 1;;
         for(; loop6 < loopLimit6; loop6++) {
         }
      }
   }
   int scalar3 = 1;
   scalar1++;
   int loop7 = 0;
   int loopLimit7 = (rand()%10)/1 + 1;;
   for(; loop7 < loopLimit7; loop7++) {
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/2 + 1;;
      for(; loop8 < loopLimit8; loop8++) {
         if(rng() & 1) {
         }
         else {
            func11();
         }
      }
      if(rng() & 1) {
         func8();
      }
      else {
         int scalar4 = 1;
         if(rng() & 1) {
            func10();
         }
         else {
            int loop9 = 0;
            int loopLimit9 = (rand()%10)/2 + 1;;
            for(; loop9 < loopLimit9; loop9++) {
            }
         }
      }
   }
   int scalar4 = 1;
   if(rng() & 1) {
      scalar2--;
   }
   else {
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/1 + 1;;
      for(; loop10 < loopLimit10; loop10++) {
         scalar2++;
      }
   }
   int scalar5 = 1;
   scalar2++;
   if(rng() & 1) {
      func8();
   }
   else {
      int scalar6 = 1;
      if(rng() & 1) {
         func10();
      }
      else {
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/1 + 1;;
         for(; loop11 < loopLimit11; loop11++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   func2(rng());
   func3();
   func0(rng());
   func4(rng());
   int loop15 = 0;
   int loopLimit15 = (rand()%10)/1 + 1;;
   for(; loop15 < loopLimit15; loop15++) {
      int loop16 = 0;
      int loopLimit16 = (rand()%10)/2 + 1;;
      for(; loop16 < loopLimit16; loop16++) {
         if(rng() & 1) {
         }
         else {
            func11();
         }
      }
      if(rng() & 1) {
         func6();
         func7();
         func8();
         func9();
      }
      else {
         func5(rng());
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

void func0(const unsigned long PATH0) {
   int scalar3 = 1;
   scalar3++;
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;;
   for(; loop0 < loopLimit0; loop0++) {
   }
   int scalar4 = 1;
   if(PATH0 & 1) {
      scalar3--;
   }
   else {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/1 + 1;;
      for(; loop1 < loopLimit1; loop1++) {
         scalar4++;
      }
   }
   int scalar5 = 1;
   scalar4++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func1() {
   func6();
   func7();
   func8();
   func9();
}

void func6() {
}

void func7() {
   int loop2 = 0;
   int loopLimit2 = (rand()%10)/1 + 1;;
   for(; loop2 < loopLimit2; loop2++) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func8() {
}

void func9() {
}

void func10() {
}

void func11() {
   int scalar4 = 1;
   printf("DELETE!\n");
}

void func2(const unsigned long PATH0) {
   int loop12 = 0;
   int loopLimit12 = (rand()%10)/1 + 1;;
   for(; loop12 < loopLimit12; loop12++) {
      if(PATH0 & 1) {
      }
      else {
         func11();
      }
   }
}

void func3() {
   int loop13 = 0;
   int loopLimit13 = (rand()%10)/1 + 1;;
   for(; loop13 < loopLimit13; loop13++) {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      func6();
      func7();
      func8();
      func9();
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func8();
   }
   else {
      int scalar6 = 1;
      if(PATH0 & 2) {
         func10();
      }
      else {
         int loop14 = 0;
         int loopLimit14 = (rand()%10)/1 + 1;;
         for(; loop14 < loopLimit14; loop14++) {
         }
      }
   }
}

void func5(const unsigned long PATH0) {
   int scalar6 = 1;
   int scalar7 = 1;
   scalar7++;
   int loop17 = 0;
   int loopLimit17 = (rand()%10)/2 + 1;;
   for(; loop17 < loopLimit17; loop17++) {
   }
   int scalar8 = 1;
   if(PATH0 & 1) {
      scalar7--;
   }
   else {
      int loop18 = 0;
      int loopLimit18 = (rand()%10)/2 + 1;;
      for(; loop18 < loopLimit18; loop18++) {
         scalar6++;
      }
   }
   int scalar9 = 1;
   scalar8++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

