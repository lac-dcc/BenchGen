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
         for(int loop10 = 0; loop10 < 3; loop10++) {
            if(rng() & 1) {
               for(int loop11 = 0; loop11 < 3; loop11++) {
                  if(rng() & 1) {
                     func3(rng());
                  }
                  else {
                     if(rng() & 1) {
                        func4(rng());
                     }
                     else {
                        int* array0 = new int[324];
                        for (int i = 0; i < 324; i++) {
                           if (array0[i] == 0) { 
                              printf("IS 0!");
                           }
                        }
                        for (int i = 0; i < 324; i++) {
                           array0[i]--; 
                        }
                        printf("DELETE!\n");
                     }
                  }
               }
            }
            else {
               for(int loop18 = 0; loop18 < 3; loop18++) {
                  for(int loop19 = 0; loop19 < 3; loop19++) {
                     if(rng() & 1) {
                        func3(rng());
                     }
                     else {
                        if(rng() & 1) {
                           func4(rng());
                        }
                        else {
                           int* array0 = new int[413];
                           for (int i = 0; i < 413; i++) {
                              if (array0[i] == 0) { 
                                 printf("IS 0!");
                              }
                           }
                           for (int i = 0; i < 413; i++) {
                              array0[i]--; 
                           }
                           printf("DELETE!\n");
                        }
                     }
                  }
               }
            }
            for(int loop20 = 0; loop20 < 3; loop20++) {
               if(rng() & 1) {
                  func2(rng());
               }
               else {
                  if(rng() & 1) {
                     func3(rng());
                  }
                  else {
                     int* array0 = new int[84];
                     for (int i = 0; i < 84; i++) {
                        if (array0[i] == 0) { 
                           printf("IS 0!");
                        }
                     }
                     for (int i = 0; i < 84; i++) {
                        array0[i]--; 
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
      for(int loop0 = 0; loop0 < 3; loop0++) {
         if(PATH0 & 2) {
            func4(rng());
         }
         else {
            if(PATH0 & 4) {
               func5(rng());
            }
            else {
               int* array2 = new int[67];
               for (int i = 0; i < 67; i++) {
                  if (array2[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 67; i++) {
                  array2[i]--; 
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
                  int* array2 = new int[802];
                  for (int i = 0; i < 886; i++) {
                     if (array1[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 886; i++) {
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

void func4(const unsigned long PATH0) {
   int* array2 = new int[793];
   for (int i = 0; i < 793; i++) {
      array2[i]++; 
   }
   for (int i = 0; i < 793; i++) {
      array2[i]++; 
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
               int* array3 = new int[59];
               for (int i = 0; i < 59; i++) {
                  if (array3[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 793; i++) {
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
                  int* array3 = new int[540];
                  for (int i = 0; i < 793; i++) {
                     if (array2[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 793; i++) {
                     array2[i]--; 
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
   int* array3 = new int[492];
   for (int i = 0; i < 492; i++) {
      array3[i]++; 
   }
   for (int i = 0; i < 492; i++) {
      array3[i]++; 
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
   int* array3 = new int[362];
   for (int i = 0; i < 362; i++) {
      array3[i]++; 
   }
   for (int i = 0; i < 362; i++) {
      array3[i]++; 
   }
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   int* array2 = new int[736];
   for (int i = 0; i < 736; i++) {
      array2[i]++; 
   }
   for (int i = 0; i < 736; i++) {
      array2[i]++; 
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
               int* array3 = new int[567];
               for (int i = 0; i < 567; i++) {
                  if (array3[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 736; i++) {
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
                  int* array3 = new int[530];
                  for (int i = 0; i < 736; i++) {
                     if (array2[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 530; i++) {
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

void func3(const unsigned long PATH0) {
   int* array0 = new int[167];
   for (int i = 0; i < 167; i++) {
      array0[i]++; 
   }
   for (int i = 0; i < 167; i++) {
      array0[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop12 = 0; loop12 < 3; loop12++) {
         if(PATH0 & 2) {
            func6(rng());
         }
         else {
            if(PATH0 & 4) {
               func7(rng());
            }
            else {
               int* array1 = new int[373];
               for (int i = 0; i < 373; i++) {
                  if (array1[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 373; i++) {
                  array1[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop16 = 0; loop16 < 3; loop16++) {
         for(int loop17 = 0; loop17 < 3; loop17++) {
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               if(PATH0 & 16) {
                  func7(rng());
               }
               else {
                  int* array1 = new int[784];
                  for (int i = 0; i < 784; i++) {
                     if (array1[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 167; i++) {
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

void func6(const unsigned long PATH0) {
   int* array1 = new int[11];
   for (int i = 0; i < 11; i++) {
      array1[i]++; 
   }
   for (int i = 0; i < 11; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop13 = 0; loop13 < 3; loop13++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
   }
   else {
      for(int loop14 = 0; loop14 < 3; loop14++) {
         for(int loop15 = 0; loop15 < 3; loop15++) {
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
   int* array0 = new int[980];
   for (int i = 0; i < 980; i++) {
      array0[i]++; 
   }
   for (int i = 0; i < 980; i++) {
      array0[i]++; 
   }
   if(PATH0 & 1) {
      for(int loop21 = 0; loop21 < 3; loop21++) {
         if(PATH0 & 2) {
            func5(rng());
         }
         else {
            if(PATH0 & 4) {
               func6(rng());
            }
            else {
               int* array1 = new int[862];
               for (int i = 0; i < 980; i++) {
                  if (array0[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 980; i++) {
                  array0[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop22 = 0; loop22 < 3; loop22++) {
         for(int loop23 = 0; loop23 < 3; loop23++) {
            if(PATH0 & 8) {
               func5(rng());
            }
            else {
               if(PATH0 & 16) {
                  func6(rng());
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
   }
   printf("DELETE!\n");
}

void func0(const unsigned long PATH0) {
   for(int loop24 = 0; loop24 < 3; loop24++) {
      if(PATH0 & 1) {
         func2(rng());
      }
      else {
         int* array0 = new int[505];
         for (int i = 0; i < 505; i++) {
            if (array0[i] == 0) { 
               printf("IS 0!");
            }
         }
         for (int i = 0; i < 505; i++) {
            array0[i]--; 
         }
         printf("DELETE!\n");
      }
   }
}

