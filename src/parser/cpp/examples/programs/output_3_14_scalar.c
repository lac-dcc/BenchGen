#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func7();
void func8();
void func9();
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);

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
      func1(rng());
      if(PATH0 & 1) {
         func7();
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop10 = 0;
         int loopLimit10 = (rand()%10)/2 + 1;
         for(; loop10 < loopLimit10; loop10++) {
            if(PATH0 & 2) {
            }
            else {
            }
         }
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/2 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            func9();
         }
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func5(rng());
      if(PATH0 & 4) {
         func4(rng());
         if(PATH0 & 8) {
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func8();
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop13 = 0;
         int loopLimit13 = (rand()%10)/2 + 1;
         for(; loop13 < loopLimit13; loop13++) {
            if(PATH0 & 16) {
               func7();
            }
            else {
               if(PATH0 & 32) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func8();
            }
         }
         int loop14 = 0;
         int loopLimit14 = (rand()%10)/2 + 1;
         for(; loop14 < loopLimit14; loop14++) {
            func6(rng());
         }
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func2(rng());
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop25 = 0;
      int loopLimit25 = (rand()%10)/2 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         if(PATH0 & 64) {
            func4(rng());
            if(PATH0 & 128) {
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func8();
         }
         else {
            if(PATH0 & 256) {
               func7();
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop26 = 0;
               int loopLimit26 = (rand()%10)/3 + 1;
               for(; loop26 < loopLimit26; loop26++) {
                  if(PATH0 & 512) {
                  }
                  else {
                  }
               }
               int loop27 = 0;
               int loopLimit27 = (rand()%10)/3 + 1;
               for(; loop27 < loopLimit27; loop27++) {
                  func9();
               }
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func5(rng());
         }
      }
      int loop28 = 0;
      int loopLimit28 = (rand()%10)/2 + 1;
      for(; loop28 < loopLimit28; loop28++) {
         func3(rng());
      }
      if(PATH0 & 1024) {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop31 = 0;
         int loopLimit31 = (rand()%10)/2 + 1;
         for(; loop31 < loopLimit31; loop31++) {
            if(PATH0 & 2048) {
               func7();
            }
            else {
               if(PATH0 & 4096) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func8();
            }
         }
         int loop32 = 0;
         int loopLimit32 = (rand()%10)/2 + 1;
         for(; loop32 < loopLimit32; loop32++) {
            func6(rng());
         }
      }
      else {
         int loop33 = 0;
         int loopLimit33 = (rand()%10)/2 + 1;
         for(; loop33 < loopLimit33; loop33++) {
            int scalar2 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop34 = 0;
            int loopLimit34 = (rand()%10)/3 + 1;
            for(; loop34 < loopLimit34; loop34++) {
               if(PATH0 & 8192) {
                  func7();
               }
               else {
                  if(PATH0 & 16384) {
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func8();
               }
            }
            int loop35 = 0;
            int loopLimit35 = (rand()%10)/3 + 1;
            for(; loop35 < loopLimit35; loop35++) {
               func6(rng());
            }
         }
      }
      int scalar2 = 1;
      int scalar3 = 1;
      printf("DELETE!\n");
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func4(rng());
      if(PATH0 & 32768) {
      }
      else {
         int scalar4 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func8();
      if(PATH0 & 65536) {
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop36 = 0;
         int loopLimit36 = (rand()%10)/2 + 1;
         for(; loop36 < loopLimit36; loop36++) {
            if(PATH0 & 131072) {
               func7();
            }
            else {
               if(PATH0 & 262144) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func8();
            }
         }
         int loop37 = 0;
         int loopLimit37 = (rand()%10)/2 + 1;
         for(; loop37 < loopLimit37; loop37++) {
            func6(rng());
         }
      }
      else {
         if(PATH0 & 524288) {
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop38 = 0;
            int loopLimit38 = (rand()%10)/2 + 1;
            for(; loop38 < loopLimit38; loop38++) {
               if(PATH0 & 1048576) {
               }
               else {
               }
            }
            int loop39 = 0;
            int loopLimit39 = (rand()%10)/2 + 1;
            for(; loop39 < loopLimit39; loop39++) {
               func9();
            }
         }
         else {
            int loop40 = 0;
            int loopLimit40 = (rand()%10)/2 + 1;
            for(; loop40 < loopLimit40; loop40++) {
               int scalar4 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop41 = 0;
               int loopLimit41 = (rand()%10)/3 + 1;
               for(; loop41 < loopLimit41; loop41++) {
                  if(PATH0 & 2097152) {
                  }
                  else {
                  }
               }
               int loop42 = 0;
               int loopLimit42 = (rand()%10)/3 + 1;
               for(; loop42 < loopLimit42; loop42++) {
                  func9();
               }
            }
         }
         int scalar4 = 1;
         int scalar5 = 1;
         printf("DELETE!\n");
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func7();
         if(PATH0 & 4194304) {
            int scalar6 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop43 = 0;
            int loopLimit43 = (rand()%10)/2 + 1;
            for(; loop43 < loopLimit43; loop43++) {
               if(PATH0 & 8388608) {
               }
               else {
               }
            }
            int loop44 = 0;
            int loopLimit44 = (rand()%10)/2 + 1;
            for(; loop44 < loopLimit44; loop44++) {
               func9();
            }
         }
         else {
            if(PATH0 & 16777216) {
            }
            else {
               int loop45 = 0;
               int loopLimit45 = (rand()%10)/2 + 1;
               for(; loop45 < loopLimit45; loop45++) {
               }
            }
            int scalar6 = 1;
            int scalar7 = 1;
            printf("DELETE!\n");
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            if(PATH0 & 33554432) {
            }
            else {
            }
         }
      }
   }
}

void func1(const unsigned long PATH0) {
   int scalar1 = 1;
   func4(rng());
   if(PATH0 & 1) {
   }
   else {
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      printf("DELETE!\n");
   }
   func8();
   scalar1++;
   scalar1++;
   if(PATH0 & 2) {
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/2 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         if(PATH0 & 4) {
         }
         else {
         }
      }
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         func9();
      }
   }
   else {
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop5 = 0;
         int loopLimit5 = (rand()%10)/3 + 1;
         for(; loop5 < loopLimit5; loop5++) {
            if(PATH0 & 8) {
            }
            else {
            }
         }
         int loop6 = 0;
         int loopLimit6 = (rand()%10)/3 + 1;
         for(; loop6 < loopLimit6; loop6++) {
            func9();
         }
      }
   }
   int scalar2 = 1;
   int scalar3 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func7();
   if(PATH0 & 16) {
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/2 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         if(PATH0 & 32) {
         }
         else {
         }
      }
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         func9();
      }
   }
   else {
      if(PATH0 & 64) {
      }
      else {
         int loop9 = 0;
         int loopLimit9 = (rand()%10)/2 + 1;
         for(; loop9 < loopLimit9; loop9++) {
         }
      }
      int scalar4 = 1;
      int scalar5 = 1;
      printf("DELETE!\n");
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 128) {
      }
      else {
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0) {
   int scalar2 = 1;
   func7();
   scalar2++;
   scalar2++;
   if(PATH0 & 1) {
   }
   else {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
      }
   }
   int scalar3 = 1;
   int scalar4 = 1;
   printf("DELETE!\n");
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
   printf("DELETE!\n");
}

