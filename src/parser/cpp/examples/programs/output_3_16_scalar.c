#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func9();
void func10();
void func11();
void func6();
void func12();
void func7();
void func2(const unsigned long PATH0);
void func8();
void func3(const unsigned long PATH0);
void func4(const unsigned long PATH0);

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
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         func1(rng());
         func2(rng());
         func3(rng());
      }
      int scalar2 = 1;
      int scalar3 = 1;
      int scalar4 = 1;
      scalar3--;
      scalar4--;
      scalar1--;
      int scalar5 = 1;
      printf("DELETE!\n");
      int loop17 = 0;
      int loopLimit17 = (rand()%10)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         if(PATH0 & 1) {
            scalar2++;
         }
         else {
         }
      }
      int scalar6 = 1;
      printf("DELETE!\n");
      int loop18 = 0;
      int loopLimit18 = (rand()%10)/2 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         if(PATH0 & 2) {
            scalar4++;
         }
         else {
         }
      }
      func8();
      int scalar7 = 1;
      printf("DELETE!\n");
      int scalar8 = 1;
      int scalar9 = 1;
      int scalar10 = 1;
      scalar3--;
      scalar1--;
      scalar7--;
      func12();
      int scalar11 = 1;
      printf("DELETE!\n");
      int scalar12 = 1;
      printf("DELETE!\n");
      int loop19 = 0;
      int loopLimit19 = (rand()%10)/2 + 1;
      for(; loop19 < loopLimit19; loop19++) {
         if(PATH0 & 4) {
            scalar2++;
         }
         else {
         }
      }
      int scalar13 = 1;
      if (scalar11 == 0) {
         printf("IS 0!");
      }
      scalar3++;
      if (scalar11 == 0) {
         printf("IS 0!");
      }
      int loop20 = 0;
      int loopLimit20 = (rand()%10)/2 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         func9();
         func10();
         func11();
      }
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         if(PATH0 & 8) {
            scalar12++;
         }
         else {
            int scalar14 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            scalar6++;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            int loop22 = 0;
            int loopLimit22 = (rand()%10)/3 + 1;
            for(; loop22 < loopLimit22; loop22++) {
               func9();
               func10();
               func11();
            }
         }
      }
      int scalar14 = 1;
      if (scalar12 == 0) {
         printf("IS 0!");
      }
      scalar4++;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      int loop23 = 0;
      int loopLimit23 = (rand()%10)/2 + 1;
      for(; loop23 < loopLimit23; loop23++) {
         func5(rng());
         func6();
         func7();
      }
      int loop24 = 0;
      int loopLimit24 = (rand()%10)/2 + 1;
      for(; loop24 < loopLimit24; loop24++) {
         if(PATH0 & 16) {
            scalar13++;
         }
         else {
            int scalar15 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar13++;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            int loop25 = 0;
            int loopLimit25 = (rand()%10)/3 + 1;
            for(; loop25 < loopLimit25; loop25++) {
               func5(rng());
               func6();
               func7();
            }
         }
      }
      int scalar15 = 1;
      int scalar16 = 1;
      int scalar17 = 1;
      scalar4--;
      scalar1--;
      scalar11--;
      int scalar18 = 1;
      int scalar19 = 1;
      int scalar20 = 1;
      scalar5--;
      scalar4--;
      scalar11--;
      func12();
      int scalar21 = 1;
      printf("DELETE!\n");
      int scalar22 = 1;
      printf("DELETE!\n");
      int loop26 = 0;
      int loopLimit26 = (rand()%10)/2 + 1;
      for(; loop26 < loopLimit26; loop26++) {
         if(PATH0 & 32) {
            scalar8++;
         }
         else {
         }
      }
      int scalar23 = 1;
      if (scalar18 == 0) {
         printf("IS 0!");
      }
      scalar12++;
      if (scalar11 == 0) {
         printf("IS 0!");
      }
      int loop27 = 0;
      int loopLimit27 = (rand()%10)/2 + 1;
      for(; loop27 < loopLimit27; loop27++) {
         func9();
         func10();
         func11();
      }
      int loop28 = 0;
      int loopLimit28 = (rand()%10)/2 + 1;
      for(; loop28 < loopLimit28; loop28++) {
         if(PATH0 & 64) {
            scalar1++;
         }
         else {
            int scalar24 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar4++;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            int loop29 = 0;
            int loopLimit29 = (rand()%10)/3 + 1;
            for(; loop29 < loopLimit29; loop29++) {
               func9();
               func10();
               func11();
            }
         }
      }
      int scalar24 = 1;
      int scalar25 = 1;
      int scalar26 = 1;
      scalar23--;
      scalar14--;
      scalar11--;
      func12();
      int scalar27 = 1;
      printf("DELETE!\n");
      int scalar28 = 1;
      printf("DELETE!\n");
      int loop30 = 0;
      int loopLimit30 = (rand()%10)/2 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         if(PATH0 & 128) {
            scalar5++;
         }
         else {
         }
      }
      int scalar29 = 1;
      if (scalar23 == 0) {
         printf("IS 0!");
      }
      scalar7++;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      int loop31 = 0;
      int loopLimit31 = (rand()%10)/2 + 1;
      for(; loop31 < loopLimit31; loop31++) {
         func9();
         func10();
         func11();
      }
      int loop32 = 0;
      int loopLimit32 = (rand()%10)/2 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         if(PATH0 & 256) {
            scalar27++;
         }
         else {
            int scalar30 = 1;
            if (scalar17 == 0) {
               printf("IS 0!");
            }
            scalar7++;
            if (scalar25 == 0) {
               printf("IS 0!");
            }
            int loop33 = 0;
            int loopLimit33 = (rand()%10)/3 + 1;
            for(; loop33 < loopLimit33; loop33++) {
               func9();
               func10();
               func11();
            }
         }
      }
      func4(rng());
      int scalar30 = 1;
      scalar21++;
      int loop38 = 0;
      int loopLimit38 = (rand()%10)/2 + 1;
      for(; loop38 < loopLimit38; loop38++) {
         int scalar31 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar14++;
         if (scalar28 == 0) {
            printf("IS 0!");
         }
         int loop39 = 0;
         int loopLimit39 = (rand()%10)/3 + 1;
         for(; loop39 < loopLimit39; loop39++) {
            func5(rng());
            func6();
            func7();
         }
         int scalar32 = 1;
         int scalar33 = 1;
         int scalar34 = 1;
         scalar20--;
         scalar11--;
         scalar20--;
         func12();
         int scalar35 = 1;
         printf("DELETE!\n");
         int scalar36 = 1;
         printf("DELETE!\n");
         int loop40 = 0;
         int loopLimit40 = (rand()%10)/3 + 1;
         for(; loop40 < loopLimit40; loop40++) {
            if(PATH0 & 512) {
               scalar5++;
            }
            else {
            }
         }
         int scalar37 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar18++;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         int loop41 = 0;
         int loopLimit41 = (rand()%10)/3 + 1;
         for(; loop41 < loopLimit41; loop41++) {
            func9();
            func10();
            func11();
         }
         int loop42 = 0;
         int loopLimit42 = (rand()%10)/3 + 1;
         for(; loop42 < loopLimit42; loop42++) {
            if(PATH0 & 1024) {
               scalar27++;
            }
            else {
               int scalar38 = 1;
               if (scalar22 == 0) {
                  printf("IS 0!");
               }
               scalar30++;
               if (scalar30 == 0) {
                  printf("IS 0!");
               }
               int loop43 = 0;
               int loopLimit43 = (rand()%10)/4 + 1;
               for(; loop43 < loopLimit43; loop43++) {
                  func9();
                  func10();
                  func11();
               }
            }
         }
         int scalar38 = 1;
         int scalar39 = 1;
         int scalar40 = 1;
         scalar30--;
         scalar8--;
         scalar8--;
         int scalar41 = 1;
         printf("DELETE!\n");
         int loop44 = 0;
         int loopLimit44 = (rand()%10)/3 + 1;
         for(; loop44 < loopLimit44; loop44++) {
            if(PATH0 & 2048) {
               scalar24++;
            }
            else {
            }
         }
         int scalar42 = 1;
         printf("DELETE!\n");
         int loop45 = 0;
         int loopLimit45 = (rand()%10)/3 + 1;
         for(; loop45 < loopLimit45; loop45++) {
            if(PATH0 & 4096) {
               scalar6++;
            }
            else {
            }
         }
         func8();
      }
      int scalar31 = 1;
      int scalar32 = 1;
      int scalar33 = 1;
      scalar28--;
      scalar22--;
      scalar18--;
      int scalar34 = 1;
      printf("DELETE!\n");
      int loop46 = 0;
      int loopLimit46 = (rand()%10)/2 + 1;
      for(; loop46 < loopLimit46; loop46++) {
         if(PATH0 & 8192) {
            scalar3++;
         }
         else {
         }
      }
      int scalar35 = 1;
      printf("DELETE!\n");
      int loop47 = 0;
      int loopLimit47 = (rand()%10)/2 + 1;
      for(; loop47 < loopLimit47; loop47++) {
         if(PATH0 & 16384) {
            scalar9++;
         }
         else {
         }
      }
      func8();
   }
}

