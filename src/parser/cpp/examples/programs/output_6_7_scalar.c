#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func11();
void func12(const unsigned long PATH0);
void func7();
void func8(const unsigned long PATH0);
void func10();
void func5();
void func6(const unsigned long PATH0);
void func1();
void func2(const unsigned long PATH0);
void func4();

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
      int scalar2 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func3(rng());
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         int scalar3 = 1;
         scalar1++;
         int scalar4 = 1;
         scalar2++;
         int scalar5 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/3 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            int scalar6 = 1;
            scalar6++;
            int scalar7 = 1;
            scalar1++;
            int scalar8 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int loop12 = 0;
            int loopLimit12 = (rand()%10)/4 + 1;
            for(; loop12 < loopLimit12; loop12++) {
               int scalar9 = 1;
               scalar4++;
               scalar6--;
            }
            printf("DELETE!\n");
            func10();
            int scalar9 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            func9(rng());
            scalar5--;
         }
         printf("DELETE!\n");
         func5();
         int scalar6 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         scalar4--;
      }
      printf("DELETE!\n");
      func1();
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func2(rng());
      int loop26 = 0;
      int loopLimit26 = (rand()%10)/2 + 1;
      for(; loop26 < loopLimit26; loop26++) {
         int scalar4 = 1;
         scalar1++;
         int scalar5 = 1;
         scalar4++;
         int scalar6 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int loop27 = 0;
         int loopLimit27 = (rand()%10)/3 + 1;
         for(; loop27 < loopLimit27; loop27++) {
            int scalar7 = 1;
            scalar5++;
            int scalar8 = 1;
            scalar4++;
            int scalar9 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func9(rng());
            int loop28 = 0;
            int loopLimit28 = (rand()%10)/4 + 1;
            for(; loop28 < loopLimit28; loop28++) {
               int scalar10 = 1;
               scalar5++;
               int scalar11 = 1;
               scalar8++;
               printf("DELETE!\n");
               func11();
               int scalar12 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               scalar1--;
            }
            printf("DELETE!\n");
            func7();
            int scalar10 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            scalar9--;
         }
         printf("DELETE!\n");
         func4();
         int scalar7 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func3(rng());
         scalar2--;
      }
      if(PATH0 & 1) {
         int scalar4 = 1;
         scalar2++;
         int scalar5 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int loop31 = 0;
         int loopLimit31 = (rand()%10)/2 + 1;
         for(; loop31 < loopLimit31; loop31++) {
            int scalar6 = 1;
            scalar3++;
            int scalar7 = 1;
            scalar4++;
            int scalar8 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            func9(rng());
            int loop32 = 0;
            int loopLimit32 = (rand()%10)/3 + 1;
            for(; loop32 < loopLimit32; loop32++) {
               int scalar9 = 1;
               scalar8++;
               int scalar10 = 1;
               scalar7++;
               printf("DELETE!\n");
               func11();
               int scalar11 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               scalar8--;
            }
            printf("DELETE!\n");
            func7();
            int scalar9 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            scalar2--;
         }
         printf("DELETE!\n");
         func4();
      }
      else {
         int scalar4 = 1;
         scalar2--;
         int loop33 = 0;
         int loopLimit33 = (rand()%10)/2 + 1;
         for(; loop33 < loopLimit33; loop33++) {
            scalar2++;
         }
         printf("DELETE!\n");
      }
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
         int scalar3 = 1;
         scalar3++;
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func9(rng());
         int loop3 = 0;
         int loopLimit3 = (rand()%10)/2 + 1;
         for(; loop3 < loopLimit3; loop3++) {
            int scalar5 = 1;
            scalar3++;
            int scalar6 = 1;
            scalar4++;
            printf("DELETE!\n");
            func11();
            int scalar7 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            scalar7--;
         }
         printf("DELETE!\n");
         func7();
      }
      else {
         int scalar3 = 1;
         scalar3--;
         int loop6 = 0;
         int loopLimit6 = (rand()%10)/2 + 1;
         for(; loop6 < loopLimit6; loop6++) {
            scalar3++;
         }
         printf("DELETE!\n");
      }
   }
   else {
      printf("DELETE!\n");
   }
   int loop7 = 0;
   int loopLimit7 = (rand()%10)/2 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar3--;
   }
}

void func9(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
      }
      else {
         int scalar5 = 1;
         scalar5--;
         int loop1 = 0;
         int loopLimit1 = (rand()%10)/2 + 1;
         for(; loop1 < loopLimit1; loop1++) {
            scalar5++;
         }
         printf("DELETE!\n");
      }
   }
   else {
      printf("DELETE!\n");
   }
   int loop2 = 0;
   int loopLimit2 = (rand()%10)/2 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      scalar5--;
   }
}

void func11() {
}

void func12(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      printf("DELETE!\n");
   }
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/3 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      int scalar8 = 1;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      scalar8--;
   }
}