void func7() {
   int scalar3 = 1;
   scalar3++;
   scalar3++;
   printf("DELETE!\n");
}

void func8() {
}

void func9() {
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
      }
   }
   int scalar1 = 1;
   int scalar2 = 1;
   printf("DELETE!\n");
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
}

void func6(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop15 = 0;
   int loopLimit15 = (rand()%10)/3 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      if(PATH0 & 1) {
      }
      else {
      }
   }
   int loop16 = 0;
   int loopLimit16 = (rand()%10)/3 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      func9();
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop17 = 0;
      int loopLimit17 = (rand()%10)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
      int loop18 = 0;
      int loopLimit18 = (rand()%10)/2 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         func9();
      }
   }
   else {
      int loop19 = 0;
      int loopLimit19 = (rand()%10)/2 + 1;
      for(; loop19 < loopLimit19; loop19++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop20 = 0;
         int loopLimit20 = (rand()%10)/3 + 1;
         for(; loop20 < loopLimit20; loop20++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop21 = 0;
         int loopLimit21 = (rand()%10)/3 + 1;
         for(; loop21 < loopLimit21; loop21++) {
            func9();
         }
      }
   }
   int scalar1 = 1;
   int scalar2 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func7();
   if(PATH0 & 8) {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop22 = 0;
      int loopLimit22 = (rand()%10)/2 + 1;
      for(; loop22 < loopLimit22; loop22++) {
         if(PATH0 & 16) {
         }
         else {
         }
      }
      int loop23 = 0;
      int loopLimit23 = (rand()%10)/2 + 1;
      for(; loop23 < loopLimit23; loop23++) {
         func9();
      }
   }
   else {
      if(PATH0 & 32) {
      }
      else {
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
         }
      }
      int scalar3 = 1;
      int scalar4 = 1;
      printf("DELETE!\n");
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 64) {
      }
      else {
      }
   }
}

void func3(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop29 = 0;
   int loopLimit29 = (rand()%10)/3 + 1;
   for(; loop29 < loopLimit29; loop29++) {
      if(PATH0 & 1) {
         func7();
      }
      else {
         if(PATH0 & 2) {
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func8();
      }
   }
   int loop30 = 0;
   int loopLimit30 = (rand()%10)/3 + 1;
   for(; loop30 < loopLimit30; loop30++) {
      func6(rng());
   }
}

