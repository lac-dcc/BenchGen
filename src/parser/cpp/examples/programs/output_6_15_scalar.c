#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2, const unsigned long PATH3);
void func11();
void func12(const unsigned long PATH0);
void func9();
void func10(const unsigned long PATH0);
void func7();
void func8(const unsigned long PATH0);
void func5();
void func6(const unsigned long PATH0);
void func3();
void func4(const unsigned long PATH0);
void func1();
void func2(const unsigned long PATH0, const unsigned long PATH1);

int main() {
   int scalar0 = 1;
   func0(rng(), rng(), rng(), rng());
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2, const unsigned long PATH3) {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         if(PATH0 & 1) {
            int loop2 = 0;
            int loopLimit2 = (rand()%10)/3 + 1;
            for(; loop2 < loopLimit2; loop2++) {
               if(PATH0 & 2) {
                  int loop3 = 0;
                  int loopLimit3 = (rand()%10)/4 + 1;
                  for(; loop3 < loopLimit3; loop3++) {
                     if(PATH0 & 4) {
                        int loop4 = 0;
                        int loopLimit4 = (rand()%10)/5 + 1;
                        for(; loop4 < loopLimit4; loop4++) {
                           if(PATH0 & 8) {
                              int loop5 = 0;
                              int loopLimit5 = (rand()%10)/6 + 1;
                              for(; loop5 < loopLimit5; loop5++) {
                                 if(PATH0 & 16) {
                                    int loop6 = 0;
                                    int loopLimit6 = (rand()%10)/7 + 1;
                                    for(; loop6 < loopLimit6; loop6++) {
                                       if(PATH0 & 32) {
                                       }
                                       else {
                                          int scalar1 = 1;
                                          scalar1++;
                                       }
                                       func11();
                                    }
                                    printf("DELETE!\n");
                                 }
                                 else {
                                    int scalar1 = 1;
                                    if (scalar1 == 0) {
                                       printf("IS 0!");
                                    }
                                    func12(rng());
                                    int scalar2 = 1;
                                    if (scalar2 == 0) {
                                       printf("IS 0!");
                                    }
                                    int scalar3 = 1;
                                    scalar2++;
                                 }
                                 func9();
                              }
                              int scalar1 = 1;
                              if(PATH0 & 64) {
                                 int scalar2 = 1;
                                 scalar2++;
                              }
                              else {
                                 int scalar2 = 1;
                                 if (scalar2 == 0) {
                                    printf("IS 0!");
                                 }
                              }
                              printf("DELETE!\n");
                              if(PATH0 & 128) {
                                 int scalar2 = 1;
                                 printf("DELETE!\n");
                                 int scalar3 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar2--;
                                 scalar3++;
                                 scalar2--;
                              }
                              else {
                                 scalar1--;
                              }
                           }
                           else {
                              int scalar1 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              func10(rng());
                              int scalar2 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              func12(rng());
                              int scalar3 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              int scalar4 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              int scalar5 = 1;
                              scalar3++;
                           }
                           func7();
                        }
                        if(PATH0 & 256) {
                           int scalar1 = 1;
                           printf("DELETE!\n");
                           int scalar2 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           scalar1++;
                           scalar2--;
                        }
                        else {
                        }
                        int scalar1 = 1;
                        int scalar2 = 1;
                        if(PATH0 & 512) {
                           int scalar3 = 1;
                           scalar1++;
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                        }
                        if(PATH0 & 1024) {
                           int scalar3 = 1;
                           scalar2++;
                           if(PATH0 & 2048) {
                              int scalar4 = 1;
                              printf("DELETE!\n");
                              int scalar5 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              scalar5++;
                              scalar4--;
                           }
                           else {
                              scalar1--;
                           }
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           int scalar4 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           func12(rng());
                           int scalar5 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                        }
                        printf("DELETE!\n");
                        if(PATH0 & 4096) {
                           int scalar3 = 1;
                           printf("DELETE!\n");
                           int scalar4 = 1;
                           int scalar5 = 1;
                           if(PATH0 & 8192) {
                              int scalar6 = 1;
                              scalar3++;
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                           }
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           scalar4++;
                           scalar2--;
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           func12(rng());
                           int scalar4 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                        }
                     }
                     else {
                        int scalar1 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        func8(rng());
                        int scalar2 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        func10(rng());
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        func12(rng());
                        int scalar4 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        int scalar5 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        int scalar6 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        int scalar7 = 1;
                        scalar1++;
                     }
                     func5();
                  }
                  if(PATH0 & 16384) {
                     int scalar1 = 1;
                     printf("DELETE!\n");
                     int scalar2 = 1;
                     int scalar3 = 1;
                     if(PATH0 & 32768) {
                        int scalar4 = 1;
                        scalar3++;
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                     }
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     scalar1++;
                     scalar3--;
                  }
                  else {
                     int scalar1 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     func12(rng());
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                  }
                  int scalar1 = 1;
                  if(PATH0 & 65536) {
                     int scalar2 = 1;
                     printf("DELETE!\n");
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     scalar2++;
                     scalar3--;
                  }
                  else {
                     scalar1--;
                  }
                  int scalar2 = 1;
                  int scalar3 = 1;
                  if(PATH0 & 131072) {
                     int scalar4 = 1;
                     scalar2++;
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if(PATH0 & 262144) {
                     int scalar4 = 1;
                     scalar2++;
                     if(PATH0 & 524288) {
                        int scalar5 = 1;
                        printf("DELETE!\n");
                        int scalar6 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        scalar5++;
                        scalar4--;
                     }
                     else {
                        scalar4--;
                     }
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     func12(rng());
                     int scalar6 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if(PATH0 & 1048576) {
                     int scalar4 = 1;
                     scalar2++;
                     if(PATH0 & 2097152) {
                        int scalar5 = 1;
                        printf("DELETE!\n");
                        int scalar6 = 1;
                        int scalar7 = 1;
                        if(PATH0 & 4194304) {
                           int scalar8 = 1;
                           scalar4++;
                        }
                        else {
                           int scalar8 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                        }
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        scalar4++;
                        scalar6--;
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        func12(rng());
                        int scalar6 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                     }
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     func10(rng());
                     int scalar6 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     func12(rng());
                     int scalar7 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     int scalar8 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                  }
                  printf("DELETE!\n");
                  if(PATH0 & 8388608) {
                     int scalar4 = 1;
                     printf("DELETE!\n");
                     int scalar5 = 1;
                     if(PATH0 & 16777216) {
                        int scalar6 = 1;
                        printf("DELETE!\n");
                        int scalar7 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        scalar5++;
                        scalar4--;
                     }
                     else {
                        scalar5--;
                     }
                     int scalar6 = 1;
                     int scalar7 = 1;
                     if(PATH0 & 33554432) {
                        int scalar8 = 1;
                        scalar7++;
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                     }
                     if(PATH0 & 67108864) {
                        int scalar8 = 1;
                        scalar5++;
                        if(PATH0 & 134217728) {
                           int scalar9 = 1;
                           printf("DELETE!\n");
                           int scalar10 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           scalar10++;
                           scalar7--;
                        }
                        else {
                           scalar4--;
                        }
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        int scalar9 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        func12(rng());
                        int scalar10 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                     }
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     scalar1++;
                     scalar5--;
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     func10(rng());
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     func12(rng());
                     int scalar6 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     int scalar7 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                  }
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  func6(rng());
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  func8(rng());
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  func10(rng());
                  int scalar4 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  int scalar6 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  int scalar7 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  int scalar8 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  int scalar9 = 1;
                  scalar2++;
               }
               func3();
            }
            if(PATH0 & 268435456) {
               int scalar1 = 1;
               printf("DELETE!\n");
               int scalar2 = 1;
               if(PATH0 & 536870912) {
                  int scalar3 = 1;
                  printf("DELETE!\n");
                  int scalar4 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  scalar4++;
                  scalar3--;
               }
               else {
                  scalar1--;
               }
               int scalar3 = 1;
               int scalar4 = 1;
               if(PATH0 & 1073741824) {
                  int scalar5 = 1;
                  scalar2++;
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
               }
               if(PATH0 & -2147483648) {
                  int scalar5 = 1;
                  scalar2++;
                  if(PATH0 & -2147483648) {
                     int scalar6 = 1;
                     printf("DELETE!\n");
                     int scalar7 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     scalar5++;
                     scalar5--;
                  }
                  else {
                     scalar1--;
                  }
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  int scalar6 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               scalar4++;
               scalar2--;
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
            }
            int scalar1 = 1;
            if(PATH0 & -2147483648) {
               int scalar2 = 1;
               printf("DELETE!\n");
               int scalar3 = 1;
               int scalar4 = 1;
               if(PATH0 & -2147483648) {
                  int scalar5 = 1;
                  scalar2++;
               }
               else {
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               scalar1++;
               scalar1--;
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
            }
            int scalar2 = 1;
            if(PATH0 & -2147483648) {
               int scalar3 = 1;
               printf("DELETE!\n");
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               scalar4++;
               scalar3--;
            }
            else {
               scalar2--;
            }
            int scalar3 = 1;
            int scalar4 = 1;
            if(PATH0 & -2147483648) {
               int scalar5 = 1;
               scalar3++;
            }
            else {
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & -2147483648) {
               int scalar5 = 1;
               scalar3++;
               if(PATH0 & -2147483648) {
                  int scalar6 = 1;
                  printf("DELETE!\n");
                  int scalar7 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  scalar6++;
                  scalar3--;
               }
               else {
                  scalar3--;
               }
            }
            else {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               int scalar6 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar7 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & -2147483648) {
               int scalar5 = 1;
               scalar4++;
               if(PATH0 & -2147483648) {
                  int scalar6 = 1;
                  printf("DELETE!\n");
                  int scalar7 = 1;
                  int scalar8 = 1;
                  if(PATH0 & -2147483648) {
                     int scalar9 = 1;
                     scalar4++;
                  }
                  else {
                     int scalar9 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  scalar8++;
                  scalar2--;
               }
               else {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar7 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
               }
            }
            else {
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               int scalar6 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar7 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar8 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               int scalar9 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & -2147483648) {
               int scalar5 = 1;
               scalar1++;
               if(PATH0 & -2147483648) {
                  int scalar6 = 1;
                  printf("DELETE!\n");
                  int scalar7 = 1;
                  if(PATH0 & -2147483648) {
                     int scalar8 = 1;
                     printf("DELETE!\n");
                     int scalar9 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     scalar1++;
                     scalar8--;
                  }
                  else {
                     scalar3--;
                  }
                  int scalar8 = 1;
                  int scalar9 = 1;
                  if(PATH0 & -2147483648) {
                     int scalar10 = 1;
                     scalar10++;
                  }
                  else {
                     int scalar10 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if(PATH0 & -2147483648) {
                     int scalar10 = 1;
                     scalar2++;
                     if(PATH0 & -2147483648) {
                        int scalar11 = 1;
                        printf("DELETE!\n");
                        int scalar12 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar9--;
                        scalar5++;
                        scalar1--;
                     }
                     else {
                        scalar3--;
                     }
                  }
                  else {
                     int scalar10 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     int scalar11 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     func12(rng());
                     int scalar12 = 1;
                     if (scalar10 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar8--;
                  scalar8++;
                  scalar3--;
               }
               else {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  func10(rng());
                  int scalar7 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar8 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  int scalar9 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
               }
            }
            else {
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               int scalar6 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               func8(rng());
               int scalar7 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar8 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar9 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               int scalar10 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               int scalar11 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
            }
            printf("DELETE!\n");
            if(PATH0 & -2147483648) {
               int scalar5 = 1;
               printf("DELETE!\n");
               int scalar6 = 1;
               if(PATH0 & -2147483648) {
                  int scalar7 = 1;
                  printf("DELETE!\n");
                  int scalar8 = 1;
                  int scalar9 = 1;
                  if(PATH0 & -2147483648) {
                     int scalar10 = 1;
                     scalar5++;
                  }
                  else {
                     int scalar10 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  scalar9--;
                  scalar7++;
                  scalar9--;
               }
               else {
                  int scalar7 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar8 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
               }
               int scalar7 = 1;
               if(PATH0 & -2147483648) {
                  int scalar8 = 1;
                  printf("DELETE!\n");
                  int scalar9 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar9--;
                  scalar8++;
                  scalar5--;
               }
               else {
                  scalar5--;
               }
               int scalar8 = 1;
               int scalar9 = 1;
               if(PATH0 & -2147483648) {
                  int scalar10 = 1;
                  scalar2++;
               }
               else {
                  int scalar10 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
               }
               if(PATH0 & -2147483648) {
                  int scalar10 = 1;
                  scalar5++;
                  if(PATH0 & -2147483648) {
                     int scalar11 = 1;
                     printf("DELETE!\n");
                     int scalar12 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     scalar3++;
                     scalar7--;
                  }
                  else {
                     scalar10--;
                  }
               }
               else {
                  int scalar10 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  int scalar11 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar12 = 1;
                  if (scalar11 == 0) {
                     printf("IS 0!");
                  }
               }
               if(PATH0 & -2147483648) {
                  int scalar10 = 1;
                  scalar7++;
                  if(PATH0 & -2147483648) {
                     int scalar11 = 1;
                     printf("DELETE!\n");
                     int scalar12 = 1;
                     int scalar13 = 1;
                     if(PATH0 & -2147483648) {
                        int scalar14 = 1;
                        scalar5++;
                     }
                     else {
                        int scalar14 = 1;
                        if (scalar12 == 0) {
                           printf("IS 0!");
                        }
                     }
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar12--;
                     scalar8++;
                     scalar12--;
                  }
                  else {
                     int scalar11 = 1;
                     if (scalar11 == 0) {
                        printf("IS 0!");
                     }
                     func12(rng());
                     int scalar12 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar7--;
                  }
               }
               else {
                  int scalar10 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  int scalar11 = 1;
                  if (scalar11 == 0) {
                     printf("IS 0!");
                  }
                  func10(rng());
                  int scalar12 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar13 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  int scalar14 = 1;
                  if (scalar11 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               scalar2++;
               scalar9--;
            }
            else {
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               func8(rng());
               int scalar6 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar7 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar8 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               int scalar9 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               int scalar10 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
            }
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            func4(rng());
            int scalar2 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            func6(rng());
            int scalar3 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar5 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar6 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            int scalar7 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            int scalar8 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            int scalar9 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            int scalar10 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            int scalar11 = 1;
            scalar10++;
         }
         func1();
      }
      if(PATH0 & -2147483648) {
         int scalar1 = 1;
         printf("DELETE!\n");
         int scalar2 = 1;
         if(PATH0 & -2147483648) {
            int scalar3 = 1;
            printf("DELETE!\n");
            int scalar4 = 1;
            int scalar5 = 1;
            if(PATH0 & -2147483648) {
               int scalar6 = 1;
               scalar5++;
            }
            else {
               int scalar6 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            scalar5++;
            scalar5--;
         }
         else {
            int scalar3 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar4 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar3--;
         }
         int scalar3 = 1;
         if(PATH0 & -2147483648) {
            int scalar4 = 1;
            printf("DELETE!\n");
            int scalar5 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            scalar1++;
            scalar5--;
         }
         else {
            scalar2--;
         }
         int scalar4 = 1;
         int scalar5 = 1;
         if(PATH0 & -2147483648) {
            int scalar6 = 1;
            scalar5++;
         }
         else {
            int scalar6 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & -2147483648) {
            int scalar6 = 1;
            scalar3++;
            if(PATH1 & 1) {
               int scalar7 = 1;
               printf("DELETE!\n");
               int scalar8 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               scalar7++;
               scalar7--;
            }
            else {
               scalar6--;
            }
         }
         else {
            int scalar6 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            int scalar7 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar8 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH1 & 2) {
            int scalar6 = 1;
            scalar5++;
            if(PATH1 & 4) {
               int scalar7 = 1;
               printf("DELETE!\n");
               int scalar8 = 1;
               int scalar9 = 1;
               if(PATH1 & 8) {
                  int scalar10 = 1;
                  scalar4++;
               }
               else {
                  int scalar10 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar9--;
               scalar7++;
               scalar3--;
            }
            else {
               int scalar7 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar8 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
            }
         }
         else {
            int scalar6 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            int scalar7 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar8 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar9 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            int scalar10 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         scalar3++;
         scalar2--;
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar3 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         int scalar6 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar3--;
      }
      int scalar1 = 1;
      if(PATH1 & 16) {
         int scalar2 = 1;
         printf("DELETE!\n");
         int scalar3 = 1;
         if(PATH1 & 32) {
            int scalar4 = 1;
            printf("DELETE!\n");
            int scalar5 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            scalar1++;
            scalar4--;
         }
         else {
            scalar2--;
         }
         int scalar4 = 1;
         int scalar5 = 1;
         if(PATH1 & 64) {
            int scalar6 = 1;
            scalar1++;
         }
         else {
            int scalar6 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH1 & 128) {
            int scalar6 = 1;
            scalar6++;
            if(PATH1 & 256) {
               int scalar7 = 1;
               printf("DELETE!\n");
               int scalar8 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               scalar3++;
               scalar1--;
            }
            else {
               scalar6--;
            }
         }
         else {
            int scalar6 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            int scalar7 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar8 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         scalar5++;
         scalar2--;
      }
      else {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar3 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar4 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar1--;
      }
      int scalar2 = 1;
      if(PATH1 & 512) {
         int scalar3 = 1;
         printf("DELETE!\n");
         int scalar4 = 1;
         int scalar5 = 1;
         if(PATH1 & 1024) {
            int scalar6 = 1;
            scalar3++;
         }
         else {
            int scalar6 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         scalar1++;
         scalar3--;
      }
      else {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar2--;
      }
      int scalar3 = 1;
      if(PATH1 & 2048) {
         int scalar4 = 1;
         printf("DELETE!\n");
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         scalar1++;
         scalar1--;
      }
      else {
         scalar3--;
      }
      int scalar4 = 1;
      int scalar5 = 1;
      if(PATH1 & 4096) {
         int scalar6 = 1;
         scalar6++;
      }
      else {
         int scalar6 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH1 & 8192) {
         int scalar6 = 1;
         scalar1++;
         if(PATH1 & 16384) {
            int scalar7 = 1;
            printf("DELETE!\n");
            int scalar8 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar7--;
            scalar5++;
            scalar5--;
         }
         else {
            scalar2--;
         }
      }
      else {
         int scalar6 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         int scalar7 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar8 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH1 & 32768) {
         int scalar6 = 1;
         scalar5++;
         if(PATH1 & 65536) {
            int scalar7 = 1;
            printf("DELETE!\n");
            int scalar8 = 1;
            int scalar9 = 1;
            if(PATH1 & 131072) {
               int scalar10 = 1;
               scalar8++;
            }
            else {
               int scalar10 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            scalar6++;
            scalar8--;
         }
         else {
            int scalar7 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar8 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            scalar4--;
         }
      }
      else {
         int scalar6 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         int scalar7 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar8 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar9 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         int scalar10 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH1 & 262144) {
         int scalar6 = 1;
         scalar1++;
         if(PATH1 & 524288) {
            int scalar7 = 1;
            printf("DELETE!\n");
            int scalar8 = 1;
            if(PATH1 & 1048576) {
               int scalar9 = 1;
               printf("DELETE!\n");
               int scalar10 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               scalar3++;
               scalar6--;
            }
            else {
               scalar1--;
            }
            int scalar9 = 1;
            int scalar10 = 1;
            if(PATH1 & 2097152) {
               int scalar11 = 1;
               scalar11++;
            }
            else {
               int scalar11 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH1 & 4194304) {
               int scalar11 = 1;
               scalar4++;
               if(PATH1 & 8388608) {
                  int scalar12 = 1;
                  printf("DELETE!\n");
                  int scalar13 = 1;
                  if (scalar11 == 0) {
                     printf("IS 0!");
                  }
                  scalar7--;
                  scalar3++;
                  scalar3--;
               }
               else {
                  scalar4--;
               }
            }
            else {
               int scalar11 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               int scalar12 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar13 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar9--;
            scalar4++;
            scalar5--;
         }
         else {
            int scalar7 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar8 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar9 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            int scalar10 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar2--;
         }
      }
      else {
         int scalar6 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         int scalar7 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar8 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar9 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar10 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         int scalar11 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         int scalar12 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH1 & 16777216) {
         int scalar6 = 1;
         scalar6++;
         if(PATH1 & 33554432) {
            int scalar7 = 1;
            printf("DELETE!\n");
            int scalar8 = 1;
            if(PATH1 & 67108864) {
               int scalar9 = 1;
               printf("DELETE!\n");
               int scalar10 = 1;
               int scalar11 = 1;
               if(PATH1 & 134217728) {
                  int scalar12 = 1;
                  scalar8++;
               }
               else {
                  int scalar12 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               scalar7++;
               scalar11--;
            }
            else {
               int scalar9 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar10 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
            }
            int scalar9 = 1;
            if(PATH1 & 268435456) {
               int scalar10 = 1;
               printf("DELETE!\n");
               int scalar11 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               scalar5++;
               scalar9--;
            }
            else {
               scalar1--;
            }
            int scalar10 = 1;
            int scalar11 = 1;
            if(PATH1 & 536870912) {
               int scalar12 = 1;
               scalar1++;
            }
            else {
               int scalar12 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH1 & 1073741824) {
               int scalar12 = 1;
               scalar12++;
               if(PATH1 & -2147483648) {
                  int scalar13 = 1;
                  printf("DELETE!\n");
                  int scalar14 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  scalar14++;
                  scalar14--;
               }
               else {
                  scalar3--;
               }
            }
            else {
               int scalar12 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               int scalar13 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar14 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH1 & -2147483648) {
               int scalar12 = 1;
               scalar2++;
               if(PATH1 & -2147483648) {
                  int scalar13 = 1;
                  printf("DELETE!\n");
                  int scalar14 = 1;
                  int scalar15 = 1;
                  if(PATH1 & -2147483648) {
                     int scalar16 = 1;
                     scalar12++;
                  }
                  else {
                     int scalar16 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (scalar14 == 0) {
                     printf("IS 0!");
                  }
                  scalar15--;
                  scalar4++;
                  scalar12--;
               }
               else {
                  int scalar13 = 1;
                  if (scalar11 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar14 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
               }
            }
            else {
               int scalar12 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               int scalar13 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar14 = 1;
               if (scalar12 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar15 = 1;
               if (scalar14 == 0) {
                  printf("IS 0!");
               }
               int scalar16 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar9--;
            scalar10++;
            scalar1--;
         }
         else {
            int scalar7 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar8 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar9 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar10 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            int scalar11 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            int scalar12 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar4--;
         }
      }
      else {
         int scalar6 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         int scalar7 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar8 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar9 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar10 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar11 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         int scalar12 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         int scalar13 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         int scalar14 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
      if(PATH1 & -2147483648) {
         int scalar6 = 1;
         printf("DELETE!\n");
         int scalar7 = 1;
         if(PATH1 & -2147483648) {
            int scalar8 = 1;
            printf("DELETE!\n");
            int scalar9 = 1;
            if(PATH1 & -2147483648) {
               int scalar10 = 1;
               printf("DELETE!\n");
               int scalar11 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               scalar2++;
               scalar6--;
            }
            else {
               scalar4--;
            }
            int scalar10 = 1;
            int scalar11 = 1;
            if(PATH1 & -2147483648) {
               int scalar12 = 1;
               scalar5++;
            }
            else {
               int scalar12 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH1 & -2147483648) {
               int scalar12 = 1;
               scalar5++;
               if(PATH1 & -2147483648) {
                  int scalar13 = 1;
                  printf("DELETE!\n");
                  int scalar14 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  scalar5++;
                  scalar11--;
               }
               else {
                  scalar10--;
               }
            }
            else {
               int scalar12 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               int scalar13 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar14 = 1;
               if (scalar12 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            scalar9++;
            scalar1--;
         }
         else {
            int scalar8 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar9 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar10 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            int scalar11 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar3--;
         }
         int scalar8 = 1;
         if(PATH1 & -2147483648) {
            int scalar9 = 1;
            printf("DELETE!\n");
            int scalar10 = 1;
            int scalar11 = 1;
            if(PATH1 & -2147483648) {
               int scalar12 = 1;
               scalar2++;
            }
            else {
               int scalar12 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar7--;
            scalar11++;
            scalar8--;
         }
         else {
            int scalar9 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar10 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar3--;
         }
         int scalar9 = 1;
         if(PATH1 & -2147483648) {
            int scalar10 = 1;
            printf("DELETE!\n");
            int scalar11 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            scalar6--;
            scalar10++;
            scalar11--;
         }
         else {
            scalar8--;
         }
         int scalar10 = 1;
         int scalar11 = 1;
         if(PATH1 & -2147483648) {
            int scalar12 = 1;
            scalar7++;
         }
         else {
            int scalar12 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH1 & -2147483648) {
            int scalar12 = 1;
            scalar7++;
            if(PATH1 & -2147483648) {
               int scalar13 = 1;
               printf("DELETE!\n");
               int scalar14 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar7--;
               scalar3++;
               scalar13--;
            }
            else {
               scalar10--;
            }
         }
         else {
            int scalar12 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            int scalar13 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar14 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH1 & -2147483648) {
            int scalar12 = 1;
            scalar7++;
            if(PATH1 & -2147483648) {
               int scalar13 = 1;
               printf("DELETE!\n");
               int scalar14 = 1;
               int scalar15 = 1;
               if(PATH1 & -2147483648) {
                  int scalar16 = 1;
                  scalar1++;
               }
               else {
                  int scalar16 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               scalar9--;
               scalar3++;
               scalar14--;
            }
            else {
               int scalar13 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar14 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
            }
         }
         else {
            int scalar12 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            int scalar13 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar14 = 1;
            if (scalar14 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar15 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            int scalar16 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH1 & -2147483648) {
            int scalar12 = 1;
            scalar10++;
            if(PATH1 & -2147483648) {
               int scalar13 = 1;
               printf("DELETE!\n");
               int scalar14 = 1;
               if(PATH1 & -2147483648) {
                  int scalar15 = 1;
                  printf("DELETE!\n");
                  int scalar16 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar9--;
                  scalar11++;
                  scalar8--;
               }
               else {
                  scalar9--;
               }
               int scalar15 = 1;
               int scalar16 = 1;
               if(PATH1 & -2147483648) {
                  int scalar17 = 1;
                  scalar14++;
               }
               else {
                  int scalar17 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
               }
               if(PATH1 & -2147483648) {
                  int scalar17 = 1;
                  scalar14++;
                  if(PATH1 & -2147483648) {
                     int scalar18 = 1;
                     printf("DELETE!\n");
                     int scalar19 = 1;
                     if (scalar9 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     scalar11++;
                     scalar18--;
                  }
                  else {
                     scalar1--;
                  }
               }
               else {
                  int scalar17 = 1;
                  if (scalar16 == 0) {
                     printf("IS 0!");
                  }
                  int scalar18 = 1;
                  if (scalar13 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar19 = 1;
                  if (scalar12 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar15 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               scalar3++;
               scalar10--;
            }
            else {
               int scalar13 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar14 = 1;
               if (scalar13 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar15 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               int scalar16 = 1;
               if (scalar16 == 0) {
                  printf("IS 0!");
               }
               scalar9--;
            }
         }
         else {
            int scalar12 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            int scalar13 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar14 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar15 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar16 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            int scalar17 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            int scalar18 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         scalar1++;
         scalar9--;
      }
      else {
         int scalar6 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar7 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar8 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar9 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar10 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         int scalar11 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         int scalar12 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         int scalar13 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         scalar6--;
      }
      int scalar6 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func2(rng(), rng());
      int scalar7 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func4(rng());
      int scalar8 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      int scalar9 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      int scalar10 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func10(rng());
      int scalar11 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      func12(rng());
      int scalar12 = 1;
      if (scalar9 == 0) {
         printf("IS 0!");
      }
      int scalar13 = 1;
      if (scalar12 == 0) {
         printf("IS 0!");
      }
      int scalar14 = 1;
      if (scalar11 == 0) {
         printf("IS 0!");
      }
      int scalar15 = 1;
      if (scalar9 == 0) {
         printf("IS 0!");
      }
      int scalar16 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      int scalar17 = 1;
      if (scalar16 == 0) {
         printf("IS 0!");
      }
      if(PATH1 & -2147483648) {
         int scalar18 = 1;
         printf("DELETE!\n");
         int scalar19 = 1;
         if(PATH1 & -2147483648) {
            int scalar20 = 1;
            printf("DELETE!\n");
            int scalar21 = 1;
            if(PATH1 & -2147483648) {
               int scalar22 = 1;
               printf("DELETE!\n");
               int scalar23 = 1;
               if (scalar21 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               scalar15++;
               scalar4--;
            }
            else {
               scalar17--;
            }
            int scalar22 = 1;
            int scalar23 = 1;
            if(PATH1 & -2147483648) {
               int scalar24 = 1;
               scalar23++;
            }
            else {
               int scalar24 = 1;
               if (scalar19 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH1 & -2147483648) {
               int scalar24 = 1;
               scalar11++;
               if(PATH1 & -2147483648) {
                  int scalar25 = 1;
                  printf("DELETE!\n");
                  int scalar26 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  scalar15++;
                  scalar16--;
               }
               else {
                  scalar7--;
               }
            }
            else {
               int scalar24 = 1;
               if (scalar22 == 0) {
                  printf("IS 0!");
               }
               int scalar25 = 1;
               if (scalar24 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar26 = 1;
               if (scalar26 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            scalar21--;
            scalar2++;
            scalar2--;
         }
         else {
            int scalar20 = 1;
            if (scalar20 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar21 = 1;
            if (scalar21 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar22 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            int scalar23 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar10--;
         }
         int scalar20 = 1;
         if(PATH1 & -2147483648) {
            int scalar21 = 1;
            printf("DELETE!\n");
            int scalar22 = 1;
            int scalar23 = 1;
            if(PATH1 & -2147483648) {
               int scalar24 = 1;
               scalar21++;
            }
            else {
               int scalar24 = 1;
               if (scalar12 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar12--;
            scalar6++;
            scalar16--;
         }
         else {
            int scalar21 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar22 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar6--;
         }
         int scalar21 = 1;
         if(PATH2 & 1) {
            int scalar22 = 1;
            printf("DELETE!\n");
            int scalar23 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar13--;
            scalar10++;
            scalar13--;
         }
         else {
            scalar9--;
         }
         int scalar22 = 1;
         int scalar23 = 1;
         if(PATH2 & 2) {
            int scalar24 = 1;
            scalar13++;
         }
         else {
            int scalar24 = 1;
            if (scalar22 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH2 & 4) {
            int scalar24 = 1;
            scalar20++;
            if(PATH2 & 8) {
               int scalar25 = 1;
               printf("DELETE!\n");
               int scalar26 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar14--;
               scalar19++;
               scalar10--;
            }
            else {
               scalar7--;
            }
         }
         else {
            int scalar24 = 1;
            if (scalar18 == 0) {
               printf("IS 0!");
            }
            int scalar25 = 1;
            if (scalar23 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar26 = 1;
            if (scalar25 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH2 & 16) {
            int scalar24 = 1;
            scalar18++;
            if(PATH2 & 32) {
               int scalar25 = 1;
               printf("DELETE!\n");
               int scalar26 = 1;
               int scalar27 = 1;
               if(PATH2 & 64) {
                  int scalar28 = 1;
                  scalar25++;
               }
               else {
                  int scalar28 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar9--;
               scalar20++;
               scalar25--;
            }
            else {
               int scalar25 = 1;
               if (scalar17 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar26 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar14--;
            }
         }
         else {
            int scalar24 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            int scalar25 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar26 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar27 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            int scalar28 = 1;
            if (scalar27 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH2 & 128) {
            int scalar24 = 1;
            scalar13++;
            if(PATH2 & 256) {
               int scalar25 = 1;
               printf("DELETE!\n");
               int scalar26 = 1;
               if(PATH2 & 512) {
                  int scalar27 = 1;
                  printf("DELETE!\n");
                  int scalar28 = 1;
                  if (scalar21 == 0) {
                     printf("IS 0!");
                  }
                  scalar26--;
                  scalar6++;
                  scalar13--;
               }
               else {
                  scalar26--;
               }
               int scalar27 = 1;
               int scalar28 = 1;
               if(PATH2 & 1024) {
                  int scalar29 = 1;
                  scalar20++;
               }
               else {
                  int scalar29 = 1;
                  if (scalar16 == 0) {
                     printf("IS 0!");
                  }
               }
               if(PATH2 & 2048) {
                  int scalar29 = 1;
                  scalar11++;
                  if(PATH2 & 4096) {
                     int scalar30 = 1;
                     printf("DELETE!\n");
                     int scalar31 = 1;
                     if (scalar25 == 0) {
                        printf("IS 0!");
                     }
                     scalar11--;
                     scalar22++;
                     scalar19--;
                  }
                  else {
                     scalar28--;
                  }
               }
               else {
                  int scalar29 = 1;
                  if (scalar12 == 0) {
                     printf("IS 0!");
                  }
                  int scalar30 = 1;
                  if (scalar11 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar31 = 1;
                  if (scalar20 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               scalar14--;
               scalar24++;
               scalar25--;
            }
            else {
               int scalar25 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar26 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar27 = 1;
               if (scalar24 == 0) {
                  printf("IS 0!");
               }
               int scalar28 = 1;
               if (scalar16 == 0) {
                  printf("IS 0!");
               }
               scalar19--;
            }
         }
         else {
            int scalar24 = 1;
            if (scalar17 == 0) {
               printf("IS 0!");
            }
            int scalar25 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar26 = 1;
            if (scalar21 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar27 = 1;
            if (scalar20 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar28 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            int scalar29 = 1;
            if (scalar23 == 0) {
               printf("IS 0!");
            }
            int scalar30 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar22 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         scalar17++;
         scalar14--;
      }
      else {
         int scalar18 = 1;
         if (scalar18 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar19 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar20 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar21 = 1;
         if (scalar21 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar22 = 1;
         if (scalar21 == 0) {
            printf("IS 0!");
         }
         int scalar23 = 1;
         if (scalar23 == 0) {
            printf("IS 0!");
         }
         int scalar24 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         int scalar25 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         scalar11--;
      }
      int scalar18 = 1;
      if(PATH2 & 8192) {
         int scalar19 = 1;
         printf("DELETE!\n");
         int scalar20 = 1;
         if(PATH2 & 16384) {
            int scalar21 = 1;
            printf("DELETE!\n");
            int scalar22 = 1;
            int scalar23 = 1;
            if(PATH2 & 32768) {
               int scalar24 = 1;
               scalar11++;
            }
            else {
               int scalar24 = 1;
               if (scalar14 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            scalar23++;
            scalar20--;
         }
         else {
            int scalar21 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar22 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            scalar2--;
         }
         int scalar21 = 1;
         if(PATH2 & 65536) {
            int scalar22 = 1;
            printf("DELETE!\n");
            int scalar23 = 1;
            if (scalar18 == 0) {
               printf("IS 0!");
            }
            scalar8--;
            scalar3++;
            scalar7--;
         }
         else {
            scalar16--;
         }
         int scalar22 = 1;
         int scalar23 = 1;
         if(PATH2 & 131072) {
            int scalar24 = 1;
            scalar4++;
         }
         else {
            int scalar24 = 1;
            if (scalar22 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH2 & 262144) {
            int scalar24 = 1;
            scalar11++;
            if(PATH2 & 524288) {
               int scalar25 = 1;
               printf("DELETE!\n");
               int scalar26 = 1;
               if (scalar20 == 0) {
                  printf("IS 0!");
               }
               scalar23--;
               scalar11++;
               scalar2--;
            }
            else {
               scalar5--;
            }
         }
         else {
            int scalar24 = 1;
            if (scalar22 == 0) {
               printf("IS 0!");
            }
            int scalar25 = 1;
            if (scalar19 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar26 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH2 & 1048576) {
            int scalar24 = 1;
            scalar13++;
            if(PATH2 & 2097152) {
               int scalar25 = 1;
               printf("DELETE!\n");
               int scalar26 = 1;
               int scalar27 = 1;
               if(PATH2 & 4194304) {
                  int scalar28 = 1;
                  scalar12++;
               }
               else {
                  int scalar28 = 1;
                  if (scalar25 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar25 == 0) {
                  printf("IS 0!");
               }
               scalar21--;
               scalar12++;
               scalar8--;
            }
            else {
               int scalar25 = 1;
               if (scalar14 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar26 = 1;
               if (scalar19 == 0) {
                  printf("IS 0!");
               }
               scalar12--;
            }
         }
         else {
            int scalar24 = 1;
            if (scalar21 == 0) {
               printf("IS 0!");
            }
            int scalar25 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar26 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar27 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            int scalar28 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         scalar17++;
         scalar19--;
      }
      else {
         int scalar19 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar20 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar21 = 1;
         if (scalar14 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar22 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         int scalar23 = 1;
         if (scalar20 == 0) {
            printf("IS 0!");
         }
         int scalar24 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         scalar15--;
      }
      int scalar19 = 1;
      if(PATH2 & 8388608) {
         int scalar20 = 1;
         printf("DELETE!\n");
         int scalar21 = 1;
         if(PATH2 & 16777216) {
            int scalar22 = 1;
            printf("DELETE!\n");
            int scalar23 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
            scalar17--;
            scalar14++;
            scalar16--;
         }
         else {
            scalar1--;
         }
         int scalar22 = 1;
         int scalar23 = 1;
         if(PATH2 & 33554432) {
            int scalar24 = 1;
            scalar24++;
         }
         else {
            int scalar24 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH2 & 67108864) {
            int scalar24 = 1;
            scalar12++;
            if(PATH2 & 134217728) {
               int scalar25 = 1;
               printf("DELETE!\n");
               int scalar26 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar25--;
               scalar10++;
               scalar22--;
            }
            else {
               scalar20--;
            }
         }
         else {
            int scalar24 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            int scalar25 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar26 = 1;
            if (scalar24 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar22 == 0) {
            printf("IS 0!");
         }
         scalar22--;
         scalar8++;
         scalar13--;
      }
      else {
         int scalar20 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar21 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar22 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         int scalar23 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar7--;
      }
      int scalar20 = 1;
      if(PATH2 & 268435456) {
         int scalar21 = 1;
         printf("DELETE!\n");
         int scalar22 = 1;
         int scalar23 = 1;
         if(PATH2 & 536870912) {
            int scalar24 = 1;
            scalar16++;
         }
         else {
            int scalar24 = 1;
            if (scalar20 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         scalar18++;
         scalar12--;
      }
      else {
         int scalar21 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar22 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         scalar13--;
      }
      int scalar21 = 1;
      if(PATH2 & 1073741824) {
         int scalar22 = 1;
         printf("DELETE!\n");
         int scalar23 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar10--;
         scalar16++;
         scalar19--;
      }
      else {
         scalar12--;
      }
      int scalar22 = 1;
      int scalar23 = 1;
      if(PATH2 & -2147483648) {
         int scalar24 = 1;
         scalar4++;
      }
      else {
         int scalar24 = 1;
         if (scalar21 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH2 & -2147483648) {
         int scalar24 = 1;
         scalar8++;
         if(PATH2 & -2147483648) {
            int scalar25 = 1;
            printf("DELETE!\n");
            int scalar26 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            scalar22++;
            scalar11--;
         }
         else {
            scalar16--;
         }
      }
      else {
         int scalar24 = 1;
         if (scalar18 == 0) {
            printf("IS 0!");
         }
         int scalar25 = 1;
         if (scalar16 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar26 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH2 & -2147483648) {
         int scalar24 = 1;
         scalar13++;
         if(PATH2 & -2147483648) {
            int scalar25 = 1;
            printf("DELETE!\n");
            int scalar26 = 1;
            int scalar27 = 1;
            if(PATH2 & -2147483648) {
               int scalar28 = 1;
               scalar26++;
            }
            else {
               int scalar28 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar14 == 0) {
               printf("IS 0!");
            }
            scalar9--;
            scalar9++;
            scalar6--;
         }
         else {
            int scalar25 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar26 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar14--;
         }
      }
      else {
         int scalar24 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         int scalar25 = 1;
         if (scalar16 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar26 = 1;
         if (scalar23 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar27 = 1;
         if (scalar22 == 0) {
            printf("IS 0!");
         }
         int scalar28 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH2 & -2147483648) {
         int scalar24 = 1;
         scalar4++;
         if(PATH2 & -2147483648) {
            int scalar25 = 1;
            printf("DELETE!\n");
            int scalar26 = 1;
            if(PATH2 & -2147483648) {
               int scalar27 = 1;
               printf("DELETE!\n");
               int scalar28 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar26--;
               scalar9++;
               scalar6--;
            }
            else {
               scalar1--;
            }
            int scalar27 = 1;
            int scalar28 = 1;
            if(PATH2 & -2147483648) {
               int scalar29 = 1;
               scalar3++;
            }
            else {
               int scalar29 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH2 & -2147483648) {
               int scalar29 = 1;
               scalar2++;
               if(PATH2 & -2147483648) {
                  int scalar30 = 1;
                  printf("DELETE!\n");
                  int scalar31 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar24--;
                  scalar4++;
                  scalar21--;
               }
               else {
                  scalar14--;
               }
            }
            else {
               int scalar29 = 1;
               if (scalar26 == 0) {
                  printf("IS 0!");
               }
               int scalar30 = 1;
               if (scalar18 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar31 = 1;
               if (scalar30 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            scalar15--;
            scalar5++;
            scalar22--;
         }
         else {
            int scalar25 = 1;
            if (scalar21 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar26 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar27 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            int scalar28 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            scalar12--;
         }
      }
      else {
         int scalar24 = 1;
         if (scalar14 == 0) {
            printf("IS 0!");
         }
         int scalar25 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar26 = 1;
         if (scalar20 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar27 = 1;
         if (scalar24 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar28 = 1;
         if (scalar28 == 0) {
            printf("IS 0!");
         }
         int scalar29 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         int scalar30 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH2 & -2147483648) {
         int scalar24 = 1;
         scalar5++;
         if(PATH2 & -2147483648) {
            int scalar25 = 1;
            printf("DELETE!\n");
            int scalar26 = 1;
            if(PATH2 & -2147483648) {
               int scalar27 = 1;
               printf("DELETE!\n");
               int scalar28 = 1;
               int scalar29 = 1;
               if(PATH2 & -2147483648) {
                  int scalar30 = 1;
                  scalar2++;
               }
               else {
                  int scalar30 = 1;
                  if (scalar16 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               scalar29--;
               scalar11++;
               scalar4--;
            }
            else {
               int scalar27 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar28 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               scalar23--;
            }
            int scalar27 = 1;
            if(PATH2 & -2147483648) {
               int scalar28 = 1;
               printf("DELETE!\n");
               int scalar29 = 1;
               if (scalar28 == 0) {
                  printf("IS 0!");
               }
               scalar12--;
               scalar16++;
               scalar8--;
            }
            else {
               scalar16--;
            }
            int scalar28 = 1;
            int scalar29 = 1;
            if(PATH2 & -2147483648) {
               int scalar30 = 1;
               scalar24++;
            }
            else {
               int scalar30 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH2 & -2147483648) {
               int scalar30 = 1;
               scalar5++;
               if(PATH2 & -2147483648) {
                  int scalar31 = 1;
                  printf("DELETE!\n");
                  int scalar32 = 1;
                  if (scalar18 == 0) {
                     printf("IS 0!");
                  }
                  scalar10--;
                  scalar18++;
                  scalar16--;
               }
               else {
                  scalar10--;
               }
            }
            else {
               int scalar30 = 1;
               if (scalar27 == 0) {
                  printf("IS 0!");
               }
               int scalar31 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar32 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH2 & -2147483648) {
               int scalar30 = 1;
               scalar11++;
               if(PATH2 & -2147483648) {
                  int scalar31 = 1;
                  printf("DELETE!\n");
                  int scalar32 = 1;
                  int scalar33 = 1;
                  if(PATH2 & -2147483648) {
                     int scalar34 = 1;
                     scalar25++;
                  }
                  else {
                     int scalar34 = 1;
                     if (scalar14 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (scalar26 == 0) {
                     printf("IS 0!");
                  }
                  scalar21--;
                  scalar20++;
                  scalar15--;
               }
               else {
                  int scalar31 = 1;
                  if (scalar25 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar32 = 1;
                  if (scalar16 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
               }
            }
            else {
               int scalar30 = 1;
               if (scalar23 == 0) {
                  printf("IS 0!");
               }
               int scalar31 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar32 = 1;
               if (scalar26 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar33 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               int scalar34 = 1;
               if (scalar26 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar23--;
            scalar14++;
            scalar14--;
         }
         else {
            int scalar25 = 1;
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar26 = 1;
            if (scalar22 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar27 = 1;
            if (scalar25 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar28 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            int scalar29 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            int scalar30 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            scalar24--;
         }
      }
      else {
         int scalar24 = 1;
         if (scalar12 == 0) {
            printf("IS 0!");
         }
         int scalar25 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar26 = 1;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar27 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar28 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar29 = 1;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         int scalar30 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         int scalar31 = 1;
         if (scalar27 == 0) {
            printf("IS 0!");
         }
         int scalar32 = 1;
         if (scalar32 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH2 & -2147483648) {
         int scalar24 = 1;
         scalar24++;
         if(PATH2 & -2147483648) {
            int scalar25 = 1;
            printf("DELETE!\n");
            int scalar26 = 1;
            if(PATH2 & -2147483648) {
               int scalar27 = 1;
               printf("DELETE!\n");
               int scalar28 = 1;
               if(PATH2 & -2147483648) {
                  int scalar29 = 1;
                  printf("DELETE!\n");
                  int scalar30 = 1;
                  if (scalar19 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  scalar25++;
                  scalar18--;
               }
               else {
                  scalar23--;
               }
               int scalar29 = 1;
               int scalar30 = 1;
               if(PATH2 & -2147483648) {
                  int scalar31 = 1;
                  scalar6++;
               }
               else {
                  int scalar31 = 1;
                  if (scalar21 == 0) {
                     printf("IS 0!");
                  }
               }
               if(PATH2 & -2147483648) {
                  int scalar31 = 1;
                  scalar31++;
                  if(PATH2 & -2147483648) {
                     int scalar32 = 1;
                     printf("DELETE!\n");
                     int scalar33 = 1;
                     if (scalar12 == 0) {
                        printf("IS 0!");
                     }
                     scalar16--;
                     scalar2++;
                     scalar20--;
                  }
                  else {
                     scalar16--;
                  }
               }
               else {
                  int scalar31 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  int scalar32 = 1;
                  if (scalar30 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar33 = 1;
                  if (scalar32 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar20 == 0) {
                  printf("IS 0!");
               }
               scalar24--;
               scalar1++;
               scalar23--;
            }
            else {
               int scalar27 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar28 = 1;
               if (scalar13 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar29 = 1;
               if (scalar20 == 0) {
                  printf("IS 0!");
               }
               int scalar30 = 1;
               if (scalar29 == 0) {
                  printf("IS 0!");
               }
               scalar7--;
            }
            int scalar27 = 1;
            if(PATH2 & -2147483648) {
               int scalar28 = 1;
               printf("DELETE!\n");
               int scalar29 = 1;
               int scalar30 = 1;
               if(PATH2 & -2147483648) {
                  int scalar31 = 1;
                  scalar18++;
               }
               else {
                  int scalar31 = 1;
                  if (scalar26 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar19 == 0) {
                  printf("IS 0!");
               }
               scalar22--;
               scalar30++;
               scalar19--;
            }
            else {
               int scalar28 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar29 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar10--;
            }
            int scalar28 = 1;
            if(PATH2 & -2147483648) {
               int scalar29 = 1;
               printf("DELETE!\n");
               int scalar30 = 1;
               if (scalar19 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               scalar21++;
               scalar22--;
            }
            else {
               scalar18--;
            }
            int scalar29 = 1;
            int scalar30 = 1;
            if(PATH3 & 1) {
               int scalar31 = 1;
               scalar23++;
            }
            else {
               int scalar31 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH3 & 2) {
               int scalar31 = 1;
               scalar10++;
               if(PATH3 & 4) {
                  int scalar32 = 1;
                  printf("DELETE!\n");
                  int scalar33 = 1;
                  if (scalar20 == 0) {
                     printf("IS 0!");
                  }
                  scalar16--;
                  scalar7++;
                  scalar24--;
               }
               else {
                  scalar11--;
               }
            }
            else {
               int scalar31 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               int scalar32 = 1;
               if (scalar27 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar33 = 1;
               if (scalar29 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH3 & 8) {
               int scalar31 = 1;
               scalar10++;
               if(PATH3 & 16) {
                  int scalar32 = 1;
                  printf("DELETE!\n");
                  int scalar33 = 1;
                  int scalar34 = 1;
                  if(PATH3 & 32) {
                     int scalar35 = 1;
                     scalar34++;
                  }
                  else {
                     int scalar35 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  scalar26++;
                  scalar34--;
               }
               else {
                  int scalar32 = 1;
                  if (scalar26 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar33 = 1;
                  if (scalar25 == 0) {
                     printf("IS 0!");
                  }
                  scalar31--;
               }
            }
            else {
               int scalar31 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               int scalar32 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar33 = 1;
               if (scalar15 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar34 = 1;
               if (scalar18 == 0) {
                  printf("IS 0!");
               }
               int scalar35 = 1;
               if (scalar18 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH3 & 64) {
               int scalar31 = 1;
               scalar25++;
               if(PATH3 & 128) {
                  int scalar32 = 1;
                  printf("DELETE!\n");
                  int scalar33 = 1;
                  if(PATH3 & 256) {
                     int scalar34 = 1;
                     printf("DELETE!\n");
                     int scalar35 = 1;
                     if (scalar13 == 0) {
                        printf("IS 0!");
                     }
                     scalar30--;
                     scalar14++;
                     scalar23--;
                  }
                  else {
                     scalar27--;
                  }
                  int scalar34 = 1;
                  int scalar35 = 1;
                  if(PATH3 & 512) {
                     int scalar36 = 1;
                     scalar21++;
                  }
                  else {
                     int scalar36 = 1;
                     if (scalar23 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if(PATH3 & 1024) {
                     int scalar36 = 1;
                     scalar2++;
                     if(PATH3 & 2048) {
                        int scalar37 = 1;
                        printf("DELETE!\n");
                        int scalar38 = 1;
                        if (scalar18 == 0) {
                           printf("IS 0!");
                        }
                        scalar7--;
                        scalar7++;
                        scalar9--;
                     }
                     else {
                        scalar33--;
                     }
                  }
                  else {
                     int scalar36 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     int scalar37 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     func12(rng());
                     int scalar38 = 1;
                     if (scalar22 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (scalar34 == 0) {
                     printf("IS 0!");
                  }
                  scalar7--;
                  scalar15++;
                  scalar3--;
               }
               else {
                  int scalar32 = 1;
                  if (scalar23 == 0) {
                     printf("IS 0!");
                  }
                  func10(rng());
                  int scalar33 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar34 = 1;
                  if (scalar32 == 0) {
                     printf("IS 0!");
                  }
                  int scalar35 = 1;
                  if (scalar26 == 0) {
                     printf("IS 0!");
                  }
                  scalar11--;
               }
            }
            else {
               int scalar31 = 1;
               if (scalar25 == 0) {
                  printf("IS 0!");
               }
               int scalar32 = 1;
               if (scalar27 == 0) {
                  printf("IS 0!");
               }
               func8(rng());
               int scalar33 = 1;
               if (scalar14 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar34 = 1;
               if (scalar17 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar35 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               int scalar36 = 1;
               if (scalar35 == 0) {
                  printf("IS 0!");
               }
               int scalar37 = 1;
               if (scalar23 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar29--;
            scalar25++;
            scalar21--;
         }
         else {
            int scalar25 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            func6(rng());
            int scalar26 = 1;
            if (scalar23 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar27 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar28 = 1;
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar29 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            int scalar30 = 1;
            if (scalar23 == 0) {
               printf("IS 0!");
            }
            int scalar31 = 1;
            if (scalar29 == 0) {
               printf("IS 0!");
            }
            int scalar32 = 1;
            if (scalar30 == 0) {
               printf("IS 0!");
            }
            scalar30--;
         }
      }
      else {
         int scalar24 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         int scalar25 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func4(rng());
         int scalar26 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar27 = 1;
         if (scalar23 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar28 = 1;
         if (scalar25 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar29 = 1;
         if (scalar22 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar30 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         int scalar31 = 1;
         if (scalar17 == 0) {
            printf("IS 0!");
         }
         int scalar32 = 1;
         if (scalar18 == 0) {
            printf("IS 0!");
         }
         int scalar33 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         int scalar34 = 1;
         if (scalar23 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH3 & 4096) {
         int scalar24 = 1;
         printf("DELETE!\n");
         int scalar25 = 1;
         if(PATH3 & 8192) {
            int scalar26 = 1;
            printf("DELETE!\n");
            int scalar27 = 1;
            if(PATH3 & 16384) {
               int scalar28 = 1;
               printf("DELETE!\n");
               int scalar29 = 1;
               int scalar30 = 1;
               if(PATH3 & 32768) {
                  int scalar31 = 1;
                  scalar27++;
               }
               else {
                  int scalar31 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar15 == 0) {
                  printf("IS 0!");
               }
               scalar9--;
               scalar23++;
               scalar29--;
            }
            else {
               int scalar28 = 1;
               if (scalar15 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar29 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               scalar17--;
            }
            int scalar28 = 1;
            if(PATH3 & 65536) {
               int scalar29 = 1;
               printf("DELETE!\n");
               int scalar30 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar18--;
               scalar8++;
               scalar11--;
            }
            else {
               scalar4--;
            }
            int scalar29 = 1;
            int scalar30 = 1;
            if(PATH3 & 131072) {
               int scalar31 = 1;
               scalar27++;
            }
            else {
               int scalar31 = 1;
               if (scalar27 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH3 & 262144) {
               int scalar31 = 1;
               scalar26++;
               if(PATH3 & 524288) {
                  int scalar32 = 1;
                  printf("DELETE!\n");
                  int scalar33 = 1;
                  if (scalar31 == 0) {
                     printf("IS 0!");
                  }
                  scalar13--;
                  scalar9++;
                  scalar30--;
               }
               else {
                  scalar9--;
               }
            }
            else {
               int scalar31 = 1;
               if (scalar18 == 0) {
                  printf("IS 0!");
               }
               int scalar32 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar33 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH3 & 1048576) {
               int scalar31 = 1;
               scalar27++;
               if(PATH3 & 2097152) {
                  int scalar32 = 1;
                  printf("DELETE!\n");
                  int scalar33 = 1;
                  int scalar34 = 1;
                  if(PATH3 & 4194304) {
                     int scalar35 = 1;
                     scalar10++;
                  }
                  else {
                     int scalar35 = 1;
                     if (scalar35 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (scalar33 == 0) {
                     printf("IS 0!");
                  }
                  scalar11--;
                  scalar13++;
                  scalar25--;
               }
               else {
                  int scalar32 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar33 = 1;
                  if (scalar27 == 0) {
                     printf("IS 0!");
                  }
                  scalar27--;
               }
            }
            else {
               int scalar31 = 1;
               if (scalar20 == 0) {
                  printf("IS 0!");
               }
               int scalar32 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar33 = 1;
               if (scalar31 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar34 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               int scalar35 = 1;
               if (scalar27 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar20 == 0) {
               printf("IS 0!");
            }
            scalar11--;
            scalar11++;
            scalar1--;
         }
         else {
            int scalar26 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar27 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar28 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar29 = 1;
            if (scalar20 == 0) {
               printf("IS 0!");
            }
            int scalar30 = 1;
            if (scalar20 == 0) {
               printf("IS 0!");
            }
            int scalar31 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar23--;
         }
         int scalar26 = 1;
         if(PATH3 & 8388608) {
            int scalar27 = 1;
            printf("DELETE!\n");
            int scalar28 = 1;
            if(PATH3 & 16777216) {
               int scalar29 = 1;
               printf("DELETE!\n");
               int scalar30 = 1;
               if (scalar19 == 0) {
                  printf("IS 0!");
               }
               scalar18--;
               scalar7++;
               scalar16--;
            }
            else {
               scalar26--;
            }
            int scalar29 = 1;
            int scalar30 = 1;
            if(PATH3 & 33554432) {
               int scalar31 = 1;
               scalar31++;
            }
            else {
               int scalar31 = 1;
               if (scalar16 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH3 & 67108864) {
               int scalar31 = 1;
               scalar7++;
               if(PATH3 & 134217728) {
                  int scalar32 = 1;
                  printf("DELETE!\n");
                  int scalar33 = 1;
                  if (scalar26 == 0) {
                     printf("IS 0!");
                  }
                  scalar17--;
                  scalar32++;
                  scalar12--;
               }
               else {
                  scalar6--;
               }
            }
            else {
               int scalar31 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               int scalar32 = 1;
               if (scalar31 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar33 = 1;
               if (scalar24 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar27 == 0) {
               printf("IS 0!");
            }
            scalar18--;
            scalar17++;
            scalar30--;
         }
         else {
            int scalar27 = 1;
            if (scalar20 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar28 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar29 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            int scalar30 = 1;
            if (scalar30 == 0) {
               printf("IS 0!");
            }
            scalar1--;
         }
         int scalar27 = 1;
         if(PATH3 & 268435456) {
            int scalar28 = 1;
            printf("DELETE!\n");
            int scalar29 = 1;
            int scalar30 = 1;
            if(PATH3 & 536870912) {
               int scalar31 = 1;
               scalar1++;
            }
            else {
               int scalar31 = 1;
               if (scalar20 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar29--;
            scalar28++;
            scalar28--;
         }
         else {
            int scalar28 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar29 = 1;
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            scalar20--;
         }
         int scalar28 = 1;
         if(PATH3 & 1073741824) {
            int scalar29 = 1;
            printf("DELETE!\n");
            int scalar30 = 1;
            if (scalar24 == 0) {
               printf("IS 0!");
            }
            scalar8--;
            scalar7++;
            scalar20--;
         }
         else {
            scalar28--;
         }
         int scalar29 = 1;
         int scalar30 = 1;
         if(PATH3 & -2147483648) {
            int scalar31 = 1;
            scalar27++;
         }
         else {
            int scalar31 = 1;
            if (scalar14 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH3 & -2147483648) {
            int scalar31 = 1;
            scalar25++;
            if(PATH3 & -2147483648) {
               int scalar32 = 1;
               printf("DELETE!\n");
               int scalar33 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               scalar23--;
               scalar26++;
               scalar13--;
            }
            else {
               scalar10--;
            }
         }
         else {
            int scalar31 = 1;
            if (scalar28 == 0) {
               printf("IS 0!");
            }
            int scalar32 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar33 = 1;
            if (scalar18 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH3 & -2147483648) {
            int scalar31 = 1;
            scalar7++;
            if(PATH3 & -2147483648) {
               int scalar32 = 1;
               printf("DELETE!\n");
               int scalar33 = 1;
               int scalar34 = 1;
               if(PATH3 & -2147483648) {
                  int scalar35 = 1;
                  scalar17++;
               }
               else {
                  int scalar35 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               scalar13--;
               scalar30++;
               scalar24--;
            }
            else {
               int scalar32 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar33 = 1;
               if (scalar17 == 0) {
                  printf("IS 0!");
               }
               scalar12--;
            }
         }
         else {
            int scalar31 = 1;
            if (scalar22 == 0) {
               printf("IS 0!");
            }
            int scalar32 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar33 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar34 = 1;
            if (scalar18 == 0) {
               printf("IS 0!");
            }
            int scalar35 = 1;
            if (scalar27 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH3 & -2147483648) {
            int scalar31 = 1;
            scalar21++;
            if(PATH3 & -2147483648) {
               int scalar32 = 1;
               printf("DELETE!\n");
               int scalar33 = 1;
               if(PATH3 & -2147483648) {
                  int scalar34 = 1;
                  printf("DELETE!\n");
                  int scalar35 = 1;
                  if (scalar11 == 0) {
                     printf("IS 0!");
                  }
                  scalar23--;
                  scalar21++;
                  scalar4--;
               }
               else {
                  scalar30--;
               }
               int scalar34 = 1;
               int scalar35 = 1;
               if(PATH3 & -2147483648) {
                  int scalar36 = 1;
                  scalar5++;
               }
               else {
                  int scalar36 = 1;
                  if (scalar23 == 0) {
                     printf("IS 0!");
                  }
               }
               if(PATH3 & -2147483648) {
                  int scalar36 = 1;
                  scalar14++;
                  if(PATH3 & -2147483648) {
                     int scalar37 = 1;
                     printf("DELETE!\n");
                     int scalar38 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     scalar20--;
                     scalar17++;
                     scalar29--;
                  }
                  else {
                     scalar1--;
                  }
               }
               else {
                  int scalar36 = 1;
                  if (scalar35 == 0) {
                     printf("IS 0!");
                  }
                  int scalar37 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar38 = 1;
                  if (scalar35 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar29 == 0) {
                  printf("IS 0!");
               }
               scalar23--;
               scalar3++;
               scalar14--;
            }
            else {
               int scalar32 = 1;
               if (scalar22 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar33 = 1;
               if (scalar20 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar34 = 1;
               if (scalar34 == 0) {
                  printf("IS 0!");
               }
               int scalar35 = 1;
               if (scalar31 == 0) {
                  printf("IS 0!");
               }
               scalar16--;
            }
         }
         else {
            int scalar31 = 1;
            if (scalar26 == 0) {
               printf("IS 0!");
            }
            int scalar32 = 1;
            if (scalar24 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar33 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar34 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar35 = 1;
            if (scalar28 == 0) {
               printf("IS 0!");
            }
            int scalar36 = 1;
            if (scalar25 == 0) {
               printf("IS 0!");
            }
            int scalar37 = 1;
            if (scalar30 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH3 & -2147483648) {
            int scalar31 = 1;
            scalar1++;
            if(PATH3 & -2147483648) {
               int scalar32 = 1;
               printf("DELETE!\n");
               int scalar33 = 1;
               if(PATH3 & -2147483648) {
                  int scalar34 = 1;
                  printf("DELETE!\n");
                  int scalar35 = 1;
                  int scalar36 = 1;
                  if(PATH3 & -2147483648) {
                     int scalar37 = 1;
                     scalar15++;
                  }
                  else {
                     int scalar37 = 1;
                     if (scalar16 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (scalar22 == 0) {
                     printf("IS 0!");
                  }
                  scalar29--;
                  scalar12++;
                  scalar15--;
               }
               else {
                  int scalar34 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar35 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar10--;
               }
               int scalar34 = 1;
               if(PATH3 & -2147483648) {
                  int scalar35 = 1;
                  printf("DELETE!\n");
                  int scalar36 = 1;
                  if (scalar32 == 0) {
                     printf("IS 0!");
                  }
                  scalar21--;
                  scalar13++;
                  scalar33--;
               }
               else {
                  scalar16--;
               }
               int scalar35 = 1;
               int scalar36 = 1;
               if(PATH3 & -2147483648) {
                  int scalar37 = 1;
                  scalar16++;
               }
               else {
                  int scalar37 = 1;
                  if (scalar19 == 0) {
                     printf("IS 0!");
                  }
               }
               if(PATH3 & -2147483648) {
                  int scalar37 = 1;
                  scalar25++;
                  if(PATH3 & -2147483648) {
                     int scalar38 = 1;
                     printf("DELETE!\n");
                     int scalar39 = 1;
                     if (scalar27 == 0) {
                        printf("IS 0!");
                     }
                     scalar16--;
                     scalar23++;
                     scalar29--;
                  }
                  else {
                     scalar22--;
                  }
               }
               else {
                  int scalar37 = 1;
                  if (scalar21 == 0) {
                     printf("IS 0!");
                  }
                  int scalar38 = 1;
                  if (scalar36 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar39 = 1;
                  if (scalar15 == 0) {
                     printf("IS 0!");
                  }
               }
               if(PATH3 & -2147483648) {
                  int scalar37 = 1;
                  scalar32++;
                  if(PATH3 & -2147483648) {
                     int scalar38 = 1;
                     printf("DELETE!\n");
                     int scalar39 = 1;
                     int scalar40 = 1;
                     if(PATH3 & -2147483648) {
                        int scalar41 = 1;
                        scalar2++;
                     }
                     else {
                        int scalar41 = 1;
                        if (scalar20 == 0) {
                           printf("IS 0!");
                        }
                     }
                     if (scalar39 == 0) {
                        printf("IS 0!");
                     }
                     scalar25--;
                     scalar20++;
                     scalar39--;
                  }
                  else {
                     int scalar38 = 1;
                     if (scalar14 == 0) {
                        printf("IS 0!");
                     }
                     func12(rng());
                     int scalar39 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar11--;
                  }
               }
               else {
                  int scalar37 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  int scalar38 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  func10(rng());
                  int scalar39 = 1;
                  if (scalar32 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar40 = 1;
                  if (scalar26 == 0) {
                     printf("IS 0!");
                  }
                  int scalar41 = 1;
                  if (scalar24 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar33 == 0) {
                  printf("IS 0!");
               }
               scalar23--;
               scalar35++;
               scalar9--;
            }
            else {
               int scalar32 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               func8(rng());
               int scalar33 = 1;
               if (scalar18 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar34 = 1;
               if (scalar27 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar35 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               int scalar36 = 1;
               if (scalar25 == 0) {
                  printf("IS 0!");
               }
               int scalar37 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar17--;
            }
         }
         else {
            int scalar31 = 1;
            if (scalar25 == 0) {
               printf("IS 0!");
            }
            int scalar32 = 1;
            if (scalar25 == 0) {
               printf("IS 0!");
            }
            func6(rng());
            int scalar33 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar34 = 1;
            if (scalar32 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar35 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar36 = 1;
            if (scalar21 == 0) {
               printf("IS 0!");
            }
            int scalar37 = 1;
            if (scalar37 == 0) {
               printf("IS 0!");
            }
            int scalar38 = 1;
            if (scalar29 == 0) {
               printf("IS 0!");
            }
            int scalar39 = 1;
            if (scalar30 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         scalar15--;
         scalar27++;
         scalar4--;
      }
      else {
         int scalar24 = 1;
         if (scalar15 == 0) {
            printf("IS 0!");
         }
         func4(rng());
         int scalar25 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar26 = 1;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar27 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar28 = 1;
         if (scalar24 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar29 = 1;
         if (scalar27 == 0) {
            printf("IS 0!");
         }
         int scalar30 = 1;
         if (scalar28 == 0) {
            printf("IS 0!");
         }
         int scalar31 = 1;
         if (scalar29 == 0) {
            printf("IS 0!");
         }
         int scalar32 = 1;
         if (scalar26 == 0) {
            printf("IS 0!");
         }
         int scalar33 = 1;
         if (scalar30 == 0) {
            printf("IS 0!");
         }
         scalar7--;
      }
   }
}

void func11() {
}

void func12(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 1) {
   }
   else {
   }
}

void func9() {
   int scalar1 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func12(rng());
   int scalar2 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
}

void func10(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 1) {
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/6 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         if(PATH0 & 2) {
         }
         else {
            int scalar3 = 1;
            scalar2++;
         }
         func11();
      }
      printf("DELETE!\n");
   }
   else {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func12(rng());
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      int scalar5 = 1;
      if(PATH0 & 4) {
         int scalar6 = 1;
         scalar5++;
      }
      else {
         int scalar6 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
      }
   }
}

void func7() {
   int scalar1 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func10(rng());
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func12(rng());
   int scalar3 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   int scalar4 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
}

void func8(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 1) {
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/5 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         if(PATH0 & 2) {
            int loop9 = 0;
            int loopLimit9 = (rand()%10)/6 + 1;
            for(; loop9 < loopLimit9; loop9++) {
               if(PATH0 & 4) {
               }
               else {
                  int scalar3 = 1;
                  scalar2++;
               }
               func11();
            }
            printf("DELETE!\n");
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar4 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            int scalar5 = 1;
            scalar3++;
         }
         func9();
      }
      int scalar3 = 1;
      if(PATH0 & 8) {
         int scalar4 = 1;
         scalar4++;
      }
      else {
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
      if(PATH0 & 16) {
         int scalar4 = 1;
         printf("DELETE!\n");
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         scalar4++;
         scalar3--;
      }
      else {
         scalar3--;
      }
   }
   else {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func10(rng());
      int scalar4 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func12(rng());
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      int scalar6 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 32) {
         int scalar7 = 1;
         printf("DELETE!\n");
         int scalar8 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         scalar4++;
         scalar6--;
      }
      else {
         scalar6--;
      }
      int scalar7 = 1;
      int scalar8 = 1;
      if(PATH0 & 64) {
         int scalar9 = 1;
         scalar5++;
      }
      else {
         int scalar9 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 128) {
         int scalar9 = 1;
         scalar9++;
         if(PATH0 & 256) {
            int scalar10 = 1;
            printf("DELETE!\n");
            int scalar11 = 1;
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            scalar8--;
            scalar10++;
            scalar10--;
         }
         else {
            scalar2--;
         }
      }
      else {
         int scalar9 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         int scalar10 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar11 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
      }
   }
}

void func5() {
   int scalar1 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func8(rng());
   int scalar2 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func10(rng());
   int scalar3 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func12(rng());
   int scalar4 = 1;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   int scalar5 = 1;
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   int scalar6 = 1;
   if (scalar4 == 0) {
      printf("IS 0!");
   }
}

void func6(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 1) {
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/4 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         if(PATH0 & 2) {
            int loop11 = 0;
            int loopLimit11 = (rand()%10)/5 + 1;
            for(; loop11 < loopLimit11; loop11++) {
               if(PATH0 & 4) {
                  int loop12 = 0;
                  int loopLimit12 = (rand()%10)/6 + 1;
                  for(; loop12 < loopLimit12; loop12++) {
                     if(PATH0 & 8) {
                     }
                     else {
                        int scalar3 = 1;
                        scalar2++;
                     }
                     func11();
                  }
                  printf("DELETE!\n");
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  int scalar5 = 1;
                  scalar5++;
               }
               func9();
            }
            int scalar3 = 1;
            if(PATH0 & 16) {
               int scalar4 = 1;
               scalar4++;
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
            }
            printf("DELETE!\n");
            if(PATH0 & 32) {
               int scalar4 = 1;
               printf("DELETE!\n");
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               scalar3++;
               scalar5--;
            }
            else {
               scalar2--;
            }
         }
         else {
            int scalar3 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar5 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            int scalar6 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            int scalar7 = 1;
            scalar7++;
         }
         func7();
      }
      if(PATH0 & 64) {
         int scalar3 = 1;
         printf("DELETE!\n");
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         scalar3++;
         scalar4--;
      }
      else {
         scalar2--;
      }
      int scalar3 = 1;
      int scalar4 = 1;
      if(PATH0 & 128) {
         int scalar5 = 1;
         scalar3++;
      }
      else {
         int scalar5 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 256) {
         int scalar5 = 1;
         scalar5++;
         if(PATH0 & 512) {
            int scalar6 = 1;
            printf("DELETE!\n");
            int scalar7 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            scalar4++;
            scalar5--;
         }
         else {
            scalar5--;
         }
      }
      else {
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         int scalar6 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar7 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
      if(PATH0 & 1024) {
         int scalar5 = 1;
         printf("DELETE!\n");
         int scalar6 = 1;
         int scalar7 = 1;
         if(PATH0 & 2048) {
            int scalar8 = 1;
            scalar8++;
         }
         else {
            int scalar8 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar7--;
         scalar4++;
         scalar4--;
      }
      else {
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar6 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         scalar5--;
      }
   }
   else {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      int scalar4 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func10(rng());
      int scalar5 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func12(rng());
      int scalar6 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      int scalar7 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      int scalar8 = 1;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 4096) {
         int scalar9 = 1;
         printf("DELETE!\n");
         int scalar10 = 1;
         int scalar11 = 1;
         if(PATH0 & 8192) {
            int scalar12 = 1;
            scalar10++;
         }
         else {
            int scalar12 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         scalar2++;
         scalar11--;
      }
      else {
         int scalar9 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar10 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar3--;
      }
      int scalar9 = 1;
      if(PATH0 & 16384) {
         int scalar10 = 1;
         printf("DELETE!\n");
         int scalar11 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar7--;
         scalar11++;
         scalar6--;
      }
      else {
         scalar4--;
      }
      int scalar10 = 1;
      int scalar11 = 1;
      if(PATH0 & 32768) {
         int scalar12 = 1;
         scalar9++;
      }
      else {
         int scalar12 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 65536) {
         int scalar12 = 1;
         scalar12++;
         if(PATH0 & 131072) {
            int scalar13 = 1;
            printf("DELETE!\n");
            int scalar14 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            scalar8--;
            scalar5++;
            scalar13--;
         }
         else {
            scalar4--;
         }
      }
      else {
         int scalar12 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         int scalar13 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar14 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 262144) {
         int scalar12 = 1;
         scalar2++;
         if(PATH0 & 524288) {
            int scalar13 = 1;
            printf("DELETE!\n");
            int scalar14 = 1;
            int scalar15 = 1;
            if(PATH0 & 1048576) {
               int scalar16 = 1;
               scalar16++;
            }
            else {
               int scalar16 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            scalar10--;
            scalar14++;
            scalar8--;
         }
         else {
            int scalar13 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar14 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar6--;
         }
      }
      else {
         int scalar12 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         int scalar13 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar14 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar15 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         int scalar16 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
      }
   }
}

void func3() {
   int scalar1 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func6(rng());
   int scalar2 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func8(rng());
   int scalar3 = 1;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   func10(rng());
   int scalar4 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func12(rng());
   int scalar5 = 1;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   int scalar6 = 1;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   int scalar7 = 1;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   int scalar8 = 1;
   if (scalar5 == 0) {
      printf("IS 0!");
   }
}

void func4(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 1) {
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/3 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if(PATH0 & 2) {
            int loop14 = 0;
            int loopLimit14 = (rand()%10)/4 + 1;
            for(; loop14 < loopLimit14; loop14++) {
               if(PATH0 & 4) {
                  int loop15 = 0;
                  int loopLimit15 = (rand()%10)/5 + 1;
                  for(; loop15 < loopLimit15; loop15++) {
                     if(PATH0 & 8) {
                        int loop16 = 0;
                        int loopLimit16 = (rand()%10)/6 + 1;
                        for(; loop16 < loopLimit16; loop16++) {
                           if(PATH0 & 16) {
                           }
                           else {
                              int scalar3 = 1;
                              scalar3++;
                           }
                           func11();
                        }
                        printf("DELETE!\n");
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        func12(rng());
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        int scalar5 = 1;
                        scalar3++;
                     }
                     func9();
                  }
                  int scalar3 = 1;
                  if(PATH0 & 32) {
                     int scalar4 = 1;
                     scalar2++;
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                  }
                  printf("DELETE!\n");
                  if(PATH0 & 64) {
                     int scalar4 = 1;
                     printf("DELETE!\n");
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     scalar4++;
                     scalar3--;
                  }
                  else {
                     scalar2--;
                  }
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  func10(rng());
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  int scalar7 = 1;
                  scalar5++;
               }
               func7();
            }
            if(PATH0 & 128) {
               int scalar3 = 1;
               printf("DELETE!\n");
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               scalar4++;
               scalar2--;
            }
            else {
               scalar2--;
            }
            int scalar3 = 1;
            int scalar4 = 1;
            if(PATH0 & 256) {
               int scalar5 = 1;
               scalar2++;
            }
            else {
               int scalar5 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & 512) {
               int scalar5 = 1;
               scalar5++;
               if(PATH0 & 1024) {
                  int scalar6 = 1;
                  printf("DELETE!\n");
                  int scalar7 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  scalar6++;
                  scalar4--;
               }
               else {
                  scalar4--;
               }
            }
            else {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               int scalar6 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar7 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
            }
            printf("DELETE!\n");
            if(PATH0 & 2048) {
               int scalar5 = 1;
               printf("DELETE!\n");
               int scalar6 = 1;
               int scalar7 = 1;
               if(PATH0 & 4096) {
                  int scalar8 = 1;
                  scalar5++;
               }
               else {
                  int scalar8 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               scalar4++;
               scalar7--;
            }
            else {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
            }
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar5 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar6 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            int scalar7 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            int scalar8 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            int scalar9 = 1;
            scalar9++;
         }
         func5();
      }
      if(PATH0 & 8192) {
         int scalar3 = 1;
         printf("DELETE!\n");
         int scalar4 = 1;
         int scalar5 = 1;
         if(PATH0 & 16384) {
            int scalar6 = 1;
            scalar6++;
         }
         else {
            int scalar6 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         scalar3++;
         scalar3--;
      }
      else {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar2--;
      }
      int scalar3 = 1;
      if(PATH0 & 32768) {
         int scalar4 = 1;
         printf("DELETE!\n");
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         scalar5++;
         scalar3--;
      }
      else {
         scalar3--;
      }
      int scalar4 = 1;
      int scalar5 = 1;
      if(PATH0 & 65536) {
         int scalar6 = 1;
         scalar4++;
      }
      else {
         int scalar6 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 131072) {
         int scalar6 = 1;
         scalar4++;
         if(PATH0 & 262144) {
            int scalar7 = 1;
            printf("DELETE!\n");
            int scalar8 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            scalar7++;
            scalar6--;
         }
         else {
            scalar2--;
         }
      }
      else {
         int scalar6 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         int scalar7 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar8 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 524288) {
         int scalar6 = 1;
         scalar6++;
         if(PATH0 & 1048576) {
            int scalar7 = 1;
            printf("DELETE!\n");
            int scalar8 = 1;
            int scalar9 = 1;
            if(PATH0 & 2097152) {
               int scalar10 = 1;
               scalar7++;
            }
            else {
               int scalar10 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            scalar2++;
            scalar7--;
         }
         else {
            int scalar7 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar8 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar3--;
         }
      }
      else {
         int scalar6 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         int scalar7 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar8 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar9 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         int scalar10 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
      if(PATH0 & 4194304) {
         int scalar6 = 1;
         printf("DELETE!\n");
         int scalar7 = 1;
         if(PATH0 & 8388608) {
            int scalar8 = 1;
            printf("DELETE!\n");
            int scalar9 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            scalar4++;
            scalar4--;
         }
         else {
            scalar6--;
         }
         int scalar8 = 1;
         int scalar9 = 1;
         if(PATH0 & 16777216) {
            int scalar10 = 1;
            scalar4++;
         }
         else {
            int scalar10 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & 33554432) {
            int scalar10 = 1;
            scalar4++;
            if(PATH0 & 67108864) {
               int scalar11 = 1;
               printf("DELETE!\n");
               int scalar12 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               scalar2++;
               scalar5--;
            }
            else {
               scalar6--;
            }
         }
         else {
            int scalar10 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            int scalar11 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar12 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         scalar4++;
         scalar3--;
      }
      else {
         int scalar6 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar7 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar8 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         int scalar9 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar5--;
      }
   }
   else {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      int scalar5 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func10(rng());
      int scalar6 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func12(rng());
      int scalar7 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      int scalar8 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      int scalar9 = 1;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      int scalar10 = 1;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 134217728) {
         int scalar11 = 1;
         printf("DELETE!\n");
         int scalar12 = 1;
         if(PATH0 & 268435456) {
            int scalar13 = 1;
            printf("DELETE!\n");
            int scalar14 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar6--;
            scalar3++;
            scalar4--;
         }
         else {
            scalar10--;
         }
         int scalar13 = 1;
         int scalar14 = 1;
         if(PATH0 & 536870912) {
            int scalar15 = 1;
            scalar14++;
         }
         else {
            int scalar15 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & 1073741824) {
            int scalar15 = 1;
            scalar5++;
            if(PATH0 & -2147483648) {
               int scalar16 = 1;
               printf("DELETE!\n");
               int scalar17 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               scalar11++;
               scalar14--;
            }
            else {
               scalar11--;
            }
         }
         else {
            int scalar15 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
            int scalar16 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar17 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         scalar10--;
         scalar6++;
         scalar6--;
      }
      else {
         int scalar11 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar12 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar13 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         int scalar14 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         scalar14--;
      }
      int scalar11 = 1;
      if(PATH0 & -2147483648) {
         int scalar12 = 1;
         printf("DELETE!\n");
         int scalar13 = 1;
         int scalar14 = 1;
         if(PATH0 & -2147483648) {
            int scalar15 = 1;
            scalar9++;
         }
         else {
            int scalar15 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         scalar10--;
         scalar13++;
         scalar6--;
      }
      else {
         int scalar12 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar13 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar7--;
      }
      int scalar12 = 1;
      if(PATH0 & -2147483648) {
         int scalar13 = 1;
         printf("DELETE!\n");
         int scalar14 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar12--;
         scalar14++;
         scalar8--;
      }
      else {
         scalar9--;
      }
      int scalar13 = 1;
      int scalar14 = 1;
      if(PATH0 & -2147483648) {
         int scalar15 = 1;
         scalar13++;
      }
      else {
         int scalar15 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & -2147483648) {
         int scalar15 = 1;
         scalar15++;
         if(PATH0 & -2147483648) {
            int scalar16 = 1;
            printf("DELETE!\n");
            int scalar17 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar14--;
            scalar5++;
            scalar4--;
         }
         else {
            scalar8--;
         }
      }
      else {
         int scalar15 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         int scalar16 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar17 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & -2147483648) {
         int scalar15 = 1;
         scalar13++;
         if(PATH0 & -2147483648) {
            int scalar16 = 1;
            printf("DELETE!\n");
            int scalar17 = 1;
            int scalar18 = 1;
            if(PATH0 & -2147483648) {
               int scalar19 = 1;
               scalar3++;
            }
            else {
               int scalar19 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar12--;
            scalar9++;
            scalar3--;
         }
         else {
            int scalar16 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar17 = 1;
            if (scalar17 == 0) {
               printf("IS 0!");
            }
            scalar3--;
         }
      }
      else {
         int scalar15 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         int scalar16 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar17 = 1;
         if (scalar12 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar18 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         int scalar19 = 1;
         if (scalar15 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & -2147483648) {
         int scalar15 = 1;
         scalar3++;
         if(PATH0 & -2147483648) {
            int scalar16 = 1;
            printf("DELETE!\n");
            int scalar17 = 1;
            if(PATH0 & -2147483648) {
               int scalar18 = 1;
               printf("DELETE!\n");
               int scalar19 = 1;
               if (scalar12 == 0) {
                  printf("IS 0!");
               }
               scalar8--;
               scalar10++;
               scalar10--;
            }
            else {
               scalar17--;
            }
            int scalar18 = 1;
            int scalar19 = 1;
            if(PATH0 & -2147483648) {
               int scalar20 = 1;
               scalar17++;
            }
            else {
               int scalar20 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & -2147483648) {
               int scalar20 = 1;
               scalar20++;
               if(PATH0 & -2147483648) {
                  int scalar21 = 1;
                  printf("DELETE!\n");
                  int scalar22 = 1;
                  if (scalar19 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  scalar22++;
                  scalar9--;
               }
               else {
                  scalar19--;
               }
            }
            else {
               int scalar20 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               int scalar21 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar22 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            scalar10++;
            scalar10--;
         }
         else {
            int scalar16 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar17 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar18 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            int scalar19 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            scalar18--;
         }
      }
      else {
         int scalar15 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         int scalar16 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar17 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar18 = 1;
         if (scalar14 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar19 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         int scalar20 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         int scalar21 = 1;
         if (scalar20 == 0) {
            printf("IS 0!");
         }
      }
   }
}

void func1() {
   int scalar1 = 1;
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func4(rng());
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func6(rng());
   int scalar3 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func8(rng());
   int scalar4 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func10(rng());
   int scalar5 = 1;
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   func12(rng());
   int scalar6 = 1;
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   int scalar7 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   int scalar8 = 1;
   if (scalar8 == 0) {
      printf("IS 0!");
   }
   int scalar9 = 1;
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   int scalar10 = 1;
   if (scalar7 == 0) {
      printf("IS 0!");
   }
}

void func2(const unsigned long PATH0, const unsigned long PATH1) {
   int scalar7 = 1;
   if (scalar7 == 0) {
      printf("IS 0!");
   }
   if (scalar7 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 1) {
      int loop17 = 0;
      int loopLimit17 = (rand()%10)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         if(PATH0 & 2) {
            int loop18 = 0;
            int loopLimit18 = (rand()%10)/3 + 1;
            for(; loop18 < loopLimit18; loop18++) {
               if(PATH0 & 4) {
                  int loop19 = 0;
                  int loopLimit19 = (rand()%10)/4 + 1;
                  for(; loop19 < loopLimit19; loop19++) {
                     if(PATH0 & 8) {
                        int loop20 = 0;
                        int loopLimit20 = (rand()%10)/5 + 1;
                        for(; loop20 < loopLimit20; loop20++) {
                           if(PATH0 & 16) {
                              int loop21 = 0;
                              int loopLimit21 = (rand()%10)/6 + 1;
                              for(; loop21 < loopLimit21; loop21++) {
                                 if(PATH0 & 32) {
                                 }
                                 else {
                                    int scalar8 = 1;
                                    scalar8++;
                                 }
                                 func11();
                              }
                              printf("DELETE!\n");
                           }
                           else {
                              int scalar8 = 1;
                              if (scalar8 == 0) {
                                 printf("IS 0!");
                              }
                              func12(rng());
                              int scalar9 = 1;
                              if (scalar8 == 0) {
                                 printf("IS 0!");
                              }
                              int scalar10 = 1;
                              scalar9++;
                           }
                           func9();
                        }
                        int scalar8 = 1;
                        if(PATH0 & 64) {
                           int scalar9 = 1;
                           scalar8++;
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar9 == 0) {
                              printf("IS 0!");
                           }
                        }
                        printf("DELETE!\n");
                        if(PATH0 & 128) {
                           int scalar9 = 1;
                           printf("DELETE!\n");
                           int scalar10 = 1;
                           if (scalar8 == 0) {
                              printf("IS 0!");
                           }
                           scalar8--;
                           scalar10++;
                           scalar7--;
                        }
                        else {
                           scalar8--;
                        }
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        func10(rng());
                        int scalar9 = 1;
                        if (scalar9 == 0) {
                           printf("IS 0!");
                        }
                        func12(rng());
                        int scalar10 = 1;
                        if (scalar8 == 0) {
                           printf("IS 0!");
                        }
                        int scalar11 = 1;
                        if (scalar11 == 0) {
                           printf("IS 0!");
                        }
                        int scalar12 = 1;
                        scalar8++;
                     }
                     func7();
                  }
                  if(PATH0 & 256) {
                     int scalar8 = 1;
                     printf("DELETE!\n");
                     int scalar9 = 1;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                     scalar7--;
                     scalar9++;
                     scalar9--;
                  }
                  else {
                     scalar7--;
                  }
                  int scalar8 = 1;
                  int scalar9 = 1;
                  if(PATH0 & 512) {
                     int scalar10 = 1;
                     scalar9++;
                  }
                  else {
                     int scalar10 = 1;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if(PATH0 & 1024) {
                     int scalar10 = 1;
                     scalar9++;
                     if(PATH0 & 2048) {
                        int scalar11 = 1;
                        printf("DELETE!\n");
                        int scalar12 = 1;
                        if (scalar11 == 0) {
                           printf("IS 0!");
                        }
                        scalar8--;
                        scalar11++;
                        scalar7--;
                     }
                     else {
                        scalar9--;
                     }
                  }
                  else {
                     int scalar10 = 1;
                     if (scalar9 == 0) {
                        printf("IS 0!");
                     }
                     int scalar11 = 1;
                     if (scalar9 == 0) {
                        printf("IS 0!");
                     }
                     func12(rng());
                     int scalar12 = 1;
                     if (scalar12 == 0) {
                        printf("IS 0!");
                     }
                  }
                  printf("DELETE!\n");
                  if(PATH0 & 4096) {
                     int scalar10 = 1;
                     printf("DELETE!\n");
                     int scalar11 = 1;
                     int scalar12 = 1;
                     if(PATH0 & 8192) {
                        int scalar13 = 1;
                        scalar10++;
                     }
                     else {
                        int scalar13 = 1;
                        if (scalar11 == 0) {
                           printf("IS 0!");
                        }
                     }
                     if (scalar12 == 0) {
                        printf("IS 0!");
                     }
                     scalar10--;
                     scalar7++;
                     scalar10--;
                  }
                  else {
                     int scalar10 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     func12(rng());
                     int scalar11 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     scalar10--;
                  }
               }
               else {
                  int scalar8 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  func8(rng());
                  int scalar9 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  func10(rng());
                  int scalar10 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar11 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  int scalar12 = 1;
                  if (scalar12 == 0) {
                     printf("IS 0!");
                  }
                  int scalar13 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  int scalar14 = 1;
                  scalar14++;
               }
               func5();
            }
            if(PATH0 & 16384) {
               int scalar8 = 1;
               printf("DELETE!\n");
               int scalar9 = 1;
               int scalar10 = 1;
               if(PATH0 & 32768) {
                  int scalar11 = 1;
                  scalar7++;
               }
               else {
                  int scalar11 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar9--;
               scalar8++;
               scalar9--;
            }
            else {
               int scalar8 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar9 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               scalar8--;
            }
            int scalar8 = 1;
            if(PATH0 & 65536) {
               int scalar9 = 1;
               printf("DELETE!\n");
               int scalar10 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               scalar8--;
               scalar8++;
               scalar10--;
            }
            else {
               scalar8--;
            }
            int scalar9 = 1;
            int scalar10 = 1;
            if(PATH0 & 131072) {
               int scalar11 = 1;
               scalar9++;
            }
            else {
               int scalar11 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & 262144) {
               int scalar11 = 1;
               scalar8++;
               if(PATH0 & 524288) {
                  int scalar12 = 1;
                  printf("DELETE!\n");
                  int scalar13 = 1;
                  if (scalar12 == 0) {
                     printf("IS 0!");
                  }
                  scalar7--;
                  scalar7++;
                  scalar11--;
               }
               else {
                  scalar9--;
               }
            }
            else {
               int scalar11 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               int scalar12 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar13 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & 1048576) {
               int scalar11 = 1;
               scalar11++;
               if(PATH0 & 2097152) {
                  int scalar12 = 1;
                  printf("DELETE!\n");
                  int scalar13 = 1;
                  int scalar14 = 1;
                  if(PATH0 & 4194304) {
                     int scalar15 = 1;
                     scalar14++;
                  }
                  else {
                     int scalar15 = 1;
                     if (scalar9 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  scalar8--;
                  scalar11++;
                  scalar9--;
               }
               else {
                  int scalar12 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar13 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  scalar7--;
               }
            }
            else {
               int scalar11 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               int scalar12 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar13 = 1;
               if (scalar13 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar14 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               int scalar15 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
            }
            printf("DELETE!\n");
            if(PATH0 & 8388608) {
               int scalar11 = 1;
               printf("DELETE!\n");
               int scalar12 = 1;
               if(PATH0 & 16777216) {
                  int scalar13 = 1;
                  printf("DELETE!\n");
                  int scalar14 = 1;
                  if (scalar13 == 0) {
                     printf("IS 0!");
                  }
                  scalar14--;
                  scalar14++;
                  scalar8--;
               }
               else {
                  scalar8--;
               }
               int scalar13 = 1;
               int scalar14 = 1;
               if(PATH0 & 33554432) {
                  int scalar15 = 1;
                  scalar7++;
               }
               else {
                  int scalar15 = 1;
                  if (scalar11 == 0) {
                     printf("IS 0!");
                  }
               }
               if(PATH0 & 67108864) {
                  int scalar15 = 1;
                  scalar8++;
                  if(PATH0 & 134217728) {
                     int scalar16 = 1;
                     printf("DELETE!\n");
                     int scalar17 = 1;
                     if (scalar10 == 0) {
                        printf("IS 0!");
                     }
                     scalar14--;
                     scalar9++;
                     scalar13--;
                  }
                  else {
                     scalar14--;
                  }
               }
               else {
                  int scalar15 = 1;
                  if (scalar15 == 0) {
                     printf("IS 0!");
                  }
                  int scalar16 = 1;
                  if (scalar12 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar17 = 1;
                  if (scalar13 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar14 == 0) {
                  printf("IS 0!");
               }
               scalar12--;
               scalar8++;
               scalar8--;
            }
            else {
               int scalar11 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar12 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar13 = 1;
               if (scalar12 == 0) {
                  printf("IS 0!");
               }
               int scalar14 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               scalar8--;
            }
         }
         else {
            int scalar8 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func6(rng());
            int scalar9 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar10 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar11 = 1;
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar12 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            int scalar13 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            int scalar14 = 1;
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            int scalar15 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            int scalar16 = 1;
            scalar14++;
         }
         func3();
      }
      if(PATH0 & 268435456) {
         int scalar8 = 1;
         printf("DELETE!\n");
         int scalar9 = 1;
         if(PATH0 & 536870912) {
            int scalar10 = 1;
            printf("DELETE!\n");
            int scalar11 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar7--;
            scalar8++;
            scalar8--;
         }
         else {
            scalar9--;
         }
         int scalar10 = 1;
         int scalar11 = 1;
         if(PATH0 & 1073741824) {
            int scalar12 = 1;
            scalar8++;
         }
         else {
            int scalar12 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & -2147483648) {
            int scalar12 = 1;
            scalar9++;
            if(PATH0 & -2147483648) {
               int scalar13 = 1;
               printf("DELETE!\n");
               int scalar14 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               scalar10--;
               scalar11++;
               scalar9--;
            }
            else {
               scalar9--;
            }
         }
         else {
            int scalar12 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            int scalar13 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar14 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         scalar11--;
         scalar10++;
         scalar8--;
      }
      else {
         int scalar8 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar9 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar10 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         int scalar11 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         scalar10--;
      }
      int scalar8 = 1;
      if(PATH0 & -2147483648) {
         int scalar9 = 1;
         printf("DELETE!\n");
         int scalar10 = 1;
         int scalar11 = 1;
         if(PATH0 & -2147483648) {
            int scalar12 = 1;
            scalar7++;
         }
         else {
            int scalar12 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         scalar7--;
         scalar8++;
         scalar8--;
      }
      else {
         int scalar9 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar10 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         scalar7--;
      }
      int scalar9 = 1;
      if(PATH0 & -2147483648) {
         int scalar10 = 1;
         printf("DELETE!\n");
         int scalar11 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         scalar9--;
         scalar10++;
         scalar8--;
      }
      else {
         scalar9--;
      }
      int scalar10 = 1;
      int scalar11 = 1;
      if(PATH0 & -2147483648) {
         int scalar12 = 1;
         scalar9++;
      }
      else {
         int scalar12 = 1;
         if (scalar12 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & -2147483648) {
         int scalar12 = 1;
         scalar11++;
         if(PATH0 & -2147483648) {
            int scalar13 = 1;
            printf("DELETE!\n");
            int scalar14 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar14--;
            scalar8++;
            scalar14--;
         }
         else {
            scalar11--;
         }
      }
      else {
         int scalar12 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         int scalar13 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar14 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & -2147483648) {
         int scalar12 = 1;
         scalar10++;
         if(PATH0 & -2147483648) {
            int scalar13 = 1;
            printf("DELETE!\n");
            int scalar14 = 1;
            int scalar15 = 1;
            if(PATH0 & -2147483648) {
               int scalar16 = 1;
               scalar10++;
            }
            else {
               int scalar16 = 1;
               if (scalar14 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            scalar13--;
            scalar7++;
            scalar12--;
         }
         else {
            int scalar13 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar14 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            scalar11--;
         }
      }
      else {
         int scalar12 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         int scalar13 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar14 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar15 = 1;
         if (scalar14 == 0) {
            printf("IS 0!");
         }
         int scalar16 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & -2147483648) {
         int scalar12 = 1;
         scalar10++;
         if(PATH0 & -2147483648) {
            int scalar13 = 1;
            printf("DELETE!\n");
            int scalar14 = 1;
            if(PATH0 & -2147483648) {
               int scalar15 = 1;
               printf("DELETE!\n");
               int scalar16 = 1;
               if (scalar16 == 0) {
                  printf("IS 0!");
               }
               scalar15--;
               scalar7++;
               scalar9--;
            }
            else {
               scalar7--;
            }
            int scalar15 = 1;
            int scalar16 = 1;
            if(PATH0 & -2147483648) {
               int scalar17 = 1;
               scalar10++;
            }
            else {
               int scalar17 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & -2147483648) {
               int scalar17 = 1;
               scalar7++;
               if(PATH0 & -2147483648) {
                  int scalar18 = 1;
                  printf("DELETE!\n");
                  int scalar19 = 1;
                  if (scalar14 == 0) {
                     printf("IS 0!");
                  }
                  scalar7--;
                  scalar15++;
                  scalar15--;
               }
               else {
                  scalar14--;
               }
            }
            else {
               int scalar17 = 1;
               if (scalar14 == 0) {
                  printf("IS 0!");
               }
               int scalar18 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar19 = 1;
               if (scalar15 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            scalar15--;
            scalar14++;
            scalar10--;
         }
         else {
            int scalar13 = 1;
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar14 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar15 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            int scalar16 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            scalar7--;
         }
      }
      else {
         int scalar12 = 1;
         if (scalar12 == 0) {
            printf("IS 0!");
         }
         int scalar13 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar14 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar15 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar16 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         int scalar17 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         int scalar18 = 1;
         if (scalar16 == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
      if(PATH0 & -2147483648) {
         int scalar12 = 1;
         printf("DELETE!\n");
         int scalar13 = 1;
         if(PATH0 & -2147483648) {
            int scalar14 = 1;
            printf("DELETE!\n");
            int scalar15 = 1;
            int scalar16 = 1;
            if(PATH0 & -2147483648) {
               int scalar17 = 1;
               scalar8++;
            }
            else {
               int scalar17 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            scalar12--;
            scalar16++;
            scalar11--;
         }
         else {
            int scalar14 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar15 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            scalar10--;
         }
         int scalar14 = 1;
         if(PATH0 & -2147483648) {
            int scalar15 = 1;
            printf("DELETE!\n");
            int scalar16 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            scalar9--;
            scalar16++;
            scalar7--;
         }
         else {
            scalar12--;
         }
         int scalar15 = 1;
         int scalar16 = 1;
         if(PATH0 & -2147483648) {
            int scalar17 = 1;
            scalar7++;
         }
         else {
            int scalar17 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & -2147483648) {
            int scalar17 = 1;
            scalar10++;
            if(PATH0 & -2147483648) {
               int scalar18 = 1;
               printf("DELETE!\n");
               int scalar19 = 1;
               if (scalar19 == 0) {
                  printf("IS 0!");
               }
               scalar14--;
               scalar7++;
               scalar11--;
            }
            else {
               scalar12--;
            }
         }
         else {
            int scalar17 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            int scalar18 = 1;
            if (scalar18 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar19 = 1;
            if (scalar18 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & -2147483648) {
            int scalar17 = 1;
            scalar11++;
            if(PATH0 & -2147483648) {
               int scalar18 = 1;
               printf("DELETE!\n");
               int scalar19 = 1;
               int scalar20 = 1;
               if(PATH0 & -2147483648) {
                  int scalar21 = 1;
                  scalar17++;
               }
               else {
                  int scalar21 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar20 == 0) {
                  printf("IS 0!");
               }
               scalar20--;
               scalar10++;
               scalar11--;
            }
            else {
               int scalar18 = 1;
               if (scalar16 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar19 = 1;
               if (scalar16 == 0) {
                  printf("IS 0!");
               }
               scalar17--;
            }
         }
         else {
            int scalar17 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
            int scalar18 = 1;
            if (scalar18 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar19 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar20 = 1;
            if (scalar20 == 0) {
               printf("IS 0!");
            }
            int scalar21 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         scalar16--;
         scalar9++;
         scalar11--;
      }
      else {
         int scalar12 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar13 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar14 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar15 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         int scalar16 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         int scalar17 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         scalar7--;
      }
   }
   else {
      int scalar8 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      func4(rng());
      int scalar9 = 1;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      func6(rng());
      int scalar10 = 1;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      int scalar11 = 1;
      if (scalar11 == 0) {
         printf("IS 0!");
      }
      func10(rng());
      int scalar12 = 1;
      if (scalar10 == 0) {
         printf("IS 0!");
      }
      func12(rng());
      int scalar13 = 1;
      if (scalar9 == 0) {
         printf("IS 0!");
      }
      int scalar14 = 1;
      if (scalar13 == 0) {
         printf("IS 0!");
      }
      int scalar15 = 1;
      if (scalar14 == 0) {
         printf("IS 0!");
      }
      int scalar16 = 1;
      if (scalar12 == 0) {
         printf("IS 0!");
      }
      int scalar17 = 1;
      if (scalar13 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & -2147483648) {
         int scalar18 = 1;
         printf("DELETE!\n");
         int scalar19 = 1;
         if(PATH0 & -2147483648) {
            int scalar20 = 1;
            printf("DELETE!\n");
            int scalar21 = 1;
            int scalar22 = 1;
            if(PATH0 & -2147483648) {
               int scalar23 = 1;
               scalar23++;
            }
            else {
               int scalar23 = 1;
               if (scalar16 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar20 == 0) {
               printf("IS 0!");
            }
            scalar9--;
            scalar14++;
            scalar9--;
         }
         else {
            int scalar20 = 1;
            if (scalar14 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar21 = 1;
            if (scalar19 == 0) {
               printf("IS 0!");
            }
            scalar11--;
         }
         int scalar20 = 1;
         if(PATH0 & -2147483648) {
            int scalar21 = 1;
            printf("DELETE!\n");
            int scalar22 = 1;
            if (scalar17 == 0) {
               printf("IS 0!");
            }
            scalar12--;
            scalar15++;
            scalar7--;
         }
         else {
            scalar16--;
         }
         int scalar21 = 1;
         int scalar22 = 1;
         if(PATH0 & -2147483648) {
            int scalar23 = 1;
            scalar18++;
         }
         else {
            int scalar23 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & -2147483648) {
            int scalar23 = 1;
            scalar21++;
            if(PATH1 & 1) {
               int scalar24 = 1;
               printf("DELETE!\n");
               int scalar25 = 1;
               if (scalar22 == 0) {
                  printf("IS 0!");
               }
               scalar9--;
               scalar22++;
               scalar9--;
            }
            else {
               scalar22--;
            }
         }
         else {
            int scalar23 = 1;
            if (scalar21 == 0) {
               printf("IS 0!");
            }
            int scalar24 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar25 = 1;
            if (scalar24 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH1 & 2) {
            int scalar23 = 1;
            scalar16++;
            if(PATH1 & 4) {
               int scalar24 = 1;
               printf("DELETE!\n");
               int scalar25 = 1;
               int scalar26 = 1;
               if(PATH1 & 8) {
                  int scalar27 = 1;
                  scalar24++;
               }
               else {
                  int scalar27 = 1;
                  if (scalar22 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar12--;
               scalar9++;
               scalar14--;
            }
            else {
               int scalar24 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar25 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               scalar13--;
            }
         }
         else {
            int scalar23 = 1;
            if (scalar17 == 0) {
               printf("IS 0!");
            }
            int scalar24 = 1;
            if (scalar20 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar25 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar26 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
            int scalar27 = 1;
            if (scalar19 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         scalar17--;
         scalar10++;
         scalar19--;
      }
      else {
         int scalar18 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar19 = 1;
         if (scalar14 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar20 = 1;
         if (scalar16 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar21 = 1;
         if (scalar12 == 0) {
            printf("IS 0!");
         }
         int scalar22 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         int scalar23 = 1;
         if (scalar20 == 0) {
            printf("IS 0!");
         }
         scalar10--;
      }
      int scalar18 = 1;
      if(PATH1 & 16) {
         int scalar19 = 1;
         printf("DELETE!\n");
         int scalar20 = 1;
         if(PATH1 & 32) {
            int scalar21 = 1;
            printf("DELETE!\n");
            int scalar22 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            scalar18--;
            scalar12++;
            scalar12--;
         }
         else {
            scalar19--;
         }
         int scalar21 = 1;
         int scalar22 = 1;
         if(PATH1 & 64) {
            int scalar23 = 1;
            scalar7++;
         }
         else {
            int scalar23 = 1;
            if (scalar17 == 0) {
               printf("IS 0!");
            }
         }
         if(PATH1 & 128) {
            int scalar23 = 1;
            scalar15++;
            if(PATH1 & 256) {
               int scalar24 = 1;
               printf("DELETE!\n");
               int scalar25 = 1;
               if (scalar22 == 0) {
                  printf("IS 0!");
               }
               scalar21--;
               scalar19++;
               scalar23--;
            }
            else {
               scalar21--;
            }
         }
         else {
            int scalar23 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
            int scalar24 = 1;
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar25 = 1;
            if (scalar9 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar21 == 0) {
            printf("IS 0!");
         }
         scalar10--;
         scalar14++;
         scalar16--;
      }
      else {
         int scalar19 = 1;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar20 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar21 = 1;
         if (scalar18 == 0) {
            printf("IS 0!");
         }
         int scalar22 = 1;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         scalar18--;
      }
      int scalar19 = 1;
      if(PATH1 & 512) {
         int scalar20 = 1;
         printf("DELETE!\n");
         int scalar21 = 1;
         int scalar22 = 1;
         if(PATH1 & 1024) {
            int scalar23 = 1;
            scalar11++;
         }
         else {
            int scalar23 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
         }
         if (scalar22 == 0) {
            printf("IS 0!");
         }
         scalar19--;
         scalar10++;
         scalar16--;
      }
      else {
         int scalar20 = 1;
         if (scalar18 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar21 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         scalar10--;
      }
      int scalar20 = 1;
      if(PATH1 & 2048) {
         int scalar21 = 1;
         printf("DELETE!\n");
         int scalar22 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         scalar17--;
         scalar19++;
         scalar19--;
      }
      else {
         scalar12--;
      }
      int scalar21 = 1;
      int scalar22 = 1;
      if(PATH1 & 4096) {
         int scalar23 = 1;
         scalar8++;
      }
      else {
         int scalar23 = 1;
         if (scalar12 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH1 & 8192) {
         int scalar23 = 1;
         scalar7++;
         if(PATH1 & 16384) {
            int scalar24 = 1;
            printf("DELETE!\n");
            int scalar25 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            scalar23--;
            scalar11++;
            scalar15--;
         }
         else {
            scalar8--;
         }
      }
      else {
         int scalar23 = 1;
         if (scalar16 == 0) {
            printf("IS 0!");
         }
         int scalar24 = 1;
         if (scalar18 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar25 = 1;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH1 & 32768) {
         int scalar23 = 1;
         scalar12++;
         if(PATH1 & 65536) {
            int scalar24 = 1;
            printf("DELETE!\n");
            int scalar25 = 1;
            int scalar26 = 1;
            if(PATH1 & 131072) {
               int scalar27 = 1;
               scalar8++;
            }
            else {
               int scalar27 = 1;
               if (scalar24 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar26 == 0) {
               printf("IS 0!");
            }
            scalar9--;
            scalar20++;
            scalar18--;
         }
         else {
            int scalar24 = 1;
            if (scalar13 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar25 = 1;
            if (scalar12 == 0) {
               printf("IS 0!");
            }
            scalar22--;
         }
      }
      else {
         int scalar23 = 1;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         int scalar24 = 1;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar25 = 1;
         if (scalar22 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar26 = 1;
         if (scalar25 == 0) {
            printf("IS 0!");
         }
         int scalar27 = 1;
         if (scalar22 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH1 & 262144) {
         int scalar23 = 1;
         scalar21++;
         if(PATH1 & 524288) {
            int scalar24 = 1;
            printf("DELETE!\n");
            int scalar25 = 1;
            if(PATH1 & 1048576) {
               int scalar26 = 1;
               printf("DELETE!\n");
               int scalar27 = 1;
               if (scalar12 == 0) {
                  printf("IS 0!");
               }
               scalar20--;
               scalar10++;
               scalar23--;
            }
            else {
               scalar8--;
            }
            int scalar26 = 1;
            int scalar27 = 1;
            if(PATH1 & 2097152) {
               int scalar28 = 1;
               scalar19++;
            }
            else {
               int scalar28 = 1;
               if (scalar14 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH1 & 4194304) {
               int scalar28 = 1;
               scalar11++;
               if(PATH1 & 8388608) {
                  int scalar29 = 1;
                  printf("DELETE!\n");
                  int scalar30 = 1;
                  if (scalar15 == 0) {
                     printf("IS 0!");
                  }
                  scalar28--;
                  scalar7++;
                  scalar13--;
               }
               else {
                  scalar10--;
               }
            }
            else {
               int scalar28 = 1;
               if (scalar14 == 0) {
                  printf("IS 0!");
               }
               int scalar29 = 1;
               if (scalar14 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar30 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            scalar24--;
            scalar9++;
            scalar14--;
         }
         else {
            int scalar24 = 1;
            if (scalar24 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar25 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar26 = 1;
            if (scalar11 == 0) {
               printf("IS 0!");
            }
            int scalar27 = 1;
            if (scalar26 == 0) {
               printf("IS 0!");
            }
            scalar22--;
         }
      }
      else {
         int scalar23 = 1;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         int scalar24 = 1;
         if (scalar17 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar25 = 1;
         if (scalar24 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar26 = 1;
         if (scalar24 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar27 = 1;
         if (scalar23 == 0) {
            printf("IS 0!");
         }
         int scalar28 = 1;
         if (scalar21 == 0) {
            printf("IS 0!");
         }
         int scalar29 = 1;
         if (scalar29 == 0) {
            printf("IS 0!");
         }
      }
      if(PATH1 & 16777216) {
         int scalar23 = 1;
         scalar7++;
         if(PATH1 & 33554432) {
            int scalar24 = 1;
            printf("DELETE!\n");
            int scalar25 = 1;
            if(PATH1 & 67108864) {
               int scalar26 = 1;
               printf("DELETE!\n");
               int scalar27 = 1;
               int scalar28 = 1;
               if(PATH1 & 134217728) {
                  int scalar29 = 1;
                  scalar7++;
               }
               else {
                  int scalar29 = 1;
                  if (scalar23 == 0) {
                     printf("IS 0!");
                  }
               }
               if (scalar18 == 0) {
                  printf("IS 0!");
               }
               scalar21--;
               scalar28++;
               scalar22--;
            }
            else {
               int scalar26 = 1;
               if (scalar22 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar27 = 1;
               if (scalar14 == 0) {
                  printf("IS 0!");
               }
               scalar18--;
            }
            int scalar26 = 1;
            if(PATH1 & 268435456) {
               int scalar27 = 1;
               printf("DELETE!\n");
               int scalar28 = 1;
               if (scalar16 == 0) {
                  printf("IS 0!");
               }
               scalar12--;
               scalar23++;
               scalar11--;
            }
            else {
               scalar7--;
            }
            int scalar27 = 1;
            int scalar28 = 1;
            if(PATH1 & 536870912) {
               int scalar29 = 1;
               scalar20++;
            }
            else {
               int scalar29 = 1;
               if (scalar15 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH1 & 1073741824) {
               int scalar29 = 1;
               scalar23++;
               if(PATH1 & -2147483648) {
                  int scalar30 = 1;
                  printf("DELETE!\n");
                  int scalar31 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  scalar24--;
                  scalar16++;
                  scalar28--;
               }
               else {
                  scalar22--;
               }
            }
            else {
               int scalar29 = 1;
               if (scalar15 == 0) {
                  printf("IS 0!");
               }
               int scalar30 = 1;
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar31 = 1;
               if (scalar17 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH1 & -2147483648) {
               int scalar29 = 1;
               scalar16++;
               if(PATH1 & -2147483648) {
                  int scalar30 = 1;
                  printf("DELETE!\n");
                  int scalar31 = 1;
                  int scalar32 = 1;
                  if(PATH1 & -2147483648) {
                     int scalar33 = 1;
                     scalar33++;
                  }
                  else {
                     int scalar33 = 1;
                     if (scalar33 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (scalar19 == 0) {
                     printf("IS 0!");
                  }
                  scalar12--;
                  scalar8++;
                  scalar12--;
               }
               else {
                  int scalar30 = 1;
                  if (scalar22 == 0) {
                     printf("IS 0!");
                  }
                  func12(rng());
                  int scalar31 = 1;
                  if (scalar12 == 0) {
                     printf("IS 0!");
                  }
                  scalar21--;
               }
            }
            else {
               int scalar29 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               int scalar30 = 1;
               if (scalar20 == 0) {
                  printf("IS 0!");
               }
               func10(rng());
               int scalar31 = 1;
               if (scalar18 == 0) {
                  printf("IS 0!");
               }
               func12(rng());
               int scalar32 = 1;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               int scalar33 = 1;
               if (scalar27 == 0) {
                  printf("IS 0!");
               }
            }
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            scalar18--;
            scalar20++;
            scalar18--;
         }
         else {
            int scalar24 = 1;
            if (scalar15 == 0) {
               printf("IS 0!");
            }
            func8(rng());
            int scalar25 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            int scalar26 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            func12(rng());
            int scalar27 = 1;
            if (scalar19 == 0) {
               printf("IS 0!");
            }
            int scalar28 = 1;
            if (scalar26 == 0) {
               printf("IS 0!");
            }
            int scalar29 = 1;
            if (scalar16 == 0) {
               printf("IS 0!");
            }
            scalar21--;
         }
      }
      else {
         int scalar23 = 1;
         if (scalar16 == 0) {
            printf("IS 0!");
         }
         int scalar24 = 1;
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         func6(rng());
         int scalar25 = 1;
         if (scalar21 == 0) {
            printf("IS 0!");
         }
         func8(rng());
         int scalar26 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         func10(rng());
         int scalar27 = 1;
         if (scalar26 == 0) {
            printf("IS 0!");
         }
         func12(rng());
         int scalar28 = 1;
         if (scalar14 == 0) {
            printf("IS 0!");
         }
         int scalar29 = 1;
         if (scalar29 == 0) {
            printf("IS 0!");
         }
         int scalar30 = 1;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         int scalar31 = 1;
         if (scalar21 == 0) {
            printf("IS 0!");
         }
      }
   }
}