void func1(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   scalar2++;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   int loop2 = 0;
   int loopLimit2 = (rand()%10)/3 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      func5(rng());
      func6();
      func7();
   }
   int scalar3 = 1;
   int scalar4 = 1;
   int scalar5 = 1;
   scalar2--;
   scalar2--;
   scalar5--;
   func12();
   int scalar6 = 1;
   printf("DELETE!\n");
   int scalar7 = 1;
   printf("DELETE!\n");
   int loop6 = 0;
   int loopLimit6 = (rand()%10)/3 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      if(PATH0 & 1) {
         scalar4++;
      }
      else {
      }
   }
   int scalar8 = 1;
   if (scalar7 == 0) {
      printf("IS 0!");
   }
   scalar4++;
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   int loop7 = 0;
   int loopLimit7 = (rand()%10)/3 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      func9();
      func10();
      func11();
   }
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/3 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      if(PATH0 & 2) {
         scalar7++;
      }
      else {
         int scalar9 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         scalar5++;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         int loop9 = 0;
         int loopLimit9 = (rand()%10)/4 + 1;
         for(; loop9 < loopLimit9; loop9++) {
            func9();
            func10();
            func11();
         }
      }
   }
}

void func5(const unsigned long PATH0) {
   int scalar3 = 1;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   scalar3++;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   int loop3 = 0;
   int loopLimit3 = (rand()%10)/4 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      func9();
      func10();
      func11();
   }
   int scalar4 = 1;
   printf("DELETE!\n");
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/4 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      if(PATH0 & 1) {
         scalar4++;
      }
      else {
      }
   }
}