void func7() {
   int loop5 = 0;
   int loopLimit5 = (rand()%10)/2 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      int scalar5 = 1;
      scalar5++;
      int scalar6 = 1;
      scalar5++;
      printf("DELETE!\n");
      func11();
      int scalar7 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func12(rng());
      scalar5--;
   }
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
         int scalar6 = 1;
         scalar6++;
         printf("DELETE!\n");
         func11();
      }
      else {
         int scalar6 = 1;
         scalar6--;
         int loop9 = 0;
         int loopLimit9 = (rand()%10)/3 + 1;
         for(; loop9 < loopLimit9; loop9++) {
            scalar6++;
         }
         printf("DELETE!\n");
      }
   }
   else {
      printf("DELETE!\n");
   }
   int loop10 = 0;
   int loopLimit10 = (rand()%10)/3 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      scalar6--;
   }
}

void func10() {
   int loop13 = 0;
   int loopLimit13 = (rand()%10)/4 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      int scalar9 = 1;
      scalar9++;
      scalar9--;
   }
}

void func5() {
   int loop14 = 0;
   int loopLimit14 = (rand()%10)/3 + 1;
   for(; loop14 < loopLimit14; loop14++) {
      int scalar6 = 1;
      scalar6++;
      int scalar7 = 1;
      scalar7++;
      int scalar8 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      func12(rng());
      int loop15 = 0;
      int loopLimit15 = (rand()%10)/4 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         int scalar9 = 1;
         scalar7++;
         scalar9--;
      }
      printf("DELETE!\n");
      func10();
      int scalar9 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      func9(rng());
      scalar7--;
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
         int scalar7 = 1;
         scalar7++;
         int scalar8 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int loop16 = 0;
         int loopLimit16 = (rand()%10)/3 + 1;
         for(; loop16 < loopLimit16; loop16++) {
            int scalar9 = 1;
            scalar7++;
            scalar9--;
         }
         printf("DELETE!\n");
         func10();
      }
      else {
         int scalar7 = 1;
         scalar7--;
         int loop17 = 0;
         int loopLimit17 = (rand()%10)/3 + 1;
         for(; loop17 < loopLimit17; loop17++) {
            scalar7++;
         }
         printf("DELETE!\n");
      }
   }
   else {
      printf("DELETE!\n");
   }
   int loop18 = 0;
   int loopLimit18 = (rand()%10)/3 + 1;
   for(; loop18 < loopLimit18; loop18++) {
      int scalar7 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      scalar7--;
   }
}

void func1() {
   int loop19 = 0;
   int loopLimit19 = (rand()%10)/2 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      int scalar3 = 1;
      scalar3++;
      int scalar4 = 1;
      scalar3++;
      int scalar5 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      int loop20 = 0;
      int loopLimit20 = (rand()%10)/3 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         int scalar6 = 1;
         scalar4++;
         int scalar7 = 1;
         scalar3++;
         int scalar8 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int loop21 = 0;
         int loopLimit21 = (rand()%10)/4 + 1;
         for(; loop21 < loopLimit21; loop21++) {
            int scalar9 = 1;
            scalar7++;
            scalar8--;
         }
         printf("DELETE!\n");
         func10();
         int scalar9 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func9(rng());
         scalar8--;
      }
      printf("DELETE!\n");
      func5();
      int scalar6 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      scalar4--;
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
         int scalar4 = 1;
         scalar4++;
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int loop22 = 0;
         int loopLimit22 = (rand()%10)/2 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            int scalar6 = 1;
            scalar4++;
            int scalar7 = 1;
            scalar6++;
            int scalar8 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int loop23 = 0;
            int loopLimit23 = (rand()%10)/3 + 1;
            for(; loop23 < loopLimit23; loop23++) {
               int scalar9 = 1;
               scalar6++;
               scalar7--;
            }
            printf("DELETE!\n");
            func10();
            int scalar9 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            func9(rng());
            scalar6--;
         }
         printf("DELETE!\n");
         func5();
      }
      else {
         int scalar4 = 1;
         scalar4--;
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            scalar4++;
         }
         printf("DELETE!\n");
      }
   }
   else {
      printf("DELETE!\n");
   }
   int loop25 = 0;
   int loopLimit25 = (rand()%10)/2 + 1;
   for(; loop25 < loopLimit25; loop25++) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar4--;
   }
}

void func4() {
   int loop29 = 0;
   int loopLimit29 = (rand()%10)/3 + 1;
   for(; loop29 < loopLimit29; loop29++) {
      int scalar7 = 1;
      scalar7++;
      int scalar8 = 1;
      scalar7++;
      int scalar9 = 1;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      func9(rng());
      int loop30 = 0;
      int loopLimit30 = (rand()%10)/4 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         int scalar10 = 1;
         scalar9++;
         int scalar11 = 1;
         scalar11++;
         printf("DELETE!\n");
         func11();
         int scalar12 = 1;
         if (scalar12 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         scalar10--;
      }
      printf("DELETE!\n");
      func7();
      int scalar10 = 1;
      if (scalar9 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      scalar9--;
   }
}

