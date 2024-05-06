#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func2(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func7();
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func0(const unsigned long PATH0);

int main() {
   int* array0 = new int[383];
   int* array1 = new int[886];
   int* array2 = new int[777];
   if(rng() & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         if(rng() & 1) {
            func2(rng());
         }
         else {
            if(rng() & 1) {
               func3(rng());
            }
            else {
               int* array4 = new int[929];
               for (int i = 0; i < 777; i++) {
                  if (array2[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 777; i++) {
                  array2[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            if(rng() & 1) {
               func2(rng());
            }
            else {
               if(rng() & 1) {
                  func3(rng());
               }
               else {
                  int* array5 = new int[58];
                  for (int i = 0; i < 58; i++) {
                     if (array5[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   for(int scalar3 = 0; scalar3 < 10; scalar3++) {
      if(rng() & 1) {
         func1(rng());
      }
      else {
         if(rng() & 1) {
            func2(rng());
         }
         else {
            int* array4 = new int[956];
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            for (int i = 0; i < 777; i++) {
               array2[i]--; 
            }
            printf("DELETE!\n");
         }
      }
   }
   if(rng() & 1) {
      func1(rng());
   }
   else {
      int* array3 = new int[170];
      for (int i = 0; i < 383; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 886; i++) {
         array1[i]--; 
      }
      printf("DELETE!\n");
   }
   func0(rng());
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func2(const unsigned long PATH0) {
   int* array4 = new int[915];
   for (int i = 0; i < 915; i++) {
      array4[i]++; 
   }
   for (int i = 0; i < 915; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         if(PATH0 & 2) {
            func5(rng());
         }
         else {
            if(PATH0 & 4) {
               func6(rng());
            }
            else {
               int* array6 = new int[690];
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               for (int i = 0; i < 690; i++) {
                  array6[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            if(PATH0 & 8) {
               func5(rng());
            }
            else {
               if(PATH0 & 16) {
                  func6(rng());
               }
               else {
                  int* array7 = new int[926];
                  for (int i = 0; i < 915; i++) {
                     if (array4[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   int* array6 = new int[386];
   for (int i = 0; i < 386; i++) {
      array6[i]++; 
   }
   for (int i = 0; i < 386; i++) {
      array6[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar7 = 0; scalar7 < 10; scalar7++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
   }
   else {
      for(int scalar7 = 0; scalar7 < 10; scalar7++) {
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func6(const unsigned long PATH0) {
   int* array6 = new int[421];
   for (int i = 0; i < 421; i++) {
      array6[i]++; 
   }
   for (int i = 0; i < 421; i++) {
      array6[i]++; 
   }
   if(PATH0 & 1) {
   }
   else {
      for(int scalar7 = 0; scalar7 < 10; scalar7++) {
      }
   }
   printf("DELETE!\n");
}

void func3(const unsigned long PATH0) {
   int* array4 = new int[172];
   for (int i = 0; i < 172; i++) {
      array4[i]++; 
   }
   for (int i = 0; i < 172; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         if(PATH0 & 2) {
            func6(rng());
         }
         else {
            if(PATH0 & 4) {
               func7();
            }
            else {
               int* array6 = new int[782];
               for (int i = 0; i < 782; i++) {
                  if (array6[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 782; i++) {
                  array6[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               if(PATH0 & 16) {
                  func7();
               }
               else {
                  int* array7 = new int[123];
                  for (int i = 0; i < 123; i++) {
                     if (array7[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 123; i++) {
                     array7[i]--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func7() {
   int* array6 = new int[368];
   for (int i = 0; i < 368; i++) {
      array6[i]++; 
   }
   for (int i = 0; i < 368; i++) {
      array6[i]++; 
   }
   printf("DELETE!\n");
}

void func1(const unsigned long PATH0) {
   int* array4 = new int[393];
   for (int i = 0; i < 393; i++) {
      array4[i]++; 
   }
   for (int i = 0; i < 393; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         if(PATH0 & 2) {
            func4(rng());
         }
         else {
            if(PATH0 & 4) {
               func5(rng());
            }
            else {
               int* array6 = new int[315];
               for (int i = 0; i < 393; i++) {
                  if (array4[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 315; i++) {
                  array6[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            if(PATH0 & 8) {
               func4(rng());
            }
            else {
               if(PATH0 & 16) {
                  func5(rng());
               }
               else {
                  int* array7 = new int[526];
                  for (int i = 0; i < 526; i++) {
                     if (array7[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 393; i++) {
                     array4[i]--; 
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
   int* array6 = new int[42];
   for (int i = 0; i < 42; i++) {
      array6[i]++; 
   }
   for (int i = 0; i < 42; i++) {
      array6[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar7 = 0; scalar7 < 10; scalar7++) {
         if(PATH0 & 2) {
            func7();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int* array8 = new int[421];
               for (int i = 0; i < 421; i++) {
                  if (array8[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 421; i++) {
                  array8[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar7 = 0; scalar7 < 10; scalar7++) {
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            if(PATH0 & 8) {
               func7();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int* array9 = new int[537];
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  for (int i = 0; i < 42; i++) {
                     array6[i]--; 
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
   int* array3 = new int[305];
   for (int i = 0; i < 305; i++) {
      array3[i]++; 
   }
   for (int i = 0; i < 305; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         if(PATH0 & 2) {
            func3(rng());
         }
         else {
            if(PATH0 & 4) {
               func4(rng());
            }
            else {
               int* array5 = new int[327];
               for (int i = 0; i < 327; i++) {
                  if (array5[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 327; i++) {
                  array5[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            if(PATH0 & 8) {
               func3(rng());
            }
            else {
               if(PATH0 & 16) {
                  func4(rng());
               }
               else {
                  int* array6 = new int[846];
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

