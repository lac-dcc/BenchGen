#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func10(const unsigned long PATH0);
void func13(const unsigned long PATH0);
void func16();
void func17();
void func18();
void func14(const unsigned long PATH0);
void func15(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func12(const unsigned long PATH0);
void func8(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func3(const unsigned long PATH0);

int main() {
   func1(rng());
   int loop68 = 0;
   int loopLimit68 = (rand()%10)/1 + 1;;
   for(; loop68 < loopLimit68; loop68++) {
      int scalar0 = 1;
      scalar0++;
      func0(rng());
      int scalar1 = 1;
      int loop150 = 0;
      int loopLimit150 = (rand()%10)/2 + 1;;
      for(; loop150 < loopLimit150; loop150++) {
         func1(rng());
         if(rng() & 1) {
            func4(rng());
         }
         else {
            int scalar2 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar0--;
            printf("DELETE!\n");
         }
         func2(rng());
      }
      if (scalar0 == 0) {
         printf("IS 0!");
      }
      scalar0--;
      printf("DELETE!\n");
   }
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func1(const unsigned long PATH0) {
   int scalar0 = 1;
   func4(rng());
   scalar0++;
   scalar0++;
   if(PATH0 & 1) {
      int loop39 = 0;
      int loopLimit39 = (rand()%10)/1 + 1;;
      for(; loop39 < loopLimit39; loop39++) {
         if(PATH0 & 2) {
            func10(rng());
         }
         else {
            if(PATH0 & 4) {
               func13(rng());
            }
            else {
               int scalar1 = 1;
               if (scalar0 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func12(rng());
         }
      }
      int loop46 = 0;
      int loopLimit46 = (rand()%10)/1 + 1;;
      for(; loop46 < loopLimit46; loop46++) {
         func8(rng());
      }
   }
   else {
      int loop49 = 0;
      int loopLimit49 = (rand()%10)/1 + 1;;
      for(; loop49 < loopLimit49; loop49++) {
         int loop50 = 0;
         int loopLimit50 = (rand()%10)/2 + 1;;
         for(; loop50 < loopLimit50; loop50++) {
            if(PATH0 & 8) {
               func10(rng());
            }
            else {
               if(PATH0 & 16) {
                  func13(rng());
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar0--;
                  printf("DELETE!\n");
               }
               func12(rng());
            }
         }
         int loop51 = 0;
         int loopLimit51 = (rand()%10)/2 + 1;;
         for(; loop51 < loopLimit51; loop51++) {
            func8(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop52 = 0;
      int loopLimit52 = (rand()%10)/1 + 1;;
      for(; loop52 < loopLimit52; loop52++) {
         if(PATH0 & 64) {
            func13(rng());
         }
         else {
            if(PATH0 & 128) {
               func16();
            }
            else {
               int scalar1 = 1;
               if (scalar0 == 0) {
                  printf("IS 0!");
               }
               scalar0--;
               printf("DELETE!\n");
            }
            func15(rng());
         }
      }
      int loop53 = 0;
      int loopLimit53 = (rand()%10)/1 + 1;;
      for(; loop53 < loopLimit53; loop53++) {
         func11(rng());
      }
   }
   else {
      int loop54 = 0;
      int loopLimit54 = (rand()%10)/1 + 1;;
      for(; loop54 < loopLimit54; loop54++) {
         int loop55 = 0;
         int loopLimit55 = (rand()%10)/2 + 1;;
         for(; loop55 < loopLimit55; loop55++) {
            if(PATH0 & 256) {
               func13(rng());
            }
            else {
               if(PATH0 & 512) {
                  func16();
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func15(rng());
            }
         }
         int loop56 = 0;
         int loopLimit56 = (rand()%10)/2 + 1;;
         for(; loop56 < loopLimit56; loop56++) {
            func11(rng());
         }
      }
   }
   if(PATH0 & 1024) {
      int loop57 = 0;
      int loopLimit57 = (rand()%10)/1 + 1;;
      for(; loop57 < loopLimit57; loop57++) {
         if(PATH0 & 2048) {
            func16();
         }
         else {
            if(PATH0 & 4096) {
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar0--;
               printf("DELETE!\n");
            }
            func18();
         }
      }
      int loop58 = 0;
      int loopLimit58 = (rand()%10)/1 + 1;;
      for(; loop58 < loopLimit58; loop58++) {
         func14(rng());
      }
   }
   else {
      int loop59 = 0;
      int loopLimit59 = (rand()%10)/1 + 1;;
      for(; loop59 < loopLimit59; loop59++) {
         int loop60 = 0;
         int loopLimit60 = (rand()%10)/2 + 1;;
         for(; loop60 < loopLimit60; loop60++) {
            if(PATH0 & 8192) {
               func16();
            }
            else {
               if(PATH0 & 16384) {
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar0--;
                  printf("DELETE!\n");
               }
               func18();
            }
         }
         int loop61 = 0;
         int loopLimit61 = (rand()%10)/2 + 1;;
         for(; loop61 < loopLimit61; loop61++) {
            func14(rng());
         }
      }
   }
   if(PATH0 & 32768) {
      int loop62 = 0;
      int loopLimit62 = (rand()%10)/1 + 1;;
      for(; loop62 < loopLimit62; loop62++) {
         if(PATH0 & 65536) {
         }
         else {
         }
      }
      int loop63 = 0;
      int loopLimit63 = (rand()%10)/1 + 1;;
      for(; loop63 < loopLimit63; loop63++) {
         func17();
      }
   }
   else {
      int loop64 = 0;
      int loopLimit64 = (rand()%10)/1 + 1;;
      for(; loop64 < loopLimit64; loop64++) {
         int loop65 = 0;
         int loopLimit65 = (rand()%10)/2 + 1;;
         for(; loop65 < loopLimit65; loop65++) {
            if(PATH0 & 131072) {
            }
            else {
            }
         }
         int loop66 = 0;
         int loopLimit66 = (rand()%10)/2 + 1;;
         for(; loop66 < loopLimit66; loop66++) {
            func17();
         }
      }
   }
   if(PATH0 & 262144) {
   }
   else {
      int loop67 = 0;
      int loopLimit67 = (rand()%10)/1 + 1;;
      for(; loop67 < loopLimit67; loop67++) {
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0) {
   int scalar1 = 1;
   func7(rng());
   scalar1++;
   scalar1++;
   if(PATH0 & 1) {
      int loop20 = 0;
      int loopLimit20 = (rand()%10)/1 + 1;;
      for(; loop20 < loopLimit20; loop20++) {
         if(PATH0 & 2) {
            func13(rng());
         }
         else {
            if(PATH0 & 4) {
               func16();
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func15(rng());
         }
      }
      int loop22 = 0;
      int loopLimit22 = (rand()%10)/1 + 1;;
      for(; loop22 < loopLimit22; loop22++) {
         func11(rng());
      }
   }
   else {
      int loop25 = 0;
      int loopLimit25 = (rand()%10)/1 + 1;;
      for(; loop25 < loopLimit25; loop25++) {
         int loop26 = 0;
         int loopLimit26 = (rand()%10)/2 + 1;;
         for(; loop26 < loopLimit26; loop26++) {
            if(PATH0 & 8) {
               func13(rng());
            }
            else {
               if(PATH0 & 16) {
                  func16();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func15(rng());
            }
         }
         int loop27 = 0;
         int loopLimit27 = (rand()%10)/2 + 1;;
         for(; loop27 < loopLimit27; loop27++) {
            func11(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop28 = 0;
      int loopLimit28 = (rand()%10)/1 + 1;;
      for(; loop28 < loopLimit28; loop28++) {
         if(PATH0 & 64) {
            func16();
         }
         else {
            if(PATH0 & 128) {
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func18();
         }
      }
      int loop29 = 0;
      int loopLimit29 = (rand()%10)/1 + 1;;
      for(; loop29 < loopLimit29; loop29++) {
         func14(rng());
      }
   }
   else {
      int loop30 = 0;
      int loopLimit30 = (rand()%10)/1 + 1;;
      for(; loop30 < loopLimit30; loop30++) {
         int loop31 = 0;
         int loopLimit31 = (rand()%10)/2 + 1;;
         for(; loop31 < loopLimit31; loop31++) {
            if(PATH0 & 256) {
               func16();
            }
            else {
               if(PATH0 & 512) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func18();
            }
         }
         int loop32 = 0;
         int loopLimit32 = (rand()%10)/2 + 1;;
         for(; loop32 < loopLimit32; loop32++) {
            func14(rng());
         }
      }
   }
   if(PATH0 & 1024) {
      int loop33 = 0;
      int loopLimit33 = (rand()%10)/1 + 1;;
      for(; loop33 < loopLimit33; loop33++) {
         if(PATH0 & 2048) {
         }
         else {
         }
      }
      int loop34 = 0;
      int loopLimit34 = (rand()%10)/1 + 1;;
      for(; loop34 < loopLimit34; loop34++) {
         func17();
      }
   }
   else {
      int loop35 = 0;
      int loopLimit35 = (rand()%10)/1 + 1;;
      for(; loop35 < loopLimit35; loop35++) {
         int loop36 = 0;
         int loopLimit36 = (rand()%10)/2 + 1;;
         for(; loop36 < loopLimit36; loop36++) {
            if(PATH0 & 4096) {
            }
            else {
            }
         }
         int loop37 = 0;
         int loopLimit37 = (rand()%10)/2 + 1;;
         for(; loop37 < loopLimit37; loop37++) {
            func17();
         }
      }
   }
   if(PATH0 & 8192) {
   }
   else {
      int loop38 = 0;
      int loopLimit38 = (rand()%10)/1 + 1;;
      for(; loop38 < loopLimit38; loop38++) {
      }
   }
   printf("DELETE!\n");
}

void func7(const unsigned long PATH0) {
   int scalar2 = 1;
   func10(rng());
   scalar2++;
   scalar2++;
   if(PATH0 & 1) {
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/1 + 1;;
      for(; loop7 < loopLimit7; loop7++) {
         if(PATH0 & 2) {
            func16();
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
            func18();
         }
      }
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/1 + 1;;
      for(; loop8 < loopLimit8; loop8++) {
         func14(rng());
      }
   }
   else {
      int loop11 = 0;
      int loopLimit11 = (rand()%10)/1 + 1;;
      for(; loop11 < loopLimit11; loop11++) {
         int loop12 = 0;
         int loopLimit12 = (rand()%10)/2 + 1;;
         for(; loop12 < loopLimit12; loop12++) {
            if(PATH0 & 8) {
               func16();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func18();
            }
         }
         int loop13 = 0;
         int loopLimit13 = (rand()%10)/2 + 1;;
         for(; loop13 < loopLimit13; loop13++) {
            func14(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/1 + 1;;
      for(; loop14 < loopLimit14; loop14++) {
         if(PATH0 & 64) {
         }
         else {
         }
      }
      int loop15 = 0;
      int loopLimit15 = (rand()%10)/1 + 1;;
      for(; loop15 < loopLimit15; loop15++) {
         func17();
      }
   }
   else {
      int loop16 = 0;
      int loopLimit16 = (rand()%10)/1 + 1;;
      for(; loop16 < loopLimit16; loop16++) {
         int loop17 = 0;
         int loopLimit17 = (rand()%10)/2 + 1;;
         for(; loop17 < loopLimit17; loop17++) {
            if(PATH0 & 128) {
            }
            else {
            }
         }
         int loop18 = 0;
         int loopLimit18 = (rand()%10)/2 + 1;;
         for(; loop18 < loopLimit18; loop18++) {
            func17();
         }
      }
   }
   if(PATH0 & 256) {
   }
   else {
      int loop19 = 0;
      int loopLimit19 = (rand()%10)/1 + 1;;
      for(; loop19 < loopLimit19; loop19++) {
      }
   }
   printf("DELETE!\n");
}

void func10(const unsigned long PATH0) {
   int scalar3 = 1;
   func13(rng());
   scalar3++;
   scalar3++;
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/1 + 1;;
      for(; loop1 < loopLimit1; loop1++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/1 + 1;;
      for(; loop2 < loopLimit2; loop2++) {
         func17();
      }
   }
   else {
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/1 + 1;;
      for(; loop3 < loopLimit3; loop3++) {
         int loop4 = 0;
         int loopLimit4 = (rand()%10)/2 + 1;;
         for(; loop4 < loopLimit4; loop4++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop5 = 0;
         int loopLimit5 = (rand()%10)/2 + 1;;
         for(; loop5 < loopLimit5; loop5++) {
            func17();
         }
      }
   }
   if(PATH0 & 8) {
   }
   else {
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/1 + 1;;
      for(; loop6 < loopLimit6; loop6++) {
      }
   }
   printf("DELETE!\n");
}

void func13(const unsigned long PATH0) {
   int scalar4 = 1;
   func16();
   scalar4++;
   scalar4++;
   if(PATH0 & 1) {
   }
   else {
      int loop0 = 0;
      int loopLimit0 = (rand()%10)/1 + 1;;
      for(; loop0 < loopLimit0; loop0++) {
      }
   }
   printf("DELETE!\n");
}

void func16() {
   int scalar5 = 1;
   scalar5++;
   scalar5++;
   printf("DELETE!\n");
}

void func17() {
}

void func18() {
}

void func14(const unsigned long PATH0) {
   int loop9 = 0;
   int loopLimit9 = (rand()%10)/2 + 1;;
   for(; loop9 < loopLimit9; loop9++) {
      if(PATH0 & 1) {
      }
      else {
      }
   }
   int loop10 = 0;
   int loopLimit10 = (rand()%10)/2 + 1;;
   for(; loop10 < loopLimit10; loop10++) {
      func17();
   }
}

void func15(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/2 + 1;;
      for(; loop21 < loopLimit21; loop21++) {
      }
   }
}

void func11(const unsigned long PATH0) {
   int loop23 = 0;
   int loopLimit23 = (rand()%10)/2 + 1;;
   for(; loop23 < loopLimit23; loop23++) {
      if(PATH0 & 1) {
         func16();
      }
      else {
         if(PATH0 & 2) {
         }
         else {
            int scalar2 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func18();
      }
   }
   int loop24 = 0;
   int loopLimit24 = (rand()%10)/2 + 1;;
   for(; loop24 < loopLimit24; loop24++) {
      func14(rng());
   }
}

void func12(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop40 = 0;
      int loopLimit40 = (rand()%10)/2 + 1;;
      for(; loop40 < loopLimit40; loop40++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
      int loop41 = 0;
      int loopLimit41 = (rand()%10)/2 + 1;;
      for(; loop41 < loopLimit41; loop41++) {
         func17();
      }
   }
   else {
      int loop42 = 0;
      int loopLimit42 = (rand()%10)/2 + 1;;
      for(; loop42 < loopLimit42; loop42++) {
         int loop43 = 0;
         int loopLimit43 = (rand()%10)/3 + 1;;
         for(; loop43 < loopLimit43; loop43++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop44 = 0;
         int loopLimit44 = (rand()%10)/3 + 1;;
         for(; loop44 < loopLimit44; loop44++) {
            func17();
         }
      }
   }
   if(PATH0 & 8) {
   }
   else {
      int loop45 = 0;
      int loopLimit45 = (rand()%10)/2 + 1;;
      for(; loop45 < loopLimit45; loop45++) {
      }
   }
}

void func8(const unsigned long PATH0) {
   int loop47 = 0;
   int loopLimit47 = (rand()%10)/2 + 1;;
   for(; loop47 < loopLimit47; loop47++) {
      if(PATH0 & 1) {
         func13(rng());
      }
      else {
         if(PATH0 & 2) {
            func16();
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func15(rng());
      }
   }
   int loop48 = 0;
   int loopLimit48 = (rand()%10)/2 + 1;;
   for(; loop48 < loopLimit48; loop48++) {
      func11(rng());
   }
}

void func0(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func4(rng());
   }
   else {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      printf("DELETE!\n");
   }
   func2(rng());
   if(PATH0 & 2) {
      if(PATH0 & 4) {
         int loop90 = 0;
         int loopLimit90 = (rand()%10)/2 + 1;;
         for(; loop90 < loopLimit90; loop90++) {
            if(PATH0 & 8) {
               func7(rng());
            }
            else {
               if(PATH0 & 16) {
                  func10(rng());
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func9(rng());
            }
         }
         int loop102 = 0;
         int loopLimit102 = (rand()%10)/2 + 1;;
         for(; loop102 < loopLimit102; loop102++) {
            func5(rng());
         }
      }
      else {
         int loop105 = 0;
         int loopLimit105 = (rand()%10)/2 + 1;;
         for(; loop105 < loopLimit105; loop105++) {
            int loop106 = 0;
            int loopLimit106 = (rand()%10)/3 + 1;;
            for(; loop106 < loopLimit106; loop106++) {
               if(PATH0 & 32) {
                  func7(rng());
               }
               else {
                  if(PATH0 & 64) {
                     func10(rng());
                  }
                  else {
                     int scalar1 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func9(rng());
               }
            }
            int loop107 = 0;
            int loopLimit107 = (rand()%10)/3 + 1;;
            for(; loop107 < loopLimit107; loop107++) {
               func5(rng());
            }
         }
      }
      if(PATH0 & 128) {
         int loop108 = 0;
         int loopLimit108 = (rand()%10)/2 + 1;;
         for(; loop108 < loopLimit108; loop108++) {
            if(PATH0 & 256) {
               func10(rng());
            }
            else {
               if(PATH0 & 512) {
                  func13(rng());
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func12(rng());
            }
         }
         int loop109 = 0;
         int loopLimit109 = (rand()%10)/2 + 1;;
         for(; loop109 < loopLimit109; loop109++) {
            func8(rng());
         }
      }
      else {
         int loop110 = 0;
         int loopLimit110 = (rand()%10)/2 + 1;;
         for(; loop110 < loopLimit110; loop110++) {
            int loop111 = 0;
            int loopLimit111 = (rand()%10)/3 + 1;;
            for(; loop111 < loopLimit111; loop111++) {
               if(PATH0 & 1024) {
                  func10(rng());
               }
               else {
                  if(PATH0 & 2048) {
                     func13(rng());
                  }
                  else {
                     int scalar1 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func12(rng());
               }
            }
            int loop112 = 0;
            int loopLimit112 = (rand()%10)/3 + 1;;
            for(; loop112 < loopLimit112; loop112++) {
               func8(rng());
            }
         }
      }
      if(PATH0 & 4096) {
         int loop113 = 0;
         int loopLimit113 = (rand()%10)/2 + 1;;
         for(; loop113 < loopLimit113; loop113++) {
            if(PATH0 & 8192) {
               func13(rng());
            }
            else {
               if(PATH0 & 16384) {
                  func16();
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func15(rng());
            }
         }
         int loop114 = 0;
         int loopLimit114 = (rand()%10)/2 + 1;;
         for(; loop114 < loopLimit114; loop114++) {
            func11(rng());
         }
      }
      else {
         int loop115 = 0;
         int loopLimit115 = (rand()%10)/2 + 1;;
         for(; loop115 < loopLimit115; loop115++) {
            int loop116 = 0;
            int loopLimit116 = (rand()%10)/3 + 1;;
            for(; loop116 < loopLimit116; loop116++) {
               if(PATH0 & 32768) {
                  func13(rng());
               }
               else {
                  if(PATH0 & 65536) {
                     func16();
                  }
                  else {
                     int scalar1 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func15(rng());
               }
            }
            int loop117 = 0;
            int loopLimit117 = (rand()%10)/3 + 1;;
            for(; loop117 < loopLimit117; loop117++) {
               func11(rng());
            }
         }
      }
      if(PATH0 & 131072) {
         int loop118 = 0;
         int loopLimit118 = (rand()%10)/2 + 1;;
         for(; loop118 < loopLimit118; loop118++) {
            if(PATH0 & 262144) {
               func16();
            }
            else {
               if(PATH0 & 524288) {
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func18();
            }
         }
         int loop119 = 0;
         int loopLimit119 = (rand()%10)/2 + 1;;
         for(; loop119 < loopLimit119; loop119++) {
            func14(rng());
         }
      }
      else {
         int loop120 = 0;
         int loopLimit120 = (rand()%10)/2 + 1;;
         for(; loop120 < loopLimit120; loop120++) {
            int loop121 = 0;
            int loopLimit121 = (rand()%10)/3 + 1;;
            for(; loop121 < loopLimit121; loop121++) {
               if(PATH0 & 1048576) {
                  func16();
               }
               else {
                  if(PATH0 & 2097152) {
                  }
                  else {
                     int scalar1 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func18();
               }
            }
            int loop122 = 0;
            int loopLimit122 = (rand()%10)/3 + 1;;
            for(; loop122 < loopLimit122; loop122++) {
               func14(rng());
            }
         }
      }
      if(PATH0 & 4194304) {
         int loop123 = 0;
         int loopLimit123 = (rand()%10)/2 + 1;;
         for(; loop123 < loopLimit123; loop123++) {
            if(PATH0 & 8388608) {
            }
            else {
            }
         }
         int loop124 = 0;
         int loopLimit124 = (rand()%10)/2 + 1;;
         for(; loop124 < loopLimit124; loop124++) {
            func17();
         }
      }
      else {
         int loop125 = 0;
         int loopLimit125 = (rand()%10)/2 + 1;;
         for(; loop125 < loopLimit125; loop125++) {
            int loop126 = 0;
            int loopLimit126 = (rand()%10)/3 + 1;;
            for(; loop126 < loopLimit126; loop126++) {
               if(PATH0 & 16777216) {
               }
               else {
               }
            }
            int loop127 = 0;
            int loopLimit127 = (rand()%10)/3 + 1;;
            for(; loop127 < loopLimit127; loop127++) {
               func17();
            }
         }
      }
      if(PATH0 & 33554432) {
      }
      else {
         int loop128 = 0;
         int loopLimit128 = (rand()%10)/2 + 1;;
         for(; loop128 < loopLimit128; loop128++) {
         }
      }
   }
   else {
      int loop129 = 0;
      int loopLimit129 = (rand()%10)/2 + 1;;
      for(; loop129 < loopLimit129; loop129++) {
         func1(rng());
         int loop130 = 0;
         int loopLimit130 = (rand()%10)/3 + 1;;
         for(; loop130 < loopLimit130; loop130++) {
            if(PATH0 & 67108864) {
               func4(rng());
            }
            else {
               if(PATH0 & 134217728) {
                  func7(rng());
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func6(rng());
            }
         }
         int loop147 = 0;
         int loopLimit147 = (rand()%10)/3 + 1;;
         for(; loop147 < loopLimit147; loop147++) {
            func3(rng());
         }
      }
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop69 = 0;
      int loopLimit69 = (rand()%10)/2 + 1;;
      for(; loop69 < loopLimit69; loop69++) {
         if(PATH0 & 2) {
            func10(rng());
         }
         else {
            if(PATH0 & 4) {
               func13(rng());
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func12(rng());
         }
      }
      int loop70 = 0;
      int loopLimit70 = (rand()%10)/2 + 1;;
      for(; loop70 < loopLimit70; loop70++) {
         func8(rng());
      }
   }
   else {
      int loop71 = 0;
      int loopLimit71 = (rand()%10)/2 + 1;;
      for(; loop71 < loopLimit71; loop71++) {
         int loop72 = 0;
         int loopLimit72 = (rand()%10)/3 + 1;;
         for(; loop72 < loopLimit72; loop72++) {
            if(PATH0 & 8) {
               func10(rng());
            }
            else {
               if(PATH0 & 16) {
                  func13(rng());
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func12(rng());
            }
         }
         int loop73 = 0;
         int loopLimit73 = (rand()%10)/3 + 1;;
         for(; loop73 < loopLimit73; loop73++) {
            func8(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop74 = 0;
      int loopLimit74 = (rand()%10)/2 + 1;;
      for(; loop74 < loopLimit74; loop74++) {
         if(PATH0 & 64) {
            func13(rng());
         }
         else {
            if(PATH0 & 128) {
               func16();
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func15(rng());
         }
      }
      int loop75 = 0;
      int loopLimit75 = (rand()%10)/2 + 1;;
      for(; loop75 < loopLimit75; loop75++) {
         func11(rng());
      }
   }
   else {
      int loop76 = 0;
      int loopLimit76 = (rand()%10)/2 + 1;;
      for(; loop76 < loopLimit76; loop76++) {
         int loop77 = 0;
         int loopLimit77 = (rand()%10)/3 + 1;;
         for(; loop77 < loopLimit77; loop77++) {
            if(PATH0 & 256) {
               func13(rng());
            }
            else {
               if(PATH0 & 512) {
                  func16();
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func15(rng());
            }
         }
         int loop78 = 0;
         int loopLimit78 = (rand()%10)/3 + 1;;
         for(; loop78 < loopLimit78; loop78++) {
            func11(rng());
         }
      }
   }
   if(PATH0 & 1024) {
      int loop79 = 0;
      int loopLimit79 = (rand()%10)/2 + 1;;
      for(; loop79 < loopLimit79; loop79++) {
         if(PATH0 & 2048) {
            func16();
         }
         else {
            if(PATH0 & 4096) {
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func18();
         }
      }
      int loop80 = 0;
      int loopLimit80 = (rand()%10)/2 + 1;;
      for(; loop80 < loopLimit80; loop80++) {
         func14(rng());
      }
   }
   else {
      int loop81 = 0;
      int loopLimit81 = (rand()%10)/2 + 1;;
      for(; loop81 < loopLimit81; loop81++) {
         int loop82 = 0;
         int loopLimit82 = (rand()%10)/3 + 1;;
         for(; loop82 < loopLimit82; loop82++) {
            if(PATH0 & 8192) {
               func16();
            }
            else {
               if(PATH0 & 16384) {
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func18();
            }
         }
         int loop83 = 0;
         int loopLimit83 = (rand()%10)/3 + 1;;
         for(; loop83 < loopLimit83; loop83++) {
            func14(rng());
         }
      }
   }
   if(PATH0 & 32768) {
      int loop84 = 0;
      int loopLimit84 = (rand()%10)/2 + 1;;
      for(; loop84 < loopLimit84; loop84++) {
         if(PATH0 & 65536) {
         }
         else {
         }
      }
      int loop85 = 0;
      int loopLimit85 = (rand()%10)/2 + 1;;
      for(; loop85 < loopLimit85; loop85++) {
         func17();
      }
   }
   else {
      int loop86 = 0;
      int loopLimit86 = (rand()%10)/2 + 1;;
      for(; loop86 < loopLimit86; loop86++) {
         int loop87 = 0;
         int loopLimit87 = (rand()%10)/3 + 1;;
         for(; loop87 < loopLimit87; loop87++) {
            if(PATH0 & 131072) {
            }
            else {
            }
         }
         int loop88 = 0;
         int loopLimit88 = (rand()%10)/3 + 1;;
         for(; loop88 < loopLimit88; loop88++) {
            func17();
         }
      }
   }
   if(PATH0 & 262144) {
   }
   else {
      int loop89 = 0;
      int loopLimit89 = (rand()%10)/2 + 1;;
      for(; loop89 < loopLimit89; loop89++) {
      }
   }
}

void func9(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop91 = 0;
      int loopLimit91 = (rand()%10)/3 + 1;;
      for(; loop91 < loopLimit91; loop91++) {
         if(PATH0 & 2) {
            func16();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func18();
         }
      }
      int loop92 = 0;
      int loopLimit92 = (rand()%10)/3 + 1;;
      for(; loop92 < loopLimit92; loop92++) {
         func14(rng());
      }
   }
   else {
      int loop93 = 0;
      int loopLimit93 = (rand()%10)/3 + 1;;
      for(; loop93 < loopLimit93; loop93++) {
         int loop94 = 0;
         int loopLimit94 = (rand()%10)/4 + 1;;
         for(; loop94 < loopLimit94; loop94++) {
            if(PATH0 & 8) {
               func16();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func18();
            }
         }
         int loop95 = 0;
         int loopLimit95 = (rand()%10)/4 + 1;;
         for(; loop95 < loopLimit95; loop95++) {
            func14(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop96 = 0;
      int loopLimit96 = (rand()%10)/3 + 1;;
      for(; loop96 < loopLimit96; loop96++) {
         if(PATH0 & 64) {
         }
         else {
         }
      }
      int loop97 = 0;
      int loopLimit97 = (rand()%10)/3 + 1;;
      for(; loop97 < loopLimit97; loop97++) {
         func17();
      }
   }
   else {
      int loop98 = 0;
      int loopLimit98 = (rand()%10)/3 + 1;;
      for(; loop98 < loopLimit98; loop98++) {
         int loop99 = 0;
         int loopLimit99 = (rand()%10)/4 + 1;;
         for(; loop99 < loopLimit99; loop99++) {
            if(PATH0 & 128) {
            }
            else {
            }
         }
         int loop100 = 0;
         int loopLimit100 = (rand()%10)/4 + 1;;
         for(; loop100 < loopLimit100; loop100++) {
            func17();
         }
      }
   }
   if(PATH0 & 256) {
   }
   else {
      int loop101 = 0;
      int loopLimit101 = (rand()%10)/3 + 1;;
      for(; loop101 < loopLimit101; loop101++) {
      }
   }
}

void func5(const unsigned long PATH0) {
   int loop103 = 0;
   int loopLimit103 = (rand()%10)/3 + 1;;
   for(; loop103 < loopLimit103; loop103++) {
      if(PATH0 & 1) {
         func10(rng());
      }
      else {
         if(PATH0 & 2) {
            func13(rng());
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func12(rng());
      }
   }
   int loop104 = 0;
   int loopLimit104 = (rand()%10)/3 + 1;;
   for(; loop104 < loopLimit104; loop104++) {
      func8(rng());
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop131 = 0;
      int loopLimit131 = (rand()%10)/4 + 1;;
      for(; loop131 < loopLimit131; loop131++) {
         if(PATH0 & 2) {
            func13(rng());
         }
         else {
            if(PATH0 & 4) {
               func16();
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func15(rng());
         }
      }
      int loop132 = 0;
      int loopLimit132 = (rand()%10)/4 + 1;;
      for(; loop132 < loopLimit132; loop132++) {
         func11(rng());
      }
   }
   else {
      int loop133 = 0;
      int loopLimit133 = (rand()%10)/4 + 1;;
      for(; loop133 < loopLimit133; loop133++) {
         int loop134 = 0;
         int loopLimit134 = (rand()%10)/5 + 1;;
         for(; loop134 < loopLimit134; loop134++) {
            if(PATH0 & 8) {
               func13(rng());
            }
            else {
               if(PATH0 & 16) {
                  func16();
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func15(rng());
            }
         }
         int loop135 = 0;
         int loopLimit135 = (rand()%10)/5 + 1;;
         for(; loop135 < loopLimit135; loop135++) {
            func11(rng());
         }
      }
   }
   if(PATH0 & 32) {
      int loop136 = 0;
      int loopLimit136 = (rand()%10)/4 + 1;;
      for(; loop136 < loopLimit136; loop136++) {
         if(PATH0 & 64) {
            func16();
         }
         else {
            if(PATH0 & 128) {
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func18();
         }
      }
      int loop137 = 0;
      int loopLimit137 = (rand()%10)/4 + 1;;
      for(; loop137 < loopLimit137; loop137++) {
         func14(rng());
      }
   }
   else {
      int loop138 = 0;
      int loopLimit138 = (rand()%10)/4 + 1;;
      for(; loop138 < loopLimit138; loop138++) {
         int loop139 = 0;
         int loopLimit139 = (rand()%10)/5 + 1;;
         for(; loop139 < loopLimit139; loop139++) {
            if(PATH0 & 256) {
               func16();
            }
            else {
               if(PATH0 & 512) {
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func18();
            }
         }
         int loop140 = 0;
         int loopLimit140 = (rand()%10)/5 + 1;;
         for(; loop140 < loopLimit140; loop140++) {
            func14(rng());
         }
      }
   }
   if(PATH0 & 1024) {
      int loop141 = 0;
      int loopLimit141 = (rand()%10)/4 + 1;;
      for(; loop141 < loopLimit141; loop141++) {
         if(PATH0 & 2048) {
         }
         else {
         }
      }
      int loop142 = 0;
      int loopLimit142 = (rand()%10)/4 + 1;;
      for(; loop142 < loopLimit142; loop142++) {
         func17();
      }
   }
   else {
      int loop143 = 0;
      int loopLimit143 = (rand()%10)/4 + 1;;
      for(; loop143 < loopLimit143; loop143++) {
         int loop144 = 0;
         int loopLimit144 = (rand()%10)/5 + 1;;
         for(; loop144 < loopLimit144; loop144++) {
            if(PATH0 & 4096) {
            }
            else {
            }
         }
         int loop145 = 0;
         int loopLimit145 = (rand()%10)/5 + 1;;
         for(; loop145 < loopLimit145; loop145++) {
            func17();
         }
      }
   }
   if(PATH0 & 8192) {
   }
   else {
      int loop146 = 0;
      int loopLimit146 = (rand()%10)/4 + 1;;
      for(; loop146 < loopLimit146; loop146++) {
      }
   }
}

void func3(const unsigned long PATH0) {
   int loop148 = 0;
   int loopLimit148 = (rand()%10)/4 + 1;;
   for(; loop148 < loopLimit148; loop148++) {
      if(PATH0 & 1) {
         func7(rng());
      }
      else {
         if(PATH0 & 2) {
            func10(rng());
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func9(rng());
      }
   }
   int loop149 = 0;
   int loopLimit149 = (rand()%10)/4 + 1;;
   for(; loop149 < loopLimit149; loop149++) {
      func5(rng());
   }
}