void func9() {
}

void func10() {
   int scalar4 = 1;
   scalar4++;
   scalar4--;
   printf("DELETE!\n");
}

void func11() {
}

void func6() {
   int scalar3 = 1;
   scalar3++;
   scalar3--;
   int scalar4 = 1;
   int scalar5 = 1;
   int scalar6 = 1;
   scalar6--;
   scalar5--;
   scalar3--;
   func12();
   printf("DELETE!\n");
}

void func12() {
}

void func7() {
   int scalar3 = 1;
   scalar3++;
   int loop5 = 0;
   int loopLimit5 = (rand()%10)/4 + 1;
   for(; loop5 < loopLimit5; loop5++) {
   }
}

void func2(const unsigned long PATH0) {
   int scalar2 = 1;
   scalar2++;
   scalar2--;
   int scalar3 = 1;
   int scalar4 = 1;
   int scalar5 = 1;
   scalar4--;
   scalar4--;
   scalar4--;
   int scalar6 = 1;
   printf("DELETE!\n");
   int loop10 = 0;
   int loopLimit10 = (rand()%10)/3 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      if(PATH0 & 1) {
         scalar6++;
      }
      else {
      }
   }
   int scalar7 = 1;
   printf("DELETE!\n");
   int loop11 = 0;
   int loopLimit11 = (rand()%10)/3 + 1;
   for(; loop11 < loopLimit11; loop11++) {
      if(PATH0 & 2) {
         scalar5++;
      }
      else {
      }
   }
   func8();
   printf("DELETE!\n");
}

