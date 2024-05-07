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
   for(int loop0 = 0; loop0 < 3; loop0++) {
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
   int* array0 = new int[383];
   int* array1 = new int[886];
   int* array2 = new int[777];
   for(int loop1 = 0; loop1 < 3; loop1++) {
      if(PATH0 & 1) {
         for (int i = 0; i < 886; i++) {
            if (array1[i] == 0) { 
               printf("IS 0!");
            }
         }
      }
      else {
         for (int i = 0; i < 777; i++) {
            array2[i]--; 
         }
         for (int i = 0; i < 886; i++) {
            if (array1[i] == 0) { 
               printf("IS 0!");
            }
         }
      }
      for(int loop2 = 0; loop2 < 3; loop2++) {
         int* array3 = new int[386];
         for (int i = 0; i < 383; i++) {
            array0[i]++; 
         }
         for(int loop3 = 0; loop3 < 3; loop3++) {
            int* array4 = new int[649];
            for (int i = 0; i < 886; i++) {
               array1[i]++; 
            }
            for(int loop4 = 0; loop4 < 3; loop4++) {
               int* array5 = new int[362];
               for (int i = 0; i < 886; i++) {
                  array1[i]++; 
               }
               for(int loop5 = 0; loop5 < 3; loop5++) {
                  int* array6 = new int[690];
                  for (int i = 0; i < 649; i++) {
                     array4[i]++; 
                  }
                  for(int loop6 = 0; loop6 < 3; loop6++) {
                     int* array7 = new int[763];
                     for (int i = 0; i < 690; i++) {
                        array6[i]++; 
                     }
                     for(int loop7 = 0; loop7 < 3; loop7++) {
                        int* array8 = new int[540];
                        for (int i = 0; i < 383; i++) {
                           array0[i]++; 
                        }
                        for (int i = 0; i < 763; i++) {
                           array7[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 383; i++) {
                        array0[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 386; i++) {
                     array3[i]--; 
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
         for (int i = 0; i < 886; i++) {
            array1[i]--; 
         }
      }
      printf("DELETE!\n");
      func3(rng());
   }
   for (int i = 0; i < 777; i++) {
      if (array2[i] == 0) { 
         printf("IS 0!");
      }
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop8 = 0; loop8 < 3; loop8++) {
         int* array3 = new int[782];
         for (int i = 0; i < 782; i++) {
            array3[i]++; 
         }
         for(int loop9 = 0; loop9 < 3; loop9++) {
            int* array4 = new int[862];
            for (int i = 0; i < 862; i++) {
               array4[i]++; 
            }
            for(int loop10 = 0; loop10 < 3; loop10++) {
               int* array5 = new int[67];
               for (int i = 0; i < 862; i++) {
                  array4[i]++; 
               }
               for(int loop11 = 0; loop11 < 3; loop11++) {
                  int* array6 = new int[929];
                  for (int i = 0; i < 67; i++) {
                     array5[i]++; 
                  }
                  for (int i = 0; i < 67; i++) {
                     array5[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 782; i++) {
                  array3[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 862; i++) {
               array4[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 782; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      func5(rng());
   }
   else {
      int* array3 = new int[846];
      for (int i = 0; i < 846; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 846; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 846; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 846; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 846; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop18 = 0; loop18 < 3; loop18++) {
         int* array4 = new int[582];
         for (int i = 0; i < 582; i++) {
            array4[i]++; 
         }
         for(int loop19 = 0; loop19 < 3; loop19++) {
            int* array5 = new int[814];
            for (int i = 0; i < 846; i++) {
               array3[i]++; 
            }
            for(int loop20 = 0; loop20 < 3; loop20++) {
               int* array6 = new int[434];
               for (int i = 0; i < 846; i++) {
                  array3[i]++; 
               }
               for(int loop21 = 0; loop21 < 3; loop21++) {
                  int* array7 = new int[43];
                  for (int i = 0; i < 846; i++) {
                     array3[i]++; 
                  }
                  for(int loop22 = 0; loop22 < 3; loop22++) {
                     int* array8 = new int[87];
                     for (int i = 0; i < 846; i++) {
                        array3[i]++; 
                     }
                     for (int i = 0; i < 846; i++) {
                        array3[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 434; i++) {
                     array6[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 846; i++) {
                  array3[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 846; i++) {
               array3[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 582; i++) {
            array4[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop12 = 0; loop12 < 3; loop12++) {
         int* array3 = new int[393];
         for (int i = 0; i < 393; i++) {
            array3[i]++; 
         }
         for(int loop13 = 0; loop13 < 3; loop13++) {
            int* array4 = new int[11];
            for (int i = 0; i < 393; i++) {
               array3[i]++; 
            }
            for (int i = 0; i < 11; i++) {
               array4[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 393; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      func7(rng());
   }
   else {
      int* array3 = new int[526];
      for (int i = 0; i < 526; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 526; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 526; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 526; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 526; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop15 = 0; loop15 < 3; loop15++) {
         int* array4 = new int[170];
         for (int i = 0; i < 526; i++) {
            array3[i]++; 
         }
         for(int loop16 = 0; loop16 < 3; loop16++) {
            int* array5 = new int[281];
            for (int i = 0; i < 526; i++) {
               array3[i]++; 
            }
            for(int loop17 = 0; loop17 < 3; loop17++) {
               int* array6 = new int[925];
               for (int i = 0; i < 526; i++) {
                  array3[i]++; 
               }
               for (int i = 0; i < 925; i++) {
                  array6[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 281; i++) {
               array5[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 170; i++) {
            array4[i]--; 
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
      int* array3 = new int[421];
      for (int i = 0; i < 421; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 421; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 421; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 421; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 421; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop14 = 0; loop14 < 3; loop14++) {
         int* array4 = new int[315];
         for (int i = 0; i < 421; i++) {
            array3[i]++; 
         }
         for (int i = 0; i < 315; i++) {
            array4[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func1() {
   for(int loop23 = 0; loop23 < 3; loop23++) {
      int* array0 = new int[754];
      for (int i = 0; i < 754; i++) {
         array0[i]++; 
      }
      for(int loop24 = 0; loop24 < 3; loop24++) {
         int* array1 = new int[932];
         for (int i = 0; i < 754; i++) {
            array0[i]++; 
         }
         for(int loop25 = 0; loop25 < 3; loop25++) {
            int* array2 = new int[676];
            for (int i = 0; i < 754; i++) {
               array0[i]++; 
            }
            for(int loop26 = 0; loop26 < 3; loop26++) {
               int* array3 = new int[739];
               for (int i = 0; i < 754; i++) {
                  array0[i]++; 
               }
               for(int loop27 = 0; loop27 < 3; loop27++) {
                  int* array4 = new int[226];
                  for (int i = 0; i < 932; i++) {
                     array1[i]++; 
                  }
                  for(int loop28 = 0; loop28 < 3; loop28++) {
                     int* array5 = new int[94];
                     for (int i = 0; i < 94; i++) {
                        array5[i]++; 
                     }
                     for(int loop29 = 0; loop29 < 3; loop29++) {
                        int* array6 = new int[795];
                        for (int i = 0; i < 754; i++) {
                           array0[i]++; 
                        }
                        for (int i = 0; i < 739; i++) {
                           array3[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 226; i++) {
                        array4[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 676; i++) {
                     array2[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 932; i++) {
                  array1[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 676; i++) {
               array2[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 754; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      for (int i = 0; i < 754; i++) {
         array0[i]--; 
      }
   }
   printf("DELETE!\n");
   func2(rng());
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop30 = 0; loop30 < 3; loop30++) {
         int* array0 = new int[492];
         for (int i = 0; i < 492; i++) {
            array0[i]++; 
         }
         for(int loop31 = 0; loop31 < 3; loop31++) {
            int* array1 = new int[756];
            for (int i = 0; i < 756; i++) {
               array1[i]++; 
            }
            for(int loop32 = 0; loop32 < 3; loop32++) {
               int* array2 = new int[280];
               for (int i = 0; i < 280; i++) {
                  array2[i]++; 
               }
               for(int loop33 = 0; loop33 < 3; loop33++) {
                  int* array3 = new int[441];
                  for (int i = 0; i < 756; i++) {
                     array1[i]++; 
                  }
                  for(int loop34 = 0; loop34 < 3; loop34++) {
                     int* array4 = new int[689];
                     for (int i = 0; i < 689; i++) {
                        array4[i]++; 
                     }
                     for (int i = 0; i < 689; i++) {
                        array4[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 492; i++) {
                     array0[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 492; i++) {
                  array0[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 756; i++) {
               array1[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 492; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      func4(rng());
   }
   else {
      int* array0 = new int[987];
      for (int i = 0; i < 987; i++) {
         array0[i]++; 
      }
      for (int i = 0; i < 987; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 987; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 987; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 987; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop45 = 0; loop45 < 3; loop45++) {
         int* array1 = new int[859];
         for (int i = 0; i < 987; i++) {
            array0[i]++; 
         }
         for(int loop46 = 0; loop46 < 3; loop46++) {
            int* array2 = new int[432];
            for (int i = 0; i < 432; i++) {
               array2[i]++; 
            }
            for(int loop47 = 0; loop47 < 3; loop47++) {
               int* array3 = new int[437];
               for (int i = 0; i < 987; i++) {
                  array0[i]++; 
               }
               for(int loop48 = 0; loop48 < 3; loop48++) {
                  int* array4 = new int[275];
                  for (int i = 0; i < 432; i++) {
                     array2[i]++; 
                  }
                  for(int loop49 = 0; loop49 < 3; loop49++) {
                     int* array5 = new int[474];
                     for (int i = 0; i < 859; i++) {
                        array1[i]++; 
                     }
                     for(int loop50 = 0; loop50 < 3; loop50++) {
                        int* array6 = new int[858];
                        for (int i = 0; i < 432; i++) {
                           array2[i]++; 
                        }
                        for (int i = 0; i < 987; i++) {
                           array0[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 859; i++) {
                        array1[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 987; i++) {
                     array0[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 859; i++) {
                  array1[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 432; i++) {
               array2[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 987; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop35 = 0; loop35 < 3; loop35++) {
         int* array0 = new int[97];
         for (int i = 0; i < 97; i++) {
            array0[i]++; 
         }
         for(int loop36 = 0; loop36 < 3; loop36++) {
            int* array1 = new int[481];
            for (int i = 0; i < 481; i++) {
               array1[i]++; 
            }
            for(int loop37 = 0; loop37 < 3; loop37++) {
               int* array2 = new int[709];
               for (int i = 0; i < 481; i++) {
                  array1[i]++; 
               }
               for (int i = 0; i < 97; i++) {
                  array0[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 97; i++) {
               array0[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 97; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      func6(rng());
   }
   else {
      int* array0 = new int[618];
      for (int i = 0; i < 618; i++) {
         array0[i]++; 
      }
      for (int i = 0; i < 618; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 618; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 618; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 618; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop41 = 0; loop41 < 3; loop41++) {
         int* array1 = new int[379];
         for (int i = 0; i < 618; i++) {
            array0[i]++; 
         }
         for(int loop42 = 0; loop42 < 3; loop42++) {
            int* array2 = new int[764];
            for (int i = 0; i < 764; i++) {
               array2[i]++; 
            }
            for(int loop43 = 0; loop43 < 3; loop43++) {
               int* array3 = new int[841];
               for (int i = 0; i < 764; i++) {
                  array2[i]++; 
               }
               for(int loop44 = 0; loop44 < 3; loop44++) {
                  int* array4 = new int[193];
                  for (int i = 0; i < 618; i++) {
                     array0[i]++; 
                  }
                  for (int i = 0; i < 193; i++) {
                     array4[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 618; i++) {
                  array0[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 618; i++) {
               array0[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 618; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop38 = 0; loop38 < 3; loop38++) {
         int* array0 = new int[353];
         for (int i = 0; i < 353; i++) {
            array0[i]++; 
         }
         for (int i = 0; i < 353; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      func8(rng());
   }
   else {
      int* array0 = new int[732];
      for (int i = 0; i < 732; i++) {
         array0[i]++; 
      }
      for (int i = 0; i < 732; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 732; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 732; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 732; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for(int loop39 = 0; loop39 < 3; loop39++) {
         int* array1 = new int[708];
         for (int i = 0; i < 708; i++) {
            array1[i]++; 
         }
         for(int loop40 = 0; loop40 < 3; loop40++) {
            int* array2 = new int[340];
            for (int i = 0; i < 732; i++) {
               array0[i]++; 
            }
            for (int i = 0; i < 732; i++) {
               array0[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 708; i++) {
            array1[i]--; 
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
      int* array0 = new int[306];
      for (int i = 0; i < 306; i++) {
         array0[i]++; 
      }
      for (int i = 0; i < 306; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 306; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 306; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 306; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
   }
}

