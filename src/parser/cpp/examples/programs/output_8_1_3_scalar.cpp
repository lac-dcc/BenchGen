#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func8(const unsigned long PATH0);

int main() {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      int scalar1 = 1;
      scalar1++;
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int scalar3 = 1;
         scalar2++;
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int scalar5 = 1;
            scalar3++;
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               int scalar7 = 1;
               scalar3++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  int scalar9 = 1;
                  scalar3++;
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     int scalar11 = 1;
                     scalar7++;
                     for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                        int scalar13 = 1;
                        scalar10++;
                        for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                           int scalar15 = 1;
                           scalar12++;
                           scalar9--;
                        }
                        printf("DELETE!\n");
                        scalar3--;
                     }
                     printf("DELETE!\n");
                     scalar2--;
                  }
                  printf("DELETE!\n");
                  scalar7--;
               }
               printf("DELETE!\n");
               scalar2--;
            }
            printf("DELETE!\n");
            scalar1--;
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      scalar0--;
   }
   printf("DELETE!\n");
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      int scalar1 = 1;
      scalar0++;
      func0(rng());
      int scalar2 = 1;
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int scalar5 = 1;
            scalar4++;
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               int scalar7 = 1;
               scalar3++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  int scalar9 = 1;
                  scalar3++;
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     int scalar11 = 1;
                     scalar5++;
                     for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                        int scalar13 = 1;
                        scalar2++;
                        for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                           int scalar15 = 1;
                           scalar14++;
                           for(int scalar16 = 0; scalar16 < 10; scalar16++) {
                              int scalar17 = 1;
                              scalar16++;
                              for(int scalar18 = 0; scalar18 < 10; scalar18++) {
                                 int scalar19 = 1;
                                 scalar4++;
                                 scalar18--;
                              }
                              printf("DELETE!\n");
                              scalar12--;
                           }
                           printf("DELETE!\n");
                           scalar0--;
                        }
                        printf("DELETE!\n");
                        scalar13--;
                     }
                     printf("DELETE!\n");
                     scalar9--;
                  }
                  printf("DELETE!\n");
                  scalar7--;
               }
               printf("DELETE!\n");
               scalar4--;
            }
            printf("DELETE!\n");
            scalar2--;
         }
         printf("DELETE!\n");
         func1(rng());
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
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0) {
   func1(rng());
   if(PATH0 & 1) {
      int scalar2 = 1;
      int scalar3 = 1;
      int scalar4 = 1;
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         if(PATH0 & 2) {
            if (scalar2 == 0) {
               printf("IS 0!");
            }
         }
         else {
            scalar5--;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
         }
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            int scalar7 = 1;
            scalar6++;
            for(int scalar8 = 0; scalar8 < 10; scalar8++) {
               int scalar9 = 1;
               scalar4++;
               for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                  int scalar11 = 1;
                  scalar6++;
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     int scalar13 = 1;
                     scalar13++;
                     for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                        int scalar15 = 1;
                        scalar13++;
                        for(int scalar16 = 0; scalar16 < 10; scalar16++) {
                           int scalar17 = 1;
                           scalar12++;
                           scalar12--;
                        }
                        printf("DELETE!\n");
                        scalar2--;
                     }
                     printf("DELETE!\n");
                     scalar13--;
                  }
                  printf("DELETE!\n");
                  scalar3--;
               }
               printf("DELETE!\n");
               scalar3--;
            }
            printf("DELETE!\n");
            scalar4--;
         }
         printf("DELETE!\n");
         func3(rng());
      }
      if (scalar2 == 0) {
         printf("IS 0!");
      }
   }
   else {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            int scalar4 = 1;
            scalar2++;
            for(int scalar5 = 0; scalar5 < 10; scalar5++) {
               int scalar6 = 1;
               scalar4++;
               for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                  int scalar8 = 1;
                  scalar3++;
                  for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                     int scalar10 = 1;
                     scalar9++;
                     for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                        int scalar12 = 1;
                        scalar9++;
                        for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                           int scalar14 = 1;
                           scalar5++;
                           for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                              int scalar16 = 1;
                              scalar3++;
                              for(int scalar17 = 0; scalar17 < 10; scalar17++) {
                                 int scalar18 = 1;
                                 scalar16++;
                                 scalar4--;
                              }
                              printf("DELETE!\n");
                              scalar6--;
                           }
                           printf("DELETE!\n");
                           scalar12--;
                        }
                        printf("DELETE!\n");
                        scalar6--;
                     }
                     printf("DELETE!\n");
                     scalar8--;
                  }
                  printf("DELETE!\n");
                  scalar5--;
               }
               printf("DELETE!\n");
               scalar4--;
            }
            printf("DELETE!\n");
            scalar2--;
         }
         printf("DELETE!\n");
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            int scalar4 = 1;
            scalar4++;
            for(int scalar5 = 0; scalar5 < 10; scalar5++) {
               int scalar6 = 1;
               scalar3++;
               for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                  int scalar8 = 1;
                  scalar7++;
                  for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                     int scalar10 = 1;
                     scalar2++;
                     for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                        int scalar12 = 1;
                        scalar10++;
                        for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                           int scalar14 = 1;
                           scalar2++;
                           for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                              int scalar16 = 1;
                              scalar3++;
                              scalar4--;
                           }
                           printf("DELETE!\n");
                           scalar7--;
                        }
                        printf("DELETE!\n");
                        scalar12--;
                     }
                     printf("DELETE!\n");
                     scalar7--;
                  }
                  printf("DELETE!\n");
                  scalar3--;
               }
               printf("DELETE!\n");
               scalar5--;
            }
            printf("DELETE!\n");
            scalar4--;
         }
         printf("DELETE!\n");
         func2(rng());
      }
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int scalar3 = 1;
         scalar2++;
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int scalar5 = 1;
            scalar2++;
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               int scalar7 = 1;
               scalar6++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  int scalar9 = 1;
                  scalar5++;
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     int scalar11 = 1;
                     scalar10++;
                     for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                        int scalar13 = 1;
                        scalar5++;
                        scalar11--;
                     }
                     printf("DELETE!\n");
                     scalar4--;
                  }
                  printf("DELETE!\n");
                  scalar4--;
               }
               printf("DELETE!\n");
               scalar4--;
            }
            printf("DELETE!\n");
            scalar5--;
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      func3(rng());
   }
   else {
      int scalar2 = 1;
      scalar2++;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      scalar2--;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int scalar4 = 1;
         scalar4++;
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int scalar6 = 1;
            scalar4++;
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               int scalar8 = 1;
               scalar5++;
               for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                  int scalar10 = 1;
                  scalar8++;
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     int scalar12 = 1;
                     scalar11++;
                     for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                        int scalar14 = 1;
                        scalar3++;
                        for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                           int scalar16 = 1;
                           scalar11++;
                           scalar5--;
                        }
                        printf("DELETE!\n");
                        scalar2--;
                     }
                     printf("DELETE!\n");
                     scalar5--;
                  }
                  printf("DELETE!\n");
                  scalar3--;
               }
               printf("DELETE!\n");
               scalar7--;
            }
            printf("DELETE!\n");
            scalar2--;
         }
         printf("DELETE!\n");
         scalar4--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int scalar3 = 1;
         scalar3++;
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int scalar5 = 1;
            scalar3++;
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               int scalar7 = 1;
               scalar2++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  int scalar9 = 1;
                  scalar8++;
                  scalar4--;
               }
               printf("DELETE!\n");
               scalar7--;
            }
            printf("DELETE!\n");
            scalar5--;
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      func5(rng());
   }
   else {
      int scalar2 = 1;
      scalar2++;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      scalar2--;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int scalar4 = 1;
         scalar4++;
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int scalar6 = 1;
            scalar2++;
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               int scalar8 = 1;
               scalar7++;
               for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                  int scalar10 = 1;
                  scalar5++;
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     int scalar12 = 1;
                     scalar6++;
                     scalar3--;
                  }
                  printf("DELETE!\n");
                  scalar2--;
               }
               printf("DELETE!\n");
               scalar5--;
            }
            printf("DELETE!\n");
            scalar4--;
         }
         printf("DELETE!\n");
         scalar2--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int scalar3 = 1;
         scalar2++;
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int scalar5 = 1;
            scalar5++;
            scalar4--;
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      func7(rng());
   }
   else {
      int scalar2 = 1;
      scalar2++;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      scalar2--;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int scalar4 = 1;
         scalar4++;
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int scalar6 = 1;
            scalar3++;
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               int scalar8 = 1;
               scalar4++;
               scalar6--;
            }
            printf("DELETE!\n");
            scalar2--;
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int scalar2 = 1;
      scalar2++;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      scalar2--;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int scalar4 = 1;
         scalar4++;
         scalar4--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int scalar4 = 1;
         scalar3++;
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int scalar6 = 1;
            scalar3++;
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               int scalar8 = 1;
               scalar6++;
               for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                  int scalar10 = 1;
                  scalar7++;
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     int scalar12 = 1;
                     scalar12++;
                     scalar6--;
                  }
                  printf("DELETE!\n");
                  scalar6--;
               }
               printf("DELETE!\n");
               scalar3--;
            }
            printf("DELETE!\n");
            scalar3--;
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      func4(rng());
   }
   else {
      int scalar3 = 1;
      scalar3++;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      scalar3--;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         int scalar5 = 1;
         scalar4++;
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            int scalar7 = 1;
            scalar7++;
            for(int scalar8 = 0; scalar8 < 10; scalar8++) {
               int scalar9 = 1;
               scalar7++;
               for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                  int scalar11 = 1;
                  scalar6++;
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     int scalar13 = 1;
                     scalar11++;
                     for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                        int scalar15 = 1;
                        scalar13++;
                        scalar11--;
                     }
                     printf("DELETE!\n");
                     scalar7--;
                  }
                  printf("DELETE!\n");
                  scalar9--;
               }
               printf("DELETE!\n");
               scalar7--;
            }
            printf("DELETE!\n");
            scalar7--;
         }
         printf("DELETE!\n");
         scalar5--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int scalar4 = 1;
         scalar4++;
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int scalar6 = 1;
            scalar3++;
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               int scalar8 = 1;
               scalar6++;
               scalar3--;
            }
            printf("DELETE!\n");
            scalar6--;
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      func6(rng());
   }
   else {
      int scalar3 = 1;
      scalar3++;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      scalar3--;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         int scalar5 = 1;
         scalar5++;
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            int scalar7 = 1;
            scalar3++;
            for(int scalar8 = 0; scalar8 < 10; scalar8++) {
               int scalar9 = 1;
               scalar6++;
               for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                  int scalar11 = 1;
                  scalar10++;
                  scalar7--;
               }
               printf("DELETE!\n");
               scalar7--;
            }
            printf("DELETE!\n");
            scalar5--;
         }
         printf("DELETE!\n");
         scalar4--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int scalar4 = 1;
         scalar4++;
         scalar3--;
      }
      printf("DELETE!\n");
      func8(rng());
   }
   else {
      int scalar3 = 1;
      scalar3++;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      scalar3--;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         int scalar5 = 1;
         scalar4++;
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            int scalar7 = 1;
            scalar7++;
            scalar7--;
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int scalar3 = 1;
      scalar3++;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      scalar3--;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

