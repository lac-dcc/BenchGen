#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func5();
void func6(const unsigned long PATH0);
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
                  int loop3 = 0;
                  int loopLimit3 = (rand()%10)/4 + 1;
                  for(; loop3 < loopLimit3; loop3++) {
                     if(PATH0 & 4) {
                     }
                     else {
                        int scalar1 = 1;
                        scalar1++;
                     }
                     func5();
                  }
                  printf("DELETE!\n");
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  func6(rng());
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  int scalar3 = 1;
                  scalar2++;
               }
               func3();
            }
            int scalar1 = 1;
            if(PATH0 & 8) {
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
            if(PATH0 & 16) {
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
            func6(rng());
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            int scalar5 = 1;
            scalar3++;
         }
         func1();
      }
      if(PATH0 & 32) {
         int scalar1 = 1;
         printf("DELETE!\n");
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         scalar1++;
         scalar2--;
      }
      else {
      }
      int scalar1 = 1;
      int scalar2 = 1;
      if(PATH0 & 64) {
         int scalar3 = 1;
         scalar1++;
      }
      else {
         int scalar3 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 128) {
         int scalar3 = 1;
         scalar2++;
         if(PATH0 & 256) {
            int scalar4 = 1;
            printf("DELETE!\n");
            int scalar5 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            scalar5++;
            scalar4--;
         }
         else {
            scalar1--;
         }
      }
      else {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         int scalar4 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar5 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
      if(PATH0 & 512) {
         int scalar3 = 1;
         printf("DELETE!\n");
         int scalar4 = 1;
         int scalar5 = 1;
         if(PATH0 & 1024) {
            int scalar6 = 1;
            scalar3++;
         }
         else {
            int scalar6 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         scalar4++;
         scalar2--;
      }
      else {
         int scalar3 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar4 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar1--;
      }
      int scalar3 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func2(rng());
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func4(rng());
      int scalar5 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      int scalar6 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      int scalar7 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      int scalar8 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 2048) {
         int scalar9 = 1;
         printf("DELETE!\n");
         int scalar10 = 1;
         int scalar11 = 1;
         if(PATH0 & 4096) {
            int scalar12 = 1;
            scalar8++;
         }
         else {
            int scalar12 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         scalar10--;
         scalar6++;
         scalar10--;
      }
      else {
         int scalar9 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar10 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar5--;
      }
      int scalar9 = 1;
      if(PATH0 & 8192) {
         int scalar10 = 1;
         printf("DELETE!\n");
         int scalar11 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         scalar6--;
         scalar8++;
         scalar5--;
      }
      else {
         scalar3--;
      }
      int scalar10 = 1;
      int scalar11 = 1;
      if(PATH0 & 16384) {
         int scalar12 = 1;
         scalar10++;
      }
      else {
         int scalar12 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 32768) {
         int scalar12 = 1;
         scalar5++;
         if(PATH0 & 65536) {
            int scalar13 = 1;
            printf("DELETE!\n");
            int scalar14 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            scalar12--;
            scalar3++;
            scalar7--;
         }
         else {
            scalar2--;
         }
      }
      else {
         int scalar12 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         int scalar13 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar14 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 131072) {
         int scalar12 = 1;
         scalar12++;
         if(PATH0 & 262144) {
            int scalar13 = 1;
            printf("DELETE!\n");
            int scalar14 = 1;
            int scalar15 = 1;
            if(PATH0 & 524288) {
               int scalar16 = 1;
               scalar9++;
            }
            else {
               int scalar16 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar8--;
            scalar13++;
            scalar12--;
         }
         else {
            int scalar13 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            func6(rng());
            int scalar14 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar2--;
         }
      }
      else {
         int scalar12 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         int scalar13 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func4(rng());
         int scalar14 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar15 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         int scalar16 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 1048576) {
         int scalar12 = 1;
         printf("DELETE!\n");
         int scalar13 = 1;
         if(PATH0 & 2097152) {
            int scalar14 = 1;
            printf("DELETE!\n");
            int scalar15 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar6--;
            scalar2++;
            scalar9--;
         }
         else {
            scalar10--;
         }
         int scalar14 = 1;
         int scalar15 = 1;
         if(PATH0 & 4194304) {
            int scalar16 = 1;
            scalar1++;
         }
         else {
            int scalar16 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & 8388608) {
            int scalar16 = 1;
            scalar8++;
            if(PATH0 & 16777216) {
               int scalar17 = 1;
               printf("DELETE!\n");
               int scalar18 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar18--;
               scalar4++;
               scalar12--;
            }
            else {
               scalar15--;
            }
         }
         else {
            int scalar16 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            int scalar17 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func6(rng());
            int scalar18 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         scalar10--;
         scalar7++;
         scalar9--;
      }
      else {
         int scalar12 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func4(rng());
         int scalar13 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar14 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         int scalar15 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         scalar2--;
      }
   }
}

void func5() {
}

void func6(const unsigned long PATH0) {
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

void func3() {
   int scalar1 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func6(rng());
   int scalar2 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
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
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/3 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         if(PATH0 & 2) {
         }
         else {
            int scalar3 = 1;
            scalar2++;
         }
         func5();
      }
      printf("DELETE!\n");
   }
   else {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      int scalar5 = 1;
      if(PATH0 & 4) {
         int scalar6 = 1;
         scalar5++;
      }
      else {
         int scalar6 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
      }
   }
}

void func1() {
   int scalar1 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func4(rng());
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func6(rng());
   int scalar3 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   int scalar4 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
}

void func2(const unsigned long PATH0) {
   int scalar4 = 1;
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 1) {
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         if(PATH0 & 2) {
            int loop6 = 0;
            int loopLimit6 = (rand()%10)/3 + 1;
            for(; loop6 < loopLimit6; loop6++) {
               if(PATH0 & 4) {
               }
               else {
                  int scalar5 = 1;
                  scalar4++;
               }
               func5();
            }
            printf("DELETE!\n");
         }
         else {
            int scalar5 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            func6(rng());
            int scalar6 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            int scalar7 = 1;
            scalar5++;
         }
         func3();
      }
      int scalar5 = 1;
      if(PATH0 & 8) {
         int scalar6 = 1;
         scalar6++;
      }
      else {
         int scalar6 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
      if(PATH0 & 16) {
         int scalar6 = 1;
         printf("DELETE!\n");
         int scalar7 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         scalar6++;
         scalar5--;
      }
      else {
         scalar5--;
      }
   }
   else {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func4(rng());
      int scalar6 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      int scalar7 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      int scalar8 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 32) {
         int scalar9 = 1;
         printf("DELETE!\n");
         int scalar10 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         scalar7--;
         scalar6++;
         scalar8--;
      }
      else {
         scalar8--;
      }
      int scalar9 = 1;
      int scalar10 = 1;
      if(PATH0 & 64) {
         int scalar11 = 1;
         scalar7++;
      }
      else {
         int scalar11 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 128) {
         int scalar11 = 1;
         scalar11++;
         if(PATH0 & 256) {
            int scalar12 = 1;
            printf("DELETE!\n");
            int scalar13 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            scalar10--;
            scalar12++;
            scalar12--;
         }
         else {
            scalar4--;
         }
      }
      else {
         int scalar11 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         int scalar12 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar13 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
      }
   }
}

