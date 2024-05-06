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
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int scalar5 = 1;
            scalar0++;
            int scalar6 = 1;
            scalar6--;
            int scalar7 = 1;
            scalar4++;
            if(rng() & 1) {
               func12(rng());
            }
            else {
               int scalar8 = 1;
               if(rng() & 1) {
                  func13();
               }
               else {
                  for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                     int scalar10 = 1;
                     scalar10++;
                     int scalar11 = 1;
                     scalar8--;
                     int scalar12 = 1;
                     scalar3++;
                     if(rng() & 1) {
                        func24(rng());
                     }
                     else {
                        int scalar13 = 1;
                        if(rng() & 1) {
                           func25();
                        }
                        else {
                           for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                              int scalar15 = 1;
                              scalar1++;
                              int scalar16 = 1;
                              scalar14--;
                              int scalar17 = 1;
                              scalar5++;
                              if(rng() & 1) {
                                 func36();
                              }
                              else {
                                 int scalar18 = 1;
                                 if(rng() & 1) {
                                    func37();
                                 }
                                 else {
                                    for(int scalar19 = 0; scalar19 < 10; scalar19++) {
                                       int scalar20 = 1;
                                       scalar13++;
                                       int scalar21 = 1;
                                       scalar9--;
                                       int scalar22 = 1;
                                       scalar15++;
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
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            int scalar8 = 1;
            scalar6++;
            int scalar9 = 1;
            scalar1--;
            int scalar10 = 1;
            scalar5++;
            if(rng() & 1) {
               func20(rng());
            }
            else {
               int scalar11 = 1;
               if(rng() & 1) {
                  func23();
               }
               else {
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     int scalar13 = 1;
                     scalar5++;
                     int scalar14 = 1;
                     scalar9--;
                     int scalar15 = 1;
                     scalar15++;
                     if(rng() & 1) {
                        func32(rng());
                     }
                     else {
                        int scalar16 = 1;
                        if(rng() & 1) {
                           func35();
                        }
                        else {
                           for(int scalar17 = 0; scalar17 < 10; scalar17++) {
                              int scalar18 = 1;
                              scalar15++;
                              int scalar19 = 1;
                              scalar16--;
                              int scalar20 = 1;
                              scalar5++;
                              if(rng() & 1) {
                                 func44();
                              }
                              else {
                                 int scalar21 = 1;
                                 if(rng() & 1) {
                                    func47();
                                 }
                                 else {
                                    for(int scalar22 = 0; scalar22 < 10; scalar22++) {
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
   for(int scalar6 = 0; scalar6 < 10; scalar6++) {
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
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            int scalar8 = 1;
            scalar4++;
            int scalar9 = 1;
            scalar5--;
            int scalar10 = 1;
            scalar8++;
            if(PATH0 & 4) {
               func24(rng());
            }
            else {
               int scalar11 = 1;
               if(PATH0 & 8) {
                  func25();
               }
               else {
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     int scalar13 = 1;
                     scalar7++;
                     int scalar14 = 1;
                     scalar6--;
                     int scalar15 = 1;
                     scalar4++;
                     if(PATH0 & 16) {
                        func36();
                     }
                     else {
                        int scalar16 = 1;
                        if(PATH0 & 32) {
                           func37();
                        }
                        else {
                           for(int scalar17 = 0; scalar17 < 10; scalar17++) {
                              int scalar18 = 1;
                              scalar12++;
                              int scalar19 = 1;
                              scalar13--;
                              int scalar20 = 1;
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
         for(int scalar10 = 0; scalar10 < 10; scalar10++) {
            int scalar11 = 1;
            scalar7++;
            int scalar12 = 1;
            scalar7--;
            int scalar13 = 1;
            scalar13++;
            if(PATH0 & 4) {
               func36();
            }
            else {
               int scalar14 = 1;
               if(PATH0 & 8) {
                  func37();
               }
               else {
                  for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                     int scalar16 = 1;
                     scalar16++;
                     int scalar17 = 1;
                     scalar12--;
                     int scalar18 = 1;
                     scalar7++;
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
         for(int scalar13 = 0; scalar13 < 10; scalar13++) {
            int scalar14 = 1;
            scalar10++;
            int scalar15 = 1;
            scalar15--;
            int scalar16 = 1;
            scalar15++;
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
   for(int scalar13 = 0; scalar13 < 10; scalar13++) {
      int scalar14 = 1;
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
   for(int scalar10 = 0; scalar10 < 10; scalar10++) {
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
   int scalar11 = 1;
   int scalar12 = 1;
   scalar11++;
   int scalar13 = 1;
   scalar11--;
   int scalar14 = 1;
   scalar11++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func31() {
   for(int scalar10 = 0; scalar10 < 10; scalar10++) {
      int scalar11 = 1;
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
   for(int scalar12 = 0; scalar12 < 10; scalar12++) {
      if(PATH0 & 1) {
      }
      else {
         func46();
      }
   }
}

void func46() {
   int scalar13 = 1;
   printf("DELETE!\n");
}

void func40() {
   for(int scalar12 = 0; scalar12 < 10; scalar12++) {
      int scalar13 = 1;
      if (scalar13 == 0) {
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
      int scalar12 = 1;
      if(PATH0 & 2) {
         func47();
      }
      else {
         for(int scalar13 = 0; scalar13 < 10; scalar13++) {
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
         for(int scalar14 = 0; scalar14 < 10; scalar14++) {
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
         for(int scalar11 = 0; scalar11 < 10; scalar11++) {
            int scalar12 = 1;
            scalar12++;
            int scalar13 = 1;
            scalar12--;
            int scalar14 = 1;
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
   for(int scalar7 = 0; scalar7 < 10; scalar7++) {
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
   int scalar8 = 1;
   int scalar9 = 1;
   scalar8++;
   int scalar10 = 1;
   scalar10--;
   int scalar11 = 1;
   scalar11++;
   if(PATH0 & 1) {
      func36();
   }
   else {
      int scalar12 = 1;
      if(PATH0 & 2) {
         func37();
      }
      else {
         for(int scalar13 = 0; scalar13 < 10; scalar13++) {
            int scalar14 = 1;
            scalar9++;
            int scalar15 = 1;
            scalar8--;
            int scalar16 = 1;
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
   printf("DELETE!\n");
}

void func19() {
   for(int scalar7 = 0; scalar7 < 10; scalar7++) {
      int scalar8 = 1;
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
   for(int scalar9 = 0; scalar9 < 10; scalar9++) {
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
   int scalar10 = 1;
   int scalar11 = 1;
   scalar11++;
   int scalar12 = 1;
   scalar10--;
   int scalar13 = 1;
   scalar11++;
   if(PATH0 & 1) {
      func44();
   }
   else {
      int scalar14 = 1;
      if(PATH0 & 2) {
         func47();
      }
      else {
         for(int scalar15 = 0; scalar15 < 10; scalar15++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func28() {
   for(int scalar9 = 0; scalar9 < 10; scalar9++) {
      int scalar10 = 1;
      if (scalar10 == 0) {
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
      int scalar9 = 1;
      if(PATH0 & 2) {
         func35();
      }
      else {
         for(int scalar10 = 0; scalar10 < 10; scalar10++) {
            int scalar11 = 1;
            scalar11++;
            int scalar12 = 1;
            scalar10--;
            int scalar13 = 1;
            scalar12++;
            if(PATH0 & 4) {
               func44();
            }
            else {
               int scalar14 = 1;
               if(PATH0 & 8) {
                  func47();
               }
               else {
                  for(int scalar15 = 0; scalar15 < 10; scalar15++) {
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
         for(int scalar11 = 0; scalar11 < 10; scalar11++) {
            int scalar12 = 1;
            scalar12++;
            int scalar13 = 1;
            scalar12--;
            int scalar14 = 1;
            scalar10++;
            if(PATH0 & 4) {
               func44();
            }
            else {
               int scalar15 = 1;
               if(PATH0 & 8) {
                  func47();
               }
               else {
                  for(int scalar16 = 0; scalar16 < 10; scalar16++) {
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
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            int scalar9 = 1;
            scalar9++;
            int scalar10 = 1;
            scalar7--;
            int scalar11 = 1;
            scalar10++;
            if(PATH0 & 4) {
               func36();
            }
            else {
               int scalar12 = 1;
               if(PATH0 & 8) {
                  func37();
               }
               else {
                  for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                     int scalar14 = 1;
                     scalar13++;
                     int scalar15 = 1;
                     scalar12--;
                     int scalar16 = 1;
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
}

void func1() {
   func6(rng());
   func7();
   func8(rng());
   func9(rng());
}

void func6(const unsigned long PATH0) {
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
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
   int scalar5 = 1;
   int scalar6 = 1;
   scalar6++;
   int scalar7 = 1;
   scalar7--;
   int scalar8 = 1;
   scalar5++;
   if(PATH0 & 1) {
      func24(rng());
   }
   else {
      int scalar9 = 1;
      if(PATH0 & 2) {
         func25();
      }
      else {
         for(int scalar10 = 0; scalar10 < 10; scalar10++) {
            int scalar11 = 1;
            scalar8++;
            int scalar12 = 1;
            scalar11--;
            int scalar13 = 1;
            scalar5++;
            if(PATH0 & 4) {
               func36();
            }
            else {
               int scalar14 = 1;
               if(PATH0 & 8) {
                  func37();
               }
               else {
                  for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                     int scalar16 = 1;
                     scalar7++;
                     int scalar17 = 1;
                     scalar10--;
                     int scalar18 = 1;
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
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func7() {
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      int scalar5 = 1;
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
   for(int scalar6 = 0; scalar6 < 10; scalar6++) {
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
   int scalar7 = 1;
   int scalar8 = 1;
   scalar8++;
   int scalar9 = 1;
   scalar9--;
   int scalar10 = 1;
   scalar10++;
   if(PATH0 & 1) {
      func32(rng());
   }
   else {
      int scalar11 = 1;
      if(PATH0 & 2) {
         func35();
      }
      else {
         for(int scalar12 = 0; scalar12 < 10; scalar12++) {
            int scalar13 = 1;
            scalar10++;
            int scalar14 = 1;
            scalar11--;
            int scalar15 = 1;
            scalar15++;
            if(PATH0 & 4) {
               func44();
            }
            else {
               int scalar16 = 1;
               if(PATH0 & 8) {
                  func47();
               }
               else {
                  for(int scalar17 = 0; scalar17 < 10; scalar17++) {
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
   for(int scalar6 = 0; scalar6 < 10; scalar6++) {
      int scalar7 = 1;
      if (scalar6 == 0) {
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
      int scalar6 = 1;
      if(PATH0 & 2) {
         func23();
      }
      else {
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            int scalar8 = 1;
            scalar6++;
            int scalar9 = 1;
            scalar9--;
            int scalar10 = 1;
            scalar7++;
            if(PATH0 & 4) {
               func32(rng());
            }
            else {
               int scalar11 = 1;
               if(PATH0 & 8) {
                  func35();
               }
               else {
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     int scalar13 = 1;
                     scalar8++;
                     int scalar14 = 1;
                     scalar7--;
                     int scalar15 = 1;
                     scalar8++;
                     if(PATH0 & 16) {
                        func44();
                     }
                     else {
                        int scalar16 = 1;
                        if(PATH0 & 32) {
                           func47();
                        }
                        else {
                           for(int scalar17 = 0; scalar17 < 10; scalar17++) {
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
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            int scalar9 = 1;
            scalar5++;
            int scalar10 = 1;
            scalar5--;
            int scalar11 = 1;
            scalar6++;
            if(PATH0 & 4) {
               func32(rng());
            }
            else {
               int scalar12 = 1;
               if(PATH0 & 8) {
                  func35();
               }
               else {
                  for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                     int scalar14 = 1;
                     scalar13++;
                     int scalar15 = 1;
                     scalar10--;
                     int scalar16 = 1;
                     scalar5++;
                     if(PATH0 & 16) {
                        func44();
                     }
                     else {
                        int scalar17 = 1;
                        if(PATH0 & 32) {
                           func47();
                        }
                        else {
                           for(int scalar18 = 0; scalar18 < 10; scalar18++) {
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
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int scalar6 = 1;
            scalar4++;
            int scalar7 = 1;
            scalar6--;
            int scalar8 = 1;
            scalar8++;
            if(PATH0 & 4) {
               func24(rng());
            }
            else {
               int scalar9 = 1;
               if(PATH0 & 8) {
                  func25();
               }
               else {
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     int scalar11 = 1;
                     scalar6++;
                     int scalar12 = 1;
                     scalar12--;
                     int scalar13 = 1;
                     scalar5++;
                     if(PATH0 & 16) {
                        func36();
                     }
                     else {
                        int scalar14 = 1;
                        if(PATH0 & 32) {
                           func37();
                        }
                        else {
                           for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                              int scalar16 = 1;
                              scalar13++;
                              int scalar17 = 1;
                              scalar10--;
                              int scalar18 = 1;
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
   for(int scalar6 = 0; scalar6 < 10; scalar6++) {
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
   int scalar7 = 1;
   int scalar8 = 1;
   scalar8++;
   int scalar9 = 1;
   scalar7--;
   int scalar10 = 1;
   scalar8++;
   if(PATH0 & 1) {
      func20(rng());
   }
   else {
      int scalar11 = 1;
      if(PATH0 & 2) {
         func23();
      }
      else {
         for(int scalar12 = 0; scalar12 < 10; scalar12++) {
            int scalar13 = 1;
            scalar8++;
            int scalar14 = 1;
            scalar10--;
            int scalar15 = 1;
            scalar12++;
            if(PATH0 & 4) {
               func32(rng());
            }
            else {
               int scalar16 = 1;
               if(PATH0 & 8) {
                  func35();
               }
               else {
                  for(int scalar17 = 0; scalar17 < 10; scalar17++) {
                     int scalar18 = 1;
                     scalar15++;
                     int scalar19 = 1;
                     scalar7--;
                     int scalar20 = 1;
                     scalar10++;
                     if(PATH0 & 16) {
                        func44();
                     }
                     else {
                        int scalar21 = 1;
                        if(PATH0 & 32) {
                           func47();
                        }
                        else {
                           for(int scalar22 = 0; scalar22 < 10; scalar22++) {
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
   for(int scalar6 = 0; scalar6 < 10; scalar6++) {
      int scalar7 = 1;
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
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            int scalar8 = 1;
            scalar8++;
            int scalar9 = 1;
            scalar9--;
            int scalar10 = 1;
            scalar10++;
            if(PATH0 & 4) {
               func20(rng());
            }
            else {
               int scalar11 = 1;
               if(PATH0 & 8) {
                  func23();
               }
               else {
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     int scalar13 = 1;
                     scalar12++;
                     int scalar14 = 1;
                     scalar6--;
                     int scalar15 = 1;
                     scalar14++;
                     if(PATH0 & 16) {
                        func32(rng());
                     }
                     else {
                        int scalar16 = 1;
                        if(PATH0 & 32) {
                           func35();
                        }
                        else {
                           for(int scalar17 = 0; scalar17 < 10; scalar17++) {
                              int scalar18 = 1;
                              scalar11++;
                              int scalar19 = 1;
                              scalar16--;
                              int scalar20 = 1;
                              scalar15++;
                              if(PATH0 & 64) {
                                 func44();
                              }
                              else {
                                 int scalar21 = 1;
                                 if(PATH0 & 128) {
                                    func47();
                                 }
                                 else {
                                    for(int scalar22 = 0; scalar22 < 10; scalar22++) {
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
   int scalar7 = 1;
   int scalar8 = 1;
   scalar7++;
   int scalar9 = 1;
   scalar9--;
   int scalar10 = 1;
   scalar9++;
   if(PATH0 & 1) {
      func12(rng());
   }
   else {
      int scalar11 = 1;
      if(PATH0 & 2) {
         func13();
      }
      else {
         for(int scalar12 = 0; scalar12 < 10; scalar12++) {
            int scalar13 = 1;
            scalar12++;
            int scalar14 = 1;
            scalar13--;
            int scalar15 = 1;
            scalar13++;
            if(PATH0 & 4) {
               func24(rng());
            }
            else {
               int scalar16 = 1;
               if(PATH0 & 8) {
                  func25();
               }
               else {
                  for(int scalar17 = 0; scalar17 < 10; scalar17++) {
                     int scalar18 = 1;
                     scalar8++;
                     int scalar19 = 1;
                     scalar12--;
                     int scalar20 = 1;
                     scalar18++;
                     if(PATH0 & 16) {
                        func36();
                     }
                     else {
                        int scalar21 = 1;
                        if(PATH0 & 32) {
                           func37();
                        }
                        else {
                           for(int scalar22 = 0; scalar22 < 10; scalar22++) {
                              int scalar23 = 1;
                              scalar8++;
                              int scalar24 = 1;
                              scalar15--;
                              int scalar25 = 1;
                              scalar17++;
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

