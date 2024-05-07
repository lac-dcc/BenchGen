#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func8();
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func5(const unsigned long PATH0);

int main() {
   for(int loop0 = 0; loop0 < 3; loop0++) {
      if(rng() & 1) {
         func0(rng());
      }
      else {
         func1(rng());
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
   if(PATH0 & 1) {
      for(int loop1 = 0; loop1 < 3; loop1++) {
         if(PATH0 & 2) {
            func3(rng());
         }
         else {
            if(PATH0 & 4) {
               func4(rng());
            }
            else {
               int* array0 = new int[123];
               for (int i = 0; i < 123; i++) {
                  if (array0[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 123; i++) {
                  array0[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop12 = 0; loop12 < 3; loop12++) {
         for(int loop13 = 0; loop13 < 3; loop13++) {
            if(PATH0 & 8) {
               func3(rng());
            }
            else {
               if(PATH0 & 16) {
                  func4(rng());
               }
               else {
                  int* array0 = new int[929];
                  for (int i = 0; i < 929; i++) {
                     if (array0[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 929; i++) {
                     array0[i]--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
}

void func3(const unsigned long PATH0) {
   int* array0 = new int[383];
   for (int i = 0; i < 383; i++) {
      array0[i]++; 
   }
   for (int i = 0; i < 383; i++) {
      array0[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop2 = 0; loop2 < 3; loop2++) {
         if(PATH0 & 2) {
            func6(rng());
         }
         else {
            if(PATH0 & 4) {
               func7(rng());
            }
            else {
               int* array1 = new int[421];
               for (int i = 0; i < 383; i++) {
                  if (array0[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 421; i++) {
                  array1[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop7 = 0; loop7 < 3; loop7++) {
         for(int loop8 = 0; loop8 < 3; loop8++) {
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               if(PATH0 & 16) {
                  func7(rng());
               }
               else {
                  int* array1 = new int[690];
                  for (int i = 0; i < 690; i++) {
                     if (array1[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 690; i++) {
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
   int* array1 = new int[915];
   for (int i = 0; i < 915; i++) {
      array1[i]++; 
   }
   for (int i = 0; i < 915; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop3 = 0; loop3 < 3; loop3++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
   }
   else {
      for(int loop4 = 0; loop4 < 3; loop4++) {
         for(int loop5 = 0; loop5 < 3; loop5++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func7(const unsigned long PATH0) {
   int* array1 = new int[386];
   for (int i = 0; i < 386; i++) {
      array1[i]++; 
   }
   for (int i = 0; i < 386; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
   }
   else {
      for(int loop6 = 0; loop6 < 3; loop6++) {
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0) {
   int* array0 = new int[926];
   for (int i = 0; i < 926; i++) {
      array0[i]++; 
   }
   for (int i = 0; i < 926; i++) {
      array0[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop9 = 0; loop9 < 3; loop9++) {
         if(PATH0 & 2) {
            func7(rng());
         }
         else {
            if(PATH0 & 4) {
               func8();
            }
            else {
               int* array1 = new int[368];
               for (int i = 0; i < 368; i++) {
                  if (array1[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 368; i++) {
                  array1[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop10 = 0; loop10 < 3; loop10++) {
         for(int loop11 = 0; loop11 < 3; loop11++) {
            if(PATH0 & 8) {
               func7(rng());
            }
            else {
               if(PATH0 & 16) {
                  func8();
               }
               else {
                  int* array1 = new int[782];
                  for (int i = 0; i < 926; i++) {
                     if (array0[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 926; i++) {
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

void func8() {
   int* array1 = new int[172];
   for (int i = 0; i < 172; i++) {
      array1[i]++; 
   }
   for (int i = 0; i < 172; i++) {
      array1[i]++; 
   }
   printf("DELETE!\n");
}

void func1(const unsigned long PATH0) {
   for(int loop14 = 0; loop14 < 3; loop14++) {
      if(PATH0 & 1) {
         func2(rng());
      }
      else {
         if(PATH0 & 2) {
            func3(rng());
         }
         else {
            int* array0 = new int[526];
            for (int i = 0; i < 526; i++) {
               if (array0[i] == 0) { 
                  printf("IS 0!");
               }
            }
            for (int i = 0; i < 526; i++) {
               array0[i]--; 
            }
            printf("DELETE!\n");
         }
      }
   }
}

void func2(const unsigned long PATH0) {
   int* array0 = new int[58];
   for (int i = 0; i < 58; i++) {
      array0[i]++; 
   }
   for (int i = 0; i < 58; i++) {
      array0[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop15 = 0; loop15 < 3; loop15++) {
         if(PATH0 & 2) {
            func5(rng());
         }
         else {
            if(PATH0 & 4) {
               func6(rng());
            }
            else {
               int* array1 = new int[537];
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
      }
   }
   else {
      for(int loop19 = 0; loop19 < 3; loop19++) {
         for(int loop20 = 0; loop20 < 3; loop20++) {
            if(PATH0 & 8) {
               func5(rng());
            }
            else {
               if(PATH0 & 16) {
                  func6(rng());
               }
               else {
                  int* array1 = new int[315];
                  for (int i = 0; i < 58; i++) {
                     if (array0[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 315; i++) {
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

void func5(const unsigned long PATH0) {
   int* array1 = new int[393];
   for (int i = 0; i < 393; i++) {
      array1[i]++; 
   }
   for (int i = 0; i < 393; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop16 = 0; loop16 < 3; loop16++) {
         if(PATH0 & 2) {
            func8();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int* array2 = new int[42];
               for (int i = 0; i < 42; i++) {
                  if (array2[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 42; i++) {
                  array2[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop17 = 0; loop17 < 3; loop17++) {
         for(int loop18 = 0; loop18 < 3; loop18++) {
            if(PATH0 & 8) {
               func8();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int* array2 = new int[421];
                  for (int i = 0; i < 421; i++) {
                     if (array2[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 393; i++) {
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

