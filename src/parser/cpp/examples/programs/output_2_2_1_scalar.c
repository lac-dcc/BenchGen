#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func5();
void func6();
void func7();
void func8();
void func9();
void func2(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4();
void func10();
void func1(const unsigned long PATH0);

int main() {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;;
   for(; loop0 < loopLimit0; loop0++) {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;;
      for(; loop1 < loopLimit1; loop1++) {
         int loop2 = 0;
         int loopLimit2 = (rand()%10)/3 + 1;;
         for(; loop2 < loopLimit2; loop2++) {
            if(rng() & 1) {
            }
            else {
               func5();
            }
         }
         if(rng() & 1) {
            func6();
            func7();
            func8();
            func9();
         }
         else {
            func2(rng());
         }
      }
      if(rng() & 1) {
         func0(rng());
      }
      else {
         func1(rng());
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

void func5() {
   int scalar0 = 1;
   printf("DELETE!\n");
}

void func6() {
}

void func7() {
   int loop3 = 0;
   int loopLimit3 = (rand()%10)/3 + 1;;
   for(; loop3 < loopLimit3; loop3++) {
      int scalar0 = 1;
      if (scalar0 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func8() {
}

void func9() {
}

void func2(const unsigned long PATH0) {
   int scalar0 = 1;
   int scalar1 = 1;
   scalar0++;
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/3 + 1;;
   for(; loop4 < loopLimit4; loop4++) {
   }
   int scalar2 = 1;
   if(PATH0 & 1) {
      scalar0--;
   }
   else {
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/3 + 1;;
      for(; loop5 < loopLimit5; loop5++) {
         scalar1++;
      }
   }
   int scalar3 = 1;
   scalar1++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func0(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func3(rng());
   }
   else {
      int scalar0 = 1;
      if(PATH0 & 2) {
         func4();
      }
      else {
         int loop8 = 0;
         int loopLimit8 = (rand()%10)/2 + 1;;
         for(; loop8 < loopLimit8; loop8++) {
            int scalar1 = 1;
            scalar1++;
            int loop9 = 0;
            int loopLimit9 = (rand()%10)/3 + 1;;
            for(; loop9 < loopLimit9; loop9++) {
            }
            int scalar2 = 1;
            if(PATH0 & 4) {
               scalar2--;
            }
            else {
               int loop10 = 0;
               int loopLimit10 = (rand()%10)/3 + 1;;
               for(; loop10 < loopLimit10; loop10++) {
                  scalar1++;
               }
            }
            int scalar3 = 1;
            scalar2++;
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   if(PATH0 & 8) {
      func8();
   }
   else {
      int scalar0 = 1;
      if(PATH0 & 16) {
         func10();
      }
      else {
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/2 + 1;;
         for(; loop11 < loopLimit11; loop11++) {
         }
      }
   }
}

void func3(const unsigned long PATH0) {
   int scalar0 = 1;
   scalar0++;
   int loop6 = 0;
   int loopLimit6 = (rand()%10)/2 + 1;;
   for(; loop6 < loopLimit6; loop6++) {
   }
   int scalar1 = 1;
   if(PATH0 & 1) {
      scalar0--;
   }
   else {
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/2 + 1;;
      for(; loop7 < loopLimit7; loop7++) {
         scalar0++;
      }
   }
   int scalar2 = 1;
   scalar0++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func4() {
   func6();
   func7();
   func8();
   func9();
}

void func10() {
}

void func1(const unsigned long PATH0) {
   int scalar0 = 1;
   scalar0++;
   int loop12 = 0;
   int loopLimit12 = (rand()%10)/2 + 1;;
   for(; loop12 < loopLimit12; loop12++) {
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/3 + 1;;
      for(; loop13 < loopLimit13; loop13++) {
         if(PATH0 & 1) {
         }
         else {
            func5();
         }
      }
      if(PATH0 & 2) {
         func8();
      }
      else {
         int scalar1 = 1;
         if(PATH0 & 4) {
            func10();
         }
         else {
            int loop14 = 0;
            int loopLimit14 = (rand()%10)/3 + 1;;
            for(; loop14 < loopLimit14; loop14++) {
            }
         }
      }
   }
   int scalar1 = 1;
   if(PATH0 & 8) {
      scalar1--;
   }
   else {
      int loop15 = 0;
      int loopLimit15 = (rand()%10)/2 + 1;;
      for(; loop15 < loopLimit15; loop15++) {
         scalar0++;
      }
   }
   int scalar2 = 1;
   scalar0++;
   if(PATH0 & 16) {
      func8();
   }
   else {
      int scalar3 = 1;
      if(PATH0 & 32) {
         func10();
      }
      else {
         int loop16 = 0;
         int loopLimit16 = (rand()%10)/2 + 1;;
         for(; loop16 < loopLimit16; loop16++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

