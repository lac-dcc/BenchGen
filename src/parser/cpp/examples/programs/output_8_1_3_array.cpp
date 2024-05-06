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
      int* array1 = new int[383];
      scalar0++;
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int* array3 = new int[777];
         for (int i = 0; i < 777; i++) {
            array3[i]++; 
         }
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int* array5 = new int[793];
            for (int i = 0; i < 383; i++) {
               array1[i]++; 
            }
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               int* array7 = new int[386];
               scalar4++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  int* array9 = new int[649];
                  for (int i = 0; i < 383; i++) {
                     array1[i]++; 
                  }
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     int* array11 = new int[362];
                     for (int i = 0; i < 386; i++) {
                        array7[i]++; 
                     }
                     for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                        int* array13 = new int[690];
                        for (int i = 0; i < 362; i++) {
                           array11[i]++; 
                        }
                        for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                           int* array15 = new int[763];
                           scalar6++;
                           scalar12--;
                        }
                        printf("DELETE!\n");
                        scalar8--;
                     }
                     printf("DELETE!\n");
                     scalar4--;
                  }
                  printf("DELETE!\n");
                  scalar6--;
               }
               printf("DELETE!\n");
               for (int i = 0; i < 777; i++) {
                  array3[i]--; 
               }
            }
            printf("DELETE!\n");
            scalar2--;
         }
         printf("DELETE!\n");
         for (int i = 0; i < 777; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      for (int i = 0; i < 383; i++) {
         array1[i]--; 
      }
   }
   printf("DELETE!\n");
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      int* array1 = new int[782];
      scalar0++;
      func0(rng());
      int* array2 = new int[773];
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int* array5 = new int[813];
            scalar0++;
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               int* array7 = new int[190];
               for (int i = 0; i < 190; i++) {
                  array7[i]++; 
               }
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  int* array9 = new int[926];
                  scalar6++;
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     int* array11 = new int[84];
                     scalar0++;
                     for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                        int* array13 = new int[90];
                        scalar4++;
                        for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                           int* array15 = new int[376];
                           scalar6++;
                           for(int scalar16 = 0; scalar16 < 10; scalar16++) {
                              int* array17 = new int[936];
                              for (int i = 0; i < 90; i++) {
                                 array13[i]++; 
                              }
                              for(int scalar18 = 0; scalar18 < 10; scalar18++) {
                                 int* array19 = new int[445];
                                 scalar16++;
                                 for (int i = 0; i < 445; i++) {
                                    array19[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              scalar12--;
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 190; i++) {
                              array7[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        scalar4--;
                     }
                     printf("DELETE!\n");
                     scalar4--;
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 773; i++) {
                     array2[i]--; 
                  }
               }
               printf("DELETE!\n");
               scalar3--;
            }
            printf("DELETE!\n");
            scalar3--;
         }
         printf("DELETE!\n");
         func1(rng());
      }
      for (int i = 0; i < 773; i++) {
         if (array2[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 773; i++) {
         array2[i]--; 
      }
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
      int* array2 = new int[586];
      int* array3 = new int[965];
      int* array4 = new int[306];
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         if(PATH0 & 2) {
            if (scalar5 == 0) {
               printf("IS 0!");
            }
         }
         else {
            scalar5--;
            for (int i = 0; i < 586; i++) {
               if (array2[i] == 0) { 
                  printf("IS 0!");
               }
            }
         }
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            int* array7 = new int[528];
            scalar5++;
            for(int scalar8 = 0; scalar8 < 10; scalar8++) {
               int* array9 = new int[732];
               for (int i = 0; i < 528; i++) {
                  array7[i]++; 
               }
               for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                  int* array11 = new int[503];
                  for (int i = 0; i < 503; i++) {
                     array11[i]++; 
                  }
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     int* array13 = new int[270];
                     for (int i = 0; i < 586; i++) {
                        array2[i]++; 
                     }
                     for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                        int* array15 = new int[708];
                        scalar5++;
                        for(int scalar16 = 0; scalar16 < 10; scalar16++) {
                           int* array17 = new int[340];
                           for (int i = 0; i < 528; i++) {
                              array7[i]++; 
                           }
                           scalar6--;
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 270; i++) {
                           array13[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 306; i++) {
                        array4[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 528; i++) {
                     array7[i]--; 
                  }
               }
               printf("DELETE!\n");
               scalar8--;
            }
            printf("DELETE!\n");
            scalar5--;
         }
         printf("DELETE!\n");
         func3(rng());
      }
      for (int i = 0; i < 965; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
   }
   else {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            int* array4 = new int[555];
            for (int i = 0; i < 555; i++) {
               array4[i]++; 
            }
            for(int scalar5 = 0; scalar5 < 10; scalar5++) {
               int* array6 = new int[488];
               for (int i = 0; i < 488; i++) {
                  array6[i]++; 
               }
               for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                  int* array8 = new int[228];
                  for (int i = 0; i < 228; i++) {
                     array8[i]++; 
                  }
                  for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                     int* array10 = new int[350];
                     scalar3++;
                     for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                        int* array12 = new int[500];
                        scalar2++;
                        for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                           int* array14 = new int[764];
                           for (int i = 0; i < 555; i++) {
                              array4[i]++; 
                           }
                           for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                              int* array16 = new int[914];
                              for (int i = 0; i < 555; i++) {
                                 array4[i]++; 
                              }
                              for(int scalar17 = 0; scalar17 < 10; scalar17++) {
                                 int* array18 = new int[856];
                                 scalar17++;
                                 for (int i = 0; i < 764; i++) {
                                    array14[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 555; i++) {
                                 array4[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           scalar7--;
                        }
                        printf("DELETE!\n");
                        scalar11--;
                     }
                     printf("DELETE!\n");
                     scalar9--;
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 555; i++) {
                     array4[i]--; 
                  }
               }
               printf("DELETE!\n");
               scalar3--;
            }
            printf("DELETE!\n");
            for (int i = 0; i < 555; i++) {
               array4[i]--; 
            }
         }
         printf("DELETE!\n");
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            int* array4 = new int[228];
            for (int i = 0; i < 228; i++) {
               array4[i]++; 
            }
            for(int scalar5 = 0; scalar5 < 10; scalar5++) {
               int* array6 = new int[407];
               for (int i = 0; i < 407; i++) {
                  array6[i]++; 
               }
               for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                  int* array8 = new int[121];
                  scalar2++;
                  for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                     int* array10 = new int[395];
                     for (int i = 0; i < 395; i++) {
                        array10[i]++; 
                     }
                     for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                        int* array12 = new int[237];
                        for (int i = 0; i < 395; i++) {
                           array10[i]++; 
                        }
                        for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                           int* array14 = new int[793];
                           for (int i = 0; i < 237; i++) {
                              array12[i]++; 
                           }
                           for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                              int* array16 = new int[428];
                              scalar5++;
                              for (int i = 0; i < 121; i++) {
                                 array8[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           scalar13--;
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 228; i++) {
                           array4[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 228; i++) {
                        array4[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 121; i++) {
                     array8[i]--; 
                  }
               }
               printf("DELETE!\n");
               scalar5--;
            }
            printf("DELETE!\n");
            scalar3--;
         }
         printf("DELETE!\n");
         func2(rng());
      }
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int* array3 = new int[862];
         for (int i = 0; i < 862; i++) {
            array3[i]++; 
         }
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int* array5 = new int[67];
            for (int i = 0; i < 67; i++) {
               array5[i]++; 
            }
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               int* array7 = new int[929];
               scalar2++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  int* array9 = new int[22];
                  scalar4++;
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     int* array11 = new int[69];
                     for (int i = 0; i < 22; i++) {
                        array9[i]++; 
                     }
                     for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                        int* array13 = new int[393];
                        scalar6++;
                        for (int i = 0; i < 22; i++) {
                           array9[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     scalar4--;
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 929; i++) {
                     array7[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 67; i++) {
                  array5[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 862; i++) {
               array3[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 862; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      func3(rng());
   }
   else {
      int* array2 = new int[902];
      for (int i = 0; i < 902; i++) {
         array2[i]++; 
      }
      for (int i = 0; i < 902; i++) {
         if (array2[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 902; i++) {
         array2[i]--; 
      }
      for (int i = 0; i < 902; i++) {
         array2[i]--; 
      }
      for (int i = 0; i < 902; i++) {
         if (array2[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int* array4 = new int[280];
         for (int i = 0; i < 280; i++) {
            array4[i]++; 
         }
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int* array6 = new int[441];
            for (int i = 0; i < 902; i++) {
               array2[i]++; 
            }
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               int* array8 = new int[689];
               for (int i = 0; i < 689; i++) {
                  array8[i]++; 
               }
               for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                  int* array10 = new int[619];
                  for (int i = 0; i < 441; i++) {
                     array6[i]++; 
                  }
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     int* array12 = new int[729];
                     for (int i = 0; i < 441; i++) {
                        array6[i]++; 
                     }
                     for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                        int* array14 = new int[117];
                        for (int i = 0; i < 441; i++) {
                           array6[i]++; 
                        }
                        for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                           int* array16 = new int[771];
                           for (int i = 0; i < 689; i++) {
                              array8[i]++; 
                           }
                           scalar7--;
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 280; i++) {
                           array4[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 619; i++) {
                        array10[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  scalar5--;
               }
               printf("DELETE!\n");
               scalar5--;
            }
            printf("DELETE!\n");
            for (int i = 0; i < 280; i++) {
               array4[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 902; i++) {
            array2[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int* array3 = new int[784];
         for (int i = 0; i < 784; i++) {
            array3[i]++; 
         }
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int* array5 = new int[198];
            scalar2++;
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               int* array7 = new int[315];
               scalar2++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  int* array9 = new int[413];
                  scalar8++;
                  for (int i = 0; i < 198; i++) {
                     array5[i]--; 
                  }
               }
               printf("DELETE!\n");
               scalar4--;
            }
            printf("DELETE!\n");
            scalar2--;
         }
         printf("DELETE!\n");
         for (int i = 0; i < 784; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      func5(rng());
   }
   else {
      int* array2 = new int[403];
      for (int i = 0; i < 403; i++) {
         array2[i]++; 
      }
      for (int i = 0; i < 403; i++) {
         if (array2[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 403; i++) {
         array2[i]--; 
      }
      for (int i = 0; i < 403; i++) {
         array2[i]--; 
      }
      for (int i = 0; i < 403; i++) {
         if (array2[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int* array4 = new int[676];
         for (int i = 0; i < 403; i++) {
            array2[i]++; 
         }
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int* array6 = new int[739];
            for (int i = 0; i < 676; i++) {
               array4[i]++; 
            }
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               int* array8 = new int[226];
               for (int i = 0; i < 226; i++) {
                  array8[i]++; 
               }
               for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                  int* array10 = new int[94];
                  for (int i = 0; i < 676; i++) {
                     array4[i]++; 
                  }
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     int* array12 = new int[795];
                     scalar5++;
                     for (int i = 0; i < 94; i++) {
                        array10[i]--; 
                     }
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
         for (int i = 0; i < 676; i++) {
            array4[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int* array3 = new int[862];
         scalar2++;
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int* array5 = new int[996];
            for (int i = 0; i < 862; i++) {
               array3[i]++; 
            }
            for (int i = 0; i < 862; i++) {
               array3[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 862; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      func7(rng());
   }
   else {
      int* array2 = new int[895];
      for (int i = 0; i < 895; i++) {
         array2[i]++; 
      }
      for (int i = 0; i < 895; i++) {
         if (array2[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 895; i++) {
         array2[i]--; 
      }
      for (int i = 0; i < 895; i++) {
         array2[i]--; 
      }
      for (int i = 0; i < 895; i++) {
         if (array2[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int* array4 = new int[364];
         for (int i = 0; i < 895; i++) {
            array2[i]++; 
         }
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int* array6 = new int[750];
            for (int i = 0; i < 364; i++) {
               array4[i]++; 
            }
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               int* array8 = new int[808];
               scalar7++;
               for (int i = 0; i < 895; i++) {
                  array2[i]--; 
               }
            }
            printf("DELETE!\n");
            scalar5--;
         }
         printf("DELETE!\n");
         for (int i = 0; i < 895; i++) {
            array2[i]--; 
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
      int* array2 = new int[84];
      for (int i = 0; i < 84; i++) {
         array2[i]++; 
      }
      for (int i = 0; i < 84; i++) {
         if (array2[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 84; i++) {
         array2[i]--; 
      }
      for (int i = 0; i < 84; i++) {
         array2[i]--; 
      }
      for (int i = 0; i < 84; i++) {
         if (array2[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int* array4 = new int[313];
         for (int i = 0; i < 313; i++) {
            array4[i]++; 
         }
         for (int i = 0; i < 84; i++) {
            array2[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int* array4 = new int[613];
         scalar3++;
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int* array6 = new int[606];
            scalar3++;
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               int* array8 = new int[904];
               scalar7++;
               for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                  int* array10 = new int[128];
                  scalar3++;
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     int* array12 = new int[369];
                     for (int i = 0; i < 128; i++) {
                        array10[i]++; 
                     }
                     for (int i = 0; i < 128; i++) {
                        array10[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  scalar7--;
               }
               printf("DELETE!\n");
               scalar5--;
            }
            printf("DELETE!\n");
            for (int i = 0; i < 606; i++) {
               array6[i]--; 
            }
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      func4(rng());
   }
   else {
      int* array3 = new int[637];
      for (int i = 0; i < 637; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 637; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 637; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 637; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 637; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         int* array5 = new int[899];
         for (int i = 0; i < 637; i++) {
            array3[i]++; 
         }
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            int* array7 = new int[550];
            scalar6++;
            for(int scalar8 = 0; scalar8 < 10; scalar8++) {
               int* array9 = new int[71];
               scalar6++;
               for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                  int* array11 = new int[131];
                  for (int i = 0; i < 637; i++) {
                     array3[i]++; 
                  }
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     int* array13 = new int[930];
                     scalar12++;
                     for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                        int* array15 = new int[894];
                        scalar12++;
                        for (int i = 0; i < 899; i++) {
                           array5[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     scalar8--;
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 899; i++) {
                     array5[i]--; 
                  }
               }
               printf("DELETE!\n");
               scalar8--;
            }
            printf("DELETE!\n");
            scalar4--;
         }
         printf("DELETE!\n");
         for (int i = 0; i < 637; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int* array4 = new int[183];
         scalar3++;
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int* array6 = new int[499];
            scalar3++;
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               int* array8 = new int[725];
               scalar7++;
               scalar3--;
            }
            printf("DELETE!\n");
            for (int i = 0; i < 183; i++) {
               array4[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 183; i++) {
            array4[i]--; 
         }
      }
      printf("DELETE!\n");
      func6(rng());
   }
   else {
      int* array3 = new int[810];
      for (int i = 0; i < 810; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 810; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 810; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 810; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 810; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         int* array5 = new int[305];
         for (int i = 0; i < 810; i++) {
            array3[i]++; 
         }
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            int* array7 = new int[736];
            for (int i = 0; i < 736; i++) {
               array7[i]++; 
            }
            for(int scalar8 = 0; scalar8 < 10; scalar8++) {
               int* array9 = new int[626];
               scalar6++;
               for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                  int* array11 = new int[465];
                  scalar8++;
                  scalar4--;
               }
               printf("DELETE!\n");
               for (int i = 0; i < 305; i++) {
                  array5[i]--; 
               }
            }
            printf("DELETE!\n");
            scalar6--;
         }
         printf("DELETE!\n");
         for (int i = 0; i < 305; i++) {
            array5[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int* array4 = new int[954];
         scalar3++;
         for (int i = 0; i < 954; i++) {
            array4[i]--; 
         }
      }
      printf("DELETE!\n");
      func8(rng());
   }
   else {
      int* array3 = new int[804];
      for (int i = 0; i < 804; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 804; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 804; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 804; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 804; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         int* array5 = new int[343];
         scalar4++;
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            int* array7 = new int[568];
            for (int i = 0; i < 804; i++) {
               array3[i]++; 
            }
            for (int i = 0; i < 343; i++) {
               array5[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 343; i++) {
            array5[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int* array3 = new int[82];
      for (int i = 0; i < 82; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 82; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 82; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 82; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 82; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
   }
}

