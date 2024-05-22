#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
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
            if (scalar3 == 0) {
               printf("IS 0!");
            }
         }
      }
      printf("DELETE!\n");
      func1(rng());
      if(PATH0 & 2) {
         int scalar2 = 1;
         scalar2++;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar2--;
      }
      else {
         int scalar2 = 1;
         scalar1++;
         int loop25 = 0;
         int loopLimit25 = (rand()%10)/2 + 1;
         for(; loop25 < loopLimit25; loop25++) {
            int scalar3 = 1;
            int loop26 = 0;
            int loopLimit26 = (rand()%10)/3 + 1;
            for(; loop26 < loopLimit26; loop26++) {
               int scalar4 = 1;
               scalar2++;
               func4(rng());
            }
            int scalar4 = 1;
            if(PATH0 & 4) {
               printf("DELETE!\n");
            }
            else {
               scalar3--;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
            }
         }
         printf("DELETE!\n");
         func2(rng());
      }
      int loop32 = 0;
      int loopLimit32 = (rand()%10)/2 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         int scalar2 = 1;
         scalar1++;
         func2(rng());
      }
      int scalar2 = 1;
      if(PATH0 & 8) {
         printf("DELETE!\n");
      }
      else {
         scalar1--;
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
            int scalar5 = 1;
            scalar4++;
            int loop4 = 0;
            int loopLimit4 = (rand()%10)/5 + 1;
            for(; loop4 < loopLimit4; loop4++) {
               int scalar6 = 1;
               int loop5 = 0;
               int loopLimit5 = (rand()%10)/6 + 1;
               for(; loop5 < loopLimit5; loop5++) {
                  int scalar7 = 1;
                  scalar5++;
                  func7(rng());
               }
               int scalar7 = 1;
               if(PATH0 & 4) {
                  printf("DELETE!\n");
               }
               else {
                  scalar7--;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
               }
            }
            printf("DELETE!\n");
            func5(rng());
         }
      }
   }
   int scalar5 = 1;
   scalar5++;
   int loop11 = 0;
   int loopLimit11 = (rand()%10)/4 + 1;
   for(; loop11 < loopLimit11; loop11++) {
      int scalar6 = 1;
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/5 + 1;
      for(; loop12 < loopLimit12; loop12++) {
         int scalar7 = 1;
         scalar6++;
         func6(rng());
      }
      int scalar7 = 1;
      if(PATH0 & 8) {
         printf("DELETE!\n");
      }
      else {
         scalar6--;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
      }
   }
   printf("DELETE!\n");
}

void func7(const unsigned long PATH0) {
   int scalar8 = 1;
   if(PATH0 & 1) {
      scalar8++;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
   }
   else {
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/7 + 1;
      for(; loop6 < loopLimit6; loop6++) {
      }
   }
}

void func5(const unsigned long PATH0) {
   int scalar6 = 1;
   if(PATH0 & 1) {
      scalar6++;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
   }
   else {
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/5 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         if(PATH0 & 2) {
            int scalar7 = 1;
            scalar6++;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar6--;
         }
         else {
            int scalar7 = 1;
            scalar6++;
            int loop8 = 0;
            int loopLimit8 = (rand()%10)/6 + 1;
            for(; loop8 < loopLimit8; loop8++) {
               int scalar8 = 1;
            }
            printf("DELETE!\n");
            func7(rng());
         }
      }
   }
   int scalar7 = 1;
   scalar6++;
   int loop9 = 0;
   int loopLimit9 = (rand()%10)/5 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      int scalar8 = 1;
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/6 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         int scalar9 = 1;
         scalar9++;
      }
      int scalar9 = 1;
      if(PATH0 & 4) {
         printf("DELETE!\n");
      }
      else {
         scalar6--;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
      }
   }
   printf("DELETE!\n");
}

