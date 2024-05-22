#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2, const unsigned long PATH3, const unsigned long PATH4, const unsigned long PATH5, const unsigned long PATH6);
void func1(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2, const unsigned long PATH3);
void func4(const unsigned long PATH0, const unsigned long PATH1);
void func7(const unsigned long PATH0, const unsigned long PATH1);
void func10(const unsigned long PATH0);
void func13(const unsigned long PATH0);
void func16(const unsigned long PATH0);
void func19(const unsigned long PATH0);
void func22();
void func23();
void func24();
void func20(const unsigned long PATH0);
void func21(const unsigned long PATH0);
void func17(const unsigned long PATH0);
void func18(const unsigned long PATH0);
void func14(const unsigned long PATH0);
void func15(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func12(const unsigned long PATH0);
void func8(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func5(const unsigned long PATH0, const unsigned long PATH1);
void func6(const unsigned long PATH0);
void func2(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2);
void func3(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   func0(rng(), rng(), rng(), rng(), rng(), rng(), rng());
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2, const unsigned long PATH3, const unsigned long PATH4, const unsigned long PATH5, const unsigned long PATH6) {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      func1(rng(), rng(), rng(), rng());
      if(PATH0 & 1) {
         func7(rng(), rng());
         if(PATH0 & 2) {
            func13(rng());
            if(PATH0 & 4) {
               func19(rng());
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
               func23();
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop502 = 0;
               int loopLimit502 = (rand()%10)/2 + 1;
               for(; loop502 < loopLimit502; loop502++) {
                  if(PATH0 & 16) {
                     func22();
                  }
                  else {
                     if(PATH0 & 32) {
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop503 = 0;
               int loopLimit503 = (rand()%10)/2 + 1;
               for(; loop503 < loopLimit503; loop503++) {
                  func21(rng());
               }
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop504 = 0;
            int loopLimit504 = (rand()%10)/2 + 1;
            for(; loop504 < loopLimit504; loop504++) {
               if(PATH0 & 64) {
                  func16(rng());
                  if(PATH0 & 128) {
                     func22();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop505 = 0;
                     int loopLimit505 = (rand()%10)/3 + 1;
                     for(; loop505 < loopLimit505; loop505++) {
                        if(PATH0 & 256) {
                        }
                        else {
                        }
                     }
                     int loop506 = 0;
                     int loopLimit506 = (rand()%10)/3 + 1;
                     for(; loop506 < loopLimit506; loop506++) {
                        func24();
                     }
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  if(PATH0 & 512) {
                     func19(rng());
                     if(PATH0 & 1024) {
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop507 = 0;
                     int loopLimit507 = (rand()%10)/3 + 1;
                     for(; loop507 < loopLimit507; loop507++) {
                        if(PATH0 & 2048) {
                           func22();
                        }
                        else {
                           if(PATH0 & 4096) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop508 = 0;
                     int loopLimit508 = (rand()%10)/3 + 1;
                     for(; loop508 < loopLimit508; loop508++) {
                        func21(rng());
                     }
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop509 = 0;
            int loopLimit509 = (rand()%10)/2 + 1;
            for(; loop509 < loopLimit509; loop509++) {
               func15(rng());
            }
            int scalar2 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func11(rng());
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop510 = 0;
         int loopLimit510 = (rand()%10)/2 + 1;
         for(; loop510 < loopLimit510; loop510++) {
            if(PATH0 & 8192) {
               func10(rng());
               if(PATH0 & 16384) {
                  func16(rng());
                  if(PATH0 & 32768) {
                     func22();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop511 = 0;
                     int loopLimit511 = (rand()%10)/3 + 1;
                     for(; loop511 < loopLimit511; loop511++) {
                        if(PATH0 & 65536) {
                        }
                        else {
                        }
                     }
                     int loop512 = 0;
                     int loopLimit512 = (rand()%10)/3 + 1;
                     for(; loop512 < loopLimit512; loop512++) {
                        func24();
                     }
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop513 = 0;
                  int loopLimit513 = (rand()%10)/3 + 1;
                  for(; loop513 < loopLimit513; loop513++) {
                     if(PATH0 & 131072) {
                        func19(rng());
                        if(PATH0 & 262144) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH0 & 524288) {
                           func22();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop514 = 0;
                           int loopLimit514 = (rand()%10)/4 + 1;
                           for(; loop514 < loopLimit514; loop514++) {
                              if(PATH0 & 1048576) {
                              }
                              else {
                              }
                           }
                           int loop515 = 0;
                           int loopLimit515 = (rand()%10)/4 + 1;
                           for(; loop515 < loopLimit515; loop515++) {
                              func24();
                           }
                           int scalar4 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop516 = 0;
                  int loopLimit516 = (rand()%10)/3 + 1;
                  for(; loop516 < loopLimit516; loop516++) {
                     func18(rng());
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
            else {
               if(PATH0 & 2097152) {
                  func13(rng());
                  if(PATH0 & 4194304) {
                     func19(rng());
                     if(PATH0 & 8388608) {
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop517 = 0;
                     int loopLimit517 = (rand()%10)/3 + 1;
                     for(; loop517 < loopLimit517; loop517++) {
                        if(PATH0 & 16777216) {
                           func22();
                        }
                        else {
                           if(PATH0 & 33554432) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop518 = 0;
                     int loopLimit518 = (rand()%10)/3 + 1;
                     for(; loop518 < loopLimit518; loop518++) {
                        func21(rng());
                     }
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop519 = 0;
                  int loopLimit519 = (rand()%10)/3 + 1;
                  for(; loop519 < loopLimit519; loop519++) {
                     if(PATH0 & 67108864) {
                        func16(rng());
                        if(PATH0 & 134217728) {
                           func22();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop520 = 0;
                           int loopLimit520 = (rand()%10)/4 + 1;
                           for(; loop520 < loopLimit520; loop520++) {
                              if(PATH0 & 268435456) {
                              }
                              else {
                              }
                           }
                           int loop521 = 0;
                           int loopLimit521 = (rand()%10)/4 + 1;
                           for(; loop521 < loopLimit521; loop521++) {
                              func24();
                           }
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        if(PATH0 & 536870912) {
                           func19(rng());
                           if(PATH0 & 1073741824) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop522 = 0;
                           int loopLimit522 = (rand()%10)/4 + 1;
                           for(; loop522 < loopLimit522; loop522++) {
                              if(PATH0 & -2147483648) {
                                 func22();
                              }
                              else {
                                 if(PATH0 & -2147483648) {
                                 }
                                 else {
                                    int scalar4 = 1;
                                    if (scalar1 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar2--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop523 = 0;
                           int loopLimit523 = (rand()%10)/4 + 1;
                           for(; loop523 < loopLimit523; loop523++) {
                              func21(rng());
                           }
                           int scalar4 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop524 = 0;
                  int loopLimit524 = (rand()%10)/3 + 1;
                  for(; loop524 < loopLimit524; loop524++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
         }
         int loop525 = 0;
         int loopLimit525 = (rand()%10)/2 + 1;
         for(; loop525 < loopLimit525; loop525++) {
            func9(rng());
         }
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func5(rng(), rng());
      if(PATH0 & -2147483648) {
         func4(rng(), rng());
         if(PATH0 & -2147483648) {
            func10(rng());
            if(PATH0 & -2147483648) {
               func16(rng());
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop614 = 0;
                  int loopLimit614 = (rand()%10)/2 + 1;
                  for(; loop614 < loopLimit614; loop614++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop615 = 0;
                  int loopLimit615 = (rand()%10)/2 + 1;
                  for(; loop615 < loopLimit615; loop615++) {
                     func24();
                  }
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop616 = 0;
               int loopLimit616 = (rand()%10)/2 + 1;
               for(; loop616 < loopLimit616; loop616++) {
                  if(PATH0 & -2147483648) {
                     func19(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop617 = 0;
                        int loopLimit617 = (rand()%10)/3 + 1;
                        for(; loop617 < loopLimit617; loop617++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop618 = 0;
                        int loopLimit618 = (rand()%10)/3 + 1;
                        for(; loop618 < loopLimit618; loop618++) {
                           func24();
                        }
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop619 = 0;
               int loopLimit619 = (rand()%10)/2 + 1;
               for(; loop619 < loopLimit619; loop619++) {
                  func18(rng());
               }
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop620 = 0;
            int loopLimit620 = (rand()%10)/2 + 1;
            for(; loop620 < loopLimit620; loop620++) {
               if(PATH0 & -2147483648) {
                  func13(rng());
                  if(PATH0 & -2147483648) {
                     func19(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop621 = 0;
                     int loopLimit621 = (rand()%10)/3 + 1;
                     for(; loop621 < loopLimit621; loop621++) {
                        if(PATH0 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop622 = 0;
                     int loopLimit622 = (rand()%10)/3 + 1;
                     for(; loop622 < loopLimit622; loop622++) {
                        func21(rng());
                     }
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  if(PATH0 & -2147483648) {
                     func16(rng());
                     if(PATH0 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop623 = 0;
                        int loopLimit623 = (rand()%10)/3 + 1;
                        for(; loop623 < loopLimit623; loop623++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop624 = 0;
                        int loopLimit624 = (rand()%10)/3 + 1;
                        for(; loop624 < loopLimit624; loop624++) {
                           func24();
                        }
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop625 = 0;
                     int loopLimit625 = (rand()%10)/3 + 1;
                     for(; loop625 < loopLimit625; loop625++) {
                        if(PATH0 & -2147483648) {
                           func19(rng());
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           if(PATH0 & -2147483648) {
                              func22();
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop626 = 0;
                              int loopLimit626 = (rand()%10)/4 + 1;
                              for(; loop626 < loopLimit626; loop626++) {
                                 if(PATH0 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop627 = 0;
                              int loopLimit627 = (rand()%10)/4 + 1;
                              for(; loop627 < loopLimit627; loop627++) {
                                 func24();
                              }
                              int scalar4 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                     }
                     int loop628 = 0;
                     int loopLimit628 = (rand()%10)/3 + 1;
                     for(; loop628 < loopLimit628; loop628++) {
                        func18(rng());
                     }
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
            }
            int loop629 = 0;
            int loopLimit629 = (rand()%10)/2 + 1;
            for(; loop629 < loopLimit629; loop629++) {
               func12(rng());
            }
            int scalar2 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func8(rng());
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop630 = 0;
         int loopLimit630 = (rand()%10)/2 + 1;
         for(; loop630 < loopLimit630; loop630++) {
            if(PATH0 & -2147483648) {
               func7(rng(), rng());
               if(PATH0 & -2147483648) {
                  func13(rng());
                  if(PATH0 & -2147483648) {
                     func19(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop631 = 0;
                     int loopLimit631 = (rand()%10)/3 + 1;
                     for(; loop631 < loopLimit631; loop631++) {
                        if(PATH0 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop632 = 0;
                     int loopLimit632 = (rand()%10)/3 + 1;
                     for(; loop632 < loopLimit632; loop632++) {
                        func21(rng());
                     }
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop633 = 0;
                  int loopLimit633 = (rand()%10)/3 + 1;
                  for(; loop633 < loopLimit633; loop633++) {
                     if(PATH0 & -2147483648) {
                        func16(rng());
                        if(PATH0 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop634 = 0;
                           int loopLimit634 = (rand()%10)/4 + 1;
                           for(; loop634 < loopLimit634; loop634++) {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop635 = 0;
                           int loopLimit635 = (rand()%10)/4 + 1;
                           for(; loop635 < loopLimit635; loop635++) {
                              func24();
                           }
                           int scalar4 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        if(PATH0 & -2147483648) {
                           func19(rng());
                           if(PATH1 & 1) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop636 = 0;
                           int loopLimit636 = (rand()%10)/4 + 1;
                           for(; loop636 < loopLimit636; loop636++) {
                              if(PATH1 & 2) {
                                 func22();
                              }
                              else {
                                 if(PATH1 & 4) {
                                 }
                                 else {
                                    int scalar4 = 1;
                                    if (scalar1 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar2--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop637 = 0;
                           int loopLimit637 = (rand()%10)/4 + 1;
                           for(; loop637 < loopLimit637; loop637++) {
                              func21(rng());
                           }
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop638 = 0;
                  int loopLimit638 = (rand()%10)/3 + 1;
                  for(; loop638 < loopLimit638; loop638++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
            else {
               if(PATH1 & 8) {
                  func10(rng());
                  if(PATH1 & 16) {
                     func16(rng());
                     if(PATH1 & 32) {
                        func22();
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop639 = 0;
                        int loopLimit639 = (rand()%10)/3 + 1;
                        for(; loop639 < loopLimit639; loop639++) {
                           if(PATH1 & 64) {
                           }
                           else {
                           }
                        }
                        int loop640 = 0;
                        int loopLimit640 = (rand()%10)/3 + 1;
                        for(; loop640 < loopLimit640; loop640++) {
                           func24();
                        }
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop641 = 0;
                     int loopLimit641 = (rand()%10)/3 + 1;
                     for(; loop641 < loopLimit641; loop641++) {
                        if(PATH1 & 128) {
                           func19(rng());
                           if(PATH1 & 256) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           if(PATH1 & 512) {
                              func22();
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop642 = 0;
                              int loopLimit642 = (rand()%10)/4 + 1;
                              for(; loop642 < loopLimit642; loop642++) {
                                 if(PATH1 & 1024) {
                                 }
                                 else {
                                 }
                              }
                              int loop643 = 0;
                              int loopLimit643 = (rand()%10)/4 + 1;
                              for(; loop643 < loopLimit643; loop643++) {
                                 func24();
                              }
                              int scalar4 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                     }
                     int loop644 = 0;
                     int loopLimit644 = (rand()%10)/3 + 1;
                     for(; loop644 < loopLimit644; loop644++) {
                        func18(rng());
                     }
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop645 = 0;
                  int loopLimit645 = (rand()%10)/3 + 1;
                  for(; loop645 < loopLimit645; loop645++) {
                     if(PATH1 & 2048) {
                        func13(rng());
                        if(PATH1 & 4096) {
                           func19(rng());
                           if(PATH1 & 8192) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop646 = 0;
                           int loopLimit646 = (rand()%10)/4 + 1;
                           for(; loop646 < loopLimit646; loop646++) {
                              if(PATH1 & 16384) {
                                 func22();
                              }
                              else {
                                 if(PATH1 & 32768) {
                                 }
                                 else {
                                    int scalar4 = 1;
                                    if (scalar1 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar1--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop647 = 0;
                           int loopLimit647 = (rand()%10)/4 + 1;
                           for(; loop647 < loopLimit647; loop647++) {
                              func21(rng());
                           }
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        if(PATH1 & 65536) {
                           func16(rng());
                           if(PATH1 & 131072) {
                              func22();
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop648 = 0;
                              int loopLimit648 = (rand()%10)/4 + 1;
                              for(; loop648 < loopLimit648; loop648++) {
                                 if(PATH1 & 262144) {
                                 }
                                 else {
                                 }
                              }
                              int loop649 = 0;
                              int loopLimit649 = (rand()%10)/4 + 1;
                              for(; loop649 < loopLimit649; loop649++) {
                                 func24();
                              }
                              int scalar4 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop650 = 0;
                           int loopLimit650 = (rand()%10)/4 + 1;
                           for(; loop650 < loopLimit650; loop650++) {
                              if(PATH1 & 524288) {
                                 func19(rng());
                                 if(PATH1 & 1048576) {
                                 }
                                 else {
                                    int scalar4 = 1;
                                    if (scalar1 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar2--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                              else {
                                 if(PATH1 & 2097152) {
                                    func22();
                                 }
                                 else {
                                    int scalar4 = 1;
                                    if (scalar2 == 0) {
                                       printf("IS 0!");
                                    }
                                    printf("DELETE!\n");
                                    int loop651 = 0;
                                    int loopLimit651 = (rand()%10)/5 + 1;
                                    for(; loop651 < loopLimit651; loop651++) {
                                       if(PATH1 & 4194304) {
                                       }
                                       else {
                                       }
                                    }
                                    int loop652 = 0;
                                    int loopLimit652 = (rand()%10)/5 + 1;
                                    for(; loop652 < loopLimit652; loop652++) {
                                       func24();
                                    }
                                    int scalar5 = 1;
                                    if (scalar2 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar1--;
                                    printf("DELETE!\n");
                                 }
                                 func20(rng());
                              }
                           }
                           int loop653 = 0;
                           int loopLimit653 = (rand()%10)/4 + 1;
                           for(; loop653 < loopLimit653; loop653++) {
                              func18(rng());
                           }
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop654 = 0;
                  int loopLimit654 = (rand()%10)/3 + 1;
                  for(; loop654 < loopLimit654; loop654++) {
                     func12(rng());
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop655 = 0;
         int loopLimit655 = (rand()%10)/2 + 1;
         for(; loop655 < loopLimit655; loop655++) {
            func6(rng());
         }
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func2(rng(), rng(), rng());
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop817 = 0;
      int loopLimit817 = (rand()%10)/2 + 1;
      for(; loop817 < loopLimit817; loop817++) {
         if(PATH1 & 8388608) {
            func4(rng(), rng());
            if(PATH1 & 16777216) {
               func10(rng());
               if(PATH1 & 33554432) {
                  func16(rng());
                  if(PATH1 & 67108864) {
                     func22();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop818 = 0;
                     int loopLimit818 = (rand()%10)/3 + 1;
                     for(; loop818 < loopLimit818; loop818++) {
                        if(PATH1 & 134217728) {
                        }
                        else {
                        }
                     }
                     int loop819 = 0;
                     int loopLimit819 = (rand()%10)/3 + 1;
                     for(; loop819 < loopLimit819; loop819++) {
                        func24();
                     }
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop820 = 0;
                  int loopLimit820 = (rand()%10)/3 + 1;
                  for(; loop820 < loopLimit820; loop820++) {
                     if(PATH1 & 268435456) {
                        func19(rng());
                        if(PATH1 & 536870912) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH1 & 1073741824) {
                           func22();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop821 = 0;
                           int loopLimit821 = (rand()%10)/4 + 1;
                           for(; loop821 < loopLimit821; loop821++) {
                              if(PATH1 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop822 = 0;
                           int loopLimit822 = (rand()%10)/4 + 1;
                           for(; loop822 < loopLimit822; loop822++) {
                              func24();
                           }
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop823 = 0;
                  int loopLimit823 = (rand()%10)/3 + 1;
                  for(; loop823 < loopLimit823; loop823++) {
                     func18(rng());
                  }
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop824 = 0;
               int loopLimit824 = (rand()%10)/3 + 1;
               for(; loop824 < loopLimit824; loop824++) {
                  if(PATH1 & -2147483648) {
                     func13(rng());
                     if(PATH1 & -2147483648) {
                        func19(rng());
                        if(PATH1 & -2147483648) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop825 = 0;
                        int loopLimit825 = (rand()%10)/4 + 1;
                        for(; loop825 < loopLimit825; loop825++) {
                           if(PATH1 & -2147483648) {
                              func22();
                           }
                           else {
                              if(PATH1 & -2147483648) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop826 = 0;
                        int loopLimit826 = (rand()%10)/4 + 1;
                        for(; loop826 < loopLimit826; loop826++) {
                           func21(rng());
                        }
                        int scalar4 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     if(PATH1 & -2147483648) {
                        func16(rng());
                        if(PATH1 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop827 = 0;
                           int loopLimit827 = (rand()%10)/4 + 1;
                           for(; loop827 < loopLimit827; loop827++) {
                              if(PATH1 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop828 = 0;
                           int loopLimit828 = (rand()%10)/4 + 1;
                           for(; loop828 < loopLimit828; loop828++) {
                              func24();
                           }
                           int scalar4 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop829 = 0;
                        int loopLimit829 = (rand()%10)/4 + 1;
                        for(; loop829 < loopLimit829; loop829++) {
                           if(PATH1 & -2147483648) {
                              func19(rng());
                              if(PATH1 & -2147483648) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              if(PATH1 & -2147483648) {
                                 func22();
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar2 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop830 = 0;
                                 int loopLimit830 = (rand()%10)/5 + 1;
                                 for(; loop830 < loopLimit830; loop830++) {
                                    if(PATH1 & -2147483648) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop831 = 0;
                                 int loopLimit831 = (rand()%10)/5 + 1;
                                 for(; loop831 < loopLimit831; loop831++) {
                                    func24();
                                 }
                                 int scalar5 = 1;
                                 if (scalar2 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar5--;
                                 printf("DELETE!\n");
                              }
                              func20(rng());
                           }
                        }
                        int loop832 = 0;
                        int loopLimit832 = (rand()%10)/4 + 1;
                        for(; loop832 < loopLimit832; loop832++) {
                           func18(rng());
                        }
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
               }
               int loop833 = 0;
               int loopLimit833 = (rand()%10)/3 + 1;
               for(; loop833 < loopLimit833; loop833++) {
                  func12(rng());
               }
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func8(rng());
         }
         else {
            if(PATH1 & -2147483648) {
               func7(rng(), rng());
               if(PATH1 & -2147483648) {
                  func13(rng());
                  if(PATH1 & -2147483648) {
                     func19(rng());
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop834 = 0;
                     int loopLimit834 = (rand()%10)/3 + 1;
                     for(; loop834 < loopLimit834; loop834++) {
                        if(PATH1 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH1 & -2147483648) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop835 = 0;
                     int loopLimit835 = (rand()%10)/3 + 1;
                     for(; loop835 < loopLimit835; loop835++) {
                        func21(rng());
                     }
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop836 = 0;
                  int loopLimit836 = (rand()%10)/3 + 1;
                  for(; loop836 < loopLimit836; loop836++) {
                     if(PATH1 & -2147483648) {
                        func16(rng());
                        if(PATH1 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop837 = 0;
                           int loopLimit837 = (rand()%10)/4 + 1;
                           for(; loop837 < loopLimit837; loop837++) {
                              if(PATH1 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop838 = 0;
                           int loopLimit838 = (rand()%10)/4 + 1;
                           for(; loop838 < loopLimit838; loop838++) {
                              func24();
                           }
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        if(PATH1 & -2147483648) {
                           func19(rng());
                           if(PATH1 & -2147483648) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop839 = 0;
                           int loopLimit839 = (rand()%10)/4 + 1;
                           for(; loop839 < loopLimit839; loop839++) {
                              if(PATH1 & -2147483648) {
                                 func22();
                              }
                              else {
                                 if(PATH1 & -2147483648) {
                                 }
                                 else {
                                    int scalar4 = 1;
                                    if (scalar4 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar4--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop840 = 0;
                           int loopLimit840 = (rand()%10)/4 + 1;
                           for(; loop840 < loopLimit840; loop840++) {
                              func21(rng());
                           }
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop841 = 0;
                  int loopLimit841 = (rand()%10)/3 + 1;
                  for(; loop841 < loopLimit841; loop841++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop842 = 0;
               int loopLimit842 = (rand()%10)/3 + 1;
               for(; loop842 < loopLimit842; loop842++) {
                  if(PATH1 & -2147483648) {
                     func10(rng());
                     if(PATH1 & -2147483648) {
                        func16(rng());
                        if(PATH1 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop843 = 0;
                           int loopLimit843 = (rand()%10)/4 + 1;
                           for(; loop843 < loopLimit843; loop843++) {
                              if(PATH1 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop844 = 0;
                           int loopLimit844 = (rand()%10)/4 + 1;
                           for(; loop844 < loopLimit844; loop844++) {
                              func24();
                           }
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop845 = 0;
                        int loopLimit845 = (rand()%10)/4 + 1;
                        for(; loop845 < loopLimit845; loop845++) {
                           if(PATH1 & -2147483648) {
                              func19(rng());
                              if(PATH1 & -2147483648) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar4--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              if(PATH1 & -2147483648) {
                                 func22();
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop846 = 0;
                                 int loopLimit846 = (rand()%10)/5 + 1;
                                 for(; loop846 < loopLimit846; loop846++) {
                                    if(PATH2 & 1) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop847 = 0;
                                 int loopLimit847 = (rand()%10)/5 + 1;
                                 for(; loop847 < loopLimit847; loop847++) {
                                    func24();
                                 }
                                 int scalar5 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar4--;
                                 printf("DELETE!\n");
                              }
                              func20(rng());
                           }
                        }
                        int loop848 = 0;
                        int loopLimit848 = (rand()%10)/4 + 1;
                        for(; loop848 < loopLimit848; loop848++) {
                           func18(rng());
                        }
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
                  else {
                     if(PATH2 & 2) {
                        func13(rng());
                        if(PATH2 & 4) {
                           func19(rng());
                           if(PATH2 & 8) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop849 = 0;
                           int loopLimit849 = (rand()%10)/4 + 1;
                           for(; loop849 < loopLimit849; loop849++) {
                              if(PATH2 & 16) {
                                 func22();
                              }
                              else {
                                 if(PATH2 & 32) {
                                 }
                                 else {
                                    int scalar4 = 1;
                                    if (scalar3 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar1--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop850 = 0;
                           int loopLimit850 = (rand()%10)/4 + 1;
                           for(; loop850 < loopLimit850; loop850++) {
                              func21(rng());
                           }
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop851 = 0;
                        int loopLimit851 = (rand()%10)/4 + 1;
                        for(; loop851 < loopLimit851; loop851++) {
                           if(PATH2 & 64) {
                              func16(rng());
                              if(PATH2 & 128) {
                                 func22();
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop852 = 0;
                                 int loopLimit852 = (rand()%10)/5 + 1;
                                 for(; loop852 < loopLimit852; loop852++) {
                                    if(PATH2 & 256) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop853 = 0;
                                 int loopLimit853 = (rand()%10)/5 + 1;
                                 for(; loop853 < loopLimit853; loop853++) {
                                    func24();
                                 }
                                 int scalar5 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar5--;
                                 printf("DELETE!\n");
                              }
                              func20(rng());
                           }
                           else {
                              if(PATH2 & 512) {
                                 func19(rng());
                                 if(PATH2 & 1024) {
                                 }
                                 else {
                                    int scalar4 = 1;
                                    if (scalar3 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar3--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop854 = 0;
                                 int loopLimit854 = (rand()%10)/5 + 1;
                                 for(; loop854 < loopLimit854; loop854++) {
                                    if(PATH2 & 2048) {
                                       func22();
                                    }
                                    else {
                                       if(PATH2 & 4096) {
                                       }
                                       else {
                                          int scalar5 = 1;
                                          if (scalar1 == 0) {
                                             printf("IS 0!");
                                          }
                                          scalar3--;
                                          printf("DELETE!\n");
                                       }
                                       func23();
                                    }
                                 }
                                 int loop855 = 0;
                                 int loopLimit855 = (rand()%10)/5 + 1;
                                 for(; loop855 < loopLimit855; loop855++) {
                                    func21(rng());
                                 }
                                 int scalar5 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar4--;
                                 printf("DELETE!\n");
                              }
                              func17(rng());
                           }
                        }
                        int loop856 = 0;
                        int loopLimit856 = (rand()%10)/4 + 1;
                        for(; loop856 < loopLimit856; loop856++) {
                           func15(rng());
                        }
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func11(rng());
                  }
               }
               int loop857 = 0;
               int loopLimit857 = (rand()%10)/3 + 1;
               for(; loop857 < loopLimit857; loop857++) {
                  func9(rng());
               }
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func5(rng(), rng());
         }
      }
      int loop858 = 0;
      int loopLimit858 = (rand()%10)/2 + 1;
      for(; loop858 < loopLimit858; loop858++) {
         func3(rng());
      }
      if(PATH2 & 8192) {
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop885 = 0;
         int loopLimit885 = (rand()%10)/2 + 1;
         for(; loop885 < loopLimit885; loop885++) {
            if(PATH2 & 16384) {
               func7(rng(), rng());
               if(PATH2 & 32768) {
                  func13(rng());
                  if(PATH2 & 65536) {
                     func19(rng());
                     if(PATH2 & 131072) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop886 = 0;
                     int loopLimit886 = (rand()%10)/3 + 1;
                     for(; loop886 < loopLimit886; loop886++) {
                        if(PATH2 & 262144) {
                           func22();
                        }
                        else {
                           if(PATH2 & 524288) {
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop887 = 0;
                     int loopLimit887 = (rand()%10)/3 + 1;
                     for(; loop887 < loopLimit887; loop887++) {
                        func21(rng());
                     }
                     int scalar4 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop888 = 0;
                  int loopLimit888 = (rand()%10)/3 + 1;
                  for(; loop888 < loopLimit888; loop888++) {
                     if(PATH2 & 1048576) {
                        func16(rng());
                        if(PATH2 & 2097152) {
                           func22();
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop889 = 0;
                           int loopLimit889 = (rand()%10)/4 + 1;
                           for(; loop889 < loopLimit889; loop889++) {
                              if(PATH2 & 4194304) {
                              }
                              else {
                              }
                           }
                           int loop890 = 0;
                           int loopLimit890 = (rand()%10)/4 + 1;
                           for(; loop890 < loopLimit890; loop890++) {
                              func24();
                           }
                           int scalar5 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        if(PATH2 & 8388608) {
                           func19(rng());
                           if(PATH2 & 16777216) {
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop891 = 0;
                           int loopLimit891 = (rand()%10)/4 + 1;
                           for(; loop891 < loopLimit891; loop891++) {
                              if(PATH2 & 33554432) {
                                 func22();
                              }
                              else {
                                 if(PATH2 & 67108864) {
                                 }
                                 else {
                                    int scalar5 = 1;
                                    if (scalar4 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar1--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop892 = 0;
                           int loopLimit892 = (rand()%10)/4 + 1;
                           for(; loop892 < loopLimit892; loop892++) {
                              func21(rng());
                           }
                           int scalar5 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop893 = 0;
                  int loopLimit893 = (rand()%10)/3 + 1;
                  for(; loop893 < loopLimit893; loop893++) {
                     func15(rng());
                  }
                  int scalar4 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
            else {
               if(PATH2 & 134217728) {
                  func10(rng());
                  if(PATH2 & 268435456) {
                     func16(rng());
                     if(PATH2 & 536870912) {
                        func22();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop894 = 0;
                        int loopLimit894 = (rand()%10)/3 + 1;
                        for(; loop894 < loopLimit894; loop894++) {
                           if(PATH2 & 1073741824) {
                           }
                           else {
                           }
                        }
                        int loop895 = 0;
                        int loopLimit895 = (rand()%10)/3 + 1;
                        for(; loop895 < loopLimit895; loop895++) {
                           func24();
                        }
                        int scalar4 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop896 = 0;
                     int loopLimit896 = (rand()%10)/3 + 1;
                     for(; loop896 < loopLimit896; loop896++) {
                        if(PATH2 & -2147483648) {
                           func19(rng());
                           if(PATH2 & -2147483648) {
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           if(PATH2 & -2147483648) {
                              func22();
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop897 = 0;
                              int loopLimit897 = (rand()%10)/4 + 1;
                              for(; loop897 < loopLimit897; loop897++) {
                                 if(PATH2 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop898 = 0;
                              int loopLimit898 = (rand()%10)/4 + 1;
                              for(; loop898 < loopLimit898; loop898++) {
                                 func24();
                              }
                              int scalar5 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar5--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                     }
                     int loop899 = 0;
                     int loopLimit899 = (rand()%10)/3 + 1;
                     for(; loop899 < loopLimit899; loop899++) {
                        func18(rng());
                     }
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop900 = 0;
                  int loopLimit900 = (rand()%10)/3 + 1;
                  for(; loop900 < loopLimit900; loop900++) {
                     if(PATH2 & -2147483648) {
                        func13(rng());
                        if(PATH2 & -2147483648) {
                           func19(rng());
                           if(PATH2 & -2147483648) {
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop901 = 0;
                           int loopLimit901 = (rand()%10)/4 + 1;
                           for(; loop901 < loopLimit901; loop901++) {
                              if(PATH2 & -2147483648) {
                                 func22();
                              }
                              else {
                                 if(PATH2 & -2147483648) {
                                 }
                                 else {
                                    int scalar5 = 1;
                                    if (scalar2 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar3--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop902 = 0;
                           int loopLimit902 = (rand()%10)/4 + 1;
                           for(; loop902 < loopLimit902; loop902++) {
                              func21(rng());
                           }
                           int scalar5 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        if(PATH2 & -2147483648) {
                           func16(rng());
                           if(PATH2 & -2147483648) {
                              func22();
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop903 = 0;
                              int loopLimit903 = (rand()%10)/4 + 1;
                              for(; loop903 < loopLimit903; loop903++) {
                                 if(PATH2 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop904 = 0;
                              int loopLimit904 = (rand()%10)/4 + 1;
                              for(; loop904 < loopLimit904; loop904++) {
                                 func24();
                              }
                              int scalar5 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar5--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop905 = 0;
                           int loopLimit905 = (rand()%10)/4 + 1;
                           for(; loop905 < loopLimit905; loop905++) {
                              if(PATH2 & -2147483648) {
                                 func19(rng());
                                 if(PATH2 & -2147483648) {
                                 }
                                 else {
                                    int scalar5 = 1;
                                    if (scalar2 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar1--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                              else {
                                 if(PATH2 & -2147483648) {
                                    func22();
                                 }
                                 else {
                                    int scalar5 = 1;
                                    if (scalar5 == 0) {
                                       printf("IS 0!");
                                    }
                                    printf("DELETE!\n");
                                    int loop906 = 0;
                                    int loopLimit906 = (rand()%10)/5 + 1;
                                    for(; loop906 < loopLimit906; loop906++) {
                                       if(PATH2 & -2147483648) {
                                       }
                                       else {
                                       }
                                    }
                                    int loop907 = 0;
                                    int loopLimit907 = (rand()%10)/5 + 1;
                                    for(; loop907 < loopLimit907; loop907++) {
                                       func24();
                                    }
                                    int scalar6 = 1;
                                    if (scalar3 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar5--;
                                    printf("DELETE!\n");
                                 }
                                 func20(rng());
                              }
                           }
                           int loop908 = 0;
                           int loopLimit908 = (rand()%10)/4 + 1;
                           for(; loop908 < loopLimit908; loop908++) {
                              func18(rng());
                           }
                           int scalar5 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop909 = 0;
                  int loopLimit909 = (rand()%10)/3 + 1;
                  for(; loop909 < loopLimit909; loop909++) {
                     func12(rng());
                  }
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop910 = 0;
         int loopLimit910 = (rand()%10)/2 + 1;
         for(; loop910 < loopLimit910; loop910++) {
            func6(rng());
         }
      }
      else {
         int loop911 = 0;
         int loopLimit911 = (rand()%10)/2 + 1;
         for(; loop911 < loopLimit911; loop911++) {
            int scalar2 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop912 = 0;
            int loopLimit912 = (rand()%10)/3 + 1;
            for(; loop912 < loopLimit912; loop912++) {
               if(PATH2 & -2147483648) {
                  func7(rng(), rng());
                  if(PATH2 & -2147483648) {
                     func13(rng());
                     if(PATH2 & -2147483648) {
                        func19(rng());
                        if(PATH2 & -2147483648) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop913 = 0;
                        int loopLimit913 = (rand()%10)/4 + 1;
                        for(; loop913 < loopLimit913; loop913++) {
                           if(PATH2 & -2147483648) {
                              func22();
                           }
                           else {
                              if(PATH2 & -2147483648) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar2 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar3--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop914 = 0;
                        int loopLimit914 = (rand()%10)/4 + 1;
                        for(; loop914 < loopLimit914; loop914++) {
                           func21(rng());
                        }
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop915 = 0;
                     int loopLimit915 = (rand()%10)/4 + 1;
                     for(; loop915 < loopLimit915; loop915++) {
                        if(PATH2 & -2147483648) {
                           func16(rng());
                           if(PATH2 & -2147483648) {
                              func22();
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop916 = 0;
                              int loopLimit916 = (rand()%10)/5 + 1;
                              for(; loop916 < loopLimit916; loop916++) {
                                 if(PATH2 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop917 = 0;
                              int loopLimit917 = (rand()%10)/5 + 1;
                              for(; loop917 < loopLimit917; loop917++) {
                                 func24();
                              }
                              int scalar5 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                        else {
                           if(PATH2 & -2147483648) {
                              func19(rng());
                              if(PATH2 & -2147483648) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar2 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop918 = 0;
                              int loopLimit918 = (rand()%10)/5 + 1;
                              for(; loop918 < loopLimit918; loop918++) {
                                 if(PATH2 & -2147483648) {
                                    func22();
                                 }
                                 else {
                                    if(PATH2 & -2147483648) {
                                    }
                                    else {
                                       int scalar5 = 1;
                                       if (scalar1 == 0) {
                                          printf("IS 0!");
                                       }
                                       scalar4--;
                                       printf("DELETE!\n");
                                    }
                                    func23();
                                 }
                              }
                              int loop919 = 0;
                              int loopLimit919 = (rand()%10)/5 + 1;
                              for(; loop919 < loopLimit919; loop919++) {
                                 func21(rng());
                              }
                              int scalar5 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func17(rng());
                        }
                     }
                     int loop920 = 0;
                     int loopLimit920 = (rand()%10)/4 + 1;
                     for(; loop920 < loopLimit920; loop920++) {
                        func15(rng());
                     }
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func11(rng());
               }
               else {
                  if(PATH2 & -2147483648) {
                     func10(rng());
                     if(PATH2 & -2147483648) {
                        func16(rng());
                        if(PATH2 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop921 = 0;
                           int loopLimit921 = (rand()%10)/4 + 1;
                           for(; loop921 < loopLimit921; loop921++) {
                              if(PATH2 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop922 = 0;
                           int loopLimit922 = (rand()%10)/4 + 1;
                           for(; loop922 < loopLimit922; loop922++) {
                              func24();
                           }
                           int scalar4 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop923 = 0;
                        int loopLimit923 = (rand()%10)/4 + 1;
                        for(; loop923 < loopLimit923; loop923++) {
                           if(PATH3 & 1) {
                              func19(rng());
                              if(PATH3 & 2) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar4--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              if(PATH3 & 4) {
                                 func22();
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop924 = 0;
                                 int loopLimit924 = (rand()%10)/5 + 1;
                                 for(; loop924 < loopLimit924; loop924++) {
                                    if(PATH3 & 8) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop925 = 0;
                                 int loopLimit925 = (rand()%10)/5 + 1;
                                 for(; loop925 < loopLimit925; loop925++) {
                                    func24();
                                 }
                                 int scalar5 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func20(rng());
                           }
                        }
                        int loop926 = 0;
                        int loopLimit926 = (rand()%10)/4 + 1;
                        for(; loop926 < loopLimit926; loop926++) {
                           func18(rng());
                        }
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop927 = 0;
                     int loopLimit927 = (rand()%10)/4 + 1;
                     for(; loop927 < loopLimit927; loop927++) {
                        if(PATH3 & 16) {
                           func13(rng());
                           if(PATH3 & 32) {
                              func19(rng());
                              if(PATH3 & 64) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop928 = 0;
                              int loopLimit928 = (rand()%10)/5 + 1;
                              for(; loop928 < loopLimit928; loop928++) {
                                 if(PATH3 & 128) {
                                    func22();
                                 }
                                 else {
                                    if(PATH3 & 256) {
                                    }
                                    else {
                                       int scalar5 = 1;
                                       if (scalar4 == 0) {
                                          printf("IS 0!");
                                       }
                                       scalar4--;
                                       printf("DELETE!\n");
                                    }
                                    func23();
                                 }
                              }
                              int loop929 = 0;
                              int loopLimit929 = (rand()%10)/5 + 1;
                              for(; loop929 < loopLimit929; loop929++) {
                                 func21(rng());
                              }
                              int scalar5 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func17(rng());
                        }
                        else {
                           if(PATH3 & 512) {
                              func16(rng());
                              if(PATH3 & 1024) {
                                 func22();
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop930 = 0;
                                 int loopLimit930 = (rand()%10)/5 + 1;
                                 for(; loop930 < loopLimit930; loop930++) {
                                    if(PATH3 & 2048) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop931 = 0;
                                 int loopLimit931 = (rand()%10)/5 + 1;
                                 for(; loop931 < loopLimit931; loop931++) {
                                    func24();
                                 }
                                 int scalar5 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar4--;
                                 printf("DELETE!\n");
                              }
                              func20(rng());
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop932 = 0;
                              int loopLimit932 = (rand()%10)/5 + 1;
                              for(; loop932 < loopLimit932; loop932++) {
                                 if(PATH3 & 4096) {
                                    func19(rng());
                                    if(PATH3 & 8192) {
                                    }
                                    else {
                                       int scalar5 = 1;
                                       if (scalar2 == 0) {
                                          printf("IS 0!");
                                       }
                                       scalar2--;
                                       printf("DELETE!\n");
                                    }
                                    func23();
                                 }
                                 else {
                                    if(PATH3 & 16384) {
                                       func22();
                                    }
                                    else {
                                       int scalar5 = 1;
                                       if (scalar4 == 0) {
                                          printf("IS 0!");
                                       }
                                       printf("DELETE!\n");
                                       int loop933 = 0;
                                       int loopLimit933 = (rand()%10)/6 + 1;
                                       for(; loop933 < loopLimit933; loop933++) {
                                          if(PATH3 & 32768) {
                                          }
                                          else {
                                          }
                                       }
                                       int loop934 = 0;
                                       int loopLimit934 = (rand()%10)/6 + 1;
                                       for(; loop934 < loopLimit934; loop934++) {
                                          func24();
                                       }
                                       int scalar6 = 1;
                                       if (scalar6 == 0) {
                                          printf("IS 0!");
                                       }
                                       scalar4--;
                                       printf("DELETE!\n");
                                    }
                                    func20(rng());
                                 }
                              }
                              int loop935 = 0;
                              int loopLimit935 = (rand()%10)/5 + 1;
                              for(; loop935 < loopLimit935; loop935++) {
                                 func18(rng());
                              }
                              int scalar5 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func14(rng());
                        }
                     }
                     int loop936 = 0;
                     int loopLimit936 = (rand()%10)/4 + 1;
                     for(; loop936 < loopLimit936; loop936++) {
                        func12(rng());
                     }
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func8(rng());
               }
            }
            int loop937 = 0;
            int loopLimit937 = (rand()%10)/3 + 1;
            for(; loop937 < loopLimit937; loop937++) {
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
      func4(rng(), rng());
      if(PATH3 & 65536) {
         func10(rng());
         if(PATH3 & 131072) {
            func16(rng());
            if(PATH3 & 262144) {
               func22();
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop938 = 0;
               int loopLimit938 = (rand()%10)/2 + 1;
               for(; loop938 < loopLimit938; loop938++) {
                  if(PATH3 & 524288) {
                  }
                  else {
                  }
               }
               int loop939 = 0;
               int loopLimit939 = (rand()%10)/2 + 1;
               for(; loop939 < loopLimit939; loop939++) {
                  func24();
               }
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
         else {
            int scalar4 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop940 = 0;
            int loopLimit940 = (rand()%10)/2 + 1;
            for(; loop940 < loopLimit940; loop940++) {
               if(PATH3 & 1048576) {
                  func19(rng());
                  if(PATH3 & 2097152) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  if(PATH3 & 4194304) {
                     func22();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop941 = 0;
                     int loopLimit941 = (rand()%10)/3 + 1;
                     for(; loop941 < loopLimit941; loop941++) {
                        if(PATH3 & 8388608) {
                        }
                        else {
                        }
                     }
                     int loop942 = 0;
                     int loopLimit942 = (rand()%10)/3 + 1;
                     for(; loop942 < loopLimit942; loop942++) {
                        func24();
                     }
                     int scalar6 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
            }
            int loop943 = 0;
            int loopLimit943 = (rand()%10)/2 + 1;
            for(; loop943 < loopLimit943; loop943++) {
               func18(rng());
            }
            int scalar5 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func14(rng());
      }
      else {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop944 = 0;
         int loopLimit944 = (rand()%10)/2 + 1;
         for(; loop944 < loopLimit944; loop944++) {
            if(PATH3 & 16777216) {
               func13(rng());
               if(PATH3 & 33554432) {
                  func19(rng());
                  if(PATH3 & 67108864) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop945 = 0;
                  int loopLimit945 = (rand()%10)/3 + 1;
                  for(; loop945 < loopLimit945; loop945++) {
                     if(PATH3 & 134217728) {
                        func22();
                     }
                     else {
                        if(PATH3 & 268435456) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar6--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop946 = 0;
                  int loopLimit946 = (rand()%10)/3 + 1;
                  for(; loop946 < loopLimit946; loop946++) {
                     func21(rng());
                  }
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH3 & 536870912) {
                  func16(rng());
                  if(PATH3 & 1073741824) {
                     func22();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop947 = 0;
                     int loopLimit947 = (rand()%10)/3 + 1;
                     for(; loop947 < loopLimit947; loop947++) {
                        if(PATH3 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop948 = 0;
                     int loopLimit948 = (rand()%10)/3 + 1;
                     for(; loop948 < loopLimit948; loop948++) {
                        func24();
                     }
                     int scalar6 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop949 = 0;
                  int loopLimit949 = (rand()%10)/3 + 1;
                  for(; loop949 < loopLimit949; loop949++) {
                     if(PATH3 & -2147483648) {
                        func19(rng());
                        if(PATH3 & -2147483648) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH3 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop950 = 0;
                           int loopLimit950 = (rand()%10)/4 + 1;
                           for(; loop950 < loopLimit950; loop950++) {
                              if(PATH3 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop951 = 0;
                           int loopLimit951 = (rand()%10)/4 + 1;
                           for(; loop951 < loopLimit951; loop951++) {
                              func24();
                           }
                           int scalar7 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop952 = 0;
                  int loopLimit952 = (rand()%10)/3 + 1;
                  for(; loop952 < loopLimit952; loop952++) {
                     func18(rng());
                  }
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop953 = 0;
         int loopLimit953 = (rand()%10)/2 + 1;
         for(; loop953 < loopLimit953; loop953++) {
            func12(rng());
         }
         int scalar5 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         printf("DELETE!\n");
      }
      func8(rng());
      if(PATH3 & -2147483648) {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop954 = 0;
         int loopLimit954 = (rand()%10)/2 + 1;
         for(; loop954 < loopLimit954; loop954++) {
            if(PATH3 & -2147483648) {
               func7(rng(), rng());
               if(PATH3 & -2147483648) {
                  func13(rng());
                  if(PATH3 & -2147483648) {
                     func19(rng());
                     if(PATH3 & -2147483648) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop955 = 0;
                     int loopLimit955 = (rand()%10)/3 + 1;
                     for(; loop955 < loopLimit955; loop955++) {
                        if(PATH3 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH3 & -2147483648) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop956 = 0;
                     int loopLimit956 = (rand()%10)/3 + 1;
                     for(; loop956 < loopLimit956; loop956++) {
                        func21(rng());
                     }
                     int scalar6 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar5 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop957 = 0;
                  int loopLimit957 = (rand()%10)/3 + 1;
                  for(; loop957 < loopLimit957; loop957++) {
                     if(PATH3 & -2147483648) {
                        func16(rng());
                        if(PATH3 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop958 = 0;
                           int loopLimit958 = (rand()%10)/4 + 1;
                           for(; loop958 < loopLimit958; loop958++) {
                              if(PATH3 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop959 = 0;
                           int loopLimit959 = (rand()%10)/4 + 1;
                           for(; loop959 < loopLimit959; loop959++) {
                              func24();
                           }
                           int scalar7 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        if(PATH3 & -2147483648) {
                           func19(rng());
                           if(PATH3 & -2147483648) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar6 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop960 = 0;
                           int loopLimit960 = (rand()%10)/4 + 1;
                           for(; loop960 < loopLimit960; loop960++) {
                              if(PATH3 & -2147483648) {
                                 func22();
                              }
                              else {
                                 if(PATH3 & -2147483648) {
                                 }
                                 else {
                                    int scalar7 = 1;
                                    if (scalar1 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar3--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop961 = 0;
                           int loopLimit961 = (rand()%10)/4 + 1;
                           for(; loop961 < loopLimit961; loop961++) {
                              func21(rng());
                           }
                           int scalar7 = 1;
                           if (scalar7 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop962 = 0;
                  int loopLimit962 = (rand()%10)/3 + 1;
                  for(; loop962 < loopLimit962; loop962++) {
                     func15(rng());
                  }
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
            else {
               if(PATH3 & -2147483648) {
                  func10(rng());
                  if(PATH3 & -2147483648) {
                     func16(rng());
                     if(PATH3 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop963 = 0;
                        int loopLimit963 = (rand()%10)/3 + 1;
                        for(; loop963 < loopLimit963; loop963++) {
                           if(PATH3 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop964 = 0;
                        int loopLimit964 = (rand()%10)/3 + 1;
                        for(; loop964 < loopLimit964; loop964++) {
                           func24();
                        }
                        int scalar6 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop965 = 0;
                     int loopLimit965 = (rand()%10)/3 + 1;
                     for(; loop965 < loopLimit965; loop965++) {
                        if(PATH3 & -2147483648) {
                           func19(rng());
                           if(PATH3 & -2147483648) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           if(PATH3 & -2147483648) {
                              func22();
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop966 = 0;
                              int loopLimit966 = (rand()%10)/4 + 1;
                              for(; loop966 < loopLimit966; loop966++) {
                                 if(PATH3 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop967 = 0;
                              int loopLimit967 = (rand()%10)/4 + 1;
                              for(; loop967 < loopLimit967; loop967++) {
                                 func24();
                              }
                              int scalar7 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                     }
                     int loop968 = 0;
                     int loopLimit968 = (rand()%10)/3 + 1;
                     for(; loop968 < loopLimit968; loop968++) {
                        func18(rng());
                     }
                     int scalar6 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
               else {
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop969 = 0;
                  int loopLimit969 = (rand()%10)/3 + 1;
                  for(; loop969 < loopLimit969; loop969++) {
                     if(PATH3 & -2147483648) {
                        func13(rng());
                        if(PATH3 & -2147483648) {
                           func19(rng());
                           if(PATH3 & -2147483648) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar6--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop970 = 0;
                           int loopLimit970 = (rand()%10)/4 + 1;
                           for(; loop970 < loopLimit970; loop970++) {
                              if(PATH3 & -2147483648) {
                                 func22();
                              }
                              else {
                                 if(PATH3 & -2147483648) {
                                 }
                                 else {
                                    int scalar7 = 1;
                                    if (scalar1 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar1--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop971 = 0;
                           int loopLimit971 = (rand()%10)/4 + 1;
                           for(; loop971 < loopLimit971; loop971++) {
                              func21(rng());
                           }
                           int scalar7 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        if(PATH3 & -2147483648) {
                           func16(rng());
                           if(PATH4 & 1) {
                              func22();
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop972 = 0;
                              int loopLimit972 = (rand()%10)/4 + 1;
                              for(; loop972 < loopLimit972; loop972++) {
                                 if(PATH4 & 2) {
                                 }
                                 else {
                                 }
                              }
                              int loop973 = 0;
                              int loopLimit973 = (rand()%10)/4 + 1;
                              for(; loop973 < loopLimit973; loop973++) {
                                 func24();
                              }
                              int scalar7 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop974 = 0;
                           int loopLimit974 = (rand()%10)/4 + 1;
                           for(; loop974 < loopLimit974; loop974++) {
                              if(PATH4 & 4) {
                                 func19(rng());
                                 if(PATH4 & 8) {
                                 }
                                 else {
                                    int scalar7 = 1;
                                    if (scalar5 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar4--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                              else {
                                 if(PATH4 & 16) {
                                    func22();
                                 }
                                 else {
                                    int scalar7 = 1;
                                    if (scalar2 == 0) {
                                       printf("IS 0!");
                                    }
                                    printf("DELETE!\n");
                                    int loop975 = 0;
                                    int loopLimit975 = (rand()%10)/5 + 1;
                                    for(; loop975 < loopLimit975; loop975++) {
                                       if(PATH4 & 32) {
                                       }
                                       else {
                                       }
                                    }
                                    int loop976 = 0;
                                    int loopLimit976 = (rand()%10)/5 + 1;
                                    for(; loop976 < loopLimit976; loop976++) {
                                       func24();
                                    }
                                    int scalar8 = 1;
                                    if (scalar4 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar1--;
                                    printf("DELETE!\n");
                                 }
                                 func20(rng());
                              }
                           }
                           int loop977 = 0;
                           int loopLimit977 = (rand()%10)/4 + 1;
                           for(; loop977 < loopLimit977; loop977++) {
                              func18(rng());
                           }
                           int scalar7 = 1;
                           if (scalar7 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop978 = 0;
                  int loopLimit978 = (rand()%10)/3 + 1;
                  for(; loop978 < loopLimit978; loop978++) {
                     func12(rng());
                  }
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop979 = 0;
         int loopLimit979 = (rand()%10)/2 + 1;
         for(; loop979 < loopLimit979; loop979++) {
            func6(rng());
         }
      }
      else {
         if(PATH4 & 64) {
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop980 = 0;
            int loopLimit980 = (rand()%10)/2 + 1;
            for(; loop980 < loopLimit980; loop980++) {
               if(PATH4 & 128) {
                  func10(rng());
                  if(PATH4 & 256) {
                     func16(rng());
                     if(PATH4 & 512) {
                        func22();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop981 = 0;
                        int loopLimit981 = (rand()%10)/3 + 1;
                        for(; loop981 < loopLimit981; loop981++) {
                           if(PATH4 & 1024) {
                           }
                           else {
                           }
                        }
                        int loop982 = 0;
                        int loopLimit982 = (rand()%10)/3 + 1;
                        for(; loop982 < loopLimit982; loop982++) {
                           func24();
                        }
                        int scalar6 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop983 = 0;
                     int loopLimit983 = (rand()%10)/3 + 1;
                     for(; loop983 < loopLimit983; loop983++) {
                        if(PATH4 & 2048) {
                           func19(rng());
                           if(PATH4 & 4096) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar5--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           if(PATH4 & 8192) {
                              func22();
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop984 = 0;
                              int loopLimit984 = (rand()%10)/4 + 1;
                              for(; loop984 < loopLimit984; loop984++) {
                                 if(PATH4 & 16384) {
                                 }
                                 else {
                                 }
                              }
                              int loop985 = 0;
                              int loopLimit985 = (rand()%10)/4 + 1;
                              for(; loop985 < loopLimit985; loop985++) {
                                 func24();
                              }
                              int scalar7 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar6--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                     }
                     int loop986 = 0;
                     int loopLimit986 = (rand()%10)/3 + 1;
                     for(; loop986 < loopLimit986; loop986++) {
                        func18(rng());
                     }
                     int scalar6 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
               else {
                  if(PATH4 & 32768) {
                     func13(rng());
                     if(PATH4 & 65536) {
                        func19(rng());
                        if(PATH4 & 131072) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop987 = 0;
                        int loopLimit987 = (rand()%10)/3 + 1;
                        for(; loop987 < loopLimit987; loop987++) {
                           if(PATH4 & 262144) {
                              func22();
                           }
                           else {
                              if(PATH4 & 524288) {
                              }
                              else {
                                 int scalar6 = 1;
                                 if (scalar2 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar5--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop988 = 0;
                        int loopLimit988 = (rand()%10)/3 + 1;
                        for(; loop988 < loopLimit988; loop988++) {
                           func21(rng());
                        }
                        int scalar6 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop989 = 0;
                     int loopLimit989 = (rand()%10)/3 + 1;
                     for(; loop989 < loopLimit989; loop989++) {
                        if(PATH4 & 1048576) {
                           func16(rng());
                           if(PATH4 & 2097152) {
                              func22();
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop990 = 0;
                              int loopLimit990 = (rand()%10)/4 + 1;
                              for(; loop990 < loopLimit990; loop990++) {
                                 if(PATH4 & 4194304) {
                                 }
                                 else {
                                 }
                              }
                              int loop991 = 0;
                              int loopLimit991 = (rand()%10)/4 + 1;
                              for(; loop991 < loopLimit991; loop991++) {
                                 func24();
                              }
                              int scalar7 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                        else {
                           if(PATH4 & 8388608) {
                              func19(rng());
                              if(PATH4 & 16777216) {
                              }
                              else {
                                 int scalar6 = 1;
                                 if (scalar5 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop992 = 0;
                              int loopLimit992 = (rand()%10)/4 + 1;
                              for(; loop992 < loopLimit992; loop992++) {
                                 if(PATH4 & 33554432) {
                                    func22();
                                 }
                                 else {
                                    if(PATH4 & 67108864) {
                                    }
                                    else {
                                       int scalar7 = 1;
                                       if (scalar7 == 0) {
                                          printf("IS 0!");
                                       }
                                       scalar1--;
                                       printf("DELETE!\n");
                                    }
                                    func23();
                                 }
                              }
                              int loop993 = 0;
                              int loopLimit993 = (rand()%10)/4 + 1;
                              for(; loop993 < loopLimit993; loop993++) {
                                 func21(rng());
                              }
                              int scalar7 = 1;
                              if (scalar6 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func17(rng());
                        }
                     }
                     int loop994 = 0;
                     int loopLimit994 = (rand()%10)/3 + 1;
                     for(; loop994 < loopLimit994; loop994++) {
                        func15(rng());
                     }
                     int scalar6 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func11(rng());
               }
            }
            int loop995 = 0;
            int loopLimit995 = (rand()%10)/2 + 1;
            for(; loop995 < loopLimit995; loop995++) {
               func9(rng());
            }
         }
         else {
            int loop996 = 0;
            int loopLimit996 = (rand()%10)/2 + 1;
            for(; loop996 < loopLimit996; loop996++) {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop997 = 0;
               int loopLimit997 = (rand()%10)/3 + 1;
               for(; loop997 < loopLimit997; loop997++) {
                  if(PATH4 & 134217728) {
                     func10(rng());
                     if(PATH4 & 268435456) {
                        func16(rng());
                        if(PATH4 & 536870912) {
                           func22();
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop998 = 0;
                           int loopLimit998 = (rand()%10)/4 + 1;
                           for(; loop998 < loopLimit998; loop998++) {
                              if(PATH4 & 1073741824) {
                              }
                              else {
                              }
                           }
                           int loop999 = 0;
                           int loopLimit999 = (rand()%10)/4 + 1;
                           for(; loop999 < loopLimit999; loop999++) {
                              func24();
                           }
                           int scalar6 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1000 = 0;
                        int loopLimit1000 = (rand()%10)/4 + 1;
                        for(; loop1000 < loopLimit1000; loop1000++) {
                           if(PATH4 & -2147483648) {
                              func19(rng());
                              if(PATH4 & -2147483648) {
                              }
                              else {
                                 int scalar6 = 1;
                                 if (scalar2 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              if(PATH4 & -2147483648) {
                                 func22();
                              }
                              else {
                                 int scalar6 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop1001 = 0;
                                 int loopLimit1001 = (rand()%10)/5 + 1;
                                 for(; loop1001 < loopLimit1001; loop1001++) {
                                    if(PATH4 & -2147483648) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop1002 = 0;
                                 int loopLimit1002 = (rand()%10)/5 + 1;
                                 for(; loop1002 < loopLimit1002; loop1002++) {
                                    func24();
                                 }
                                 int scalar7 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar4--;
                                 printf("DELETE!\n");
                              }
                              func20(rng());
                           }
                        }
                        int loop1003 = 0;
                        int loopLimit1003 = (rand()%10)/4 + 1;
                        for(; loop1003 < loopLimit1003; loop1003++) {
                           func18(rng());
                        }
                        int scalar6 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
                  else {
                     if(PATH4 & -2147483648) {
                        func13(rng());
                        if(PATH4 & -2147483648) {
                           func19(rng());
                           if(PATH4 & -2147483648) {
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1004 = 0;
                           int loopLimit1004 = (rand()%10)/4 + 1;
                           for(; loop1004 < loopLimit1004; loop1004++) {
                              if(PATH4 & -2147483648) {
                                 func22();
                              }
                              else {
                                 if(PATH4 & -2147483648) {
                                 }
                                 else {
                                    int scalar6 = 1;
                                    if (scalar5 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar3--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop1005 = 0;
                           int loopLimit1005 = (rand()%10)/4 + 1;
                           for(; loop1005 < loopLimit1005; loop1005++) {
                              func21(rng());
                           }
                           int scalar6 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar6--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1006 = 0;
                        int loopLimit1006 = (rand()%10)/4 + 1;
                        for(; loop1006 < loopLimit1006; loop1006++) {
                           if(PATH4 & -2147483648) {
                              func16(rng());
                              if(PATH4 & -2147483648) {
                                 func22();
                              }
                              else {
                                 int scalar6 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop1007 = 0;
                                 int loopLimit1007 = (rand()%10)/5 + 1;
                                 for(; loop1007 < loopLimit1007; loop1007++) {
                                    if(PATH4 & -2147483648) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop1008 = 0;
                                 int loopLimit1008 = (rand()%10)/5 + 1;
                                 for(; loop1008 < loopLimit1008; loop1008++) {
                                    func24();
                                 }
                                 int scalar7 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func20(rng());
                           }
                           else {
                              if(PATH4 & -2147483648) {
                                 func19(rng());
                                 if(PATH4 & -2147483648) {
                                 }
                                 else {
                                    int scalar6 = 1;
                                    if (scalar3 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar5--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                              else {
                                 int scalar6 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop1009 = 0;
                                 int loopLimit1009 = (rand()%10)/5 + 1;
                                 for(; loop1009 < loopLimit1009; loop1009++) {
                                    if(PATH4 & -2147483648) {
                                       func22();
                                    }
                                    else {
                                       if(PATH4 & -2147483648) {
                                       }
                                       else {
                                          int scalar7 = 1;
                                          if (scalar2 == 0) {
                                             printf("IS 0!");
                                          }
                                          scalar5--;
                                          printf("DELETE!\n");
                                       }
                                       func23();
                                    }
                                 }
                                 int loop1010 = 0;
                                 int loopLimit1010 = (rand()%10)/5 + 1;
                                 for(; loop1010 < loopLimit1010; loop1010++) {
                                    func21(rng());
                                 }
                                 int scalar7 = 1;
                                 if (scalar7 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar4--;
                                 printf("DELETE!\n");
                              }
                              func17(rng());
                           }
                        }
                        int loop1011 = 0;
                        int loopLimit1011 = (rand()%10)/4 + 1;
                        for(; loop1011 < loopLimit1011; loop1011++) {
                           func15(rng());
                        }
                        int scalar6 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func11(rng());
                  }
               }
               int loop1012 = 0;
               int loopLimit1012 = (rand()%10)/3 + 1;
               for(; loop1012 < loopLimit1012; loop1012++) {
                  func9(rng());
               }
            }
         }
         int scalar4 = 1;
         int scalar5 = 1;
         printf("DELETE!\n");
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func7(rng(), rng());
         if(PATH4 & -2147483648) {
            func13(rng());
            if(PATH4 & -2147483648) {
               func19(rng());
               if(PATH4 & -2147483648) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop1013 = 0;
               int loopLimit1013 = (rand()%10)/2 + 1;
               for(; loop1013 < loopLimit1013; loop1013++) {
                  if(PATH4 & -2147483648) {
                     func22();
                  }
                  else {
                     if(PATH4 & -2147483648) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop1014 = 0;
               int loopLimit1014 = (rand()%10)/2 + 1;
               for(; loop1014 < loopLimit1014; loop1014++) {
                  func21(rng());
               }
               int scalar7 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            int scalar6 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop1015 = 0;
            int loopLimit1015 = (rand()%10)/2 + 1;
            for(; loop1015 < loopLimit1015; loop1015++) {
               if(PATH4 & -2147483648) {
                  func16(rng());
                  if(PATH4 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop1016 = 0;
                     int loopLimit1016 = (rand()%10)/3 + 1;
                     for(; loop1016 < loopLimit1016; loop1016++) {
                        if(PATH4 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop1017 = 0;
                     int loopLimit1017 = (rand()%10)/3 + 1;
                     for(; loop1017 < loopLimit1017; loop1017++) {
                        func24();
                     }
                     int scalar8 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  if(PATH4 & -2147483648) {
                     func19(rng());
                     if(PATH4 & -2147483648) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar7--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop1018 = 0;
                     int loopLimit1018 = (rand()%10)/3 + 1;
                     for(; loop1018 < loopLimit1018; loop1018++) {
                        if(PATH4 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH4 & -2147483648) {
                           }
                           else {
                              int scalar8 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop1019 = 0;
                     int loopLimit1019 = (rand()%10)/3 + 1;
                     for(; loop1019 < loopLimit1019; loop1019++) {
                        func21(rng());
                     }
                     int scalar8 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop1020 = 0;
            int loopLimit1020 = (rand()%10)/2 + 1;
            for(; loop1020 < loopLimit1020; loop1020++) {
               func15(rng());
            }
            int scalar7 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func11(rng());
         if(PATH4 & -2147483648) {
            int scalar6 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop1021 = 0;
            int loopLimit1021 = (rand()%10)/2 + 1;
            for(; loop1021 < loopLimit1021; loop1021++) {
               if(PATH4 & -2147483648) {
                  func10(rng());
                  if(PATH4 & -2147483648) {
                     func16(rng());
                     if(PATH4 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1022 = 0;
                        int loopLimit1022 = (rand()%10)/3 + 1;
                        for(; loop1022 < loopLimit1022; loop1022++) {
                           if(PATH4 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop1023 = 0;
                        int loopLimit1023 = (rand()%10)/3 + 1;
                        for(; loop1023 < loopLimit1023; loop1023++) {
                           func24();
                        }
                        int scalar8 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop1024 = 0;
                     int loopLimit1024 = (rand()%10)/3 + 1;
                     for(; loop1024 < loopLimit1024; loop1024++) {
                        if(PATH5 & 1) {
                           func19(rng());
                           if(PATH5 & 2) {
                           }
                           else {
                              int scalar8 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           if(PATH5 & 4) {
                              func22();
                           }
                           else {
                              int scalar8 = 1;
                              if (scalar6 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop1025 = 0;
                              int loopLimit1025 = (rand()%10)/4 + 1;
                              for(; loop1025 < loopLimit1025; loop1025++) {
                                 if(PATH5 & 8) {
                                 }
                                 else {
                                 }
                              }
                              int loop1026 = 0;
                              int loopLimit1026 = (rand()%10)/4 + 1;
                              for(; loop1026 < loopLimit1026; loop1026++) {
                                 func24();
                              }
                              int scalar9 = 1;
                              if (scalar9 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                     }
                     int loop1027 = 0;
                     int loopLimit1027 = (rand()%10)/3 + 1;
                     for(; loop1027 < loopLimit1027; loop1027++) {
                        func18(rng());
                     }
                     int scalar8 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
               else {
                  if(PATH5 & 16) {
                     func13(rng());
                     if(PATH5 & 32) {
                        func19(rng());
                        if(PATH5 & 64) {
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1028 = 0;
                        int loopLimit1028 = (rand()%10)/3 + 1;
                        for(; loop1028 < loopLimit1028; loop1028++) {
                           if(PATH5 & 128) {
                              func22();
                           }
                           else {
                              if(PATH5 & 256) {
                              }
                              else {
                                 int scalar8 = 1;
                                 if (scalar6 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar4--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop1029 = 0;
                        int loopLimit1029 = (rand()%10)/3 + 1;
                        for(; loop1029 < loopLimit1029; loop1029++) {
                           func21(rng());
                        }
                        int scalar8 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar7--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop1030 = 0;
                     int loopLimit1030 = (rand()%10)/3 + 1;
                     for(; loop1030 < loopLimit1030; loop1030++) {
                        if(PATH5 & 512) {
                           func16(rng());
                           if(PATH5 & 1024) {
                              func22();
                           }
                           else {
                              int scalar8 = 1;
                              if (scalar7 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop1031 = 0;
                              int loopLimit1031 = (rand()%10)/4 + 1;
                              for(; loop1031 < loopLimit1031; loop1031++) {
                                 if(PATH5 & 2048) {
                                 }
                                 else {
                                 }
                              }
                              int loop1032 = 0;
                              int loopLimit1032 = (rand()%10)/4 + 1;
                              for(; loop1032 < loopLimit1032; loop1032++) {
                                 func24();
                              }
                              int scalar9 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                        else {
                           if(PATH5 & 4096) {
                              func19(rng());
                              if(PATH5 & 8192) {
                              }
                              else {
                                 int scalar8 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar3--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              int scalar8 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop1033 = 0;
                              int loopLimit1033 = (rand()%10)/4 + 1;
                              for(; loop1033 < loopLimit1033; loop1033++) {
                                 if(PATH5 & 16384) {
                                    func22();
                                 }
                                 else {
                                    if(PATH5 & 32768) {
                                    }
                                    else {
                                       int scalar9 = 1;
                                       if (scalar2 == 0) {
                                          printf("IS 0!");
                                       }
                                       scalar6--;
                                       printf("DELETE!\n");
                                    }
                                    func23();
                                 }
                              }
                              int loop1034 = 0;
                              int loopLimit1034 = (rand()%10)/4 + 1;
                              for(; loop1034 < loopLimit1034; loop1034++) {
                                 func21(rng());
                              }
                              int scalar9 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func17(rng());
                        }
                     }
                     int loop1035 = 0;
                     int loopLimit1035 = (rand()%10)/3 + 1;
                     for(; loop1035 < loopLimit1035; loop1035++) {
                        func15(rng());
                     }
                     int scalar8 = 1;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func11(rng());
               }
            }
            int loop1036 = 0;
            int loopLimit1036 = (rand()%10)/2 + 1;
            for(; loop1036 < loopLimit1036; loop1036++) {
               func9(rng());
            }
         }
         else {
            if(PATH5 & 65536) {
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop1037 = 0;
               int loopLimit1037 = (rand()%10)/2 + 1;
               for(; loop1037 < loopLimit1037; loop1037++) {
                  if(PATH5 & 131072) {
                     func13(rng());
                     if(PATH5 & 262144) {
                        func19(rng());
                        if(PATH5 & 524288) {
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar6--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1038 = 0;
                        int loopLimit1038 = (rand()%10)/3 + 1;
                        for(; loop1038 < loopLimit1038; loop1038++) {
                           if(PATH5 & 1048576) {
                              func22();
                           }
                           else {
                              if(PATH5 & 2097152) {
                              }
                              else {
                                 int scalar8 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar3--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop1039 = 0;
                        int loopLimit1039 = (rand()%10)/3 + 1;
                        for(; loop1039 < loopLimit1039; loop1039++) {
                           func21(rng());
                        }
                        int scalar8 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     if(PATH5 & 4194304) {
                        func16(rng());
                        if(PATH5 & 8388608) {
                           func22();
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1040 = 0;
                           int loopLimit1040 = (rand()%10)/3 + 1;
                           for(; loop1040 < loopLimit1040; loop1040++) {
                              if(PATH5 & 16777216) {
                              }
                              else {
                              }
                           }
                           int loop1041 = 0;
                           int loopLimit1041 = (rand()%10)/3 + 1;
                           for(; loop1041 < loopLimit1041; loop1041++) {
                              func24();
                           }
                           int scalar8 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar7--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1042 = 0;
                        int loopLimit1042 = (rand()%10)/3 + 1;
                        for(; loop1042 < loopLimit1042; loop1042++) {
                           if(PATH5 & 33554432) {
                              func19(rng());
                              if(PATH5 & 67108864) {
                              }
                              else {
                                 int scalar8 = 1;
                                 if (scalar6 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar4--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              if(PATH5 & 134217728) {
                                 func22();
                              }
                              else {
                                 int scalar8 = 1;
                                 if (scalar8 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop1043 = 0;
                                 int loopLimit1043 = (rand()%10)/4 + 1;
                                 for(; loop1043 < loopLimit1043; loop1043++) {
                                    if(PATH5 & 268435456) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop1044 = 0;
                                 int loopLimit1044 = (rand()%10)/4 + 1;
                                 for(; loop1044 < loopLimit1044; loop1044++) {
                                    func24();
                                 }
                                 int scalar9 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar5--;
                                 printf("DELETE!\n");
                              }
                              func20(rng());
                           }
                        }
                        int loop1045 = 0;
                        int loopLimit1045 = (rand()%10)/3 + 1;
                        for(; loop1045 < loopLimit1045; loop1045++) {
                           func18(rng());
                        }
                        int scalar8 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
               }
               int loop1046 = 0;
               int loopLimit1046 = (rand()%10)/2 + 1;
               for(; loop1046 < loopLimit1046; loop1046++) {
                  func12(rng());
               }
            }
            else {
               int loop1047 = 0;
               int loopLimit1047 = (rand()%10)/2 + 1;
               for(; loop1047 < loopLimit1047; loop1047++) {
                  int scalar6 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop1048 = 0;
                  int loopLimit1048 = (rand()%10)/3 + 1;
                  for(; loop1048 < loopLimit1048; loop1048++) {
                     if(PATH5 & 536870912) {
                        func13(rng());
                        if(PATH5 & 1073741824) {
                           func19(rng());
                           if(PATH5 & -2147483648) {
                           }
                           else {
                              int scalar7 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1049 = 0;
                           int loopLimit1049 = (rand()%10)/4 + 1;
                           for(; loop1049 < loopLimit1049; loop1049++) {
                              if(PATH5 & -2147483648) {
                                 func22();
                              }
                              else {
                                 if(PATH5 & -2147483648) {
                                 }
                                 else {
                                    int scalar8 = 1;
                                    if (scalar3 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar8--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop1050 = 0;
                           int loopLimit1050 = (rand()%10)/4 + 1;
                           for(; loop1050 < loopLimit1050; loop1050++) {
                              func21(rng());
                           }
                           int scalar8 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar8--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        if(PATH5 & -2147483648) {
                           func16(rng());
                           if(PATH5 & -2147483648) {
                              func22();
                           }
                           else {
                              int scalar7 = 1;
                              if (scalar7 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop1051 = 0;
                              int loopLimit1051 = (rand()%10)/4 + 1;
                              for(; loop1051 < loopLimit1051; loop1051++) {
                                 if(PATH5 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop1052 = 0;
                              int loopLimit1052 = (rand()%10)/4 + 1;
                              for(; loop1052 < loopLimit1052; loop1052++) {
                                 func24();
                              }
                              int scalar8 = 1;
                              if (scalar7 == 0) {
                                 printf("IS 0!");
                              }
                              scalar7--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1053 = 0;
                           int loopLimit1053 = (rand()%10)/4 + 1;
                           for(; loop1053 < loopLimit1053; loop1053++) {
                              if(PATH5 & -2147483648) {
                                 func19(rng());
                                 if(PATH5 & -2147483648) {
                                 }
                                 else {
                                    int scalar8 = 1;
                                    if (scalar8 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar8--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                              else {
                                 if(PATH5 & -2147483648) {
                                    func22();
                                 }
                                 else {
                                    int scalar8 = 1;
                                    if (scalar1 == 0) {
                                       printf("IS 0!");
                                    }
                                    printf("DELETE!\n");
                                    int loop1054 = 0;
                                    int loopLimit1054 = (rand()%10)/5 + 1;
                                    for(; loop1054 < loopLimit1054; loop1054++) {
                                       if(PATH5 & -2147483648) {
                                       }
                                       else {
                                       }
                                    }
                                    int loop1055 = 0;
                                    int loopLimit1055 = (rand()%10)/5 + 1;
                                    for(; loop1055 < loopLimit1055; loop1055++) {
                                       func24();
                                    }
                                    int scalar9 = 1;
                                    if (scalar5 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar9--;
                                    printf("DELETE!\n");
                                 }
                                 func20(rng());
                              }
                           }
                           int loop1056 = 0;
                           int loopLimit1056 = (rand()%10)/4 + 1;
                           for(; loop1056 < loopLimit1056; loop1056++) {
                              func18(rng());
                           }
                           int scalar8 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar7--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop1057 = 0;
                  int loopLimit1057 = (rand()%10)/3 + 1;
                  for(; loop1057 < loopLimit1057; loop1057++) {
                     func12(rng());
                  }
               }
            }
            int scalar6 = 1;
            int scalar7 = 1;
            printf("DELETE!\n");
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            if(PATH5 & -2147483648) {
               func16(rng());
               if(PATH5 & -2147483648) {
                  func22();
               }
               else {
                  int scalar8 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop1058 = 0;
                  int loopLimit1058 = (rand()%10)/2 + 1;
                  for(; loop1058 < loopLimit1058; loop1058++) {
                     if(PATH5 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop1059 = 0;
                  int loopLimit1059 = (rand()%10)/2 + 1;
                  for(; loop1059 < loopLimit1059; loop1059++) {
                     func24();
                  }
                  int scalar9 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  scalar8--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar8 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop1060 = 0;
               int loopLimit1060 = (rand()%10)/2 + 1;
               for(; loop1060 < loopLimit1060; loop1060++) {
                  if(PATH5 & -2147483648) {
                     func19(rng());
                     if(PATH5 & -2147483648) {
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH5 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1061 = 0;
                        int loopLimit1061 = (rand()%10)/3 + 1;
                        for(; loop1061 < loopLimit1061; loop1061++) {
                           if(PATH5 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop1062 = 0;
                        int loopLimit1062 = (rand()%10)/3 + 1;
                        for(; loop1062 < loopLimit1062; loop1062++) {
                           func24();
                        }
                        int scalar10 = 1;
                        if (scalar9 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop1063 = 0;
               int loopLimit1063 = (rand()%10)/2 + 1;
               for(; loop1063 < loopLimit1063; loop1063++) {
                  func18(rng());
               }
               int scalar9 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               printf("DELETE!\n");
            }
            func14(rng());
            if(PATH5 & -2147483648) {
               int scalar8 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop1064 = 0;
               int loopLimit1064 = (rand()%10)/2 + 1;
               for(; loop1064 < loopLimit1064; loop1064++) {
                  if(PATH5 & -2147483648) {
                     func13(rng());
                     if(PATH5 & -2147483648) {
                        func19(rng());
                        if(PATH5 & -2147483648) {
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar8 == 0) {
                              printf("IS 0!");
                           }
                           scalar8--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1065 = 0;
                        int loopLimit1065 = (rand()%10)/3 + 1;
                        for(; loop1065 < loopLimit1065; loop1065++) {
                           if(PATH5 & -2147483648) {
                              func22();
                           }
                           else {
                              if(PATH5 & -2147483648) {
                              }
                              else {
                                 int scalar10 = 1;
                                 if (scalar8 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar6--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop1066 = 0;
                        int loopLimit1066 = (rand()%10)/3 + 1;
                        for(; loop1066 < loopLimit1066; loop1066++) {
                           func21(rng());
                        }
                        int scalar10 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     if(PATH5 & -2147483648) {
                        func16(rng());
                        if(PATH5 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1067 = 0;
                           int loopLimit1067 = (rand()%10)/3 + 1;
                           for(; loop1067 < loopLimit1067; loop1067++) {
                              if(PATH5 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop1068 = 0;
                           int loopLimit1068 = (rand()%10)/3 + 1;
                           for(; loop1068 < loopLimit1068; loop1068++) {
                              func24();
                           }
                           int scalar10 = 1;
                           if (scalar7 == 0) {
                              printf("IS 0!");
                           }
                           scalar7--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1069 = 0;
                        int loopLimit1069 = (rand()%10)/3 + 1;
                        for(; loop1069 < loopLimit1069; loop1069++) {
                           if(PATH5 & -2147483648) {
                              func19(rng());
                              if(PATH5 & -2147483648) {
                              }
                              else {
                                 int scalar10 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar10--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              if(PATH5 & -2147483648) {
                                 func22();
                              }
                              else {
                                 int scalar10 = 1;
                                 if (scalar2 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop1070 = 0;
                                 int loopLimit1070 = (rand()%10)/4 + 1;
                                 for(; loop1070 < loopLimit1070; loop1070++) {
                                    if(PATH5 & -2147483648) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop1071 = 0;
                                 int loopLimit1071 = (rand()%10)/4 + 1;
                                 for(; loop1071 < loopLimit1071; loop1071++) {
                                    func24();
                                 }
                                 int scalar11 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar3--;
                                 printf("DELETE!\n");
                              }
                              func20(rng());
                           }
                        }
                        int loop1072 = 0;
                        int loopLimit1072 = (rand()%10)/3 + 1;
                        for(; loop1072 < loopLimit1072; loop1072++) {
                           func18(rng());
                        }
                        int scalar10 = 1;
                        if (scalar10 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
               }
               int loop1073 = 0;
               int loopLimit1073 = (rand()%10)/2 + 1;
               for(; loop1073 < loopLimit1073; loop1073++) {
                  func12(rng());
               }
            }
            else {
               if(PATH5 & -2147483648) {
                  int scalar8 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop1074 = 0;
                  int loopLimit1074 = (rand()%10)/2 + 1;
                  for(; loop1074 < loopLimit1074; loop1074++) {
                     if(PATH5 & -2147483648) {
                        func16(rng());
                        if(PATH5 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar8 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1075 = 0;
                           int loopLimit1075 = (rand()%10)/3 + 1;
                           for(; loop1075 < loopLimit1075; loop1075++) {
                              if(PATH6 & 1) {
                              }
                              else {
                              }
                           }
                           int loop1076 = 0;
                           int loopLimit1076 = (rand()%10)/3 + 1;
                           for(; loop1076 < loopLimit1076; loop1076++) {
                              func24();
                           }
                           int scalar10 = 1;
                           if (scalar9 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        if(PATH6 & 2) {
                           func19(rng());
                           if(PATH6 & 4) {
                           }
                           else {
                              int scalar9 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar7--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar7 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1077 = 0;
                           int loopLimit1077 = (rand()%10)/3 + 1;
                           for(; loop1077 < loopLimit1077; loop1077++) {
                              if(PATH6 & 8) {
                                 func22();
                              }
                              else {
                                 if(PATH6 & 16) {
                                 }
                                 else {
                                    int scalar10 = 1;
                                    if (scalar8 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar8--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop1078 = 0;
                           int loopLimit1078 = (rand()%10)/3 + 1;
                           for(; loop1078 < loopLimit1078; loop1078++) {
                              func21(rng());
                           }
                           int scalar10 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar10--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop1079 = 0;
                  int loopLimit1079 = (rand()%10)/2 + 1;
                  for(; loop1079 < loopLimit1079; loop1079++) {
                     func15(rng());
                  }
               }
               else {
                  int loop1080 = 0;
                  int loopLimit1080 = (rand()%10)/2 + 1;
                  for(; loop1080 < loopLimit1080; loop1080++) {
                     int scalar8 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop1081 = 0;
                     int loopLimit1081 = (rand()%10)/3 + 1;
                     for(; loop1081 < loopLimit1081; loop1081++) {
                        if(PATH6 & 32) {
                           func16(rng());
                           if(PATH6 & 64) {
                              func22();
                           }
                           else {
                              int scalar9 = 1;
                              if (scalar6 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop1082 = 0;
                              int loopLimit1082 = (rand()%10)/4 + 1;
                              for(; loop1082 < loopLimit1082; loop1082++) {
                                 if(PATH6 & 128) {
                                 }
                                 else {
                                 }
                              }
                              int loop1083 = 0;
                              int loopLimit1083 = (rand()%10)/4 + 1;
                              for(; loop1083 < loopLimit1083; loop1083++) {
                                 func24();
                              }
                              int scalar10 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                        else {
                           if(PATH6 & 256) {
                              func19(rng());
                              if(PATH6 & 512) {
                              }
                              else {
                                 int scalar9 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar3--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              int scalar9 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop1084 = 0;
                              int loopLimit1084 = (rand()%10)/4 + 1;
                              for(; loop1084 < loopLimit1084; loop1084++) {
                                 if(PATH6 & 1024) {
                                    func22();
                                 }
                                 else {
                                    if(PATH6 & 2048) {
                                    }
                                    else {
                                       int scalar10 = 1;
                                       if (scalar7 == 0) {
                                          printf("IS 0!");
                                       }
                                       scalar6--;
                                       printf("DELETE!\n");
                                    }
                                    func23();
                                 }
                              }
                              int loop1085 = 0;
                              int loopLimit1085 = (rand()%10)/4 + 1;
                              for(; loop1085 < loopLimit1085; loop1085++) {
                                 func21(rng());
                              }
                              int scalar10 = 1;
                              if (scalar8 == 0) {
                                 printf("IS 0!");
                              }
                              scalar5--;
                              printf("DELETE!\n");
                           }
                           func17(rng());
                        }
                     }
                     int loop1086 = 0;
                     int loopLimit1086 = (rand()%10)/3 + 1;
                     for(; loop1086 < loopLimit1086; loop1086++) {
                        func15(rng());
                     }
                  }
               }
               int scalar8 = 1;
               int scalar9 = 1;
               printf("DELETE!\n");
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               func13(rng());
               if(PATH6 & 4096) {
                  func19(rng());
                  if(PATH6 & 8192) {
                  }
                  else {
                     int scalar10 = 1;
                     if (scalar10 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar10 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop1087 = 0;
                  int loopLimit1087 = (rand()%10)/2 + 1;
                  for(; loop1087 < loopLimit1087; loop1087++) {
                     if(PATH6 & 16384) {
                        func22();
                     }
                     else {
                        if(PATH6 & 32768) {
                        }
                        else {
                           int scalar11 = 1;
                           if (scalar7 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop1088 = 0;
                  int loopLimit1088 = (rand()%10)/2 + 1;
                  for(; loop1088 < loopLimit1088; loop1088++) {
                     func21(rng());
                  }
                  int scalar11 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17(rng());
               if(PATH6 & 65536) {
                  int scalar10 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop1089 = 0;
                  int loopLimit1089 = (rand()%10)/2 + 1;
                  for(; loop1089 < loopLimit1089; loop1089++) {
                     if(PATH6 & 131072) {
                        func16(rng());
                        if(PATH6 & 262144) {
                           func22();
                        }
                        else {
                           int scalar11 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1090 = 0;
                           int loopLimit1090 = (rand()%10)/3 + 1;
                           for(; loop1090 < loopLimit1090; loop1090++) {
                              if(PATH6 & 524288) {
                              }
                              else {
                              }
                           }
                           int loop1091 = 0;
                           int loopLimit1091 = (rand()%10)/3 + 1;
                           for(; loop1091 < loopLimit1091; loop1091++) {
                              func24();
                           }
                           int scalar12 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar12--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        if(PATH6 & 1048576) {
                           func19(rng());
                           if(PATH6 & 2097152) {
                           }
                           else {
                              int scalar11 = 1;
                              if (scalar9 == 0) {
                                 printf("IS 0!");
                              }
                              scalar9--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar11 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1092 = 0;
                           int loopLimit1092 = (rand()%10)/3 + 1;
                           for(; loop1092 < loopLimit1092; loop1092++) {
                              if(PATH6 & 4194304) {
                                 func22();
                              }
                              else {
                                 if(PATH6 & 8388608) {
                                 }
                                 else {
                                    int scalar12 = 1;
                                    if (scalar2 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar11--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop1093 = 0;
                           int loopLimit1093 = (rand()%10)/3 + 1;
                           for(; loop1093 < loopLimit1093; loop1093++) {
                              func21(rng());
                           }
                           int scalar12 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar7--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop1094 = 0;
                  int loopLimit1094 = (rand()%10)/2 + 1;
                  for(; loop1094 < loopLimit1094; loop1094++) {
                     func15(rng());
                  }
               }
               else {
                  if(PATH6 & 16777216) {
                     int scalar10 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop1095 = 0;
                     int loopLimit1095 = (rand()%10)/2 + 1;
                     for(; loop1095 < loopLimit1095; loop1095++) {
                        if(PATH6 & 33554432) {
                           func19(rng());
                           if(PATH6 & 67108864) {
                           }
                           else {
                              int scalar11 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar6--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           if(PATH6 & 134217728) {
                              func22();
                           }
                           else {
                              int scalar11 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop1096 = 0;
                              int loopLimit1096 = (rand()%10)/3 + 1;
                              for(; loop1096 < loopLimit1096; loop1096++) {
                                 if(PATH6 & 268435456) {
                                 }
                                 else {
                                 }
                              }
                              int loop1097 = 0;
                              int loopLimit1097 = (rand()%10)/3 + 1;
                              for(; loop1097 < loopLimit1097; loop1097++) {
                                 func24();
                              }
                              int scalar12 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                     }
                     int loop1098 = 0;
                     int loopLimit1098 = (rand()%10)/2 + 1;
                     for(; loop1098 < loopLimit1098; loop1098++) {
                        func18(rng());
                     }
                  }
                  else {
                     int loop1099 = 0;
                     int loopLimit1099 = (rand()%10)/2 + 1;
                     for(; loop1099 < loopLimit1099; loop1099++) {
                        int scalar10 = 1;
                        if (scalar10 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1100 = 0;
                        int loopLimit1100 = (rand()%10)/3 + 1;
                        for(; loop1100 < loopLimit1100; loop1100++) {
                           if(PATH6 & 536870912) {
                              func19(rng());
                              if(PATH6 & 1073741824) {
                              }
                              else {
                                 int scalar11 = 1;
                                 if (scalar7 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar3--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                           else {
                              if(PATH6 & -2147483648) {
                                 func22();
                              }
                              else {
                                 int scalar11 = 1;
                                 if (scalar6 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop1101 = 0;
                                 int loopLimit1101 = (rand()%10)/4 + 1;
                                 for(; loop1101 < loopLimit1101; loop1101++) {
                                    if(PATH6 & -2147483648) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop1102 = 0;
                                 int loopLimit1102 = (rand()%10)/4 + 1;
                                 for(; loop1102 < loopLimit1102; loop1102++) {
                                    func24();
                                 }
                                 int scalar12 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar2--;
                                 printf("DELETE!\n");
                              }
                              func20(rng());
                           }
                        }
                        int loop1103 = 0;
                        int loopLimit1103 = (rand()%10)/3 + 1;
                        for(; loop1103 < loopLimit1103; loop1103++) {
                           func18(rng());
                        }
                     }
                  }
                  int scalar10 = 1;
                  int scalar11 = 1;
                  printf("DELETE!\n");
                  if (scalar10 == 0) {
                     printf("IS 0!");
                  }
                  func16(rng());
                  if(PATH6 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar12 = 1;
                     if (scalar11 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop1104 = 0;
                     int loopLimit1104 = (rand()%10)/2 + 1;
                     for(; loop1104 < loopLimit1104; loop1104++) {
                        if(PATH6 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop1105 = 0;
                     int loopLimit1105 = (rand()%10)/2 + 1;
                     for(; loop1105 < loopLimit1105; loop1105++) {
                        func24();
                     }
                     int scalar13 = 1;
                     if (scalar9 == 0) {
                        printf("IS 0!");
                     }
                     scalar11--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
                  if(PATH6 & -2147483648) {
                     int scalar12 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop1106 = 0;
                     int loopLimit1106 = (rand()%10)/2 + 1;
                     for(; loop1106 < loopLimit1106; loop1106++) {
                        if(PATH6 & -2147483648) {
                           func19(rng());
                           if(PATH6 & -2147483648) {
                           }
                           else {
                              int scalar13 = 1;
                              if (scalar6 == 0) {
                                 printf("IS 0!");
                              }
                              scalar12--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           if(PATH6 & -2147483648) {
                              func22();
                           }
                           else {
                              int scalar13 = 1;
                              if (scalar10 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop1107 = 0;
                              int loopLimit1107 = (rand()%10)/3 + 1;
                              for(; loop1107 < loopLimit1107; loop1107++) {
                                 if(PATH6 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop1108 = 0;
                              int loopLimit1108 = (rand()%10)/3 + 1;
                              for(; loop1108 < loopLimit1108; loop1108++) {
                                 func24();
                              }
                              int scalar14 = 1;
                              if (scalar12 == 0) {
                                 printf("IS 0!");
                              }
                              scalar13--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                     }
                     int loop1109 = 0;
                     int loopLimit1109 = (rand()%10)/2 + 1;
                     for(; loop1109 < loopLimit1109; loop1109++) {
                        func18(rng());
                     }
                  }
                  else {
                     if(PATH6 & -2147483648) {
                        int scalar12 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1110 = 0;
                        int loopLimit1110 = (rand()%10)/2 + 1;
                        for(; loop1110 < loopLimit1110; loop1110++) {
                           if(PATH6 & -2147483648) {
                              func22();
                           }
                           else {
                              if(PATH6 & -2147483648) {
                              }
                              else {
                                 int scalar13 = 1;
                                 if (scalar5 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop1111 = 0;
                        int loopLimit1111 = (rand()%10)/2 + 1;
                        for(; loop1111 < loopLimit1111; loop1111++) {
                           func21(rng());
                        }
                     }
                     else {
                        int loop1112 = 0;
                        int loopLimit1112 = (rand()%10)/2 + 1;
                        for(; loop1112 < loopLimit1112; loop1112++) {
                           int scalar12 = 1;
                           if (scalar11 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1113 = 0;
                           int loopLimit1113 = (rand()%10)/3 + 1;
                           for(; loop1113 < loopLimit1113; loop1113++) {
                              if(PATH6 & -2147483648) {
                                 func22();
                              }
                              else {
                                 if(PATH6 & -2147483648) {
                                 }
                                 else {
                                    int scalar13 = 1;
                                    if (scalar2 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar3--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop1114 = 0;
                           int loopLimit1114 = (rand()%10)/3 + 1;
                           for(; loop1114 < loopLimit1114; loop1114++) {
                              func21(rng());
                           }
                        }
                     }
                     int scalar12 = 1;
                     int scalar13 = 1;
                     printf("DELETE!\n");
                     if (scalar12 == 0) {
                        printf("IS 0!");
                     }
                     func19(rng());
                     if(PATH6 & -2147483648) {
                     }
                     else {
                        int scalar14 = 1;
                        if (scalar11 == 0) {
                           printf("IS 0!");
                        }
                        scalar12--;
                        printf("DELETE!\n");
                     }
                     func23();
                     if(PATH6 & -2147483648) {
                        int scalar14 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop1115 = 0;
                        int loopLimit1115 = (rand()%10)/2 + 1;
                        for(; loop1115 < loopLimit1115; loop1115++) {
                           if(PATH6 & -2147483648) {
                              func22();
                           }
                           else {
                              if(PATH6 & -2147483648) {
                              }
                              else {
                                 int scalar15 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar12--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop1116 = 0;
                        int loopLimit1116 = (rand()%10)/2 + 1;
                        for(; loop1116 < loopLimit1116; loop1116++) {
                           func21(rng());
                        }
                     }
                     else {
                        if(PATH6 & -2147483648) {
                           int scalar14 = 1;
                           if (scalar11 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1117 = 0;
                           int loopLimit1117 = (rand()%10)/2 + 1;
                           for(; loop1117 < loopLimit1117; loop1117++) {
                              if(PATH6 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop1118 = 0;
                           int loopLimit1118 = (rand()%10)/2 + 1;
                           for(; loop1118 < loopLimit1118; loop1118++) {
                              func24();
                           }
                        }
                        else {
                           int loop1119 = 0;
                           int loopLimit1119 = (rand()%10)/2 + 1;
                           for(; loop1119 < loopLimit1119; loop1119++) {
                              int scalar14 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop1120 = 0;
                              int loopLimit1120 = (rand()%10)/3 + 1;
                              for(; loop1120 < loopLimit1120; loop1120++) {
                                 if(PATH6 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop1121 = 0;
                              int loopLimit1121 = (rand()%10)/3 + 1;
                              for(; loop1121 < loopLimit1121; loop1121++) {
                                 func24();
                              }
                           }
                        }
                        int scalar14 = 1;
                        int scalar15 = 1;
                        printf("DELETE!\n");
                        if (scalar13 == 0) {
                           printf("IS 0!");
                        }
                        func22();
                        if(PATH6 & -2147483648) {
                           int scalar16 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop1122 = 0;
                           int loopLimit1122 = (rand()%10)/2 + 1;
                           for(; loop1122 < loopLimit1122; loop1122++) {
                              if(PATH6 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop1123 = 0;
                           int loopLimit1123 = (rand()%10)/2 + 1;
                           for(; loop1123 < loopLimit1123; loop1123++) {
                              func24();
                           }
                        }
                        else {
                           if(PATH6 & -2147483648) {
                           }
                           else {
                              int loop1124 = 0;
                              int loopLimit1124 = (rand()%10)/2 + 1;
                              for(; loop1124 < loopLimit1124; loop1124++) {
                              }
                           }
                           int scalar16 = 1;
                           int scalar17 = 1;
                           printf("DELETE!\n");
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           if(PATH6 & -2147483648) {
                           }
                           else {
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
}

void func1(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2, const unsigned long PATH3) {
   int scalar1 = 1;
   func4(rng(), rng());
   if(PATH0 & 1) {
      func10(rng());
      if(PATH0 & 2) {
         func16(rng());
         if(PATH0 & 4) {
            func22();
         }
         else {
            int scalar2 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop280 = 0;
            int loopLimit280 = (rand()%10)/2 + 1;
            for(; loop280 < loopLimit280; loop280++) {
               if(PATH0 & 8) {
               }
               else {
               }
            }
            int loop281 = 0;
            int loopLimit281 = (rand()%10)/2 + 1;
            for(; loop281 < loopLimit281; loop281++) {
               func24();
            }
            int scalar3 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func20(rng());
      }
      else {
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop282 = 0;
         int loopLimit282 = (rand()%10)/2 + 1;
         for(; loop282 < loopLimit282; loop282++) {
            if(PATH0 & 16) {
               func19(rng());
               if(PATH0 & 32) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               if(PATH0 & 64) {
                  func22();
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop283 = 0;
                  int loopLimit283 = (rand()%10)/3 + 1;
                  for(; loop283 < loopLimit283; loop283++) {
                     if(PATH0 & 128) {
                     }
                     else {
                     }
                  }
                  int loop284 = 0;
                  int loopLimit284 = (rand()%10)/3 + 1;
                  for(; loop284 < loopLimit284; loop284++) {
                     func24();
                  }
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
         }
         int loop285 = 0;
         int loopLimit285 = (rand()%10)/2 + 1;
         for(; loop285 < loopLimit285; loop285++) {
            func18(rng());
         }
         int scalar3 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func14(rng());
   }
   else {
      int scalar2 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop286 = 0;
      int loopLimit286 = (rand()%10)/2 + 1;
      for(; loop286 < loopLimit286; loop286++) {
         if(PATH0 & 256) {
            func13(rng());
            if(PATH0 & 512) {
               func19(rng());
               if(PATH0 & 1024) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop287 = 0;
               int loopLimit287 = (rand()%10)/3 + 1;
               for(; loop287 < loopLimit287; loop287++) {
                  if(PATH0 & 2048) {
                     func22();
                  }
                  else {
                     if(PATH0 & 4096) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop288 = 0;
               int loopLimit288 = (rand()%10)/3 + 1;
               for(; loop288 < loopLimit288; loop288++) {
                  func21(rng());
               }
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            if(PATH0 & 8192) {
               func16(rng());
               if(PATH0 & 16384) {
                  func22();
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop289 = 0;
                  int loopLimit289 = (rand()%10)/3 + 1;
                  for(; loop289 < loopLimit289; loop289++) {
                     if(PATH0 & 32768) {
                     }
                     else {
                     }
                  }
                  int loop290 = 0;
                  int loopLimit290 = (rand()%10)/3 + 1;
                  for(; loop290 < loopLimit290; loop290++) {
                     func24();
                  }
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop291 = 0;
               int loopLimit291 = (rand()%10)/3 + 1;
               for(; loop291 < loopLimit291; loop291++) {
                  if(PATH0 & 65536) {
                     func19(rng());
                     if(PATH0 & 131072) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH0 & 262144) {
                        func22();
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop292 = 0;
                        int loopLimit292 = (rand()%10)/4 + 1;
                        for(; loop292 < loopLimit292; loop292++) {
                           if(PATH0 & 524288) {
                           }
                           else {
                           }
                        }
                        int loop293 = 0;
                        int loopLimit293 = (rand()%10)/4 + 1;
                        for(; loop293 < loopLimit293; loop293++) {
                           func24();
                        }
                        int scalar5 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop294 = 0;
               int loopLimit294 = (rand()%10)/3 + 1;
               for(; loop294 < loopLimit294; loop294++) {
                  func18(rng());
               }
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop295 = 0;
      int loopLimit295 = (rand()%10)/2 + 1;
      for(; loop295 < loopLimit295; loop295++) {
         func12(rng());
      }
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   func8(rng());
   scalar1++;
   scalar1++;
   if(PATH0 & 1048576) {
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop347 = 0;
      int loopLimit347 = (rand()%10)/2 + 1;
      for(; loop347 < loopLimit347; loop347++) {
         if(PATH0 & 2097152) {
            func10(rng());
            if(PATH0 & 4194304) {
               func16(rng());
               if(PATH0 & 8388608) {
                  func22();
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop348 = 0;
                  int loopLimit348 = (rand()%10)/3 + 1;
                  for(; loop348 < loopLimit348; loop348++) {
                     if(PATH0 & 16777216) {
                     }
                     else {
                     }
                  }
                  int loop349 = 0;
                  int loopLimit349 = (rand()%10)/3 + 1;
                  for(; loop349 < loopLimit349; loop349++) {
                     func24();
                  }
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop350 = 0;
               int loopLimit350 = (rand()%10)/3 + 1;
               for(; loop350 < loopLimit350; loop350++) {
                  if(PATH0 & 33554432) {
                     func19(rng());
                     if(PATH0 & 67108864) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH0 & 134217728) {
                        func22();
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop351 = 0;
                        int loopLimit351 = (rand()%10)/4 + 1;
                        for(; loop351 < loopLimit351; loop351++) {
                           if(PATH0 & 268435456) {
                           }
                           else {
                           }
                        }
                        int loop352 = 0;
                        int loopLimit352 = (rand()%10)/4 + 1;
                        for(; loop352 < loopLimit352; loop352++) {
                           func24();
                        }
                        int scalar5 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop353 = 0;
               int loopLimit353 = (rand()%10)/3 + 1;
               for(; loop353 < loopLimit353; loop353++) {
                  func18(rng());
               }
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            if(PATH0 & 536870912) {
               func13(rng());
               if(PATH0 & 1073741824) {
                  func19(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop354 = 0;
                  int loopLimit354 = (rand()%10)/3 + 1;
                  for(; loop354 < loopLimit354; loop354++) {
                     if(PATH0 & -2147483648) {
                        func22();
                     }
                     else {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop355 = 0;
                  int loopLimit355 = (rand()%10)/3 + 1;
                  for(; loop355 < loopLimit355; loop355++) {
                     func21(rng());
                  }
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop356 = 0;
               int loopLimit356 = (rand()%10)/3 + 1;
               for(; loop356 < loopLimit356; loop356++) {
                  if(PATH0 & -2147483648) {
                     func16(rng());
                     if(PATH0 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop357 = 0;
                        int loopLimit357 = (rand()%10)/4 + 1;
                        for(; loop357 < loopLimit357; loop357++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop358 = 0;
                        int loopLimit358 = (rand()%10)/4 + 1;
                        for(; loop358 < loopLimit358; loop358++) {
                           func24();
                        }
                        int scalar5 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     if(PATH0 & -2147483648) {
                        func19(rng());
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop359 = 0;
                        int loopLimit359 = (rand()%10)/4 + 1;
                        for(; loop359 < loopLimit359; loop359++) {
                           if(PATH0 & -2147483648) {
                              func22();
                           }
                           else {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                                 int scalar5 = 1;
                                 if (scalar5 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar3--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop360 = 0;
                        int loopLimit360 = (rand()%10)/4 + 1;
                        for(; loop360 < loopLimit360; loop360++) {
                           func21(rng());
                        }
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop361 = 0;
               int loopLimit361 = (rand()%10)/3 + 1;
               for(; loop361 < loopLimit361; loop361++) {
                  func15(rng());
               }
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop362 = 0;
      int loopLimit362 = (rand()%10)/2 + 1;
      for(; loop362 < loopLimit362; loop362++) {
         func9(rng());
      }
   }
   else {
      int loop373 = 0;
      int loopLimit373 = (rand()%10)/2 + 1;
      for(; loop373 < loopLimit373; loop373++) {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop374 = 0;
         int loopLimit374 = (rand()%10)/3 + 1;
         for(; loop374 < loopLimit374; loop374++) {
            if(PATH0 & -2147483648) {
               func10(rng());
               if(PATH0 & -2147483648) {
                  func16(rng());
                  if(PATH0 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop375 = 0;
                     int loopLimit375 = (rand()%10)/4 + 1;
                     for(; loop375 < loopLimit375; loop375++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop376 = 0;
                     int loopLimit376 = (rand()%10)/4 + 1;
                     for(; loop376 < loopLimit376; loop376++) {
                        func24();
                     }
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop377 = 0;
                  int loopLimit377 = (rand()%10)/4 + 1;
                  for(; loop377 < loopLimit377; loop377++) {
                     if(PATH0 & -2147483648) {
                        func19(rng());
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH0 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop378 = 0;
                           int loopLimit378 = (rand()%10)/5 + 1;
                           for(; loop378 < loopLimit378; loop378++) {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop379 = 0;
                           int loopLimit379 = (rand()%10)/5 + 1;
                           for(; loop379 < loopLimit379; loop379++) {
                              func24();
                           }
                           int scalar5 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop380 = 0;
                  int loopLimit380 = (rand()%10)/4 + 1;
                  for(; loop380 < loopLimit380; loop380++) {
                     func18(rng());
                  }
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
            else {
               if(PATH0 & -2147483648) {
                  func13(rng());
                  if(PATH0 & -2147483648) {
                     func19(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop381 = 0;
                     int loopLimit381 = (rand()%10)/4 + 1;
                     for(; loop381 < loopLimit381; loop381++) {
                        if(PATH0 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop382 = 0;
                     int loopLimit382 = (rand()%10)/4 + 1;
                     for(; loop382 < loopLimit382; loop382++) {
                        func21(rng());
                     }
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop383 = 0;
                  int loopLimit383 = (rand()%10)/4 + 1;
                  for(; loop383 < loopLimit383; loop383++) {
                     if(PATH0 & -2147483648) {
                        func16(rng());
                        if(PATH0 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop384 = 0;
                           int loopLimit384 = (rand()%10)/5 + 1;
                           for(; loop384 < loopLimit384; loop384++) {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop385 = 0;
                           int loopLimit385 = (rand()%10)/5 + 1;
                           for(; loop385 < loopLimit385; loop385++) {
                              func24();
                           }
                           int scalar5 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        if(PATH0 & -2147483648) {
                           func19(rng());
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop386 = 0;
                           int loopLimit386 = (rand()%10)/5 + 1;
                           for(; loop386 < loopLimit386; loop386++) {
                              if(PATH0 & -2147483648) {
                                 func22();
                              }
                              else {
                                 if(PATH0 & -2147483648) {
                                 }
                                 else {
                                    int scalar5 = 1;
                                    if (scalar3 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar2--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop387 = 0;
                           int loopLimit387 = (rand()%10)/5 + 1;
                           for(; loop387 < loopLimit387; loop387++) {
                              func21(rng());
                           }
                           int scalar5 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop388 = 0;
                  int loopLimit388 = (rand()%10)/4 + 1;
                  for(; loop388 < loopLimit388; loop388++) {
                     func15(rng());
                  }
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
         }
         int loop389 = 0;
         int loopLimit389 = (rand()%10)/3 + 1;
         for(; loop389 < loopLimit389; loop389++) {
            func9(rng());
         }
      }
   }
   int scalar2 = 1;
   int scalar3 = 1;
   printf("DELETE!\n");
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func7(rng(), rng());
   if(PATH0 & -2147483648) {
      func13(rng());
      if(PATH0 & -2147483648) {
         func19(rng());
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func23();
      }
      else {
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop390 = 0;
         int loopLimit390 = (rand()%10)/2 + 1;
         for(; loop390 < loopLimit390; loop390++) {
            if(PATH1 & 1) {
               func22();
            }
            else {
               if(PATH1 & 2) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func23();
            }
         }
         int loop391 = 0;
         int loopLimit391 = (rand()%10)/2 + 1;
         for(; loop391 < loopLimit391; loop391++) {
            func21(rng());
         }
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func17(rng());
   }
   else {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop392 = 0;
      int loopLimit392 = (rand()%10)/2 + 1;
      for(; loop392 < loopLimit392; loop392++) {
         if(PATH1 & 4) {
            func16(rng());
            if(PATH1 & 8) {
               func22();
            }
            else {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop393 = 0;
               int loopLimit393 = (rand()%10)/3 + 1;
               for(; loop393 < loopLimit393; loop393++) {
                  if(PATH1 & 16) {
                  }
                  else {
                  }
               }
               int loop394 = 0;
               int loopLimit394 = (rand()%10)/3 + 1;
               for(; loop394 < loopLimit394; loop394++) {
                  func24();
               }
               int scalar6 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
         else {
            if(PATH1 & 32) {
               func19(rng());
               if(PATH1 & 64) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop395 = 0;
               int loopLimit395 = (rand()%10)/3 + 1;
               for(; loop395 < loopLimit395; loop395++) {
                  if(PATH1 & 128) {
                     func22();
                  }
                  else {
                     if(PATH1 & 256) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop396 = 0;
               int loopLimit396 = (rand()%10)/3 + 1;
               for(; loop396 < loopLimit396; loop396++) {
                  func21(rng());
               }
               int scalar6 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop397 = 0;
      int loopLimit397 = (rand()%10)/2 + 1;
      for(; loop397 < loopLimit397; loop397++) {
         func15(rng());
      }
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   func11(rng());
   if(PATH1 & 512) {
      int scalar4 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop398 = 0;
      int loopLimit398 = (rand()%10)/2 + 1;
      for(; loop398 < loopLimit398; loop398++) {
         if(PATH1 & 1024) {
            func10(rng());
            if(PATH1 & 2048) {
               func16(rng());
               if(PATH1 & 4096) {
                  func22();
               }
               else {
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop399 = 0;
                  int loopLimit399 = (rand()%10)/3 + 1;
                  for(; loop399 < loopLimit399; loop399++) {
                     if(PATH1 & 8192) {
                     }
                     else {
                     }
                  }
                  int loop400 = 0;
                  int loopLimit400 = (rand()%10)/3 + 1;
                  for(; loop400 < loopLimit400; loop400++) {
                     func24();
                  }
                  int scalar6 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop401 = 0;
               int loopLimit401 = (rand()%10)/3 + 1;
               for(; loop401 < loopLimit401; loop401++) {
                  if(PATH1 & 16384) {
                     func19(rng());
                     if(PATH1 & 32768) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH1 & 65536) {
                        func22();
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop402 = 0;
                        int loopLimit402 = (rand()%10)/4 + 1;
                        for(; loop402 < loopLimit402; loop402++) {
                           if(PATH1 & 131072) {
                           }
                           else {
                           }
                        }
                        int loop403 = 0;
                        int loopLimit403 = (rand()%10)/4 + 1;
                        for(; loop403 < loopLimit403; loop403++) {
                           func24();
                        }
                        int scalar7 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop404 = 0;
               int loopLimit404 = (rand()%10)/3 + 1;
               for(; loop404 < loopLimit404; loop404++) {
                  func18(rng());
               }
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            if(PATH1 & 262144) {
               func13(rng());
               if(PATH1 & 524288) {
                  func19(rng());
                  if(PATH1 & 1048576) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar5 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop405 = 0;
                  int loopLimit405 = (rand()%10)/3 + 1;
                  for(; loop405 < loopLimit405; loop405++) {
                     if(PATH1 & 2097152) {
                        func22();
                     }
                     else {
                        if(PATH1 & 4194304) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar6--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop406 = 0;
                  int loopLimit406 = (rand()%10)/3 + 1;
                  for(; loop406 < loopLimit406; loop406++) {
                     func21(rng());
                  }
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop407 = 0;
               int loopLimit407 = (rand()%10)/3 + 1;
               for(; loop407 < loopLimit407; loop407++) {
                  if(PATH1 & 8388608) {
                     func16(rng());
                     if(PATH1 & 16777216) {
                        func22();
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop408 = 0;
                        int loopLimit408 = (rand()%10)/4 + 1;
                        for(; loop408 < loopLimit408; loop408++) {
                           if(PATH1 & 33554432) {
                           }
                           else {
                           }
                        }
                        int loop409 = 0;
                        int loopLimit409 = (rand()%10)/4 + 1;
                        for(; loop409 < loopLimit409; loop409++) {
                           func24();
                        }
                        int scalar7 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar7--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     if(PATH1 & 67108864) {
                        func19(rng());
                        if(PATH1 & 134217728) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop410 = 0;
                        int loopLimit410 = (rand()%10)/4 + 1;
                        for(; loop410 < loopLimit410; loop410++) {
                           if(PATH1 & 268435456) {
                              func22();
                           }
                           else {
                              if(PATH1 & 536870912) {
                              }
                              else {
                                 int scalar7 = 1;
                                 if (scalar7 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop411 = 0;
                        int loopLimit411 = (rand()%10)/4 + 1;
                        for(; loop411 < loopLimit411; loop411++) {
                           func21(rng());
                        }
                        int scalar7 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop412 = 0;
               int loopLimit412 = (rand()%10)/3 + 1;
               for(; loop412 < loopLimit412; loop412++) {
                  func15(rng());
               }
               int scalar6 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop413 = 0;
      int loopLimit413 = (rand()%10)/2 + 1;
      for(; loop413 < loopLimit413; loop413++) {
         func9(rng());
      }
   }
   else {
      if(PATH1 & 1073741824) {
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop414 = 0;
         int loopLimit414 = (rand()%10)/2 + 1;
         for(; loop414 < loopLimit414; loop414++) {
            if(PATH1 & -2147483648) {
               func13(rng());
               if(PATH1 & -2147483648) {
                  func19(rng());
                  if(PATH1 & -2147483648) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop415 = 0;
                  int loopLimit415 = (rand()%10)/3 + 1;
                  for(; loop415 < loopLimit415; loop415++) {
                     if(PATH1 & -2147483648) {
                        func22();
                     }
                     else {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop416 = 0;
                  int loopLimit416 = (rand()%10)/3 + 1;
                  for(; loop416 < loopLimit416; loop416++) {
                     func21(rng());
                  }
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH1 & -2147483648) {
                  func16(rng());
                  if(PATH1 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop417 = 0;
                     int loopLimit417 = (rand()%10)/3 + 1;
                     for(; loop417 < loopLimit417; loop417++) {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop418 = 0;
                     int loopLimit418 = (rand()%10)/3 + 1;
                     for(; loop418 < loopLimit418; loop418++) {
                        func24();
                     }
                     int scalar6 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop419 = 0;
                  int loopLimit419 = (rand()%10)/3 + 1;
                  for(; loop419 < loopLimit419; loop419++) {
                     if(PATH1 & -2147483648) {
                        func19(rng());
                        if(PATH1 & -2147483648) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH1 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop420 = 0;
                           int loopLimit420 = (rand()%10)/4 + 1;
                           for(; loop420 < loopLimit420; loop420++) {
                              if(PATH1 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop421 = 0;
                           int loopLimit421 = (rand()%10)/4 + 1;
                           for(; loop421 < loopLimit421; loop421++) {
                              func24();
                           }
                           int scalar7 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop422 = 0;
                  int loopLimit422 = (rand()%10)/3 + 1;
                  for(; loop422 < loopLimit422; loop422++) {
                     func18(rng());
                  }
                  int scalar6 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop423 = 0;
         int loopLimit423 = (rand()%10)/2 + 1;
         for(; loop423 < loopLimit423; loop423++) {
            func12(rng());
         }
      }
      else {
         int loop424 = 0;
         int loopLimit424 = (rand()%10)/2 + 1;
         for(; loop424 < loopLimit424; loop424++) {
            int scalar4 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop425 = 0;
            int loopLimit425 = (rand()%10)/3 + 1;
            for(; loop425 < loopLimit425; loop425++) {
               if(PATH1 & -2147483648) {
                  func13(rng());
                  if(PATH1 & -2147483648) {
                     func19(rng());
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop426 = 0;
                     int loopLimit426 = (rand()%10)/4 + 1;
                     for(; loop426 < loopLimit426; loop426++) {
                        if(PATH1 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH1 & -2147483648) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar6--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop427 = 0;
                     int loopLimit427 = (rand()%10)/4 + 1;
                     for(; loop427 < loopLimit427; loop427++) {
                        func21(rng());
                     }
                     int scalar6 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  if(PATH1 & -2147483648) {
                     func16(rng());
                     if(PATH1 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop428 = 0;
                        int loopLimit428 = (rand()%10)/4 + 1;
                        for(; loop428 < loopLimit428; loop428++) {
                           if(PATH1 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop429 = 0;
                        int loopLimit429 = (rand()%10)/4 + 1;
                        for(; loop429 < loopLimit429; loop429++) {
                           func24();
                        }
                        int scalar6 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop430 = 0;
                     int loopLimit430 = (rand()%10)/4 + 1;
                     for(; loop430 < loopLimit430; loop430++) {
                        if(PATH1 & -2147483648) {
                           func19(rng());
                           if(PATH1 & -2147483648) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           if(PATH1 & -2147483648) {
                              func22();
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop431 = 0;
                              int loopLimit431 = (rand()%10)/5 + 1;
                              for(; loop431 < loopLimit431; loop431++) {
                                 if(PATH1 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop432 = 0;
                              int loopLimit432 = (rand()%10)/5 + 1;
                              for(; loop432 < loopLimit432; loop432++) {
                                 func24();
                              }
                              int scalar7 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              scalar7--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                     }
                     int loop433 = 0;
                     int loopLimit433 = (rand()%10)/4 + 1;
                     for(; loop433 < loopLimit433; loop433++) {
                        func18(rng());
                     }
                     int scalar6 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
            }
            int loop434 = 0;
            int loopLimit434 = (rand()%10)/3 + 1;
            for(; loop434 < loopLimit434; loop434++) {
               func12(rng());
            }
         }
      }
      int scalar4 = 1;
      int scalar5 = 1;
      printf("DELETE!\n");
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func10(rng());
      if(PATH1 & -2147483648) {
         func16(rng());
         if(PATH1 & -2147483648) {
            func22();
         }
         else {
            int scalar6 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop435 = 0;
            int loopLimit435 = (rand()%10)/2 + 1;
            for(; loop435 < loopLimit435; loop435++) {
               if(PATH1 & -2147483648) {
               }
               else {
               }
            }
            int loop436 = 0;
            int loopLimit436 = (rand()%10)/2 + 1;
            for(; loop436 < loopLimit436; loop436++) {
               func24();
            }
            int scalar7 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar7--;
            printf("DELETE!\n");
         }
         func20(rng());
      }
      else {
         int scalar6 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop437 = 0;
         int loopLimit437 = (rand()%10)/2 + 1;
         for(; loop437 < loopLimit437; loop437++) {
            if(PATH1 & -2147483648) {
               func19(rng());
               if(PATH1 & -2147483648) {
               }
               else {
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               if(PATH1 & -2147483648) {
                  func22();
               }
               else {
                  int scalar7 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop438 = 0;
                  int loopLimit438 = (rand()%10)/3 + 1;
                  for(; loop438 < loopLimit438; loop438++) {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop439 = 0;
                  int loopLimit439 = (rand()%10)/3 + 1;
                  for(; loop439 < loopLimit439; loop439++) {
                     func24();
                  }
                  int scalar8 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
         }
         int loop440 = 0;
         int loopLimit440 = (rand()%10)/2 + 1;
         for(; loop440 < loopLimit440; loop440++) {
            func18(rng());
         }
         int scalar7 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func14(rng());
      if(PATH1 & -2147483648) {
         int scalar6 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop441 = 0;
         int loopLimit441 = (rand()%10)/2 + 1;
         for(; loop441 < loopLimit441; loop441++) {
            if(PATH1 & -2147483648) {
               func13(rng());
               if(PATH2 & 1) {
                  func19(rng());
                  if(PATH2 & 2) {
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar7 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop442 = 0;
                  int loopLimit442 = (rand()%10)/3 + 1;
                  for(; loop442 < loopLimit442; loop442++) {
                     if(PATH2 & 4) {
                        func22();
                     }
                     else {
                        if(PATH2 & 8) {
                        }
                        else {
                           int scalar8 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop443 = 0;
                  int loopLimit443 = (rand()%10)/3 + 1;
                  for(; loop443 < loopLimit443; loop443++) {
                     func21(rng());
                  }
                  int scalar8 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH2 & 16) {
                  func16(rng());
                  if(PATH2 & 32) {
                     func22();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop444 = 0;
                     int loopLimit444 = (rand()%10)/3 + 1;
                     for(; loop444 < loopLimit444; loop444++) {
                        if(PATH2 & 64) {
                        }
                        else {
                        }
                     }
                     int loop445 = 0;
                     int loopLimit445 = (rand()%10)/3 + 1;
                     for(; loop445 < loopLimit445; loop445++) {
                        func24();
                     }
                     int scalar8 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar8--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop446 = 0;
                  int loopLimit446 = (rand()%10)/3 + 1;
                  for(; loop446 < loopLimit446; loop446++) {
                     if(PATH2 & 128) {
                        func19(rng());
                        if(PATH2 & 256) {
                        }
                        else {
                           int scalar8 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar8--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH2 & 512) {
                           func22();
                        }
                        else {
                           int scalar8 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop447 = 0;
                           int loopLimit447 = (rand()%10)/4 + 1;
                           for(; loop447 < loopLimit447; loop447++) {
                              if(PATH2 & 1024) {
                              }
                              else {
                              }
                           }
                           int loop448 = 0;
                           int loopLimit448 = (rand()%10)/4 + 1;
                           for(; loop448 < loopLimit448; loop448++) {
                              func24();
                           }
                           int scalar9 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop449 = 0;
                  int loopLimit449 = (rand()%10)/3 + 1;
                  for(; loop449 < loopLimit449; loop449++) {
                     func18(rng());
                  }
                  int scalar8 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop450 = 0;
         int loopLimit450 = (rand()%10)/2 + 1;
         for(; loop450 < loopLimit450; loop450++) {
            func12(rng());
         }
      }
      else {
         if(PATH2 & 2048) {
            int scalar6 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop451 = 0;
            int loopLimit451 = (rand()%10)/2 + 1;
            for(; loop451 < loopLimit451; loop451++) {
               if(PATH2 & 4096) {
                  func16(rng());
                  if(PATH2 & 8192) {
                     func22();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop452 = 0;
                     int loopLimit452 = (rand()%10)/3 + 1;
                     for(; loop452 < loopLimit452; loop452++) {
                        if(PATH2 & 16384) {
                        }
                        else {
                        }
                     }
                     int loop453 = 0;
                     int loopLimit453 = (rand()%10)/3 + 1;
                     for(; loop453 < loopLimit453; loop453++) {
                        func24();
                     }
                     int scalar8 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  if(PATH2 & 32768) {
                     func19(rng());
                     if(PATH2 & 65536) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop454 = 0;
                     int loopLimit454 = (rand()%10)/3 + 1;
                     for(; loop454 < loopLimit454; loop454++) {
                        if(PATH2 & 131072) {
                           func22();
                        }
                        else {
                           if(PATH2 & 262144) {
                           }
                           else {
                              int scalar8 = 1;
                              if (scalar7 == 0) {
                                 printf("IS 0!");
                              }
                              scalar5--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop455 = 0;
                     int loopLimit455 = (rand()%10)/3 + 1;
                     for(; loop455 < loopLimit455; loop455++) {
                        func21(rng());
                     }
                     int scalar8 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop456 = 0;
            int loopLimit456 = (rand()%10)/2 + 1;
            for(; loop456 < loopLimit456; loop456++) {
               func15(rng());
            }
         }
         else {
            int loop457 = 0;
            int loopLimit457 = (rand()%10)/2 + 1;
            for(; loop457 < loopLimit457; loop457++) {
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop458 = 0;
               int loopLimit458 = (rand()%10)/3 + 1;
               for(; loop458 < loopLimit458; loop458++) {
                  if(PATH2 & 524288) {
                     func16(rng());
                     if(PATH2 & 1048576) {
                        func22();
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop459 = 0;
                        int loopLimit459 = (rand()%10)/4 + 1;
                        for(; loop459 < loopLimit459; loop459++) {
                           if(PATH2 & 2097152) {
                           }
                           else {
                           }
                        }
                        int loop460 = 0;
                        int loopLimit460 = (rand()%10)/4 + 1;
                        for(; loop460 < loopLimit460; loop460++) {
                           func24();
                        }
                        int scalar8 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     if(PATH2 & 4194304) {
                        func19(rng());
                        if(PATH2 & 8388608) {
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop461 = 0;
                        int loopLimit461 = (rand()%10)/4 + 1;
                        for(; loop461 < loopLimit461; loop461++) {
                           if(PATH2 & 16777216) {
                              func22();
                           }
                           else {
                              if(PATH2 & 33554432) {
                              }
                              else {
                                 int scalar8 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop462 = 0;
                        int loopLimit462 = (rand()%10)/4 + 1;
                        for(; loop462 < loopLimit462; loop462++) {
                           func21(rng());
                        }
                        int scalar8 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar7--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop463 = 0;
               int loopLimit463 = (rand()%10)/3 + 1;
               for(; loop463 < loopLimit463; loop463++) {
                  func15(rng());
               }
            }
         }
         int scalar6 = 1;
         int scalar7 = 1;
         printf("DELETE!\n");
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func13(rng());
         if(PATH2 & 67108864) {
            func19(rng());
            if(PATH2 & 134217728) {
            }
            else {
               int scalar8 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar7--;
               printf("DELETE!\n");
            }
            func23();
         }
         else {
            int scalar8 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop464 = 0;
            int loopLimit464 = (rand()%10)/2 + 1;
            for(; loop464 < loopLimit464; loop464++) {
               if(PATH2 & 268435456) {
                  func22();
               }
               else {
                  if(PATH2 & 536870912) {
                  }
                  else {
                     int scalar9 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar9--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
            }
            int loop465 = 0;
            int loopLimit465 = (rand()%10)/2 + 1;
            for(; loop465 < loopLimit465; loop465++) {
               func21(rng());
            }
            int scalar9 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func17(rng());
         if(PATH2 & 1073741824) {
            int scalar8 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop466 = 0;
            int loopLimit466 = (rand()%10)/2 + 1;
            for(; loop466 < loopLimit466; loop466++) {
               if(PATH2 & -2147483648) {
                  func16(rng());
                  if(PATH2 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar9 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop467 = 0;
                     int loopLimit467 = (rand()%10)/3 + 1;
                     for(; loop467 < loopLimit467; loop467++) {
                        if(PATH2 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop468 = 0;
                     int loopLimit468 = (rand()%10)/3 + 1;
                     for(; loop468 < loopLimit468; loop468++) {
                        func24();
                     }
                     int scalar10 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  if(PATH2 & -2147483648) {
                     func19(rng());
                     if(PATH2 & -2147483648) {
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar9 = 1;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop469 = 0;
                     int loopLimit469 = (rand()%10)/3 + 1;
                     for(; loop469 < loopLimit469; loop469++) {
                        if(PATH2 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH2 & -2147483648) {
                           }
                           else {
                              int scalar10 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              scalar9--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop470 = 0;
                     int loopLimit470 = (rand()%10)/3 + 1;
                     for(; loop470 < loopLimit470; loop470++) {
                        func21(rng());
                     }
                     int scalar10 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop471 = 0;
            int loopLimit471 = (rand()%10)/2 + 1;
            for(; loop471 < loopLimit471; loop471++) {
               func15(rng());
            }
         }
         else {
            if(PATH2 & -2147483648) {
               int scalar8 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop472 = 0;
               int loopLimit472 = (rand()%10)/2 + 1;
               for(; loop472 < loopLimit472; loop472++) {
                  if(PATH2 & -2147483648) {
                     func19(rng());
                     if(PATH2 & -2147483648) {
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH2 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop473 = 0;
                        int loopLimit473 = (rand()%10)/3 + 1;
                        for(; loop473 < loopLimit473; loop473++) {
                           if(PATH2 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop474 = 0;
                        int loopLimit474 = (rand()%10)/3 + 1;
                        for(; loop474 < loopLimit474; loop474++) {
                           func24();
                        }
                        int scalar10 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop475 = 0;
               int loopLimit475 = (rand()%10)/2 + 1;
               for(; loop475 < loopLimit475; loop475++) {
                  func18(rng());
               }
            }
            else {
               int loop476 = 0;
               int loopLimit476 = (rand()%10)/2 + 1;
               for(; loop476 < loopLimit476; loop476++) {
                  int scalar8 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop477 = 0;
                  int loopLimit477 = (rand()%10)/3 + 1;
                  for(; loop477 < loopLimit477; loop477++) {
                     if(PATH2 & -2147483648) {
                        func19(rng());
                        if(PATH2 & -2147483648) {
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH2 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop478 = 0;
                           int loopLimit478 = (rand()%10)/4 + 1;
                           for(; loop478 < loopLimit478; loop478++) {
                              if(PATH2 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop479 = 0;
                           int loopLimit479 = (rand()%10)/4 + 1;
                           for(; loop479 < loopLimit479; loop479++) {
                              func24();
                           }
                           int scalar10 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop480 = 0;
                  int loopLimit480 = (rand()%10)/3 + 1;
                  for(; loop480 < loopLimit480; loop480++) {
                     func18(rng());
                  }
               }
            }
            int scalar8 = 1;
            int scalar9 = 1;
            printf("DELETE!\n");
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            func16(rng());
            if(PATH2 & -2147483648) {
               func22();
            }
            else {
               int scalar10 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop481 = 0;
               int loopLimit481 = (rand()%10)/2 + 1;
               for(; loop481 < loopLimit481; loop481++) {
                  if(PATH2 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop482 = 0;
               int loopLimit482 = (rand()%10)/2 + 1;
               for(; loop482 < loopLimit482; loop482++) {
                  func24();
               }
               int scalar11 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar7--;
               printf("DELETE!\n");
            }
            func20(rng());
            if(PATH2 & -2147483648) {
               int scalar10 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop483 = 0;
               int loopLimit483 = (rand()%10)/2 + 1;
               for(; loop483 < loopLimit483; loop483++) {
                  if(PATH2 & -2147483648) {
                     func19(rng());
                     if(PATH2 & -2147483648) {
                     }
                     else {
                        int scalar11 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH2 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar11 = 1;
                        if (scalar9 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop484 = 0;
                        int loopLimit484 = (rand()%10)/3 + 1;
                        for(; loop484 < loopLimit484; loop484++) {
                           if(PATH2 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop485 = 0;
                        int loopLimit485 = (rand()%10)/3 + 1;
                        for(; loop485 < loopLimit485; loop485++) {
                           func24();
                        }
                        int scalar12 = 1;
                        if (scalar11 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop486 = 0;
               int loopLimit486 = (rand()%10)/2 + 1;
               for(; loop486 < loopLimit486; loop486++) {
                  func18(rng());
               }
            }
            else {
               if(PATH2 & -2147483648) {
                  int scalar10 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop487 = 0;
                  int loopLimit487 = (rand()%10)/2 + 1;
                  for(; loop487 < loopLimit487; loop487++) {
                     if(PATH2 & -2147483648) {
                        func22();
                     }
                     else {
                        if(PATH2 & -2147483648) {
                        }
                        else {
                           int scalar11 = 1;
                           if (scalar9 == 0) {
                              printf("IS 0!");
                           }
                           scalar10--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop488 = 0;
                  int loopLimit488 = (rand()%10)/2 + 1;
                  for(; loop488 < loopLimit488; loop488++) {
                     func21(rng());
                  }
               }
               else {
                  int loop489 = 0;
                  int loopLimit489 = (rand()%10)/2 + 1;
                  for(; loop489 < loopLimit489; loop489++) {
                     int scalar10 = 1;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop490 = 0;
                     int loopLimit490 = (rand()%10)/3 + 1;
                     for(; loop490 < loopLimit490; loop490++) {
                        if(PATH2 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH2 & -2147483648) {
                           }
                           else {
                              int scalar11 = 1;
                              if (scalar7 == 0) {
                                 printf("IS 0!");
                              }
                              scalar11--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop491 = 0;
                     int loopLimit491 = (rand()%10)/3 + 1;
                     for(; loop491 < loopLimit491; loop491++) {
                        func21(rng());
                     }
                  }
               }
               int scalar10 = 1;
               int scalar11 = 1;
               printf("DELETE!\n");
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               func19(rng());
               if(PATH2 & -2147483648) {
               }
               else {
                  int scalar12 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func23();
               if(PATH2 & -2147483648) {
                  int scalar12 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop492 = 0;
                  int loopLimit492 = (rand()%10)/2 + 1;
                  for(; loop492 < loopLimit492; loop492++) {
                     if(PATH2 & -2147483648) {
                        func22();
                     }
                     else {
                        if(PATH2 & -2147483648) {
                        }
                        else {
                           int scalar13 = 1;
                           if (scalar12 == 0) {
                              printf("IS 0!");
                           }
                           scalar7--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop493 = 0;
                  int loopLimit493 = (rand()%10)/2 + 1;
                  for(; loop493 < loopLimit493; loop493++) {
                     func21(rng());
                  }
               }
               else {
                  if(PATH2 & -2147483648) {
                     int scalar12 = 1;
                     if (scalar11 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop494 = 0;
                     int loopLimit494 = (rand()%10)/2 + 1;
                     for(; loop494 < loopLimit494; loop494++) {
                        if(PATH3 & 1) {
                        }
                        else {
                        }
                     }
                     int loop495 = 0;
                     int loopLimit495 = (rand()%10)/2 + 1;
                     for(; loop495 < loopLimit495; loop495++) {
                        func24();
                     }
                  }
                  else {
                     int loop496 = 0;
                     int loopLimit496 = (rand()%10)/2 + 1;
                     for(; loop496 < loopLimit496; loop496++) {
                        int scalar12 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop497 = 0;
                        int loopLimit497 = (rand()%10)/3 + 1;
                        for(; loop497 < loopLimit497; loop497++) {
                           if(PATH3 & 2) {
                           }
                           else {
                           }
                        }
                        int loop498 = 0;
                        int loopLimit498 = (rand()%10)/3 + 1;
                        for(; loop498 < loopLimit498; loop498++) {
                           func24();
                        }
                     }
                  }
                  int scalar12 = 1;
                  int scalar13 = 1;
                  printf("DELETE!\n");
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  func22();
                  if(PATH3 & 4) {
                     int scalar14 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop499 = 0;
                     int loopLimit499 = (rand()%10)/2 + 1;
                     for(; loop499 < loopLimit499; loop499++) {
                        if(PATH3 & 8) {
                        }
                        else {
                        }
                     }
                     int loop500 = 0;
                     int loopLimit500 = (rand()%10)/2 + 1;
                     for(; loop500 < loopLimit500; loop500++) {
                        func24();
                     }
                  }
                  else {
                     if(PATH3 & 16) {
                     }
                     else {
                        int loop501 = 0;
                        int loopLimit501 = (rand()%10)/2 + 1;
                        for(; loop501 < loopLimit501; loop501++) {
                        }
                     }
                     int scalar14 = 1;
                     int scalar15 = 1;
                     printf("DELETE!\n");
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     if(PATH3 & 32) {
                     }
                     else {
                     }
                  }
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0, const unsigned long PATH1) {
   int scalar2 = 1;
   func7(rng(), rng());
   if(PATH0 & 1) {
      func13(rng());
      if(PATH0 & 2) {
         func19(rng());
         if(PATH0 & 4) {
         }
         else {
            int scalar3 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func23();
      }
      else {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop148 = 0;
         int loopLimit148 = (rand()%10)/2 + 1;
         for(; loop148 < loopLimit148; loop148++) {
            if(PATH0 & 8) {
               func22();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
         }
         int loop149 = 0;
         int loopLimit149 = (rand()%10)/2 + 1;
         for(; loop149 < loopLimit149; loop149++) {
            func21(rng());
         }
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func17(rng());
   }
   else {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop150 = 0;
      int loopLimit150 = (rand()%10)/2 + 1;
      for(; loop150 < loopLimit150; loop150++) {
         if(PATH0 & 32) {
            func16(rng());
            if(PATH0 & 64) {
               func22();
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop151 = 0;
               int loopLimit151 = (rand()%10)/3 + 1;
               for(; loop151 < loopLimit151; loop151++) {
                  if(PATH0 & 128) {
                  }
                  else {
                  }
               }
               int loop152 = 0;
               int loopLimit152 = (rand()%10)/3 + 1;
               for(; loop152 < loopLimit152; loop152++) {
                  func24();
               }
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
         else {
            if(PATH0 & 256) {
               func19(rng());
               if(PATH0 & 512) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop153 = 0;
               int loopLimit153 = (rand()%10)/3 + 1;
               for(; loop153 < loopLimit153; loop153++) {
                  if(PATH0 & 1024) {
                     func22();
                  }
                  else {
                     if(PATH0 & 2048) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop154 = 0;
               int loopLimit154 = (rand()%10)/3 + 1;
               for(; loop154 < loopLimit154; loop154++) {
                  func21(rng());
               }
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop155 = 0;
      int loopLimit155 = (rand()%10)/2 + 1;
      for(; loop155 < loopLimit155; loop155++) {
         func15(rng());
      }
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   func11(rng());
   scalar2++;
   scalar2++;
   if(PATH0 & 4096) {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop186 = 0;
      int loopLimit186 = (rand()%10)/2 + 1;
      for(; loop186 < loopLimit186; loop186++) {
         if(PATH0 & 8192) {
            func13(rng());
            if(PATH0 & 16384) {
               func19(rng());
               if(PATH0 & 32768) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop187 = 0;
               int loopLimit187 = (rand()%10)/3 + 1;
               for(; loop187 < loopLimit187; loop187++) {
                  if(PATH0 & 65536) {
                     func22();
                  }
                  else {
                     if(PATH0 & 131072) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop188 = 0;
               int loopLimit188 = (rand()%10)/3 + 1;
               for(; loop188 < loopLimit188; loop188++) {
                  func21(rng());
               }
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            if(PATH0 & 262144) {
               func16(rng());
               if(PATH0 & 524288) {
                  func22();
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop189 = 0;
                  int loopLimit189 = (rand()%10)/3 + 1;
                  for(; loop189 < loopLimit189; loop189++) {
                     if(PATH0 & 1048576) {
                     }
                     else {
                     }
                  }
                  int loop190 = 0;
                  int loopLimit190 = (rand()%10)/3 + 1;
                  for(; loop190 < loopLimit190; loop190++) {
                     func24();
                  }
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop191 = 0;
               int loopLimit191 = (rand()%10)/3 + 1;
               for(; loop191 < loopLimit191; loop191++) {
                  if(PATH0 & 2097152) {
                     func19(rng());
                     if(PATH0 & 4194304) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH0 & 8388608) {
                        func22();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop192 = 0;
                        int loopLimit192 = (rand()%10)/4 + 1;
                        for(; loop192 < loopLimit192; loop192++) {
                           if(PATH0 & 16777216) {
                           }
                           else {
                           }
                        }
                        int loop193 = 0;
                        int loopLimit193 = (rand()%10)/4 + 1;
                        for(; loop193 < loopLimit193; loop193++) {
                           func24();
                        }
                        int scalar6 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop194 = 0;
               int loopLimit194 = (rand()%10)/3 + 1;
               for(; loop194 < loopLimit194; loop194++) {
                  func18(rng());
               }
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop195 = 0;
      int loopLimit195 = (rand()%10)/2 + 1;
      for(; loop195 < loopLimit195; loop195++) {
         func12(rng());
      }
   }
   else {
      int loop202 = 0;
      int loopLimit202 = (rand()%10)/2 + 1;
      for(; loop202 < loopLimit202; loop202++) {
         int scalar3 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop203 = 0;
         int loopLimit203 = (rand()%10)/3 + 1;
         for(; loop203 < loopLimit203; loop203++) {
            if(PATH0 & 33554432) {
               func13(rng());
               if(PATH0 & 67108864) {
                  func19(rng());
                  if(PATH0 & 134217728) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop204 = 0;
                  int loopLimit204 = (rand()%10)/4 + 1;
                  for(; loop204 < loopLimit204; loop204++) {
                     if(PATH0 & 268435456) {
                        func22();
                     }
                     else {
                        if(PATH0 & 536870912) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop205 = 0;
                  int loopLimit205 = (rand()%10)/4 + 1;
                  for(; loop205 < loopLimit205; loop205++) {
                     func21(rng());
                  }
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH0 & 1073741824) {
                  func16(rng());
                  if(PATH0 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop206 = 0;
                     int loopLimit206 = (rand()%10)/4 + 1;
                     for(; loop206 < loopLimit206; loop206++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop207 = 0;
                     int loopLimit207 = (rand()%10)/4 + 1;
                     for(; loop207 < loopLimit207; loop207++) {
                        func24();
                     }
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop208 = 0;
                  int loopLimit208 = (rand()%10)/4 + 1;
                  for(; loop208 < loopLimit208; loop208++) {
                     if(PATH0 & -2147483648) {
                        func19(rng());
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH0 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop209 = 0;
                           int loopLimit209 = (rand()%10)/5 + 1;
                           for(; loop209 < loopLimit209; loop209++) {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop210 = 0;
                           int loopLimit210 = (rand()%10)/5 + 1;
                           for(; loop210 < loopLimit210; loop210++) {
                              func24();
                           }
                           int scalar6 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop211 = 0;
                  int loopLimit211 = (rand()%10)/4 + 1;
                  for(; loop211 < loopLimit211; loop211++) {
                     func18(rng());
                  }
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop212 = 0;
         int loopLimit212 = (rand()%10)/3 + 1;
         for(; loop212 < loopLimit212; loop212++) {
            func12(rng());
         }
      }
   }
   int scalar3 = 1;
   int scalar4 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func10(rng());
   if(PATH0 & -2147483648) {
      func16(rng());
      if(PATH0 & -2147483648) {
         func22();
      }
      else {
         int scalar5 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop213 = 0;
         int loopLimit213 = (rand()%10)/2 + 1;
         for(; loop213 < loopLimit213; loop213++) {
            if(PATH0 & -2147483648) {
            }
            else {
            }
         }
         int loop214 = 0;
         int loopLimit214 = (rand()%10)/2 + 1;
         for(; loop214 < loopLimit214; loop214++) {
            func24();
         }
         int scalar6 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func20(rng());
   }
   else {
      int scalar5 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop215 = 0;
      int loopLimit215 = (rand()%10)/2 + 1;
      for(; loop215 < loopLimit215; loop215++) {
         if(PATH0 & -2147483648) {
            func19(rng());
            if(PATH0 & -2147483648) {
            }
            else {
               int scalar6 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               printf("DELETE!\n");
            }
            func23();
         }
         else {
            if(PATH0 & -2147483648) {
               func22();
            }
            else {
               int scalar6 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop216 = 0;
               int loopLimit216 = (rand()%10)/3 + 1;
               for(; loop216 < loopLimit216; loop216++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop217 = 0;
               int loopLimit217 = (rand()%10)/3 + 1;
               for(; loop217 < loopLimit217; loop217++) {
                  func24();
               }
               int scalar7 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
      }
      int loop218 = 0;
      int loopLimit218 = (rand()%10)/2 + 1;
      for(; loop218 < loopLimit218; loop218++) {
         func18(rng());
      }
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   func14(rng());
   if(PATH0 & -2147483648) {
      int scalar5 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop219 = 0;
      int loopLimit219 = (rand()%10)/2 + 1;
      for(; loop219 < loopLimit219; loop219++) {
         if(PATH0 & -2147483648) {
            func13(rng());
            if(PATH0 & -2147483648) {
               func19(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop220 = 0;
               int loopLimit220 = (rand()%10)/3 + 1;
               for(; loop220 < loopLimit220; loop220++) {
                  if(PATH0 & -2147483648) {
                     func22();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop221 = 0;
               int loopLimit221 = (rand()%10)/3 + 1;
               for(; loop221 < loopLimit221; loop221++) {
                  func21(rng());
               }
               int scalar7 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            if(PATH0 & -2147483648) {
               func16(rng());
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  int scalar6 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop222 = 0;
                  int loopLimit222 = (rand()%10)/3 + 1;
                  for(; loop222 < loopLimit222; loop222++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop223 = 0;
                  int loopLimit223 = (rand()%10)/3 + 1;
                  for(; loop223 < loopLimit223; loop223++) {
                     func24();
                  }
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar6 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop224 = 0;
               int loopLimit224 = (rand()%10)/3 + 1;
               for(; loop224 < loopLimit224; loop224++) {
                  if(PATH0 & -2147483648) {
                     func19(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop225 = 0;
                        int loopLimit225 = (rand()%10)/4 + 1;
                        for(; loop225 < loopLimit225; loop225++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop226 = 0;
                        int loopLimit226 = (rand()%10)/4 + 1;
                        for(; loop226 < loopLimit226; loop226++) {
                           func24();
                        }
                        int scalar8 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar7--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop227 = 0;
               int loopLimit227 = (rand()%10)/3 + 1;
               for(; loop227 < loopLimit227; loop227++) {
                  func18(rng());
               }
               int scalar7 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop228 = 0;
      int loopLimit228 = (rand()%10)/2 + 1;
      for(; loop228 < loopLimit228; loop228++) {
         func12(rng());
      }
   }
   else {
      if(PATH0 & -2147483648) {
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop229 = 0;
         int loopLimit229 = (rand()%10)/2 + 1;
         for(; loop229 < loopLimit229; loop229++) {
            if(PATH0 & -2147483648) {
               func16(rng());
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  int scalar6 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop230 = 0;
                  int loopLimit230 = (rand()%10)/3 + 1;
                  for(; loop230 < loopLimit230; loop230++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop231 = 0;
                  int loopLimit231 = (rand()%10)/3 + 1;
                  for(; loop231 < loopLimit231; loop231++) {
                     func24();
                  }
                  int scalar7 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               if(PATH0 & -2147483648) {
                  func19(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop232 = 0;
                  int loopLimit232 = (rand()%10)/3 + 1;
                  for(; loop232 < loopLimit232; loop232++) {
                     if(PATH0 & -2147483648) {
                        func22();
                     }
                     else {
                        if(PATH1 & 1) {
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar7--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop233 = 0;
                  int loopLimit233 = (rand()%10)/3 + 1;
                  for(; loop233 < loopLimit233; loop233++) {
                     func21(rng());
                  }
                  int scalar7 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop234 = 0;
         int loopLimit234 = (rand()%10)/2 + 1;
         for(; loop234 < loopLimit234; loop234++) {
            func15(rng());
         }
      }
      else {
         int loop235 = 0;
         int loopLimit235 = (rand()%10)/2 + 1;
         for(; loop235 < loopLimit235; loop235++) {
            int scalar5 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop236 = 0;
            int loopLimit236 = (rand()%10)/3 + 1;
            for(; loop236 < loopLimit236; loop236++) {
               if(PATH1 & 2) {
                  func16(rng());
                  if(PATH1 & 4) {
                     func22();
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop237 = 0;
                     int loopLimit237 = (rand()%10)/4 + 1;
                     for(; loop237 < loopLimit237; loop237++) {
                        if(PATH1 & 8) {
                        }
                        else {
                        }
                     }
                     int loop238 = 0;
                     int loopLimit238 = (rand()%10)/4 + 1;
                     for(; loop238 < loopLimit238; loop238++) {
                        func24();
                     }
                     int scalar7 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  if(PATH1 & 16) {
                     func19(rng());
                     if(PATH1 & 32) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop239 = 0;
                     int loopLimit239 = (rand()%10)/4 + 1;
                     for(; loop239 < loopLimit239; loop239++) {
                        if(PATH1 & 64) {
                           func22();
                        }
                        else {
                           if(PATH1 & 128) {
                           }
                           else {
                              int scalar7 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop240 = 0;
                     int loopLimit240 = (rand()%10)/4 + 1;
                     for(; loop240 < loopLimit240; loop240++) {
                        func21(rng());
                     }
                     int scalar7 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar7--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop241 = 0;
            int loopLimit241 = (rand()%10)/3 + 1;
            for(; loop241 < loopLimit241; loop241++) {
               func15(rng());
            }
         }
      }
      int scalar5 = 1;
      int scalar6 = 1;
      printf("DELETE!\n");
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      func13(rng());
      if(PATH1 & 256) {
         func19(rng());
         if(PATH1 & 512) {
         }
         else {
            int scalar7 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func23();
      }
      else {
         int scalar7 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop242 = 0;
         int loopLimit242 = (rand()%10)/2 + 1;
         for(; loop242 < loopLimit242; loop242++) {
            if(PATH1 & 1024) {
               func22();
            }
            else {
               if(PATH1 & 2048) {
               }
               else {
                  int scalar8 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
         }
         int loop243 = 0;
         int loopLimit243 = (rand()%10)/2 + 1;
         for(; loop243 < loopLimit243; loop243++) {
            func21(rng());
         }
         int scalar8 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         scalar6--;
         printf("DELETE!\n");
      }
      func17(rng());
      if(PATH1 & 4096) {
         int scalar7 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop244 = 0;
         int loopLimit244 = (rand()%10)/2 + 1;
         for(; loop244 < loopLimit244; loop244++) {
            if(PATH1 & 8192) {
               func16(rng());
               if(PATH1 & 16384) {
                  func22();
               }
               else {
                  int scalar8 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop245 = 0;
                  int loopLimit245 = (rand()%10)/3 + 1;
                  for(; loop245 < loopLimit245; loop245++) {
                     if(PATH1 & 32768) {
                     }
                     else {
                     }
                  }
                  int loop246 = 0;
                  int loopLimit246 = (rand()%10)/3 + 1;
                  for(; loop246 < loopLimit246; loop246++) {
                     func24();
                  }
                  int scalar9 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  scalar7--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               if(PATH1 & 65536) {
                  func19(rng());
                  if(PATH1 & 131072) {
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar8--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar8 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop247 = 0;
                  int loopLimit247 = (rand()%10)/3 + 1;
                  for(; loop247 < loopLimit247; loop247++) {
                     if(PATH1 & 262144) {
                        func22();
                     }
                     else {
                        if(PATH1 & 524288) {
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop248 = 0;
                  int loopLimit248 = (rand()%10)/3 + 1;
                  for(; loop248 < loopLimit248; loop248++) {
                     func21(rng());
                  }
                  int scalar9 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop249 = 0;
         int loopLimit249 = (rand()%10)/2 + 1;
         for(; loop249 < loopLimit249; loop249++) {
            func15(rng());
         }
      }
      else {
         if(PATH1 & 1048576) {
            int scalar7 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop250 = 0;
            int loopLimit250 = (rand()%10)/2 + 1;
            for(; loop250 < loopLimit250; loop250++) {
               if(PATH1 & 2097152) {
                  func19(rng());
                  if(PATH1 & 4194304) {
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  if(PATH1 & 8388608) {
                     func22();
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop251 = 0;
                     int loopLimit251 = (rand()%10)/3 + 1;
                     for(; loop251 < loopLimit251; loop251++) {
                        if(PATH1 & 16777216) {
                        }
                        else {
                        }
                     }
                     int loop252 = 0;
                     int loopLimit252 = (rand()%10)/3 + 1;
                     for(; loop252 < loopLimit252; loop252++) {
                        func24();
                     }
                     int scalar9 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar7--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
            }
            int loop253 = 0;
            int loopLimit253 = (rand()%10)/2 + 1;
            for(; loop253 < loopLimit253; loop253++) {
               func18(rng());
            }
         }
         else {
            int loop254 = 0;
            int loopLimit254 = (rand()%10)/2 + 1;
            for(; loop254 < loopLimit254; loop254++) {
               int scalar7 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop255 = 0;
               int loopLimit255 = (rand()%10)/3 + 1;
               for(; loop255 < loopLimit255; loop255++) {
                  if(PATH1 & 33554432) {
                     func19(rng());
                     if(PATH1 & 67108864) {
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH1 & 134217728) {
                        func22();
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop256 = 0;
                        int loopLimit256 = (rand()%10)/4 + 1;
                        for(; loop256 < loopLimit256; loop256++) {
                           if(PATH1 & 268435456) {
                           }
                           else {
                           }
                        }
                        int loop257 = 0;
                        int loopLimit257 = (rand()%10)/4 + 1;
                        for(; loop257 < loopLimit257; loop257++) {
                           func24();
                        }
                        int scalar9 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop258 = 0;
               int loopLimit258 = (rand()%10)/3 + 1;
               for(; loop258 < loopLimit258; loop258++) {
                  func18(rng());
               }
            }
         }
         int scalar7 = 1;
         int scalar8 = 1;
         printf("DELETE!\n");
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func16(rng());
         if(PATH1 & 536870912) {
            func22();
         }
         else {
            int scalar9 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop259 = 0;
            int loopLimit259 = (rand()%10)/2 + 1;
            for(; loop259 < loopLimit259; loop259++) {
               if(PATH1 & 1073741824) {
               }
               else {
               }
            }
            int loop260 = 0;
            int loopLimit260 = (rand()%10)/2 + 1;
            for(; loop260 < loopLimit260; loop260++) {
               func24();
            }
            int scalar10 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            printf("DELETE!\n");
         }
         func20(rng());
         if(PATH1 & -2147483648) {
            int scalar9 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop261 = 0;
            int loopLimit261 = (rand()%10)/2 + 1;
            for(; loop261 < loopLimit261; loop261++) {
               if(PATH1 & -2147483648) {
                  func19(rng());
                  if(PATH1 & -2147483648) {
                  }
                  else {
                     int scalar10 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar8--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  if(PATH1 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar10 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop262 = 0;
                     int loopLimit262 = (rand()%10)/3 + 1;
                     for(; loop262 < loopLimit262; loop262++) {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop263 = 0;
                     int loopLimit263 = (rand()%10)/3 + 1;
                     for(; loop263 < loopLimit263; loop263++) {
                        func24();
                     }
                     int scalar11 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar10--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
            }
            int loop264 = 0;
            int loopLimit264 = (rand()%10)/2 + 1;
            for(; loop264 < loopLimit264; loop264++) {
               func18(rng());
            }
         }
         else {
            if(PATH1 & -2147483648) {
               int scalar9 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop265 = 0;
               int loopLimit265 = (rand()%10)/2 + 1;
               for(; loop265 < loopLimit265; loop265++) {
                  if(PATH1 & -2147483648) {
                     func22();
                  }
                  else {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar10 = 1;
                        if (scalar8 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop266 = 0;
               int loopLimit266 = (rand()%10)/2 + 1;
               for(; loop266 < loopLimit266; loop266++) {
                  func21(rng());
               }
            }
            else {
               int loop267 = 0;
               int loopLimit267 = (rand()%10)/2 + 1;
               for(; loop267 < loopLimit267; loop267++) {
                  int scalar9 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop268 = 0;
                  int loopLimit268 = (rand()%10)/3 + 1;
                  for(; loop268 < loopLimit268; loop268++) {
                     if(PATH1 & -2147483648) {
                        func22();
                     }
                     else {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                           int scalar10 = 1;
                           if (scalar10 == 0) {
                              printf("IS 0!");
                           }
                           scalar8--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop269 = 0;
                  int loopLimit269 = (rand()%10)/3 + 1;
                  for(; loop269 < loopLimit269; loop269++) {
                     func21(rng());
                  }
               }
            }
            int scalar9 = 1;
            int scalar10 = 1;
            printf("DELETE!\n");
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            func19(rng());
            if(PATH1 & -2147483648) {
            }
            else {
               int scalar11 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               scalar10--;
               printf("DELETE!\n");
            }
            func23();
            if(PATH1 & -2147483648) {
               int scalar11 = 1;
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop270 = 0;
               int loopLimit270 = (rand()%10)/2 + 1;
               for(; loop270 < loopLimit270; loop270++) {
                  if(PATH1 & -2147483648) {
                     func22();
                  }
                  else {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar12 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar9--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop271 = 0;
               int loopLimit271 = (rand()%10)/2 + 1;
               for(; loop271 < loopLimit271; loop271++) {
                  func21(rng());
               }
            }
            else {
               if(PATH1 & -2147483648) {
                  int scalar11 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop272 = 0;
                  int loopLimit272 = (rand()%10)/2 + 1;
                  for(; loop272 < loopLimit272; loop272++) {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop273 = 0;
                  int loopLimit273 = (rand()%10)/2 + 1;
                  for(; loop273 < loopLimit273; loop273++) {
                     func24();
                  }
               }
               else {
                  int loop274 = 0;
                  int loopLimit274 = (rand()%10)/2 + 1;
                  for(; loop274 < loopLimit274; loop274++) {
                     int scalar11 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop275 = 0;
                     int loopLimit275 = (rand()%10)/3 + 1;
                     for(; loop275 < loopLimit275; loop275++) {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop276 = 0;
                     int loopLimit276 = (rand()%10)/3 + 1;
                     for(; loop276 < loopLimit276; loop276++) {
                        func24();
                     }
                  }
               }
               int scalar11 = 1;
               int scalar12 = 1;
               printf("DELETE!\n");
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
               func22();
               if(PATH1 & -2147483648) {
                  int scalar13 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop277 = 0;
                  int loopLimit277 = (rand()%10)/2 + 1;
                  for(; loop277 < loopLimit277; loop277++) {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop278 = 0;
                  int loopLimit278 = (rand()%10)/2 + 1;
                  for(; loop278 < loopLimit278; loop278++) {
                     func24();
                  }
               }
               else {
                  if(PATH1 & -2147483648) {
                  }
                  else {
                     int loop279 = 0;
                     int loopLimit279 = (rand()%10)/2 + 1;
                     for(; loop279 < loopLimit279; loop279++) {
                     }
                  }
                  int scalar13 = 1;
                  int scalar14 = 1;
                  printf("DELETE!\n");
                  if (scalar14 == 0) {
                     printf("IS 0!");
                  }
                  if(PATH1 & -2147483648) {
                  }
                  else {
                  }
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func7(const unsigned long PATH0, const unsigned long PATH1) {
   int scalar3 = 1;
   func10(rng());
   if(PATH0 & 1) {
      func16(rng());
      if(PATH0 & 2) {
         func22();
      }
      else {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop72 = 0;
         int loopLimit72 = (rand()%10)/2 + 1;
         for(; loop72 < loopLimit72; loop72++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop73 = 0;
         int loopLimit73 = (rand()%10)/2 + 1;
         for(; loop73 < loopLimit73; loop73++) {
            func24();
         }
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func20(rng());
   }
   else {
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop74 = 0;
      int loopLimit74 = (rand()%10)/2 + 1;
      for(; loop74 < loopLimit74; loop74++) {
         if(PATH0 & 8) {
            func19(rng());
            if(PATH0 & 16) {
            }
            else {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func23();
         }
         else {
            if(PATH0 & 32) {
               func22();
            }
            else {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop75 = 0;
               int loopLimit75 = (rand()%10)/3 + 1;
               for(; loop75 < loopLimit75; loop75++) {
                  if(PATH0 & 64) {
                  }
                  else {
                  }
               }
               int loop76 = 0;
               int loopLimit76 = (rand()%10)/3 + 1;
               for(; loop76 < loopLimit76; loop76++) {
                  func24();
               }
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
      }
      int loop77 = 0;
      int loopLimit77 = (rand()%10)/2 + 1;
      for(; loop77 < loopLimit77; loop77++) {
         func18(rng());
      }
      int scalar5 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar5--;
      printf("DELETE!\n");
   }
   func14(rng());
   scalar3++;
   scalar3++;
   if(PATH0 & 128) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop93 = 0;
      int loopLimit93 = (rand()%10)/2 + 1;
      for(; loop93 < loopLimit93; loop93++) {
         if(PATH0 & 256) {
            func16(rng());
            if(PATH0 & 512) {
               func22();
            }
            else {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop94 = 0;
               int loopLimit94 = (rand()%10)/3 + 1;
               for(; loop94 < loopLimit94; loop94++) {
                  if(PATH0 & 1024) {
                  }
                  else {
                  }
               }
               int loop95 = 0;
               int loopLimit95 = (rand()%10)/3 + 1;
               for(; loop95 < loopLimit95; loop95++) {
                  func24();
               }
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
         else {
            if(PATH0 & 2048) {
               func19(rng());
               if(PATH0 & 4096) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop96 = 0;
               int loopLimit96 = (rand()%10)/3 + 1;
               for(; loop96 < loopLimit96; loop96++) {
                  if(PATH0 & 8192) {
                     func22();
                  }
                  else {
                     if(PATH0 & 16384) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop97 = 0;
               int loopLimit97 = (rand()%10)/3 + 1;
               for(; loop97 < loopLimit97; loop97++) {
                  func21(rng());
               }
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop98 = 0;
      int loopLimit98 = (rand()%10)/2 + 1;
      for(; loop98 < loopLimit98; loop98++) {
         func15(rng());
      }
   }
   else {
      int loop103 = 0;
      int loopLimit103 = (rand()%10)/2 + 1;
      for(; loop103 < loopLimit103; loop103++) {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop104 = 0;
         int loopLimit104 = (rand()%10)/3 + 1;
         for(; loop104 < loopLimit104; loop104++) {
            if(PATH0 & 32768) {
               func16(rng());
               if(PATH0 & 65536) {
                  func22();
               }
               else {
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop105 = 0;
                  int loopLimit105 = (rand()%10)/4 + 1;
                  for(; loop105 < loopLimit105; loop105++) {
                     if(PATH0 & 131072) {
                     }
                     else {
                     }
                  }
                  int loop106 = 0;
                  int loopLimit106 = (rand()%10)/4 + 1;
                  for(; loop106 < loopLimit106; loop106++) {
                     func24();
                  }
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               if(PATH0 & 262144) {
                  func19(rng());
                  if(PATH0 & 524288) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop107 = 0;
                  int loopLimit107 = (rand()%10)/4 + 1;
                  for(; loop107 < loopLimit107; loop107++) {
                     if(PATH0 & 1048576) {
                        func22();
                     }
                     else {
                        if(PATH0 & 2097152) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar6--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop108 = 0;
                  int loopLimit108 = (rand()%10)/4 + 1;
                  for(; loop108 < loopLimit108; loop108++) {
                     func21(rng());
                  }
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop109 = 0;
         int loopLimit109 = (rand()%10)/3 + 1;
         for(; loop109 < loopLimit109; loop109++) {
            func15(rng());
         }
      }
   }
   int scalar4 = 1;
   int scalar5 = 1;
   printf("DELETE!\n");
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   func13(rng());
   if(PATH0 & 4194304) {
      func19(rng());
      if(PATH0 & 8388608) {
      }
      else {
         int scalar6 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         printf("DELETE!\n");
      }
      func23();
   }
   else {
      int scalar6 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop110 = 0;
      int loopLimit110 = (rand()%10)/2 + 1;
      for(; loop110 < loopLimit110; loop110++) {
         if(PATH0 & 16777216) {
            func22();
         }
         else {
            if(PATH0 & 33554432) {
            }
            else {
               int scalar7 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func23();
         }
      }
      int loop111 = 0;
      int loopLimit111 = (rand()%10)/2 + 1;
      for(; loop111 < loopLimit111; loop111++) {
         func21(rng());
      }
      int scalar7 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   func17(rng());
   if(PATH0 & 67108864) {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop112 = 0;
      int loopLimit112 = (rand()%10)/2 + 1;
      for(; loop112 < loopLimit112; loop112++) {
         if(PATH0 & 134217728) {
            func16(rng());
            if(PATH0 & 268435456) {
               func22();
            }
            else {
               int scalar7 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop113 = 0;
               int loopLimit113 = (rand()%10)/3 + 1;
               for(; loop113 < loopLimit113; loop113++) {
                  if(PATH0 & 536870912) {
                  }
                  else {
                  }
               }
               int loop114 = 0;
               int loopLimit114 = (rand()%10)/3 + 1;
               for(; loop114 < loopLimit114; loop114++) {
                  func24();
               }
               int scalar8 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
         else {
            if(PATH0 & 1073741824) {
               func19(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar7 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar7 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop115 = 0;
               int loopLimit115 = (rand()%10)/3 + 1;
               for(; loop115 < loopLimit115; loop115++) {
                  if(PATH0 & -2147483648) {
                     func22();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop116 = 0;
               int loopLimit116 = (rand()%10)/3 + 1;
               for(; loop116 < loopLimit116; loop116++) {
                  func21(rng());
               }
               int scalar8 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop117 = 0;
      int loopLimit117 = (rand()%10)/2 + 1;
      for(; loop117 < loopLimit117; loop117++) {
         func15(rng());
      }
   }
   else {
      if(PATH0 & -2147483648) {
         int scalar6 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop118 = 0;
         int loopLimit118 = (rand()%10)/2 + 1;
         for(; loop118 < loopLimit118; loop118++) {
            if(PATH0 & -2147483648) {
               func19(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar7 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop119 = 0;
                  int loopLimit119 = (rand()%10)/3 + 1;
                  for(; loop119 < loopLimit119; loop119++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop120 = 0;
                  int loopLimit120 = (rand()%10)/3 + 1;
                  for(; loop120 < loopLimit120; loop120++) {
                     func24();
                  }
                  int scalar8 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar8--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
         }
         int loop121 = 0;
         int loopLimit121 = (rand()%10)/2 + 1;
         for(; loop121 < loopLimit121; loop121++) {
            func18(rng());
         }
      }
      else {
         int loop122 = 0;
         int loopLimit122 = (rand()%10)/2 + 1;
         for(; loop122 < loopLimit122; loop122++) {
            int scalar6 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop123 = 0;
            int loopLimit123 = (rand()%10)/3 + 1;
            for(; loop123 < loopLimit123; loop123++) {
               if(PATH0 & -2147483648) {
                  func19(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  if(PATH0 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop124 = 0;
                     int loopLimit124 = (rand()%10)/4 + 1;
                     for(; loop124 < loopLimit124; loop124++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop125 = 0;
                     int loopLimit125 = (rand()%10)/4 + 1;
                     for(; loop125 < loopLimit125; loop125++) {
                        func24();
                     }
                     int scalar8 = 1;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                     scalar8--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
            }
            int loop126 = 0;
            int loopLimit126 = (rand()%10)/3 + 1;
            for(; loop126 < loopLimit126; loop126++) {
               func18(rng());
            }
         }
      }
      int scalar6 = 1;
      int scalar7 = 1;
      printf("DELETE!\n");
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      func16(rng());
      if(PATH0 & -2147483648) {
         func22();
      }
      else {
         int scalar8 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop127 = 0;
         int loopLimit127 = (rand()%10)/2 + 1;
         for(; loop127 < loopLimit127; loop127++) {
            if(PATH0 & -2147483648) {
            }
            else {
            }
         }
         int loop128 = 0;
         int loopLimit128 = (rand()%10)/2 + 1;
         for(; loop128 < loopLimit128; loop128++) {
            func24();
         }
         int scalar9 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar8--;
         printf("DELETE!\n");
      }
      func20(rng());
      if(PATH0 & -2147483648) {
         int scalar8 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop129 = 0;
         int loopLimit129 = (rand()%10)/2 + 1;
         for(; loop129 < loopLimit129; loop129++) {
            if(PATH0 & -2147483648) {
               func19(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar9 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  int scalar9 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop130 = 0;
                  int loopLimit130 = (rand()%10)/3 + 1;
                  for(; loop130 < loopLimit130; loop130++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop131 = 0;
                  int loopLimit131 = (rand()%10)/3 + 1;
                  for(; loop131 < loopLimit131; loop131++) {
                     func24();
                  }
                  int scalar10 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
         }
         int loop132 = 0;
         int loopLimit132 = (rand()%10)/2 + 1;
         for(; loop132 < loopLimit132; loop132++) {
            func18(rng());
         }
      }
      else {
         if(PATH0 & -2147483648) {
            int scalar8 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop133 = 0;
            int loopLimit133 = (rand()%10)/2 + 1;
            for(; loop133 < loopLimit133; loop133++) {
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar9 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar8--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
            }
            int loop134 = 0;
            int loopLimit134 = (rand()%10)/2 + 1;
            for(; loop134 < loopLimit134; loop134++) {
               func21(rng());
            }
         }
         else {
            int loop135 = 0;
            int loopLimit135 = (rand()%10)/2 + 1;
            for(; loop135 < loopLimit135; loop135++) {
               int scalar8 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop136 = 0;
               int loopLimit136 = (rand()%10)/3 + 1;
               for(; loop136 < loopLimit136; loop136++) {
                  if(PATH0 & -2147483648) {
                     func22();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar7--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop137 = 0;
               int loopLimit137 = (rand()%10)/3 + 1;
               for(; loop137 < loopLimit137; loop137++) {
                  func21(rng());
               }
            }
         }
         int scalar8 = 1;
         int scalar9 = 1;
         printf("DELETE!\n");
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func19(rng());
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar10 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar7--;
            printf("DELETE!\n");
         }
         func23();
         if(PATH0 & -2147483648) {
            int scalar10 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop138 = 0;
            int loopLimit138 = (rand()%10)/2 + 1;
            for(; loop138 < loopLimit138; loop138++) {
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar11 = 1;
                     if (scalar10 == 0) {
                        printf("IS 0!");
                     }
                     scalar11--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
            }
            int loop139 = 0;
            int loopLimit139 = (rand()%10)/2 + 1;
            for(; loop139 < loopLimit139; loop139++) {
               func21(rng());
            }
         }
         else {
            if(PATH0 & -2147483648) {
               int scalar10 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop140 = 0;
               int loopLimit140 = (rand()%10)/2 + 1;
               for(; loop140 < loopLimit140; loop140++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop141 = 0;
               int loopLimit141 = (rand()%10)/2 + 1;
               for(; loop141 < loopLimit141; loop141++) {
                  func24();
               }
            }
            else {
               int loop142 = 0;
               int loopLimit142 = (rand()%10)/2 + 1;
               for(; loop142 < loopLimit142; loop142++) {
                  int scalar10 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop143 = 0;
                  int loopLimit143 = (rand()%10)/3 + 1;
                  for(; loop143 < loopLimit143; loop143++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop144 = 0;
                  int loopLimit144 = (rand()%10)/3 + 1;
                  for(; loop144 < loopLimit144; loop144++) {
                     func24();
                  }
               }
            }
            int scalar10 = 1;
            int scalar11 = 1;
            printf("DELETE!\n");
            if (scalar10 == 0) {
               printf("IS 0!");
            }
            func22();
            if(PATH0 & -2147483648) {
               int scalar12 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop145 = 0;
               int loopLimit145 = (rand()%10)/2 + 1;
               for(; loop145 < loopLimit145; loop145++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop146 = 0;
               int loopLimit146 = (rand()%10)/2 + 1;
               for(; loop146 < loopLimit146; loop146++) {
                  func24();
               }
            }
            else {
               if(PATH1 & 1) {
               }
               else {
                  int loop147 = 0;
                  int loopLimit147 = (rand()%10)/2 + 1;
                  for(; loop147 < loopLimit147; loop147++) {
                  }
               }
               int scalar12 = 1;
               int scalar13 = 1;
               printf("DELETE!\n");
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               if(PATH1 & 2) {
               }
               else {
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func10(const unsigned long PATH0) {
   int scalar4 = 1;
   func13(rng());
   if(PATH0 & 1) {
      func19(rng());
      if(PATH0 & 2) {
      }
      else {
         int scalar5 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func23();
   }
   else {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop30 = 0;
      int loopLimit30 = (rand()%10)/2 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         if(PATH0 & 4) {
            func22();
         }
         else {
            if(PATH0 & 8) {
            }
            else {
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func23();
         }
      }
      int loop31 = 0;
      int loopLimit31 = (rand()%10)/2 + 1;
      for(; loop31 < loopLimit31; loop31++) {
         func21(rng());
      }
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      scalar6--;
      printf("DELETE!\n");
   }
   func17(rng());
   scalar4++;
   scalar4++;
   if(PATH0 & 16) {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop40 = 0;
      int loopLimit40 = (rand()%10)/2 + 1;
      for(; loop40 < loopLimit40; loop40++) {
         if(PATH0 & 32) {
            func19(rng());
            if(PATH0 & 64) {
            }
            else {
               int scalar6 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               printf("DELETE!\n");
            }
            func23();
         }
         else {
            if(PATH0 & 128) {
               func22();
            }
            else {
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop41 = 0;
               int loopLimit41 = (rand()%10)/3 + 1;
               for(; loop41 < loopLimit41; loop41++) {
                  if(PATH0 & 256) {
                  }
                  else {
                  }
               }
               int loop42 = 0;
               int loopLimit42 = (rand()%10)/3 + 1;
               for(; loop42 < loopLimit42; loop42++) {
                  func24();
               }
               int scalar7 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
      }
      int loop43 = 0;
      int loopLimit43 = (rand()%10)/2 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         func18(rng());
      }
   }
   else {
      int loop46 = 0;
      int loopLimit46 = (rand()%10)/2 + 1;
      for(; loop46 < loopLimit46; loop46++) {
         int scalar5 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop47 = 0;
         int loopLimit47 = (rand()%10)/3 + 1;
         for(; loop47 < loopLimit47; loop47++) {
            if(PATH0 & 512) {
               func19(rng());
               if(PATH0 & 1024) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               if(PATH0 & 2048) {
                  func22();
               }
               else {
                  int scalar6 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop48 = 0;
                  int loopLimit48 = (rand()%10)/4 + 1;
                  for(; loop48 < loopLimit48; loop48++) {
                     if(PATH0 & 4096) {
                     }
                     else {
                     }
                  }
                  int loop49 = 0;
                  int loopLimit49 = (rand()%10)/4 + 1;
                  for(; loop49 < loopLimit49; loop49++) {
                     func24();
                  }
                  int scalar7 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
         }
         int loop50 = 0;
         int loopLimit50 = (rand()%10)/3 + 1;
         for(; loop50 < loopLimit50; loop50++) {
            func18(rng());
         }
      }
   }
   int scalar5 = 1;
   int scalar6 = 1;
   printf("DELETE!\n");
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   func16(rng());
   if(PATH0 & 8192) {
      func22();
   }
   else {
      int scalar7 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop51 = 0;
      int loopLimit51 = (rand()%10)/2 + 1;
      for(; loop51 < loopLimit51; loop51++) {
         if(PATH0 & 16384) {
         }
         else {
         }
      }
      int loop52 = 0;
      int loopLimit52 = (rand()%10)/2 + 1;
      for(; loop52 < loopLimit52; loop52++) {
         func24();
      }
      int scalar8 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      scalar8--;
      printf("DELETE!\n");
   }
   func20(rng());
   if(PATH0 & 32768) {
      int scalar7 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop53 = 0;
      int loopLimit53 = (rand()%10)/2 + 1;
      for(; loop53 < loopLimit53; loop53++) {
         if(PATH0 & 65536) {
            func19(rng());
            if(PATH0 & 131072) {
            }
            else {
               int scalar8 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func23();
         }
         else {
            if(PATH0 & 262144) {
               func22();
            }
            else {
               int scalar8 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop54 = 0;
               int loopLimit54 = (rand()%10)/3 + 1;
               for(; loop54 < loopLimit54; loop54++) {
                  if(PATH0 & 524288) {
                  }
                  else {
                  }
               }
               int loop55 = 0;
               int loopLimit55 = (rand()%10)/3 + 1;
               for(; loop55 < loopLimit55; loop55++) {
                  func24();
               }
               int scalar9 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
      }
      int loop56 = 0;
      int loopLimit56 = (rand()%10)/2 + 1;
      for(; loop56 < loopLimit56; loop56++) {
         func18(rng());
      }
   }
   else {
      if(PATH0 & 1048576) {
         int scalar7 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop57 = 0;
         int loopLimit57 = (rand()%10)/2 + 1;
         for(; loop57 < loopLimit57; loop57++) {
            if(PATH0 & 2097152) {
               func22();
            }
            else {
               if(PATH0 & 4194304) {
               }
               else {
                  int scalar8 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
         }
         int loop58 = 0;
         int loopLimit58 = (rand()%10)/2 + 1;
         for(; loop58 < loopLimit58; loop58++) {
            func21(rng());
         }
      }
      else {
         int loop59 = 0;
         int loopLimit59 = (rand()%10)/2 + 1;
         for(; loop59 < loopLimit59; loop59++) {
            int scalar7 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop60 = 0;
            int loopLimit60 = (rand()%10)/3 + 1;
            for(; loop60 < loopLimit60; loop60++) {
               if(PATH0 & 8388608) {
                  func22();
               }
               else {
                  if(PATH0 & 16777216) {
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
            }
            int loop61 = 0;
            int loopLimit61 = (rand()%10)/3 + 1;
            for(; loop61 < loopLimit61; loop61++) {
               func21(rng());
            }
         }
      }
      int scalar7 = 1;
      int scalar8 = 1;
      printf("DELETE!\n");
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      func19(rng());
      if(PATH0 & 33554432) {
      }
      else {
         int scalar9 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func23();
      if(PATH0 & 67108864) {
         int scalar9 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop62 = 0;
         int loopLimit62 = (rand()%10)/2 + 1;
         for(; loop62 < loopLimit62; loop62++) {
            if(PATH0 & 134217728) {
               func22();
            }
            else {
               if(PATH0 & 268435456) {
               }
               else {
                  int scalar10 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func23();
            }
         }
         int loop63 = 0;
         int loopLimit63 = (rand()%10)/2 + 1;
         for(; loop63 < loopLimit63; loop63++) {
            func21(rng());
         }
      }
      else {
         if(PATH0 & 536870912) {
            int scalar9 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop64 = 0;
            int loopLimit64 = (rand()%10)/2 + 1;
            for(; loop64 < loopLimit64; loop64++) {
               if(PATH0 & 1073741824) {
               }
               else {
               }
            }
            int loop65 = 0;
            int loopLimit65 = (rand()%10)/2 + 1;
            for(; loop65 < loopLimit65; loop65++) {
               func24();
            }
         }
         else {
            int loop66 = 0;
            int loopLimit66 = (rand()%10)/2 + 1;
            for(; loop66 < loopLimit66; loop66++) {
               int scalar9 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop67 = 0;
               int loopLimit67 = (rand()%10)/3 + 1;
               for(; loop67 < loopLimit67; loop67++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop68 = 0;
               int loopLimit68 = (rand()%10)/3 + 1;
               for(; loop68 < loopLimit68; loop68++) {
                  func24();
               }
            }
         }
         int scalar9 = 1;
         int scalar10 = 1;
         printf("DELETE!\n");
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         func22();
         if(PATH0 & -2147483648) {
            int scalar11 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop69 = 0;
            int loopLimit69 = (rand()%10)/2 + 1;
            for(; loop69 < loopLimit69; loop69++) {
               if(PATH0 & -2147483648) {
               }
               else {
               }
            }
            int loop70 = 0;
            int loopLimit70 = (rand()%10)/2 + 1;
            for(; loop70 < loopLimit70; loop70++) {
               func24();
            }
         }
         else {
            if(PATH0 & -2147483648) {
            }
            else {
               int loop71 = 0;
               int loopLimit71 = (rand()%10)/2 + 1;
               for(; loop71 < loopLimit71; loop71++) {
               }
            }
            int scalar11 = 1;
            int scalar12 = 1;
            printf("DELETE!\n");
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            if(PATH0 & -2147483648) {
            }
            else {
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func13(const unsigned long PATH0) {
   int scalar5 = 1;
   func16(rng());
   if(PATH0 & 1) {
      func22();
   }
   else {
      int scalar6 = 1;
      if (scalar6 == 0) {
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
         func24();
      }
      int scalar7 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      scalar5--;
      printf("DELETE!\n");
   }
   func20(rng());
   scalar5++;
   scalar5++;
   if(PATH0 & 4) {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if(PATH0 & 8) {
            func22();
         }
         else {
            if(PATH0 & 16) {
            }
            else {
               int scalar7 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func23();
         }
      }
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         func21(rng());
      }
   }
   else {
      int loop17 = 0;
      int loopLimit17 = (rand()%10)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         int scalar6 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop18 = 0;
         int loopLimit18 = (rand()%10)/3 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            if(PATH0 & 32) {
               func22();
            }
            else {
               if(PATH0 & 64) {
               }
               else {
                  int scalar7 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  scalar7--;
                  printf("DELETE!\n");
               }
               func23();
            }
         }
         int loop19 = 0;
         int loopLimit19 = (rand()%10)/3 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            func21(rng());
         }
      }
   }
   int scalar6 = 1;
   int scalar7 = 1;
   printf("DELETE!\n");
   if (scalar6 == 0) {
      printf("IS 0!");
   }
   func19(rng());
   if(PATH0 & 128) {
   }
   else {
      int scalar8 = 1;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      scalar8--;
      printf("DELETE!\n");
   }
   func23();
   if(PATH0 & 256) {
      int scalar8 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop20 = 0;
      int loopLimit20 = (rand()%10)/2 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         if(PATH0 & 512) {
            func22();
         }
         else {
            if(PATH0 & 1024) {
            }
            else {
               int scalar9 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar7--;
               printf("DELETE!\n");
            }
            func23();
         }
      }
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         func21(rng());
      }
   }
   else {
      if(PATH0 & 2048) {
         int scalar8 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop22 = 0;
         int loopLimit22 = (rand()%10)/2 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            if(PATH0 & 4096) {
            }
            else {
            }
         }
         int loop23 = 0;
         int loopLimit23 = (rand()%10)/2 + 1;
         for(; loop23 < loopLimit23; loop23++) {
            func24();
         }
      }
      else {
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            int scalar8 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop25 = 0;
            int loopLimit25 = (rand()%10)/3 + 1;
            for(; loop25 < loopLimit25; loop25++) {
               if(PATH0 & 8192) {
               }
               else {
               }
            }
            int loop26 = 0;
            int loopLimit26 = (rand()%10)/3 + 1;
            for(; loop26 < loopLimit26; loop26++) {
               func24();
            }
         }
      }
      int scalar8 = 1;
      int scalar9 = 1;
      printf("DELETE!\n");
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      func22();
      if(PATH0 & 16384) {
         int scalar10 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop27 = 0;
         int loopLimit27 = (rand()%10)/2 + 1;
         for(; loop27 < loopLimit27; loop27++) {
            if(PATH0 & 32768) {
            }
            else {
            }
         }
         int loop28 = 0;
         int loopLimit28 = (rand()%10)/2 + 1;
         for(; loop28 < loopLimit28; loop28++) {
            func24();
         }
      }
      else {
         if(PATH0 & 65536) {
         }
         else {
            int loop29 = 0;
            int loopLimit29 = (rand()%10)/2 + 1;
            for(; loop29 < loopLimit29; loop29++) {
            }
         }
         int scalar10 = 1;
         int scalar11 = 1;
         printf("DELETE!\n");
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 131072) {
         }
         else {
         }
      }
   }
   printf("DELETE!\n");
}

void func16(const unsigned long PATH0) {
   int scalar6 = 1;
   func19(rng());
   if(PATH0 & 1) {
   }
   else {
      int scalar7 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      scalar6--;
      printf("DELETE!\n");
   }
   func23();
   scalar6++;
   scalar6++;
   if(PATH0 & 2) {
      int scalar7 = 1;
      if (scalar7 == 0) {
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
         func24();
      }
   }
   else {
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         int scalar7 = 1;
         if (scalar6 == 0) {
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
            func24();
         }
      }
   }
   int scalar7 = 1;
   int scalar8 = 1;
   printf("DELETE!\n");
   if (scalar7 == 0) {
      printf("IS 0!");
   }
   func22();
   if(PATH0 & 16) {
      int scalar9 = 1;
      if (scalar8 == 0) {
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
         func24();
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
      int scalar9 = 1;
      int scalar10 = 1;
      printf("DELETE!\n");
      if (scalar10 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 128) {
      }
      else {
      }
   }
   printf("DELETE!\n");
}

void func19(const unsigned long PATH0) {
   int scalar7 = 1;
   func22();
   scalar7++;
   scalar7++;
   if(PATH0 & 1) {
   }
   else {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
      }
   }
   int scalar8 = 1;
   int scalar9 = 1;
   printf("DELETE!\n");
   if (scalar9 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
   printf("DELETE!\n");
}

void func22() {
   int scalar8 = 1;
   scalar8++;
   scalar8++;
   printf("DELETE!\n");
}

void func23() {
}

void func24() {
}

void func20(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
      }
   }
   int scalar6 = 1;
   int scalar7 = 1;
   printf("DELETE!\n");
   if (scalar6 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
}

void func21(const unsigned long PATH0) {
   int scalar7 = 1;
   if (scalar7 == 0) {
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
      func24();
   }
}

void func17(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop32 = 0;
      int loopLimit32 = (rand()%10)/2 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
      int loop33 = 0;
      int loopLimit33 = (rand()%10)/2 + 1;
      for(; loop33 < loopLimit33; loop33++) {
         func24();
      }
   }
   else {
      int loop34 = 0;
      int loopLimit34 = (rand()%10)/2 + 1;
      for(; loop34 < loopLimit34; loop34++) {
         int scalar5 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop35 = 0;
         int loopLimit35 = (rand()%10)/3 + 1;
         for(; loop35 < loopLimit35; loop35++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop36 = 0;
         int loopLimit36 = (rand()%10)/3 + 1;
         for(; loop36 < loopLimit36; loop36++) {
            func24();
         }
      }
   }
   int scalar5 = 1;
   int scalar6 = 1;
   printf("DELETE!\n");
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   func22();
   if(PATH0 & 8) {
      int scalar7 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop37 = 0;
      int loopLimit37 = (rand()%10)/2 + 1;
      for(; loop37 < loopLimit37; loop37++) {
         if(PATH0 & 16) {
         }
         else {
         }
      }
      int loop38 = 0;
      int loopLimit38 = (rand()%10)/2 + 1;
      for(; loop38 < loopLimit38; loop38++) {
         func24();
      }
   }
   else {
      if(PATH0 & 32) {
      }
      else {
         int loop39 = 0;
         int loopLimit39 = (rand()%10)/2 + 1;
         for(; loop39 < loopLimit39; loop39++) {
         }
      }
      int scalar7 = 1;
      int scalar8 = 1;
      printf("DELETE!\n");
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 64) {
      }
      else {
      }
   }
}

void func18(const unsigned long PATH0) {
   int scalar6 = 1;
   if (scalar6 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop44 = 0;
   int loopLimit44 = (rand()%10)/3 + 1;
   for(; loop44 < loopLimit44; loop44++) {
      if(PATH0 & 1) {
         func22();
      }
      else {
         if(PATH0 & 2) {
         }
         else {
            int scalar7 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar7--;
            printf("DELETE!\n");
         }
         func23();
      }
   }
   int loop45 = 0;
   int loopLimit45 = (rand()%10)/3 + 1;
   for(; loop45 < loopLimit45; loop45++) {
      func21(rng());
   }
}

void func14(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop78 = 0;
      int loopLimit78 = (rand()%10)/2 + 1;
      for(; loop78 < loopLimit78; loop78++) {
         if(PATH0 & 2) {
            func22();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func23();
         }
      }
      int loop79 = 0;
      int loopLimit79 = (rand()%10)/2 + 1;
      for(; loop79 < loopLimit79; loop79++) {
         func21(rng());
      }
   }
   else {
      int loop80 = 0;
      int loopLimit80 = (rand()%10)/2 + 1;
      for(; loop80 < loopLimit80; loop80++) {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop81 = 0;
         int loopLimit81 = (rand()%10)/3 + 1;
         for(; loop81 < loopLimit81; loop81++) {
            if(PATH0 & 8) {
               func22();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
         }
         int loop82 = 0;
         int loopLimit82 = (rand()%10)/3 + 1;
         for(; loop82 < loopLimit82; loop82++) {
            func21(rng());
         }
      }
   }
   int scalar4 = 1;
   int scalar5 = 1;
   printf("DELETE!\n");
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   func19(rng());
   if(PATH0 & 32) {
   }
   else {
      int scalar6 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      scalar6--;
      printf("DELETE!\n");
   }
   func23();
   if(PATH0 & 64) {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop83 = 0;
      int loopLimit83 = (rand()%10)/2 + 1;
      for(; loop83 < loopLimit83; loop83++) {
         if(PATH0 & 128) {
            func22();
         }
         else {
            if(PATH0 & 256) {
            }
            else {
               int scalar7 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func23();
         }
      }
      int loop84 = 0;
      int loopLimit84 = (rand()%10)/2 + 1;
      for(; loop84 < loopLimit84; loop84++) {
         func21(rng());
      }
   }
   else {
      if(PATH0 & 512) {
         int scalar6 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop85 = 0;
         int loopLimit85 = (rand()%10)/2 + 1;
         for(; loop85 < loopLimit85; loop85++) {
            if(PATH0 & 1024) {
            }
            else {
            }
         }
         int loop86 = 0;
         int loopLimit86 = (rand()%10)/2 + 1;
         for(; loop86 < loopLimit86; loop86++) {
            func24();
         }
      }
      else {
         int loop87 = 0;
         int loopLimit87 = (rand()%10)/2 + 1;
         for(; loop87 < loopLimit87; loop87++) {
            int scalar6 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop88 = 0;
            int loopLimit88 = (rand()%10)/3 + 1;
            for(; loop88 < loopLimit88; loop88++) {
               if(PATH0 & 2048) {
               }
               else {
               }
            }
            int loop89 = 0;
            int loopLimit89 = (rand()%10)/3 + 1;
            for(; loop89 < loopLimit89; loop89++) {
               func24();
            }
         }
      }
      int scalar6 = 1;
      int scalar7 = 1;
      printf("DELETE!\n");
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      func22();
      if(PATH0 & 4096) {
         int scalar8 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop90 = 0;
         int loopLimit90 = (rand()%10)/2 + 1;
         for(; loop90 < loopLimit90; loop90++) {
            if(PATH0 & 8192) {
            }
            else {
            }
         }
         int loop91 = 0;
         int loopLimit91 = (rand()%10)/2 + 1;
         for(; loop91 < loopLimit91; loop91++) {
            func24();
         }
      }
      else {
         if(PATH0 & 16384) {
         }
         else {
            int loop92 = 0;
            int loopLimit92 = (rand()%10)/2 + 1;
            for(; loop92 < loopLimit92; loop92++) {
            }
         }
         int scalar8 = 1;
         int scalar9 = 1;
         printf("DELETE!\n");
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 32768) {
         }
         else {
         }
      }
   }
}

void func15(const unsigned long PATH0) {
   int scalar5 = 1;
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop99 = 0;
   int loopLimit99 = (rand()%10)/3 + 1;
   for(; loop99 < loopLimit99; loop99++) {
      if(PATH0 & 1) {
         func19(rng());
         if(PATH0 & 2) {
         }
         else {
            int scalar6 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar6--;
            printf("DELETE!\n");
         }
         func23();
      }
      else {
         if(PATH0 & 4) {
            func22();
         }
         else {
            int scalar6 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop100 = 0;
            int loopLimit100 = (rand()%10)/4 + 1;
            for(; loop100 < loopLimit100; loop100++) {
               if(PATH0 & 8) {
               }
               else {
               }
            }
            int loop101 = 0;
            int loopLimit101 = (rand()%10)/4 + 1;
            for(; loop101 < loopLimit101; loop101++) {
               func24();
            }
            int scalar7 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar6--;
            printf("DELETE!\n");
         }
         func20(rng());
      }
   }
   int loop102 = 0;
   int loopLimit102 = (rand()%10)/3 + 1;
   for(; loop102 < loopLimit102; loop102++) {
      func18(rng());
   }
}

void func11(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop156 = 0;
      int loopLimit156 = (rand()%10)/2 + 1;
      for(; loop156 < loopLimit156; loop156++) {
         if(PATH0 & 2) {
            func19(rng());
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
            func23();
         }
         else {
            if(PATH0 & 8) {
               func22();
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop157 = 0;
               int loopLimit157 = (rand()%10)/3 + 1;
               for(; loop157 < loopLimit157; loop157++) {
                  if(PATH0 & 16) {
                  }
                  else {
                  }
               }
               int loop158 = 0;
               int loopLimit158 = (rand()%10)/3 + 1;
               for(; loop158 < loopLimit158; loop158++) {
                  func24();
               }
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
      }
      int loop159 = 0;
      int loopLimit159 = (rand()%10)/2 + 1;
      for(; loop159 < loopLimit159; loop159++) {
         func18(rng());
      }
   }
   else {
      int loop160 = 0;
      int loopLimit160 = (rand()%10)/2 + 1;
      for(; loop160 < loopLimit160; loop160++) {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop161 = 0;
         int loopLimit161 = (rand()%10)/3 + 1;
         for(; loop161 < loopLimit161; loop161++) {
            if(PATH0 & 32) {
               func19(rng());
               if(PATH0 & 64) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               if(PATH0 & 128) {
                  func22();
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop162 = 0;
                  int loopLimit162 = (rand()%10)/4 + 1;
                  for(; loop162 < loopLimit162; loop162++) {
                     if(PATH0 & 256) {
                     }
                     else {
                     }
                  }
                  int loop163 = 0;
                  int loopLimit163 = (rand()%10)/4 + 1;
                  for(; loop163 < loopLimit163; loop163++) {
                     func24();
                  }
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
         }
         int loop164 = 0;
         int loopLimit164 = (rand()%10)/3 + 1;
         for(; loop164 < loopLimit164; loop164++) {
            func18(rng());
         }
      }
   }
   int scalar3 = 1;
   int scalar4 = 1;
   printf("DELETE!\n");
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   func16(rng());
   if(PATH0 & 512) {
      func22();
   }
   else {
      int scalar5 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop165 = 0;
      int loopLimit165 = (rand()%10)/2 + 1;
      for(; loop165 < loopLimit165; loop165++) {
         if(PATH0 & 1024) {
         }
         else {
         }
      }
      int loop166 = 0;
      int loopLimit166 = (rand()%10)/2 + 1;
      for(; loop166 < loopLimit166; loop166++) {
         func24();
      }
      int scalar6 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   func20(rng());
   if(PATH0 & 2048) {
      int scalar5 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop167 = 0;
      int loopLimit167 = (rand()%10)/2 + 1;
      for(; loop167 < loopLimit167; loop167++) {
         if(PATH0 & 4096) {
            func19(rng());
            if(PATH0 & 8192) {
            }
            else {
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               printf("DELETE!\n");
            }
            func23();
         }
         else {
            if(PATH0 & 16384) {
               func22();
            }
            else {
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop168 = 0;
               int loopLimit168 = (rand()%10)/3 + 1;
               for(; loop168 < loopLimit168; loop168++) {
                  if(PATH0 & 32768) {
                  }
                  else {
                  }
               }
               int loop169 = 0;
               int loopLimit169 = (rand()%10)/3 + 1;
               for(; loop169 < loopLimit169; loop169++) {
                  func24();
               }
               int scalar7 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
      }
      int loop170 = 0;
      int loopLimit170 = (rand()%10)/2 + 1;
      for(; loop170 < loopLimit170; loop170++) {
         func18(rng());
      }
   }
   else {
      if(PATH0 & 65536) {
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop171 = 0;
         int loopLimit171 = (rand()%10)/2 + 1;
         for(; loop171 < loopLimit171; loop171++) {
            if(PATH0 & 131072) {
               func22();
            }
            else {
               if(PATH0 & 262144) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func23();
            }
         }
         int loop172 = 0;
         int loopLimit172 = (rand()%10)/2 + 1;
         for(; loop172 < loopLimit172; loop172++) {
            func21(rng());
         }
      }
      else {
         int loop173 = 0;
         int loopLimit173 = (rand()%10)/2 + 1;
         for(; loop173 < loopLimit173; loop173++) {
            int scalar5 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop174 = 0;
            int loopLimit174 = (rand()%10)/3 + 1;
            for(; loop174 < loopLimit174; loop174++) {
               if(PATH0 & 524288) {
                  func22();
               }
               else {
                  if(PATH0 & 1048576) {
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
            }
            int loop175 = 0;
            int loopLimit175 = (rand()%10)/3 + 1;
            for(; loop175 < loopLimit175; loop175++) {
               func21(rng());
            }
         }
      }
      int scalar5 = 1;
      int scalar6 = 1;
      printf("DELETE!\n");
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func19(rng());
      if(PATH0 & 2097152) {
      }
      else {
         int scalar7 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         printf("DELETE!\n");
      }
      func23();
      if(PATH0 & 4194304) {
         int scalar7 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop176 = 0;
         int loopLimit176 = (rand()%10)/2 + 1;
         for(; loop176 < loopLimit176; loop176++) {
            if(PATH0 & 8388608) {
               func22();
            }
            else {
               if(PATH0 & 16777216) {
               }
               else {
                  int scalar8 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar7--;
                  printf("DELETE!\n");
               }
               func23();
            }
         }
         int loop177 = 0;
         int loopLimit177 = (rand()%10)/2 + 1;
         for(; loop177 < loopLimit177; loop177++) {
            func21(rng());
         }
      }
      else {
         if(PATH0 & 33554432) {
            int scalar7 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop178 = 0;
            int loopLimit178 = (rand()%10)/2 + 1;
            for(; loop178 < loopLimit178; loop178++) {
               if(PATH0 & 67108864) {
               }
               else {
               }
            }
            int loop179 = 0;
            int loopLimit179 = (rand()%10)/2 + 1;
            for(; loop179 < loopLimit179; loop179++) {
               func24();
            }
         }
         else {
            int loop180 = 0;
            int loopLimit180 = (rand()%10)/2 + 1;
            for(; loop180 < loopLimit180; loop180++) {
               int scalar7 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop181 = 0;
               int loopLimit181 = (rand()%10)/3 + 1;
               for(; loop181 < loopLimit181; loop181++) {
                  if(PATH0 & 134217728) {
                  }
                  else {
                  }
               }
               int loop182 = 0;
               int loopLimit182 = (rand()%10)/3 + 1;
               for(; loop182 < loopLimit182; loop182++) {
                  func24();
               }
            }
         }
         int scalar7 = 1;
         int scalar8 = 1;
         printf("DELETE!\n");
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         func22();
         if(PATH0 & 268435456) {
            int scalar9 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop183 = 0;
            int loopLimit183 = (rand()%10)/2 + 1;
            for(; loop183 < loopLimit183; loop183++) {
               if(PATH0 & 536870912) {
               }
               else {
               }
            }
            int loop184 = 0;
            int loopLimit184 = (rand()%10)/2 + 1;
            for(; loop184 < loopLimit184; loop184++) {
               func24();
            }
         }
         else {
            if(PATH0 & 1073741824) {
            }
            else {
               int loop185 = 0;
               int loopLimit185 = (rand()%10)/2 + 1;
               for(; loop185 < loopLimit185; loop185++) {
               }
            }
            int scalar9 = 1;
            int scalar10 = 1;
            printf("DELETE!\n");
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            if(PATH0 & -2147483648) {
            }
            else {
            }
         }
      }
   }
}

void func12(const unsigned long PATH0) {
   int scalar4 = 1;
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop196 = 0;
   int loopLimit196 = (rand()%10)/3 + 1;
   for(; loop196 < loopLimit196; loop196++) {
      if(PATH0 & 1) {
         func16(rng());
         if(PATH0 & 2) {
            func22();
         }
         else {
            int scalar5 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop197 = 0;
            int loopLimit197 = (rand()%10)/4 + 1;
            for(; loop197 < loopLimit197; loop197++) {
               if(PATH0 & 4) {
               }
               else {
               }
            }
            int loop198 = 0;
            int loopLimit198 = (rand()%10)/4 + 1;
            for(; loop198 < loopLimit198; loop198++) {
               func24();
            }
            int scalar6 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func20(rng());
      }
      else {
         if(PATH0 & 8) {
            func19(rng());
            if(PATH0 & 16) {
            }
            else {
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func23();
         }
         else {
            int scalar5 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop199 = 0;
            int loopLimit199 = (rand()%10)/4 + 1;
            for(; loop199 < loopLimit199; loop199++) {
               if(PATH0 & 32) {
                  func22();
               }
               else {
                  if(PATH0 & 64) {
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
            }
            int loop200 = 0;
            int loopLimit200 = (rand()%10)/4 + 1;
            for(; loop200 < loopLimit200; loop200++) {
               func21(rng());
            }
            int scalar6 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            printf("DELETE!\n");
         }
         func17(rng());
      }
   }
   int loop201 = 0;
   int loopLimit201 = (rand()%10)/3 + 1;
   for(; loop201 < loopLimit201; loop201++) {
      func15(rng());
   }
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop296 = 0;
      int loopLimit296 = (rand()%10)/2 + 1;
      for(; loop296 < loopLimit296; loop296++) {
         if(PATH0 & 2) {
            func16(rng());
            if(PATH0 & 4) {
               func22();
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop297 = 0;
               int loopLimit297 = (rand()%10)/3 + 1;
               for(; loop297 < loopLimit297; loop297++) {
                  if(PATH0 & 8) {
                  }
                  else {
                  }
               }
               int loop298 = 0;
               int loopLimit298 = (rand()%10)/3 + 1;
               for(; loop298 < loopLimit298; loop298++) {
                  func24();
               }
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
         else {
            if(PATH0 & 16) {
               func19(rng());
               if(PATH0 & 32) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop299 = 0;
               int loopLimit299 = (rand()%10)/3 + 1;
               for(; loop299 < loopLimit299; loop299++) {
                  if(PATH0 & 64) {
                     func22();
                  }
                  else {
                     if(PATH0 & 128) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop300 = 0;
               int loopLimit300 = (rand()%10)/3 + 1;
               for(; loop300 < loopLimit300; loop300++) {
                  func21(rng());
               }
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop301 = 0;
      int loopLimit301 = (rand()%10)/2 + 1;
      for(; loop301 < loopLimit301; loop301++) {
         func15(rng());
      }
   }
   else {
      int loop302 = 0;
      int loopLimit302 = (rand()%10)/2 + 1;
      for(; loop302 < loopLimit302; loop302++) {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop303 = 0;
         int loopLimit303 = (rand()%10)/3 + 1;
         for(; loop303 < loopLimit303; loop303++) {
            if(PATH0 & 256) {
               func16(rng());
               if(PATH0 & 512) {
                  func22();
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop304 = 0;
                  int loopLimit304 = (rand()%10)/4 + 1;
                  for(; loop304 < loopLimit304; loop304++) {
                     if(PATH0 & 1024) {
                     }
                     else {
                     }
                  }
                  int loop305 = 0;
                  int loopLimit305 = (rand()%10)/4 + 1;
                  for(; loop305 < loopLimit305; loop305++) {
                     func24();
                  }
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               if(PATH0 & 2048) {
                  func19(rng());
                  if(PATH0 & 4096) {
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop306 = 0;
                  int loopLimit306 = (rand()%10)/4 + 1;
                  for(; loop306 < loopLimit306; loop306++) {
                     if(PATH0 & 8192) {
                        func22();
                     }
                     else {
                        if(PATH0 & 16384) {
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop307 = 0;
                  int loopLimit307 = (rand()%10)/4 + 1;
                  for(; loop307 < loopLimit307; loop307++) {
                     func21(rng());
                  }
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop308 = 0;
         int loopLimit308 = (rand()%10)/3 + 1;
         for(; loop308 < loopLimit308; loop308++) {
            func15(rng());
         }
      }
   }
   int scalar2 = 1;
   int scalar3 = 1;
   printf("DELETE!\n");
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   func13(rng());
   if(PATH0 & 32768) {
      func19(rng());
      if(PATH0 & 65536) {
      }
      else {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func23();
   }
   else {
      int scalar4 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop309 = 0;
      int loopLimit309 = (rand()%10)/2 + 1;
      for(; loop309 < loopLimit309; loop309++) {
         if(PATH0 & 131072) {
            func22();
         }
         else {
            if(PATH0 & 262144) {
            }
            else {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func23();
         }
      }
      int loop310 = 0;
      int loopLimit310 = (rand()%10)/2 + 1;
      for(; loop310 < loopLimit310; loop310++) {
         func21(rng());
      }
      int scalar5 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   func17(rng());
   if(PATH0 & 524288) {
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop311 = 0;
      int loopLimit311 = (rand()%10)/2 + 1;
      for(; loop311 < loopLimit311; loop311++) {
         if(PATH0 & 1048576) {
            func16(rng());
            if(PATH0 & 2097152) {
               func22();
            }
            else {
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop312 = 0;
               int loopLimit312 = (rand()%10)/3 + 1;
               for(; loop312 < loopLimit312; loop312++) {
                  if(PATH0 & 4194304) {
                  }
                  else {
                  }
               }
               int loop313 = 0;
               int loopLimit313 = (rand()%10)/3 + 1;
               for(; loop313 < loopLimit313; loop313++) {
                  func24();
               }
               int scalar6 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
         else {
            if(PATH0 & 8388608) {
               func19(rng());
               if(PATH0 & 16777216) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar5 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop314 = 0;
               int loopLimit314 = (rand()%10)/3 + 1;
               for(; loop314 < loopLimit314; loop314++) {
                  if(PATH0 & 33554432) {
                     func22();
                  }
                  else {
                     if(PATH0 & 67108864) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop315 = 0;
               int loopLimit315 = (rand()%10)/3 + 1;
               for(; loop315 < loopLimit315; loop315++) {
                  func21(rng());
               }
               int scalar6 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop316 = 0;
      int loopLimit316 = (rand()%10)/2 + 1;
      for(; loop316 < loopLimit316; loop316++) {
         func15(rng());
      }
   }
   else {
      if(PATH0 & 134217728) {
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop317 = 0;
         int loopLimit317 = (rand()%10)/2 + 1;
         for(; loop317 < loopLimit317; loop317++) {
            if(PATH0 & 268435456) {
               func19(rng());
               if(PATH0 & 536870912) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               if(PATH0 & 1073741824) {
                  func22();
               }
               else {
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop318 = 0;
                  int loopLimit318 = (rand()%10)/3 + 1;
                  for(; loop318 < loopLimit318; loop318++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop319 = 0;
                  int loopLimit319 = (rand()%10)/3 + 1;
                  for(; loop319 < loopLimit319; loop319++) {
                     func24();
                  }
                  int scalar6 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
         }
         int loop320 = 0;
         int loopLimit320 = (rand()%10)/2 + 1;
         for(; loop320 < loopLimit320; loop320++) {
            func18(rng());
         }
      }
      else {
         int loop321 = 0;
         int loopLimit321 = (rand()%10)/2 + 1;
         for(; loop321 < loopLimit321; loop321++) {
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop322 = 0;
            int loopLimit322 = (rand()%10)/3 + 1;
            for(; loop322 < loopLimit322; loop322++) {
               if(PATH0 & -2147483648) {
                  func19(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  if(PATH0 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop323 = 0;
                     int loopLimit323 = (rand()%10)/4 + 1;
                     for(; loop323 < loopLimit323; loop323++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop324 = 0;
                     int loopLimit324 = (rand()%10)/4 + 1;
                     for(; loop324 < loopLimit324; loop324++) {
                        func24();
                     }
                     int scalar6 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
            }
            int loop325 = 0;
            int loopLimit325 = (rand()%10)/3 + 1;
            for(; loop325 < loopLimit325; loop325++) {
               func18(rng());
            }
         }
      }
      int scalar4 = 1;
      int scalar5 = 1;
      printf("DELETE!\n");
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func16(rng());
      if(PATH0 & -2147483648) {
         func22();
      }
      else {
         int scalar6 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop326 = 0;
         int loopLimit326 = (rand()%10)/2 + 1;
         for(; loop326 < loopLimit326; loop326++) {
            if(PATH0 & -2147483648) {
            }
            else {
            }
         }
         int loop327 = 0;
         int loopLimit327 = (rand()%10)/2 + 1;
         for(; loop327 < loopLimit327; loop327++) {
            func24();
         }
         int scalar7 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func20(rng());
      if(PATH0 & -2147483648) {
         int scalar6 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop328 = 0;
         int loopLimit328 = (rand()%10)/2 + 1;
         for(; loop328 < loopLimit328; loop328++) {
            if(PATH0 & -2147483648) {
               func19(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar7 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop329 = 0;
                  int loopLimit329 = (rand()%10)/3 + 1;
                  for(; loop329 < loopLimit329; loop329++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop330 = 0;
                  int loopLimit330 = (rand()%10)/3 + 1;
                  for(; loop330 < loopLimit330; loop330++) {
                     func24();
                  }
                  int scalar8 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
         }
         int loop331 = 0;
         int loopLimit331 = (rand()%10)/2 + 1;
         for(; loop331 < loopLimit331; loop331++) {
            func18(rng());
         }
      }
      else {
         if(PATH0 & -2147483648) {
            int scalar6 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop332 = 0;
            int loopLimit332 = (rand()%10)/2 + 1;
            for(; loop332 < loopLimit332; loop332++) {
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
            }
            int loop333 = 0;
            int loopLimit333 = (rand()%10)/2 + 1;
            for(; loop333 < loopLimit333; loop333++) {
               func21(rng());
            }
         }
         else {
            int loop334 = 0;
            int loopLimit334 = (rand()%10)/2 + 1;
            for(; loop334 < loopLimit334; loop334++) {
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop335 = 0;
               int loopLimit335 = (rand()%10)/3 + 1;
               for(; loop335 < loopLimit335; loop335++) {
                  if(PATH0 & -2147483648) {
                     func22();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop336 = 0;
               int loopLimit336 = (rand()%10)/3 + 1;
               for(; loop336 < loopLimit336; loop336++) {
                  func21(rng());
               }
            }
         }
         int scalar6 = 1;
         int scalar7 = 1;
         printf("DELETE!\n");
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func19(rng());
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar8 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func23();
         if(PATH0 & -2147483648) {
            int scalar8 = 1;
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop337 = 0;
            int loopLimit337 = (rand()%10)/2 + 1;
            for(; loop337 < loopLimit337; loop337++) {
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar9 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
            }
            int loop338 = 0;
            int loopLimit338 = (rand()%10)/2 + 1;
            for(; loop338 < loopLimit338; loop338++) {
               func21(rng());
            }
         }
         else {
            if(PATH0 & -2147483648) {
               int scalar8 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop339 = 0;
               int loopLimit339 = (rand()%10)/2 + 1;
               for(; loop339 < loopLimit339; loop339++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop340 = 0;
               int loopLimit340 = (rand()%10)/2 + 1;
               for(; loop340 < loopLimit340; loop340++) {
                  func24();
               }
            }
            else {
               int loop341 = 0;
               int loopLimit341 = (rand()%10)/2 + 1;
               for(; loop341 < loopLimit341; loop341++) {
                  int scalar8 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop342 = 0;
                  int loopLimit342 = (rand()%10)/3 + 1;
                  for(; loop342 < loopLimit342; loop342++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop343 = 0;
                  int loopLimit343 = (rand()%10)/3 + 1;
                  for(; loop343 < loopLimit343; loop343++) {
                     func24();
                  }
               }
            }
            int scalar8 = 1;
            int scalar9 = 1;
            printf("DELETE!\n");
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func22();
            if(PATH0 & -2147483648) {
               int scalar10 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop344 = 0;
               int loopLimit344 = (rand()%10)/2 + 1;
               for(; loop344 < loopLimit344; loop344++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop345 = 0;
               int loopLimit345 = (rand()%10)/2 + 1;
               for(; loop345 < loopLimit345; loop345++) {
                  func24();
               }
            }
            else {
               if(PATH0 & -2147483648) {
               }
               else {
                  int loop346 = 0;
                  int loopLimit346 = (rand()%10)/2 + 1;
                  for(; loop346 < loopLimit346; loop346++) {
                  }
               }
               int scalar10 = 1;
               int scalar11 = 1;
               printf("DELETE!\n");
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               if(PATH0 & -2147483648) {
               }
               else {
               }
            }
         }
      }
   }
}

void func9(const unsigned long PATH0) {
   int scalar3 = 1;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop363 = 0;
   int loopLimit363 = (rand()%10)/3 + 1;
   for(; loop363 < loopLimit363; loop363++) {
      if(PATH0 & 1) {
         func13(rng());
         if(PATH0 & 2) {
            func19(rng());
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
            func23();
         }
         else {
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop364 = 0;
            int loopLimit364 = (rand()%10)/4 + 1;
            for(; loop364 < loopLimit364; loop364++) {
               if(PATH0 & 8) {
                  func22();
               }
               else {
                  if(PATH0 & 16) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
            }
            int loop365 = 0;
            int loopLimit365 = (rand()%10)/4 + 1;
            for(; loop365 < loopLimit365; loop365++) {
               func21(rng());
            }
            int scalar5 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func17(rng());
      }
      else {
         if(PATH0 & 32) {
            func16(rng());
            if(PATH0 & 64) {
               func22();
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop366 = 0;
               int loopLimit366 = (rand()%10)/4 + 1;
               for(; loop366 < loopLimit366; loop366++) {
                  if(PATH0 & 128) {
                  }
                  else {
                  }
               }
               int loop367 = 0;
               int loopLimit367 = (rand()%10)/4 + 1;
               for(; loop367 < loopLimit367; loop367++) {
                  func24();
               }
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
         else {
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop368 = 0;
            int loopLimit368 = (rand()%10)/4 + 1;
            for(; loop368 < loopLimit368; loop368++) {
               if(PATH0 & 256) {
                  func19(rng());
                  if(PATH0 & 512) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  if(PATH0 & 1024) {
                     func22();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop369 = 0;
                     int loopLimit369 = (rand()%10)/5 + 1;
                     for(; loop369 < loopLimit369; loop369++) {
                        if(PATH0 & 2048) {
                        }
                        else {
                        }
                     }
                     int loop370 = 0;
                     int loopLimit370 = (rand()%10)/5 + 1;
                     for(; loop370 < loopLimit370; loop370++) {
                        func24();
                     }
                     int scalar6 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
            }
            int loop371 = 0;
            int loopLimit371 = (rand()%10)/4 + 1;
            for(; loop371 < loopLimit371; loop371++) {
               func18(rng());
            }
            int scalar5 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            printf("DELETE!\n");
         }
         func14(rng());
      }
   }
   int loop372 = 0;
   int loopLimit372 = (rand()%10)/3 + 1;
   for(; loop372 < loopLimit372; loop372++) {
      func12(rng());
   }
}

void func5(const unsigned long PATH0, const unsigned long PATH1) {
   if(PATH0 & 1) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop526 = 0;
      int loopLimit526 = (rand()%10)/2 + 1;
      for(; loop526 < loopLimit526; loop526++) {
         if(PATH0 & 2) {
            func13(rng());
            if(PATH0 & 4) {
               func19(rng());
               if(PATH0 & 8) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop527 = 0;
               int loopLimit527 = (rand()%10)/3 + 1;
               for(; loop527 < loopLimit527; loop527++) {
                  if(PATH0 & 16) {
                     func22();
                  }
                  else {
                     if(PATH0 & 32) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop528 = 0;
               int loopLimit528 = (rand()%10)/3 + 1;
               for(; loop528 < loopLimit528; loop528++) {
                  func21(rng());
               }
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            if(PATH0 & 64) {
               func16(rng());
               if(PATH0 & 128) {
                  func22();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop529 = 0;
                  int loopLimit529 = (rand()%10)/3 + 1;
                  for(; loop529 < loopLimit529; loop529++) {
                     if(PATH0 & 256) {
                     }
                     else {
                     }
                  }
                  int loop530 = 0;
                  int loopLimit530 = (rand()%10)/3 + 1;
                  for(; loop530 < loopLimit530; loop530++) {
                     func24();
                  }
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop531 = 0;
               int loopLimit531 = (rand()%10)/3 + 1;
               for(; loop531 < loopLimit531; loop531++) {
                  if(PATH0 & 512) {
                     func19(rng());
                     if(PATH0 & 1024) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH0 & 2048) {
                        func22();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop532 = 0;
                        int loopLimit532 = (rand()%10)/4 + 1;
                        for(; loop532 < loopLimit532; loop532++) {
                           if(PATH0 & 4096) {
                           }
                           else {
                           }
                        }
                        int loop533 = 0;
                        int loopLimit533 = (rand()%10)/4 + 1;
                        for(; loop533 < loopLimit533; loop533++) {
                           func24();
                        }
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop534 = 0;
               int loopLimit534 = (rand()%10)/3 + 1;
               for(; loop534 < loopLimit534; loop534++) {
                  func18(rng());
               }
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop535 = 0;
      int loopLimit535 = (rand()%10)/2 + 1;
      for(; loop535 < loopLimit535; loop535++) {
         func12(rng());
      }
   }
   else {
      int loop536 = 0;
      int loopLimit536 = (rand()%10)/2 + 1;
      for(; loop536 < loopLimit536; loop536++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop537 = 0;
         int loopLimit537 = (rand()%10)/3 + 1;
         for(; loop537 < loopLimit537; loop537++) {
            if(PATH0 & 8192) {
               func13(rng());
               if(PATH0 & 16384) {
                  func19(rng());
                  if(PATH0 & 32768) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop538 = 0;
                  int loopLimit538 = (rand()%10)/4 + 1;
                  for(; loop538 < loopLimit538; loop538++) {
                     if(PATH0 & 65536) {
                        func22();
                     }
                     else {
                        if(PATH0 & 131072) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop539 = 0;
                  int loopLimit539 = (rand()%10)/4 + 1;
                  for(; loop539 < loopLimit539; loop539++) {
                     func21(rng());
                  }
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH0 & 262144) {
                  func16(rng());
                  if(PATH0 & 524288) {
                     func22();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop540 = 0;
                     int loopLimit540 = (rand()%10)/4 + 1;
                     for(; loop540 < loopLimit540; loop540++) {
                        if(PATH0 & 1048576) {
                        }
                        else {
                        }
                     }
                     int loop541 = 0;
                     int loopLimit541 = (rand()%10)/4 + 1;
                     for(; loop541 < loopLimit541; loop541++) {
                        func24();
                     }
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop542 = 0;
                  int loopLimit542 = (rand()%10)/4 + 1;
                  for(; loop542 < loopLimit542; loop542++) {
                     if(PATH0 & 2097152) {
                        func19(rng());
                        if(PATH0 & 4194304) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH0 & 8388608) {
                           func22();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop543 = 0;
                           int loopLimit543 = (rand()%10)/5 + 1;
                           for(; loop543 < loopLimit543; loop543++) {
                              if(PATH0 & 16777216) {
                              }
                              else {
                              }
                           }
                           int loop544 = 0;
                           int loopLimit544 = (rand()%10)/5 + 1;
                           for(; loop544 < loopLimit544; loop544++) {
                              func24();
                           }
                           int scalar4 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop545 = 0;
                  int loopLimit545 = (rand()%10)/4 + 1;
                  for(; loop545 < loopLimit545; loop545++) {
                     func18(rng());
                  }
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop546 = 0;
         int loopLimit546 = (rand()%10)/3 + 1;
         for(; loop546 < loopLimit546; loop546++) {
            func12(rng());
         }
      }
   }
   int scalar1 = 1;
   int scalar2 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func10(rng());
   if(PATH0 & 33554432) {
      func16(rng());
      if(PATH0 & 67108864) {
         func22();
      }
      else {
         int scalar3 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop547 = 0;
         int loopLimit547 = (rand()%10)/2 + 1;
         for(; loop547 < loopLimit547; loop547++) {
            if(PATH0 & 134217728) {
            }
            else {
            }
         }
         int loop548 = 0;
         int loopLimit548 = (rand()%10)/2 + 1;
         for(; loop548 < loopLimit548; loop548++) {
            func24();
         }
         int scalar4 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func20(rng());
   }
   else {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop549 = 0;
      int loopLimit549 = (rand()%10)/2 + 1;
      for(; loop549 < loopLimit549; loop549++) {
         if(PATH0 & 268435456) {
            func19(rng());
            if(PATH0 & 536870912) {
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func23();
         }
         else {
            if(PATH0 & 1073741824) {
               func22();
            }
            else {
               int scalar4 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop550 = 0;
               int loopLimit550 = (rand()%10)/3 + 1;
               for(; loop550 < loopLimit550; loop550++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop551 = 0;
               int loopLimit551 = (rand()%10)/3 + 1;
               for(; loop551 < loopLimit551; loop551++) {
                  func24();
               }
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
      }
      int loop552 = 0;
      int loopLimit552 = (rand()%10)/2 + 1;
      for(; loop552 < loopLimit552; loop552++) {
         func18(rng());
      }
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar4--;
      printf("DELETE!\n");
   }
   func14(rng());
   if(PATH0 & -2147483648) {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop553 = 0;
      int loopLimit553 = (rand()%10)/2 + 1;
      for(; loop553 < loopLimit553; loop553++) {
         if(PATH0 & -2147483648) {
            func13(rng());
            if(PATH0 & -2147483648) {
               func19(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop554 = 0;
               int loopLimit554 = (rand()%10)/3 + 1;
               for(; loop554 < loopLimit554; loop554++) {
                  if(PATH0 & -2147483648) {
                     func22();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop555 = 0;
               int loopLimit555 = (rand()%10)/3 + 1;
               for(; loop555 < loopLimit555; loop555++) {
                  func21(rng());
               }
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            if(PATH0 & -2147483648) {
               func16(rng());
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop556 = 0;
                  int loopLimit556 = (rand()%10)/3 + 1;
                  for(; loop556 < loopLimit556; loop556++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop557 = 0;
                  int loopLimit557 = (rand()%10)/3 + 1;
                  for(; loop557 < loopLimit557; loop557++) {
                     func24();
                  }
                  int scalar5 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop558 = 0;
               int loopLimit558 = (rand()%10)/3 + 1;
               for(; loop558 < loopLimit558; loop558++) {
                  if(PATH0 & -2147483648) {
                     func19(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop559 = 0;
                        int loopLimit559 = (rand()%10)/4 + 1;
                        for(; loop559 < loopLimit559; loop559++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop560 = 0;
                        int loopLimit560 = (rand()%10)/4 + 1;
                        for(; loop560 < loopLimit560; loop560++) {
                           func24();
                        }
                        int scalar6 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop561 = 0;
               int loopLimit561 = (rand()%10)/3 + 1;
               for(; loop561 < loopLimit561; loop561++) {
                  func18(rng());
               }
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop562 = 0;
      int loopLimit562 = (rand()%10)/2 + 1;
      for(; loop562 < loopLimit562; loop562++) {
         func12(rng());
      }
   }
   else {
      if(PATH0 & -2147483648) {
         int scalar3 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop563 = 0;
         int loopLimit563 = (rand()%10)/2 + 1;
         for(; loop563 < loopLimit563; loop563++) {
            if(PATH0 & -2147483648) {
               func16(rng());
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop564 = 0;
                  int loopLimit564 = (rand()%10)/3 + 1;
                  for(; loop564 < loopLimit564; loop564++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop565 = 0;
                  int loopLimit565 = (rand()%10)/3 + 1;
                  for(; loop565 < loopLimit565; loop565++) {
                     func24();
                  }
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               if(PATH0 & -2147483648) {
                  func19(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop566 = 0;
                  int loopLimit566 = (rand()%10)/3 + 1;
                  for(; loop566 < loopLimit566; loop566++) {
                     if(PATH0 & -2147483648) {
                        func22();
                     }
                     else {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop567 = 0;
                  int loopLimit567 = (rand()%10)/3 + 1;
                  for(; loop567 < loopLimit567; loop567++) {
                     func21(rng());
                  }
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop568 = 0;
         int loopLimit568 = (rand()%10)/2 + 1;
         for(; loop568 < loopLimit568; loop568++) {
            func15(rng());
         }
      }
      else {
         int loop569 = 0;
         int loopLimit569 = (rand()%10)/2 + 1;
         for(; loop569 < loopLimit569; loop569++) {
            int scalar3 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop570 = 0;
            int loopLimit570 = (rand()%10)/3 + 1;
            for(; loop570 < loopLimit570; loop570++) {
               if(PATH0 & -2147483648) {
                  func16(rng());
                  if(PATH0 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop571 = 0;
                     int loopLimit571 = (rand()%10)/4 + 1;
                     for(; loop571 < loopLimit571; loop571++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop572 = 0;
                     int loopLimit572 = (rand()%10)/4 + 1;
                     for(; loop572 < loopLimit572; loop572++) {
                        func24();
                     }
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  if(PATH0 & -2147483648) {
                     func19(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop573 = 0;
                     int loopLimit573 = (rand()%10)/4 + 1;
                     for(; loop573 < loopLimit573; loop573++) {
                        if(PATH0 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop574 = 0;
                     int loopLimit574 = (rand()%10)/4 + 1;
                     for(; loop574 < loopLimit574; loop574++) {
                        func21(rng());
                     }
                     int scalar5 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop575 = 0;
            int loopLimit575 = (rand()%10)/3 + 1;
            for(; loop575 < loopLimit575; loop575++) {
               func15(rng());
            }
         }
      }
      int scalar3 = 1;
      int scalar4 = 1;
      printf("DELETE!\n");
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func13(rng());
      if(PATH0 & -2147483648) {
         func19(rng());
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar5 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func23();
      }
      else {
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop576 = 0;
         int loopLimit576 = (rand()%10)/2 + 1;
         for(; loop576 < loopLimit576; loop576++) {
            if(PATH0 & -2147483648) {
               func22();
            }
            else {
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func23();
            }
         }
         int loop577 = 0;
         int loopLimit577 = (rand()%10)/2 + 1;
         for(; loop577 < loopLimit577; loop577++) {
            func21(rng());
         }
         int scalar6 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func17(rng());
      if(PATH1 & 1) {
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop578 = 0;
         int loopLimit578 = (rand()%10)/2 + 1;
         for(; loop578 < loopLimit578; loop578++) {
            if(PATH1 & 2) {
               func16(rng());
               if(PATH1 & 4) {
                  func22();
               }
               else {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop579 = 0;
                  int loopLimit579 = (rand()%10)/3 + 1;
                  for(; loop579 < loopLimit579; loop579++) {
                     if(PATH1 & 8) {
                     }
                     else {
                     }
                  }
                  int loop580 = 0;
                  int loopLimit580 = (rand()%10)/3 + 1;
                  for(; loop580 < loopLimit580; loop580++) {
                     func24();
                  }
                  int scalar7 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               if(PATH1 & 16) {
                  func19(rng());
                  if(PATH1 & 32) {
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar6 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop581 = 0;
                  int loopLimit581 = (rand()%10)/3 + 1;
                  for(; loop581 < loopLimit581; loop581++) {
                     if(PATH1 & 64) {
                        func22();
                     }
                     else {
                        if(PATH1 & 128) {
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar6--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop582 = 0;
                  int loopLimit582 = (rand()%10)/3 + 1;
                  for(; loop582 < loopLimit582; loop582++) {
                     func21(rng());
                  }
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop583 = 0;
         int loopLimit583 = (rand()%10)/2 + 1;
         for(; loop583 < loopLimit583; loop583++) {
            func15(rng());
         }
      }
      else {
         if(PATH1 & 256) {
            int scalar5 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop584 = 0;
            int loopLimit584 = (rand()%10)/2 + 1;
            for(; loop584 < loopLimit584; loop584++) {
               if(PATH1 & 512) {
                  func19(rng());
                  if(PATH1 & 1024) {
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  if(PATH1 & 2048) {
                     func22();
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop585 = 0;
                     int loopLimit585 = (rand()%10)/3 + 1;
                     for(; loop585 < loopLimit585; loop585++) {
                        if(PATH1 & 4096) {
                        }
                        else {
                        }
                     }
                     int loop586 = 0;
                     int loopLimit586 = (rand()%10)/3 + 1;
                     for(; loop586 < loopLimit586; loop586++) {
                        func24();
                     }
                     int scalar7 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
            }
            int loop587 = 0;
            int loopLimit587 = (rand()%10)/2 + 1;
            for(; loop587 < loopLimit587; loop587++) {
               func18(rng());
            }
         }
         else {
            int loop588 = 0;
            int loopLimit588 = (rand()%10)/2 + 1;
            for(; loop588 < loopLimit588; loop588++) {
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop589 = 0;
               int loopLimit589 = (rand()%10)/3 + 1;
               for(; loop589 < loopLimit589; loop589++) {
                  if(PATH1 & 8192) {
                     func19(rng());
                     if(PATH1 & 16384) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH1 & 32768) {
                        func22();
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop590 = 0;
                        int loopLimit590 = (rand()%10)/4 + 1;
                        for(; loop590 < loopLimit590; loop590++) {
                           if(PATH1 & 65536) {
                           }
                           else {
                           }
                        }
                        int loop591 = 0;
                        int loopLimit591 = (rand()%10)/4 + 1;
                        for(; loop591 < loopLimit591; loop591++) {
                           func24();
                        }
                        int scalar7 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop592 = 0;
               int loopLimit592 = (rand()%10)/3 + 1;
               for(; loop592 < loopLimit592; loop592++) {
                  func18(rng());
               }
            }
         }
         int scalar5 = 1;
         int scalar6 = 1;
         printf("DELETE!\n");
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func16(rng());
         if(PATH1 & 131072) {
            func22();
         }
         else {
            int scalar7 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop593 = 0;
            int loopLimit593 = (rand()%10)/2 + 1;
            for(; loop593 < loopLimit593; loop593++) {
               if(PATH1 & 262144) {
               }
               else {
               }
            }
            int loop594 = 0;
            int loopLimit594 = (rand()%10)/2 + 1;
            for(; loop594 < loopLimit594; loop594++) {
               func24();
            }
            int scalar8 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func20(rng());
         if(PATH1 & 524288) {
            int scalar7 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop595 = 0;
            int loopLimit595 = (rand()%10)/2 + 1;
            for(; loop595 < loopLimit595; loop595++) {
               if(PATH1 & 1048576) {
                  func19(rng());
                  if(PATH1 & 2097152) {
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  if(PATH1 & 4194304) {
                     func22();
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop596 = 0;
                     int loopLimit596 = (rand()%10)/3 + 1;
                     for(; loop596 < loopLimit596; loop596++) {
                        if(PATH1 & 8388608) {
                        }
                        else {
                        }
                     }
                     int loop597 = 0;
                     int loopLimit597 = (rand()%10)/3 + 1;
                     for(; loop597 < loopLimit597; loop597++) {
                        func24();
                     }
                     int scalar9 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
            }
            int loop598 = 0;
            int loopLimit598 = (rand()%10)/2 + 1;
            for(; loop598 < loopLimit598; loop598++) {
               func18(rng());
            }
         }
         else {
            if(PATH1 & 16777216) {
               int scalar7 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop599 = 0;
               int loopLimit599 = (rand()%10)/2 + 1;
               for(; loop599 < loopLimit599; loop599++) {
                  if(PATH1 & 33554432) {
                     func22();
                  }
                  else {
                     if(PATH1 & 67108864) {
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar8--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop600 = 0;
               int loopLimit600 = (rand()%10)/2 + 1;
               for(; loop600 < loopLimit600; loop600++) {
                  func21(rng());
               }
            }
            else {
               int loop601 = 0;
               int loopLimit601 = (rand()%10)/2 + 1;
               for(; loop601 < loopLimit601; loop601++) {
                  int scalar7 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop602 = 0;
                  int loopLimit602 = (rand()%10)/3 + 1;
                  for(; loop602 < loopLimit602; loop602++) {
                     if(PATH1 & 134217728) {
                        func22();
                     }
                     else {
                        if(PATH1 & 268435456) {
                        }
                        else {
                           int scalar8 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar6--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop603 = 0;
                  int loopLimit603 = (rand()%10)/3 + 1;
                  for(; loop603 < loopLimit603; loop603++) {
                     func21(rng());
                  }
               }
            }
            int scalar7 = 1;
            int scalar8 = 1;
            printf("DELETE!\n");
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            func19(rng());
            if(PATH1 & 536870912) {
            }
            else {
               int scalar9 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar7--;
               printf("DELETE!\n");
            }
            func23();
            if(PATH1 & 1073741824) {
               int scalar9 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop604 = 0;
               int loopLimit604 = (rand()%10)/2 + 1;
               for(; loop604 < loopLimit604; loop604++) {
                  if(PATH1 & -2147483648) {
                     func22();
                  }
                  else {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar10 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop605 = 0;
               int loopLimit605 = (rand()%10)/2 + 1;
               for(; loop605 < loopLimit605; loop605++) {
                  func21(rng());
               }
            }
            else {
               if(PATH1 & -2147483648) {
                  int scalar9 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop606 = 0;
                  int loopLimit606 = (rand()%10)/2 + 1;
                  for(; loop606 < loopLimit606; loop606++) {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop607 = 0;
                  int loopLimit607 = (rand()%10)/2 + 1;
                  for(; loop607 < loopLimit607; loop607++) {
                     func24();
                  }
               }
               else {
                  int loop608 = 0;
                  int loopLimit608 = (rand()%10)/2 + 1;
                  for(; loop608 < loopLimit608; loop608++) {
                     int scalar9 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop609 = 0;
                     int loopLimit609 = (rand()%10)/3 + 1;
                     for(; loop609 < loopLimit609; loop609++) {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop610 = 0;
                     int loopLimit610 = (rand()%10)/3 + 1;
                     for(; loop610 < loopLimit610; loop610++) {
                        func24();
                     }
                  }
               }
               int scalar9 = 1;
               int scalar10 = 1;
               printf("DELETE!\n");
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               func22();
               if(PATH1 & -2147483648) {
                  int scalar11 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop611 = 0;
                  int loopLimit611 = (rand()%10)/2 + 1;
                  for(; loop611 < loopLimit611; loop611++) {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop612 = 0;
                  int loopLimit612 = (rand()%10)/2 + 1;
                  for(; loop612 < loopLimit612; loop612++) {
                     func24();
                  }
               }
               else {
                  if(PATH1 & -2147483648) {
                  }
                  else {
                     int loop613 = 0;
                     int loopLimit613 = (rand()%10)/2 + 1;
                     for(; loop613 < loopLimit613; loop613++) {
                     }
                  }
                  int scalar11 = 1;
                  int scalar12 = 1;
                  printf("DELETE!\n");
                  if (scalar12 == 0) {
                     printf("IS 0!");
                  }
                  if(PATH1 & -2147483648) {
                  }
                  else {
                  }
               }
            }
         }
      }
   }
}

void func6(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop656 = 0;
   int loopLimit656 = (rand()%10)/3 + 1;
   for(; loop656 < loopLimit656; loop656++) {
      if(PATH0 & 1) {
         func10(rng());
         if(PATH0 & 2) {
            func16(rng());
            if(PATH0 & 4) {
               func22();
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop657 = 0;
               int loopLimit657 = (rand()%10)/4 + 1;
               for(; loop657 < loopLimit657; loop657++) {
                  if(PATH0 & 8) {
                  }
                  else {
                  }
               }
               int loop658 = 0;
               int loopLimit658 = (rand()%10)/4 + 1;
               for(; loop658 < loopLimit658; loop658++) {
                  func24();
               }
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop659 = 0;
            int loopLimit659 = (rand()%10)/4 + 1;
            for(; loop659 < loopLimit659; loop659++) {
               if(PATH0 & 16) {
                  func19(rng());
                  if(PATH0 & 32) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  if(PATH0 & 64) {
                     func22();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop660 = 0;
                     int loopLimit660 = (rand()%10)/5 + 1;
                     for(; loop660 < loopLimit660; loop660++) {
                        if(PATH0 & 128) {
                        }
                        else {
                        }
                     }
                     int loop661 = 0;
                     int loopLimit661 = (rand()%10)/5 + 1;
                     for(; loop661 < loopLimit661; loop661++) {
                        func24();
                     }
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
            }
            int loop662 = 0;
            int loopLimit662 = (rand()%10)/4 + 1;
            for(; loop662 < loopLimit662; loop662++) {
               func18(rng());
            }
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func14(rng());
      }
      else {
         if(PATH0 & 256) {
            func13(rng());
            if(PATH0 & 512) {
               func19(rng());
               if(PATH0 & 1024) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop663 = 0;
               int loopLimit663 = (rand()%10)/4 + 1;
               for(; loop663 < loopLimit663; loop663++) {
                  if(PATH0 & 2048) {
                     func22();
                  }
                  else {
                     if(PATH0 & 4096) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop664 = 0;
               int loopLimit664 = (rand()%10)/4 + 1;
               for(; loop664 < loopLimit664; loop664++) {
                  func21(rng());
               }
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop665 = 0;
            int loopLimit665 = (rand()%10)/4 + 1;
            for(; loop665 < loopLimit665; loop665++) {
               if(PATH0 & 8192) {
                  func16(rng());
                  if(PATH0 & 16384) {
                     func22();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop666 = 0;
                     int loopLimit666 = (rand()%10)/5 + 1;
                     for(; loop666 < loopLimit666; loop666++) {
                        if(PATH0 & 32768) {
                        }
                        else {
                        }
                     }
                     int loop667 = 0;
                     int loopLimit667 = (rand()%10)/5 + 1;
                     for(; loop667 < loopLimit667; loop667++) {
                        func24();
                     }
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  if(PATH0 & 65536) {
                     func19(rng());
                     if(PATH0 & 131072) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop668 = 0;
                     int loopLimit668 = (rand()%10)/5 + 1;
                     for(; loop668 < loopLimit668; loop668++) {
                        if(PATH0 & 262144) {
                           func22();
                        }
                        else {
                           if(PATH0 & 524288) {
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop669 = 0;
                     int loopLimit669 = (rand()%10)/5 + 1;
                     for(; loop669 < loopLimit669; loop669++) {
                        func21(rng());
                     }
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop670 = 0;
            int loopLimit670 = (rand()%10)/4 + 1;
            for(; loop670 < loopLimit670; loop670++) {
               func15(rng());
            }
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func11(rng());
      }
   }
   int loop671 = 0;
   int loopLimit671 = (rand()%10)/3 + 1;
   for(; loop671 < loopLimit671; loop671++) {
      func9(rng());
   }
}

void func2(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2) {
   if(PATH0 & 1) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop672 = 0;
      int loopLimit672 = (rand()%10)/2 + 1;
      for(; loop672 < loopLimit672; loop672++) {
         if(PATH0 & 2) {
            func10(rng());
            if(PATH0 & 4) {
               func16(rng());
               if(PATH0 & 8) {
                  func22();
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop673 = 0;
                  int loopLimit673 = (rand()%10)/3 + 1;
                  for(; loop673 < loopLimit673; loop673++) {
                     if(PATH0 & 16) {
                     }
                     else {
                     }
                  }
                  int loop674 = 0;
                  int loopLimit674 = (rand()%10)/3 + 1;
                  for(; loop674 < loopLimit674; loop674++) {
                     func24();
                  }
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop675 = 0;
               int loopLimit675 = (rand()%10)/3 + 1;
               for(; loop675 < loopLimit675; loop675++) {
                  if(PATH0 & 32) {
                     func19(rng());
                     if(PATH0 & 64) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH0 & 128) {
                        func22();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop676 = 0;
                        int loopLimit676 = (rand()%10)/4 + 1;
                        for(; loop676 < loopLimit676; loop676++) {
                           if(PATH0 & 256) {
                           }
                           else {
                           }
                        }
                        int loop677 = 0;
                        int loopLimit677 = (rand()%10)/4 + 1;
                        for(; loop677 < loopLimit677; loop677++) {
                           func24();
                        }
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop678 = 0;
               int loopLimit678 = (rand()%10)/3 + 1;
               for(; loop678 < loopLimit678; loop678++) {
                  func18(rng());
               }
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            if(PATH0 & 512) {
               func13(rng());
               if(PATH0 & 1024) {
                  func19(rng());
                  if(PATH0 & 2048) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop679 = 0;
                  int loopLimit679 = (rand()%10)/3 + 1;
                  for(; loop679 < loopLimit679; loop679++) {
                     if(PATH0 & 4096) {
                        func22();
                     }
                     else {
                        if(PATH0 & 8192) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop680 = 0;
                  int loopLimit680 = (rand()%10)/3 + 1;
                  for(; loop680 < loopLimit680; loop680++) {
                     func21(rng());
                  }
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop681 = 0;
               int loopLimit681 = (rand()%10)/3 + 1;
               for(; loop681 < loopLimit681; loop681++) {
                  if(PATH0 & 16384) {
                     func16(rng());
                     if(PATH0 & 32768) {
                        func22();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop682 = 0;
                        int loopLimit682 = (rand()%10)/4 + 1;
                        for(; loop682 < loopLimit682; loop682++) {
                           if(PATH0 & 65536) {
                           }
                           else {
                           }
                        }
                        int loop683 = 0;
                        int loopLimit683 = (rand()%10)/4 + 1;
                        for(; loop683 < loopLimit683; loop683++) {
                           func24();
                        }
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     if(PATH0 & 131072) {
                        func19(rng());
                        if(PATH0 & 262144) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop684 = 0;
                        int loopLimit684 = (rand()%10)/4 + 1;
                        for(; loop684 < loopLimit684; loop684++) {
                           if(PATH0 & 524288) {
                              func22();
                           }
                           else {
                              if(PATH0 & 1048576) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop685 = 0;
                        int loopLimit685 = (rand()%10)/4 + 1;
                        for(; loop685 < loopLimit685; loop685++) {
                           func21(rng());
                        }
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop686 = 0;
               int loopLimit686 = (rand()%10)/3 + 1;
               for(; loop686 < loopLimit686; loop686++) {
                  func15(rng());
               }
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop687 = 0;
      int loopLimit687 = (rand()%10)/2 + 1;
      for(; loop687 < loopLimit687; loop687++) {
         func9(rng());
      }
   }
   else {
      int loop688 = 0;
      int loopLimit688 = (rand()%10)/2 + 1;
      for(; loop688 < loopLimit688; loop688++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop689 = 0;
         int loopLimit689 = (rand()%10)/3 + 1;
         for(; loop689 < loopLimit689; loop689++) {
            if(PATH0 & 2097152) {
               func10(rng());
               if(PATH0 & 4194304) {
                  func16(rng());
                  if(PATH0 & 8388608) {
                     func22();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop690 = 0;
                     int loopLimit690 = (rand()%10)/4 + 1;
                     for(; loop690 < loopLimit690; loop690++) {
                        if(PATH0 & 16777216) {
                        }
                        else {
                        }
                     }
                     int loop691 = 0;
                     int loopLimit691 = (rand()%10)/4 + 1;
                     for(; loop691 < loopLimit691; loop691++) {
                        func24();
                     }
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop692 = 0;
                  int loopLimit692 = (rand()%10)/4 + 1;
                  for(; loop692 < loopLimit692; loop692++) {
                     if(PATH0 & 33554432) {
                        func19(rng());
                        if(PATH0 & 67108864) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH0 & 134217728) {
                           func22();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop693 = 0;
                           int loopLimit693 = (rand()%10)/5 + 1;
                           for(; loop693 < loopLimit693; loop693++) {
                              if(PATH0 & 268435456) {
                              }
                              else {
                              }
                           }
                           int loop694 = 0;
                           int loopLimit694 = (rand()%10)/5 + 1;
                           for(; loop694 < loopLimit694; loop694++) {
                              func24();
                           }
                           int scalar4 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop695 = 0;
                  int loopLimit695 = (rand()%10)/4 + 1;
                  for(; loop695 < loopLimit695; loop695++) {
                     func18(rng());
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
            else {
               if(PATH0 & 536870912) {
                  func13(rng());
                  if(PATH0 & 1073741824) {
                     func19(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop696 = 0;
                     int loopLimit696 = (rand()%10)/4 + 1;
                     for(; loop696 < loopLimit696; loop696++) {
                        if(PATH0 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop697 = 0;
                     int loopLimit697 = (rand()%10)/4 + 1;
                     for(; loop697 < loopLimit697; loop697++) {
                        func21(rng());
                     }
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop698 = 0;
                  int loopLimit698 = (rand()%10)/4 + 1;
                  for(; loop698 < loopLimit698; loop698++) {
                     if(PATH0 & -2147483648) {
                        func16(rng());
                        if(PATH0 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop699 = 0;
                           int loopLimit699 = (rand()%10)/5 + 1;
                           for(; loop699 < loopLimit699; loop699++) {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop700 = 0;
                           int loopLimit700 = (rand()%10)/5 + 1;
                           for(; loop700 < loopLimit700; loop700++) {
                              func24();
                           }
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                     else {
                        if(PATH0 & -2147483648) {
                           func19(rng());
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop701 = 0;
                           int loopLimit701 = (rand()%10)/5 + 1;
                           for(; loop701 < loopLimit701; loop701++) {
                              if(PATH0 & -2147483648) {
                                 func22();
                              }
                              else {
                                 if(PATH0 & -2147483648) {
                                 }
                                 else {
                                    int scalar4 = 1;
                                    if (scalar4 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar4--;
                                    printf("DELETE!\n");
                                 }
                                 func23();
                              }
                           }
                           int loop702 = 0;
                           int loopLimit702 = (rand()%10)/5 + 1;
                           for(; loop702 < loopLimit702; loop702++) {
                              func21(rng());
                           }
                           int scalar4 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop703 = 0;
                  int loopLimit703 = (rand()%10)/4 + 1;
                  for(; loop703 < loopLimit703; loop703++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
         }
         int loop704 = 0;
         int loopLimit704 = (rand()%10)/3 + 1;
         for(; loop704 < loopLimit704; loop704++) {
            func9(rng());
         }
      }
   }
   int scalar1 = 1;
   int scalar2 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func7(rng(), rng());
   if(PATH0 & -2147483648) {
      func13(rng());
      if(PATH0 & -2147483648) {
         func19(rng());
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar3 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func23();
      }
      else {
         int scalar3 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop705 = 0;
         int loopLimit705 = (rand()%10)/2 + 1;
         for(; loop705 < loopLimit705; loop705++) {
            if(PATH0 & -2147483648) {
               func22();
            }
            else {
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func23();
            }
         }
         int loop706 = 0;
         int loopLimit706 = (rand()%10)/2 + 1;
         for(; loop706 < loopLimit706; loop706++) {
            func21(rng());
         }
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func17(rng());
   }
   else {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop707 = 0;
      int loopLimit707 = (rand()%10)/2 + 1;
      for(; loop707 < loopLimit707; loop707++) {
         if(PATH0 & -2147483648) {
            func16(rng());
            if(PATH0 & -2147483648) {
               func22();
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop708 = 0;
               int loopLimit708 = (rand()%10)/3 + 1;
               for(; loop708 < loopLimit708; loop708++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop709 = 0;
               int loopLimit709 = (rand()%10)/3 + 1;
               for(; loop709 < loopLimit709; loop709++) {
                  func24();
               }
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func20(rng());
         }
         else {
            if(PATH0 & -2147483648) {
               func19(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop710 = 0;
               int loopLimit710 = (rand()%10)/3 + 1;
               for(; loop710 < loopLimit710; loop710++) {
                  if(PATH0 & -2147483648) {
                     func22();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop711 = 0;
               int loopLimit711 = (rand()%10)/3 + 1;
               for(; loop711 < loopLimit711; loop711++) {
                  func21(rng());
               }
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop712 = 0;
      int loopLimit712 = (rand()%10)/2 + 1;
      for(; loop712 < loopLimit712; loop712++) {
         func15(rng());
      }
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      printf("DELETE!\n");
   }
   func11(rng());
   if(PATH0 & -2147483648) {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop713 = 0;
      int loopLimit713 = (rand()%10)/2 + 1;
      for(; loop713 < loopLimit713; loop713++) {
         if(PATH0 & -2147483648) {
            func10(rng());
            if(PATH0 & -2147483648) {
               func16(rng());
               if(PATH0 & -2147483648) {
                  func22();
               }
               else {
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop714 = 0;
                  int loopLimit714 = (rand()%10)/3 + 1;
                  for(; loop714 < loopLimit714; loop714++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop715 = 0;
                  int loopLimit715 = (rand()%10)/3 + 1;
                  for(; loop715 < loopLimit715; loop715++) {
                     func24();
                  }
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop716 = 0;
               int loopLimit716 = (rand()%10)/3 + 1;
               for(; loop716 < loopLimit716; loop716++) {
                  if(PATH0 & -2147483648) {
                     func19(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop717 = 0;
                        int loopLimit717 = (rand()%10)/4 + 1;
                        for(; loop717 < loopLimit717; loop717++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop718 = 0;
                        int loopLimit718 = (rand()%10)/4 + 1;
                        for(; loop718 < loopLimit718; loop718++) {
                           func24();
                        }
                        int scalar6 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop719 = 0;
               int loopLimit719 = (rand()%10)/3 + 1;
               for(; loop719 < loopLimit719; loop719++) {
                  func18(rng());
               }
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            if(PATH0 & -2147483648) {
               func13(rng());
               if(PATH0 & -2147483648) {
                  func19(rng());
                  if(PATH1 & 1) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar4 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop720 = 0;
                  int loopLimit720 = (rand()%10)/3 + 1;
                  for(; loop720 < loopLimit720; loop720++) {
                     if(PATH1 & 2) {
                        func22();
                     }
                     else {
                        if(PATH1 & 4) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop721 = 0;
                  int loopLimit721 = (rand()%10)/3 + 1;
                  for(; loop721 < loopLimit721; loop721++) {
                     func21(rng());
                  }
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop722 = 0;
               int loopLimit722 = (rand()%10)/3 + 1;
               for(; loop722 < loopLimit722; loop722++) {
                  if(PATH1 & 8) {
                     func16(rng());
                     if(PATH1 & 16) {
                        func22();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop723 = 0;
                        int loopLimit723 = (rand()%10)/4 + 1;
                        for(; loop723 < loopLimit723; loop723++) {
                           if(PATH1 & 32) {
                           }
                           else {
                           }
                        }
                        int loop724 = 0;
                        int loopLimit724 = (rand()%10)/4 + 1;
                        for(; loop724 < loopLimit724; loop724++) {
                           func24();
                        }
                        int scalar6 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     if(PATH1 & 64) {
                        func19(rng());
                        if(PATH1 & 128) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop725 = 0;
                        int loopLimit725 = (rand()%10)/4 + 1;
                        for(; loop725 < loopLimit725; loop725++) {
                           if(PATH1 & 256) {
                              func22();
                           }
                           else {
                              if(PATH1 & 512) {
                              }
                              else {
                                 int scalar6 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar3--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop726 = 0;
                        int loopLimit726 = (rand()%10)/4 + 1;
                        for(; loop726 < loopLimit726; loop726++) {
                           func21(rng());
                        }
                        int scalar6 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop727 = 0;
               int loopLimit727 = (rand()%10)/3 + 1;
               for(; loop727 < loopLimit727; loop727++) {
                  func15(rng());
               }
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop728 = 0;
      int loopLimit728 = (rand()%10)/2 + 1;
      for(; loop728 < loopLimit728; loop728++) {
         func9(rng());
      }
   }
   else {
      if(PATH1 & 1024) {
         int scalar3 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop729 = 0;
         int loopLimit729 = (rand()%10)/2 + 1;
         for(; loop729 < loopLimit729; loop729++) {
            if(PATH1 & 2048) {
               func13(rng());
               if(PATH1 & 4096) {
                  func19(rng());
                  if(PATH1 & 8192) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop730 = 0;
                  int loopLimit730 = (rand()%10)/3 + 1;
                  for(; loop730 < loopLimit730; loop730++) {
                     if(PATH1 & 16384) {
                        func22();
                     }
                     else {
                        if(PATH1 & 32768) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop731 = 0;
                  int loopLimit731 = (rand()%10)/3 + 1;
                  for(; loop731 < loopLimit731; loop731++) {
                     func21(rng());
                  }
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH1 & 65536) {
                  func16(rng());
                  if(PATH1 & 131072) {
                     func22();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop732 = 0;
                     int loopLimit732 = (rand()%10)/3 + 1;
                     for(; loop732 < loopLimit732; loop732++) {
                        if(PATH1 & 262144) {
                        }
                        else {
                        }
                     }
                     int loop733 = 0;
                     int loopLimit733 = (rand()%10)/3 + 1;
                     for(; loop733 < loopLimit733; loop733++) {
                        func24();
                     }
                     int scalar5 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  int scalar4 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop734 = 0;
                  int loopLimit734 = (rand()%10)/3 + 1;
                  for(; loop734 < loopLimit734; loop734++) {
                     if(PATH1 & 524288) {
                        func19(rng());
                        if(PATH1 & 1048576) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH1 & 2097152) {
                           func22();
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop735 = 0;
                           int loopLimit735 = (rand()%10)/4 + 1;
                           for(; loop735 < loopLimit735; loop735++) {
                              if(PATH1 & 4194304) {
                              }
                              else {
                              }
                           }
                           int loop736 = 0;
                           int loopLimit736 = (rand()%10)/4 + 1;
                           for(; loop736 < loopLimit736; loop736++) {
                              func24();
                           }
                           int scalar6 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop737 = 0;
                  int loopLimit737 = (rand()%10)/3 + 1;
                  for(; loop737 < loopLimit737; loop737++) {
                     func18(rng());
                  }
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop738 = 0;
         int loopLimit738 = (rand()%10)/2 + 1;
         for(; loop738 < loopLimit738; loop738++) {
            func12(rng());
         }
      }
      else {
         int loop739 = 0;
         int loopLimit739 = (rand()%10)/2 + 1;
         for(; loop739 < loopLimit739; loop739++) {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop740 = 0;
            int loopLimit740 = (rand()%10)/3 + 1;
            for(; loop740 < loopLimit740; loop740++) {
               if(PATH1 & 8388608) {
                  func13(rng());
                  if(PATH1 & 16777216) {
                     func19(rng());
                     if(PATH1 & 33554432) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop741 = 0;
                     int loopLimit741 = (rand()%10)/4 + 1;
                     for(; loop741 < loopLimit741; loop741++) {
                        if(PATH1 & 67108864) {
                           func22();
                        }
                        else {
                           if(PATH1 & 134217728) {
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop742 = 0;
                     int loopLimit742 = (rand()%10)/4 + 1;
                     for(; loop742 < loopLimit742; loop742++) {
                        func21(rng());
                     }
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  if(PATH1 & 268435456) {
                     func16(rng());
                     if(PATH1 & 536870912) {
                        func22();
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop743 = 0;
                        int loopLimit743 = (rand()%10)/4 + 1;
                        for(; loop743 < loopLimit743; loop743++) {
                           if(PATH1 & 1073741824) {
                           }
                           else {
                           }
                        }
                        int loop744 = 0;
                        int loopLimit744 = (rand()%10)/4 + 1;
                        for(; loop744 < loopLimit744; loop744++) {
                           func24();
                        }
                        int scalar5 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop745 = 0;
                     int loopLimit745 = (rand()%10)/4 + 1;
                     for(; loop745 < loopLimit745; loop745++) {
                        if(PATH1 & -2147483648) {
                           func19(rng());
                           if(PATH1 & -2147483648) {
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           if(PATH1 & -2147483648) {
                              func22();
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop746 = 0;
                              int loopLimit746 = (rand()%10)/5 + 1;
                              for(; loop746 < loopLimit746; loop746++) {
                                 if(PATH1 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop747 = 0;
                              int loopLimit747 = (rand()%10)/5 + 1;
                              for(; loop747 < loopLimit747; loop747++) {
                                 func24();
                              }
                              int scalar6 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                     }
                     int loop748 = 0;
                     int loopLimit748 = (rand()%10)/4 + 1;
                     for(; loop748 < loopLimit748; loop748++) {
                        func18(rng());
                     }
                     int scalar5 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
            }
            int loop749 = 0;
            int loopLimit749 = (rand()%10)/3 + 1;
            for(; loop749 < loopLimit749; loop749++) {
               func12(rng());
            }
         }
      }
      int scalar3 = 1;
      int scalar4 = 1;
      printf("DELETE!\n");
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func10(rng());
      if(PATH1 & -2147483648) {
         func16(rng());
         if(PATH1 & -2147483648) {
            func22();
         }
         else {
            int scalar5 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop750 = 0;
            int loopLimit750 = (rand()%10)/2 + 1;
            for(; loop750 < loopLimit750; loop750++) {
               if(PATH1 & -2147483648) {
               }
               else {
               }
            }
            int loop751 = 0;
            int loopLimit751 = (rand()%10)/2 + 1;
            for(; loop751 < loopLimit751; loop751++) {
               func24();
            }
            int scalar6 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func20(rng());
      }
      else {
         int scalar5 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop752 = 0;
         int loopLimit752 = (rand()%10)/2 + 1;
         for(; loop752 < loopLimit752; loop752++) {
            if(PATH1 & -2147483648) {
               func19(rng());
               if(PATH1 & -2147483648) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               if(PATH1 & -2147483648) {
                  func22();
               }
               else {
                  int scalar6 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop753 = 0;
                  int loopLimit753 = (rand()%10)/3 + 1;
                  for(; loop753 < loopLimit753; loop753++) {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop754 = 0;
                  int loopLimit754 = (rand()%10)/3 + 1;
                  for(; loop754 < loopLimit754; loop754++) {
                     func24();
                  }
                  int scalar7 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
         }
         int loop755 = 0;
         int loopLimit755 = (rand()%10)/2 + 1;
         for(; loop755 < loopLimit755; loop755++) {
            func18(rng());
         }
         int scalar6 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func14(rng());
      if(PATH1 & -2147483648) {
         int scalar5 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop756 = 0;
         int loopLimit756 = (rand()%10)/2 + 1;
         for(; loop756 < loopLimit756; loop756++) {
            if(PATH1 & -2147483648) {
               func13(rng());
               if(PATH1 & -2147483648) {
                  func19(rng());
                  if(PATH1 & -2147483648) {
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
               else {
                  int scalar6 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop757 = 0;
                  int loopLimit757 = (rand()%10)/3 + 1;
                  for(; loop757 < loopLimit757; loop757++) {
                     if(PATH1 & -2147483648) {
                        func22();
                     }
                     else {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop758 = 0;
                  int loopLimit758 = (rand()%10)/3 + 1;
                  for(; loop758 < loopLimit758; loop758++) {
                     func21(rng());
                  }
                  int scalar7 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar7--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH1 & -2147483648) {
                  func16(rng());
                  if(PATH1 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop759 = 0;
                     int loopLimit759 = (rand()%10)/3 + 1;
                     for(; loop759 < loopLimit759; loop759++) {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop760 = 0;
                     int loopLimit760 = (rand()%10)/3 + 1;
                     for(; loop760 < loopLimit760; loop760++) {
                        func24();
                     }
                     int scalar7 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop761 = 0;
                  int loopLimit761 = (rand()%10)/3 + 1;
                  for(; loop761 < loopLimit761; loop761++) {
                     if(PATH1 & -2147483648) {
                        func19(rng());
                        if(PATH1 & -2147483648) {
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH1 & -2147483648) {
                           func22();
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop762 = 0;
                           int loopLimit762 = (rand()%10)/4 + 1;
                           for(; loop762 < loopLimit762; loop762++) {
                              if(PATH1 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop763 = 0;
                           int loopLimit763 = (rand()%10)/4 + 1;
                           for(; loop763 < loopLimit763; loop763++) {
                              func24();
                           }
                           int scalar8 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar7--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop764 = 0;
                  int loopLimit764 = (rand()%10)/3 + 1;
                  for(; loop764 < loopLimit764; loop764++) {
                     func18(rng());
                  }
                  int scalar7 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop765 = 0;
         int loopLimit765 = (rand()%10)/2 + 1;
         for(; loop765 < loopLimit765; loop765++) {
            func12(rng());
         }
      }
      else {
         if(PATH1 & -2147483648) {
            int scalar5 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop766 = 0;
            int loopLimit766 = (rand()%10)/2 + 1;
            for(; loop766 < loopLimit766; loop766++) {
               if(PATH1 & -2147483648) {
                  func16(rng());
                  if(PATH1 & -2147483648) {
                     func22();
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop767 = 0;
                     int loopLimit767 = (rand()%10)/3 + 1;
                     for(; loop767 < loopLimit767; loop767++) {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop768 = 0;
                     int loopLimit768 = (rand()%10)/3 + 1;
                     for(; loop768 < loopLimit768; loop768++) {
                        func24();
                     }
                     int scalar7 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  if(PATH1 & -2147483648) {
                     func19(rng());
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop769 = 0;
                     int loopLimit769 = (rand()%10)/3 + 1;
                     for(; loop769 < loopLimit769; loop769++) {
                        if(PATH1 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH1 & -2147483648) {
                           }
                           else {
                              int scalar7 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop770 = 0;
                     int loopLimit770 = (rand()%10)/3 + 1;
                     for(; loop770 < loopLimit770; loop770++) {
                        func21(rng());
                     }
                     int scalar7 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop771 = 0;
            int loopLimit771 = (rand()%10)/2 + 1;
            for(; loop771 < loopLimit771; loop771++) {
               func15(rng());
            }
         }
         else {
            int loop772 = 0;
            int loopLimit772 = (rand()%10)/2 + 1;
            for(; loop772 < loopLimit772; loop772++) {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop773 = 0;
               int loopLimit773 = (rand()%10)/3 + 1;
               for(; loop773 < loopLimit773; loop773++) {
                  if(PATH1 & -2147483648) {
                     func16(rng());
                     if(PATH2 & 1) {
                        func22();
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop774 = 0;
                        int loopLimit774 = (rand()%10)/4 + 1;
                        for(; loop774 < loopLimit774; loop774++) {
                           if(PATH2 & 2) {
                           }
                           else {
                           }
                        }
                        int loop775 = 0;
                        int loopLimit775 = (rand()%10)/4 + 1;
                        for(; loop775 < loopLimit775; loop775++) {
                           func24();
                        }
                        int scalar7 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     if(PATH2 & 4) {
                        func19(rng());
                        if(PATH2 & 8) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop776 = 0;
                        int loopLimit776 = (rand()%10)/4 + 1;
                        for(; loop776 < loopLimit776; loop776++) {
                           if(PATH2 & 16) {
                              func22();
                           }
                           else {
                              if(PATH2 & 32) {
                              }
                              else {
                                 int scalar7 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar6--;
                                 printf("DELETE!\n");
                              }
                              func23();
                           }
                        }
                        int loop777 = 0;
                        int loopLimit777 = (rand()%10)/4 + 1;
                        for(; loop777 < loopLimit777; loop777++) {
                           func21(rng());
                        }
                        int scalar7 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop778 = 0;
               int loopLimit778 = (rand()%10)/3 + 1;
               for(; loop778 < loopLimit778; loop778++) {
                  func15(rng());
               }
            }
         }
         int scalar5 = 1;
         int scalar6 = 1;
         printf("DELETE!\n");
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func13(rng());
         if(PATH2 & 64) {
            func19(rng());
            if(PATH2 & 128) {
            }
            else {
               int scalar7 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func23();
         }
         else {
            int scalar7 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop779 = 0;
            int loopLimit779 = (rand()%10)/2 + 1;
            for(; loop779 < loopLimit779; loop779++) {
               if(PATH2 & 256) {
                  func22();
               }
               else {
                  if(PATH2 & 512) {
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func23();
               }
            }
            int loop780 = 0;
            int loopLimit780 = (rand()%10)/2 + 1;
            for(; loop780 < loopLimit780; loop780++) {
               func21(rng());
            }
            int scalar8 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar8--;
            printf("DELETE!\n");
         }
         func17(rng());
         if(PATH2 & 1024) {
            int scalar7 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop781 = 0;
            int loopLimit781 = (rand()%10)/2 + 1;
            for(; loop781 < loopLimit781; loop781++) {
               if(PATH2 & 2048) {
                  func16(rng());
                  if(PATH2 & 4096) {
                     func22();
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop782 = 0;
                     int loopLimit782 = (rand()%10)/3 + 1;
                     for(; loop782 < loopLimit782; loop782++) {
                        if(PATH2 & 8192) {
                        }
                        else {
                        }
                     }
                     int loop783 = 0;
                     int loopLimit783 = (rand()%10)/3 + 1;
                     for(; loop783 < loopLimit783; loop783++) {
                        func24();
                     }
                     int scalar9 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar9--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  if(PATH2 & 16384) {
                     func19(rng());
                     if(PATH2 & 32768) {
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop784 = 0;
                     int loopLimit784 = (rand()%10)/3 + 1;
                     for(; loop784 < loopLimit784; loop784++) {
                        if(PATH2 & 65536) {
                           func22();
                        }
                        else {
                           if(PATH2 & 131072) {
                           }
                           else {
                              int scalar9 = 1;
                              if (scalar8 == 0) {
                                 printf("IS 0!");
                              }
                              scalar7--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop785 = 0;
                     int loopLimit785 = (rand()%10)/3 + 1;
                     for(; loop785 < loopLimit785; loop785++) {
                        func21(rng());
                     }
                     int scalar9 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop786 = 0;
            int loopLimit786 = (rand()%10)/2 + 1;
            for(; loop786 < loopLimit786; loop786++) {
               func15(rng());
            }
         }
         else {
            if(PATH2 & 262144) {
               int scalar7 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop787 = 0;
               int loopLimit787 = (rand()%10)/2 + 1;
               for(; loop787 < loopLimit787; loop787++) {
                  if(PATH2 & 524288) {
                     func19(rng());
                     if(PATH2 & 1048576) {
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH2 & 2097152) {
                        func22();
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop788 = 0;
                        int loopLimit788 = (rand()%10)/3 + 1;
                        for(; loop788 < loopLimit788; loop788++) {
                           if(PATH2 & 4194304) {
                           }
                           else {
                           }
                        }
                        int loop789 = 0;
                        int loopLimit789 = (rand()%10)/3 + 1;
                        for(; loop789 < loopLimit789; loop789++) {
                           func24();
                        }
                        int scalar9 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar9--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop790 = 0;
               int loopLimit790 = (rand()%10)/2 + 1;
               for(; loop790 < loopLimit790; loop790++) {
                  func18(rng());
               }
            }
            else {
               int loop791 = 0;
               int loopLimit791 = (rand()%10)/2 + 1;
               for(; loop791 < loopLimit791; loop791++) {
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop792 = 0;
                  int loopLimit792 = (rand()%10)/3 + 1;
                  for(; loop792 < loopLimit792; loop792++) {
                     if(PATH2 & 8388608) {
                        func19(rng());
                        if(PATH2 & 16777216) {
                        }
                        else {
                           int scalar8 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                     else {
                        if(PATH2 & 33554432) {
                           func22();
                        }
                        else {
                           int scalar8 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop793 = 0;
                           int loopLimit793 = (rand()%10)/4 + 1;
                           for(; loop793 < loopLimit793; loop793++) {
                              if(PATH2 & 67108864) {
                              }
                              else {
                              }
                           }
                           int loop794 = 0;
                           int loopLimit794 = (rand()%10)/4 + 1;
                           for(; loop794 < loopLimit794; loop794++) {
                              func24();
                           }
                           int scalar9 = 1;
                           if (scalar9 == 0) {
                              printf("IS 0!");
                           }
                           scalar7--;
                           printf("DELETE!\n");
                        }
                        func20(rng());
                     }
                  }
                  int loop795 = 0;
                  int loopLimit795 = (rand()%10)/3 + 1;
                  for(; loop795 < loopLimit795; loop795++) {
                     func18(rng());
                  }
               }
            }
            int scalar7 = 1;
            int scalar8 = 1;
            printf("DELETE!\n");
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            func16(rng());
            if(PATH2 & 134217728) {
               func22();
            }
            else {
               int scalar9 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop796 = 0;
               int loopLimit796 = (rand()%10)/2 + 1;
               for(; loop796 < loopLimit796; loop796++) {
                  if(PATH2 & 268435456) {
                  }
                  else {
                  }
               }
               int loop797 = 0;
               int loopLimit797 = (rand()%10)/2 + 1;
               for(; loop797 < loopLimit797; loop797++) {
                  func24();
               }
               int scalar10 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               printf("DELETE!\n");
            }
            func20(rng());
            if(PATH2 & 536870912) {
               int scalar9 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop798 = 0;
               int loopLimit798 = (rand()%10)/2 + 1;
               for(; loop798 < loopLimit798; loop798++) {
                  if(PATH2 & 1073741824) {
                     func19(rng());
                     if(PATH2 & -2147483648) {
                     }
                     else {
                        int scalar10 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar10--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH2 & -2147483648) {
                        func22();
                     }
                     else {
                        int scalar10 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop799 = 0;
                        int loopLimit799 = (rand()%10)/3 + 1;
                        for(; loop799 < loopLimit799; loop799++) {
                           if(PATH2 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop800 = 0;
                        int loopLimit800 = (rand()%10)/3 + 1;
                        for(; loop800 < loopLimit800; loop800++) {
                           func24();
                        }
                        int scalar11 = 1;
                        if (scalar9 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop801 = 0;
               int loopLimit801 = (rand()%10)/2 + 1;
               for(; loop801 < loopLimit801; loop801++) {
                  func18(rng());
               }
            }
            else {
               if(PATH2 & -2147483648) {
                  int scalar9 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop802 = 0;
                  int loopLimit802 = (rand()%10)/2 + 1;
                  for(; loop802 < loopLimit802; loop802++) {
                     if(PATH2 & -2147483648) {
                        func22();
                     }
                     else {
                        if(PATH2 & -2147483648) {
                        }
                        else {
                           int scalar10 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop803 = 0;
                  int loopLimit803 = (rand()%10)/2 + 1;
                  for(; loop803 < loopLimit803; loop803++) {
                     func21(rng());
                  }
               }
               else {
                  int loop804 = 0;
                  int loopLimit804 = (rand()%10)/2 + 1;
                  for(; loop804 < loopLimit804; loop804++) {
                     int scalar9 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop805 = 0;
                     int loopLimit805 = (rand()%10)/3 + 1;
                     for(; loop805 < loopLimit805; loop805++) {
                        if(PATH2 & -2147483648) {
                           func22();
                        }
                        else {
                           if(PATH2 & -2147483648) {
                           }
                           else {
                              int scalar10 = 1;
                              if (scalar10 == 0) {
                                 printf("IS 0!");
                              }
                              scalar5--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop806 = 0;
                     int loopLimit806 = (rand()%10)/3 + 1;
                     for(; loop806 < loopLimit806; loop806++) {
                        func21(rng());
                     }
                  }
               }
               int scalar9 = 1;
               int scalar10 = 1;
               printf("DELETE!\n");
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               func19(rng());
               if(PATH2 & -2147483648) {
               }
               else {
                  int scalar11 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar9--;
                  printf("DELETE!\n");
               }
               func23();
               if(PATH2 & -2147483648) {
                  int scalar11 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop807 = 0;
                  int loopLimit807 = (rand()%10)/2 + 1;
                  for(; loop807 < loopLimit807; loop807++) {
                     if(PATH2 & -2147483648) {
                        func22();
                     }
                     else {
                        if(PATH2 & -2147483648) {
                        }
                        else {
                           int scalar12 = 1;
                           if (scalar11 == 0) {
                              printf("IS 0!");
                           }
                           scalar6--;
                           printf("DELETE!\n");
                        }
                        func23();
                     }
                  }
                  int loop808 = 0;
                  int loopLimit808 = (rand()%10)/2 + 1;
                  for(; loop808 < loopLimit808; loop808++) {
                     func21(rng());
                  }
               }
               else {
                  if(PATH2 & -2147483648) {
                     int scalar11 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop809 = 0;
                     int loopLimit809 = (rand()%10)/2 + 1;
                     for(; loop809 < loopLimit809; loop809++) {
                        if(PATH2 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop810 = 0;
                     int loopLimit810 = (rand()%10)/2 + 1;
                     for(; loop810 < loopLimit810; loop810++) {
                        func24();
                     }
                  }
                  else {
                     int loop811 = 0;
                     int loopLimit811 = (rand()%10)/2 + 1;
                     for(; loop811 < loopLimit811; loop811++) {
                        int scalar11 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop812 = 0;
                        int loopLimit812 = (rand()%10)/3 + 1;
                        for(; loop812 < loopLimit812; loop812++) {
                           if(PATH2 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop813 = 0;
                        int loopLimit813 = (rand()%10)/3 + 1;
                        for(; loop813 < loopLimit813; loop813++) {
                           func24();
                        }
                     }
                  }
                  int scalar11 = 1;
                  int scalar12 = 1;
                  printf("DELETE!\n");
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  func22();
                  if(PATH2 & -2147483648) {
                     int scalar13 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop814 = 0;
                     int loopLimit814 = (rand()%10)/2 + 1;
                     for(; loop814 < loopLimit814; loop814++) {
                        if(PATH2 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop815 = 0;
                     int loopLimit815 = (rand()%10)/2 + 1;
                     for(; loop815 < loopLimit815; loop815++) {
                        func24();
                     }
                  }
                  else {
                     if(PATH2 & -2147483648) {
                     }
                     else {
                        int loop816 = 0;
                        int loopLimit816 = (rand()%10)/2 + 1;
                        for(; loop816 < loopLimit816; loop816++) {
                        }
                     }
                     int scalar13 = 1;
                     int scalar14 = 1;
                     printf("DELETE!\n");
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     if(PATH2 & -2147483648) {
                     }
                     else {
                     }
                  }
               }
            }
         }
      }
   }
}

void func3(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop859 = 0;
   int loopLimit859 = (rand()%10)/3 + 1;
   for(; loop859 < loopLimit859; loop859++) {
      if(PATH0 & 1) {
         func7(rng(), rng());
         if(PATH0 & 2) {
            func13(rng());
            if(PATH0 & 4) {
               func19(rng());
               if(PATH0 & 8) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func23();
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop860 = 0;
               int loopLimit860 = (rand()%10)/4 + 1;
               for(; loop860 < loopLimit860; loop860++) {
                  if(PATH0 & 16) {
                     func22();
                  }
                  else {
                     if(PATH0 & 32) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
               }
               int loop861 = 0;
               int loopLimit861 = (rand()%10)/4 + 1;
               for(; loop861 < loopLimit861; loop861++) {
                  func21(rng());
               }
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop862 = 0;
            int loopLimit862 = (rand()%10)/4 + 1;
            for(; loop862 < loopLimit862; loop862++) {
               if(PATH0 & 64) {
                  func16(rng());
                  if(PATH0 & 128) {
                     func22();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop863 = 0;
                     int loopLimit863 = (rand()%10)/5 + 1;
                     for(; loop863 < loopLimit863; loop863++) {
                        if(PATH0 & 256) {
                        }
                        else {
                        }
                     }
                     int loop864 = 0;
                     int loopLimit864 = (rand()%10)/5 + 1;
                     for(; loop864 < loopLimit864; loop864++) {
                        func24();
                     }
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func20(rng());
               }
               else {
                  if(PATH0 & 512) {
                     func19(rng());
                     if(PATH0 & 1024) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop865 = 0;
                     int loopLimit865 = (rand()%10)/5 + 1;
                     for(; loop865 < loopLimit865; loop865++) {
                        if(PATH0 & 2048) {
                           func22();
                        }
                        else {
                           if(PATH0 & 4096) {
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop866 = 0;
                     int loopLimit866 = (rand()%10)/5 + 1;
                     for(; loop866 < loopLimit866; loop866++) {
                        func21(rng());
                     }
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop867 = 0;
            int loopLimit867 = (rand()%10)/4 + 1;
            for(; loop867 < loopLimit867; loop867++) {
               func15(rng());
            }
            int scalar4 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func11(rng());
      }
      else {
         if(PATH0 & 8192) {
            func10(rng());
            if(PATH0 & 16384) {
               func16(rng());
               if(PATH0 & 32768) {
                  func22();
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop868 = 0;
                  int loopLimit868 = (rand()%10)/4 + 1;
                  for(; loop868 < loopLimit868; loop868++) {
                     if(PATH0 & 65536) {
                     }
                     else {
                     }
                  }
                  int loop869 = 0;
                  int loopLimit869 = (rand()%10)/4 + 1;
                  for(; loop869 < loopLimit869; loop869++) {
                     func24();
                  }
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20(rng());
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop870 = 0;
               int loopLimit870 = (rand()%10)/4 + 1;
               for(; loop870 < loopLimit870; loop870++) {
                  if(PATH0 & 131072) {
                     func19(rng());
                     if(PATH0 & 262144) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     if(PATH0 & 524288) {
                        func22();
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop871 = 0;
                        int loopLimit871 = (rand()%10)/5 + 1;
                        for(; loop871 < loopLimit871; loop871++) {
                           if(PATH0 & 1048576) {
                           }
                           else {
                           }
                        }
                        int loop872 = 0;
                        int loopLimit872 = (rand()%10)/5 + 1;
                        for(; loop872 < loopLimit872; loop872++) {
                           func24();
                        }
                        int scalar5 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
               }
               int loop873 = 0;
               int loopLimit873 = (rand()%10)/4 + 1;
               for(; loop873 < loopLimit873; loop873++) {
                  func18(rng());
               }
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop874 = 0;
            int loopLimit874 = (rand()%10)/4 + 1;
            for(; loop874 < loopLimit874; loop874++) {
               if(PATH0 & 2097152) {
                  func13(rng());
                  if(PATH0 & 4194304) {
                     func19(rng());
                     if(PATH0 & 8388608) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func23();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop875 = 0;
                     int loopLimit875 = (rand()%10)/5 + 1;
                     for(; loop875 < loopLimit875; loop875++) {
                        if(PATH0 & 16777216) {
                           func22();
                        }
                        else {
                           if(PATH0 & 33554432) {
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                     }
                     int loop876 = 0;
                     int loopLimit876 = (rand()%10)/5 + 1;
                     for(; loop876 < loopLimit876; loop876++) {
                        func21(rng());
                     }
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  if(PATH0 & 67108864) {
                     func16(rng());
                     if(PATH0 & 134217728) {
                        func22();
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop877 = 0;
                        int loopLimit877 = (rand()%10)/5 + 1;
                        for(; loop877 < loopLimit877; loop877++) {
                           if(PATH0 & 268435456) {
                           }
                           else {
                           }
                        }
                        int loop878 = 0;
                        int loopLimit878 = (rand()%10)/5 + 1;
                        for(; loop878 < loopLimit878; loop878++) {
                           func24();
                        }
                        int scalar5 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func20(rng());
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop879 = 0;
                     int loopLimit879 = (rand()%10)/5 + 1;
                     for(; loop879 < loopLimit879; loop879++) {
                        if(PATH0 & 536870912) {
                           func19(rng());
                           if(PATH0 & 1073741824) {
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func23();
                        }
                        else {
                           if(PATH0 & -2147483648) {
                              func22();
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop880 = 0;
                              int loopLimit880 = (rand()%10)/6 + 1;
                              for(; loop880 < loopLimit880; loop880++) {
                                 if(PATH0 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop881 = 0;
                              int loopLimit881 = (rand()%10)/6 + 1;
                              for(; loop881 < loopLimit881; loop881++) {
                                 func24();
                              }
                              int scalar6 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func20(rng());
                        }
                     }
                     int loop882 = 0;
                     int loopLimit882 = (rand()%10)/5 + 1;
                     for(; loop882 < loopLimit882; loop882++) {
                        func18(rng());
                     }
                     int scalar5 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
            }
            int loop883 = 0;
            int loopLimit883 = (rand()%10)/4 + 1;
            for(; loop883 < loopLimit883; loop883++) {
               func12(rng());
            }
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func8(rng());
      }
   }
   int loop884 = 0;
   int loopLimit884 = (rand()%10)/3 + 1;
   for(; loop884 < loopLimit884; loop884++) {
      func6(rng());
   }
}

