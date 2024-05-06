#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func8();
void func5(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func0(const unsigned long PATH0);

int main() {
   if(rng() & 1) {
      if(rng() & 1) {
         int* array0 = new int[383];
         func1(rng());
         for (int i = 0; i < 383; i++) {
            if (array0[i] == 0) { 
               printf("IS 0!");
            }
         }
      }
      else {
         for(int scalar0 = 0; scalar0 < 10; scalar0++) {
            if(rng() & 1) {
               for(int scalar1 = 0; scalar1 < 10; scalar1++) {
                  if(rng() & 1) {
                     func3(rng());
                  }
                  else {
                     if(rng() & 1) {
                        func4(rng());
                     }
                     else {
                        int* array2 = new int[324];
                        for (int i = 0; i < 324; i++) {
                           if (array2[i] == 0) { 
                              printf("IS 0!");
                           }
                        }
                        scalar0--;
                        printf("DELETE!\n");
                     }
                  }
               }
            }
            else {
               for(int scalar1 = 0; scalar1 < 10; scalar1++) {
                  for(int scalar2 = 0; scalar2 < 10; scalar2++) {
                     if(rng() & 1) {
                        func3(rng());
                     }
                     else {
                        if(rng() & 1) {
                           func4(rng());
                        }
                        else {
                           int* array3 = new int[413];
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           for (int i = 0; i < 413; i++) {
                              array3[i]--; 
                           }
                           printf("DELETE!\n");
                        }
                     }
                  }
               }
            }
            for(int scalar1 = 0; scalar1 < 10; scalar1++) {
               if(rng() & 1) {
                  func2(rng());
               }
               else {
                  if(rng() & 1) {
                     func3(rng());
                  }
                  else {
                     int* array2 = new int[84];
                     if (scalar0 == 0) {
                        printf("IS 0!");
                     }
                     for (int i = 0; i < 84; i++) {
                        array2[i]--; 
                     }
                     printf("DELETE!\n");
                  }
               }
            }
         }
      }
   }
   else {
      func0(rng());
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
   int* array1 = new int[886];
   for (int i = 0; i < 886; i++) {
      array1[i]++; 
   }
   for (int i = 0; i < 886; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         if(PATH0 & 2) {
            func4(rng());
         }
         else {
            if(PATH0 & 4) {
               func5(rng());
            }
            else {
               int* array3 = new int[67];
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               for (int i = 0; i < 67; i++) {
                  array3[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            if(PATH0 & 8) {
               func4(rng());
            }
            else {
               if(PATH0 & 16) {
                  func5(rng());
               }
               else {
                  int* array4 = new int[802];
                  if (scalar3 == 0) {
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

void func4(const unsigned long PATH0) {
   int* array3 = new int[793];
   for (int i = 0; i < 793; i++) {
      array3[i]++; 
   }
   for (int i = 0; i < 793; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         if(PATH0 & 2) {
            func7(rng());
         }
         else {
            if(PATH0 & 4) {
               func8();
            }
            else {
               int* array5 = new int[59];
               for (int i = 0; i < 59; i++) {
                  if (array5[i] == 0) { 
                     printf("IS 0!");
                  }
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
               func7(rng());
            }
            else {
               if(PATH0 & 16) {
                  func8();
               }
               else {
                  int* array6 = new int[540];
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  for (int i = 0; i < 793; i++) {
                     array3[i]--; 
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
   int* array5 = new int[492];
   for (int i = 0; i < 492; i++) {
      array5[i]++; 
   }
   for (int i = 0; i < 492; i++) {
      array5[i]++; 
   }
   if(PATH0 & 1) {
   }
   else {
      for(int scalar6 = 0; scalar6 < 10; scalar6++) {
      }
   }
   printf("DELETE!\n");
}

void func8() {
   int* array5 = new int[362];
   for (int i = 0; i < 362; i++) {
      array5[i]++; 
   }
   for (int i = 0; i < 362; i++) {
      array5[i]++; 
   }
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   int* array3 = new int[736];
   for (int i = 0; i < 736; i++) {
      array3[i]++; 
   }
   for (int i = 0; i < 736; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         if(PATH0 & 2) {
            func8();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int* array5 = new int[567];
               for (int i = 0; i < 736; i++) {
                  if (array3[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 567; i++) {
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
               func8();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int* array6 = new int[530];
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  for (int i = 0; i < 530; i++) {
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

void func3(const unsigned long PATH0) {
   int* array2 = new int[167];
   for (int i = 0; i < 167; i++) {
      array2[i]++; 
   }
   for (int i = 0; i < 167; i++) {
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
               int* array4 = new int[373];
               for (int i = 0; i < 167; i++) {
                  if (array2[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 373; i++) {
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
               func6(rng());
            }
            else {
               if(PATH0 & 16) {
                  func7(rng());
               }
               else {
                  int* array5 = new int[784];
                  if (scalar3 == 0) {
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

void func6(const unsigned long PATH0) {
   int* array4 = new int[11];
   for (int i = 0; i < 11; i++) {
      array4[i]++; 
   }
   for (int i = 0; i < 11; i++) {
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

void func2(const unsigned long PATH0) {
   int* array2 = new int[980];
   for (int i = 0; i < 980; i++) {
      array2[i]++; 
   }
   for (int i = 0; i < 980; i++) {
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
               int* array4 = new int[862];
               for (int i = 0; i < 862; i++) {
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
               func5(rng());
            }
            else {
               if(PATH0 & 16) {
                  func6(rng());
               }
               else {
                  int* array5 = new int[281];
                  if (scalar3 == 0) {
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

void func0(const unsigned long PATH0) {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      if(PATH0 & 1) {
         func2(rng());
      }
      else {
         int* array1 = new int[505];
         if (scalar0 == 0) {
            printf("IS 0!");
         }
         for (int i = 0; i < 505; i++) {
            array1[i]--; 
         }
         printf("DELETE!\n");
      }
   }
}

