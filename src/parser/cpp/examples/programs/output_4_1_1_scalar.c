#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func4(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);

int main() {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;;
   for(; loop0 < loopLimit0; loop0++) {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;;
      for(; loop1 < loopLimit1; loop1++) {
         int scalar0 = 1;
         scalar0++;
         int loop2 = 0;
         int loopLimit2 = (rand()%10)/3 + 1;;
         for(; loop2 < loopLimit2; loop2++) {
            int scalar1 = 1;
            scalar0++;
            int loop3 = 0;
            int loopLimit3 = (rand()%10)/4 + 1;;
            for(; loop3 < loopLimit3; loop3++) {
               int scalar2 = 1;
               scalar0++;
               int loop4 = 0;
               int loopLimit4 = (rand()%10)/5 + 1;;
               for(; loop4 < loopLimit4; loop4++) {
                  int scalar3 = 1;
                  scalar3++;
                  scalar1--;
               }
               printf("DELETE!\n");
               scalar1--;
            }
            func4(rng());
            printf("DELETE!\n");
            scalar1--;
         }
         func3(rng());
         printf("DELETE!\n");
         scalar0--;
      }
      func2(rng());
      printf("DELETE!\n");
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

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int scalar2 = 1;
      scalar2++;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      scalar2--;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
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
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/3 + 1;;
      for(; loop5 < loopLimit5; loop5++) {
         int scalar2 = 1;
         scalar1++;
         scalar1--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/2 + 1;;
      for(; loop6 < loopLimit6; loop6++) {
         int scalar0 = 1;
         scalar0++;
         scalar0--;
      }
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func4(rng());
      }
      else {
         int scalar0 = 1;
         int scalar1 = 1;
         int scalar2 = 1;
         int loop7 = 0;
         int loopLimit7 = (rand()%10)/2 + 1;;
         for(; loop7 < loopLimit7; loop7++) {
            if(PATH0 & 4) {
               if (scalar0 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar0--;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
            }
         }
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
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
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/2 + 1;;
      for(; loop8 < loopLimit8; loop8++) {
         int scalar1 = 1;
         scalar0++;
         int loop9 = 0;
         int loopLimit9 = (rand()%10)/3 + 1;;
         for(; loop9 < loopLimit9; loop9++) {
            int scalar2 = 1;
            scalar0++;
            scalar0--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      func4(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   int scalar0 = 1;
   int loop10 = 0;
   int loopLimit10 = (rand()%10)/2 + 1;;
   for(; loop10 < loopLimit10; loop10++) {
      int scalar1 = 1;
      scalar1++;
      int loop11 = 0;
      int loopLimit11 = (rand()%10)/3 + 1;;
      for(; loop11 < loopLimit11; loop11++) {
         int scalar2 = 1;
         scalar1++;
         int loop12 = 0;
         int loopLimit12 = (rand()%10)/4 + 1;;
         for(; loop12 < loopLimit12; loop12++) {
            int scalar3 = 1;
            scalar0++;
            scalar3--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      func4(rng());
      printf("DELETE!\n");
      scalar1--;
   }
   func3(rng());
   printf("DELETE!\n");
   int scalar1 = 1;
   int scalar2 = 1;
   int loop13 = 0;
   int loopLimit13 = (rand()%10)/2 + 1;;
   for(; loop13 < loopLimit13; loop13++) {
      if(PATH0 & 1) {
         if (scalar0 == 0) {
            printf("IS 0!");
         }
      }
      else {
         scalar0--;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/3 + 1;;
      for(; loop14 < loopLimit14; loop14++) {
         int scalar3 = 1;
         scalar0++;
         int loop15 = 0;
         int loopLimit15 = (rand()%10)/4 + 1;;
         for(; loop15 < loopLimit15; loop15++) {
            int scalar4 = 1;
            scalar2++;
            scalar3--;
         }
         printf("DELETE!\n");
         scalar0--;
      }
      func4(rng());
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func3(rng());
      }
      else {
         int scalar3 = 1;
         int loop16 = 0;
         int loopLimit16 = (rand()%10)/3 + 1;;
         for(; loop16 < loopLimit16; loop16++) {
            int scalar4 = 1;
            scalar0++;
            scalar0--;
         }
         printf("DELETE!\n");
         int scalar4 = 1;
         int scalar5 = 1;
         int loop17 = 0;
         int loopLimit17 = (rand()%10)/3 + 1;;
         for(; loop17 < loopLimit17; loop17++) {
            if(PATH0 & 4) {
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar4--;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & 8) {
            }
            else {
            }
         }
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
}

void func1(const unsigned long PATH0) {
   int loop18 = 0;
   int loopLimit18 = (rand()%10)/2 + 1;;
   for(; loop18 < loopLimit18; loop18++) {
      int scalar0 = 1;
      scalar0++;
      int loop19 = 0;
      int loopLimit19 = (rand()%10)/3 + 1;;
      for(; loop19 < loopLimit19; loop19++) {
         int scalar1 = 1;
         scalar0++;
         int loop20 = 0;
         int loopLimit20 = (rand()%10)/4 + 1;;
         for(; loop20 < loopLimit20; loop20++) {
            int scalar2 = 1;
            scalar2++;
            scalar1--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      func4(rng());
      printf("DELETE!\n");
      scalar0--;
   }
   func3(rng());
   printf("DELETE!\n");
   if(PATH0 & 1) {
      func2(rng());
   }
   else {
      int scalar0 = 1;
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/2 + 1;;
      for(; loop21 < loopLimit21; loop21++) {
         int scalar1 = 1;
         scalar1++;
         int loop22 = 0;
         int loopLimit22 = (rand()%10)/3 + 1;;
         for(; loop22 < loopLimit22; loop22++) {
            int scalar2 = 1;
            scalar2++;
            scalar0--;
         }
         printf("DELETE!\n");
         scalar0--;
      }
      func4(rng());
      printf("DELETE!\n");
      int scalar1 = 1;
      int scalar2 = 1;
      int loop23 = 0;
      int loopLimit23 = (rand()%10)/2 + 1;;
      for(; loop23 < loopLimit23; loop23++) {
         if(PATH0 & 2) {
            if (scalar2 == 0) {
               printf("IS 0!");
            }
         }
         else {
            scalar1--;
            if (scalar0 == 0) {
               printf("IS 0!");
            }
         }
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/3 + 1;;
         for(; loop24 < loopLimit24; loop24++) {
            int scalar3 = 1;
            scalar1++;
            scalar1--;
         }
         printf("DELETE!\n");
         if(PATH0 & 4) {
            func4(rng());
         }
         else {
            int scalar3 = 1;
            int scalar4 = 1;
            int scalar5 = 1;
            int loop25 = 0;
            int loopLimit25 = (rand()%10)/3 + 1;;
            for(; loop25 < loopLimit25; loop25++) {
               if(PATH0 & 8) {
                  if (scalar0 == 0) {
                     printf("IS 0!");
                  }
               }
               else {
                  scalar3--;
                  if (scalar0 == 0) {
                     printf("IS 0!");
                  }
               }
            }
            if (scalar3 == 0) {
               printf("IS 0!");
            }
         }
      }
      if (scalar2 == 0) {
         printf("IS 0!");
      }
   }
}

