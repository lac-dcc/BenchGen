#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func4(const unsigned long PATH0);
void func5();
void func6(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func0(const unsigned long PATH0);

int main() {
   if(rng() & 1) {
      if(rng() & 1) {
         int scalar0 = 1;
         int scalar1 = 1;
         int scalar2 = 1;
         int scalar3 = 1;
         scalar3++;
         func4(rng());
         if(rng() & 1) {
            scalar1++;
            printf("DELETE!\n");
         }
         else {
            scalar3--;
            printf("DELETE!\n");
         }
         int scalar4 = 1;
         int scalar5 = 1;
         if(rng() & 1) {
            scalar5++;
            printf("DELETE!\n");
         }
         else {
            scalar1--;
            printf("DELETE!\n");
         }
         if(rng() & 1) {
         }
         else {
            int scalar6 = 1;
            scalar3++;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar6 = 1;
         printf("DELETE!\n");
         int scalar7 = 1;
         int loop2 = 0;
         int loopLimit2 = (rand()%10)/1 + 1;;
         for(; loop2 < loopLimit2; loop2++) {
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            if(rng() & 1) {
               scalar5++;
            }
            else {
               scalar2--;
            }
         }
         int loop3 = 0;
         int loopLimit3 = (rand()%10)/1 + 1;;
         for(; loop3 < loopLimit3; loop3++) {
         }
         if(rng() & 1) {
            int scalar8 = 1;
            func6(rng());
            printf("DELETE!\n");
            int scalar9 = 1;
            scalar7++;
         }
         else {
            int scalar8 = 1;
            scalar5++;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar8 = 1;
         int scalar9 = 1;
         int loop4 = 0;
         int loopLimit4 = (rand()%10)/1 + 1;;
         for(; loop4 < loopLimit4; loop4++) {
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            if(rng() & 1) {
               scalar6++;
            }
            else {
               scalar0--;
            }
         }
         int loop5 = 0;
         int loopLimit5 = (rand()%10)/1 + 1;;
         for(; loop5 < loopLimit5; loop5++) {
         }
         printf("DELETE!\n");
         if (scalar6 == 0) {
            printf("IS 0!");
         }
      }
      else {
         int loop6 = 0;
         int loopLimit6 = (rand()%10)/1 + 1;;
         for(; loop6 < loopLimit6; loop6++) {
            int scalar0 = 1;
            scalar0++;
            func1(rng());
            int scalar1 = 1;
            func3(rng());
            printf("DELETE!\n");
            int scalar2 = 1;
            scalar1++;
            int scalar3 = 1;
            scalar1++;
            func4(rng());
         }
      }
   }
   else {
      func0(rng());
   }
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop0 = 0;
      int loopLimit0 = (rand()%10)/1 + 1;;
      for(; loop0 < loopLimit0; loop0++) {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func5();
   }
}

void func5() {
   int loop1 = 0;
   int loopLimit1 = (rand()%10)/1 + 1;;
   for(; loop1 < loopLimit1; loop1++) {
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/2 + 1;;
      for(; loop7 < loopLimit7; loop7++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         int scalar2 = 1;
         scalar2++;
         func4(rng());
         printf("DELETE!\n");
      }
   }
   else {
      func2(rng());
   }
}

void func2(const unsigned long PATH0) {
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/2 + 1;;
   for(; loop8 < loopLimit8; loop8++) {
      int scalar1 = 1;
      int scalar2 = 1;
      if(PATH0 & 1) {
         scalar1++;
         printf("DELETE!\n");
      }
      else {
         scalar2--;
         printf("DELETE!\n");
      }
      if(PATH0 & 2) {
      }
      else {
         int scalar3 = 1;
         scalar1++;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar3 = 1;
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar2 = 1;
      func6(rng());
      printf("DELETE!\n");
      int scalar3 = 1;
      scalar2++;
   }
   else {
      int scalar2 = 1;
      int loop9 = 0;
      int loopLimit9 = (rand()%10)/2 + 1;;
      for(; loop9 < loopLimit9; loop9++) {
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 2) {
            scalar2++;
         }
         else {
            scalar2--;
         }
      }
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/2 + 1;;
      for(; loop10 < loopLimit10; loop10++) {
      }
   }
}

void func0(const unsigned long PATH0) {
   int loop11 = 0;
   int loopLimit11 = (rand()%10)/1 + 1;;
   for(; loop11 < loopLimit11; loop11++) {
      int scalar0 = 1;
      int scalar1 = 1;
      func6(rng());
      printf("DELETE!\n");
      int scalar2 = 1;
      scalar0++;
      int scalar3 = 1;
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/2 + 1;;
      for(; loop12 < loopLimit12; loop12++) {
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 1) {
            scalar2++;
         }
         else {
            scalar1--;
         }
      }
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/2 + 1;;
      for(; loop13 < loopLimit13; loop13++) {
      }
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/2 + 1;;
      for(; loop14 < loopLimit14; loop14++) {
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 2) {
            scalar1++;
         }
         else {
            scalar0--;
         }
      }
      int loop15 = 0;
      int loopLimit15 = (rand()%10)/2 + 1;;
      for(; loop15 < loopLimit15; loop15++) {
         int scalar4 = 1;
         func6(rng());
         printf("DELETE!\n");
         int scalar5 = 1;
         scalar1++;
      }
   }
}