void func6(const unsigned long PATH0) {
   int scalar8 = 1;
   if(PATH0 & 1) {
      scalar8++;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
   }
   else {
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/6 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if(PATH0 & 2) {
            int scalar9 = 1;
            scalar9++;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            scalar9--;
         }
         else {
         }
      }
   }
   int scalar9 = 1;
   scalar9++;
   int loop14 = 0;
   int loopLimit14 = (rand()%10)/6 + 1;
   for(; loop14 < loopLimit14; loop14++) {
      int scalar10 = 1;
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
      int loop15 = 0;
      int loopLimit15 = (rand()%10)/2 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         if(PATH0 & 2) {
            int scalar3 = 1;
            scalar2++;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar2--;
         }
         else {
            int scalar3 = 1;
            scalar3++;
            int loop16 = 0;
            int loopLimit16 = (rand()%10)/3 + 1;
            for(; loop16 < loopLimit16; loop16++) {
               int scalar4 = 1;
               int loop17 = 0;
               int loopLimit17 = (rand()%10)/4 + 1;
               for(; loop17 < loopLimit17; loop17++) {
                  int scalar5 = 1;
                  scalar3++;
                  func5(rng());
               }
               int scalar5 = 1;
               if(PATH0 & 4) {
                  printf("DELETE!\n");
               }
               else {
                  scalar3--;
                  if (scalar5 == 0) {
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
   int loop18 = 0;
   int loopLimit18 = (rand()%10)/2 + 1;
   for(; loop18 < loopLimit18; loop18++) {
      int scalar4 = 1;
      int loop19 = 0;
      int loopLimit19 = (rand()%10)/3 + 1;
      for(; loop19 < loopLimit19; loop19++) {
         int scalar5 = 1;
         scalar3++;
         func4(rng());
      }
      int scalar5 = 1;
      if(PATH0 & 8) {
         printf("DELETE!\n");
      }
      else {
         scalar3--;
         if (scalar3 == 0) {
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
      int loop20 = 0;
      int loopLimit20 = (rand()%10)/4 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         if(PATH0 & 2) {
            int scalar7 = 1;
            scalar7++;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar7--;
         }
         else {
            int scalar7 = 1;
            scalar6++;
            int loop21 = 0;
            int loopLimit21 = (rand()%10)/5 + 1;
            for(; loop21 < loopLimit21; loop21++) {
               int scalar8 = 1;
               int loop22 = 0;
               int loopLimit22 = (rand()%10)/6 + 1;
               for(; loop22 < loopLimit22; loop22++) {
                  int scalar9 = 1;
                  scalar9++;
               }
               int scalar9 = 1;
               if(PATH0 & 4) {
                  printf("DELETE!\n");
               }
               else {
                  scalar6--;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
               }
            }
            printf("DELETE!\n");
            func6(rng());
         }
      }
   }
   int scalar7 = 1;
   scalar7++;
   int loop23 = 0;
   int loopLimit23 = (rand()%10)/4 + 1;
   for(; loop23 < loopLimit23; loop23++) {
      int scalar8 = 1;
      int loop24 = 0;
      int loopLimit24 = (rand()%10)/5 + 1;
      for(; loop24 < loopLimit24; loop24++) {
         int scalar9 = 1;
         scalar8++;
         func7(rng());
      }
      int scalar9 = 1;
      if(PATH0 & 8) {
         printf("DELETE!\n");
      }
      else {
         scalar8--;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
      }
   }
   printf("DELETE!\n");
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
      int loop27 = 0;
      int loopLimit27 = (rand()%10)/2 + 1;
      for(; loop27 < loopLimit27; loop27++) {
         if(PATH0 & 2) {
            int scalar4 = 1;
            scalar3++;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar3--;
         }
         else {
            int scalar4 = 1;
            scalar4++;
            int loop28 = 0;
            int loopLimit28 = (rand()%10)/3 + 1;
            for(; loop28 < loopLimit28; loop28++) {
               int scalar5 = 1;
               int loop29 = 0;
               int loopLimit29 = (rand()%10)/4 + 1;
               for(; loop29 < loopLimit29; loop29++) {
                  int scalar6 = 1;
                  scalar5++;
                  func6(rng());
               }
               int scalar6 = 1;
               if(PATH0 & 4) {
                  printf("DELETE!\n");
               }
               else {
                  scalar6--;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
               }
            }
            printf("DELETE!\n");
            func4(rng());
         }
      }
   }
   int scalar4 = 1;
   scalar3++;
   int loop30 = 0;
   int loopLimit30 = (rand()%10)/2 + 1;
   for(; loop30 < loopLimit30; loop30++) {
      int scalar5 = 1;
      int loop31 = 0;
      int loopLimit31 = (rand()%10)/3 + 1;
      for(; loop31 < loopLimit31; loop31++) {
         int scalar6 = 1;
         scalar6++;
         func5(rng());
      }
      int scalar6 = 1;
      if(PATH0 & 8) {
         printf("DELETE!\n");
      }
      else {
         scalar5--;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
      }
   }
   printf("DELETE!\n");
}

