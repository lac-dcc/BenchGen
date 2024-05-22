#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func7();
void func8(const unsigned long PATH0);
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
                        int loop4 = 0;
                        int loopLimit4 = (rand()%10)/5 + 1;
                        for(; loop4 < loopLimit4; loop4++) {
                           if(PATH0 & 8) {
                           }
                           else {
                              int scalar1 = 1;
                              scalar1++;
                           }
                           func7();
                        }
                        printf("DELETE!\n");
                     }
                     else {
                        int scalar1 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        func8(rng());
                        int scalar2 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        int scalar3 = 1;
                        scalar2++;
                     }
                     func5();
                  }
                  int scalar1 = 1;
                  if(PATH0 & 16) {
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
                  if(PATH0 & 32) {
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
                  func6(rng());
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  func8(rng());
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
               func3();
            }
            if(PATH0 & 64) {
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
            if(PATH0 & 128) {
               int scalar3 = 1;
               scalar1++;
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & 256) {
               int scalar3 = 1;
               scalar2++;
               if(PATH0 & 512) {
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
               func8(rng());
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
            }
            printf("DELETE!\n");
            if(PATH0 & 1024) {
               int scalar3 = 1;
               printf("DELETE!\n");
               int scalar4 = 1;
               int scalar5 = 1;
               if(PATH0 & 2048) {
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
               func8(rng());
               int scalar4 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
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
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar4 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            int scalar5 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            int scalar6 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            int scalar7 = 1;
            scalar1++;
         }
         func1();
      }
      if(PATH0 & 4096) {
         int scalar1 = 1;
         printf("DELETE!\n");
         int scalar2 = 1;
         int scalar3 = 1;
         if(PATH0 & 8192) {
            int scalar4 = 1;
            scalar3++;
         }
         else {
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         scalar1++;
         scalar3--;
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar1--;
      }
      int scalar1 = 1;
      if(PATH0 & 16384) {
         int scalar2 = 1;
         printf("DELETE!\n");
         int scalar3 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         scalar2++;
         scalar3--;
      }
      else {
         scalar1--;
      }
      int scalar2 = 1;
      int scalar3 = 1;
      if(PATH0 & 32768) {
         int scalar4 = 1;
         scalar2++;
      }
      else {
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 65536) {
         int scalar4 = 1;
         scalar2++;
         if(PATH0 & 131072) {
            int scalar5 = 1;
            printf("DELETE!\n");
            int scalar6 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar6--;
            scalar5++;
            scalar4--;
         }
         else {
            scalar4--;
         }
      }
      else {
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         int scalar5 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar6 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 262144) {
         int scalar4 = 1;
         scalar2++;
         if(PATH0 & 524288) {
            int scalar5 = 1;
            printf("DELETE!\n");
            int scalar6 = 1;
            int scalar7 = 1;
            if(PATH0 & 1048576) {
               int scalar8 = 1;
               scalar4++;
            }
            else {
               int scalar8 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            scalar4++;
            scalar6--;
         }
         else {
            int scalar5 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar6 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar6--;
         }
      }
      else {
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar6 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar7 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         int scalar8 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
      if(PATH0 & 2097152) {
         int scalar4 = 1;
         printf("DELETE!\n");
         int scalar5 = 1;
         if(PATH0 & 4194304) {
            int scalar6 = 1;
            printf("DELETE!\n");
            int scalar7 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            scalar5++;
            scalar4--;
         }
         else {
            scalar5--;
         }
         int scalar6 = 1;
         int scalar7 = 1;
         if(PATH0 & 8388608) {
            int scalar8 = 1;
            scalar7++;
         }
         else {
            int scalar8 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & 16777216) {
            int scalar8 = 1;
            scalar5++;
            if(PATH0 & 33554432) {
               int scalar9 = 1;
               printf("DELETE!\n");
               int scalar10 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               scalar10++;
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
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar10 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         scalar1++;
         scalar5--;
      }
      else {
         int scalar4 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar5 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar6 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         int scalar7 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         scalar4--;
      }
      int scalar4 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func2(rng());
      int scalar5 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func4(rng());
      int scalar6 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      int scalar7 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      int scalar8 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      int scalar9 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      int scalar10 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      int scalar11 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 67108864) {
         int scalar12 = 1;
         printf("DELETE!\n");
         int scalar13 = 1;
         if(PATH0 & 134217728) {
            int scalar14 = 1;
            printf("DELETE!\n");
            int scalar15 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar13--;
            scalar9++;
            scalar15--;
         }
         else {
            scalar2--;
         }
         int scalar14 = 1;
         int scalar15 = 1;
         if(PATH0 & 268435456) {
            int scalar16 = 1;
            scalar15++;
         }
         else {
            int scalar16 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & 536870912) {
            int scalar16 = 1;
            scalar9++;
            if(PATH0 & 1073741824) {
               int scalar17 = 1;
               printf("DELETE!\n");
               int scalar18 = 1;
               if (scalar13 == 0) {
                  printf("IS 0!");
               }
               scalar9--;
               scalar6++;
               scalar16--;
            }
            else {
               scalar15--;
            }
         }
         else {
            int scalar16 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            int scalar17 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar18 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar12 == 0) {
            printf("IS 0!");
         }
         scalar7--;
         scalar11++;
         scalar14--;
      }
      else {
         int scalar12 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar13 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar14 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         int scalar15 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar12--;
      }
      int scalar12 = 1;
      if(PATH0 & -2147483648) {
         int scalar13 = 1;
         printf("DELETE!\n");
         int scalar14 = 1;
         int scalar15 = 1;
         if(PATH0 & -2147483648) {
            int scalar16 = 1;
            scalar4++;
         }
         else {
            int scalar16 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         scalar14++;
         scalar4--;
      }
      else {
         int scalar13 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar14 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         scalar5--;
      }
      int scalar13 = 1;
      if(PATH0 & -2147483648) {
         int scalar14 = 1;
         printf("DELETE!\n");
         int scalar15 = 1;
         if (scalar12 == 0) {
            printf("IS 0!");
         }
         scalar15--;
         scalar1++;
         scalar11--;
      }
      else {
         scalar13--;
      }
      int scalar14 = 1;
      int scalar15 = 1;
      if(PATH0 & -2147483648) {
         int scalar16 = 1;
         scalar1++;
      }
      else {
         int scalar16 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & -2147483648) {
         int scalar16 = 1;
         scalar1++;
         if(PATH0 & -2147483648) {
            int scalar17 = 1;
            printf("DELETE!\n");
            int scalar18 = 1;
            if (scalar14 == 0) {
               printf("IS 0!");
            }
            scalar16--;
            scalar7++;
            scalar14--;
         }
         else {
            scalar3--;
         }
      }
      else {
         int scalar16 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         int scalar17 = 1;
         if (scalar12 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar18 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & -2147483648) {
         int scalar16 = 1;
         scalar13++;
         if(PATH0 & -2147483648) {
            int scalar17 = 1;
            printf("DELETE!\n");
            int scalar18 = 1;
            int scalar19 = 1;
            if(PATH0 & -2147483648) {
               int scalar20 = 1;
               scalar20++;
            }
            else {
               int scalar20 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar18 == 0) {
               printf("IS 0!");
            }
            scalar7--;
            scalar12++;
            scalar16--;
         }
         else {
            int scalar17 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar18 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            scalar2--;
         }
      }
      else {
         int scalar16 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         int scalar17 = 1;
         if (scalar16 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar18 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar19 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         int scalar20 = 1;
         if (scalar20 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & -2147483648) {
         int scalar16 = 1;
         scalar10++;
         if(PATH0 & -2147483648) {
            int scalar17 = 1;
            printf("DELETE!\n");
            int scalar18 = 1;
            if(PATH0 & -2147483648) {
               int scalar19 = 1;
               printf("DELETE!\n");
               int scalar20 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar20--;
               scalar12++;
               scalar1--;
            }
            else {
               scalar18--;
            }
            int scalar19 = 1;
            int scalar20 = 1;
            if(PATH0 & -2147483648) {
               int scalar21 = 1;
               scalar18++;
            }
            else {
               int scalar21 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & -2147483648) {
               int scalar21 = 1;
               scalar9++;
               if(PATH0 & -2147483648) {
                  int scalar22 = 1;
                  printf("DELETE!\n");
                  int scalar23 = 1;
                  if (scalar21 == 0) {
                     printf("IS 0!");
                  }
                  scalar23--;
                  scalar18++;
                  scalar11--;
               }
               else {
                  scalar11--;
               }
            }
            else {
               int scalar21 = 1;
               if (scalar17 == 0) {
                  printf("IS 0!");
               }
               int scalar22 = 1;
               if (scalar22 == 0) {
                  printf("IS 0!");
               }
               func8(rng());
               int scalar23 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar11--;
            scalar5++;
            scalar13--;
         }
         else {
            int scalar17 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            func6(rng());
            int scalar18 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar19 = 1;
            if (scalar17 == 0) {
               printf("IS 0!");
            }
            int scalar20 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar6--;
         }
      }
      else {
         int scalar16 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         int scalar17 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         func4(rng());
         int scalar18 = 1;
         if (scalar17 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar19 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar20 = 1;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         int scalar21 = 1;
         if (scalar15 == 0) {
            printf("IS 0!");
         }
         int scalar22 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & -2147483648) {
         int scalar16 = 1;
         printf("DELETE!\n");
         int scalar17 = 1;
         if(PATH0 & -2147483648) {
            int scalar18 = 1;
            printf("DELETE!\n");
            int scalar19 = 1;
            int scalar20 = 1;
            if(PATH0 & -2147483648) {
               int scalar21 = 1;
               scalar3++;
            }
            else {
               int scalar21 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            scalar10--;
            scalar2++;
            scalar20--;
         }
         else {
            int scalar18 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar19 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar16--;
         }
         int scalar18 = 1;
         if(PATH0 & -2147483648) {
            int scalar19 = 1;
            printf("DELETE!\n");
            int scalar20 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            scalar20++;
            scalar10--;
         }
         else {
            scalar16--;
         }
         int scalar19 = 1;
         int scalar20 = 1;
         if(PATH0 & -2147483648) {
            int scalar21 = 1;
            scalar9++;
         }
         else {
            int scalar21 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & -2147483648) {
            int scalar21 = 1;
            scalar17++;
            if(PATH0 & -2147483648) {
               int scalar22 = 1;
               printf("DELETE!\n");
               int scalar23 = 1;
               if (scalar22 == 0) {
                  printf("IS 0!");
               }
               scalar11--;
               scalar14++;
               scalar18--;
            }
            else {
               scalar17--;
            }
         }
         else {
            int scalar21 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            int scalar22 = 1;
            if (scalar20 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar23 = 1;
            if (scalar17 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & -2147483648) {
            int scalar21 = 1;
            scalar21++;
            if(PATH0 & -2147483648) {
               int scalar22 = 1;
               printf("DELETE!\n");
               int scalar23 = 1;
               int scalar24 = 1;
               if(PATH0 & -2147483648) {
                  int scalar25 = 1;
                  scalar14++;
               }
               else {
                  int scalar25 = 1;
                  if (scalar12 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar7--;
               scalar4++;
               scalar17--;
            }
            else {
               int scalar22 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               func8(rng());
               int scalar23 = 1;
               if (scalar16 == 0) {
                  printf("IS 0!");
               }
               scalar13--;
            }
         }
         else {
            int scalar21 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            int scalar22 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            func6(rng());
            int scalar23 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar24 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            int scalar25 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         scalar13--;
         scalar9++;
         scalar19--;
      }
      else {
         int scalar16 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func4(rng());
         int scalar17 = 1;
         if (scalar14 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar18 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar19 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         int scalar20 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         int scalar21 = 1;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         scalar2--;
      }
   }
}

void func7() {
}

void func8(const unsigned long PATH0) {
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

void func5() {
   int scalar1 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func8(rng());
   int scalar2 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
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
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/4 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         if(PATH0 & 2) {
         }
         else {
            int scalar3 = 1;
            scalar2++;
         }
         func7();
      }
      printf("DELETE!\n");
   }
   else {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func8(rng());
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

void func3() {
   int scalar1 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func6(rng());
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func8(rng());
   int scalar3 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   int scalar4 = 1;
   if (scalar2 == 0) {
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
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/3 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         if(PATH0 & 2) {
            int loop7 = 0;
            int loopLimit7 = (rand()%10)/4 + 1;
            for(; loop7 < loopLimit7; loop7++) {
               if(PATH0 & 4) {
               }
               else {
                  int scalar3 = 1;
                  scalar2++;
               }
               func7();
            }
            printf("DELETE!\n");
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar4 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            int scalar5 = 1;
            scalar3++;
         }
         func5();
      }
      int scalar3 = 1;
      if(PATH0 & 8) {
         int scalar4 = 1;
         scalar4++;
      }
      else {
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
      if(PATH0 & 16) {
         int scalar4 = 1;
         printf("DELETE!\n");
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         scalar4++;
         scalar3--;
      }
      else {
         scalar3--;
      }
   }
   else {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      int scalar4 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      int scalar6 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 32) {
         int scalar7 = 1;
         printf("DELETE!\n");
         int scalar8 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         scalar4++;
         scalar6--;
      }
      else {
         scalar6--;
      }
      int scalar7 = 1;
      int scalar8 = 1;
      if(PATH0 & 64) {
         int scalar9 = 1;
         scalar5++;
      }
      else {
         int scalar9 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 128) {
         int scalar9 = 1;
         scalar9++;
         if(PATH0 & 256) {
            int scalar10 = 1;
            printf("DELETE!\n");
            int scalar11 = 1;
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            scalar8--;
            scalar10++;
            scalar10--;
         }
         else {
            scalar2--;
         }
      }
      else {
         int scalar9 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         int scalar10 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar11 = 1;
         if (scalar6 == 0) {
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
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func6(rng());
   int scalar3 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func8(rng());
   int scalar4 = 1;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   int scalar5 = 1;
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   int scalar6 = 1;
   if (scalar4 == 0) {
      printf("IS 0!");
   }
}

void func2(const unsigned long PATH0) {
   int scalar5 = 1;
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 1) {
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         if(PATH0 & 2) {
            int loop9 = 0;
            int loopLimit9 = (rand()%10)/3 + 1;
            for(; loop9 < loopLimit9; loop9++) {
               if(PATH0 & 4) {
                  int loop10 = 0;
                  int loopLimit10 = (rand()%10)/4 + 1;
                  for(; loop10 < loopLimit10; loop10++) {
                     if(PATH0 & 8) {
                     }
                     else {
                        int scalar6 = 1;
                        scalar5++;
                     }
                     func7();
                  }
                  printf("DELETE!\n");
               }
               else {
                  int scalar6 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  func8(rng());
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  int scalar8 = 1;
                  scalar8++;
               }
               func5();
            }
            int scalar6 = 1;
            if(PATH0 & 16) {
               int scalar7 = 1;
               scalar7++;
            }
            else {
               int scalar7 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
            }
            printf("DELETE!\n");
            if(PATH0 & 32) {
               int scalar7 = 1;
               printf("DELETE!\n");
               int scalar8 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               scalar8--;
               scalar6++;
               scalar8--;
            }
            else {
               scalar5--;
            }
         }
         else {
            int scalar6 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            func6(rng());
            int scalar7 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar8 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            int scalar9 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            int scalar10 = 1;
            scalar10++;
         }
         func3();
      }
      if(PATH0 & 64) {
         int scalar6 = 1;
         printf("DELETE!\n");
         int scalar7 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         scalar6++;
         scalar7--;
      }
      else {
         scalar5--;
      }
      int scalar6 = 1;
      int scalar7 = 1;
      if(PATH0 & 128) {
         int scalar8 = 1;
         scalar6++;
      }
      else {
         int scalar8 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 256) {
         int scalar8 = 1;
         scalar8++;
         if(PATH0 & 512) {
            int scalar9 = 1;
            printf("DELETE!\n");
            int scalar10 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar7--;
            scalar7++;
            scalar8--;
         }
         else {
            scalar8--;
         }
      }
      else {
         int scalar8 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         int scalar9 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar10 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
      if(PATH0 & 1024) {
         int scalar8 = 1;
         printf("DELETE!\n");
         int scalar9 = 1;
         int scalar10 = 1;
         if(PATH0 & 2048) {
            int scalar11 = 1;
            scalar11++;
         }
         else {
            int scalar11 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         scalar10--;
         scalar7++;
         scalar7--;
      }
      else {
         int scalar8 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar9 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         scalar8--;
      }
   }
   else {
      int scalar6 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func4(rng());
      int scalar7 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      int scalar8 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      int scalar9 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      int scalar10 = 1;
      if (scalar10 == 0) {
         printf("IS 0!");
      }
      int scalar11 = 1;
      if (scalar11 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 4096) {
         int scalar12 = 1;
         printf("DELETE!\n");
         int scalar13 = 1;
         int scalar14 = 1;
         if(PATH0 & 8192) {
            int scalar15 = 1;
            scalar13++;
         }
         else {
            int scalar15 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar8--;
         scalar5++;
         scalar14--;
      }
      else {
         int scalar12 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar13 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         scalar6--;
      }
      int scalar12 = 1;
      if(PATH0 & 16384) {
         int scalar13 = 1;
         printf("DELETE!\n");
         int scalar14 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar10--;
         scalar14++;
         scalar9--;
      }
      else {
         scalar7--;
      }
      int scalar13 = 1;
      int scalar14 = 1;
      if(PATH0 & 32768) {
         int scalar15 = 1;
         scalar12++;
      }
      else {
         int scalar15 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 65536) {
         int scalar15 = 1;
         scalar15++;
         if(PATH0 & 131072) {
            int scalar16 = 1;
            printf("DELETE!\n");
            int scalar17 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            scalar11--;
            scalar8++;
            scalar16--;
         }
         else {
            scalar7--;
         }
      }
      else {
         int scalar15 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         int scalar16 = 1;
         if (scalar16 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar17 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 262144) {
         int scalar15 = 1;
         scalar5++;
         if(PATH0 & 524288) {
            int scalar16 = 1;
            printf("DELETE!\n");
            int scalar17 = 1;
            int scalar18 = 1;
            if(PATH0 & 1048576) {
               int scalar19 = 1;
               scalar19++;
            }
            else {
               int scalar19 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            scalar13--;
            scalar17++;
            scalar11--;
         }
         else {
            int scalar16 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar17 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar9--;
         }
      }
      else {
         int scalar15 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         int scalar16 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar17 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar18 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         int scalar19 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
      }
   }
}

