#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func6(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func12();
void func13();
void func7(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func10(const unsigned long PATH0);
void func8(const unsigned long PATH0);
void func14();
void func11(const unsigned long PATH0);
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
               func9(rng());
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar0--;
               printf("DELETE!\n");
            }
            func7(rng());
         }
      }
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/1 + 1;;
      for(; loop14 < loopLimit14; loop14++) {
         func3(rng());
      }
   }
   else {
      int loop22 = 0;
      int loopLimit22 = (rand()%10)/1 + 1;;
      for(; loop22 < loopLimit22; loop22++) {
         int loop23 = 0;
         int loopLimit23 = (rand()%10)/2 + 1;;
         for(; loop23 < loopLimit23; loop23++) {
            if(rng() & 1) {
               func6(rng());
            }
            else {
               if(rng() & 1) {
                  func9(rng());
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func7(rng());
            }
         }
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/2 + 1;;
         for(; loop24 < loopLimit24; loop24++) {
            func3(rng());
         }
      }
   }
   if(rng() & 1) {
      int loop25 = 0;
      int loopLimit25 = (rand()%10)/1 + 1;;
      for(; loop25 < loopLimit25; loop25++) {
         if(rng() & 1) {
            func9(rng());
         }
         else {
            if(rng() & 1) {
               func12();
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func10(rng());
         }
      }
      int loop26 = 0;
      int loopLimit26 = (rand()%10)/1 + 1;;
      for(; loop26 < loopLimit26; loop26++) {
         func8(rng());
      }
   }
   else {
      int loop27 = 0;
      int loopLimit27 = (rand()%10)/1 + 1;;
      for(; loop27 < loopLimit27; loop27++) {
         int loop28 = 0;
         int loopLimit28 = (rand()%10)/2 + 1;;
         for(; loop28 < loopLimit28; loop28++) {
            if(rng() & 1) {
               func9(rng());
            }
            else {
               if(rng() & 1) {
                  func12();
               }
               else {
                  int scalar3 = 1;
                  if (scalar0 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func10(rng());
            }
         }
         int loop29 = 0;
         int loopLimit29 = (rand()%10)/2 + 1;;
         for(; loop29 < loopLimit29; loop29++) {
            func8(rng());
         }
      }
   }
   if(rng() & 1) {
      int loop30 = 0;
      int loopLimit30 = (rand()%10)/1 + 1;;
      for(; loop30 < loopLimit30; loop30++) {
         if(rng() & 1) {
            func12();
         }
         else {
            if(rng() & 1) {
            }
            else {
               int scalar3 = 1;
               if (scalar0 == 0) {
                  printf("IS 0!");
               }
               scalar0--;
               printf("DELETE!\n");
            }
            func14();
         }
      }
      int loop31 = 0;
      int loopLimit31 = (rand()%10)/1 + 1;;
      for(; loop31 < loopLimit31; loop31++) {
         func11(rng());
      }
   }
   else {
      int loop32 = 0;
      int loopLimit32 = (rand()%10)/1 + 1;;
      for(; loop32 < loopLimit32; loop32++) {
         int loop33 = 0;
         int loopLimit33 = (rand()%10)/2 + 1;;
         for(; loop33 < loopLimit33; loop33++) {
            if(rng() & 1) {
               func12();
            }
            else {
               if(rng() & 1) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar0--;
                  printf("DELETE!\n");
               }
               func14();
            }
         }
         int loop34 = 0;
         int loopLimit34 = (rand()%10)/2 + 1;;
         for(; loop34 < loopLimit34; loop34++) {
            func11(rng());
         }
      }
   }
   if(rng() & 1) {
      int loop35 = 0;
      int loopLimit35 = (rand()%10)/1 + 1;;
      for(; loop35 < loopLimit35; loop35++) {
         if(rng() & 1) {
         }
         else {
         }
      }
      int loop36 = 0;
      int loopLimit36 = (rand()%10)/1 + 1;;
      for(; loop36 < loopLimit36; loop36++) {
         func13();
      }
   }
   else {
      int loop37 = 0;
      int loopLimit37 = (rand()%10)/1 + 1;;
      for(; loop37 < loopLimit37; loop37++) {
         int loop38 = 0;
         int loopLimit38 = (rand()%10)/2 + 1;;
         for(; loop38 < loopLimit38; loop38++) {
            if(rng() & 1) {
            }
            else {
            }
         }
         int loop39 = 0;
         int loopLimit39 = (rand()%10)/2 + 1;;
         for(; loop39 < loopLimit39; loop39++) {
            func13();
         }
      }
   }
   if(rng() & 1) {
   }
   else {
      int loop40 = 0;
      int loopLimit40 = (rand()%10)/1 + 1;;
      for(; loop40 < loopLimit40; loop40++) {
      }
   }
   int loop41 = 0;
   int loopLimit41 = (rand()%10)/1 + 1;;
   for(; loop41 < loopLimit41; loop41++) {
      if(rng() & 1) {
         func4(rng());
      }
      else {
         if(rng() & 1) {
            func6(rng());
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func5(rng());
      }
   }
   int loop64 = 0;
   int loopLimit64 = (rand()%10)/1 + 1;;
   for(; loop64 < loopLimit64; loop64++) {
      func0(rng());
   }
   if(rng() & 1) {
      func4(rng());
   }
   else {
      int scalar3 = 1;
      if (scalar1 == 0) {
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
   func9(rng());
   scalar3++;
   scalar3++;
   if(PATH0 & 1) {
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/2 + 1;;
      for(; loop2 < loopLimit2; loop2++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/2 + 1;;
      for(; loop3 < loopLimit3; loop3++) {
         func13();
      }
   }
   else {
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;;
      for(; loop4 < loopLimit4; loop4++) {
         int loop5 = 0;
         int loopLimit5 = (rand()%10)/3 + 1;;
         for(; loop5 < loopLimit5; loop5++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop6 = 0;
         int loopLimit6 = (rand()%10)/3 + 1;;
         for(; loop6 < loopLimit6; loop6++) {
            func13();
         }
      }
   }
   if(PATH0 & 8) {
   }
   else {
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/2 + 1;;
      for(; loop7 < loopLimit7; loop7++) {
      }
   }
   printf("DELETE!\n");
}

void func9(const unsigned long PATH0) {
   int scalar4 = 1;
   func12();
   scalar4++;
   scalar4++;
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

void func12() {
   int scalar5 = 1;
   scalar5++;
   scalar5++;
   printf("DELETE!\n");
}

void func13() {
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/2 + 1;;
      for(; loop8 < loopLimit8; loop8++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
      int loop9 = 0;
      int loopLimit9 = (rand()%10)/2 + 1;;
      for(; loop9 < loopLimit9; loop9++) {
         func13();
      }
   }
   else {
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/2 + 1;;
      for(; loop10 < loopLimit10; loop10++) {
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/3 + 1;;
         for(; loop11 < loopLimit11; loop11++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop12 = 0;
         int loopLimit12 = (rand()%10)/3 + 1;;
         for(; loop12 < loopLimit12; loop12++) {
            func13();
         }
      }
   }
   if(PATH0 & 8) {
   }
   else {
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/2 + 1;;
      for(; loop13 < loopLimit13; loop13++) {
      }
   }
}

void func3(const unsigned long PATH0) {
   int loop15 = 0;
   int loopLimit15 = (rand()%10)/2 + 1;;
   for(; loop15 < loopLimit15; loop15++) {
      if(PATH0 & 1) {
         func9(rng());
      }
      else {
         if(PATH0 & 2) {
            func12();
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func10(rng());
      }
   }
   int loop17 = 0;
   int loopLimit17 = (rand()%10)/2 + 1;;
   for(; loop17 < loopLimit17; loop17++) {
      func8(rng());
   }
}

void func10(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop16 = 0;
      int loopLimit16 = (rand()%10)/3 + 1;;
      for(; loop16 < loopLimit16; loop16++) {
      }
   }
}

void func8(const unsigned long PATH0) {
   int loop18 = 0;
   int loopLimit18 = (rand()%10)/3 + 1;;
   for(; loop18 < loopLimit18; loop18++) {
      if(PATH0 & 1) {
         func12();
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
         func14();
      }
   }
   int loop19 = 0;
   int loopLimit19 = (rand()%10)/3 + 1;;
   for(; loop19 < loopLimit19; loop19++) {
      func11(rng());
   }
}

void func14() {
}

void func11(const unsigned long PATH0) {
   int loop20 = 0;
   int loopLimit20 = (rand()%10)/4 + 1;;
   for(; loop20 < loopLimit20; loop20++) {
      if(PATH0 & 1) {
      }
      else {
      }
   }
   int loop21 = 0;
   int loopLimit21 = (rand()%10)/4 + 1;;
   for(; loop21 < loopLimit21; loop21++) {
      func13();
   }
}

void func4(const unsigned long PATH0) {
   int scalar3 = 1;
   func6(rng());
   scalar3++;
   scalar3++;
   if(PATH0 & 1) {
      int loop42 = 0;
      int loopLimit42 = (rand()%10)/2 + 1;;
      for(; loop42 < loopLimit42; loop42++) {
         if(PATH0 & 2) {
            func12();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func14();
         }
      }
      int loop43 = 0;
      int loopLimit43 = (rand()%10)/2 + 1;;
      for(; loop43 < loopLimit43; loop43++) {
         func11(rng());
      }
   }
   else {
      int loop44 = 0;
      int loopLimit44 = (rand()%10)/2 + 1;;
      for(; loop44 < loopLimit44; loop44++) {
         int loop45 = 0;
         int loopLimit45 = (rand()%10)/3 + 1;;
         for(; loop45 < loopLimit45; loop45++) {
            if(PATH0 & 8) {
               func12();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func14();
            }
         }
         int loop46 = 0;
         int loopLimit46 = (rand()%10)/3 + 1;;
         for(; loop46 < loopLimit46; loop46++) {
            func11(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop47 = 0;
      int loopLimit47 = (rand()%10)/2 + 1;;
      for(; loop47 < loopLimit47; loop47++) {
         if(PATH0 & 64) {
         }
         else {
         }
      }
      int loop48 = 0;
      int loopLimit48 = (rand()%10)/2 + 1;;
      for(; loop48 < loopLimit48; loop48++) {
         func13();
      }
   }
   else {
      int loop49 = 0;
      int loopLimit49 = (rand()%10)/2 + 1;;
      for(; loop49 < loopLimit49; loop49++) {
         int loop50 = 0;
         int loopLimit50 = (rand()%10)/3 + 1;;
         for(; loop50 < loopLimit50; loop50++) {
            if(PATH0 & 128) {
            }
            else {
            }
         }
         int loop51 = 0;
         int loopLimit51 = (rand()%10)/3 + 1;;
         for(; loop51 < loopLimit51; loop51++) {
            func13();
         }
      }
   }
   if(PATH0 & 256) {
   }
   else {
      int loop52 = 0;
      int loopLimit52 = (rand()%10)/2 + 1;;
      for(; loop52 < loopLimit52; loop52++) {
      }
   }
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop53 = 0;
      int loopLimit53 = (rand()%10)/2 + 1;;
      for(; loop53 < loopLimit53; loop53++) {
         if(PATH0 & 2) {
            func12();
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
            func14();
         }
      }
      int loop54 = 0;
      int loopLimit54 = (rand()%10)/2 + 1;;
      for(; loop54 < loopLimit54; loop54++) {
         func11(rng());
      }
   }
   else {
      int loop55 = 0;
      int loopLimit55 = (rand()%10)/2 + 1;;
      for(; loop55 < loopLimit55; loop55++) {
         int loop56 = 0;
         int loopLimit56 = (rand()%10)/3 + 1;;
         for(; loop56 < loopLimit56; loop56++) {
            if(PATH0 & 8) {
               func12();
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
               func14();
            }
         }
         int loop57 = 0;
         int loopLimit57 = (rand()%10)/3 + 1;;
         for(; loop57 < loopLimit57; loop57++) {
            func11(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop58 = 0;
      int loopLimit58 = (rand()%10)/2 + 1;;
      for(; loop58 < loopLimit58; loop58++) {
         if(PATH0 & 64) {
         }
         else {
         }
      }
      int loop59 = 0;
      int loopLimit59 = (rand()%10)/2 + 1;;
      for(; loop59 < loopLimit59; loop59++) {
         func13();
      }
   }
   else {
      int loop60 = 0;
      int loopLimit60 = (rand()%10)/2 + 1;;
      for(; loop60 < loopLimit60; loop60++) {
         int loop61 = 0;
         int loopLimit61 = (rand()%10)/3 + 1;;
         for(; loop61 < loopLimit61; loop61++) {
            if(PATH0 & 128) {
            }
            else {
            }
         }
         int loop62 = 0;
         int loopLimit62 = (rand()%10)/3 + 1;;
         for(; loop62 < loopLimit62; loop62++) {
            func13();
         }
      }
   }
   if(PATH0 & 256) {
   }
   else {
      int loop63 = 0;
      int loopLimit63 = (rand()%10)/2 + 1;;
      for(; loop63 < loopLimit63; loop63++) {
      }
   }
}

void func0(const unsigned long PATH0) {
   int loop65 = 0;
   int loopLimit65 = (rand()%10)/2 + 1;;
   for(; loop65 < loopLimit65; loop65++) {
      if(PATH0 & 1) {
         func6(rng());
      }
      else {
         if(PATH0 & 2) {
            func9(rng());
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
   int loop66 = 0;
   int loopLimit66 = (rand()%10)/2 + 1;;
   for(; loop66 < loopLimit66; loop66++) {
      func3(rng());
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop67 = 0;
      int loopLimit67 = (rand()%10)/1 + 1;;
      for(; loop67 < loopLimit67; loop67++) {
         if(PATH0 & 2) {
            func9(rng());
         }
         else {
            if(PATH0 & 4) {
               func12();
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func10(rng());
         }
      }
      int loop68 = 0;
      int loopLimit68 = (rand()%10)/1 + 1;;
      for(; loop68 < loopLimit68; loop68++) {
         func8(rng());
      }
   }
   else {
      int loop69 = 0;
      int loopLimit69 = (rand()%10)/1 + 1;;
      for(; loop69 < loopLimit69; loop69++) {
         int loop70 = 0;
         int loopLimit70 = (rand()%10)/2 + 1;;
         for(; loop70 < loopLimit70; loop70++) {
            if(PATH0 & 8) {
               func9(rng());
            }
            else {
               if(PATH0 & 16) {
                  func12();
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func10(rng());
            }
         }
         int loop71 = 0;
         int loopLimit71 = (rand()%10)/2 + 1;;
         for(; loop71 < loopLimit71; loop71++) {
            func8(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop72 = 0;
      int loopLimit72 = (rand()%10)/1 + 1;;
      for(; loop72 < loopLimit72; loop72++) {
         if(PATH0 & 64) {
            func12();
         }
         else {
            if(PATH0 & 128) {
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func14();
         }
      }
      int loop73 = 0;
      int loopLimit73 = (rand()%10)/1 + 1;;
      for(; loop73 < loopLimit73; loop73++) {
         func11(rng());
      }
   }
   else {
      int loop74 = 0;
      int loopLimit74 = (rand()%10)/1 + 1;;
      for(; loop74 < loopLimit74; loop74++) {
         int loop75 = 0;
         int loopLimit75 = (rand()%10)/2 + 1;;
         for(; loop75 < loopLimit75; loop75++) {
            if(PATH0 & 256) {
               func12();
            }
            else {
               if(PATH0 & 512) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func14();
            }
         }
         int loop76 = 0;
         int loopLimit76 = (rand()%10)/2 + 1;;
         for(; loop76 < loopLimit76; loop76++) {
            func11(rng());
         }
      }
   }
   if(PATH0 & 1024) {
      int loop77 = 0;
      int loopLimit77 = (rand()%10)/1 + 1;;
      for(; loop77 < loopLimit77; loop77++) {
         if(PATH0 & 2048) {
         }
         else {
         }
      }
      int loop78 = 0;
      int loopLimit78 = (rand()%10)/1 + 1;;
      for(; loop78 < loopLimit78; loop78++) {
         func13();
      }
   }
   else {
      int loop79 = 0;
      int loopLimit79 = (rand()%10)/1 + 1;;
      for(; loop79 < loopLimit79; loop79++) {
         int loop80 = 0;
         int loopLimit80 = (rand()%10)/2 + 1;;
         for(; loop80 < loopLimit80; loop80++) {
            if(PATH0 & 4096) {
            }
            else {
            }
         }
         int loop81 = 0;
         int loopLimit81 = (rand()%10)/2 + 1;;
         for(; loop81 < loopLimit81; loop81++) {
            func13();
         }
      }
   }
   if(PATH0 & 8192) {
   }
   else {
      int loop82 = 0;
      int loopLimit82 = (rand()%10)/1 + 1;;
      for(; loop82 < loopLimit82; loop82++) {
      }
   }
}

void func2(const unsigned long PATH0) {
   int scalar3 = 1;
   func4(rng());
   scalar3++;
   scalar3++;
   if(PATH0 & 1) {
      int loop83 = 0;
      int loopLimit83 = (rand()%10)/1 + 1;;
      for(; loop83 < loopLimit83; loop83++) {
         if(PATH0 & 2) {
            func9(rng());
         }
         else {
            if(PATH0 & 4) {
               func12();
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func10(rng());
         }
      }
      int loop84 = 0;
      int loopLimit84 = (rand()%10)/1 + 1;;
      for(; loop84 < loopLimit84; loop84++) {
         func8(rng());
      }
   }
   else {
      int loop85 = 0;
      int loopLimit85 = (rand()%10)/1 + 1;;
      for(; loop85 < loopLimit85; loop85++) {
         int loop86 = 0;
         int loopLimit86 = (rand()%10)/2 + 1;;
         for(; loop86 < loopLimit86; loop86++) {
            if(PATH0 & 8) {
               func9(rng());
            }
            else {
               if(PATH0 & 16) {
                  func12();
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func10(rng());
            }
         }
         int loop87 = 0;
         int loopLimit87 = (rand()%10)/2 + 1;;
         for(; loop87 < loopLimit87; loop87++) {
            func8(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop88 = 0;
      int loopLimit88 = (rand()%10)/1 + 1;;
      for(; loop88 < loopLimit88; loop88++) {
         if(PATH0 & 64) {
            func12();
         }
         else {
            if(PATH0 & 128) {
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func14();
         }
      }
      int loop89 = 0;
      int loopLimit89 = (rand()%10)/1 + 1;;
      for(; loop89 < loopLimit89; loop89++) {
         func11(rng());
      }
   }
   else {
      int loop90 = 0;
      int loopLimit90 = (rand()%10)/1 + 1;;
      for(; loop90 < loopLimit90; loop90++) {
         int loop91 = 0;
         int loopLimit91 = (rand()%10)/2 + 1;;
         for(; loop91 < loopLimit91; loop91++) {
            if(PATH0 & 256) {
               func12();
            }
            else {
               if(PATH0 & 512) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func14();
            }
         }
         int loop92 = 0;
         int loopLimit92 = (rand()%10)/2 + 1;;
         for(; loop92 < loopLimit92; loop92++) {
            func11(rng());
         }
      }
   }
   if(PATH0 & 1024) {
      int loop93 = 0;
      int loopLimit93 = (rand()%10)/1 + 1;;
      for(; loop93 < loopLimit93; loop93++) {
         if(PATH0 & 2048) {
         }
         else {
         }
      }
      int loop94 = 0;
      int loopLimit94 = (rand()%10)/1 + 1;;
      for(; loop94 < loopLimit94; loop94++) {
         func13();
      }
   }
   else {
      int loop95 = 0;
      int loopLimit95 = (rand()%10)/1 + 1;;
      for(; loop95 < loopLimit95; loop95++) {
         int loop96 = 0;
         int loopLimit96 = (rand()%10)/2 + 1;;
         for(; loop96 < loopLimit96; loop96++) {
            if(PATH0 & 4096) {
            }
            else {
            }
         }
         int loop97 = 0;
         int loopLimit97 = (rand()%10)/2 + 1;;
         for(; loop97 < loopLimit97; loop97++) {
            func13();
         }
      }
   }
   if(PATH0 & 8192) {
   }
   else {
      int loop98 = 0;
      int loopLimit98 = (rand()%10)/1 + 1;;
      for(; loop98 < loopLimit98; loop98++) {
      }
   }
   printf("DELETE!\n");
}

