#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func12(const unsigned long PATH0);
void func24(const unsigned long PATH0);
void func36();
void func37();
void func42();
void func43();
void func44();
void func45();
void func25();
void func30(const unsigned long PATH0);
void func38();
void func31();
void func39(const unsigned long PATH0);
void func46();
void func40();
void func41(const unsigned long PATH0);
void func47();
void func32(const unsigned long PATH0);
void func33(const unsigned long PATH0);
void func13();
void func18(const unsigned long PATH0);
void func26(const unsigned long PATH0);
void func19();
void func27(const unsigned long PATH0);
void func34(const unsigned long PATH0);
void func28();
void func29(const unsigned long PATH0);
void func35();
void func20(const unsigned long PATH0);
void func21(const unsigned long PATH0);
void func1();
void func6(const unsigned long PATH0);
void func14(const unsigned long PATH0);
void func7();
void func15(const unsigned long PATH0);
void func22(const unsigned long PATH0);
void func16();
void func17(const unsigned long PATH0);
void func23();
void func8(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func10();
void func2(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func3();
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   int scalar1 = 1;
   int scalar2 = 1;
   if(rng() & 1) {
      func0(rng());
   }
   else {
      int scalar3 = 1;
      if(rng() & 1) {
         func1();
      }
      else {
         for(int loop43 = 0; loop43 < 3; loop43++) {
            int scalar4 = 1;
            scalar2++;
            int scalar5 = 1;
            scalar4--;
            int scalar6 = 1;
            scalar1++;
            if(rng() & 1) {
               func12(rng());
            }
            else {
               int scalar7 = 1;
               if(rng() & 1) {
                  func13();
               }
               else {
                  for(int loop44 = 0; loop44 < 3; loop44++) {
                     int scalar8 = 1;
                     scalar7++;
                     int scalar9 = 1;
                     scalar0--;
                     int scalar10 = 1;
                     scalar8++;
                     if(rng() & 1) {
                        func24(rng());
                     }
                     else {
                        int scalar11 = 1;
                        if(rng() & 1) {
                           func25();
                        }
                        else {
                           for(int loop45 = 0; loop45 < 3; loop45++) {
                              int scalar12 = 1;
                              scalar6++;
                              int scalar13 = 1;
                              scalar7--;
                              int scalar14 = 1;
                              scalar14++;
                              if(rng() & 1) {
                                 func36();
                              }
                              else {
                                 int scalar15 = 1;
                                 if(rng() & 1) {
                                    func37();
                                 }
                                 else {
                                    for(int loop46 = 0; loop46 < 3; loop46++) {
                                       int scalar16 = 1;
                                       scalar10++;
                                       int scalar17 = 1;
                                       scalar5--;
                                       int scalar18 = 1;
                                       scalar10++;
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
   int scalar3 = 1;
   scalar1++;
   int scalar4 = 1;
   scalar1--;
   int scalar5 = 1;
   scalar1++;
   if(rng() & 1) {
      func8(rng());
   }
   else {
      int scalar6 = 1;
      if(rng() & 1) {
         func10();
      }
      else {
         for(int loop47 = 0; loop47 < 3; loop47++) {
            int scalar7 = 1;
            scalar1++;
            int scalar8 = 1;
            scalar2--;
            int scalar9 = 1;
            scalar1++;
            if(rng() & 1) {
               func20(rng());
            }
            else {
               int scalar10 = 1;
               if(rng() & 1) {
                  func23();
               }
               else {
                  for(int loop48 = 0; loop48 < 3; loop48++) {
                     int scalar11 = 1;
                     scalar11++;
                     int scalar12 = 1;
                     scalar2--;
                     int scalar13 = 1;
                     scalar5++;
                     if(rng() & 1) {
                        func32(rng());
                     }
                     else {
                        int scalar14 = 1;
                        if(rng() & 1) {
                           func35();
                        }
                        else {
                           for(int loop49 = 0; loop49 < 3; loop49++) {
                              int scalar15 = 1;
                              scalar7++;
                              int scalar16 = 1;
                              scalar15--;
                              int scalar17 = 1;
                              scalar5++;
                              if(rng() & 1) {
                                 func44();
                              }
                              else {
                                 int scalar18 = 1;
                                 if(rng() & 1) {
                                    func47();
                                 }
                                 else {
                                    for(int loop50 = 0; loop50 < 3; loop50++) {
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
   func2(rng());
   func3();
   func0(rng());
   func4(rng());
   for(int loop60 = 0; loop60 < 3; loop60++) {
      if(rng() & 1) {
         func6(rng());
         func7();
         func8(rng());
         func9(rng());
      }
      else {
         func5(rng());
      }
   }
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0) {
   int scalar3 = 1;
   scalar3++;
   int scalar4 = 1;
   scalar3--;
   int scalar5 = 1;
   scalar3++;
   if(PATH0 & 1) {
      func12(rng());
   }
   else {
      int scalar6 = 1;
      if(PATH0 & 2) {
         func13();
      }
      else {
         for(int loop23 = 0; loop23 < 3; loop23++) {
            int scalar7 = 1;
            scalar4++;
            int scalar8 = 1;
            scalar6--;
            int scalar9 = 1;
            scalar9++;
            if(PATH0 & 4) {
               func24(rng());
            }
            else {
               int scalar10 = 1;
               if(PATH0 & 8) {
                  func25();
               }
               else {
                  for(int loop24 = 0; loop24 < 3; loop24++) {
                     int scalar11 = 1;
                     scalar8++;
                     int scalar12 = 1;
                     scalar10--;
                     int scalar13 = 1;
                     scalar9++;
                     if(PATH0 & 16) {
                        func36();
                     }
                     else {
                        int scalar14 = 1;
                        if(PATH0 & 32) {
                           func37();
                        }
                        else {
                           for(int loop25 = 0; loop25 < 3; loop25++) {
                              int scalar15 = 1;
                              scalar7++;
                              int scalar16 = 1;
                              scalar15--;
                              int scalar17 = 1;
                              scalar12++;
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

void func12(const unsigned long PATH0) {
   int scalar6 = 1;
   scalar6++;
   int scalar7 = 1;
   scalar7--;
   int scalar8 = 1;
   scalar7++;
   if(PATH0 & 1) {
      func24(rng());
   }
   else {
      int scalar9 = 1;
      if(PATH0 & 2) {
         func25();
      }
      else {
         for(int loop9 = 0; loop9 < 3; loop9++) {
            int scalar10 = 1;
            scalar9++;
            int scalar11 = 1;
            scalar7--;
            int scalar12 = 1;
            scalar11++;
            if(PATH0 & 4) {
               func36();
            }
            else {
               int scalar13 = 1;
               if(PATH0 & 8) {
                  func37();
               }
               else {
                  for(int loop10 = 0; loop10 < 3; loop10++) {
                     int scalar14 = 1;
                     scalar11++;
                     int scalar15 = 1;
                     scalar8--;
                     int scalar16 = 1;
                     scalar16++;
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
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func24(const unsigned long PATH0) {
   int scalar9 = 1;
   scalar9++;
   int scalar10 = 1;
   scalar9--;
   int scalar11 = 1;
   scalar9++;
   if(PATH0 & 1) {
      func36();
   }
   else {
      int scalar12 = 1;
      if(PATH0 & 2) {
         func37();
      }
      else {
         for(int loop1 = 0; loop1 < 3; loop1++) {
            int scalar13 = 1;
            scalar13++;
            int scalar14 = 1;
            scalar14--;
            int scalar15 = 1;
            scalar9++;
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

void func36() {
   int scalar12 = 1;
   scalar12++;
   int scalar13 = 1;
   scalar12--;
   int scalar14 = 1;
   scalar13++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func37() {
   func42();
   func43();
   func44();
   func45();
}

void func42() {
}

void func43() {
   for(int loop0 = 0; loop0 < 3; loop0++) {
      int scalar13 = 1;
      if (scalar13 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func44() {
}

void func45() {
}

void func25() {
   func30(rng());
   func31();
   func32(rng());
   func33(rng());
}

void func30(const unsigned long PATH0) {
   for(int loop2 = 0; loop2 < 3; loop2++) {
      if(PATH0 & 1) {
         func42();
         func43();
         func44();
         func45();
      }
      else {
         func38();
      }
   }
}

void func38() {
   int scalar10 = 1;
   int scalar11 = 1;
   scalar10++;
   int scalar12 = 1;
   scalar10--;
   int scalar13 = 1;
   scalar10++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func31() {
   for(int loop3 = 0; loop3 < 3; loop3++) {
      int scalar10 = 1;
      if (scalar10 == 0) {
         printf("IS 0!");
      }
      func39(rng());
      func40();
      func36();
      func41(rng());
      printf("DELETE!\n");
   }
}

void func39(const unsigned long PATH0) {
   for(int loop4 = 0; loop4 < 3; loop4++) {
      if(PATH0 & 1) {
      }
      else {
         func46();
      }
   }
}

void func46() {
   int scalar11 = 1;
   printf("DELETE!\n");
}

void func40() {
   for(int loop5 = 0; loop5 < 3; loop5++) {
      int scalar11 = 1;
      if (scalar11 == 0) {
         printf("IS 0!");
      }
      func42();
      func43();
      func44();
      func45();
      printf("DELETE!\n");
   }
}

void func41(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func44();
   }
   else {
      int scalar11 = 1;
      if(PATH0 & 2) {
         func47();
      }
      else {
         for(int loop6 = 0; loop6 < 3; loop6++) {
         }
      }
   }
}

void func47() {
}

void func32(const unsigned long PATH0) {
   int scalar10 = 1;
   scalar10++;
   int scalar11 = 1;
   scalar11--;
   int scalar12 = 1;
   scalar10++;
   if(PATH0 & 1) {
      func44();
   }
   else {
      int scalar13 = 1;
      if(PATH0 & 2) {
         func47();
      }
      else {
         for(int loop7 = 0; loop7 < 3; loop7++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func33(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func36();
   }
   else {
      int scalar10 = 1;
      if(PATH0 & 2) {
         func37();
      }
      else {
         for(int loop8 = 0; loop8 < 3; loop8++) {
            int scalar11 = 1;
            scalar10++;
            int scalar12 = 1;
            scalar12--;
            int scalar13 = 1;
            scalar12++;
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func13() {
   func18(rng());
   func19();
   func20(rng());
   func21(rng());
}

void func18(const unsigned long PATH0) {
   for(int loop11 = 0; loop11 < 3; loop11++) {
      if(PATH0 & 1) {
         func30(rng());
         func31();
         func32(rng());
         func33(rng());
      }
      else {
         func26(rng());
      }
   }
}

void func26(const unsigned long PATH0) {
   int scalar7 = 1;
   int scalar8 = 1;
   scalar7++;
   int scalar9 = 1;
   scalar9--;
   int scalar10 = 1;
   scalar10++;
   if(PATH0 & 1) {
      func36();
   }
   else {
      int scalar11 = 1;
      if(PATH0 & 2) {
         func37();
      }
      else {
         for(int loop12 = 0; loop12 < 3; loop12++) {
            int scalar12 = 1;
            scalar8++;
            int scalar13 = 1;
            scalar7--;
            int scalar14 = 1;
            scalar10++;
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

void func19() {
   for(int loop13 = 0; loop13 < 3; loop13++) {
      int scalar7 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      func27(rng());
      func28();
      func24(rng());
      func29(rng());
      printf("DELETE!\n");
   }
}

void func27(const unsigned long PATH0) {
   for(int loop14 = 0; loop14 < 3; loop14++) {
      if(PATH0 & 1) {
         func39(rng());
         func40();
         func36();
         func41(rng());
      }
      else {
         func34(rng());
      }
   }
}

void func34(const unsigned long PATH0) {
   int scalar8 = 1;
   int scalar9 = 1;
   scalar9++;
   int scalar10 = 1;
   scalar8--;
   int scalar11 = 1;
   scalar9++;
   if(PATH0 & 1) {
      func44();
   }
   else {
      int scalar12 = 1;
      if(PATH0 & 2) {
         func47();
      }
      else {
         for(int loop15 = 0; loop15 < 3; loop15++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func28() {
   for(int loop16 = 0; loop16 < 3; loop16++) {
      int scalar8 = 1;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      func30(rng());
      func31();
      func32(rng());
      func33(rng());
      printf("DELETE!\n");
   }
}

void func29(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func32(rng());
   }
   else {
      int scalar8 = 1;
      if(PATH0 & 2) {
         func35();
      }
      else {
         for(int loop17 = 0; loop17 < 3; loop17++) {
            int scalar9 = 1;
            scalar8++;
            int scalar10 = 1;
            scalar9--;
            int scalar11 = 1;
            scalar10++;
            if(PATH0 & 4) {
               func44();
            }
            else {
               int scalar12 = 1;
               if(PATH0 & 8) {
                  func47();
               }
               else {
                  for(int loop18 = 0; loop18 < 3; loop18++) {
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

void func35() {
   func39(rng());
   func40();
   func36();
   func41(rng());
}

void func20(const unsigned long PATH0) {
   int scalar7 = 1;
   scalar7++;
   int scalar8 = 1;
   scalar8--;
   int scalar9 = 1;
   scalar7++;
   if(PATH0 & 1) {
      func32(rng());
   }
   else {
      int scalar10 = 1;
      if(PATH0 & 2) {
         func35();
      }
      else {
         for(int loop19 = 0; loop19 < 3; loop19++) {
            int scalar11 = 1;
            scalar10++;
            int scalar12 = 1;
            scalar11--;
            int scalar13 = 1;
            scalar7++;
            if(PATH0 & 4) {
               func44();
            }
            else {
               int scalar14 = 1;
               if(PATH0 & 8) {
                  func47();
               }
               else {
                  for(int loop20 = 0; loop20 < 3; loop20++) {
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
}

void func21(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func24(rng());
   }
   else {
      int scalar7 = 1;
      if(PATH0 & 2) {
         func25();
      }
      else {
         for(int loop21 = 0; loop21 < 3; loop21++) {
            int scalar8 = 1;
            scalar7++;
            int scalar9 = 1;
            scalar9--;
            int scalar10 = 1;
            scalar8++;
            if(PATH0 & 4) {
               func36();
            }
            else {
               int scalar11 = 1;
               if(PATH0 & 8) {
                  func37();
               }
               else {
                  for(int loop22 = 0; loop22 < 3; loop22++) {
                     int scalar12 = 1;
                     scalar9++;
                     int scalar13 = 1;
                     scalar11--;
                     int scalar14 = 1;
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

void func1() {
   func6(rng());
   func7();
   func8(rng());
   func9(rng());
}

void func6(const unsigned long PATH0) {
   for(int loop26 = 0; loop26 < 3; loop26++) {
      if(PATH0 & 1) {
         func18(rng());
         func19();
         func20(rng());
         func21(rng());
      }
      else {
         func14(rng());
      }
   }
}

void func14(const unsigned long PATH0) {
   int scalar4 = 1;
   int scalar5 = 1;
   scalar5++;
   int scalar6 = 1;
   scalar6--;
   int scalar7 = 1;
   scalar4++;
   if(PATH0 & 1) {
      func24(rng());
   }
   else {
      int scalar8 = 1;
      if(PATH0 & 2) {
         func25();
      }
      else {
         for(int loop27 = 0; loop27 < 3; loop27++) {
            int scalar9 = 1;
            scalar7++;
            int scalar10 = 1;
            scalar6--;
            int scalar11 = 1;
            scalar5++;
            if(PATH0 & 4) {
               func36();
            }
            else {
               int scalar12 = 1;
               if(PATH0 & 8) {
                  func37();
               }
               else {
                  for(int loop28 = 0; loop28 < 3; loop28++) {
                     int scalar13 = 1;
                     scalar8++;
                     int scalar14 = 1;
                     scalar14--;
                     int scalar15 = 1;
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
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func7() {
   for(int loop29 = 0; loop29 < 3; loop29++) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func15(rng());
      func16();
      func12(rng());
      func17(rng());
      printf("DELETE!\n");
   }
}

void func15(const unsigned long PATH0) {
   for(int loop30 = 0; loop30 < 3; loop30++) {
      if(PATH0 & 1) {
         func27(rng());
         func28();
         func24(rng());
         func29(rng());
      }
      else {
         func22(rng());
      }
   }
}

void func22(const unsigned long PATH0) {
   int scalar5 = 1;
   int scalar6 = 1;
   scalar6++;
   int scalar7 = 1;
   scalar7--;
   int scalar8 = 1;
   scalar8++;
   if(PATH0 & 1) {
      func32(rng());
   }
   else {
      int scalar9 = 1;
      if(PATH0 & 2) {
         func35();
      }
      else {
         for(int loop31 = 0; loop31 < 3; loop31++) {
            int scalar10 = 1;
            scalar5++;
            int scalar11 = 1;
            scalar10--;
            int scalar12 = 1;
            scalar7++;
            if(PATH0 & 4) {
               func44();
            }
            else {
               int scalar13 = 1;
               if(PATH0 & 8) {
                  func47();
               }
               else {
                  for(int loop32 = 0; loop32 < 3; loop32++) {
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
   printf("DELETE!\n");
}

void func16() {
   for(int loop33 = 0; loop33 < 3; loop33++) {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func18(rng());
      func19();
      func20(rng());
      func21(rng());
      printf("DELETE!\n");
   }
}

void func17(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func20(rng());
   }
   else {
      int scalar5 = 1;
      if(PATH0 & 2) {
         func23();
      }
      else {
         for(int loop34 = 0; loop34 < 3; loop34++) {
            int scalar6 = 1;
            scalar5++;
            int scalar7 = 1;
            scalar5--;
            int scalar8 = 1;
            scalar8++;
            if(PATH0 & 4) {
               func32(rng());
            }
            else {
               int scalar9 = 1;
               if(PATH0 & 8) {
                  func35();
               }
               else {
                  for(int loop35 = 0; loop35 < 3; loop35++) {
                     int scalar10 = 1;
                     scalar7++;
                     int scalar11 = 1;
                     scalar6--;
                     int scalar12 = 1;
                     scalar9++;
                     if(PATH0 & 16) {
                        func44();
                     }
                     else {
                        int scalar13 = 1;
                        if(PATH0 & 32) {
                           func47();
                        }
                        else {
                           for(int loop36 = 0; loop36 < 3; loop36++) {
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
         }
      }
   }
}

void func23() {
   func27(rng());
   func28();
   func24(rng());
   func29(rng());
}

void func8(const unsigned long PATH0) {
   int scalar4 = 1;
   scalar4++;
   int scalar5 = 1;
   scalar4--;
   int scalar6 = 1;
   scalar4++;
   if(PATH0 & 1) {
      func20(rng());
   }
   else {
      int scalar7 = 1;
      if(PATH0 & 2) {
         func23();
      }
      else {
         for(int loop37 = 0; loop37 < 3; loop37++) {
            int scalar8 = 1;
            scalar8++;
            int scalar9 = 1;
            scalar8--;
            int scalar10 = 1;
            scalar8++;
            if(PATH0 & 4) {
               func32(rng());
            }
            else {
               int scalar11 = 1;
               if(PATH0 & 8) {
                  func35();
               }
               else {
                  for(int loop38 = 0; loop38 < 3; loop38++) {
                     int scalar12 = 1;
                     scalar4++;
                     int scalar13 = 1;
                     scalar8--;
                     int scalar14 = 1;
                     scalar13++;
                     if(PATH0 & 16) {
                        func44();
                     }
                     else {
                        int scalar15 = 1;
                        if(PATH0 & 32) {
                           func47();
                        }
                        else {
                           for(int loop39 = 0; loop39 < 3; loop39++) {
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
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func9(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func12(rng());
   }
   else {
      int scalar4 = 1;
      if(PATH0 & 2) {
         func13();
      }
      else {
         for(int loop40 = 0; loop40 < 3; loop40++) {
            int scalar5 = 1;
            scalar5++;
            int scalar6 = 1;
            scalar5--;
            int scalar7 = 1;
            scalar6++;
            if(PATH0 & 4) {
               func24(rng());
            }
            else {
               int scalar8 = 1;
               if(PATH0 & 8) {
                  func25();
               }
               else {
                  for(int loop41 = 0; loop41 < 3; loop41++) {
                     int scalar9 = 1;
                     scalar8++;
                     int scalar10 = 1;
                     scalar5--;
                     int scalar11 = 1;
                     scalar5++;
                     if(PATH0 & 16) {
                        func36();
                     }
                     else {
                        int scalar12 = 1;
                        if(PATH0 & 32) {
                           func37();
                        }
                        else {
                           for(int loop42 = 0; loop42 < 3; loop42++) {
                              int scalar13 = 1;
                              scalar11++;
                              int scalar14 = 1;
                              scalar11--;
                              int scalar15 = 1;
                              scalar13++;
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
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func10() {
   func15(rng());
   func16();
   func12(rng());
   func17(rng());
}

void func2(const unsigned long PATH0) {
   for(int loop51 = 0; loop51 < 3; loop51++) {
      if(PATH0 & 1) {
         func15(rng());
         func16();
         func12(rng());
         func17(rng());
      }
      else {
         func11(rng());
      }
   }
}

void func11(const unsigned long PATH0) {
   int scalar6 = 1;
   int scalar7 = 1;
   scalar7++;
   int scalar8 = 1;
   scalar6--;
   int scalar9 = 1;
   scalar7++;
   if(PATH0 & 1) {
      func20(rng());
   }
   else {
      int scalar10 = 1;
      if(PATH0 & 2) {
         func23();
      }
      else {
         for(int loop52 = 0; loop52 < 3; loop52++) {
            int scalar11 = 1;
            scalar10++;
            int scalar12 = 1;
            scalar7--;
            int scalar13 = 1;
            scalar9++;
            if(PATH0 & 4) {
               func32(rng());
            }
            else {
               int scalar14 = 1;
               if(PATH0 & 8) {
                  func35();
               }
               else {
                  for(int loop53 = 0; loop53 < 3; loop53++) {
                     int scalar15 = 1;
                     scalar10++;
                     int scalar16 = 1;
                     scalar16--;
                     int scalar17 = 1;
                     scalar9++;
                     if(PATH0 & 16) {
                        func44();
                     }
                     else {
                        int scalar18 = 1;
                        if(PATH0 & 32) {
                           func47();
                        }
                        else {
                           for(int loop54 = 0; loop54 < 3; loop54++) {
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
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func3() {
   for(int loop55 = 0; loop55 < 3; loop55++) {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      func7();
      func8(rng());
      func9(rng());
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func8(rng());
   }
   else {
      int scalar6 = 1;
      if(PATH0 & 2) {
         func10();
      }
      else {
         for(int loop56 = 0; loop56 < 3; loop56++) {
            int scalar7 = 1;
            scalar7++;
            int scalar8 = 1;
            scalar6--;
            int scalar9 = 1;
            scalar9++;
            if(PATH0 & 4) {
               func20(rng());
            }
            else {
               int scalar10 = 1;
               if(PATH0 & 8) {
                  func23();
               }
               else {
                  for(int loop57 = 0; loop57 < 3; loop57++) {
                     int scalar11 = 1;
                     scalar6++;
                     int scalar12 = 1;
                     scalar9--;
                     int scalar13 = 1;
                     scalar10++;
                     if(PATH0 & 16) {
                        func32(rng());
                     }
                     else {
                        int scalar14 = 1;
                        if(PATH0 & 32) {
                           func35();
                        }
                        else {
                           for(int loop58 = 0; loop58 < 3; loop58++) {
                              int scalar15 = 1;
                              scalar11++;
                              int scalar16 = 1;
                              scalar8--;
                              int scalar17 = 1;
                              scalar15++;
                              if(PATH0 & 64) {
                                 func44();
                              }
                              else {
                                 int scalar18 = 1;
                                 if(PATH0 & 128) {
                                    func47();
                                 }
                                 else {
                                    for(int loop59 = 0; loop59 < 3; loop59++) {
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

void func5(const unsigned long PATH0) {
   int scalar6 = 1;
   int scalar7 = 1;
   scalar6++;
   int scalar8 = 1;
   scalar8--;
   int scalar9 = 1;
   scalar8++;
   if(PATH0 & 1) {
      func12(rng());
   }
   else {
      int scalar10 = 1;
      if(PATH0 & 2) {
         func13();
      }
      else {
         for(int loop61 = 0; loop61 < 3; loop61++) {
            int scalar11 = 1;
            scalar7++;
            int scalar12 = 1;
            scalar12--;
            int scalar13 = 1;
            scalar9++;
            if(PATH0 & 4) {
               func24(rng());
            }
            else {
               int scalar14 = 1;
               if(PATH0 & 8) {
                  func25();
               }
               else {
                  for(int loop62 = 0; loop62 < 3; loop62++) {
                     int scalar15 = 1;
                     scalar7++;
                     int scalar16 = 1;
                     scalar10--;
                     int scalar17 = 1;
                     scalar17++;
                     if(PATH0 & 16) {
                        func36();
                     }
                     else {
                        int scalar18 = 1;
                        if(PATH0 & 32) {
                           func37();
                        }
                        else {
                           for(int loop63 = 0; loop63 < 3; loop63++) {
                              int scalar19 = 1;
                              scalar14++;
                              int scalar20 = 1;
                              scalar20--;
                              int scalar21 = 1;
                              scalar10++;
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

