#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func2(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);

int main() {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;;
   for(; loop0 < loopLimit0; loop0++) {
      int scalar0 = 1;
      scalar0++;
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;;
      for(; loop1 < loopLimit1; loop1++) {
         int scalar1 = 1;
         scalar0++;
         scalar1--;
      }
      printf("DELETE!\n");
      scalar0--;
   }
   func2(rng());
   printf("DELETE!\n");
   int loop2 = 0;
   int loopLimit2 = (rand()%10)/1 + 1;;
   for(; loop2 < loopLimit2; loop2++) {
      int scalar0 = 1;
      scalar0++;
      func0(rng());
      int scalar1 = 1;
      int loop11 = 0;
      int loopLimit11 = (rand()%10)/2 + 1;;
      for(; loop11 < loopLimit11; loop11++) {
         int loop12 = 0;
         int loopLimit12 = (rand()%10)/3 + 1;;
         for(; loop12 < loopLimit12; loop12++) {
            int scalar2 = 1;
            scalar0++;
            int loop13 = 0;
            int loopLimit13 = (rand()%10)/4 + 1;;
            for(; loop13 < loopLimit13; loop13++) {
               int scalar3 = 1;
               scalar1++;
               scalar3--;
            }
            printf("DELETE!\n");
            scalar1--;
         }
         func2(rng());
         printf("DELETE!\n");
         func1(rng());
      }
      if (scalar0 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      printf("DELETE!\n");
   }
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int scalar0 = 1;
      scalar0++;
      if (scalar0 == 0) {
         printf("IS 0!");
      }
      scalar0--;
      scalar0--;
      if (scalar0 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   func1(rng());
   if(PATH0 & 1) {
      int scalar1 = 1;
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;;
      for(; loop4 < loopLimit4; loop4++) {
         int scalar2 = 1;
         scalar1++;
         scalar1--;
      }
      printf("DELETE!\n");
      int scalar2 = 1;
      int scalar3 = 1;
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/2 + 1;;
      for(; loop5 < loopLimit5; loop5++) {
         if(PATH0 & 2) {
            if (scalar2 == 0) {
               printf("IS 0!");
            }
         }
         else {
            scalar3--;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & 4) {
         }
         else {
         }
      }
      if (scalar1 == 0) {
         printf("IS 0!");
      }
   }
   else {
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/2 + 1;;
      for(; loop6 < loopLimit6; loop6++) {
         int loop7 = 0;
         int loopLimit7 = (rand()%10)/3 + 1;;
         for(; loop7 < loopLimit7; loop7++) {
            int scalar1 = 1;
            scalar1++;
            int loop8 = 0;
            int loopLimit8 = (rand()%10)/4 + 1;;
            for(; loop8 < loopLimit8; loop8++) {
               int scalar2 = 1;
               scalar1++;
               scalar1--;
            }
            printf("DELETE!\n");
            scalar1--;
         }
         func2(rng());
         printf("DELETE!\n");
         int loop9 = 0;
         int loopLimit9 = (rand()%10)/3 + 1;;
         for(; loop9 < loopLimit9; loop9++) {
            int scalar1 = 1;
            scalar1++;
            scalar1--;
         }
         printf("DELETE!\n");
         if(PATH0 & 8) {
            func2(rng());
         }
         else {
            int scalar1 = 1;
            int scalar2 = 1;
            int scalar3 = 1;
            int loop10 = 0;
            int loopLimit10 = (rand()%10)/3 + 1;;
            for(; loop10 < loopLimit10; loop10++) {
               if(PATH0 & 16) {
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
               }
               else {
                  scalar3--;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
               }
            }
            if (scalar1 == 0) {
               printf("IS 0!");
            }
         }
      }
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
      }
      else {
      }
   }
   else {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      scalar1--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/2 + 1;;
      for(; loop3 < loopLimit3; loop3++) {
         int scalar2 = 1;
         scalar1++;
         scalar1--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

