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
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
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
      for(int scalar1 = 0; scalar1 < 10; scalar1++) {
         if(PATH0 & 2) {
            func3(rng());
         }
         else {
            if(PATH0 & 4) {
               func4(rng());
            }
            else {
               int* array2 = new int[123];
               for (int i = 0; i < 123; i++) {
                  if (array2[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 123; i++) {
                  array2[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar1 = 0; scalar1 < 10; scalar1++) {
         for(int scalar2 = 0; scalar2 < 10; scalar2++) {
            if(PATH0 & 8) {
               func3(rng());
            }
            else {
               if(PATH0 & 16) {
                  func4(rng());
               }
               else {
                  int* array3 = new int[929];
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
}

void func3(const unsigned long PATH0) {
   int* array2 = new int[383];
   for (int i = 0; i < 383; i++) {
      array2[i]++; 
   }
   for (int i = 0; i < 383; i++) {
      array2[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         if(PATH0 & 2) {
            func6(rng());
         }
         else {
            if(PATH0 & 4) {
               func7(rng());
            }
            else {
               int* array4 = new int[421];
               for (int i = 0; i < 421; i++) {
                  if (array4[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               scalar3--;
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               if(PATH0 & 16) {
                  func7(rng());
               }
               else {
                  int* array5 = new int[690];
                  for (int i = 0; i < 690; i++) {
                     if (array5[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 690; i++) {
                     array5[i]--; 
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
         }
         else {
         }
      }
   }
   else {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
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
   int* array4 = new int[386];
   for (int i = 0; i < 386; i++) {
      array4[i]++; 
   }
   for (int i = 0; i < 386; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
   }
   else {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0) {
   int* array2 = new int[926];
   for (int i = 0; i < 926; i++) {
      array2[i]++; 
   }
   for (int i = 0; i < 926; i++) {
      array2[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         if(PATH0 & 2) {
            func7(rng());
         }
         else {
            if(PATH0 & 4) {
               func8();
            }
            else {
               int* array4 = new int[368];
               for (int i = 0; i < 926; i++) {
                  if (array2[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 926; i++) {
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
            if(PATH0 & 8) {
               func7(rng());
            }
            else {
               if(PATH0 & 16) {
                  func8();
               }
               else {
                  int* array5 = new int[782];
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

void func8() {
   int* array4 = new int[172];
   for (int i = 0; i < 172; i++) {
      array4[i]++; 
   }
   for (int i = 0; i < 172; i++) {
      array4[i]++; 
   }
   printf("DELETE!\n");
}

void func1(const unsigned long PATH0) {
   for(int scalar1 = 0; scalar1 < 10; scalar1++) {
      if(PATH0 & 1) {
         func2(rng());
      }
      else {
         if(PATH0 & 2) {
            func3(rng());
         }
         else {
            int* array2 = new int[526];
            for (int i = 0; i < 526; i++) {
               if (array2[i] == 0) { 
                  printf("IS 0!");
               }
            }
            scalar1--;
            printf("DELETE!\n");
         }
      }
   }
}

void func2(const unsigned long PATH0) {
   int* array2 = new int[58];
   for (int i = 0; i < 58; i++) {
      array2[i]++; 
   }
   for (int i = 0; i < 58; i++) {
      array2[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         if(PATH0 & 2) {
            func5(rng());
         }
         else {
            if(PATH0 & 4) {
               func6(rng());
            }
            else {
               int* array4 = new int[537];
               for (int i = 0; i < 537; i++) {
                  if (array4[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 537; i++) {
                  array4[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            if(PATH0 & 8) {
               func5(rng());
            }
            else {
               if(PATH0 & 16) {
                  func6(rng());
               }
               else {
                  int* array5 = new int[315];
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
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
            func8();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int* array6 = new int[42];
               for (int i = 0; i < 393; i++) {
                  if (array4[i] == 0) { 
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
   else {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            if(PATH0 & 8) {
               func8();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int* array7 = new int[421];
                  for (int i = 0; i < 421; i++) {
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

