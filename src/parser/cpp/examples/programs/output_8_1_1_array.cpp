#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func1();
void func2(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func8(const unsigned long PATH0);

int main() {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      if(rng() & 1) {
         func0(rng());
      }
      else {
         func1();
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
   int* array1 = new int[383];
   int* array2 = new int[886];
   int* array3 = new int[777];
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      if(PATH0 & 1) {
         if (scalar4 == 0) {
            printf("IS 0!");
         }
      }
      else {
         for (int i = 0; i < 886; i++) {
            array2[i]--; 
         }
         if (scalar4 == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         int* array6 = new int[386];
         for (int i = 0; i < 383; i++) {
            array1[i]++; 
         }
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            int* array8 = new int[649];
            for (int i = 0; i < 386; i++) {
               array6[i]++; 
            }
            for(int scalar9 = 0; scalar9 < 10; scalar9++) {
               int* array10 = new int[362];
               for (int i = 0; i < 649; i++) {
                  array8[i]++; 
               }
               for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                  int* array12 = new int[690];
                  for (int i = 0; i < 649; i++) {
                     array8[i]++; 
                  }
                  for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                     int* array14 = new int[763];
                     for (int i = 0; i < 383; i++) {
                        array1[i]++; 
                     }
                     for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                        int* array16 = new int[540];
                        for (int i = 0; i < 777; i++) {
                           array3[i]++; 
                        }
                        scalar5--;
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 777; i++) {
                        array3[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 690; i++) {
                     array12[i]--; 
                  }
               }
               printf("DELETE!\n");
               scalar9--;
            }
            printf("DELETE!\n");
            for (int i = 0; i < 649; i++) {
               array8[i]--; 
            }
         }
         printf("DELETE!\n");
         scalar4--;
      }
      printf("DELETE!\n");
      func3(rng());
   }
   for (int i = 0; i < 777; i++) {
      if (array3[i] == 0) { 
         printf("IS 0!");
      }
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         int* array6 = new int[782];
         scalar5++;
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            int* array8 = new int[862];
            for (int i = 0; i < 862; i++) {
               array8[i]++; 
            }
            for(int scalar9 = 0; scalar9 < 10; scalar9++) {
               int* array10 = new int[67];
               for (int i = 0; i < 782; i++) {
                  array6[i]++; 
               }
               for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                  int* array12 = new int[929];
                  scalar7++;
                  scalar11--;
               }
               printf("DELETE!\n");
               scalar5--;
            }
            printf("DELETE!\n");
            for (int i = 0; i < 782; i++) {
               array6[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 782; i++) {
            array6[i]--; 
         }
      }
      printf("DELETE!\n");
      func5(rng());
   }
   else {
      int* array5 = new int[846];
      for (int i = 0; i < 846; i++) {
         array5[i]++; 
      }
      for (int i = 0; i < 846; i++) {
         if (array5[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 846; i++) {
         array5[i]--; 
      }
      for (int i = 0; i < 846; i++) {
         array5[i]--; 
      }
      for (int i = 0; i < 846; i++) {
         if (array5[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar6 = 0; scalar6 < 10; scalar6++) {
         int* array7 = new int[582];
         for (int i = 0; i < 846; i++) {
            array5[i]++; 
         }
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            int* array9 = new int[814];
            for (int i = 0; i < 582; i++) {
               array7[i]++; 
            }
            for(int scalar10 = 0; scalar10 < 10; scalar10++) {
               int* array11 = new int[434];
               for (int i = 0; i < 846; i++) {
                  array5[i]++; 
               }
               for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                  int* array13 = new int[43];
                  scalar10++;
                  for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                     int* array15 = new int[87];
                     scalar6++;
                     for (int i = 0; i < 814; i++) {
                        array9[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 43; i++) {
                     array13[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 814; i++) {
                  array9[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 814; i++) {
               array9[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 846; i++) {
            array5[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         int* array6 = new int[393];
         scalar5++;
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            int* array8 = new int[11];
            scalar7++;
            for (int i = 0; i < 393; i++) {
               array6[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 393; i++) {
            array6[i]--; 
         }
      }
      printf("DELETE!\n");
      func7(rng());
   }
   else {
      int* array5 = new int[526];
      for (int i = 0; i < 526; i++) {
         array5[i]++; 
      }
      for (int i = 0; i < 526; i++) {
         if (array5[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 526; i++) {
         array5[i]--; 
      }
      for (int i = 0; i < 526; i++) {
         array5[i]--; 
      }
      for (int i = 0; i < 526; i++) {
         if (array5[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar6 = 0; scalar6 < 10; scalar6++) {
         int* array7 = new int[170];
         scalar6++;
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            int* array9 = new int[281];
            for (int i = 0; i < 526; i++) {
               array5[i]++; 
            }
            for(int scalar10 = 0; scalar10 < 10; scalar10++) {
               int* array11 = new int[925];
               for (int i = 0; i < 281; i++) {
                  array9[i]++; 
               }
               scalar10--;
            }
            printf("DELETE!\n");
            scalar6--;
         }
         printf("DELETE!\n");
         for (int i = 0; i < 170; i++) {
            array7[i]--; 
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
      int* array5 = new int[421];
      for (int i = 0; i < 421; i++) {
         array5[i]++; 
      }
      for (int i = 0; i < 421; i++) {
         if (array5[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 421; i++) {
         array5[i]--; 
      }
      for (int i = 0; i < 421; i++) {
         array5[i]--; 
      }
      for (int i = 0; i < 421; i++) {
         if (array5[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar6 = 0; scalar6 < 10; scalar6++) {
         int* array7 = new int[315];
         for (int i = 0; i < 421; i++) {
            array5[i]++; 
         }
         for (int i = 0; i < 315; i++) {
            array7[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func1() {
   for(int scalar1 = 0; scalar1 < 10; scalar1++) {
      int* array2 = new int[754];
      for (int i = 0; i < 754; i++) {
         array2[i]++; 
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         int* array4 = new int[932];
         scalar1++;
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int* array6 = new int[676];
            scalar1++;
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               int* array8 = new int[739];
               scalar5++;
               for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                  int* array10 = new int[226];
                  scalar7++;
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     int* array12 = new int[94];
                     for (int i = 0; i < 94; i++) {
                        array12[i]++; 
                     }
                     for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                        int* array14 = new int[795];
                        scalar1++;
                        scalar11--;
                     }
                     printf("DELETE!\n");
                     scalar11--;
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 739; i++) {
                     array8[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 754; i++) {
                  array2[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 676; i++) {
               array6[i]--; 
            }
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      for (int i = 0; i < 754; i++) {
         array2[i]--; 
      }
   }
   printf("DELETE!\n");
   func2(rng());
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar1 = 0; scalar1 < 10; scalar1++) {
         int* array2 = new int[492];
         scalar1++;
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            int* array4 = new int[756];
            for (int i = 0; i < 492; i++) {
               array2[i]++; 
            }
            for(int scalar5 = 0; scalar5 < 10; scalar5++) {
               int* array6 = new int[280];
               scalar3++;
               for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                  int* array8 = new int[441];
                  for (int i = 0; i < 492; i++) {
                     array2[i]++; 
                  }
                  for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                     int* array10 = new int[689];
                     scalar5++;
                     for (int i = 0; i < 689; i++) {
                        array10[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  scalar1--;
               }
               printf("DELETE!\n");
               for (int i = 0; i < 756; i++) {
                  array4[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 756; i++) {
               array4[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 492; i++) {
            array2[i]--; 
         }
      }
      printf("DELETE!\n");
      func4(rng());
   }
   else {
      int* array1 = new int[987];
      for (int i = 0; i < 987; i++) {
         array1[i]++; 
      }
      for (int i = 0; i < 987; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 987; i++) {
         array1[i]--; 
      }
      for (int i = 0; i < 987; i++) {
         array1[i]--; 
      }
      for (int i = 0; i < 987; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int* array3 = new int[859];
         scalar2++;
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int* array5 = new int[432];
            scalar2++;
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               int* array7 = new int[437];
               for (int i = 0; i < 437; i++) {
                  array7[i]++; 
               }
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  int* array9 = new int[275];
                  for (int i = 0; i < 859; i++) {
                     array3[i]++; 
                  }
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     int* array11 = new int[474];
                     for (int i = 0; i < 275; i++) {
                        array9[i]++; 
                     }
                     for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                        int* array13 = new int[858];
                        for (int i = 0; i < 859; i++) {
                           array3[i]++; 
                        }
                        for (int i = 0; i < 474; i++) {
                           array11[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 275; i++) {
                        array9[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  scalar4--;
               }
               printf("DELETE!\n");
               for (int i = 0; i < 859; i++) {
                  array3[i]--; 
               }
            }
            printf("DELETE!\n");
            scalar4--;
         }
         printf("DELETE!\n");
         for (int i = 0; i < 859; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar1 = 0; scalar1 < 10; scalar1++) {
         int* array2 = new int[97];
         for (int i = 0; i < 97; i++) {
            array2[i]++; 
         }
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            int* array4 = new int[481];
            for (int i = 0; i < 481; i++) {
               array4[i]++; 
            }
            for(int scalar5 = 0; scalar5 < 10; scalar5++) {
               int* array6 = new int[709];
               for (int i = 0; i < 97; i++) {
                  array2[i]++; 
               }
               for (int i = 0; i < 481; i++) {
                  array4[i]--; 
               }
            }
            printf("DELETE!\n");
            scalar1--;
         }
         printf("DELETE!\n");
         for (int i = 0; i < 97; i++) {
            array2[i]--; 
         }
      }
      printf("DELETE!\n");
      func6(rng());
   }
   else {
      int* array1 = new int[618];
      for (int i = 0; i < 618; i++) {
         array1[i]++; 
      }
      for (int i = 0; i < 618; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 618; i++) {
         array1[i]--; 
      }
      for (int i = 0; i < 618; i++) {
         array1[i]--; 
      }
      for (int i = 0; i < 618; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int* array3 = new int[379];
         scalar2++;
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int* array5 = new int[764];
            scalar4++;
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               int* array7 = new int[841];
               scalar4++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  int* array9 = new int[193];
                  for (int i = 0; i < 764; i++) {
                     array5[i]++; 
                  }
                  for (int i = 0; i < 193; i++) {
                     array9[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 379; i++) {
                  array3[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 764; i++) {
               array5[i]--; 
            }
         }
         printf("DELETE!\n");
         scalar2--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar1 = 0; scalar1 < 10; scalar1++) {
         int* array2 = new int[353];
         scalar1++;
         for (int i = 0; i < 353; i++) {
            array2[i]--; 
         }
      }
      printf("DELETE!\n");
      func8(rng());
   }
   else {
      int* array1 = new int[732];
      for (int i = 0; i < 732; i++) {
         array1[i]++; 
      }
      for (int i = 0; i < 732; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 732; i++) {
         array1[i]--; 
      }
      for (int i = 0; i < 732; i++) {
         array1[i]--; 
      }
      for (int i = 0; i < 732; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int* array3 = new int[708];
         for (int i = 0; i < 708; i++) {
            array3[i]++; 
         }
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int* array5 = new int[340];
            for (int i = 0; i < 340; i++) {
               array5[i]++; 
            }
            scalar2--;
         }
         printf("DELETE!\n");
         for (int i = 0; i < 708; i++) {
            array3[i]--; 
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
      int* array1 = new int[306];
      for (int i = 0; i < 306; i++) {
         array1[i]++; 
      }
      for (int i = 0; i < 306; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 306; i++) {
         array1[i]--; 
      }
      for (int i = 0; i < 306; i++) {
         array1[i]--; 
      }
      for (int i = 0; i < 306; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
   }
}