void func8() {
   int scalar8 = 1;
   if (scalar8 == 0) {
      printf("IS 0!");
   }
   scalar8++;
   if (scalar8 == 0) {
      printf("IS 0!");
   }
   int loop12 = 0;
   int loopLimit12 = (rand()%10)/3 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      func9();
      func10();
      func11();
   }
   int scalar9 = 1;
   scalar8++;
   int loop13 = 0;
   int loopLimit13 = (rand()%10)/3 + 1;
   for(; loop13 < loopLimit13; loop13++) {
   }
}

void func3(const unsigned long PATH0) {
   int scalar2 = 1;
   scalar2++;
   int loop14 = 0;
   int loopLimit14 = (rand()%10)/3 + 1;
   for(; loop14 < loopLimit14; loop14++) {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar3++;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      int loop15 = 0;
      int loopLimit15 = (rand()%10)/4 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         func9();
         func10();
         func11();
      }
      int scalar4 = 1;
      printf("DELETE!\n");
      int loop16 = 0;
      int loopLimit16 = (rand()%10)/4 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         if(PATH0 & 1) {
            scalar4++;
         }
         else {
         }
      }
      int scalar5 = 1;
      int scalar6 = 1;
      int scalar7 = 1;
      scalar3--;
      scalar4--;
      scalar4--;
      func12();
   }
   int scalar3 = 1;
   int scalar4 = 1;
   int scalar5 = 1;
   scalar5--;
   scalar4--;
   scalar3--;
   func12();
}

void func4(const unsigned long PATH0) {
   int scalar30 = 1;
   if (scalar30 == 0) {
      printf("IS 0!");
   }
   scalar30++;
   if (scalar30 == 0) {
      printf("IS 0!");
   }
   int loop34 = 0;
   int loopLimit34 = (rand()%10)/2 + 1;
   for(; loop34 < loopLimit34; loop34++) {
      func5(rng());
      func6();
      func7();
   }
   int scalar31 = 1;
   scalar30++;
   int loop35 = 0;
   int loopLimit35 = (rand()%10)/2 + 1;
   for(; loop35 < loopLimit35; loop35++) {
      int scalar32 = 1;
      if (scalar31 == 0) {
         printf("IS 0!");
      }
      scalar32++;
      if (scalar30 == 0) {
         printf("IS 0!");
      }
      int loop36 = 0;
      int loopLimit36 = (rand()%10)/3 + 1;
      for(; loop36 < loopLimit36; loop36++) {
         func9();
         func10();
         func11();
      }
      int scalar33 = 1;
      printf("DELETE!\n");
      int loop37 = 0;
      int loopLimit37 = (rand()%10)/3 + 1;
      for(; loop37 < loopLimit37; loop37++) {
         if(PATH0 & 1) {
            scalar31++;
         }
         else {
         }
      }
      int scalar34 = 1;
      int scalar35 = 1;
      int scalar36 = 1;
      scalar36--;
      scalar33--;
      scalar30--;
      func12();
   }
   int scalar32 = 1;
   int scalar33 = 1;
   int scalar34 = 1;
   scalar32--;
   scalar31--;
   scalar31--;
   func12();
}

