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
   for(int loop0 = 0; loop0 < 3; loop0++) {
      int scalar0 = 1;
      scalar0++;
      for(int loop1 = 0; loop1 < 3; loop1++) {
         int scalar1 = 1;
         scalar0++;
         for(int loop2 = 0; loop2 < 3; loop2++) {
            int scalar2 = 1;
            scalar0++;
            for(int loop3 = 0; loop3 < 3; loop3++) {
               int scalar3 = 1;
               scalar3++;
               for(int loop4 = 0; loop4 < 3; loop4++) {
                  int scalar4 = 1;
                  scalar3++;
                  for(int loop5 = 0; loop5 < 3; loop5++) {
                     int scalar5 = 1;
                     scalar1++;
                     for(int loop6 = 0; loop6 < 3; loop6++) {
                        int scalar6 = 1;
                        scalar3++;
                        for(int loop7 = 0; loop7 < 3; loop7++) {
                           int scalar7 = 1;
                           scalar4++;
                           scalar1--;
                        }
                        printf("DELETE!\n");
                        scalar3--;
                     }
                     printf("DELETE!\n");
                     scalar2--;
                  }
                  printf("DELETE!\n");
                  scalar2--;
               }
               printf("DELETE!\n");
               scalar2--;
            }
            printf("DELETE!\n");
            scalar1--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      scalar0--;
   }
   printf("DELETE!\n");
   for(int loop8 = 0; loop8 < 3; loop8++) {
      int scalar0 = 1;
      scalar0++;
      func0(rng());
      int scalar1 = 1;
      for(int loop81 = 0; loop81 < 3; loop81++) {
         for(int loop82 = 0; loop82 < 3; loop82++) {
            int scalar2 = 1;
            scalar1++;
            for(int loop83 = 0; loop83 < 3; loop83++) {
               int scalar3 = 1;
               scalar3++;
               for(int loop84 = 0; loop84 < 3; loop84++) {
                  int scalar4 = 1;
                  scalar3++;
                  for(int loop85 = 0; loop85 < 3; loop85++) {
                     int scalar5 = 1;
                     scalar5++;
                     for(int loop86 = 0; loop86 < 3; loop86++) {
                        int scalar6 = 1;
                        scalar2++;
                        for(int loop87 = 0; loop87 < 3; loop87++) {
                           int scalar7 = 1;
                           scalar6++;
                           for(int loop88 = 0; loop88 < 3; loop88++) {
                              int scalar8 = 1;
                              scalar7++;
                              for(int loop89 = 0; loop89 < 3; loop89++) {
                                 int scalar9 = 1;
                                 scalar4++;
                                 scalar8--;
                              }
                              printf("DELETE!\n");
                              scalar3--;
                           }
                           printf("DELETE!\n");
                           scalar0--;
                        }
                        printf("DELETE!\n");
                        scalar6--;
                     }
                     printf("DELETE!\n");
                     scalar3--;
                  }
                  printf("DELETE!\n");
                  scalar2--;
               }
               printf("DELETE!\n");
               scalar0--;
            }
            printf("DELETE!\n");
            scalar2--;
         }
         printf("DELETE!\n");
         func1(rng());
      }
      if (scalar1 == 0) {
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
      int scalar1 = 1;
      int scalar2 = 1;
      int scalar3 = 1;
      for(int loop37 = 0; loop37 < 3; loop37++) {
         if(PATH0 & 2) {
            if (scalar1 == 0) {
               printf("IS 0!");
            }
         }
         else {
            scalar2--;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
         }
         for(int loop38 = 0; loop38 < 3; loop38++) {
            int scalar4 = 1;
            scalar3++;
            for(int loop39 = 0; loop39 < 3; loop39++) {
               int scalar5 = 1;
               scalar2++;
               for(int loop40 = 0; loop40 < 3; loop40++) {
                  int scalar6 = 1;
                  scalar1++;
                  for(int loop41 = 0; loop41 < 3; loop41++) {
                     int scalar7 = 1;
                     scalar1++;
                     for(int loop42 = 0; loop42 < 3; loop42++) {
                        int scalar8 = 1;
                        scalar4++;
                        for(int loop43 = 0; loop43 < 3; loop43++) {
                           int scalar9 = 1;
                           scalar2++;
                           scalar3--;
                        }
                        printf("DELETE!\n");
                        scalar3--;
                     }
                     printf("DELETE!\n");
                     scalar2--;
                  }
                  printf("DELETE!\n");
                  scalar4--;
               }
               printf("DELETE!\n");
               scalar3--;
            }
            printf("DELETE!\n");
            scalar3--;
         }
         printf("DELETE!\n");
         func3(rng());
      }
      if (scalar1 == 0) {
         printf("IS 0!");
      }
   }
   else {
      for(int loop44 = 0; loop44 < 3; loop44++) {
         for(int loop45 = 0; loop45 < 3; loop45++) {
            int scalar1 = 1;
            scalar1++;
            for(int loop46 = 0; loop46 < 3; loop46++) {
               int scalar2 = 1;
               scalar1++;
               for(int loop47 = 0; loop47 < 3; loop47++) {
                  int scalar3 = 1;
                  scalar3++;
                  for(int loop48 = 0; loop48 < 3; loop48++) {
                     int scalar4 = 1;
                     scalar2++;
                     for(int loop49 = 0; loop49 < 3; loop49++) {
                        int scalar5 = 1;
                        scalar1++;
                        for(int loop50 = 0; loop50 < 3; loop50++) {
                           int scalar6 = 1;
                           scalar3++;
                           for(int loop51 = 0; loop51 < 3; loop51++) {
                              int scalar7 = 1;
                              scalar7++;
                              for(int loop52 = 0; loop52 < 3; loop52++) {
                                 int scalar8 = 1;
                                 scalar2++;
                                 scalar2--;
                              }
                              printf("DELETE!\n");
                              scalar7--;
                           }
                           printf("DELETE!\n");
                           scalar6--;
                        }
                        printf("DELETE!\n");
                        scalar1--;
                     }
                     printf("DELETE!\n");
                     scalar2--;
                  }
                  printf("DELETE!\n");
                  scalar1--;
               }
               printf("DELETE!\n");
               scalar2--;
            }
            printf("DELETE!\n");
            scalar1--;
         }
         printf("DELETE!\n");
         for(int loop53 = 0; loop53 < 3; loop53++) {
            int scalar1 = 1;
            scalar1++;
            for(int loop54 = 0; loop54 < 3; loop54++) {
               int scalar2 = 1;
               scalar2++;
               for(int loop55 = 0; loop55 < 3; loop55++) {
                  int scalar3 = 1;
                  scalar3++;
                  for(int loop56 = 0; loop56 < 3; loop56++) {
                     int scalar4 = 1;
                     scalar2++;
                     for(int loop57 = 0; loop57 < 3; loop57++) {
                        int scalar5 = 1;
                        scalar3++;
                        for(int loop58 = 0; loop58 < 3; loop58++) {
                           int scalar6 = 1;
                           scalar4++;
                           for(int loop59 = 0; loop59 < 3; loop59++) {
                              int scalar7 = 1;
                              scalar4++;
                              scalar6--;
                           }
                           printf("DELETE!\n");
                           scalar4--;
                        }
                        printf("DELETE!\n");
                        scalar2--;
                     }
                     printf("DELETE!\n");
                     scalar2--;
                  }
                  printf("DELETE!\n");
                  scalar2--;
               }
               printf("DELETE!\n");
               scalar2--;
            }
            printf("DELETE!\n");
            scalar1--;
         }
         printf("DELETE!\n");
         func2(rng());
      }
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop9 = 0; loop9 < 3; loop9++) {
         int scalar1 = 1;
         scalar1++;
         for(int loop10 = 0; loop10 < 3; loop10++) {
            int scalar2 = 1;
            scalar1++;
            for(int loop11 = 0; loop11 < 3; loop11++) {
               int scalar3 = 1;
               scalar2++;
               for(int loop12 = 0; loop12 < 3; loop12++) {
                  int scalar4 = 1;
                  scalar4++;
                  for(int loop13 = 0; loop13 < 3; loop13++) {
                     int scalar5 = 1;
                     scalar4++;
                     for(int loop14 = 0; loop14 < 3; loop14++) {
                        int scalar6 = 1;
                        scalar4++;
                        scalar4--;
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
            scalar2--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      func3(rng());
   }
   else {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      scalar1--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      for(int loop30 = 0; loop30 < 3; loop30++) {
         int scalar2 = 1;
         scalar1++;
         for(int loop31 = 0; loop31 < 3; loop31++) {
            int scalar3 = 1;
            scalar2++;
            for(int loop32 = 0; loop32 < 3; loop32++) {
               int scalar4 = 1;
               scalar1++;
               for(int loop33 = 0; loop33 < 3; loop33++) {
                  int scalar5 = 1;
                  scalar2++;
                  for(int loop34 = 0; loop34 < 3; loop34++) {
                     int scalar6 = 1;
                     scalar3++;
                     for(int loop35 = 0; loop35 < 3; loop35++) {
                        int scalar7 = 1;
                        scalar5++;
                        for(int loop36 = 0; loop36 < 3; loop36++) {
                           int scalar8 = 1;
                           scalar1++;
                           scalar4--;
                        }
                        printf("DELETE!\n");
                        scalar3--;
                     }
                     printf("DELETE!\n");
                     scalar3--;
                  }
                  printf("DELETE!\n");
                  scalar5--;
               }
               printf("DELETE!\n");
               scalar1--;
            }
            printf("DELETE!\n");
            scalar1--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop15 = 0; loop15 < 3; loop15++) {
         int scalar1 = 1;
         scalar1++;
         for(int loop16 = 0; loop16 < 3; loop16++) {
            int scalar2 = 1;
            scalar2++;
            for(int loop17 = 0; loop17 < 3; loop17++) {
               int scalar3 = 1;
               scalar1++;
               for(int loop18 = 0; loop18 < 3; loop18++) {
                  int scalar4 = 1;
                  scalar3++;
                  scalar3--;
               }
               printf("DELETE!\n");
               scalar3--;
            }
            printf("DELETE!\n");
            scalar2--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      func5(rng());
   }
   else {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      scalar1--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      for(int loop25 = 0; loop25 < 3; loop25++) {
         int scalar2 = 1;
         scalar1++;
         for(int loop26 = 0; loop26 < 3; loop26++) {
            int scalar3 = 1;
            scalar3++;
            for(int loop27 = 0; loop27 < 3; loop27++) {
               int scalar4 = 1;
               scalar3++;
               for(int loop28 = 0; loop28 < 3; loop28++) {
                  int scalar5 = 1;
                  scalar5++;
                  for(int loop29 = 0; loop29 < 3; loop29++) {
                     int scalar6 = 1;
                     scalar2++;
                     scalar6--;
                  }
                  printf("DELETE!\n");
                  scalar5--;
               }
               printf("DELETE!\n");
               scalar4--;
            }
            printf("DELETE!\n");
            scalar1--;
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
      for(int loop19 = 0; loop19 < 3; loop19++) {
         int scalar1 = 1;
         scalar1++;
         for(int loop20 = 0; loop20 < 3; loop20++) {
            int scalar2 = 1;
            scalar2++;
            scalar1--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      func7(rng());
   }
   else {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      scalar1--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      for(int loop22 = 0; loop22 < 3; loop22++) {
         int scalar2 = 1;
         scalar1++;
         for(int loop23 = 0; loop23 < 3; loop23++) {
            int scalar3 = 1;
            scalar3++;
            for(int loop24 = 0; loop24 < 3; loop24++) {
               int scalar4 = 1;
               scalar2++;
               scalar3--;
            }
            printf("DELETE!\n");
            scalar3--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      scalar1--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      for(int loop21 = 0; loop21 < 3; loop21++) {
         int scalar2 = 1;
         scalar1++;
         scalar1--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop60 = 0; loop60 < 3; loop60++) {
         int scalar1 = 1;
         scalar1++;
         for(int loop61 = 0; loop61 < 3; loop61++) {
            int scalar2 = 1;
            scalar1++;
            for(int loop62 = 0; loop62 < 3; loop62++) {
               int scalar3 = 1;
               scalar1++;
               for(int loop63 = 0; loop63 < 3; loop63++) {
                  int scalar4 = 1;
                  scalar1++;
                  for(int loop64 = 0; loop64 < 3; loop64++) {
                     int scalar5 = 1;
                     scalar5++;
                     scalar4--;
                  }
                  printf("DELETE!\n");
                  scalar4--;
               }
               printf("DELETE!\n");
               scalar1--;
            }
            printf("DELETE!\n");
            scalar1--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      func4(rng());
   }
   else {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      scalar1--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      for(int loop75 = 0; loop75 < 3; loop75++) {
         int scalar2 = 1;
         scalar2++;
         for(int loop76 = 0; loop76 < 3; loop76++) {
            int scalar3 = 1;
            scalar3++;
            for(int loop77 = 0; loop77 < 3; loop77++) {
               int scalar4 = 1;
               scalar2++;
               for(int loop78 = 0; loop78 < 3; loop78++) {
                  int scalar5 = 1;
                  scalar1++;
                  for(int loop79 = 0; loop79 < 3; loop79++) {
                     int scalar6 = 1;
                     scalar2++;
                     for(int loop80 = 0; loop80 < 3; loop80++) {
                        int scalar7 = 1;
                        scalar4++;
                        scalar6--;
                     }
                     printf("DELETE!\n");
                     scalar4--;
                  }
                  printf("DELETE!\n");
                  scalar2--;
               }
               printf("DELETE!\n");
               scalar1--;
            }
            printf("DELETE!\n");
            scalar1--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop65 = 0; loop65 < 3; loop65++) {
         int scalar1 = 1;
         scalar1++;
         for(int loop66 = 0; loop66 < 3; loop66++) {
            int scalar2 = 1;
            scalar1++;
            for(int loop67 = 0; loop67 < 3; loop67++) {
               int scalar3 = 1;
               scalar1++;
               scalar1--;
            }
            printf("DELETE!\n");
            scalar2--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      func6(rng());
   }
   else {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      scalar1--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      for(int loop71 = 0; loop71 < 3; loop71++) {
         int scalar2 = 1;
         scalar2++;
         for(int loop72 = 0; loop72 < 3; loop72++) {
            int scalar3 = 1;
            scalar2++;
            for(int loop73 = 0; loop73 < 3; loop73++) {
               int scalar4 = 1;
               scalar4++;
               for(int loop74 = 0; loop74 < 3; loop74++) {
                  int scalar5 = 1;
                  scalar2++;
                  scalar3--;
               }
               printf("DELETE!\n");
               scalar4--;
            }
            printf("DELETE!\n");
            scalar3--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop68 = 0; loop68 < 3; loop68++) {
         int scalar1 = 1;
         scalar1++;
         scalar1--;
      }
      printf("DELETE!\n");
      func8(rng());
   }
   else {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      scalar1--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      for(int loop69 = 0; loop69 < 3; loop69++) {
         int scalar2 = 1;
         scalar1++;
         for(int loop70 = 0; loop70 < 3; loop70++) {
            int scalar3 = 1;
            scalar3++;
            scalar2--;
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      scalar1--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

