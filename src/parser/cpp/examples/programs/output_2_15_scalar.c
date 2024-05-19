#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3();
void func4(const unsigned long PATH0);
void func1();
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
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         if(PATH0 & 1) {
            int loop2 = 0;
            int loopLimit2 = (rand()%10)/3 + 1;
            for(; loop2 < loopLimit2; loop2++) {
               if(PATH0 & 2) {
               }
               else {
                  int scalar1 = 1;
                  scalar1++;
               }
               func3();
            }
            printf("DELETE!\n");
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            func4(rng());
            int scalar2 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            int scalar3 = 1;
            scalar2++;
         }
         func1();
      }
      int scalar1 = 1;
      if(PATH0 & 4) {
         int scalar2 = 1;
         scalar2++;
      }
      else {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
      if(PATH0 & 8) {
         int scalar2 = 1;
         printf("DELETE!\n");
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         scalar3++;
         scalar2--;
      }
      else {
         scalar1--;
      }
      int scalar2 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func2(rng());
      int scalar3 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func4(rng());
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      int scalar5 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 16) {
         int scalar6 = 1;
         printf("DELETE!\n");
         int scalar7 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         scalar7--;
         scalar2++;
         scalar6--;
      }
      else {
         scalar5--;
      }
      int scalar6 = 1;
      int scalar7 = 1;
      if(PATH0 & 32) {
         int scalar8 = 1;
         scalar3++;
      }
      else {
         int scalar8 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 64) {
         int scalar8 = 1;
         scalar3++;
         if(PATH0 & 128) {
            int scalar9 = 1;
            printf("DELETE!\n");
            int scalar10 = 1;
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            scalar8--;
            scalar4++;
            scalar7--;
         }
         else {
            scalar4--;
         }
      }
      else {
         int scalar8 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         int scalar9 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         func4(rng());
         int scalar10 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 256) {
         int scalar8 = 1;
         printf("DELETE!\n");
         int scalar9 = 1;
         int scalar10 = 1;
         if(PATH0 & 512) {
            int scalar11 = 1;
            scalar5++;
         }
         else {
            int scalar11 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar8--;
         scalar9++;
         scalar5--;
      }
      else {
         int scalar8 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func4(rng());
         int scalar9 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar3--;
      }
   }
}

void func3() {
}

void func4(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 1) {
   }
   else {
   }
}

void func1() {
   int scalar1 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func4(rng());
   int scalar2 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
}

void func2(const unsigned long PATH0) {
   int scalar3 = 1;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 1) {
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         if(PATH0 & 2) {
         }
         else {
            int scalar4 = 1;
            scalar3++;
         }
         func3();
      }
      printf("DELETE!\n");
   }
   else {
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func4(rng());
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      int scalar6 = 1;
      if(PATH0 & 4) {
         int scalar7 = 1;
         scalar6++;
      }
      else {
         int scalar7 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
      }
   }
}

