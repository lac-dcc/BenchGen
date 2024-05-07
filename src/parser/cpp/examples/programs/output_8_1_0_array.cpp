#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func2(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func0(const unsigned long PATH0);

int main() {
   int* array0 = new int[383];
   int* array1 = new int[886];
   int* array2 = new int[777];
   int* array3 = new int[915];
   int* array4 = new int[793];
   int* array5 = new int[335];
   for(int loop0 = 0; loop0 < 3; loop0++) {
      if(rng() & 1) {
         for (int i = 0; i < 793; i++) {
            if (array4[i] == 0) { 
               printf("IS 0!");
            }
         }
      }
      else {
         for (int i = 0; i < 383; i++) {
            array0[i]--; 
         }
         for (int i = 0; i < 915; i++) {
            if (array3[i] == 0) { 
               printf("IS 0!");
            }
         }
      }
      for(int loop1 = 0; loop1 < 3; loop1++) {
         int* array6 = new int[421];
         for (int i = 0; i < 777; i++) {
            array2[i]++; 
         }
         for(int loop2 = 0; loop2 < 3; loop2++) {
            int* array7 = new int[27];
            for (int i = 0; i < 777; i++) {
               array2[i]++; 
            }
            for(int loop3 = 0; loop3 < 3; loop3++) {
               int* array8 = new int[59];
               for (int i = 0; i < 335; i++) {
                  array5[i]++; 
               }
               for(int loop4 = 0; loop4 < 3; loop4++) {
                  int* array9 = new int[926];
                  for (int i = 0; i < 383; i++) {
                     array0[i]++; 
                  }
                  for(int loop5 = 0; loop5 < 3; loop5++) {
                     int* array10 = new int[426];
                     for (int i = 0; i < 777; i++) {
                        array2[i]++; 
                     }
                     for(int loop6 = 0; loop6 < 3; loop6++) {
                        int* array11 = new int[736];
                        for (int i = 0; i < 736; i++) {
                           array11[i]++; 
                        }
                        for (int i = 0; i < 59; i++) {
                           array8[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 335; i++) {
                        array5[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 926; i++) {
                     array9[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 59; i++) {
                  array8[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 777; i++) {
               array2[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 335; i++) {
            array5[i]--; 
         }
      }
      printf("DELETE!\n");
      func2(rng());
   }
   for (int i = 0; i < 383; i++) {
      if (array0[i] == 0) { 
         printf("IS 0!");
      }
   }
   for(int loop22 = 0; loop22 < 3; loop22++) {
      int* array6 = new int[60];
      for (int i = 0; i < 335; i++) {
         array5[i]++; 
      }
      for(int loop23 = 0; loop23 < 3; loop23++) {
         int* array7 = new int[368];
         for (int i = 0; i < 915; i++) {
            array3[i]++; 
         }
         for(int loop24 = 0; loop24 < 3; loop24++) {
            int* array8 = new int[12];
            for (int i = 0; i < 368; i++) {
               array7[i]++; 
            }
            for(int loop25 = 0; loop25 < 3; loop25++) {
               int* array9 = new int[586];
               for (int i = 0; i < 793; i++) {
                  array4[i]++; 
               }
               for(int loop26 = 0; loop26 < 3; loop26++) {
                  int* array10 = new int[539];
                  for (int i = 0; i < 12; i++) {
                     array8[i]++; 
                  }
                  for(int loop27 = 0; loop27 < 3; loop27++) {
                     int* array11 = new int[570];
                     for (int i = 0; i < 777; i++) {
                        array2[i]++; 
                     }
                     for(int loop28 = 0; loop28 < 3; loop28++) {
                        int* array12 = new int[378];
                        for (int i = 0; i < 570; i++) {
                           array11[i]++; 
                        }
                        for (int i = 0; i < 586; i++) {
                           array9[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 335; i++) {
                        array5[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 368; i++) {
                     array7[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 368; i++) {
                  array7[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 383; i++) {
               array0[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 793; i++) {
            array4[i]--; 
         }
      }
      printf("DELETE!\n");
      for (int i = 0; i < 886; i++) {
         array1[i]--; 
      }
   }
   printf("DELETE!\n");
   func1(rng());
   func0(rng());
   for(int loop63 = 0; loop63 < 3; loop63++) {
      int* array6 = new int[746];
      for (int i = 0; i < 886; i++) {
         array1[i]++; 
      }
      for(int loop64 = 0; loop64 < 3; loop64++) {
         int* array7 = new int[340];
         for (int i = 0; i < 746; i++) {
            array6[i]++; 
         }
         for(int loop65 = 0; loop65 < 3; loop65++) {
            int* array8 = new int[311];
            for (int i = 0; i < 886; i++) {
               array1[i]++; 
            }
            for(int loop66 = 0; loop66 < 3; loop66++) {
               int* array9 = new int[605];
               for (int i = 0; i < 886; i++) {
                  array1[i]++; 
               }
               for(int loop67 = 0; loop67 < 3; loop67++) {
                  int* array10 = new int[661];
                  for (int i = 0; i < 793; i++) {
                     array4[i]++; 
                  }
                  for(int loop68 = 0; loop68 < 3; loop68++) {
                     int* array11 = new int[878];
                     for (int i = 0; i < 335; i++) {
                        array5[i]++; 
                     }
                     for(int loop69 = 0; loop69 < 3; loop69++) {
                        int* array12 = new int[320];
                        for (int i = 0; i < 777; i++) {
                           array2[i]++; 
                        }
                        for(int loop70 = 0; loop70 < 3; loop70++) {
                           int* array13 = new int[444];
                           for (int i = 0; i < 383; i++) {
                              array0[i]++; 
                           }
                           for (int i = 0; i < 661; i++) {
                              array10[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 777; i++) {
                           array2[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 311; i++) {
                        array8[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 383; i++) {
                     array0[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 777; i++) {
                  array2[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 777; i++) {
               array2[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 793; i++) {
            array4[i]--; 
         }
      }
      printf("DELETE!\n");
      for (int i = 0; i < 777; i++) {
         array2[i]--; 
      }
   }
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop7 = 0; loop7 < 3; loop7++) {
         int* array6 = new int[123];
         for (int i = 0; i < 123; i++) {
            array6[i]++; 
         }
         for(int loop8 = 0; loop8 < 3; loop8++) {
            int* array7 = new int[135];
            for (int i = 0; i < 135; i++) {
               array7[i]++; 
            }
            for(int loop9 = 0; loop9 < 3; loop9++) {
               int* array8 = new int[802];
               for (int i = 0; i < 123; i++) {
                  array6[i]++; 
               }
               for(int loop10 = 0; loop10 < 3; loop10++) {
                  int* array9 = new int[58];
                  for (int i = 0; i < 135; i++) {
                     array7[i]++; 
                  }
                  for (int i = 0; i < 58; i++) {
                     array9[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 135; i++) {
                  array7[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 123; i++) {
               array6[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 123; i++) {
            array6[i]--; 
         }
      }
      printf("DELETE!\n");
      func4(rng());
   }
   else {
      int* array6 = new int[857];
      for (int i = 0; i < 857; i++) {
         array6[i]++; 
      }
      for (int i = 0; i < 857; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 857; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 857; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 857; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop17 = 0; loop17 < 3; loop17++) {
         int* array7 = new int[367];
         for (int i = 0; i < 857; i++) {
            array6[i]++; 
         }
         for(int loop18 = 0; loop18 < 3; loop18++) {
            int* array8 = new int[364];
            for (int i = 0; i < 857; i++) {
               array6[i]++; 
            }
            for(int loop19 = 0; loop19 < 3; loop19++) {
               int* array9 = new int[750];
               for (int i = 0; i < 750; i++) {
                  array9[i]++; 
               }
               for(int loop20 = 0; loop20 < 3; loop20++) {
                  int* array10 = new int[808];
                  for (int i = 0; i < 367; i++) {
                     array7[i]++; 
                  }
                  for(int loop21 = 0; loop21 < 3; loop21++) {
                     int* array11 = new int[178];
                     for (int i = 0; i < 364; i++) {
                        array8[i]++; 
                     }
                     for (int i = 0; i < 857; i++) {
                        array6[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 750; i++) {
                     array9[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 750; i++) {
                  array9[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 364; i++) {
               array8[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 367; i++) {
            array7[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop11 = 0; loop11 < 3; loop11++) {
         int* array6 = new int[42];
         for (int i = 0; i < 42; i++) {
            array6[i]++; 
         }
         for(int loop12 = 0; loop12 < 3; loop12++) {
            int* array7 = new int[373];
            for (int i = 0; i < 373; i++) {
               array7[i]++; 
            }
            for (int i = 0; i < 373; i++) {
               array7[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 42; i++) {
            array6[i]--; 
         }
      }
      printf("DELETE!\n");
      func6(rng());
   }
   else {
      int* array6 = new int[956];
      for (int i = 0; i < 956; i++) {
         array6[i]++; 
      }
      for (int i = 0; i < 956; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 956; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 956; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 956; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop14 = 0; loop14 < 3; loop14++) {
         int* array7 = new int[305];
         for (int i = 0; i < 305; i++) {
            array7[i]++; 
         }
         for(int loop15 = 0; loop15 < 3; loop15++) {
            int* array8 = new int[84];
            for (int i = 0; i < 956; i++) {
               array6[i]++; 
            }
            for(int loop16 = 0; loop16 < 3; loop16++) {
               int* array9 = new int[336];
               for (int i = 0; i < 305; i++) {
                  array7[i]++; 
               }
               for (int i = 0; i < 84; i++) {
                  array8[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 956; i++) {
               array6[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 305; i++) {
            array7[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int* array6 = new int[537];
      for (int i = 0; i < 537; i++) {
         array6[i]++; 
      }
      for (int i = 0; i < 537; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 537; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 537; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 537; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop13 = 0; loop13 < 3; loop13++) {
         int* array7 = new int[526];
         for (int i = 0; i < 526; i++) {
            array7[i]++; 
         }
         for (int i = 0; i < 537; i++) {
            array6[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop29 = 0; loop29 < 3; loop29++) {
         int* array6 = new int[301];
         for (int i = 0; i < 301; i++) {
            array6[i]++; 
         }
         for(int loop30 = 0; loop30 < 3; loop30++) {
            int* array7 = new int[286];
            for (int i = 0; i < 286; i++) {
               array7[i]++; 
            }
            for(int loop31 = 0; loop31 < 3; loop31++) {
               int* array8 = new int[865];
               for (int i = 0; i < 865; i++) {
                  array8[i]++; 
               }
               for(int loop32 = 0; loop32 < 3; loop32++) {
                  int* array9 = new int[444];
                  for (int i = 0; i < 444; i++) {
                     array9[i]++; 
                  }
                  for(int loop33 = 0; loop33 < 3; loop33++) {
                     int* array10 = new int[440];
                     for (int i = 0; i < 440; i++) {
                        array10[i]++; 
                     }
                     for (int i = 0; i < 286; i++) {
                        array7[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 286; i++) {
                     array7[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 301; i++) {
                  array6[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 286; i++) {
               array7[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 301; i++) {
            array6[i]--; 
         }
      }
      printf("DELETE!\n");
      func3(rng());
   }
   else {
      int* array6 = new int[491];
      for (int i = 0; i < 491; i++) {
         array6[i]++; 
      }
      for (int i = 0; i < 491; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 491; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 491; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 491; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop44 = 0; loop44 < 3; loop44++) {
         int* array7 = new int[551];
         for (int i = 0; i < 551; i++) {
            array7[i]++; 
         }
         for(int loop45 = 0; loop45 < 3; loop45++) {
            int* array8 = new int[228];
            for (int i = 0; i < 228; i++) {
               array8[i]++; 
            }
            for(int loop46 = 0; loop46 < 3; loop46++) {
               int* array9 = new int[407];
               for (int i = 0; i < 228; i++) {
                  array8[i]++; 
               }
               for(int loop47 = 0; loop47 < 3; loop47++) {
                  int* array10 = new int[121];
                  for (int i = 0; i < 407; i++) {
                     array9[i]++; 
                  }
                  for(int loop48 = 0; loop48 < 3; loop48++) {
                     int* array11 = new int[395];
                     for (int i = 0; i < 395; i++) {
                        array11[i]++; 
                     }
                     for(int loop49 = 0; loop49 < 3; loop49++) {
                        int* array12 = new int[237];
                        for (int i = 0; i < 551; i++) {
                           array7[i]++; 
                        }
                        for (int i = 0; i < 228; i++) {
                           array8[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 228; i++) {
                        array8[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 407; i++) {
                     array9[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 407; i++) {
                  array9[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 491; i++) {
               array6[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 491; i++) {
            array6[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop34 = 0; loop34 < 3; loop34++) {
         int* array6 = new int[675];
         for (int i = 0; i < 675; i++) {
            array6[i]++; 
         }
         for(int loop35 = 0; loop35 < 3; loop35++) {
            int* array7 = new int[927];
            for (int i = 0; i < 927; i++) {
               array7[i]++; 
            }
            for(int loop36 = 0; loop36 < 3; loop36++) {
               int* array8 = new int[856];
               for (int i = 0; i < 856; i++) {
                  array8[i]++; 
               }
               for (int i = 0; i < 675; i++) {
                  array6[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 675; i++) {
               array6[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 675; i++) {
            array6[i]--; 
         }
      }
      printf("DELETE!\n");
      func5(rng());
   }
   else {
      int* array6 = new int[451];
      for (int i = 0; i < 451; i++) {
         array6[i]++; 
      }
      for (int i = 0; i < 451; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 451; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 451; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 451; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop40 = 0; loop40 < 3; loop40++) {
         int* array7 = new int[228];
         for (int i = 0; i < 228; i++) {
            array7[i]++; 
         }
         for(int loop41 = 0; loop41 < 3; loop41++) {
            int* array8 = new int[350];
            for (int i = 0; i < 228; i++) {
               array7[i]++; 
            }
            for(int loop42 = 0; loop42 < 3; loop42++) {
               int* array9 = new int[500];
               for (int i = 0; i < 350; i++) {
                  array8[i]++; 
               }
               for(int loop43 = 0; loop43 < 3; loop43++) {
                  int* array10 = new int[764];
                  for (int i = 0; i < 764; i++) {
                     array10[i]++; 
                  }
                  for (int i = 0; i < 764; i++) {
                     array10[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 500; i++) {
                  array9[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 350; i++) {
               array8[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 228; i++) {
            array7[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop37 = 0; loop37 < 3; loop37++) {
         int* array6 = new int[306];
         for (int i = 0; i < 306; i++) {
            array6[i]++; 
         }
         for (int i = 0; i < 306; i++) {
            array6[i]--; 
         }
      }
      printf("DELETE!\n");
      func7(rng());
   }
   else {
      int* array6 = new int[19];
      for (int i = 0; i < 19; i++) {
         array6[i]++; 
      }
      for (int i = 0; i < 19; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 19; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 19; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 19; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop38 = 0; loop38 < 3; loop38++) {
         int* array7 = new int[149];
         for (int i = 0; i < 19; i++) {
            array6[i]++; 
         }
         for(int loop39 = 0; loop39 < 3; loop39++) {
            int* array8 = new int[723];
            for (int i = 0; i < 723; i++) {
               array8[i]++; 
            }
            for (int i = 0; i < 149; i++) {
               array7[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 19; i++) {
            array6[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int* array6 = new int[624];
      for (int i = 0; i < 624; i++) {
         array6[i]++; 
      }
      for (int i = 0; i < 624; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 624; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 624; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 624; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop50 = 0; loop50 < 3; loop50++) {
         int* array6 = new int[529];
         for (int i = 0; i < 529; i++) {
            array6[i]++; 
         }
         for(int loop51 = 0; loop51 < 3; loop51++) {
            int* array7 = new int[404];
            for (int i = 0; i < 404; i++) {
               array7[i]++; 
            }
            for(int loop52 = 0; loop52 < 3; loop52++) {
               int* array8 = new int[763];
               for (int i = 0; i < 763; i++) {
                  array8[i]++; 
               }
               for(int loop53 = 0; loop53 < 3; loop53++) {
                  int* array9 = new int[538];
                  for (int i = 0; i < 763; i++) {
                     array8[i]++; 
                  }
                  for(int loop54 = 0; loop54 < 3; loop54++) {
                     int* array10 = new int[840];
                     for (int i = 0; i < 840; i++) {
                        array10[i]++; 
                     }
                     for(int loop55 = 0; loop55 < 3; loop55++) {
                        int* array11 = new int[818];
                        for (int i = 0; i < 529; i++) {
                           array6[i]++; 
                        }
                        for (int i = 0; i < 529; i++) {
                           array6[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 840; i++) {
                        array10[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 404; i++) {
                     array7[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 763; i++) {
                  array8[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 529; i++) {
               array6[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 529; i++) {
            array6[i]--; 
         }
      }
      printf("DELETE!\n");
      func2(rng());
   }
   else {
      int* array6 = new int[743];
      for (int i = 0; i < 743; i++) {
         array6[i]++; 
      }
      for (int i = 0; i < 743; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 743; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 743; i++) {
         array6[i]--; 
      }
      for (int i = 0; i < 743; i++) {
         if (array6[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop56 = 0; loop56 < 3; loop56++) {
         int* array7 = new int[725];
         for (int i = 0; i < 743; i++) {
            array6[i]++; 
         }
         for(int loop57 = 0; loop57 < 3; loop57++) {
            int* array8 = new int[590];
            for (int i = 0; i < 590; i++) {
               array8[i]++; 
            }
            for(int loop58 = 0; loop58 < 3; loop58++) {
               int* array9 = new int[139];
               for (int i = 0; i < 590; i++) {
                  array8[i]++; 
               }
               for(int loop59 = 0; loop59 < 3; loop59++) {
                  int* array10 = new int[786];
                  for (int i = 0; i < 786; i++) {
                     array10[i]++; 
                  }
                  for(int loop60 = 0; loop60 < 3; loop60++) {
                     int* array11 = new int[82];
                     for (int i = 0; i < 743; i++) {
                        array6[i]++; 
                     }
                     for(int loop61 = 0; loop61 < 3; loop61++) {
                        int* array12 = new int[464];
                        for (int i = 0; i < 82; i++) {
                           array11[i]++; 
                        }
                        for(int loop62 = 0; loop62 < 3; loop62++) {
                           int* array13 = new int[507];
                           for (int i = 0; i < 139; i++) {
                              array9[i]++; 
                           }
                           for (int i = 0; i < 786; i++) {
                              array10[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 786; i++) {
                           array10[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 82; i++) {
                        array11[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 590; i++) {
                     array8[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 743; i++) {
                  array6[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 590; i++) {
               array8[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 725; i++) {
            array7[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

