#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func8();
void func5(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func3(const unsigned long PATH0);

int main() {
   func1(rng());
   for(int loop10 = 0; loop10 < 3; loop10++) {
      int* array0 = new int[58];
      for (int i = 0; i < 58; i++) {
         array0[i]++; 
      }
      func0(rng());
      int* array1 = new int[313];
      for(int loop25 = 0; loop25 < 3; loop25++) {
         func1(rng());
         if(rng() & 1) {
            func2(rng());
         }
         else {
            int* array2 = new int[857];
            for (int i = 0; i < 58; i++) {
               if (array0[i] == 0) { 
                  printf("IS 0!");
               }
            }
            for (int i = 0; i < 58; i++) {
               array0[i]--; 
            }
            printf("DELETE!\n");
         }
      }
      for (int i = 0; i < 58; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 313; i++) {
         array1[i]--; 
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

void func1(const unsigned long PATH0) {
   int* array0 = new int[383];
   for (int i = 0; i < 383; i++) {
      array0[i]++; 
   }
   for (int i = 0; i < 383; i++) {
      array0[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop0 = 0; loop0 < 3; loop0++) {
         if(PATH0 & 2) {
            func4(rng());
         }
         else {
            if(PATH0 & 4) {
               func5(rng());
            }
            else {
               int* array1 = new int[123];
               for (int i = 0; i < 123; i++) {
                  if (array1[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 123; i++) {
                  array1[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop8 = 0; loop8 < 3; loop8++) {
         for(int loop9 = 0; loop9 < 3; loop9++) {
            if(PATH0 & 8) {
               func4(rng());
            }
            else {
               if(PATH0 & 16) {
                  func5(rng());
               }
               else {
                  int* array1 = new int[929];
                  for (int i = 0; i < 383; i++) {
                     if (array0[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 383; i++) {
                     array0[i]--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0) {
   int* array1 = new int[915];
   for (int i = 0; i < 915; i++) {
      array1[i]++; 
   }
   for (int i = 0; i < 915; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop1 = 0; loop1 < 3; loop1++) {
         if(PATH0 & 2) {
            func7(rng());
         }
         else {
            if(PATH0 & 4) {
               func8();
            }
            else {
               int* array2 = new int[690];
               for (int i = 0; i < 690; i++) {
                  if (array2[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 690; i++) {
                  array2[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop3 = 0; loop3 < 3; loop3++) {
         for(int loop4 = 0; loop4 < 3; loop4++) {
            if(PATH0 & 8) {
               func7(rng());
            }
            else {
               if(PATH0 & 16) {
                  func8();
               }
               else {
                  int* array2 = new int[926];
                  for (int i = 0; i < 915; i++) {
                     if (array1[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 915; i++) {
                     array1[i]--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func7(const unsigned long PATH0) {
   int* array2 = new int[386];
   for (int i = 0; i < 386; i++) {
      array2[i]++; 
   }
   for (int i = 0; i < 386; i++) {
      array2[i]++; 
   }
   if(PATH0 & 1) {
   }
   else {
      for(int loop2 = 0; loop2 < 3; loop2++) {
      }
   }
   printf("DELETE!\n");
}

void func8() {
   int* array2 = new int[421];
   for (int i = 0; i < 421; i++) {
      array2[i]++; 
   }
   for (int i = 0; i < 421; i++) {
      array2[i]++; 
   }
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   int* array1 = new int[172];
   for (int i = 0; i < 172; i++) {
      array1[i]++; 
   }
   for (int i = 0; i < 172; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop5 = 0; loop5 < 3; loop5++) {
         if(PATH0 & 2) {
            func8();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int* array2 = new int[368];
               for (int i = 0; i < 368; i++) {
                  if (array2[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 368; i++) {
                  array2[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop6 = 0; loop6 < 3; loop6++) {
         for(int loop7 = 0; loop7 < 3; loop7++) {
            if(PATH0 & 8) {
               func8();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int* array2 = new int[782];
                  for (int i = 0; i < 172; i++) {
                     if (array1[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 172; i++) {
                     array1[i]--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func0(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func2(rng());
   }
   else {
      int* array1 = new int[324];
      for (int i = 0; i < 324; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 324; i++) {
         array1[i]--; 
      }
      printf("DELETE!\n");
   }
   if(PATH0 & 2) {
      if(PATH0 & 4) {
         for(int loop17 = 0; loop17 < 3; loop17++) {
            if(PATH0 & 8) {
               func3(rng());
            }
            else {
               if(PATH0 & 16) {
                  func4(rng());
               }
               else {
                  int* array1 = new int[281];
                  for (int i = 0; i < 281; i++) {
                     if (array1[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 281; i++) {
                     array1[i]--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
      else {
         for(int loop21 = 0; loop21 < 3; loop21++) {
            for(int loop22 = 0; loop22 < 3; loop22++) {
               if(PATH0 & 32) {
                  func3(rng());
               }
               else {
                  if(PATH0 & 64) {
                     func4(rng());
                  }
                  else {
                     int* array1 = new int[84];
                     for (int i = 0; i < 84; i++) {
                        if (array1[i] == 0) { 
                           printf("IS 0!");
                        }
                     }
                     for (int i = 0; i < 84; i++) {
                        array1[i]--; 
                     }
                     printf("DELETE!\n");
                  }
               }
            }
         }
      }
   }
   else {
      for(int loop23 = 0; loop23 < 3; loop23++) {
         func1(rng());
         for(int loop24 = 0; loop24 < 3; loop24++) {
            if(PATH0 & 128) {
               func2(rng());
            }
            else {
               if(PATH0 & 256) {
                  func3(rng());
               }
               else {
                  int* array1 = new int[505];
                  for (int i = 0; i < 505; i++) {
                     if (array1[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 505; i++) {
                     array1[i]--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
}

void func2(const unsigned long PATH0) {
   int* array1 = new int[167];
   for (int i = 0; i < 167; i++) {
      array1[i]++; 
   }
   for (int i = 0; i < 167; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop11 = 0; loop11 < 3; loop11++) {
         if(PATH0 & 2) {
            func5(rng());
         }
         else {
            if(PATH0 & 4) {
               func6(rng());
            }
            else {
               int* array2 = new int[373];
               for (int i = 0; i < 373; i++) {
                  if (array2[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 373; i++) {
                  array2[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop15 = 0; loop15 < 3; loop15++) {
         for(int loop16 = 0; loop16 < 3; loop16++) {
            if(PATH0 & 8) {
               func5(rng());
            }
            else {
               if(PATH0 & 16) {
                  func6(rng());
               }
               else {
                  int* array2 = new int[784];
                  for (int i = 0; i < 784; i++) {
                     if (array2[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 167; i++) {
                     array1[i]--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func6(const unsigned long PATH0) {
   int* array2 = new int[11];
   for (int i = 0; i < 11; i++) {
      array2[i]++; 
   }
   for (int i = 0; i < 11; i++) {
      array2[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop12 = 0; loop12 < 3; loop12++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
   }
   else {
      for(int loop13 = 0; loop13 < 3; loop13++) {
         for(int loop14 = 0; loop14 < 3; loop14++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func3(const unsigned long PATH0) {
   int* array1 = new int[413];
   for (int i = 0; i < 413; i++) {
      array1[i]++; 
   }
   for (int i = 0; i < 413; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop18 = 0; loop18 < 3; loop18++) {
         if(PATH0 & 2) {
            func6(rng());
         }
         else {
            if(PATH0 & 4) {
               func7(rng());
            }
            else {
               int* array2 = new int[980];
               for (int i = 0; i < 413; i++) {
                  if (array1[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 980; i++) {
                  array2[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop19 = 0; loop19 < 3; loop19++) {
         for(int loop20 = 0; loop20 < 3; loop20++) {
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               if(PATH0 & 16) {
                  func7(rng());
               }
               else {
                  int* array2 = new int[862];
                  for (int i = 0; i < 413; i++) {
                     if (array1[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 413; i++) {
                     array1[i]--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

