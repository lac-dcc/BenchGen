#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
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
      scalar1++;
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         int scalar2 = 1;
         int loop2 = 0;
         int loopLimit2 = (rand()%10)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            int scalar3 = 1;
            scalar2++;
            func3(rng());
         }
         int scalar3 = 1;
         if(PATH0 & 1) {
            printf("DELETE!\n");
         }
         else {
            scalar1--;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
         }
      }
      printf("DELETE!\n");
      func1(rng());
      if(PATH0 & 2) {
         int scalar2 = 1;
         scalar1++;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar2--;
      }
      else {
         int scalar2 = 1;
         scalar2++;
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/2 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            int scalar3 = 1;
            int loop12 = 0;
            int loopLimit12 = (rand()%10)/3 + 1;
            for(; loop12 < loopLimit12; loop12++) {
               int scalar4 = 1;
               scalar4++;
               func4(rng());
            }
            int scalar4 = 1;
            if(PATH0 & 4) {
               printf("DELETE!\n");
            }
            else {
               scalar2--;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
            }
         }
         printf("DELETE!\n");
         func2(rng());
      }
      int loop17 = 0;
      int loopLimit17 = (rand()%10)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         int scalar2 = 1;
         scalar2++;
         func2(rng());
      }
      int scalar2 = 1;
      if(PATH0 & 8) {
         printf("DELETE!\n");
      }
      else {
         scalar2--;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
      }
   }
}

void func3(const unsigned long PATH0) {
   int scalar4 = 1;
   if(PATH0 & 1) {
      scalar4++;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
   }
   else {
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/4 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         if(PATH0 & 2) {
            int scalar5 = 1;
            scalar5++;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar4--;
         }
         else {
         }
      }
   }
   int scalar5 = 1;
   scalar4++;
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/4 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      int scalar6 = 1;
   }
   printf("DELETE!\n");
}

void func1(const unsigned long PATH0) {
   int scalar2 = 1;
   if(PATH0 & 1) {
      scalar2++;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
   }
   else {
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         if(PATH0 & 2) {
            int scalar3 = 1;
            scalar2++;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar3--;
         }
         else {
            int scalar3 = 1;
            scalar2++;
            int loop6 = 0;
            int loopLimit6 = (rand()%10)/3 + 1;
            for(; loop6 < loopLimit6; loop6++) {
               int scalar4 = 1;
               int loop7 = 0;
               int loopLimit7 = (rand()%10)/4 + 1;
               for(; loop7 < loopLimit7; loop7++) {
                  int scalar5 = 1;
                  scalar2++;
               }
               int scalar5 = 1;
               if(PATH0 & 4) {
                  printf("DELETE!\n");
               }
               else {
                  scalar4--;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
               }
            }
            printf("DELETE!\n");
            func3(rng());
         }
      }
   }
   int scalar3 = 1;
   scalar2++;
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/2 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      int scalar4 = 1;
      int loop9 = 0;
      int loopLimit9 = (rand()%10)/3 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         int scalar5 = 1;
         scalar5++;
         func4(rng());
      }
      int scalar5 = 1;
      if(PATH0 & 8) {
         printf("DELETE!\n");
      }
      else {
         scalar3--;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0) {
   int scalar6 = 1;
   if(PATH0 & 1) {
      scalar6++;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
   }
   else {
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/4 + 1;
      for(; loop10 < loopLimit10; loop10++) {
      }
   }
}

void func2(const unsigned long PATH0) {
   int scalar3 = 1;
   if(PATH0 & 1) {
      scalar3++;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
   }
   else {
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if(PATH0 & 2) {
            int scalar4 = 1;
            scalar4++;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar4--;
         }
         else {
            int scalar4 = 1;
            scalar3++;
            int loop14 = 0;
            int loopLimit14 = (rand()%10)/3 + 1;
            for(; loop14 < loopLimit14; loop14++) {
               int scalar5 = 1;
            }
            printf("DELETE!\n");
            func4(rng());
         }
      }
   }
   int scalar4 = 1;
   scalar4++;
   int loop15 = 0;
   int loopLimit15 = (rand()%10)/2 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      int scalar5 = 1;
      int loop16 = 0;
      int loopLimit16 = (rand()%10)/3 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         int scalar6 = 1;
         scalar5++;
      }
      int scalar6 = 1;
      if(PATH0 & 4) {
         printf("DELETE!\n");
      }
      else {
         scalar4--;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
      }
   }
   printf("DELETE!\n");
}

