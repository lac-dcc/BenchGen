#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func6(const unsigned long PATH0);
void func9();
void func7(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func10();
void func8(const unsigned long PATH0);
void func11();
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   int scalar1 = 1;
   int scalar2 = 1;
   if(rng() & 1) {
      int loop0 = 0;
      int loopLimit0 = (rand()%10)/1 + 1;;
      for(; loop0 < loopLimit0; loop0++) {
         if(rng() & 1) {
            func6(rng());
         }
         else {
            if(rng() & 1) {
               func9();
            }
            else {
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func7(rng());
         }
      }
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/1 + 1;;
      for(; loop3 < loopLimit3; loop3++) {
         func3(rng());
      }
   }
   else {
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/1 + 1;;
      for(; loop8 < loopLimit8; loop8++) {
         int loop9 = 0;
         int loopLimit9 = (rand()%10)/2 + 1;;
         for(; loop9 < loopLimit9; loop9++) {
            if(rng() & 1) {
               func6(rng());
            }
            else {
               if(rng() & 1) {
                  func9();
               }
               else {
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func7(rng());
            }
         }
         int loop10 = 0;
         int loopLimit10 = (rand()%10)/2 + 1;;
         for(; loop10 < loopLimit10; loop10++) {
            func3(rng());
         }
      }
   }
   if(rng() & 1) {
      int loop11 = 0;
      int loopLimit11 = (rand()%10)/1 + 1;;
      for(; loop11 < loopLimit11; loop11++) {
         if(rng() & 1) {
            func9();
         }
         else {
            if(rng() & 1) {
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func10();
         }
      }
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/1 + 1;;
      for(; loop12 < loopLimit12; loop12++) {
         func8(rng());
      }
   }
   else {
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/1 + 1;;
      for(; loop13 < loopLimit13; loop13++) {
         int loop14 = 0;
         int loopLimit14 = (rand()%10)/2 + 1;;
         for(; loop14 < loopLimit14; loop14++) {
            if(rng() & 1) {
               func9();
            }
            else {
               if(rng() & 1) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func10();
            }
         }
         int loop15 = 0;
         int loopLimit15 = (rand()%10)/2 + 1;;
         for(; loop15 < loopLimit15; loop15++) {
            func8(rng());
         }
      }
   }
   if(rng() & 1) {
      int loop16 = 0;
      int loopLimit16 = (rand()%10)/1 + 1;;
      for(; loop16 < loopLimit16; loop16++) {
         if(rng() & 1) {
         }
         else {
         }
      }
      int loop17 = 0;
      int loopLimit17 = (rand()%10)/1 + 1;;
      for(; loop17 < loopLimit17; loop17++) {
         func11();
      }
   }
   else {
      int loop18 = 0;
      int loopLimit18 = (rand()%10)/1 + 1;;
      for(; loop18 < loopLimit18; loop18++) {
         int loop19 = 0;
         int loopLimit19 = (rand()%10)/2 + 1;;
         for(; loop19 < loopLimit19; loop19++) {
            if(rng() & 1) {
            }
            else {
            }
         }
         int loop20 = 0;
         int loopLimit20 = (rand()%10)/2 + 1;;
         for(; loop20 < loopLimit20; loop20++) {
            func11();
         }
      }
   }
   if(rng() & 1) {
   }
   else {
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/1 + 1;;
      for(; loop21 < loopLimit21; loop21++) {
      }
   }
   int loop22 = 0;
   int loopLimit22 = (rand()%10)/1 + 1;;
   for(; loop22 < loopLimit22; loop22++) {
      if(rng() & 1) {
         func4(rng());
      }
      else {
         if(rng() & 1) {
            func6(rng());
         }
         else {
            int scalar3 = 1;
            if (scalar0 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func5(rng());
      }
   }
   int loop35 = 0;
   int loopLimit35 = (rand()%10)/1 + 1;;
   for(; loop35 < loopLimit35; loop35++) {
      func0(rng());
   }
   if(rng() & 1) {
      func4(rng());
   }
   else {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar0--;
      printf("DELETE!\n");
   }
   func1(rng());
   func2(rng());
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func6(const unsigned long PATH0) {
   int scalar3 = 1;
   func9();
   scalar3++;
   scalar3++;
   if(PATH0 & 1) {
   }
   else {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;;
      for(; loop1 < loopLimit1; loop1++) {
      }
   }
   printf("DELETE!\n");
}

void func9() {
   int scalar4 = 1;
   scalar4++;
   scalar4++;
   printf("DELETE!\n");
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/2 + 1;;
      for(; loop2 < loopLimit2; loop2++) {
      }
   }
}

void func3(const unsigned long PATH0) {
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/2 + 1;;
   for(; loop4 < loopLimit4; loop4++) {
      if(PATH0 & 1) {
         func9();
      }
      else {
         if(PATH0 & 2) {
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func10();
      }
   }
   int loop5 = 0;
   int loopLimit5 = (rand()%10)/2 + 1;;
   for(; loop5 < loopLimit5; loop5++) {
      func8(rng());
   }
}

void func10() {
}

void func8(const unsigned long PATH0) {
   int loop6 = 0;
   int loopLimit6 = (rand()%10)/3 + 1;;
   for(; loop6 < loopLimit6; loop6++) {
      if(PATH0 & 1) {
      }
      else {
      }
   }
   int loop7 = 0;
   int loopLimit7 = (rand()%10)/3 + 1;;
   for(; loop7 < loopLimit7; loop7++) {
      func11();
   }
}

void func11() {
}

void func4(const unsigned long PATH0) {
   int scalar3 = 1;
   func6(rng());
   scalar3++;
   scalar3++;
   if(PATH0 & 1) {
      int loop23 = 0;
      int loopLimit23 = (rand()%10)/2 + 1;;
      for(; loop23 < loopLimit23; loop23++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
      int loop24 = 0;
      int loopLimit24 = (rand()%10)/2 + 1;;
      for(; loop24 < loopLimit24; loop24++) {
         func11();
      }
   }
   else {
      int loop25 = 0;
      int loopLimit25 = (rand()%10)/2 + 1;;
      for(; loop25 < loopLimit25; loop25++) {
         int loop26 = 0;
         int loopLimit26 = (rand()%10)/3 + 1;;
         for(; loop26 < loopLimit26; loop26++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop27 = 0;
         int loopLimit27 = (rand()%10)/3 + 1;;
         for(; loop27 < loopLimit27; loop27++) {
            func11();
         }
      }
   }
   if(PATH0 & 8) {
   }
   else {
      int loop28 = 0;
      int loopLimit28 = (rand()%10)/2 + 1;;
      for(; loop28 < loopLimit28; loop28++) {
      }
   }
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop29 = 0;
      int loopLimit29 = (rand()%10)/2 + 1;;
      for(; loop29 < loopLimit29; loop29++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
      int loop30 = 0;
      int loopLimit30 = (rand()%10)/2 + 1;;
      for(; loop30 < loopLimit30; loop30++) {
         func11();
      }
   }
   else {
      int loop31 = 0;
      int loopLimit31 = (rand()%10)/2 + 1;;
      for(; loop31 < loopLimit31; loop31++) {
         int loop32 = 0;
         int loopLimit32 = (rand()%10)/3 + 1;;
         for(; loop32 < loopLimit32; loop32++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop33 = 0;
         int loopLimit33 = (rand()%10)/3 + 1;;
         for(; loop33 < loopLimit33; loop33++) {
            func11();
         }
      }
   }
   if(PATH0 & 8) {
   }
   else {
      int loop34 = 0;
      int loopLimit34 = (rand()%10)/2 + 1;;
      for(; loop34 < loopLimit34; loop34++) {
      }
   }
}

void func0(const unsigned long PATH0) {
   int loop36 = 0;
   int loopLimit36 = (rand()%10)/2 + 1;;
   for(; loop36 < loopLimit36; loop36++) {
      if(PATH0 & 1) {
         func6(rng());
      }
      else {
         if(PATH0 & 2) {
            func9();
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func7(rng());
      }
   }
   int loop37 = 0;
   int loopLimit37 = (rand()%10)/2 + 1;;
   for(; loop37 < loopLimit37; loop37++) {
      func3(rng());
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop38 = 0;
      int loopLimit38 = (rand()%10)/1 + 1;;
      for(; loop38 < loopLimit38; loop38++) {
         if(PATH0 & 2) {
            func9();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func10();
         }
      }
      int loop39 = 0;
      int loopLimit39 = (rand()%10)/1 + 1;;
      for(; loop39 < loopLimit39; loop39++) {
         func8(rng());
      }
   }
   else {
      int loop40 = 0;
      int loopLimit40 = (rand()%10)/1 + 1;;
      for(; loop40 < loopLimit40; loop40++) {
         int loop41 = 0;
         int loopLimit41 = (rand()%10)/2 + 1;;
         for(; loop41 < loopLimit41; loop41++) {
            if(PATH0 & 8) {
               func9();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func10();
            }
         }
         int loop42 = 0;
         int loopLimit42 = (rand()%10)/2 + 1;;
         for(; loop42 < loopLimit42; loop42++) {
            func8(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop43 = 0;
      int loopLimit43 = (rand()%10)/1 + 1;;
      for(; loop43 < loopLimit43; loop43++) {
         if(PATH0 & 64) {
         }
         else {
         }
      }
      int loop44 = 0;
      int loopLimit44 = (rand()%10)/1 + 1;;
      for(; loop44 < loopLimit44; loop44++) {
         func11();
      }
   }
   else {
      int loop45 = 0;
      int loopLimit45 = (rand()%10)/1 + 1;;
      for(; loop45 < loopLimit45; loop45++) {
         int loop46 = 0;
         int loopLimit46 = (rand()%10)/2 + 1;;
         for(; loop46 < loopLimit46; loop46++) {
            if(PATH0 & 128) {
            }
            else {
            }
         }
         int loop47 = 0;
         int loopLimit47 = (rand()%10)/2 + 1;;
         for(; loop47 < loopLimit47; loop47++) {
            func11();
         }
      }
   }
   if(PATH0 & 256) {
   }
   else {
      int loop48 = 0;
      int loopLimit48 = (rand()%10)/1 + 1;;
      for(; loop48 < loopLimit48; loop48++) {
      }
   }
}

void func2(const unsigned long PATH0) {
   int scalar3 = 1;
   func4(rng());
   scalar3++;
   scalar3++;
   if(PATH0 & 1) {
      int loop49 = 0;
      int loopLimit49 = (rand()%10)/1 + 1;;
      for(; loop49 < loopLimit49; loop49++) {
         if(PATH0 & 2) {
            func9();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func10();
         }
      }
      int loop50 = 0;
      int loopLimit50 = (rand()%10)/1 + 1;;
      for(; loop50 < loopLimit50; loop50++) {
         func8(rng());
      }
   }
   else {
      int loop51 = 0;
      int loopLimit51 = (rand()%10)/1 + 1;;
      for(; loop51 < loopLimit51; loop51++) {
         int loop52 = 0;
         int loopLimit52 = (rand()%10)/2 + 1;;
         for(; loop52 < loopLimit52; loop52++) {
            if(PATH0 & 8) {
               func9();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func10();
            }
         }
         int loop53 = 0;
         int loopLimit53 = (rand()%10)/2 + 1;;
         for(; loop53 < loopLimit53; loop53++) {
            func8(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop54 = 0;
      int loopLimit54 = (rand()%10)/1 + 1;;
      for(; loop54 < loopLimit54; loop54++) {
         if(PATH0 & 64) {
         }
         else {
         }
      }
      int loop55 = 0;
      int loopLimit55 = (rand()%10)/1 + 1;;
      for(; loop55 < loopLimit55; loop55++) {
         func11();
      }
   }
   else {
      int loop56 = 0;
      int loopLimit56 = (rand()%10)/1 + 1;;
      for(; loop56 < loopLimit56; loop56++) {
         int loop57 = 0;
         int loopLimit57 = (rand()%10)/2 + 1;;
         for(; loop57 < loopLimit57; loop57++) {
            if(PATH0 & 128) {
            }
            else {
            }
         }
         int loop58 = 0;
         int loopLimit58 = (rand()%10)/2 + 1;;
         for(; loop58 < loopLimit58; loop58++) {
            func11();
         }
      }
   }
   if(PATH0 & 256) {
   }
   else {
      int loop59 = 0;
      int loopLimit59 = (rand()%10)/1 + 1;;
      for(; loop59 < loopLimit59; loop59++) {
      }
   }
   printf("DELETE!\n");
}

