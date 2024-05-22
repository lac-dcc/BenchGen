#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func19();
void func20();
void func21();
void func22();
void func23();
void func13(const unsigned long PATH0);
void func14(const unsigned long PATH0);
void func15();
void func16(const unsigned long PATH0);
void func17(const unsigned long PATH0);
void func24();
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
               int loop4 = 0;
               int loopLimit4 = (rand()%10)/5 + 1;
               for(; loop4 < loopLimit4; loop4++) {
                  if(PATH0 & 1) {
                  }
                  else {
                     func19();
                  }
               }
               if(PATH0 & 2) {
                  func20();
                  func21();
                  func22();
                  func23();
               }
               else {
                  func13(rng());
               }
            }
            if(PATH0 & 4) {
               func14(rng());
               func15();
               func16(rng());
               func17(rng());
            }
            else {
               func7(rng());
            }
         }
         if(PATH0 & 8) {
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
      int loop59 = 0;
      int loopLimit59 = (rand()%10)/2 + 1;
      for(; loop59 < loopLimit59; loop59++) {
         int loop60 = 0;
         int loopLimit60 = (rand()%10)/3 + 1;
         for(; loop60 < loopLimit60; loop60++) {
            int loop61 = 0;
            int loopLimit61 = (rand()%10)/4 + 1;
            for(; loop61 < loopLimit61; loop61++) {
               int loop62 = 0;
               int loopLimit62 = (rand()%10)/5 + 1;
               for(; loop62 < loopLimit62; loop62++) {
                  if(PATH0 & 16) {
                  }
                  else {
                     func19();
                  }
               }
               if(PATH0 & 32) {
                  func20();
                  func21();
                  func22();
                  func23();
               }
               else {
                  func13(rng());
               }
            }
            if(PATH0 & 64) {
               func14(rng());
               func15();
               func16(rng());
               func17(rng());
            }
            else {
               func7(rng());
            }
         }
         if(PATH0 & 128) {
            func10(rng());
         }
         else {
            int scalar2 = 1;
            if(PATH0 & 256) {
               func12();
            }
            else {
               int loop63 = 0;
               int loopLimit63 = (rand()%10)/3 + 1;
               for(; loop63 < loopLimit63; loop63++) {
                  int scalar3 = 1;
                  scalar3++;
                  int loop64 = 0;
                  int loopLimit64 = (rand()%10)/4 + 1;
                  for(; loop64 < loopLimit64; loop64++) {
                     int loop65 = 0;
                     int loopLimit65 = (rand()%10)/5 + 1;
                     for(; loop65 < loopLimit65; loop65++) {
                        if(PATH0 & 512) {
                        }
                        else {
                           func19();
                        }
                     }
                     if(PATH0 & 1024) {
                        func22();
                     }
                     else {
                        int scalar4 = 1;
                        if(PATH0 & 2048) {
                           func24();
                        }
                        else {
                           int loop66 = 0;
                           int loopLimit66 = (rand()%10)/5 + 1;
                           for(; loop66 < loopLimit66; loop66++) {
                           }
                        }
                     }
                  }
                  int scalar4 = 1;
                  if(PATH0 & 4096) {
                     scalar1--;
                  }
                  else {
                     int loop67 = 0;
                     int loopLimit67 = (rand()%10)/4 + 1;
                     for(; loop67 < loopLimit67; loop67++) {
                        scalar2++;
                     }
                  }
                  int scalar5 = 1;
                  scalar3++;
                  if(PATH0 & 8192) {
                     func22();
                  }
                  else {
                     int scalar6 = 1;
                     if(PATH0 & 16384) {
                        func24();
                     }
                     else {
                        int loop68 = 0;
                        int loopLimit68 = (rand()%10)/4 + 1;
                        for(; loop68 < loopLimit68; loop68++) {
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
      int scalar2 = 1;
      if(PATH0 & 32768) {
         scalar1--;
      }
      else {
         int loop69 = 0;
         int loopLimit69 = (rand()%10)/2 + 1;
         for(; loop69 < loopLimit69; loop69++) {
            scalar1++;
         }
      }
      int scalar3 = 1;
      scalar2++;
      if(PATH0 & 65536) {
         func10(rng());
      }
      else {
         int scalar4 = 1;
         if(PATH0 & 131072) {
            func12();
         }
         else {
            int loop70 = 0;
            int loopLimit70 = (rand()%10)/2 + 1;
            for(; loop70 < loopLimit70; loop70++) {
               int scalar5 = 1;
               scalar1++;
               int loop71 = 0;
               int loopLimit71 = (rand()%10)/3 + 1;
               for(; loop71 < loopLimit71; loop71++) {
                  int loop72 = 0;
                  int loopLimit72 = (rand()%10)/4 + 1;
                  for(; loop72 < loopLimit72; loop72++) {
                     if(PATH0 & 262144) {
                     }
                     else {
                        func19();
                     }
                  }
                  if(PATH0 & 524288) {
                     func22();
                  }
                  else {
                     int scalar6 = 1;
                     if(PATH0 & 1048576) {
                        func24();
                     }
                     else {
                        int loop73 = 0;
                        int loopLimit73 = (rand()%10)/4 + 1;
                        for(; loop73 < loopLimit73; loop73++) {
                        }
                     }
                  }
               }
               int scalar6 = 1;
               if(PATH0 & 2097152) {
                  scalar4--;
               }
               else {
                  int loop74 = 0;
                  int loopLimit74 = (rand()%10)/3 + 1;
                  for(; loop74 < loopLimit74; loop74++) {
                     scalar3++;
                  }
               }
               int scalar7 = 1;
               scalar6++;
               if(PATH0 & 4194304) {
                  func22();
               }
               else {
                  int scalar8 = 1;
                  if(PATH0 & 8388608) {
                     func24();
                  }
                  else {
                     int loop75 = 0;
                     int loopLimit75 = (rand()%10)/3 + 1;
                     for(; loop75 < loopLimit75; loop75++) {
                     }
                  }
               }
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
      printf("DELETE!\n");
      if(PATH0 & 16777216) {
         func4(rng());
      }
      else {
         int scalar4 = 1;
         if(PATH0 & 33554432) {
            func6();
         }
         else {
            int loop76 = 0;
            int loopLimit76 = (rand()%10)/2 + 1;
            for(; loop76 < loopLimit76; loop76++) {
               int scalar5 = 1;
               scalar2++;
               int loop77 = 0;
               int loopLimit77 = (rand()%10)/3 + 1;
               for(; loop77 < loopLimit77; loop77++) {
                  int loop78 = 0;
                  int loopLimit78 = (rand()%10)/4 + 1;
                  for(; loop78 < loopLimit78; loop78++) {
                     int loop79 = 0;
                     int loopLimit79 = (rand()%10)/5 + 1;
                     for(; loop79 < loopLimit79; loop79++) {
                        if(PATH0 & 67108864) {
                        }
                        else {
                           func19();
                        }
                     }
                     if(PATH0 & 134217728) {
                        func20();
                        func21();
                        func22();
                        func23();
                     }
                     else {
                        func13(rng());
                     }
                  }
                  if(PATH0 & 268435456) {
                     func16(rng());
                  }
                  else {
                     int scalar6 = 1;
                     if(PATH0 & 536870912) {
                        func18();
                     }
                     else {
                        int loop80 = 0;
                        int loopLimit80 = (rand()%10)/4 + 1;
                        for(; loop80 < loopLimit80; loop80++) {
                           int scalar7 = 1;
                           scalar6++;
                           int loop81 = 0;
                           int loopLimit81 = (rand()%10)/5 + 1;
                           for(; loop81 < loopLimit81; loop81++) {
                           }
                           int scalar8 = 1;
                           if(PATH0 & 1073741824) {
                              scalar7--;
                           }
                           else {
                              int loop82 = 0;
                              int loopLimit82 = (rand()%10)/5 + 1;
                              for(; loop82 < loopLimit82; loop82++) {
                                 scalar2++;
                              }
                           }
                           int scalar9 = 1;
                           scalar5++;
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                        }
                     }
                  }
               }
               int scalar6 = 1;
               if(PATH0 & -2147483648) {
                  scalar6--;
               }
               else {
                  int loop83 = 0;
                  int loopLimit83 = (rand()%10)/3 + 1;
                  for(; loop83 < loopLimit83; loop83++) {
                     scalar1++;
                  }
               }
               int scalar7 = 1;
               scalar4++;
               if(PATH0 & -2147483648) {
                  func16(rng());
               }
               else {
                  int scalar8 = 1;
                  if(PATH0 & -2147483648) {
                     func18();
                  }
                  else {
                     int loop84 = 0;
                     int loopLimit84 = (rand()%10)/3 + 1;
                     for(; loop84 < loopLimit84; loop84++) {
                        int scalar9 = 1;
                        scalar1++;
                        int loop85 = 0;
                        int loopLimit85 = (rand()%10)/4 + 1;
                        for(; loop85 < loopLimit85; loop85++) {
                        }
                        int scalar10 = 1;
                        if(PATH0 & -2147483648) {
                           scalar6--;
                        }
                        else {
                           int loop86 = 0;
                           int loopLimit86 = (rand()%10)/4 + 1;
                           for(; loop86 < loopLimit86; loop86++) {
                              scalar5++;
                           }
                        }
                        int scalar11 = 1;
                        scalar11++;
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                        printf("DELETE!\n");
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

void func19() {
   int scalar1 = 1;
   printf("DELETE!\n");
}

void func20() {
}

void func21() {
   int loop5 = 0;
   int loopLimit5 = (rand()%10)/5 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func22() {
}

void func23() {
}

void func13(const unsigned long PATH0) {
   int scalar1 = 1;
   int scalar2 = 1;
   scalar1++;
   int loop6 = 0;
   int loopLimit6 = (rand()%10)/5 + 1;
   for(; loop6 < loopLimit6; loop6++) {
   }
   int scalar3 = 1;
   if(PATH0 & 1) {
      scalar1--;
   }
   else {
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/5 + 1;
      for(; loop7 < loopLimit7; loop7++) {
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

void func14(const unsigned long PATH0) {
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/4 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      if(PATH0 & 1) {
      }
      else {
         func19();
      }
   }
}

void func15() {
   int loop9 = 0;
   int loopLimit9 = (rand()%10)/4 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func20();
      func21();
      func22();
      func23();
      printf("DELETE!\n");
   }
}

void func16(const unsigned long PATH0) {
   int scalar1 = 1;
   scalar1++;
   int loop10 = 0;
   int loopLimit10 = (rand()%10)/4 + 1;
   for(; loop10 < loopLimit10; loop10++) {
   }
   int scalar2 = 1;
   if(PATH0 & 1) {
      scalar1--;
   }
   else {
      int loop11 = 0;
      int loopLimit11 = (rand()%10)/4 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         scalar2++;
      }
   }
   int scalar3 = 1;
   scalar2++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func17(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func22();
   }
   else {
      int scalar1 = 1;
      if(PATH0 & 2) {
         func24();
      }
      else {
         int loop12 = 0;
         int loopLimit12 = (rand()%10)/4 + 1;
         for(; loop12 < loopLimit12; loop12++) {
         }
      }
   }
}

void func24() {
}

void func7(const unsigned long PATH0) {
   int scalar1 = 1;
   int scalar2 = 1;
   scalar1++;
   int loop13 = 0;
   int loopLimit13 = (rand()%10)/4 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/5 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         if(PATH0 & 1) {
         }
         else {
            func19();
         }
      }
      if(PATH0 & 2) {
         func22();
      }
      else {
         int scalar3 = 1;
         if(PATH0 & 4) {
            func24();
         }
         else {
            int loop15 = 0;
            int loopLimit15 = (rand()%10)/5 + 1;
            for(; loop15 < loopLimit15; loop15++) {
            }
         }
      }
   }
   int scalar3 = 1;
   if(PATH0 & 8) {
      scalar2--;
   }
   else {
      int loop16 = 0;
      int loopLimit16 = (rand()%10)/4 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         scalar3++;
      }
   }
   int scalar4 = 1;
   scalar4++;
   if(PATH0 & 16) {
      func22();
   }
   else {
      int scalar5 = 1;
      if(PATH0 & 32) {
         func24();
      }
      else {
         int loop17 = 0;
         int loopLimit17 = (rand()%10)/4 + 1;
         for(; loop17 < loopLimit17; loop17++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func8(const unsigned long PATH0) {
   int loop18 = 0;
   int loopLimit18 = (rand()%10)/3 + 1;
   for(; loop18 < loopLimit18; loop18++) {
      int loop19 = 0;
      int loopLimit19 = (rand()%10)/4 + 1;
      for(; loop19 < loopLimit19; loop19++) {
         if(PATH0 & 1) {
         }
         else {
            func19();
         }
      }
      if(PATH0 & 2) {
         func20();
         func21();
         func22();
         func23();
      }
      else {
         func13(rng());
      }
   }
}

void func9() {
   int loop20 = 0;
   int loopLimit20 = (rand()%10)/3 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func14(rng());
      func15();
      func16(rng());
      func17(rng());
      printf("DELETE!\n");
   }
}

void func10(const unsigned long PATH0) {
   int scalar1 = 1;
   scalar1++;
   int loop21 = 0;
   int loopLimit21 = (rand()%10)/3 + 1;
   for(; loop21 < loopLimit21; loop21++) {
      int loop22 = 0;
      int loopLimit22 = (rand()%10)/4 + 1;
      for(; loop22 < loopLimit22; loop22++) {
         if(PATH0 & 1) {
         }
         else {
            func19();
         }
      }
      if(PATH0 & 2) {
         func22();
      }
      else {
         int scalar2 = 1;
         if(PATH0 & 4) {
            func24();
         }
         else {
            int loop23 = 0;
            int loopLimit23 = (rand()%10)/4 + 1;
            for(; loop23 < loopLimit23; loop23++) {
            }
         }
      }
   }
   int scalar2 = 1;
   if(PATH0 & 8) {
      scalar1--;
   }
   else {
      int loop24 = 0;
      int loopLimit24 = (rand()%10)/3 + 1;
      for(; loop24 < loopLimit24; loop24++) {
         scalar1++;
      }
   }
   int scalar3 = 1;
   scalar2++;
   if(PATH0 & 16) {
      func22();
   }
   else {
      int scalar4 = 1;
      if(PATH0 & 32) {
         func24();
      }
      else {
         int loop25 = 0;
         int loopLimit25 = (rand()%10)/3 + 1;
         for(; loop25 < loopLimit25; loop25++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func11(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      int scalar1 = 1;
      if(PATH0 & 2) {
         func18();
      }
      else {
         int loop26 = 0;
         int loopLimit26 = (rand()%10)/3 + 1;
         for(; loop26 < loopLimit26; loop26++) {
            int scalar2 = 1;
            scalar1++;
            int loop27 = 0;
            int loopLimit27 = (rand()%10)/4 + 1;
            for(; loop27 < loopLimit27; loop27++) {
            }
            int scalar3 = 1;
            if(PATH0 & 4) {
               scalar3--;
            }
            else {
               int loop28 = 0;
               int loopLimit28 = (rand()%10)/4 + 1;
               for(; loop28 < loopLimit28; loop28++) {
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

void func18() {
   func20();
   func21();
   func22();
   func23();
}

void func1(const unsigned long PATH0) {
   int scalar1 = 1;
   int scalar2 = 1;
   scalar2++;
   int loop29 = 0;
   int loopLimit29 = (rand()%10)/3 + 1;
   for(; loop29 < loopLimit29; loop29++) {
      int loop30 = 0;
      int loopLimit30 = (rand()%10)/4 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         int loop31 = 0;
         int loopLimit31 = (rand()%10)/5 + 1;
         for(; loop31 < loopLimit31; loop31++) {
            if(PATH0 & 1) {
            }
            else {
               func19();
            }
         }
         if(PATH0 & 2) {
            func20();
            func21();
            func22();
            func23();
         }
         else {
            func13(rng());
         }
      }
      if(PATH0 & 4) {
         func16(rng());
      }
      else {
         int scalar3 = 1;
         if(PATH0 & 8) {
            func18();
         }
         else {
            int loop32 = 0;
            int loopLimit32 = (rand()%10)/4 + 1;
            for(; loop32 < loopLimit32; loop32++) {
               int scalar4 = 1;
               scalar3++;
               int loop33 = 0;
               int loopLimit33 = (rand()%10)/5 + 1;
               for(; loop33 < loopLimit33; loop33++) {
               }
               int scalar5 = 1;
               if(PATH0 & 16) {
                  scalar1--;
               }
               else {
                  int loop34 = 0;
                  int loopLimit34 = (rand()%10)/5 + 1;
                  for(; loop34 < loopLimit34; loop34++) {
                     scalar3++;
                  }
               }
               int scalar6 = 1;
               scalar2++;
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
   int scalar3 = 1;
   if(PATH0 & 32) {
      scalar2--;
   }
   else {
      int loop35 = 0;
      int loopLimit35 = (rand()%10)/3 + 1;
      for(; loop35 < loopLimit35; loop35++) {
         scalar2++;
      }
   }
   int scalar4 = 1;
   scalar2++;
   if(PATH0 & 64) {
      func16(rng());
   }
   else {
      int scalar5 = 1;
      if(PATH0 & 128) {
         func18();
      }
      else {
         int loop36 = 0;
         int loopLimit36 = (rand()%10)/3 + 1;
         for(; loop36 < loopLimit36; loop36++) {
            int scalar6 = 1;
            scalar1++;
            int loop37 = 0;
            int loopLimit37 = (rand()%10)/4 + 1;
            for(; loop37 < loopLimit37; loop37++) {
            }
            int scalar7 = 1;
            if(PATH0 & 256) {
               scalar4--;
            }
            else {
               int loop38 = 0;
               int loopLimit38 = (rand()%10)/4 + 1;
               for(; loop38 < loopLimit38; loop38++) {
                  scalar6++;
               }
            }
            int scalar8 = 1;
            scalar6++;
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func2(const unsigned long PATH0) {
   int loop39 = 0;
   int loopLimit39 = (rand()%10)/2 + 1;
   for(; loop39 < loopLimit39; loop39++) {
      int loop40 = 0;
      int loopLimit40 = (rand()%10)/3 + 1;
      for(; loop40 < loopLimit40; loop40++) {
         int loop41 = 0;
         int loopLimit41 = (rand()%10)/4 + 1;
         for(; loop41 < loopLimit41; loop41++) {
            if(PATH0 & 1) {
            }
            else {
               func19();
            }
         }
         if(PATH0 & 2) {
            func20();
            func21();
            func22();
            func23();
         }
         else {
            func13(rng());
         }
      }
      if(PATH0 & 4) {
         func14(rng());
         func15();
         func16(rng());
         func17(rng());
      }
      else {
         func7(rng());
      }
   }
}

void func3() {
   int loop42 = 0;
   int loopLimit42 = (rand()%10)/2 + 1;
   for(; loop42 < loopLimit42; loop42++) {
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
   int loop43 = 0;
   int loopLimit43 = (rand()%10)/2 + 1;
   for(; loop43 < loopLimit43; loop43++) {
      int loop44 = 0;
      int loopLimit44 = (rand()%10)/3 + 1;
      for(; loop44 < loopLimit44; loop44++) {
         int loop45 = 0;
         int loopLimit45 = (rand()%10)/4 + 1;
         for(; loop45 < loopLimit45; loop45++) {
            if(PATH0 & 1) {
            }
            else {
               func19();
            }
         }
         if(PATH0 & 2) {
            func20();
            func21();
            func22();
            func23();
         }
         else {
            func13(rng());
         }
      }
      if(PATH0 & 4) {
         func16(rng());
      }
      else {
         int scalar2 = 1;
         if(PATH0 & 8) {
            func18();
         }
         else {
            int loop46 = 0;
            int loopLimit46 = (rand()%10)/3 + 1;
            for(; loop46 < loopLimit46; loop46++) {
               int scalar3 = 1;
               scalar2++;
               int loop47 = 0;
               int loopLimit47 = (rand()%10)/4 + 1;
               for(; loop47 < loopLimit47; loop47++) {
               }
               int scalar4 = 1;
               if(PATH0 & 16) {
                  scalar4--;
               }
               else {
                  int loop48 = 0;
                  int loopLimit48 = (rand()%10)/4 + 1;
                  for(; loop48 < loopLimit48; loop48++) {
                     scalar3++;
                  }
               }
               int scalar5 = 1;
               scalar5++;
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
   int scalar2 = 1;
   if(PATH0 & 32) {
      scalar2--;
   }
   else {
      int loop49 = 0;
      int loopLimit49 = (rand()%10)/2 + 1;
      for(; loop49 < loopLimit49; loop49++) {
         scalar2++;
      }
   }
   int scalar3 = 1;
   scalar3++;
   if(PATH0 & 64) {
      func16(rng());
   }
   else {
      int scalar4 = 1;
      if(PATH0 & 128) {
         func18();
      }
      else {
         int loop50 = 0;
         int loopLimit50 = (rand()%10)/2 + 1;
         for(; loop50 < loopLimit50; loop50++) {
            int scalar5 = 1;
            scalar5++;
            int loop51 = 0;
            int loopLimit51 = (rand()%10)/3 + 1;
            for(; loop51 < loopLimit51; loop51++) {
            }
            int scalar6 = 1;
            if(PATH0 & 256) {
               scalar2--;
            }
            else {
               int loop52 = 0;
               int loopLimit52 = (rand()%10)/3 + 1;
               for(; loop52 < loopLimit52; loop52++) {
                  scalar3++;
               }
            }
            int scalar7 = 1;
            scalar3++;
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
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
         int loop53 = 0;
         int loopLimit53 = (rand()%10)/2 + 1;
         for(; loop53 < loopLimit53; loop53++) {
            int scalar2 = 1;
            scalar2++;
            int loop54 = 0;
            int loopLimit54 = (rand()%10)/3 + 1;
            for(; loop54 < loopLimit54; loop54++) {
               int loop55 = 0;
               int loopLimit55 = (rand()%10)/4 + 1;
               for(; loop55 < loopLimit55; loop55++) {
                  if(PATH0 & 4) {
                  }
                  else {
                     func19();
                  }
               }
               if(PATH0 & 8) {
                  func22();
               }
               else {
                  int scalar3 = 1;
                  if(PATH0 & 16) {
                     func24();
                  }
                  else {
                     int loop56 = 0;
                     int loopLimit56 = (rand()%10)/4 + 1;
                     for(; loop56 < loopLimit56; loop56++) {
                     }
                  }
               }
            }
            int scalar3 = 1;
            if(PATH0 & 32) {
               scalar1--;
            }
            else {
               int loop57 = 0;
               int loopLimit57 = (rand()%10)/3 + 1;
               for(; loop57 < loopLimit57; loop57++) {
                  scalar3++;
               }
            }
            int scalar4 = 1;
            scalar3++;
            if(PATH0 & 64) {
               func22();
            }
            else {
               int scalar5 = 1;
               if(PATH0 & 128) {
                  func24();
               }
               else {
                  int loop58 = 0;
                  int loopLimit58 = (rand()%10)/3 + 1;
                  for(; loop58 < loopLimit58; loop58++) {
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

void func12() {
   func14(rng());
   func15();
   func16(rng());
   func17(rng());
}

void func6() {
   func8(rng());
   func9();
   func10(rng());
   func11(rng());
}

