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
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      int scalar1 = 1;
      scalar1++;
      func0(rng());
      int scalar2 = 1;
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         func1(rng());
         if(rng() & 1) {
            func2(rng());
         }
         else {
            int scalar4 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
      }
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar2--;
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
   int scalar0 = 1;
   scalar0++;
   scalar0++;
   if(PATH0 & 1) {
      for(int scalar1 = 0; scalar1 < 10; scalar1++) {
         if(PATH0 & 2) {
            func4(rng());
         }
         else {
            if(PATH0 & 4) {
               func5(rng());
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar1 = 0; scalar1 < 10; scalar1++) {
         for(int scalar2 = 0; scalar2 < 10; scalar2++) {
            if(PATH0 & 8) {
               func4(rng());
            }
            else {
               if(PATH0 & 16) {
                  func5(rng());
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar0--;
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0) {
   int scalar2 = 1;
   scalar2++;
   scalar2++;
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
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
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
               func7(rng());
            }
            else {
               if(PATH0 & 16) {
                  func8();
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func7(const unsigned long PATH0) {
   int scalar4 = 1;
   scalar4++;
   scalar4++;
   if(PATH0 & 1) {
   }
   else {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
      }
   }
   printf("DELETE!\n");
}

void func8() {
   int scalar4 = 1;
   scalar4++;
   scalar4++;
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   int scalar2 = 1;
   scalar2++;
   scalar2++;
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         if(PATH0 & 2) {
            func8();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
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
               func8();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar2 == 0) {
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

void func0(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func2(rng());
   }
   else {
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      printf("DELETE!\n");
   }
   if(PATH0 & 2) {
      if(PATH0 & 4) {
         for(int scalar2 = 0; scalar2 < 10; scalar2++) {
            if(PATH0 & 8) {
               func3(rng());
            }
            else {
               if(PATH0 & 16) {
                  func4(rng());
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
            }
         }
      }
      else {
         for(int scalar2 = 0; scalar2 < 10; scalar2++) {
            for(int scalar3 = 0; scalar3 < 10; scalar3++) {
               if(PATH0 & 32) {
                  func3(rng());
               }
               else {
                  if(PATH0 & 64) {
                     func4(rng());
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
               }
            }
         }
      }
   }
   else {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         func1(rng());
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            if(PATH0 & 128) {
               func2(rng());
            }
            else {
               if(PATH0 & 256) {
                  func3(rng());
               }
               else {
                  int scalar4 = 1;
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
}

void func2(const unsigned long PATH0) {
   int scalar2 = 1;
   scalar2++;
   scalar2++;
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
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
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
               func5(rng());
            }
            else {
               if(PATH0 & 16) {
                  func6(rng());
               }
               else {
                  int scalar5 = 1;
                  if (scalar5 == 0) {
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

void func6(const unsigned long PATH0) {
   int scalar4 = 1;
   scalar4++;
   scalar4++;
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

void func3(const unsigned long PATH0) {
   int scalar3 = 1;
   scalar3++;
   scalar3++;
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         if(PATH0 & 2) {
            func6(rng());
         }
         else {
            if(PATH0 & 4) {
               func7(rng());
            }
            else {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               if(PATH0 & 16) {
                  func7(rng());
               }
               else {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
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

