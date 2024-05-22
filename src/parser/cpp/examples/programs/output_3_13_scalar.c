#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func13();
void func14();
void func15();
void func16();
void func17();
void func7(const unsigned long PATH0);
void func8(const unsigned long PATH0);
void func9();
void func10(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func18();
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3();
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func12();
void func6();

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
         int loop2 = 0;
         int loopLimit2 = (rand()%10)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            int loop3 = 0;
            int loopLimit3 = (rand()%10)/4 + 1;
            for(; loop3 < loopLimit3; loop3++) {
               if(PATH0 & 1) {
               }
               else {
                  func13();
               }
            }
            if(PATH0 & 2) {
               func14();
               func15();
               func16();
               func17();
            }
            else {
               func7(rng());
            }
         }
         if(PATH0 & 4) {
            func8(rng());
            func9();
            func10(rng());
            func11(rng());
         }
         else {
            func1(rng());
         }
      }
      func2(rng());
      func3();
      func4(rng());
      func5(rng());
      int scalar1 = 1;
      scalar1++;
      int loop28 = 0;
      int loopLimit28 = (rand()%10)/2 + 1;
      for(; loop28 < loopLimit28; loop28++) {
         int loop29 = 0;
         int loopLimit29 = (rand()%10)/3 + 1;
         for(; loop29 < loopLimit29; loop29++) {
            int loop30 = 0;
            int loopLimit30 = (rand()%10)/4 + 1;
            for(; loop30 < loopLimit30; loop30++) {
               if(PATH0 & 8) {
               }
               else {
                  func13();
               }
            }
            if(PATH0 & 16) {
               func14();
               func15();
               func16();
               func17();
            }
            else {
               func7(rng());
            }
         }
         if(PATH0 & 32) {
            func10(rng());
         }
         else {
            int scalar2 = 1;
            if(PATH0 & 64) {
               func12();
            }
            else {
               int loop31 = 0;
               int loopLimit31 = (rand()%10)/3 + 1;
               for(; loop31 < loopLimit31; loop31++) {
                  int scalar3 = 1;
                  scalar3++;
                  int loop32 = 0;
                  int loopLimit32 = (rand()%10)/4 + 1;
                  for(; loop32 < loopLimit32; loop32++) {
                  }
                  int scalar4 = 1;
                  if(PATH0 & 128) {
                     scalar3--;
                  }
                  else {
                     int loop33 = 0;
                     int loopLimit33 = (rand()%10)/4 + 1;
                     for(; loop33 < loopLimit33; loop33++) {
                        scalar3++;
                     }
                  }
                  int scalar5 = 1;
                  scalar4++;
                  printf("DELETE!\n");
                  printf("DELETE!\n");
                  printf("DELETE!\n");
               }
            }
         }
      }
      int scalar2 = 1;
      if(PATH0 & 256) {
         scalar2--;
      }
      else {
         int loop34 = 0;
         int loopLimit34 = (rand()%10)/2 + 1;
         for(; loop34 < loopLimit34; loop34++) {
            scalar2++;
         }
      }
      int scalar3 = 1;
      scalar3++;
      if(PATH0 & 512) {
         func10(rng());
      }
      else {
         int scalar4 = 1;
         if(PATH0 & 1024) {
            func12();
         }
         else {
            int loop35 = 0;
            int loopLimit35 = (rand()%10)/2 + 1;
            for(; loop35 < loopLimit35; loop35++) {
               int scalar5 = 1;
               scalar3++;
               int loop36 = 0;
               int loopLimit36 = (rand()%10)/3 + 1;
               for(; loop36 < loopLimit36; loop36++) {
               }
               int scalar6 = 1;
               if(PATH0 & 2048) {
                  scalar1--;
               }
               else {
                  int loop37 = 0;
                  int loopLimit37 = (rand()%10)/3 + 1;
                  for(; loop37 < loopLimit37; loop37++) {
                     scalar1++;
                  }
               }
               int scalar7 = 1;
               scalar4++;
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
      printf("DELETE!\n");
      if(PATH0 & 4096) {
         func4(rng());
      }
      else {
         int scalar4 = 1;
         if(PATH0 & 8192) {
            func6();
         }
         else {
            int loop38 = 0;
            int loopLimit38 = (rand()%10)/2 + 1;
            for(; loop38 < loopLimit38; loop38++) {
               int scalar5 = 1;
               scalar3++;
               int loop39 = 0;
               int loopLimit39 = (rand()%10)/3 + 1;
               for(; loop39 < loopLimit39; loop39++) {
                  int loop40 = 0;
                  int loopLimit40 = (rand()%10)/4 + 1;
                  for(; loop40 < loopLimit40; loop40++) {
                     if(PATH0 & 16384) {
                     }
                     else {
                        func13();
                     }
                  }
                  if(PATH0 & 32768) {
                     func16();
                  }
                  else {
                     int scalar6 = 1;
                     if(PATH0 & 65536) {
                        func18();
                     }
                     else {
                        int loop41 = 0;
                        int loopLimit41 = (rand()%10)/4 + 1;
                        for(; loop41 < loopLimit41; loop41++) {
                        }
                     }
                  }
               }
               int scalar6 = 1;
               if(PATH0 & 131072) {
                  scalar2--;
               }
               else {
                  int loop42 = 0;
                  int loopLimit42 = (rand()%10)/3 + 1;
                  for(; loop42 < loopLimit42; loop42++) {
                     scalar5++;
                  }
               }
               int scalar7 = 1;
               scalar3++;
               if(PATH0 & 262144) {
                  func16();
               }
               else {
                  int scalar8 = 1;
                  if(PATH0 & 524288) {
                     func18();
                  }
                  else {
                     int loop43 = 0;
                     int loopLimit43 = (rand()%10)/3 + 1;
                     for(; loop43 < loopLimit43; loop43++) {
                     }
                  }
               }
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
}

void func13() {
   int scalar1 = 1;
   printf("DELETE!\n");
}

void func14() {
}

void func15() {
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/4 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func16() {
}

void func17() {
}

void func7(const unsigned long PATH0) {
   int scalar1 = 1;
   int scalar2 = 1;
   scalar1++;
   int loop5 = 0;
   int loopLimit5 = (rand()%10)/4 + 1;
   for(; loop5 < loopLimit5; loop5++) {
   }
   int scalar3 = 1;
   if(PATH0 & 1) {
      scalar1--;
   }
   else {
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/4 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         scalar2++;
      }
   }
   int scalar4 = 1;
   scalar2++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func8(const unsigned long PATH0) {
   int loop7 = 0;
   int loopLimit7 = (rand()%10)/3 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      if(PATH0 & 1) {
      }
      else {
         func13();
      }
   }
}

void func9() {
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/3 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func14();
      func15();
      func16();
      func17();
      printf("DELETE!\n");
   }
}

void func10(const unsigned long PATH0) {
   int scalar1 = 1;
   scalar1++;
   int loop9 = 0;
   int loopLimit9 = (rand()%10)/3 + 1;
   for(; loop9 < loopLimit9; loop9++) {
   }
   int scalar2 = 1;
   if(PATH0 & 1) {
      scalar1--;
   }
   else {
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/3 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         scalar2++;
      }
   }
   int scalar3 = 1;
   scalar2++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func11(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func16();
   }
   else {
      int scalar1 = 1;
      if(PATH0 & 2) {
         func18();
      }
      else {
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/3 + 1;
         for(; loop11 < loopLimit11; loop11++) {
         }
      }
   }
}

void func18() {
}

void func1(const unsigned long PATH0) {
   int scalar1 = 1;
   int scalar2 = 1;
   scalar1++;
   int loop12 = 0;
   int loopLimit12 = (rand()%10)/3 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/4 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if(PATH0 & 1) {
         }
         else {
            func13();
         }
      }
      if(PATH0 & 2) {
         func16();
      }
      else {
         int scalar3 = 1;
         if(PATH0 & 4) {
            func18();
         }
         else {
            int loop14 = 0;
            int loopLimit14 = (rand()%10)/4 + 1;
            for(; loop14 < loopLimit14; loop14++) {
            }
         }
      }
   }
   int scalar3 = 1;
   if(PATH0 & 8) {
      scalar2--;
   }
   else {
      int loop15 = 0;
      int loopLimit15 = (rand()%10)/3 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         scalar3++;
      }
   }
   int scalar4 = 1;
   scalar4++;
   if(PATH0 & 16) {
      func16();
   }
   else {
      int scalar5 = 1;
      if(PATH0 & 32) {
         func18();
      }
      else {
         int loop16 = 0;
         int loopLimit16 = (rand()%10)/3 + 1;
         for(; loop16 < loopLimit16; loop16++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func2(const unsigned long PATH0) {
   int loop17 = 0;
   int loopLimit17 = (rand()%10)/2 + 1;
   for(; loop17 < loopLimit17; loop17++) {
      int loop18 = 0;
      int loopLimit18 = (rand()%10)/3 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         if(PATH0 & 1) {
         }
         else {
            func13();
         }
      }
      if(PATH0 & 2) {
         func14();
         func15();
         func16();
         func17();
      }
      else {
         func7(rng());
      }
   }
}

void func3() {
   int loop19 = 0;
   int loopLimit19 = (rand()%10)/2 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      func9();
      func10(rng());
      func11(rng());
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   int scalar1 = 1;
   scalar1++;
   int loop20 = 0;
   int loopLimit20 = (rand()%10)/2 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/3 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         if(PATH0 & 1) {
         }
         else {
            func13();
         }
      }
      if(PATH0 & 2) {
         func16();
      }
      else {
         int scalar2 = 1;
         if(PATH0 & 4) {
            func18();
         }
         else {
            int loop22 = 0;
            int loopLimit22 = (rand()%10)/3 + 1;
            for(; loop22 < loopLimit22; loop22++) {
            }
         }
      }
   }
   int scalar2 = 1;
   if(PATH0 & 8) {
      scalar1--;
   }
   else {
      int loop23 = 0;
      int loopLimit23 = (rand()%10)/2 + 1;
      for(; loop23 < loopLimit23; loop23++) {
         scalar1++;
      }
   }
   int scalar3 = 1;
   scalar2++;
   if(PATH0 & 16) {
      func16();
   }
   else {
      int scalar4 = 1;
      if(PATH0 & 32) {
         func18();
      }
      else {
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func10(rng());
   }
   else {
      int scalar1 = 1;
      if(PATH0 & 2) {
         func12();
      }
      else {
         int loop25 = 0;
         int loopLimit25 = (rand()%10)/2 + 1;
         for(; loop25 < loopLimit25; loop25++) {
            int scalar2 = 1;
            scalar1++;
            int loop26 = 0;
            int loopLimit26 = (rand()%10)/3 + 1;
            for(; loop26 < loopLimit26; loop26++) {
            }
            int scalar3 = 1;
            if(PATH0 & 4) {
               scalar3--;
            }
            else {
               int loop27 = 0;
               int loopLimit27 = (rand()%10)/3 + 1;
               for(; loop27 < loopLimit27; loop27++) {
                  scalar3++;
               }
            }
            int scalar4 = 1;
            scalar4++;
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func12() {
   func14();
   func15();
   func16();
   func17();
}

void func6() {
   func8(rng());
   func9();
   func10(rng());
   func11(rng());
}

