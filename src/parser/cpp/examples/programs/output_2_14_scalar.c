#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func4();
void func5();
void func6();
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);

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
      func1(rng());
      if(PATH0 & 1) {
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func5();
      if(PATH0 & 2) {
         func4();
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop2 = 0;
         int loopLimit2 = (rand()%10)/2 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop3 = 0;
         int loopLimit3 = (rand()%10)/2 + 1;
         for(; loop3 < loopLimit3; loop3++) {
            func6();
         }
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         printf("DELETE!\n");
      }
      func2(rng());
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         if(PATH0 & 8) {
            func4();
         }
         else {
            if(PATH0 & 16) {
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func5();
         }
      }
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/2 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         func3(rng());
      }
      if(PATH0 & 32) {
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop9 = 0;
         int loopLimit9 = (rand()%10)/2 + 1;
         for(; loop9 < loopLimit9; loop9++) {
            if(PATH0 & 64) {
            }
            else {
            }
         }
         int loop10 = 0;
         int loopLimit10 = (rand()%10)/2 + 1;
         for(; loop10 < loopLimit10; loop10++) {
            func6();
         }
      }
      else {
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/2 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            int scalar2 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop12 = 0;
            int loopLimit12 = (rand()%10)/3 + 1;
            for(; loop12 < loopLimit12; loop12++) {
               if(PATH0 & 128) {
               }
               else {
               }
            }
            int loop13 = 0;
            int loopLimit13 = (rand()%10)/3 + 1;
            for(; loop13 < loopLimit13; loop13++) {
               func6();
            }
         }
      }
      int scalar2 = 1;
      int scalar3 = 1;
      printf("DELETE!\n");
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func4();
      if(PATH0 & 256) {
         int scalar4 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop14 = 0;
         int loopLimit14 = (rand()%10)/2 + 1;
         for(; loop14 < loopLimit14; loop14++) {
            if(PATH0 & 512) {
            }
            else {
            }
         }
         int loop15 = 0;
         int loopLimit15 = (rand()%10)/2 + 1;
         for(; loop15 < loopLimit15; loop15++) {
            func6();
         }
      }
      else {
         if(PATH0 & 1024) {
         }
         else {
            int loop16 = 0;
            int loopLimit16 = (rand()%10)/2 + 1;
            for(; loop16 < loopLimit16; loop16++) {
            }
         }
         int scalar4 = 1;
         int scalar5 = 1;
         printf("DELETE!\n");
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 2048) {
         }
         else {
         }
      }
   }
}

void func1(const unsigned long PATH0) {
   int scalar1 = 1;
   func4();
   scalar1++;
   scalar1++;
   if(PATH0 & 1) {
   }
   else {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
      }
   }
   int scalar2 = 1;
   int scalar3 = 1;
   printf("DELETE!\n");
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
   printf("DELETE!\n");
}

void func4() {
   int scalar2 = 1;
   scalar2++;
   scalar2++;
   printf("DELETE!\n");
}

void func5() {
}

void func6() {
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
      }
   }
   int scalar1 = 1;
   int scalar2 = 1;
   printf("DELETE!\n");
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
}

void func3(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop7 = 0;
   int loopLimit7 = (rand()%10)/3 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      if(PATH0 & 1) {
      }
      else {
      }
   }
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/3 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      func6();
   }
}

