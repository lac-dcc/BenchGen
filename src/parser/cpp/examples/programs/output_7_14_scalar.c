#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2, const unsigned long PATH3, const unsigned long PATH4);
void func1(const unsigned long PATH0, const unsigned long PATH1);
void func4(const unsigned long PATH0, const unsigned long PATH1);
void func7(const unsigned long PATH0);
void func10(const unsigned long PATH0);
void func13(const unsigned long PATH0);
void func16(const unsigned long PATH0);
void func19();
void func20();
void func21();
void func17(const unsigned long PATH0);
void func18(const unsigned long PATH0);
void func14(const unsigned long PATH0);
void func15(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func12(const unsigned long PATH0);
void func8(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func2(const unsigned long PATH0, const unsigned long PATH1);
void func3(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   func0(rng(), rng(), rng(), rng(), rng());
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2, const unsigned long PATH3, const unsigned long PATH4) {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      func1(rng(), rng());
      if(PATH0 & 1) {
         func7(rng());
         if(PATH0 & 2) {
            func13(rng());
            if(PATH0 & 4) {
               func19();
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop280 = 0;
               int loopLimit280 = (rand()%10)/2 + 1;
               for(; loop280 < loopLimit280; loop280++) {
                  if(PATH0 & 8) {
                  }
                  else {
                  }
               }
               int loop281 = 0;
               int loopLimit281 = (rand()%10)/2 + 1;
               for(; loop281 < loopLimit281; loop281++) {
                  func21();
               }
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop282 = 0;
            int loopLimit282 = (rand()%10)/2 + 1;
            for(; loop282 < loopLimit282; loop282++) {
               if(PATH0 & 16) {
                  func16(rng());
                  if(PATH0 & 32) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  if(PATH0 & 64) {
                     func19();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop283 = 0;
                     int loopLimit283 = (rand()%10)/3 + 1;
                     for(; loop283 < loopLimit283; loop283++) {
                        if(PATH0 & 128) {
                        }
                        else {
                        }
                     }
                     int loop284 = 0;
                     int loopLimit284 = (rand()%10)/3 + 1;
                     for(; loop284 < loopLimit284; loop284++) {
                        func21();
                     }
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop285 = 0;
            int loopLimit285 = (rand()%10)/2 + 1;
            for(; loop285 < loopLimit285; loop285++) {
               func15(rng());
            }
            int scalar2 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func11(rng());
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop286 = 0;
         int loopLimit286 = (rand()%10)/2 + 1;
         for(; loop286 < loopLimit286; loop286++) {
            if(PATH0 & 256) {
               func10(rng());
               if(PATH0 & 512) {
                  func16(rng());
                  if(PATH0 & 1024) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop287 = 0;
                  int loopLimit287 = (rand()%10)/3 + 1;
                  for(; loop287 < loopLimit287; loop287++) {
                     if(PATH0 & 2048) {
                        func19();
                     }
                     else {
                        if(PATH0 & 4096) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop288 = 0;
                  int loopLimit288 = (rand()%10)/3 + 1;
                  for(; loop288 < loopLimit288; loop288++) {
                     func18(rng());
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
            else {
               if(PATH0 & 8192) {
                  func13(rng());
                  if(PATH0 & 16384) {
                     func19();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop289 = 0;
                     int loopLimit289 = (rand()%10)/3 + 1;
                     for(; loop289 < loopLimit289; loop289++) {
                        if(PATH0 & 32768) {
                        }
                        else {
                        }
                     }
                     int loop290 = 0;
                     int loopLimit290 = (rand()%10)/3 + 1;
                     for(; loop290 < loopLimit290; loop290++) {
                        func21();
                     }
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop291 = 0;
                  int loopLimit291 = (rand()%10)/3 + 1;
                  for(; loop291 < loopLimit291; loop291++) {
                     if(PATH0 & 65536) {
                        func16(rng());
                        if(PATH0 & 131072) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        if(PATH0 & 262144) {
                           func19();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop292 = 0;
                           int loopLimit292 = (rand()%10)/4 + 1;
                           for(; loop292 < loopLimit292; loop292++) {
                              if(PATH0 & 524288) {
                              }
                              else {
                              }
                           }
                           int loop293 = 0;
                           int loopLimit293 = (rand()%10)/4 + 1;
                           for(; loop293 < loopLimit293; loop293++) {
                              func21();
                           }
                           int scalar4 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop294 = 0;
                  int loopLimit294 = (rand()%10)/3 + 1;
                  for(; loop294 < loopLimit294; loop294++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
         }
         int loop295 = 0;
         int loopLimit295 = (rand()%10)/2 + 1;
         for(; loop295 < loopLimit295; loop295++) {
            func9(rng());
         }
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         printf("DELETE!\n");
      }
      func5(rng());
      if(PATH0 & 1048576) {
         func4(rng(), rng());
         if(PATH0 & 2097152) {
            func10(rng());
            if(PATH0 & 4194304) {
               func16(rng());
               if(PATH0 & 8388608) {
               }
               else {
                  int scalar1 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop347 = 0;
               int loopLimit347 = (rand()%10)/2 + 1;
               for(; loop347 < loopLimit347; loop347++) {
                  if(PATH0 & 16777216) {
                     func19();
                  }
                  else {
                     if(PATH0 & 33554432) {
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop348 = 0;
               int loopLimit348 = (rand()%10)/2 + 1;
               for(; loop348 < loopLimit348; loop348++) {
                  func18(rng());
               }
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop349 = 0;
            int loopLimit349 = (rand()%10)/2 + 1;
            for(; loop349 < loopLimit349; loop349++) {
               if(PATH0 & 67108864) {
                  func13(rng());
                  if(PATH0 & 134217728) {
                     func19();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop350 = 0;
                     int loopLimit350 = (rand()%10)/3 + 1;
                     for(; loop350 < loopLimit350; loop350++) {
                        if(PATH0 & 268435456) {
                        }
                        else {
                        }
                     }
                     int loop351 = 0;
                     int loopLimit351 = (rand()%10)/3 + 1;
                     for(; loop351 < loopLimit351; loop351++) {
                        func21();
                     }
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  if(PATH0 & 536870912) {
                     func16(rng());
                     if(PATH0 & 1073741824) {
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop352 = 0;
                     int loopLimit352 = (rand()%10)/3 + 1;
                     for(; loop352 < loopLimit352; loop352++) {
                        if(PATH0 & -2147483648) {
                           func19();
                        }
                        else {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                     }
                     int loop353 = 0;
                     int loopLimit353 = (rand()%10)/3 + 1;
                     for(; loop353 < loopLimit353; loop353++) {
                        func18(rng());
                     }
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
            }
            int loop354 = 0;
            int loopLimit354 = (rand()%10)/2 + 1;
            for(; loop354 < loopLimit354; loop354++) {
               func12(rng());
            }
            int scalar2 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func8(rng());
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop355 = 0;
         int loopLimit355 = (rand()%10)/2 + 1;
         for(; loop355 < loopLimit355; loop355++) {
            if(PATH0 & -2147483648) {
               func7(rng());
               if(PATH0 & -2147483648) {
                  func13(rng());
                  if(PATH0 & -2147483648) {
                     func19();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop356 = 0;
                     int loopLimit356 = (rand()%10)/3 + 1;
                     for(; loop356 < loopLimit356; loop356++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop357 = 0;
                     int loopLimit357 = (rand()%10)/3 + 1;
                     for(; loop357 < loopLimit357; loop357++) {
                        func21();
                     }
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop358 = 0;
                  int loopLimit358 = (rand()%10)/3 + 1;
                  for(; loop358 < loopLimit358; loop358++) {
                     if(PATH0 & -2147483648) {
                        func16(rng());
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        if(PATH0 & -2147483648) {
                           func19();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop359 = 0;
                           int loopLimit359 = (rand()%10)/4 + 1;
                           for(; loop359 < loopLimit359; loop359++) {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop360 = 0;
                           int loopLimit360 = (rand()%10)/4 + 1;
                           for(; loop360 < loopLimit360; loop360++) {
                              func21();
                           }
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop361 = 0;
                  int loopLimit361 = (rand()%10)/3 + 1;
                  for(; loop361 < loopLimit361; loop361++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
            else {
               if(PATH0 & -2147483648) {
                  func10(rng());
                  if(PATH0 & -2147483648) {
                     func16(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar2 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop362 = 0;
                     int loopLimit362 = (rand()%10)/3 + 1;
                     for(; loop362 < loopLimit362; loop362++) {
                        if(PATH0 & -2147483648) {
                           func19();
                        }
                        else {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                     }
                     int loop363 = 0;
                     int loopLimit363 = (rand()%10)/3 + 1;
                     for(; loop363 < loopLimit363; loop363++) {
                        func18(rng());
                     }
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop364 = 0;
                  int loopLimit364 = (rand()%10)/3 + 1;
                  for(; loop364 < loopLimit364; loop364++) {
                     if(PATH0 & -2147483648) {
                        func13(rng());
                        if(PATH0 & -2147483648) {
                           func19();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop365 = 0;
                           int loopLimit365 = (rand()%10)/4 + 1;
                           for(; loop365 < loopLimit365; loop365++) {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop366 = 0;
                           int loopLimit366 = (rand()%10)/4 + 1;
                           for(; loop366 < loopLimit366; loop366++) {
                              func21();
                           }
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        if(PATH0 & -2147483648) {
                           func16(rng());
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar3 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop367 = 0;
                           int loopLimit367 = (rand()%10)/4 + 1;
                           for(; loop367 < loopLimit367; loop367++) {
                              if(PATH0 & -2147483648) {
                                 func19();
                              }
                              else {
                                 if(PATH0 & -2147483648) {
                                 }
                                 else {
                                    int scalar4 = 1;
                                    if (scalar4 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar3--;
                                    printf("DELETE!\n");
                                 }
                                 func20();
                              }
                           }
                           int loop368 = 0;
                           int loopLimit368 = (rand()%10)/4 + 1;
                           for(; loop368 < loopLimit368; loop368++) {
                              func18(rng());
                           }
                           int scalar4 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop369 = 0;
                  int loopLimit369 = (rand()%10)/3 + 1;
                  for(; loop369 < loopLimit369; loop369++) {
                     func12(rng());
                  }
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop370 = 0;
         int loopLimit370 = (rand()%10)/2 + 1;
         for(; loop370 < loopLimit370; loop370++) {
            func6(rng());
         }
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         printf("DELETE!\n");
      }
      func2(rng(), rng());
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop469 = 0;
      int loopLimit469 = (rand()%10)/2 + 1;
      for(; loop469 < loopLimit469; loop469++) {
         if(PATH0 & -2147483648) {
            func4(rng(), rng());
            if(PATH0 & -2147483648) {
               func10(rng());
               if(PATH0 & -2147483648) {
                  func16(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop470 = 0;
                  int loopLimit470 = (rand()%10)/3 + 1;
                  for(; loop470 < loopLimit470; loop470++) {
                     if(PATH0 & -2147483648) {
                        func19();
                     }
                     else {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop471 = 0;
                  int loopLimit471 = (rand()%10)/3 + 1;
                  for(; loop471 < loopLimit471; loop471++) {
                     func18(rng());
                  }
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop472 = 0;
               int loopLimit472 = (rand()%10)/3 + 1;
               for(; loop472 < loopLimit472; loop472++) {
                  if(PATH0 & -2147483648) {
                     func13(rng());
                     if(PATH0 & -2147483648) {
                        func19();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop473 = 0;
                        int loopLimit473 = (rand()%10)/4 + 1;
                        for(; loop473 < loopLimit473; loop473++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop474 = 0;
                        int loopLimit474 = (rand()%10)/4 + 1;
                        for(; loop474 < loopLimit474; loop474++) {
                           func21();
                        }
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     if(PATH0 & -2147483648) {
                        func16(rng());
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop475 = 0;
                        int loopLimit475 = (rand()%10)/4 + 1;
                        for(; loop475 < loopLimit475; loop475++) {
                           if(PATH1 & 1) {
                              func19();
                           }
                           else {
                              if(PATH1 & 2) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar4 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func20();
                           }
                        }
                        int loop476 = 0;
                        int loopLimit476 = (rand()%10)/4 + 1;
                        for(; loop476 < loopLimit476; loop476++) {
                           func18(rng());
                        }
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
               }
               int loop477 = 0;
               int loopLimit477 = (rand()%10)/3 + 1;
               for(; loop477 < loopLimit477; loop477++) {
                  func12(rng());
               }
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func8(rng());
         }
         else {
            if(PATH1 & 4) {
               func7(rng());
               if(PATH1 & 8) {
                  func13(rng());
                  if(PATH1 & 16) {
                     func19();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop478 = 0;
                     int loopLimit478 = (rand()%10)/3 + 1;
                     for(; loop478 < loopLimit478; loop478++) {
                        if(PATH1 & 32) {
                        }
                        else {
                        }
                     }
                     int loop479 = 0;
                     int loopLimit479 = (rand()%10)/3 + 1;
                     for(; loop479 < loopLimit479; loop479++) {
                        func21();
                     }
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop480 = 0;
                  int loopLimit480 = (rand()%10)/3 + 1;
                  for(; loop480 < loopLimit480; loop480++) {
                     if(PATH1 & 64) {
                        func16(rng());
                        if(PATH1 & 128) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        if(PATH1 & 256) {
                           func19();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop481 = 0;
                           int loopLimit481 = (rand()%10)/4 + 1;
                           for(; loop481 < loopLimit481; loop481++) {
                              if(PATH1 & 512) {
                              }
                              else {
                              }
                           }
                           int loop482 = 0;
                           int loopLimit482 = (rand()%10)/4 + 1;
                           for(; loop482 < loopLimit482; loop482++) {
                              func21();
                           }
                           int scalar4 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop483 = 0;
                  int loopLimit483 = (rand()%10)/3 + 1;
                  for(; loop483 < loopLimit483; loop483++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop484 = 0;
               int loopLimit484 = (rand()%10)/3 + 1;
               for(; loop484 < loopLimit484; loop484++) {
                  if(PATH1 & 1024) {
                     func10(rng());
                     if(PATH1 & 2048) {
                        func16(rng());
                        if(PATH1 & 4096) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop485 = 0;
                        int loopLimit485 = (rand()%10)/4 + 1;
                        for(; loop485 < loopLimit485; loop485++) {
                           if(PATH1 & 8192) {
                              func19();
                           }
                           else {
                              if(PATH1 & 16384) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar3--;
                                 printf("DELETE!\n");
                              }
                              func20();
                           }
                        }
                        int loop486 = 0;
                        int loopLimit486 = (rand()%10)/4 + 1;
                        for(; loop486 < loopLimit486; loop486++) {
                           func18(rng());
                        }
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
                  else {
                     if(PATH1 & 32768) {
                        func13(rng());
                        if(PATH1 & 65536) {
                           func19();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop487 = 0;
                           int loopLimit487 = (rand()%10)/4 + 1;
                           for(; loop487 < loopLimit487; loop487++) {
                              if(PATH1 & 131072) {
                              }
                              else {
                              }
                           }
                           int loop488 = 0;
                           int loopLimit488 = (rand()%10)/4 + 1;
                           for(; loop488 < loopLimit488; loop488++) {
                              func21();
                           }
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop489 = 0;
                        int loopLimit489 = (rand()%10)/4 + 1;
                        for(; loop489 < loopLimit489; loop489++) {
                           if(PATH1 & 262144) {
                              func16(rng());
                              if(PATH1 & 524288) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar2--;
                                 printf("DELETE!\n");
                              }
                              func20();
                           }
                           else {
                              if(PATH1 & 1048576) {
                                 func19();
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar3 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop490 = 0;
                                 int loopLimit490 = (rand()%10)/5 + 1;
                                 for(; loop490 < loopLimit490; loop490++) {
                                    if(PATH1 & 2097152) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop491 = 0;
                                 int loopLimit491 = (rand()%10)/5 + 1;
                                 for(; loop491 < loopLimit491; loop491++) {
                                    func21();
                                 }
                                 int scalar5 = 1;
                                 if (scalar2 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar4--;
                                 printf("DELETE!\n");
                              }
                              func17(rng());
                           }
                        }
                        int loop492 = 0;
                        int loopLimit492 = (rand()%10)/4 + 1;
                        for(; loop492 < loopLimit492; loop492++) {
                           func15(rng());
                        }
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func11(rng());
                  }
               }
               int loop493 = 0;
               int loopLimit493 = (rand()%10)/3 + 1;
               for(; loop493 < loopLimit493; loop493++) {
                  func9(rng());
               }
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func5(rng());
         }
      }
      int loop494 = 0;
      int loopLimit494 = (rand()%10)/2 + 1;
      for(; loop494 < loopLimit494; loop494++) {
         func3(rng());
      }
      if(PATH1 & 4194304) {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop511 = 0;
         int loopLimit511 = (rand()%10)/2 + 1;
         for(; loop511 < loopLimit511; loop511++) {
            if(PATH1 & 8388608) {
               func7(rng());
               if(PATH1 & 16777216) {
                  func13(rng());
                  if(PATH1 & 33554432) {
                     func19();
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop512 = 0;
                     int loopLimit512 = (rand()%10)/3 + 1;
                     for(; loop512 < loopLimit512; loop512++) {
                        if(PATH1 & 67108864) {
                        }
                        else {
                        }
                     }
                     int loop513 = 0;
                     int loopLimit513 = (rand()%10)/3 + 1;
                     for(; loop513 < loopLimit513; loop513++) {
                        func21();
                     }
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop514 = 0;
                  int loopLimit514 = (rand()%10)/3 + 1;
                  for(; loop514 < loopLimit514; loop514++) {
                     if(PATH1 & 134217728) {
                        func16(rng());
                        if(PATH1 & 268435456) {
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        if(PATH1 & 536870912) {
                           func19();
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop515 = 0;
                           int loopLimit515 = (rand()%10)/4 + 1;
                           for(; loop515 < loopLimit515; loop515++) {
                              if(PATH1 & 1073741824) {
                              }
                              else {
                              }
                           }
                           int loop516 = 0;
                           int loopLimit516 = (rand()%10)/4 + 1;
                           for(; loop516 < loopLimit516; loop516++) {
                              func21();
                           }
                           int scalar5 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop517 = 0;
                  int loopLimit517 = (rand()%10)/3 + 1;
                  for(; loop517 < loopLimit517; loop517++) {
                     func15(rng());
                  }
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
            else {
               if(PATH1 & -2147483648) {
                  func10(rng());
                  if(PATH1 & -2147483648) {
                     func16(rng());
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop518 = 0;
                     int loopLimit518 = (rand()%10)/3 + 1;
                     for(; loop518 < loopLimit518; loop518++) {
                        if(PATH1 & -2147483648) {
                           func19();
                        }
                        else {
                           if(PATH1 & -2147483648) {
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                     }
                     int loop519 = 0;
                     int loopLimit519 = (rand()%10)/3 + 1;
                     for(; loop519 < loopLimit519; loop519++) {
                        func18(rng());
                     }
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
               else {
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop520 = 0;
                  int loopLimit520 = (rand()%10)/3 + 1;
                  for(; loop520 < loopLimit520; loop520++) {
                     if(PATH1 & -2147483648) {
                        func13(rng());
                        if(PATH1 & -2147483648) {
                           func19();
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop521 = 0;
                           int loopLimit521 = (rand()%10)/4 + 1;
                           for(; loop521 < loopLimit521; loop521++) {
                              if(PATH1 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop522 = 0;
                           int loopLimit522 = (rand()%10)/4 + 1;
                           for(; loop522 < loopLimit522; loop522++) {
                              func21();
                           }
                           int scalar5 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        if(PATH1 & -2147483648) {
                           func16(rng());
                           if(PATH1 & -2147483648) {
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop523 = 0;
                           int loopLimit523 = (rand()%10)/4 + 1;
                           for(; loop523 < loopLimit523; loop523++) {
                              if(PATH1 & -2147483648) {
                                 func19();
                              }
                              else {
                                 if(PATH1 & -2147483648) {
                                 }
                                 else {
                                    int scalar5 = 1;
                                    if (scalar2 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar1--;
                                    printf("DELETE!\n");
                                 }
                                 func20();
                              }
                           }
                           int loop524 = 0;
                           int loopLimit524 = (rand()%10)/4 + 1;
                           for(; loop524 < loopLimit524; loop524++) {
                              func18(rng());
                           }
                           int scalar5 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop525 = 0;
                  int loopLimit525 = (rand()%10)/3 + 1;
                  for(; loop525 < loopLimit525; loop525++) {
                     func12(rng());
                  }
                  int scalar4 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop526 = 0;
         int loopLimit526 = (rand()%10)/2 + 1;
         for(; loop526 < loopLimit526; loop526++) {
            func6(rng());
         }
      }
      else {
         int loop527 = 0;
         int loopLimit527 = (rand()%10)/2 + 1;
         for(; loop527 < loopLimit527; loop527++) {
            int scalar2 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop528 = 0;
            int loopLimit528 = (rand()%10)/3 + 1;
            for(; loop528 < loopLimit528; loop528++) {
               if(PATH1 & -2147483648) {
                  func7(rng());
                  if(PATH1 & -2147483648) {
                     func13(rng());
                     if(PATH1 & -2147483648) {
                        func19();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop529 = 0;
                        int loopLimit529 = (rand()%10)/4 + 1;
                        for(; loop529 < loopLimit529; loop529++) {
                           if(PATH1 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop530 = 0;
                        int loopLimit530 = (rand()%10)/4 + 1;
                        for(; loop530 < loopLimit530; loop530++) {
                           func21();
                        }
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop531 = 0;
                     int loopLimit531 = (rand()%10)/4 + 1;
                     for(; loop531 < loopLimit531; loop531++) {
                        if(PATH1 & -2147483648) {
                           func16(rng());
                           if(PATH1 & -2147483648) {
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              scalar2--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                        else {
                           if(PATH1 & -2147483648) {
                              func19();
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop532 = 0;
                              int loopLimit532 = (rand()%10)/5 + 1;
                              for(; loop532 < loopLimit532; loop532++) {
                                 if(PATH1 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop533 = 0;
                              int loopLimit533 = (rand()%10)/5 + 1;
                              for(; loop533 < loopLimit533; loop533++) {
                                 func21();
                              }
                              int scalar5 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar5--;
                              printf("DELETE!\n");
                           }
                           func17(rng());
                        }
                     }
                     int loop534 = 0;
                     int loopLimit534 = (rand()%10)/4 + 1;
                     for(; loop534 < loopLimit534; loop534++) {
                        func15(rng());
                     }
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func11(rng());
               }
               else {
                  if(PATH1 & -2147483648) {
                     func10(rng());
                     if(PATH1 & -2147483648) {
                        func16(rng());
                        if(PATH1 & -2147483648) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop535 = 0;
                        int loopLimit535 = (rand()%10)/4 + 1;
                        for(; loop535 < loopLimit535; loop535++) {
                           if(PATH1 & -2147483648) {
                              func19();
                           }
                           else {
                              if(PATH1 & -2147483648) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar2 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar2--;
                                 printf("DELETE!\n");
                              }
                              func20();
                           }
                        }
                        int loop536 = 0;
                        int loopLimit536 = (rand()%10)/4 + 1;
                        for(; loop536 < loopLimit536; loop536++) {
                           func18(rng());
                        }
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop537 = 0;
                     int loopLimit537 = (rand()%10)/4 + 1;
                     for(; loop537 < loopLimit537; loop537++) {
                        if(PATH1 & -2147483648) {
                           func13(rng());
                           if(PATH1 & -2147483648) {
                              func19();
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop538 = 0;
                              int loopLimit538 = (rand()%10)/5 + 1;
                              for(; loop538 < loopLimit538; loop538++) {
                                 if(PATH1 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop539 = 0;
                              int loopLimit539 = (rand()%10)/5 + 1;
                              for(; loop539 < loopLimit539; loop539++) {
                                 func21();
                              }
                              int scalar5 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func17(rng());
                        }
                        else {
                           if(PATH1 & -2147483648) {
                              func16(rng());
                              if(PATH1 & -2147483648) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar3--;
                                 printf("DELETE!\n");
                              }
                              func20();
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop540 = 0;
                              int loopLimit540 = (rand()%10)/5 + 1;
                              for(; loop540 < loopLimit540; loop540++) {
                                 if(PATH1 & -2147483648) {
                                    func19();
                                 }
                                 else {
                                    if(PATH1 & -2147483648) {
                                    }
                                    else {
                                       int scalar5 = 1;
                                       if (scalar1 == 0) {
                                          printf("IS 0!");
                                       }
                                       scalar2--;
                                       printf("DELETE!\n");
                                    }
                                    func20();
                                 }
                              }
                              int loop541 = 0;
                              int loopLimit541 = (rand()%10)/5 + 1;
                              for(; loop541 < loopLimit541; loop541++) {
                                 func18(rng());
                              }
                              int scalar5 = 1;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func14(rng());
                        }
                     }
                     int loop542 = 0;
                     int loopLimit542 = (rand()%10)/4 + 1;
                     for(; loop542 < loopLimit542; loop542++) {
                        func12(rng());
                     }
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func8(rng());
               }
            }
            int loop543 = 0;
            int loopLimit543 = (rand()%10)/3 + 1;
            for(; loop543 < loopLimit543; loop543++) {
               func6(rng());
            }
         }
      }
      int scalar2 = 1;
      int scalar3 = 1;
      printf("DELETE!\n");
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func4(rng(), rng());
      if(PATH1 & -2147483648) {
         func10(rng());
         if(PATH2 & 1) {
            func16(rng());
            if(PATH2 & 2) {
            }
            else {
               int scalar4 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func20();
         }
         else {
            int scalar4 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop544 = 0;
            int loopLimit544 = (rand()%10)/2 + 1;
            for(; loop544 < loopLimit544; loop544++) {
               if(PATH2 & 4) {
                  func19();
               }
               else {
                  if(PATH2 & 8) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
            }
            int loop545 = 0;
            int loopLimit545 = (rand()%10)/2 + 1;
            for(; loop545 < loopLimit545; loop545++) {
               func18(rng());
            }
            int scalar5 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            printf("DELETE!\n");
         }
         func14(rng());
      }
      else {
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop546 = 0;
         int loopLimit546 = (rand()%10)/2 + 1;
         for(; loop546 < loopLimit546; loop546++) {
            if(PATH2 & 16) {
               func13(rng());
               if(PATH2 & 32) {
                  func19();
               }
               else {
                  int scalar5 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop547 = 0;
                  int loopLimit547 = (rand()%10)/3 + 1;
                  for(; loop547 < loopLimit547; loop547++) {
                     if(PATH2 & 64) {
                     }
                     else {
                     }
                  }
                  int loop548 = 0;
                  int loopLimit548 = (rand()%10)/3 + 1;
                  for(; loop548 < loopLimit548; loop548++) {
                     func21();
                  }
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH2 & 128) {
                  func16(rng());
                  if(PATH2 & 256) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop549 = 0;
                  int loopLimit549 = (rand()%10)/3 + 1;
                  for(; loop549 < loopLimit549; loop549++) {
                     if(PATH2 & 512) {
                        func19();
                     }
                     else {
                        if(PATH2 & 1024) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop550 = 0;
                  int loopLimit550 = (rand()%10)/3 + 1;
                  for(; loop550 < loopLimit550; loop550++) {
                     func18(rng());
                  }
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop551 = 0;
         int loopLimit551 = (rand()%10)/2 + 1;
         for(; loop551 < loopLimit551; loop551++) {
            func12(rng());
         }
         int scalar5 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func8(rng());
      if(PATH2 & 2048) {
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop552 = 0;
         int loopLimit552 = (rand()%10)/2 + 1;
         for(; loop552 < loopLimit552; loop552++) {
            if(PATH2 & 4096) {
               func7(rng());
               if(PATH2 & 8192) {
                  func13(rng());
                  if(PATH2 & 16384) {
                     func19();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop553 = 0;
                     int loopLimit553 = (rand()%10)/3 + 1;
                     for(; loop553 < loopLimit553; loop553++) {
                        if(PATH2 & 32768) {
                        }
                        else {
                        }
                     }
                     int loop554 = 0;
                     int loopLimit554 = (rand()%10)/3 + 1;
                     for(; loop554 < loopLimit554; loop554++) {
                        func21();
                     }
                     int scalar6 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop555 = 0;
                  int loopLimit555 = (rand()%10)/3 + 1;
                  for(; loop555 < loopLimit555; loop555++) {
                     if(PATH2 & 65536) {
                        func16(rng());
                        if(PATH2 & 131072) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        if(PATH2 & 262144) {
                           func19();
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop556 = 0;
                           int loopLimit556 = (rand()%10)/4 + 1;
                           for(; loop556 < loopLimit556; loop556++) {
                              if(PATH2 & 524288) {
                              }
                              else {
                              }
                           }
                           int loop557 = 0;
                           int loopLimit557 = (rand()%10)/4 + 1;
                           for(; loop557 < loopLimit557; loop557++) {
                              func21();
                           }
                           int scalar7 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop558 = 0;
                  int loopLimit558 = (rand()%10)/3 + 1;
                  for(; loop558 < loopLimit558; loop558++) {
                     func15(rng());
                  }
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
            else {
               if(PATH2 & 1048576) {
                  func10(rng());
                  if(PATH2 & 2097152) {
                     func16(rng());
                     if(PATH2 & 4194304) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop559 = 0;
                     int loopLimit559 = (rand()%10)/3 + 1;
                     for(; loop559 < loopLimit559; loop559++) {
                        if(PATH2 & 8388608) {
                           func19();
                        }
                        else {
                           if(PATH2 & 16777216) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                     }
                     int loop560 = 0;
                     int loopLimit560 = (rand()%10)/3 + 1;
                     for(; loop560 < loopLimit560; loop560++) {
                        func18(rng());
                     }
                     int scalar6 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
               else {
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop561 = 0;
                  int loopLimit561 = (rand()%10)/3 + 1;
                  for(; loop561 < loopLimit561; loop561++) {
                     if(PATH2 & 33554432) {
                        func13(rng());
                        if(PATH2 & 67108864) {
                           func19();
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop562 = 0;
                           int loopLimit562 = (rand()%10)/4 + 1;
                           for(; loop562 < loopLimit562; loop562++) {
                              if(PATH2 & 134217728) {
                              }
                              else {
                              }
                           }
                           int loop563 = 0;
                           int loopLimit563 = (rand()%10)/4 + 1;
                           for(; loop563 < loopLimit563; loop563++) {
                              func21();
                           }
                           int scalar7 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        if(PATH2 & 268435456) {
                           func16(rng());
                           if(PATH2 & 536870912) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar6 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop564 = 0;
                           int loopLimit564 = (rand()%10)/4 + 1;
                           for(; loop564 < loopLimit564; loop564++) {
                              if(PATH2 & 1073741824) {
                                 func19();
                              }
                              else {
                                 if(PATH2 & -2147483648) {
                                 }
                                 else {
                                    int scalar7 = 1;
                                    if (scalar2 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar7--;
                                    printf("DELETE!\n");
                                 }
                                 func20();
                              }
                           }
                           int loop565 = 0;
                           int loopLimit565 = (rand()%10)/4 + 1;
                           for(; loop565 < loopLimit565; loop565++) {
                              func18(rng());
                           }
                           int scalar7 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop566 = 0;
                  int loopLimit566 = (rand()%10)/3 + 1;
                  for(; loop566 < loopLimit566; loop566++) {
                     func12(rng());
                  }
                  int scalar6 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop567 = 0;
         int loopLimit567 = (rand()%10)/2 + 1;
         for(; loop567 < loopLimit567; loop567++) {
            func6(rng());
         }
      }
      else {
         if(PATH2 & -2147483648) {
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop568 = 0;
            int loopLimit568 = (rand()%10)/2 + 1;
            for(; loop568 < loopLimit568; loop568++) {
               if(PATH2 & -2147483648) {
                  func10(rng());
                  if(PATH2 & -2147483648) {
                     func16(rng());
                     if(PATH2 & -2147483648) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop569 = 0;
                     int loopLimit569 = (rand()%10)/3 + 1;
                     for(; loop569 < loopLimit569; loop569++) {
                        if(PATH2 & -2147483648) {
                           func19();
                        }
                        else {
                           if(PATH2 & -2147483648) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar6--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                     }
                     int loop570 = 0;
                     int loopLimit570 = (rand()%10)/3 + 1;
                     for(; loop570 < loopLimit570; loop570++) {
                        func18(rng());
                     }
                     int scalar6 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
               else {
                  if(PATH2 & -2147483648) {
                     func13(rng());
                     if(PATH2 & -2147483648) {
                        func19();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop571 = 0;
                        int loopLimit571 = (rand()%10)/3 + 1;
                        for(; loop571 < loopLimit571; loop571++) {
                           if(PATH2 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop572 = 0;
                        int loopLimit572 = (rand()%10)/3 + 1;
                        for(; loop572 < loopLimit572; loop572++) {
                           func21();
                        }
                        int scalar6 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop573 = 0;
                     int loopLimit573 = (rand()%10)/3 + 1;
                     for(; loop573 < loopLimit573; loop573++) {
                        if(PATH2 & -2147483648) {
                           func16(rng());
                           if(PATH2 & -2147483648) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar6 == 0) {
                                 printf("IS 0!");
                              }
                              scalar5--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                        else {
                           if(PATH2 & -2147483648) {
                              func19();
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop574 = 0;
                              int loopLimit574 = (rand()%10)/4 + 1;
                              for(; loop574 < loopLimit574; loop574++) {
                                 if(PATH2 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop575 = 0;
                              int loopLimit575 = (rand()%10)/4 + 1;
                              for(; loop575 < loopLimit575; loop575++) {
                                 func21();
                              }
                              int scalar7 = 1;
                              if (scalar7 == 0) {
                                 printf("IS 0!");
                              }
                              scalar6--;
                              printf("DELETE!\n");
                           }
                           func17(rng());
                        }
                     }
                     int loop576 = 0;
                     int loopLimit576 = (rand()%10)/3 + 1;
                     for(; loop576 < loopLimit576; loop576++) {
                        func15(rng());
                     }
                     int scalar6 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func11(rng());
               }
            }
            int loop577 = 0;
            int loopLimit577 = (rand()%10)/2 + 1;
            for(; loop577 < loopLimit577; loop577++) {
               func9(rng());
            }
         }
         else {
            int loop578 = 0;
            int loopLimit578 = (rand()%10)/2 + 1;
            for(; loop578 < loopLimit578; loop578++) {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop579 = 0;
               int loopLimit579 = (rand()%10)/3 + 1;
               for(; loop579 < loopLimit579; loop579++) {
                  if(PATH2 & -2147483648) {
                     func10(rng());
                     if(PATH2 & -2147483648) {
                        func16(rng());
                        if(PATH2 & -2147483648) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop580 = 0;
                        int loopLimit580 = (rand()%10)/4 + 1;
                        for(; loop580 < loopLimit580; loop580++) {
                           if(PATH2 & -2147483648) {
                              func19();
                           }
                           else {
                              if(PATH2 & -2147483648) {
                              }
                              else {
                                 int scalar6 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar2--;
                                 printf("DELETE!\n");
                              }
                              func20();
                           }
                        }
                        int loop581 = 0;
                        int loopLimit581 = (rand()%10)/4 + 1;
                        for(; loop581 < loopLimit581; loop581++) {
                           func18(rng());
                        }
                        int scalar6 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
                  else {
                     if(PATH2 & -2147483648) {
                        func13(rng());
                        if(PATH2 & -2147483648) {
                           func19();
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop582 = 0;
                           int loopLimit582 = (rand()%10)/4 + 1;
                           for(; loop582 < loopLimit582; loop582++) {
                              if(PATH2 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop583 = 0;
                           int loopLimit583 = (rand()%10)/4 + 1;
                           for(; loop583 < loopLimit583; loop583++) {
                              func21();
                           }
                           int scalar6 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop584 = 0;
                        int loopLimit584 = (rand()%10)/4 + 1;
                        for(; loop584 < loopLimit584; loop584++) {
                           if(PATH2 & -2147483648) {
                              func16(rng());
                              if(PATH2 & -2147483648) {
                              }
                              else {
                                 int scalar6 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar6--;
                                 printf("DELETE!\n");
                              }
                              func20();
                           }
                           else {
                              if(PATH2 & -2147483648) {
                                 func19();
                              }
                              else {
                                 int scalar6 = 1;
                                 if (scalar6 == 0) {
                                    printf("IS 0!");
                                 }
                                 printf("DELETE!\n");
                                 int loop585 = 0;
                                 int loopLimit585 = (rand()%10)/5 + 1;
                                 for(; loop585 < loopLimit585; loop585++) {
                                    if(PATH2 & -2147483648) {
                                    }
                                    else {
                                    }
                                 }
                                 int loop586 = 0;
                                 int loopLimit586 = (rand()%10)/5 + 1;
                                 for(; loop586 < loopLimit586; loop586++) {
                                    func21();
                                 }
                                 int scalar7 = 1;
                                 if (scalar5 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar1--;
                                 printf("DELETE!\n");
                              }
                              func17(rng());
                           }
                        }
                        int loop587 = 0;
                        int loopLimit587 = (rand()%10)/4 + 1;
                        for(; loop587 < loopLimit587; loop587++) {
                           func15(rng());
                        }
                        int scalar6 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func11(rng());
                  }
               }
               int loop588 = 0;
               int loopLimit588 = (rand()%10)/3 + 1;
               for(; loop588 < loopLimit588; loop588++) {
                  func9(rng());
               }
            }
         }
         int scalar4 = 1;
         int scalar5 = 1;
         printf("DELETE!\n");
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         func7(rng());
         if(PATH2 & -2147483648) {
            func13(rng());
            if(PATH2 & -2147483648) {
               func19();
            }
            else {
               int scalar6 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop589 = 0;
               int loopLimit589 = (rand()%10)/2 + 1;
               for(; loop589 < loopLimit589; loop589++) {
                  if(PATH2 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop590 = 0;
               int loopLimit590 = (rand()%10)/2 + 1;
               for(; loop590 < loopLimit590; loop590++) {
                  func21();
               }
               int scalar7 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            int scalar6 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop591 = 0;
            int loopLimit591 = (rand()%10)/2 + 1;
            for(; loop591 < loopLimit591; loop591++) {
               if(PATH2 & -2147483648) {
                  func16(rng());
                  if(PATH2 & -2147483648) {
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar7--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  if(PATH2 & -2147483648) {
                     func19();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop592 = 0;
                     int loopLimit592 = (rand()%10)/3 + 1;
                     for(; loop592 < loopLimit592; loop592++) {
                        if(PATH2 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop593 = 0;
                     int loopLimit593 = (rand()%10)/3 + 1;
                     for(; loop593 < loopLimit593; loop593++) {
                        func21();
                     }
                     int scalar8 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop594 = 0;
            int loopLimit594 = (rand()%10)/2 + 1;
            for(; loop594 < loopLimit594; loop594++) {
               func15(rng());
            }
            int scalar7 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func11(rng());
         if(PATH3 & 1) {
            int scalar6 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop595 = 0;
            int loopLimit595 = (rand()%10)/2 + 1;
            for(; loop595 < loopLimit595; loop595++) {
               if(PATH3 & 2) {
                  func10(rng());
                  if(PATH3 & 4) {
                     func16(rng());
                     if(PATH3 & 8) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop596 = 0;
                     int loopLimit596 = (rand()%10)/3 + 1;
                     for(; loop596 < loopLimit596; loop596++) {
                        if(PATH3 & 16) {
                           func19();
                        }
                        else {
                           if(PATH3 & 32) {
                           }
                           else {
                              int scalar8 = 1;
                              if (scalar6 == 0) {
                                 printf("IS 0!");
                              }
                              scalar8--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                     }
                     int loop597 = 0;
                     int loopLimit597 = (rand()%10)/3 + 1;
                     for(; loop597 < loopLimit597; loop597++) {
                        func18(rng());
                     }
                     int scalar8 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
               else {
                  if(PATH3 & 64) {
                     func13(rng());
                     if(PATH3 & 128) {
                        func19();
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop598 = 0;
                        int loopLimit598 = (rand()%10)/3 + 1;
                        for(; loop598 < loopLimit598; loop598++) {
                           if(PATH3 & 256) {
                           }
                           else {
                           }
                        }
                        int loop599 = 0;
                        int loopLimit599 = (rand()%10)/3 + 1;
                        for(; loop599 < loopLimit599; loop599++) {
                           func21();
                        }
                        int scalar8 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar8--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop600 = 0;
                     int loopLimit600 = (rand()%10)/3 + 1;
                     for(; loop600 < loopLimit600; loop600++) {
                        if(PATH3 & 512) {
                           func16(rng());
                           if(PATH3 & 1024) {
                           }
                           else {
                              int scalar8 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar6--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                        else {
                           if(PATH3 & 2048) {
                              func19();
                           }
                           else {
                              int scalar8 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop601 = 0;
                              int loopLimit601 = (rand()%10)/4 + 1;
                              for(; loop601 < loopLimit601; loop601++) {
                                 if(PATH3 & 4096) {
                                 }
                                 else {
                                 }
                              }
                              int loop602 = 0;
                              int loopLimit602 = (rand()%10)/4 + 1;
                              for(; loop602 < loopLimit602; loop602++) {
                                 func21();
                              }
                              int scalar9 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar8--;
                              printf("DELETE!\n");
                           }
                           func17(rng());
                        }
                     }
                     int loop603 = 0;
                     int loopLimit603 = (rand()%10)/3 + 1;
                     for(; loop603 < loopLimit603; loop603++) {
                        func15(rng());
                     }
                     int scalar8 = 1;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func11(rng());
               }
            }
            int loop604 = 0;
            int loopLimit604 = (rand()%10)/2 + 1;
            for(; loop604 < loopLimit604; loop604++) {
               func9(rng());
            }
         }
         else {
            if(PATH3 & 8192) {
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop605 = 0;
               int loopLimit605 = (rand()%10)/2 + 1;
               for(; loop605 < loopLimit605; loop605++) {
                  if(PATH3 & 16384) {
                     func13(rng());
                     if(PATH3 & 32768) {
                        func19();
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop606 = 0;
                        int loopLimit606 = (rand()%10)/3 + 1;
                        for(; loop606 < loopLimit606; loop606++) {
                           if(PATH3 & 65536) {
                           }
                           else {
                           }
                        }
                        int loop607 = 0;
                        int loopLimit607 = (rand()%10)/3 + 1;
                        for(; loop607 < loopLimit607; loop607++) {
                           func21();
                        }
                        int scalar8 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     if(PATH3 & 131072) {
                        func16(rng());
                        if(PATH3 & 262144) {
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop608 = 0;
                        int loopLimit608 = (rand()%10)/3 + 1;
                        for(; loop608 < loopLimit608; loop608++) {
                           if(PATH3 & 524288) {
                              func19();
                           }
                           else {
                              if(PATH3 & 1048576) {
                              }
                              else {
                                 int scalar8 = 1;
                                 if (scalar8 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar6--;
                                 printf("DELETE!\n");
                              }
                              func20();
                           }
                        }
                        int loop609 = 0;
                        int loopLimit609 = (rand()%10)/3 + 1;
                        for(; loop609 < loopLimit609; loop609++) {
                           func18(rng());
                        }
                        int scalar8 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
               }
               int loop610 = 0;
               int loopLimit610 = (rand()%10)/2 + 1;
               for(; loop610 < loopLimit610; loop610++) {
                  func12(rng());
               }
            }
            else {
               int loop611 = 0;
               int loopLimit611 = (rand()%10)/2 + 1;
               for(; loop611 < loopLimit611; loop611++) {
                  int scalar6 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop612 = 0;
                  int loopLimit612 = (rand()%10)/3 + 1;
                  for(; loop612 < loopLimit612; loop612++) {
                     if(PATH3 & 2097152) {
                        func13(rng());
                        if(PATH3 & 4194304) {
                           func19();
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop613 = 0;
                           int loopLimit613 = (rand()%10)/4 + 1;
                           for(; loop613 < loopLimit613; loop613++) {
                              if(PATH3 & 8388608) {
                              }
                              else {
                              }
                           }
                           int loop614 = 0;
                           int loopLimit614 = (rand()%10)/4 + 1;
                           for(; loop614 < loopLimit614; loop614++) {
                              func21();
                           }
                           int scalar8 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                     else {
                        if(PATH3 & 16777216) {
                           func16(rng());
                           if(PATH3 & 33554432) {
                           }
                           else {
                              int scalar7 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar6--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop615 = 0;
                           int loopLimit615 = (rand()%10)/4 + 1;
                           for(; loop615 < loopLimit615; loop615++) {
                              if(PATH3 & 67108864) {
                                 func19();
                              }
                              else {
                                 if(PATH3 & 134217728) {
                                 }
                                 else {
                                    int scalar8 = 1;
                                    if (scalar5 == 0) {
                                       printf("IS 0!");
                                    }
                                    scalar2--;
                                    printf("DELETE!\n");
                                 }
                                 func20();
                              }
                           }
                           int loop616 = 0;
                           int loopLimit616 = (rand()%10)/4 + 1;
                           for(; loop616 < loopLimit616; loop616++) {
                              func18(rng());
                           }
                           int scalar8 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop617 = 0;
                  int loopLimit617 = (rand()%10)/3 + 1;
                  for(; loop617 < loopLimit617; loop617++) {
                     func12(rng());
                  }
               }
            }
            int scalar6 = 1;
            int scalar7 = 1;
            printf("DELETE!\n");
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            if(PATH3 & 268435456) {
               func16(rng());
               if(PATH3 & 536870912) {
               }
               else {
                  int scalar8 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar8--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar8 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop618 = 0;
               int loopLimit618 = (rand()%10)/2 + 1;
               for(; loop618 < loopLimit618; loop618++) {
                  if(PATH3 & 1073741824) {
                     func19();
                  }
                  else {
                     if(PATH3 & -2147483648) {
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop619 = 0;
               int loopLimit619 = (rand()%10)/2 + 1;
               for(; loop619 < loopLimit619; loop619++) {
                  func18(rng());
               }
               int scalar9 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14(rng());
            if(PATH3 & -2147483648) {
               int scalar8 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop620 = 0;
               int loopLimit620 = (rand()%10)/2 + 1;
               for(; loop620 < loopLimit620; loop620++) {
                  if(PATH3 & -2147483648) {
                     func13(rng());
                     if(PATH3 & -2147483648) {
                        func19();
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop621 = 0;
                        int loopLimit621 = (rand()%10)/3 + 1;
                        for(; loop621 < loopLimit621; loop621++) {
                           if(PATH3 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop622 = 0;
                        int loopLimit622 = (rand()%10)/3 + 1;
                        for(; loop622 < loopLimit622; loop622++) {
                           func21();
                        }
                        int scalar10 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
                  else {
                     if(PATH3 & -2147483648) {
                        func16(rng());
                        if(PATH3 & -2147483648) {
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar8--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar9 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop623 = 0;
                        int loopLimit623 = (rand()%10)/3 + 1;
                        for(; loop623 < loopLimit623; loop623++) {
                           if(PATH3 & -2147483648) {
                              func19();
                           }
                           else {
                              if(PATH3 & -2147483648) {
                              }
                              else {
                                 int scalar10 = 1;
                                 if (scalar5 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar7--;
                                 printf("DELETE!\n");
                              }
                              func20();
                           }
                        }
                        int loop624 = 0;
                        int loopLimit624 = (rand()%10)/3 + 1;
                        for(; loop624 < loopLimit624; loop624++) {
                           func18(rng());
                        }
                        int scalar10 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
               }
               int loop625 = 0;
               int loopLimit625 = (rand()%10)/2 + 1;
               for(; loop625 < loopLimit625; loop625++) {
                  func12(rng());
               }
            }
            else {
               if(PATH3 & -2147483648) {
                  int scalar8 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop626 = 0;
                  int loopLimit626 = (rand()%10)/2 + 1;
                  for(; loop626 < loopLimit626; loop626++) {
                     if(PATH3 & -2147483648) {
                        func16(rng());
                        if(PATH3 & -2147483648) {
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        if(PATH3 & -2147483648) {
                           func19();
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop627 = 0;
                           int loopLimit627 = (rand()%10)/3 + 1;
                           for(; loop627 < loopLimit627; loop627++) {
                              if(PATH3 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop628 = 0;
                           int loopLimit628 = (rand()%10)/3 + 1;
                           for(; loop628 < loopLimit628; loop628++) {
                              func21();
                           }
                           int scalar10 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop629 = 0;
                  int loopLimit629 = (rand()%10)/2 + 1;
                  for(; loop629 < loopLimit629; loop629++) {
                     func15(rng());
                  }
               }
               else {
                  int loop630 = 0;
                  int loopLimit630 = (rand()%10)/2 + 1;
                  for(; loop630 < loopLimit630; loop630++) {
                     int scalar8 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop631 = 0;
                     int loopLimit631 = (rand()%10)/3 + 1;
                     for(; loop631 < loopLimit631; loop631++) {
                        if(PATH3 & -2147483648) {
                           func16(rng());
                           if(PATH3 & -2147483648) {
                           }
                           else {
                              int scalar9 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar9--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                        else {
                           if(PATH3 & -2147483648) {
                              func19();
                           }
                           else {
                              int scalar9 = 1;
                              if (scalar8 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop632 = 0;
                              int loopLimit632 = (rand()%10)/4 + 1;
                              for(; loop632 < loopLimit632; loop632++) {
                                 if(PATH3 & -2147483648) {
                                 }
                                 else {
                                 }
                              }
                              int loop633 = 0;
                              int loopLimit633 = (rand()%10)/4 + 1;
                              for(; loop633 < loopLimit633; loop633++) {
                                 func21();
                              }
                              int scalar10 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              scalar5--;
                              printf("DELETE!\n");
                           }
                           func17(rng());
                        }
                     }
                     int loop634 = 0;
                     int loopLimit634 = (rand()%10)/3 + 1;
                     for(; loop634 < loopLimit634; loop634++) {
                        func15(rng());
                     }
                  }
               }
               int scalar8 = 1;
               int scalar9 = 1;
               printf("DELETE!\n");
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               func13(rng());
               if(PATH3 & -2147483648) {
                  func19();
               }
               else {
                  int scalar10 = 1;
                  if (scalar9 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop635 = 0;
                  int loopLimit635 = (rand()%10)/2 + 1;
                  for(; loop635 < loopLimit635; loop635++) {
                     if(PATH3 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop636 = 0;
                  int loopLimit636 = (rand()%10)/2 + 1;
                  for(; loop636 < loopLimit636; loop636++) {
                     func21();
                  }
                  int scalar11 = 1;
                  if (scalar11 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func17(rng());
               if(PATH3 & -2147483648) {
                  int scalar10 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop637 = 0;
                  int loopLimit637 = (rand()%10)/2 + 1;
                  for(; loop637 < loopLimit637; loop637++) {
                     if(PATH3 & -2147483648) {
                        func16(rng());
                        if(PATH3 & -2147483648) {
                        }
                        else {
                           int scalar11 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar7--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        if(PATH3 & -2147483648) {
                           func19();
                        }
                        else {
                           int scalar11 = 1;
                           if (scalar9 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop638 = 0;
                           int loopLimit638 = (rand()%10)/3 + 1;
                           for(; loop638 < loopLimit638; loop638++) {
                              if(PATH3 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop639 = 0;
                           int loopLimit639 = (rand()%10)/3 + 1;
                           for(; loop639 < loopLimit639; loop639++) {
                              func21();
                           }
                           int scalar12 = 1;
                           if (scalar12 == 0) {
                              printf("IS 0!");
                           }
                           scalar12--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop640 = 0;
                  int loopLimit640 = (rand()%10)/2 + 1;
                  for(; loop640 < loopLimit640; loop640++) {
                     func15(rng());
                  }
               }
               else {
                  if(PATH3 & -2147483648) {
                     int scalar10 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop641 = 0;
                     int loopLimit641 = (rand()%10)/2 + 1;
                     for(; loop641 < loopLimit641; loop641++) {
                        if(PATH3 & -2147483648) {
                           func19();
                        }
                        else {
                           if(PATH3 & -2147483648) {
                           }
                           else {
                              int scalar11 = 1;
                              if (scalar5 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                     }
                     int loop642 = 0;
                     int loopLimit642 = (rand()%10)/2 + 1;
                     for(; loop642 < loopLimit642; loop642++) {
                        func18(rng());
                     }
                  }
                  else {
                     int loop643 = 0;
                     int loopLimit643 = (rand()%10)/2 + 1;
                     for(; loop643 < loopLimit643; loop643++) {
                        int scalar10 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop644 = 0;
                        int loopLimit644 = (rand()%10)/3 + 1;
                        for(; loop644 < loopLimit644; loop644++) {
                           if(PATH3 & -2147483648) {
                              func19();
                           }
                           else {
                              if(PATH3 & -2147483648) {
                              }
                              else {
                                 int scalar11 = 1;
                                 if (scalar11 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar11--;
                                 printf("DELETE!\n");
                              }
                              func20();
                           }
                        }
                        int loop645 = 0;
                        int loopLimit645 = (rand()%10)/3 + 1;
                        for(; loop645 < loopLimit645; loop645++) {
                           func18(rng());
                        }
                     }
                  }
                  int scalar10 = 1;
                  int scalar11 = 1;
                  printf("DELETE!\n");
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  func16(rng());
                  if(PATH3 & -2147483648) {
                  }
                  else {
                     int scalar12 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar11--;
                     printf("DELETE!\n");
                  }
                  func20();
                  if(PATH3 & -2147483648) {
                     int scalar12 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop646 = 0;
                     int loopLimit646 = (rand()%10)/2 + 1;
                     for(; loop646 < loopLimit646; loop646++) {
                        if(PATH3 & -2147483648) {
                           func19();
                        }
                        else {
                           if(PATH4 & 1) {
                           }
                           else {
                              int scalar13 = 1;
                              if (scalar11 == 0) {
                                 printf("IS 0!");
                              }
                              scalar9--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                     }
                     int loop647 = 0;
                     int loopLimit647 = (rand()%10)/2 + 1;
                     for(; loop647 < loopLimit647; loop647++) {
                        func18(rng());
                     }
                  }
                  else {
                     if(PATH4 & 2) {
                        int scalar12 = 1;
                        if (scalar10 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop648 = 0;
                        int loopLimit648 = (rand()%10)/2 + 1;
                        for(; loop648 < loopLimit648; loop648++) {
                           if(PATH4 & 4) {
                           }
                           else {
                           }
                        }
                        int loop649 = 0;
                        int loopLimit649 = (rand()%10)/2 + 1;
                        for(; loop649 < loopLimit649; loop649++) {
                           func21();
                        }
                     }
                     else {
                        int loop650 = 0;
                        int loopLimit650 = (rand()%10)/2 + 1;
                        for(; loop650 < loopLimit650; loop650++) {
                           int scalar12 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop651 = 0;
                           int loopLimit651 = (rand()%10)/3 + 1;
                           for(; loop651 < loopLimit651; loop651++) {
                              if(PATH4 & 8) {
                              }
                              else {
                              }
                           }
                           int loop652 = 0;
                           int loopLimit652 = (rand()%10)/3 + 1;
                           for(; loop652 < loopLimit652; loop652++) {
                              func21();
                           }
                        }
                     }
                     int scalar12 = 1;
                     int scalar13 = 1;
                     printf("DELETE!\n");
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     func19();
                     if(PATH4 & 16) {
                        int scalar14 = 1;
                        if (scalar14 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop653 = 0;
                        int loopLimit653 = (rand()%10)/2 + 1;
                        for(; loop653 < loopLimit653; loop653++) {
                           if(PATH4 & 32) {
                           }
                           else {
                           }
                        }
                        int loop654 = 0;
                        int loopLimit654 = (rand()%10)/2 + 1;
                        for(; loop654 < loopLimit654; loop654++) {
                           func21();
                        }
                     }
                     else {
                        if(PATH4 & 64) {
                        }
                        else {
                           int loop655 = 0;
                           int loopLimit655 = (rand()%10)/2 + 1;
                           for(; loop655 < loopLimit655; loop655++) {
                           }
                        }
                        int scalar14 = 1;
                        int scalar15 = 1;
                        printf("DELETE!\n");
                        if (scalar11 == 0) {
                           printf("IS 0!");
                        }
                        if(PATH4 & 128) {
                        }
                        else {
                        }
                     }
                  }
               }
            }
         }
      }
   }
}

void func1(const unsigned long PATH0, const unsigned long PATH1) {
   int scalar1 = 1;
   func4(rng(), rng());
   if(PATH0 & 1) {
      func10(rng());
      if(PATH0 & 2) {
         func16(rng());
         if(PATH0 & 4) {
         }
         else {
            int scalar2 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func20();
      }
      else {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop148 = 0;
         int loopLimit148 = (rand()%10)/2 + 1;
         for(; loop148 < loopLimit148; loop148++) {
            if(PATH0 & 8) {
               func19();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20();
            }
         }
         int loop149 = 0;
         int loopLimit149 = (rand()%10)/2 + 1;
         for(; loop149 < loopLimit149; loop149++) {
            func18(rng());
         }
         int scalar3 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func14(rng());
   }
   else {
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop150 = 0;
      int loopLimit150 = (rand()%10)/2 + 1;
      for(; loop150 < loopLimit150; loop150++) {
         if(PATH0 & 32) {
            func13(rng());
            if(PATH0 & 64) {
               func19();
            }
            else {
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop151 = 0;
               int loopLimit151 = (rand()%10)/3 + 1;
               for(; loop151 < loopLimit151; loop151++) {
                  if(PATH0 & 128) {
                  }
                  else {
                  }
               }
               int loop152 = 0;
               int loopLimit152 = (rand()%10)/3 + 1;
               for(; loop152 < loopLimit152; loop152++) {
                  func21();
               }
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            if(PATH0 & 256) {
               func16(rng());
               if(PATH0 & 512) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop153 = 0;
               int loopLimit153 = (rand()%10)/3 + 1;
               for(; loop153 < loopLimit153; loop153++) {
                  if(PATH0 & 1024) {
                     func19();
                  }
                  else {
                     if(PATH0 & 2048) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop154 = 0;
               int loopLimit154 = (rand()%10)/3 + 1;
               for(; loop154 < loopLimit154; loop154++) {
                  func18(rng());
               }
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop155 = 0;
      int loopLimit155 = (rand()%10)/2 + 1;
      for(; loop155 < loopLimit155; loop155++) {
         func12(rng());
      }
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      printf("DELETE!\n");
   }
   func8(rng());
   scalar1++;
   scalar1++;
   if(PATH0 & 4096) {
      int scalar2 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop186 = 0;
      int loopLimit186 = (rand()%10)/2 + 1;
      for(; loop186 < loopLimit186; loop186++) {
         if(PATH0 & 8192) {
            func10(rng());
            if(PATH0 & 16384) {
               func16(rng());
               if(PATH0 & 32768) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop187 = 0;
               int loopLimit187 = (rand()%10)/3 + 1;
               for(; loop187 < loopLimit187; loop187++) {
                  if(PATH0 & 65536) {
                     func19();
                  }
                  else {
                     if(PATH0 & 131072) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop188 = 0;
               int loopLimit188 = (rand()%10)/3 + 1;
               for(; loop188 < loopLimit188; loop188++) {
                  func18(rng());
               }
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            if(PATH0 & 262144) {
               func13(rng());
               if(PATH0 & 524288) {
                  func19();
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop189 = 0;
                  int loopLimit189 = (rand()%10)/3 + 1;
                  for(; loop189 < loopLimit189; loop189++) {
                     if(PATH0 & 1048576) {
                     }
                     else {
                     }
                  }
                  int loop190 = 0;
                  int loopLimit190 = (rand()%10)/3 + 1;
                  for(; loop190 < loopLimit190; loop190++) {
                     func21();
                  }
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop191 = 0;
               int loopLimit191 = (rand()%10)/3 + 1;
               for(; loop191 < loopLimit191; loop191++) {
                  if(PATH0 & 2097152) {
                     func16(rng());
                     if(PATH0 & 4194304) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     if(PATH0 & 8388608) {
                        func19();
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop192 = 0;
                        int loopLimit192 = (rand()%10)/4 + 1;
                        for(; loop192 < loopLimit192; loop192++) {
                           if(PATH0 & 16777216) {
                           }
                           else {
                           }
                        }
                        int loop193 = 0;
                        int loopLimit193 = (rand()%10)/4 + 1;
                        for(; loop193 < loopLimit193; loop193++) {
                           func21();
                        }
                        int scalar5 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop194 = 0;
               int loopLimit194 = (rand()%10)/3 + 1;
               for(; loop194 < loopLimit194; loop194++) {
                  func15(rng());
               }
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop195 = 0;
      int loopLimit195 = (rand()%10)/2 + 1;
      for(; loop195 < loopLimit195; loop195++) {
         func9(rng());
      }
   }
   else {
      int loop202 = 0;
      int loopLimit202 = (rand()%10)/2 + 1;
      for(; loop202 < loopLimit202; loop202++) {
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop203 = 0;
         int loopLimit203 = (rand()%10)/3 + 1;
         for(; loop203 < loopLimit203; loop203++) {
            if(PATH0 & 33554432) {
               func10(rng());
               if(PATH0 & 67108864) {
                  func16(rng());
                  if(PATH0 & 134217728) {
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop204 = 0;
                  int loopLimit204 = (rand()%10)/4 + 1;
                  for(; loop204 < loopLimit204; loop204++) {
                     if(PATH0 & 268435456) {
                        func19();
                     }
                     else {
                        if(PATH0 & 536870912) {
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop205 = 0;
                  int loopLimit205 = (rand()%10)/4 + 1;
                  for(; loop205 < loopLimit205; loop205++) {
                     func18(rng());
                  }
                  int scalar4 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
            else {
               if(PATH0 & 1073741824) {
                  func13(rng());
                  if(PATH0 & -2147483648) {
                     func19();
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop206 = 0;
                     int loopLimit206 = (rand()%10)/4 + 1;
                     for(; loop206 < loopLimit206; loop206++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop207 = 0;
                     int loopLimit207 = (rand()%10)/4 + 1;
                     for(; loop207 < loopLimit207; loop207++) {
                        func21();
                     }
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop208 = 0;
                  int loopLimit208 = (rand()%10)/4 + 1;
                  for(; loop208 < loopLimit208; loop208++) {
                     if(PATH0 & -2147483648) {
                        func16(rng());
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        if(PATH0 & -2147483648) {
                           func19();
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop209 = 0;
                           int loopLimit209 = (rand()%10)/5 + 1;
                           for(; loop209 < loopLimit209; loop209++) {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop210 = 0;
                           int loopLimit210 = (rand()%10)/5 + 1;
                           for(; loop210 < loopLimit210; loop210++) {
                              func21();
                           }
                           int scalar5 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop211 = 0;
                  int loopLimit211 = (rand()%10)/4 + 1;
                  for(; loop211 < loopLimit211; loop211++) {
                     func15(rng());
                  }
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
         }
         int loop212 = 0;
         int loopLimit212 = (rand()%10)/3 + 1;
         for(; loop212 < loopLimit212; loop212++) {
            func9(rng());
         }
      }
   }
   int scalar2 = 1;
   int scalar3 = 1;
   printf("DELETE!\n");
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func7(rng());
   if(PATH0 & -2147483648) {
      func13(rng());
      if(PATH0 & -2147483648) {
         func19();
      }
      else {
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop213 = 0;
         int loopLimit213 = (rand()%10)/2 + 1;
         for(; loop213 < loopLimit213; loop213++) {
            if(PATH0 & -2147483648) {
            }
            else {
            }
         }
         int loop214 = 0;
         int loopLimit214 = (rand()%10)/2 + 1;
         for(; loop214 < loopLimit214; loop214++) {
            func21();
         }
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func17(rng());
   }
   else {
      int scalar4 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop215 = 0;
      int loopLimit215 = (rand()%10)/2 + 1;
      for(; loop215 < loopLimit215; loop215++) {
         if(PATH0 & -2147483648) {
            func16(rng());
            if(PATH0 & -2147483648) {
            }
            else {
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func20();
         }
         else {
            if(PATH0 & -2147483648) {
               func19();
            }
            else {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop216 = 0;
               int loopLimit216 = (rand()%10)/3 + 1;
               for(; loop216 < loopLimit216; loop216++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop217 = 0;
               int loopLimit217 = (rand()%10)/3 + 1;
               for(; loop217 < loopLimit217; loop217++) {
                  func21();
               }
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop218 = 0;
      int loopLimit218 = (rand()%10)/2 + 1;
      for(; loop218 < loopLimit218; loop218++) {
         func15(rng());
      }
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      printf("DELETE!\n");
   }
   func11(rng());
   if(PATH0 & -2147483648) {
      int scalar4 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop219 = 0;
      int loopLimit219 = (rand()%10)/2 + 1;
      for(; loop219 < loopLimit219; loop219++) {
         if(PATH0 & -2147483648) {
            func10(rng());
            if(PATH0 & -2147483648) {
               func16(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop220 = 0;
               int loopLimit220 = (rand()%10)/3 + 1;
               for(; loop220 < loopLimit220; loop220++) {
                  if(PATH0 & -2147483648) {
                     func19();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop221 = 0;
               int loopLimit221 = (rand()%10)/3 + 1;
               for(; loop221 < loopLimit221; loop221++) {
                  func18(rng());
               }
               int scalar6 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            if(PATH0 & -2147483648) {
               func13(rng());
               if(PATH0 & -2147483648) {
                  func19();
               }
               else {
                  int scalar5 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop222 = 0;
                  int loopLimit222 = (rand()%10)/3 + 1;
                  for(; loop222 < loopLimit222; loop222++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop223 = 0;
                  int loopLimit223 = (rand()%10)/3 + 1;
                  for(; loop223 < loopLimit223; loop223++) {
                     func21();
                  }
                  int scalar6 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop224 = 0;
               int loopLimit224 = (rand()%10)/3 + 1;
               for(; loop224 < loopLimit224; loop224++) {
                  if(PATH0 & -2147483648) {
                     func16(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                        func19();
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop225 = 0;
                        int loopLimit225 = (rand()%10)/4 + 1;
                        for(; loop225 < loopLimit225; loop225++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop226 = 0;
                        int loopLimit226 = (rand()%10)/4 + 1;
                        for(; loop226 < loopLimit226; loop226++) {
                           func21();
                        }
                        int scalar7 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop227 = 0;
               int loopLimit227 = (rand()%10)/3 + 1;
               for(; loop227 < loopLimit227; loop227++) {
                  func15(rng());
               }
               int scalar6 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop228 = 0;
      int loopLimit228 = (rand()%10)/2 + 1;
      for(; loop228 < loopLimit228; loop228++) {
         func9(rng());
      }
   }
   else {
      if(PATH0 & -2147483648) {
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop229 = 0;
         int loopLimit229 = (rand()%10)/2 + 1;
         for(; loop229 < loopLimit229; loop229++) {
            if(PATH0 & -2147483648) {
               func13(rng());
               if(PATH0 & -2147483648) {
                  func19();
               }
               else {
                  int scalar5 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop230 = 0;
                  int loopLimit230 = (rand()%10)/3 + 1;
                  for(; loop230 < loopLimit230; loop230++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop231 = 0;
                  int loopLimit231 = (rand()%10)/3 + 1;
                  for(; loop231 < loopLimit231; loop231++) {
                     func21();
                  }
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH0 & -2147483648) {
                  func16(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop232 = 0;
                  int loopLimit232 = (rand()%10)/3 + 1;
                  for(; loop232 < loopLimit232; loop232++) {
                     if(PATH0 & -2147483648) {
                        func19();
                     }
                     else {
                        if(PATH1 & 1) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           scalar6--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop233 = 0;
                  int loopLimit233 = (rand()%10)/3 + 1;
                  for(; loop233 < loopLimit233; loop233++) {
                     func18(rng());
                  }
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop234 = 0;
         int loopLimit234 = (rand()%10)/2 + 1;
         for(; loop234 < loopLimit234; loop234++) {
            func12(rng());
         }
      }
      else {
         int loop235 = 0;
         int loopLimit235 = (rand()%10)/2 + 1;
         for(; loop235 < loopLimit235; loop235++) {
            int scalar4 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop236 = 0;
            int loopLimit236 = (rand()%10)/3 + 1;
            for(; loop236 < loopLimit236; loop236++) {
               if(PATH1 & 2) {
                  func13(rng());
                  if(PATH1 & 4) {
                     func19();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop237 = 0;
                     int loopLimit237 = (rand()%10)/4 + 1;
                     for(; loop237 < loopLimit237; loop237++) {
                        if(PATH1 & 8) {
                        }
                        else {
                        }
                     }
                     int loop238 = 0;
                     int loopLimit238 = (rand()%10)/4 + 1;
                     for(; loop238 < loopLimit238; loop238++) {
                        func21();
                     }
                     int scalar6 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  if(PATH1 & 16) {
                     func16(rng());
                     if(PATH1 & 32) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop239 = 0;
                     int loopLimit239 = (rand()%10)/4 + 1;
                     for(; loop239 < loopLimit239; loop239++) {
                        if(PATH1 & 64) {
                           func19();
                        }
                        else {
                           if(PATH1 & 128) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                     }
                     int loop240 = 0;
                     int loopLimit240 = (rand()%10)/4 + 1;
                     for(; loop240 < loopLimit240; loop240++) {
                        func18(rng());
                     }
                     int scalar6 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
            }
            int loop241 = 0;
            int loopLimit241 = (rand()%10)/3 + 1;
            for(; loop241 < loopLimit241; loop241++) {
               func12(rng());
            }
         }
      }
      int scalar4 = 1;
      int scalar5 = 1;
      printf("DELETE!\n");
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func10(rng());
      if(PATH1 & 256) {
         func16(rng());
         if(PATH1 & 512) {
         }
         else {
            int scalar6 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func20();
      }
      else {
         int scalar6 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop242 = 0;
         int loopLimit242 = (rand()%10)/2 + 1;
         for(; loop242 < loopLimit242; loop242++) {
            if(PATH1 & 1024) {
               func19();
            }
            else {
               if(PATH1 & 2048) {
               }
               else {
                  int scalar7 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20();
            }
         }
         int loop243 = 0;
         int loopLimit243 = (rand()%10)/2 + 1;
         for(; loop243 < loopLimit243; loop243++) {
            func18(rng());
         }
         int scalar7 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         printf("DELETE!\n");
      }
      func14(rng());
      if(PATH1 & 4096) {
         int scalar6 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop244 = 0;
         int loopLimit244 = (rand()%10)/2 + 1;
         for(; loop244 < loopLimit244; loop244++) {
            if(PATH1 & 8192) {
               func13(rng());
               if(PATH1 & 16384) {
                  func19();
               }
               else {
                  int scalar7 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop245 = 0;
                  int loopLimit245 = (rand()%10)/3 + 1;
                  for(; loop245 < loopLimit245; loop245++) {
                     if(PATH1 & 32768) {
                     }
                     else {
                     }
                  }
                  int loop246 = 0;
                  int loopLimit246 = (rand()%10)/3 + 1;
                  for(; loop246 < loopLimit246; loop246++) {
                     func21();
                  }
                  int scalar8 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH1 & 65536) {
                  func16(rng());
                  if(PATH1 & 131072) {
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar7--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop247 = 0;
                  int loopLimit247 = (rand()%10)/3 + 1;
                  for(; loop247 < loopLimit247; loop247++) {
                     if(PATH1 & 262144) {
                        func19();
                     }
                     else {
                        if(PATH1 & 524288) {
                        }
                        else {
                           int scalar8 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop248 = 0;
                  int loopLimit248 = (rand()%10)/3 + 1;
                  for(; loop248 < loopLimit248; loop248++) {
                     func18(rng());
                  }
                  int scalar8 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop249 = 0;
         int loopLimit249 = (rand()%10)/2 + 1;
         for(; loop249 < loopLimit249; loop249++) {
            func12(rng());
         }
      }
      else {
         if(PATH1 & 1048576) {
            int scalar6 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop250 = 0;
            int loopLimit250 = (rand()%10)/2 + 1;
            for(; loop250 < loopLimit250; loop250++) {
               if(PATH1 & 2097152) {
                  func16(rng());
                  if(PATH1 & 4194304) {
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  if(PATH1 & 8388608) {
                     func19();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop251 = 0;
                     int loopLimit251 = (rand()%10)/3 + 1;
                     for(; loop251 < loopLimit251; loop251++) {
                        if(PATH1 & 16777216) {
                        }
                        else {
                        }
                     }
                     int loop252 = 0;
                     int loopLimit252 = (rand()%10)/3 + 1;
                     for(; loop252 < loopLimit252; loop252++) {
                        func21();
                     }
                     int scalar8 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop253 = 0;
            int loopLimit253 = (rand()%10)/2 + 1;
            for(; loop253 < loopLimit253; loop253++) {
               func15(rng());
            }
         }
         else {
            int loop254 = 0;
            int loopLimit254 = (rand()%10)/2 + 1;
            for(; loop254 < loopLimit254; loop254++) {
               int scalar6 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop255 = 0;
               int loopLimit255 = (rand()%10)/3 + 1;
               for(; loop255 < loopLimit255; loop255++) {
                  if(PATH1 & 33554432) {
                     func16(rng());
                     if(PATH1 & 67108864) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     if(PATH1 & 134217728) {
                        func19();
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop256 = 0;
                        int loopLimit256 = (rand()%10)/4 + 1;
                        for(; loop256 < loopLimit256; loop256++) {
                           if(PATH1 & 268435456) {
                           }
                           else {
                           }
                        }
                        int loop257 = 0;
                        int loopLimit257 = (rand()%10)/4 + 1;
                        for(; loop257 < loopLimit257; loop257++) {
                           func21();
                        }
                        int scalar8 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop258 = 0;
               int loopLimit258 = (rand()%10)/3 + 1;
               for(; loop258 < loopLimit258; loop258++) {
                  func15(rng());
               }
            }
         }
         int scalar6 = 1;
         int scalar7 = 1;
         printf("DELETE!\n");
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func13(rng());
         if(PATH1 & 536870912) {
            func19();
         }
         else {
            int scalar8 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop259 = 0;
            int loopLimit259 = (rand()%10)/2 + 1;
            for(; loop259 < loopLimit259; loop259++) {
               if(PATH1 & 1073741824) {
               }
               else {
               }
            }
            int loop260 = 0;
            int loopLimit260 = (rand()%10)/2 + 1;
            for(; loop260 < loopLimit260; loop260++) {
               func21();
            }
            int scalar9 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func17(rng());
         if(PATH1 & -2147483648) {
            int scalar8 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop261 = 0;
            int loopLimit261 = (rand()%10)/2 + 1;
            for(; loop261 < loopLimit261; loop261++) {
               if(PATH1 & -2147483648) {
                  func16(rng());
                  if(PATH1 & -2147483648) {
                  }
                  else {
                     int scalar9 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar7--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  if(PATH1 & -2147483648) {
                     func19();
                  }
                  else {
                     int scalar9 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop262 = 0;
                     int loopLimit262 = (rand()%10)/3 + 1;
                     for(; loop262 < loopLimit262; loop262++) {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop263 = 0;
                     int loopLimit263 = (rand()%10)/3 + 1;
                     for(; loop263 < loopLimit263; loop263++) {
                        func21();
                     }
                     int scalar10 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar9--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop264 = 0;
            int loopLimit264 = (rand()%10)/2 + 1;
            for(; loop264 < loopLimit264; loop264++) {
               func15(rng());
            }
         }
         else {
            if(PATH1 & -2147483648) {
               int scalar8 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop265 = 0;
               int loopLimit265 = (rand()%10)/2 + 1;
               for(; loop265 < loopLimit265; loop265++) {
                  if(PATH1 & -2147483648) {
                     func19();
                  }
                  else {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop266 = 0;
               int loopLimit266 = (rand()%10)/2 + 1;
               for(; loop266 < loopLimit266; loop266++) {
                  func18(rng());
               }
            }
            else {
               int loop267 = 0;
               int loopLimit267 = (rand()%10)/2 + 1;
               for(; loop267 < loopLimit267; loop267++) {
                  int scalar8 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop268 = 0;
                  int loopLimit268 = (rand()%10)/3 + 1;
                  for(; loop268 < loopLimit268; loop268++) {
                     if(PATH1 & -2147483648) {
                        func19();
                     }
                     else {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar9 == 0) {
                              printf("IS 0!");
                           }
                           scalar7--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop269 = 0;
                  int loopLimit269 = (rand()%10)/3 + 1;
                  for(; loop269 < loopLimit269; loop269++) {
                     func18(rng());
                  }
               }
            }
            int scalar8 = 1;
            int scalar9 = 1;
            printf("DELETE!\n");
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            func16(rng());
            if(PATH1 & -2147483648) {
            }
            else {
               int scalar10 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               scalar9--;
               printf("DELETE!\n");
            }
            func20();
            if(PATH1 & -2147483648) {
               int scalar10 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop270 = 0;
               int loopLimit270 = (rand()%10)/2 + 1;
               for(; loop270 < loopLimit270; loop270++) {
                  if(PATH1 & -2147483648) {
                     func19();
                  }
                  else {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar11 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar8--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop271 = 0;
               int loopLimit271 = (rand()%10)/2 + 1;
               for(; loop271 < loopLimit271; loop271++) {
                  func18(rng());
               }
            }
            else {
               if(PATH1 & -2147483648) {
                  int scalar10 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop272 = 0;
                  int loopLimit272 = (rand()%10)/2 + 1;
                  for(; loop272 < loopLimit272; loop272++) {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop273 = 0;
                  int loopLimit273 = (rand()%10)/2 + 1;
                  for(; loop273 < loopLimit273; loop273++) {
                     func21();
                  }
               }
               else {
                  int loop274 = 0;
                  int loopLimit274 = (rand()%10)/2 + 1;
                  for(; loop274 < loopLimit274; loop274++) {
                     int scalar10 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop275 = 0;
                     int loopLimit275 = (rand()%10)/3 + 1;
                     for(; loop275 < loopLimit275; loop275++) {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop276 = 0;
                     int loopLimit276 = (rand()%10)/3 + 1;
                     for(; loop276 < loopLimit276; loop276++) {
                        func21();
                     }
                  }
               }
               int scalar10 = 1;
               int scalar11 = 1;
               printf("DELETE!\n");
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               func19();
               if(PATH1 & -2147483648) {
                  int scalar12 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop277 = 0;
                  int loopLimit277 = (rand()%10)/2 + 1;
                  for(; loop277 < loopLimit277; loop277++) {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop278 = 0;
                  int loopLimit278 = (rand()%10)/2 + 1;
                  for(; loop278 < loopLimit278; loop278++) {
                     func21();
                  }
               }
               else {
                  if(PATH1 & -2147483648) {
                  }
                  else {
                     int loop279 = 0;
                     int loopLimit279 = (rand()%10)/2 + 1;
                     for(; loop279 < loopLimit279; loop279++) {
                     }
                  }
                  int scalar12 = 1;
                  int scalar13 = 1;
                  printf("DELETE!\n");
                  if (scalar13 == 0) {
                     printf("IS 0!");
                  }
                  if(PATH1 & -2147483648) {
                  }
                  else {
                  }
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0, const unsigned long PATH1) {
   int scalar2 = 1;
   func7(rng());
   if(PATH0 & 1) {
      func13(rng());
      if(PATH0 & 2) {
         func19();
      }
      else {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop72 = 0;
         int loopLimit72 = (rand()%10)/2 + 1;
         for(; loop72 < loopLimit72; loop72++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop73 = 0;
         int loopLimit73 = (rand()%10)/2 + 1;
         for(; loop73 < loopLimit73; loop73++) {
            func21();
         }
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func17(rng());
   }
   else {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop74 = 0;
      int loopLimit74 = (rand()%10)/2 + 1;
      for(; loop74 < loopLimit74; loop74++) {
         if(PATH0 & 8) {
            func16(rng());
            if(PATH0 & 16) {
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func20();
         }
         else {
            if(PATH0 & 32) {
               func19();
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop75 = 0;
               int loopLimit75 = (rand()%10)/3 + 1;
               for(; loop75 < loopLimit75; loop75++) {
                  if(PATH0 & 64) {
                  }
                  else {
                  }
               }
               int loop76 = 0;
               int loopLimit76 = (rand()%10)/3 + 1;
               for(; loop76 < loopLimit76; loop76++) {
                  func21();
               }
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop77 = 0;
      int loopLimit77 = (rand()%10)/2 + 1;
      for(; loop77 < loopLimit77; loop77++) {
         func15(rng());
      }
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar4--;
      printf("DELETE!\n");
   }
   func11(rng());
   scalar2++;
   scalar2++;
   if(PATH0 & 128) {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop93 = 0;
      int loopLimit93 = (rand()%10)/2 + 1;
      for(; loop93 < loopLimit93; loop93++) {
         if(PATH0 & 256) {
            func13(rng());
            if(PATH0 & 512) {
               func19();
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop94 = 0;
               int loopLimit94 = (rand()%10)/3 + 1;
               for(; loop94 < loopLimit94; loop94++) {
                  if(PATH0 & 1024) {
                  }
                  else {
                  }
               }
               int loop95 = 0;
               int loopLimit95 = (rand()%10)/3 + 1;
               for(; loop95 < loopLimit95; loop95++) {
                  func21();
               }
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            if(PATH0 & 2048) {
               func16(rng());
               if(PATH0 & 4096) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop96 = 0;
               int loopLimit96 = (rand()%10)/3 + 1;
               for(; loop96 < loopLimit96; loop96++) {
                  if(PATH0 & 8192) {
                     func19();
                  }
                  else {
                     if(PATH0 & 16384) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop97 = 0;
               int loopLimit97 = (rand()%10)/3 + 1;
               for(; loop97 < loopLimit97; loop97++) {
                  func18(rng());
               }
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop98 = 0;
      int loopLimit98 = (rand()%10)/2 + 1;
      for(; loop98 < loopLimit98; loop98++) {
         func12(rng());
      }
   }
   else {
      int loop103 = 0;
      int loopLimit103 = (rand()%10)/2 + 1;
      for(; loop103 < loopLimit103; loop103++) {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop104 = 0;
         int loopLimit104 = (rand()%10)/3 + 1;
         for(; loop104 < loopLimit104; loop104++) {
            if(PATH0 & 32768) {
               func13(rng());
               if(PATH0 & 65536) {
                  func19();
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop105 = 0;
                  int loopLimit105 = (rand()%10)/4 + 1;
                  for(; loop105 < loopLimit105; loop105++) {
                     if(PATH0 & 131072) {
                     }
                     else {
                     }
                  }
                  int loop106 = 0;
                  int loopLimit106 = (rand()%10)/4 + 1;
                  for(; loop106 < loopLimit106; loop106++) {
                     func21();
                  }
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH0 & 262144) {
                  func16(rng());
                  if(PATH0 & 524288) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop107 = 0;
                  int loopLimit107 = (rand()%10)/4 + 1;
                  for(; loop107 < loopLimit107; loop107++) {
                     if(PATH0 & 1048576) {
                        func19();
                     }
                     else {
                        if(PATH0 & 2097152) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop108 = 0;
                  int loopLimit108 = (rand()%10)/4 + 1;
                  for(; loop108 < loopLimit108; loop108++) {
                     func18(rng());
                  }
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop109 = 0;
         int loopLimit109 = (rand()%10)/3 + 1;
         for(; loop109 < loopLimit109; loop109++) {
            func12(rng());
         }
      }
   }
   int scalar3 = 1;
   int scalar4 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func10(rng());
   if(PATH0 & 4194304) {
      func16(rng());
      if(PATH0 & 8388608) {
      }
      else {
         int scalar5 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func20();
   }
   else {
      int scalar5 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop110 = 0;
      int loopLimit110 = (rand()%10)/2 + 1;
      for(; loop110 < loopLimit110; loop110++) {
         if(PATH0 & 16777216) {
            func19();
         }
         else {
            if(PATH0 & 33554432) {
            }
            else {
               int scalar6 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func20();
         }
      }
      int loop111 = 0;
      int loopLimit111 = (rand()%10)/2 + 1;
      for(; loop111 < loopLimit111; loop111++) {
         func18(rng());
      }
      int scalar6 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      printf("DELETE!\n");
   }
   func14(rng());
   if(PATH0 & 67108864) {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop112 = 0;
      int loopLimit112 = (rand()%10)/2 + 1;
      for(; loop112 < loopLimit112; loop112++) {
         if(PATH0 & 134217728) {
            func13(rng());
            if(PATH0 & 268435456) {
               func19();
            }
            else {
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop113 = 0;
               int loopLimit113 = (rand()%10)/3 + 1;
               for(; loop113 < loopLimit113; loop113++) {
                  if(PATH0 & 536870912) {
                  }
                  else {
                  }
               }
               int loop114 = 0;
               int loopLimit114 = (rand()%10)/3 + 1;
               for(; loop114 < loopLimit114; loop114++) {
                  func21();
               }
               int scalar7 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            if(PATH0 & 1073741824) {
               func16(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop115 = 0;
               int loopLimit115 = (rand()%10)/3 + 1;
               for(; loop115 < loopLimit115; loop115++) {
                  if(PATH0 & -2147483648) {
                     func19();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop116 = 0;
               int loopLimit116 = (rand()%10)/3 + 1;
               for(; loop116 < loopLimit116; loop116++) {
                  func18(rng());
               }
               int scalar7 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop117 = 0;
      int loopLimit117 = (rand()%10)/2 + 1;
      for(; loop117 < loopLimit117; loop117++) {
         func12(rng());
      }
   }
   else {
      if(PATH0 & -2147483648) {
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop118 = 0;
         int loopLimit118 = (rand()%10)/2 + 1;
         for(; loop118 < loopLimit118; loop118++) {
            if(PATH0 & -2147483648) {
               func16(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               if(PATH0 & -2147483648) {
                  func19();
               }
               else {
                  int scalar6 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop119 = 0;
                  int loopLimit119 = (rand()%10)/3 + 1;
                  for(; loop119 < loopLimit119; loop119++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop120 = 0;
                  int loopLimit120 = (rand()%10)/3 + 1;
                  for(; loop120 < loopLimit120; loop120++) {
                     func21();
                  }
                  int scalar7 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar7--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop121 = 0;
         int loopLimit121 = (rand()%10)/2 + 1;
         for(; loop121 < loopLimit121; loop121++) {
            func15(rng());
         }
      }
      else {
         int loop122 = 0;
         int loopLimit122 = (rand()%10)/2 + 1;
         for(; loop122 < loopLimit122; loop122++) {
            int scalar5 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop123 = 0;
            int loopLimit123 = (rand()%10)/3 + 1;
            for(; loop123 < loopLimit123; loop123++) {
               if(PATH0 & -2147483648) {
                  func16(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  if(PATH0 & -2147483648) {
                     func19();
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop124 = 0;
                     int loopLimit124 = (rand()%10)/4 + 1;
                     for(; loop124 < loopLimit124; loop124++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop125 = 0;
                     int loopLimit125 = (rand()%10)/4 + 1;
                     for(; loop125 < loopLimit125; loop125++) {
                        func21();
                     }
                     int scalar7 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     scalar7--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop126 = 0;
            int loopLimit126 = (rand()%10)/3 + 1;
            for(; loop126 < loopLimit126; loop126++) {
               func15(rng());
            }
         }
      }
      int scalar5 = 1;
      int scalar6 = 1;
      printf("DELETE!\n");
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func13(rng());
      if(PATH0 & -2147483648) {
         func19();
      }
      else {
         int scalar7 = 1;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop127 = 0;
         int loopLimit127 = (rand()%10)/2 + 1;
         for(; loop127 < loopLimit127; loop127++) {
            if(PATH0 & -2147483648) {
            }
            else {
            }
         }
         int loop128 = 0;
         int loopLimit128 = (rand()%10)/2 + 1;
         for(; loop128 < loopLimit128; loop128++) {
            func21();
         }
         int scalar8 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar7--;
         printf("DELETE!\n");
      }
      func17(rng());
      if(PATH0 & -2147483648) {
         int scalar7 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop129 = 0;
         int loopLimit129 = (rand()%10)/2 + 1;
         for(; loop129 < loopLimit129; loop129++) {
            if(PATH0 & -2147483648) {
               func16(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar8 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               if(PATH0 & -2147483648) {
                  func19();
               }
               else {
                  int scalar8 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop130 = 0;
                  int loopLimit130 = (rand()%10)/3 + 1;
                  for(; loop130 < loopLimit130; loop130++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop131 = 0;
                  int loopLimit131 = (rand()%10)/3 + 1;
                  for(; loop131 < loopLimit131; loop131++) {
                     func21();
                  }
                  int scalar9 = 1;
                  if (scalar7 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop132 = 0;
         int loopLimit132 = (rand()%10)/2 + 1;
         for(; loop132 < loopLimit132; loop132++) {
            func15(rng());
         }
      }
      else {
         if(PATH0 & -2147483648) {
            int scalar7 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop133 = 0;
            int loopLimit133 = (rand()%10)/2 + 1;
            for(; loop133 < loopLimit133; loop133++) {
               if(PATH0 & -2147483648) {
                  func19();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar7--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
            }
            int loop134 = 0;
            int loopLimit134 = (rand()%10)/2 + 1;
            for(; loop134 < loopLimit134; loop134++) {
               func18(rng());
            }
         }
         else {
            int loop135 = 0;
            int loopLimit135 = (rand()%10)/2 + 1;
            for(; loop135 < loopLimit135; loop135++) {
               int scalar7 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop136 = 0;
               int loopLimit136 = (rand()%10)/3 + 1;
               for(; loop136 < loopLimit136; loop136++) {
                  if(PATH0 & -2147483648) {
                     func19();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop137 = 0;
               int loopLimit137 = (rand()%10)/3 + 1;
               for(; loop137 < loopLimit137; loop137++) {
                  func18(rng());
               }
            }
         }
         int scalar7 = 1;
         int scalar8 = 1;
         printf("DELETE!\n");
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func16(rng());
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar9 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar6--;
            printf("DELETE!\n");
         }
         func20();
         if(PATH0 & -2147483648) {
            int scalar9 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop138 = 0;
            int loopLimit138 = (rand()%10)/2 + 1;
            for(; loop138 < loopLimit138; loop138++) {
               if(PATH0 & -2147483648) {
                  func19();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar10 = 1;
                     if (scalar9 == 0) {
                        printf("IS 0!");
                     }
                     scalar10--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
            }
            int loop139 = 0;
            int loopLimit139 = (rand()%10)/2 + 1;
            for(; loop139 < loopLimit139; loop139++) {
               func18(rng());
            }
         }
         else {
            if(PATH0 & -2147483648) {
               int scalar9 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop140 = 0;
               int loopLimit140 = (rand()%10)/2 + 1;
               for(; loop140 < loopLimit140; loop140++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop141 = 0;
               int loopLimit141 = (rand()%10)/2 + 1;
               for(; loop141 < loopLimit141; loop141++) {
                  func21();
               }
            }
            else {
               int loop142 = 0;
               int loopLimit142 = (rand()%10)/2 + 1;
               for(; loop142 < loopLimit142; loop142++) {
                  int scalar9 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop143 = 0;
                  int loopLimit143 = (rand()%10)/3 + 1;
                  for(; loop143 < loopLimit143; loop143++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop144 = 0;
                  int loopLimit144 = (rand()%10)/3 + 1;
                  for(; loop144 < loopLimit144; loop144++) {
                     func21();
                  }
               }
            }
            int scalar9 = 1;
            int scalar10 = 1;
            printf("DELETE!\n");
            if (scalar9 == 0) {
               printf("IS 0!");
            }
            func19();
            if(PATH0 & -2147483648) {
               int scalar11 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop145 = 0;
               int loopLimit145 = (rand()%10)/2 + 1;
               for(; loop145 < loopLimit145; loop145++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop146 = 0;
               int loopLimit146 = (rand()%10)/2 + 1;
               for(; loop146 < loopLimit146; loop146++) {
                  func21();
               }
            }
            else {
               if(PATH1 & 1) {
               }
               else {
                  int loop147 = 0;
                  int loopLimit147 = (rand()%10)/2 + 1;
                  for(; loop147 < loopLimit147; loop147++) {
                  }
               }
               int scalar11 = 1;
               int scalar12 = 1;
               printf("DELETE!\n");
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               if(PATH1 & 2) {
               }
               else {
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func7(const unsigned long PATH0) {
   int scalar3 = 1;
   func10(rng());
   if(PATH0 & 1) {
      func16(rng());
      if(PATH0 & 2) {
      }
      else {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func20();
   }
   else {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop30 = 0;
      int loopLimit30 = (rand()%10)/2 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         if(PATH0 & 4) {
            func19();
         }
         else {
            if(PATH0 & 8) {
            }
            else {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func20();
         }
      }
      int loop31 = 0;
      int loopLimit31 = (rand()%10)/2 + 1;
      for(; loop31 < loopLimit31; loop31++) {
         func18(rng());
      }
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      scalar5--;
      printf("DELETE!\n");
   }
   func14(rng());
   scalar3++;
   scalar3++;
   if(PATH0 & 16) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop40 = 0;
      int loopLimit40 = (rand()%10)/2 + 1;
      for(; loop40 < loopLimit40; loop40++) {
         if(PATH0 & 32) {
            func16(rng());
            if(PATH0 & 64) {
            }
            else {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func20();
         }
         else {
            if(PATH0 & 128) {
               func19();
            }
            else {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop41 = 0;
               int loopLimit41 = (rand()%10)/3 + 1;
               for(; loop41 < loopLimit41; loop41++) {
                  if(PATH0 & 256) {
                  }
                  else {
                  }
               }
               int loop42 = 0;
               int loopLimit42 = (rand()%10)/3 + 1;
               for(; loop42 < loopLimit42; loop42++) {
                  func21();
               }
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop43 = 0;
      int loopLimit43 = (rand()%10)/2 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         func15(rng());
      }
   }
   else {
      int loop46 = 0;
      int loopLimit46 = (rand()%10)/2 + 1;
      for(; loop46 < loopLimit46; loop46++) {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop47 = 0;
         int loopLimit47 = (rand()%10)/3 + 1;
         for(; loop47 < loopLimit47; loop47++) {
            if(PATH0 & 512) {
               func16(rng());
               if(PATH0 & 1024) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               if(PATH0 & 2048) {
                  func19();
               }
               else {
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop48 = 0;
                  int loopLimit48 = (rand()%10)/4 + 1;
                  for(; loop48 < loopLimit48; loop48++) {
                     if(PATH0 & 4096) {
                     }
                     else {
                     }
                  }
                  int loop49 = 0;
                  int loopLimit49 = (rand()%10)/4 + 1;
                  for(; loop49 < loopLimit49; loop49++) {
                     func21();
                  }
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop50 = 0;
         int loopLimit50 = (rand()%10)/3 + 1;
         for(; loop50 < loopLimit50; loop50++) {
            func15(rng());
         }
      }
   }
   int scalar4 = 1;
   int scalar5 = 1;
   printf("DELETE!\n");
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   func13(rng());
   if(PATH0 & 8192) {
      func19();
   }
   else {
      int scalar6 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop51 = 0;
      int loopLimit51 = (rand()%10)/2 + 1;
      for(; loop51 < loopLimit51; loop51++) {
         if(PATH0 & 16384) {
         }
         else {
         }
      }
      int loop52 = 0;
      int loopLimit52 = (rand()%10)/2 + 1;
      for(; loop52 < loopLimit52; loop52++) {
         func21();
      }
      int scalar7 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      scalar7--;
      printf("DELETE!\n");
   }
   func17(rng());
   if(PATH0 & 32768) {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop53 = 0;
      int loopLimit53 = (rand()%10)/2 + 1;
      for(; loop53 < loopLimit53; loop53++) {
         if(PATH0 & 65536) {
            func16(rng());
            if(PATH0 & 131072) {
            }
            else {
               int scalar7 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func20();
         }
         else {
            if(PATH0 & 262144) {
               func19();
            }
            else {
               int scalar7 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop54 = 0;
               int loopLimit54 = (rand()%10)/3 + 1;
               for(; loop54 < loopLimit54; loop54++) {
                  if(PATH0 & 524288) {
                  }
                  else {
                  }
               }
               int loop55 = 0;
               int loopLimit55 = (rand()%10)/3 + 1;
               for(; loop55 < loopLimit55; loop55++) {
                  func21();
               }
               int scalar8 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop56 = 0;
      int loopLimit56 = (rand()%10)/2 + 1;
      for(; loop56 < loopLimit56; loop56++) {
         func15(rng());
      }
   }
   else {
      if(PATH0 & 1048576) {
         int scalar6 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop57 = 0;
         int loopLimit57 = (rand()%10)/2 + 1;
         for(; loop57 < loopLimit57; loop57++) {
            if(PATH0 & 2097152) {
               func19();
            }
            else {
               if(PATH0 & 4194304) {
               }
               else {
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20();
            }
         }
         int loop58 = 0;
         int loopLimit58 = (rand()%10)/2 + 1;
         for(; loop58 < loopLimit58; loop58++) {
            func18(rng());
         }
      }
      else {
         int loop59 = 0;
         int loopLimit59 = (rand()%10)/2 + 1;
         for(; loop59 < loopLimit59; loop59++) {
            int scalar6 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop60 = 0;
            int loopLimit60 = (rand()%10)/3 + 1;
            for(; loop60 < loopLimit60; loop60++) {
               if(PATH0 & 8388608) {
                  func19();
               }
               else {
                  if(PATH0 & 16777216) {
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
            }
            int loop61 = 0;
            int loopLimit61 = (rand()%10)/3 + 1;
            for(; loop61 < loopLimit61; loop61++) {
               func18(rng());
            }
         }
      }
      int scalar6 = 1;
      int scalar7 = 1;
      printf("DELETE!\n");
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      func16(rng());
      if(PATH0 & 33554432) {
      }
      else {
         int scalar8 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func20();
      if(PATH0 & 67108864) {
         int scalar8 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop62 = 0;
         int loopLimit62 = (rand()%10)/2 + 1;
         for(; loop62 < loopLimit62; loop62++) {
            if(PATH0 & 134217728) {
               func19();
            }
            else {
               if(PATH0 & 268435456) {
               }
               else {
                  int scalar9 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func20();
            }
         }
         int loop63 = 0;
         int loopLimit63 = (rand()%10)/2 + 1;
         for(; loop63 < loopLimit63; loop63++) {
            func18(rng());
         }
      }
      else {
         if(PATH0 & 536870912) {
            int scalar8 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop64 = 0;
            int loopLimit64 = (rand()%10)/2 + 1;
            for(; loop64 < loopLimit64; loop64++) {
               if(PATH0 & 1073741824) {
               }
               else {
               }
            }
            int loop65 = 0;
            int loopLimit65 = (rand()%10)/2 + 1;
            for(; loop65 < loopLimit65; loop65++) {
               func21();
            }
         }
         else {
            int loop66 = 0;
            int loopLimit66 = (rand()%10)/2 + 1;
            for(; loop66 < loopLimit66; loop66++) {
               int scalar8 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop67 = 0;
               int loopLimit67 = (rand()%10)/3 + 1;
               for(; loop67 < loopLimit67; loop67++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop68 = 0;
               int loopLimit68 = (rand()%10)/3 + 1;
               for(; loop68 < loopLimit68; loop68++) {
                  func21();
               }
            }
         }
         int scalar8 = 1;
         int scalar9 = 1;
         printf("DELETE!\n");
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         func19();
         if(PATH0 & -2147483648) {
            int scalar10 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop69 = 0;
            int loopLimit69 = (rand()%10)/2 + 1;
            for(; loop69 < loopLimit69; loop69++) {
               if(PATH0 & -2147483648) {
               }
               else {
               }
            }
            int loop70 = 0;
            int loopLimit70 = (rand()%10)/2 + 1;
            for(; loop70 < loopLimit70; loop70++) {
               func21();
            }
         }
         else {
            if(PATH0 & -2147483648) {
            }
            else {
               int loop71 = 0;
               int loopLimit71 = (rand()%10)/2 + 1;
               for(; loop71 < loopLimit71; loop71++) {
               }
            }
            int scalar10 = 1;
            int scalar11 = 1;
            printf("DELETE!\n");
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            if(PATH0 & -2147483648) {
            }
            else {
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func10(const unsigned long PATH0) {
   int scalar4 = 1;
   func13(rng());
   if(PATH0 & 1) {
      func19();
   }
   else {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/2 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
      int loop11 = 0;
      int loopLimit11 = (rand()%10)/2 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         func21();
      }
      int scalar6 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      scalar4--;
      printf("DELETE!\n");
   }
   func17(rng());
   scalar4++;
   scalar4++;
   if(PATH0 & 4) {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if(PATH0 & 8) {
            func19();
         }
         else {
            if(PATH0 & 16) {
            }
            else {
               int scalar6 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func20();
         }
      }
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         func18(rng());
      }
   }
   else {
      int loop17 = 0;
      int loopLimit17 = (rand()%10)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop18 = 0;
         int loopLimit18 = (rand()%10)/3 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            if(PATH0 & 32) {
               func19();
            }
            else {
               if(PATH0 & 64) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func20();
            }
         }
         int loop19 = 0;
         int loopLimit19 = (rand()%10)/3 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            func18(rng());
         }
      }
   }
   int scalar5 = 1;
   int scalar6 = 1;
   printf("DELETE!\n");
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   func16(rng());
   if(PATH0 & 128) {
   }
   else {
      int scalar7 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      scalar7--;
      printf("DELETE!\n");
   }
   func20();
   if(PATH0 & 256) {
      int scalar7 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop20 = 0;
      int loopLimit20 = (rand()%10)/2 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         if(PATH0 & 512) {
            func19();
         }
         else {
            if(PATH0 & 1024) {
            }
            else {
               int scalar8 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar6--;
               printf("DELETE!\n");
            }
            func20();
         }
      }
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         func18(rng());
      }
   }
   else {
      if(PATH0 & 2048) {
         int scalar7 = 1;
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop22 = 0;
         int loopLimit22 = (rand()%10)/2 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            if(PATH0 & 4096) {
            }
            else {
            }
         }
         int loop23 = 0;
         int loopLimit23 = (rand()%10)/2 + 1;
         for(; loop23 < loopLimit23; loop23++) {
            func21();
         }
      }
      else {
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            int scalar7 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop25 = 0;
            int loopLimit25 = (rand()%10)/3 + 1;
            for(; loop25 < loopLimit25; loop25++) {
               if(PATH0 & 8192) {
               }
               else {
               }
            }
            int loop26 = 0;
            int loopLimit26 = (rand()%10)/3 + 1;
            for(; loop26 < loopLimit26; loop26++) {
               func21();
            }
         }
      }
      int scalar7 = 1;
      int scalar8 = 1;
      printf("DELETE!\n");
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      func19();
      if(PATH0 & 16384) {
         int scalar9 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop27 = 0;
         int loopLimit27 = (rand()%10)/2 + 1;
         for(; loop27 < loopLimit27; loop27++) {
            if(PATH0 & 32768) {
            }
            else {
            }
         }
         int loop28 = 0;
         int loopLimit28 = (rand()%10)/2 + 1;
         for(; loop28 < loopLimit28; loop28++) {
            func21();
         }
      }
      else {
         if(PATH0 & 65536) {
         }
         else {
            int loop29 = 0;
            int loopLimit29 = (rand()%10)/2 + 1;
            for(; loop29 < loopLimit29; loop29++) {
            }
         }
         int scalar9 = 1;
         int scalar10 = 1;
         printf("DELETE!\n");
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 131072) {
         }
         else {
         }
      }
   }
   printf("DELETE!\n");
}

void func13(const unsigned long PATH0) {
   int scalar5 = 1;
   func16(rng());
   if(PATH0 & 1) {
   }
   else {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      scalar5--;
      printf("DELETE!\n");
   }
   func20();
   scalar5++;
   scalar5++;
   if(PATH0 & 2) {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/2 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         if(PATH0 & 4) {
         }
         else {
         }
      }
      int loop3 = 0;
      int loopLimit3 = (rand()%10)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         func21();
      }
   }
   else {
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         int scalar6 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop5 = 0;
         int loopLimit5 = (rand()%10)/3 + 1;
         for(; loop5 < loopLimit5; loop5++) {
            if(PATH0 & 8) {
            }
            else {
            }
         }
         int loop6 = 0;
         int loopLimit6 = (rand()%10)/3 + 1;
         for(; loop6 < loopLimit6; loop6++) {
            func21();
         }
      }
   }
   int scalar6 = 1;
   int scalar7 = 1;
   printf("DELETE!\n");
   if (scalar6 == 0) {
      printf("IS 0!");
   }
   func19();
   if(PATH0 & 16) {
      int scalar8 = 1;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/2 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         if(PATH0 & 32) {
         }
         else {
         }
      }
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         func21();
      }
   }
   else {
      if(PATH0 & 64) {
      }
      else {
         int loop9 = 0;
         int loopLimit9 = (rand()%10)/2 + 1;
         for(; loop9 < loopLimit9; loop9++) {
         }
      }
      int scalar8 = 1;
      int scalar9 = 1;
      printf("DELETE!\n");
      if (scalar9 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 128) {
      }
      else {
      }
   }
   printf("DELETE!\n");
}

void func16(const unsigned long PATH0) {
   int scalar6 = 1;
   func19();
   scalar6++;
   scalar6++;
   if(PATH0 & 1) {
   }
   else {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
      }
   }
   int scalar7 = 1;
   int scalar8 = 1;
   printf("DELETE!\n");
   if (scalar8 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
   printf("DELETE!\n");
}

void func19() {
   int scalar7 = 1;
   scalar7++;
   scalar7++;
   printf("DELETE!\n");
}

void func20() {
}

void func21() {
}

void func17(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
      }
   }
   int scalar5 = 1;
   int scalar6 = 1;
   printf("DELETE!\n");
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
}

void func18(const unsigned long PATH0) {
   int scalar6 = 1;
   if (scalar6 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop15 = 0;
   int loopLimit15 = (rand()%10)/3 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      if(PATH0 & 1) {
      }
      else {
      }
   }
   int loop16 = 0;
   int loopLimit16 = (rand()%10)/3 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      func21();
   }
}

void func14(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop32 = 0;
      int loopLimit32 = (rand()%10)/2 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
      int loop33 = 0;
      int loopLimit33 = (rand()%10)/2 + 1;
      for(; loop33 < loopLimit33; loop33++) {
         func21();
      }
   }
   else {
      int loop34 = 0;
      int loopLimit34 = (rand()%10)/2 + 1;
      for(; loop34 < loopLimit34; loop34++) {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop35 = 0;
         int loopLimit35 = (rand()%10)/3 + 1;
         for(; loop35 < loopLimit35; loop35++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
         int loop36 = 0;
         int loopLimit36 = (rand()%10)/3 + 1;
         for(; loop36 < loopLimit36; loop36++) {
            func21();
         }
      }
   }
   int scalar4 = 1;
   int scalar5 = 1;
   printf("DELETE!\n");
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   func19();
   if(PATH0 & 8) {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop37 = 0;
      int loopLimit37 = (rand()%10)/2 + 1;
      for(; loop37 < loopLimit37; loop37++) {
         if(PATH0 & 16) {
         }
         else {
         }
      }
      int loop38 = 0;
      int loopLimit38 = (rand()%10)/2 + 1;
      for(; loop38 < loopLimit38; loop38++) {
         func21();
      }
   }
   else {
      if(PATH0 & 32) {
      }
      else {
         int loop39 = 0;
         int loopLimit39 = (rand()%10)/2 + 1;
         for(; loop39 < loopLimit39; loop39++) {
         }
      }
      int scalar6 = 1;
      int scalar7 = 1;
      printf("DELETE!\n");
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 64) {
      }
      else {
      }
   }
}

void func15(const unsigned long PATH0) {
   int scalar5 = 1;
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop44 = 0;
   int loopLimit44 = (rand()%10)/3 + 1;
   for(; loop44 < loopLimit44; loop44++) {
      if(PATH0 & 1) {
         func19();
      }
      else {
         if(PATH0 & 2) {
         }
         else {
            int scalar6 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar6--;
            printf("DELETE!\n");
         }
         func20();
      }
   }
   int loop45 = 0;
   int loopLimit45 = (rand()%10)/3 + 1;
   for(; loop45 < loopLimit45; loop45++) {
      func18(rng());
   }
}

void func11(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop78 = 0;
      int loopLimit78 = (rand()%10)/2 + 1;
      for(; loop78 < loopLimit78; loop78++) {
         if(PATH0 & 2) {
            func19();
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
            func20();
         }
      }
      int loop79 = 0;
      int loopLimit79 = (rand()%10)/2 + 1;
      for(; loop79 < loopLimit79; loop79++) {
         func18(rng());
      }
   }
   else {
      int loop80 = 0;
      int loopLimit80 = (rand()%10)/2 + 1;
      for(; loop80 < loopLimit80; loop80++) {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop81 = 0;
         int loopLimit81 = (rand()%10)/3 + 1;
         for(; loop81 < loopLimit81; loop81++) {
            if(PATH0 & 8) {
               func19();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20();
            }
         }
         int loop82 = 0;
         int loopLimit82 = (rand()%10)/3 + 1;
         for(; loop82 < loopLimit82; loop82++) {
            func18(rng());
         }
      }
   }
   int scalar3 = 1;
   int scalar4 = 1;
   printf("DELETE!\n");
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   func16(rng());
   if(PATH0 & 32) {
   }
   else {
      int scalar5 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar5--;
      printf("DELETE!\n");
   }
   func20();
   if(PATH0 & 64) {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop83 = 0;
      int loopLimit83 = (rand()%10)/2 + 1;
      for(; loop83 < loopLimit83; loop83++) {
         if(PATH0 & 128) {
            func19();
         }
         else {
            if(PATH0 & 256) {
            }
            else {
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func20();
         }
      }
      int loop84 = 0;
      int loopLimit84 = (rand()%10)/2 + 1;
      for(; loop84 < loopLimit84; loop84++) {
         func18(rng());
      }
   }
   else {
      if(PATH0 & 512) {
         int scalar5 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop85 = 0;
         int loopLimit85 = (rand()%10)/2 + 1;
         for(; loop85 < loopLimit85; loop85++) {
            if(PATH0 & 1024) {
            }
            else {
            }
         }
         int loop86 = 0;
         int loopLimit86 = (rand()%10)/2 + 1;
         for(; loop86 < loopLimit86; loop86++) {
            func21();
         }
      }
      else {
         int loop87 = 0;
         int loopLimit87 = (rand()%10)/2 + 1;
         for(; loop87 < loopLimit87; loop87++) {
            int scalar5 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop88 = 0;
            int loopLimit88 = (rand()%10)/3 + 1;
            for(; loop88 < loopLimit88; loop88++) {
               if(PATH0 & 2048) {
               }
               else {
               }
            }
            int loop89 = 0;
            int loopLimit89 = (rand()%10)/3 + 1;
            for(; loop89 < loopLimit89; loop89++) {
               func21();
            }
         }
      }
      int scalar5 = 1;
      int scalar6 = 1;
      printf("DELETE!\n");
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      func19();
      if(PATH0 & 4096) {
         int scalar7 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop90 = 0;
         int loopLimit90 = (rand()%10)/2 + 1;
         for(; loop90 < loopLimit90; loop90++) {
            if(PATH0 & 8192) {
            }
            else {
            }
         }
         int loop91 = 0;
         int loopLimit91 = (rand()%10)/2 + 1;
         for(; loop91 < loopLimit91; loop91++) {
            func21();
         }
      }
      else {
         if(PATH0 & 16384) {
         }
         else {
            int loop92 = 0;
            int loopLimit92 = (rand()%10)/2 + 1;
            for(; loop92 < loopLimit92; loop92++) {
            }
         }
         int scalar7 = 1;
         int scalar8 = 1;
         printf("DELETE!\n");
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 32768) {
         }
         else {
         }
      }
   }
}

void func12(const unsigned long PATH0) {
   int scalar4 = 1;
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop99 = 0;
   int loopLimit99 = (rand()%10)/3 + 1;
   for(; loop99 < loopLimit99; loop99++) {
      if(PATH0 & 1) {
         func16(rng());
         if(PATH0 & 2) {
         }
         else {
            int scalar5 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            printf("DELETE!\n");
         }
         func20();
      }
      else {
         if(PATH0 & 4) {
            func19();
         }
         else {
            int scalar5 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop100 = 0;
            int loopLimit100 = (rand()%10)/4 + 1;
            for(; loop100 < loopLimit100; loop100++) {
               if(PATH0 & 8) {
               }
               else {
               }
            }
            int loop101 = 0;
            int loopLimit101 = (rand()%10)/4 + 1;
            for(; loop101 < loopLimit101; loop101++) {
               func21();
            }
            int scalar6 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            printf("DELETE!\n");
         }
         func17(rng());
      }
   }
   int loop102 = 0;
   int loopLimit102 = (rand()%10)/3 + 1;
   for(; loop102 < loopLimit102; loop102++) {
      func15(rng());
   }
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop156 = 0;
      int loopLimit156 = (rand()%10)/2 + 1;
      for(; loop156 < loopLimit156; loop156++) {
         if(PATH0 & 2) {
            func16(rng());
            if(PATH0 & 4) {
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func20();
         }
         else {
            if(PATH0 & 8) {
               func19();
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop157 = 0;
               int loopLimit157 = (rand()%10)/3 + 1;
               for(; loop157 < loopLimit157; loop157++) {
                  if(PATH0 & 16) {
                  }
                  else {
                  }
               }
               int loop158 = 0;
               int loopLimit158 = (rand()%10)/3 + 1;
               for(; loop158 < loopLimit158; loop158++) {
                  func21();
               }
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop159 = 0;
      int loopLimit159 = (rand()%10)/2 + 1;
      for(; loop159 < loopLimit159; loop159++) {
         func15(rng());
      }
   }
   else {
      int loop160 = 0;
      int loopLimit160 = (rand()%10)/2 + 1;
      for(; loop160 < loopLimit160; loop160++) {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop161 = 0;
         int loopLimit161 = (rand()%10)/3 + 1;
         for(; loop161 < loopLimit161; loop161++) {
            if(PATH0 & 32) {
               func16(rng());
               if(PATH0 & 64) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               if(PATH0 & 128) {
                  func19();
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop162 = 0;
                  int loopLimit162 = (rand()%10)/4 + 1;
                  for(; loop162 < loopLimit162; loop162++) {
                     if(PATH0 & 256) {
                     }
                     else {
                     }
                  }
                  int loop163 = 0;
                  int loopLimit163 = (rand()%10)/4 + 1;
                  for(; loop163 < loopLimit163; loop163++) {
                     func21();
                  }
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop164 = 0;
         int loopLimit164 = (rand()%10)/3 + 1;
         for(; loop164 < loopLimit164; loop164++) {
            func15(rng());
         }
      }
   }
   int scalar2 = 1;
   int scalar3 = 1;
   printf("DELETE!\n");
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   func13(rng());
   if(PATH0 & 512) {
      func19();
   }
   else {
      int scalar4 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop165 = 0;
      int loopLimit165 = (rand()%10)/2 + 1;
      for(; loop165 < loopLimit165; loop165++) {
         if(PATH0 & 1024) {
         }
         else {
         }
      }
      int loop166 = 0;
      int loopLimit166 = (rand()%10)/2 + 1;
      for(; loop166 < loopLimit166; loop166++) {
         func21();
      }
      int scalar5 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      printf("DELETE!\n");
   }
   func17(rng());
   if(PATH0 & 2048) {
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop167 = 0;
      int loopLimit167 = (rand()%10)/2 + 1;
      for(; loop167 < loopLimit167; loop167++) {
         if(PATH0 & 4096) {
            func16(rng());
            if(PATH0 & 8192) {
            }
            else {
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func20();
         }
         else {
            if(PATH0 & 16384) {
               func19();
            }
            else {
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop168 = 0;
               int loopLimit168 = (rand()%10)/3 + 1;
               for(; loop168 < loopLimit168; loop168++) {
                  if(PATH0 & 32768) {
                  }
                  else {
                  }
               }
               int loop169 = 0;
               int loopLimit169 = (rand()%10)/3 + 1;
               for(; loop169 < loopLimit169; loop169++) {
                  func21();
               }
               int scalar6 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop170 = 0;
      int loopLimit170 = (rand()%10)/2 + 1;
      for(; loop170 < loopLimit170; loop170++) {
         func15(rng());
      }
   }
   else {
      if(PATH0 & 65536) {
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop171 = 0;
         int loopLimit171 = (rand()%10)/2 + 1;
         for(; loop171 < loopLimit171; loop171++) {
            if(PATH0 & 131072) {
               func19();
            }
            else {
               if(PATH0 & 262144) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func20();
            }
         }
         int loop172 = 0;
         int loopLimit172 = (rand()%10)/2 + 1;
         for(; loop172 < loopLimit172; loop172++) {
            func18(rng());
         }
      }
      else {
         int loop173 = 0;
         int loopLimit173 = (rand()%10)/2 + 1;
         for(; loop173 < loopLimit173; loop173++) {
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop174 = 0;
            int loopLimit174 = (rand()%10)/3 + 1;
            for(; loop174 < loopLimit174; loop174++) {
               if(PATH0 & 524288) {
                  func19();
               }
               else {
                  if(PATH0 & 1048576) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
            }
            int loop175 = 0;
            int loopLimit175 = (rand()%10)/3 + 1;
            for(; loop175 < loopLimit175; loop175++) {
               func18(rng());
            }
         }
      }
      int scalar4 = 1;
      int scalar5 = 1;
      printf("DELETE!\n");
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func16(rng());
      if(PATH0 & 2097152) {
      }
      else {
         int scalar6 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func20();
      if(PATH0 & 4194304) {
         int scalar6 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop176 = 0;
         int loopLimit176 = (rand()%10)/2 + 1;
         for(; loop176 < loopLimit176; loop176++) {
            if(PATH0 & 8388608) {
               func19();
            }
            else {
               if(PATH0 & 16777216) {
               }
               else {
                  int scalar7 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func20();
            }
         }
         int loop177 = 0;
         int loopLimit177 = (rand()%10)/2 + 1;
         for(; loop177 < loopLimit177; loop177++) {
            func18(rng());
         }
      }
      else {
         if(PATH0 & 33554432) {
            int scalar6 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop178 = 0;
            int loopLimit178 = (rand()%10)/2 + 1;
            for(; loop178 < loopLimit178; loop178++) {
               if(PATH0 & 67108864) {
               }
               else {
               }
            }
            int loop179 = 0;
            int loopLimit179 = (rand()%10)/2 + 1;
            for(; loop179 < loopLimit179; loop179++) {
               func21();
            }
         }
         else {
            int loop180 = 0;
            int loopLimit180 = (rand()%10)/2 + 1;
            for(; loop180 < loopLimit180; loop180++) {
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop181 = 0;
               int loopLimit181 = (rand()%10)/3 + 1;
               for(; loop181 < loopLimit181; loop181++) {
                  if(PATH0 & 134217728) {
                  }
                  else {
                  }
               }
               int loop182 = 0;
               int loopLimit182 = (rand()%10)/3 + 1;
               for(; loop182 < loopLimit182; loop182++) {
                  func21();
               }
            }
         }
         int scalar6 = 1;
         int scalar7 = 1;
         printf("DELETE!\n");
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func19();
         if(PATH0 & 268435456) {
            int scalar8 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop183 = 0;
            int loopLimit183 = (rand()%10)/2 + 1;
            for(; loop183 < loopLimit183; loop183++) {
               if(PATH0 & 536870912) {
               }
               else {
               }
            }
            int loop184 = 0;
            int loopLimit184 = (rand()%10)/2 + 1;
            for(; loop184 < loopLimit184; loop184++) {
               func21();
            }
         }
         else {
            if(PATH0 & 1073741824) {
            }
            else {
               int loop185 = 0;
               int loopLimit185 = (rand()%10)/2 + 1;
               for(; loop185 < loopLimit185; loop185++) {
               }
            }
            int scalar8 = 1;
            int scalar9 = 1;
            printf("DELETE!\n");
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            if(PATH0 & -2147483648) {
            }
            else {
            }
         }
      }
   }
}

void func9(const unsigned long PATH0) {
   int scalar3 = 1;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop196 = 0;
   int loopLimit196 = (rand()%10)/3 + 1;
   for(; loop196 < loopLimit196; loop196++) {
      if(PATH0 & 1) {
         func13(rng());
         if(PATH0 & 2) {
            func19();
         }
         else {
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop197 = 0;
            int loopLimit197 = (rand()%10)/4 + 1;
            for(; loop197 < loopLimit197; loop197++) {
               if(PATH0 & 4) {
               }
               else {
               }
            }
            int loop198 = 0;
            int loopLimit198 = (rand()%10)/4 + 1;
            for(; loop198 < loopLimit198; loop198++) {
               func21();
            }
            int scalar5 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func17(rng());
      }
      else {
         if(PATH0 & 8) {
            func16(rng());
            if(PATH0 & 16) {
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func20();
         }
         else {
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop199 = 0;
            int loopLimit199 = (rand()%10)/4 + 1;
            for(; loop199 < loopLimit199; loop199++) {
               if(PATH0 & 32) {
                  func19();
               }
               else {
                  if(PATH0 & 64) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
            }
            int loop200 = 0;
            int loopLimit200 = (rand()%10)/4 + 1;
            for(; loop200 < loopLimit200; loop200++) {
               func18(rng());
            }
            int scalar5 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func14(rng());
      }
   }
   int loop201 = 0;
   int loopLimit201 = (rand()%10)/3 + 1;
   for(; loop201 < loopLimit201; loop201++) {
      func12(rng());
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop296 = 0;
      int loopLimit296 = (rand()%10)/2 + 1;
      for(; loop296 < loopLimit296; loop296++) {
         if(PATH0 & 2) {
            func13(rng());
            if(PATH0 & 4) {
               func19();
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop297 = 0;
               int loopLimit297 = (rand()%10)/3 + 1;
               for(; loop297 < loopLimit297; loop297++) {
                  if(PATH0 & 8) {
                  }
                  else {
                  }
               }
               int loop298 = 0;
               int loopLimit298 = (rand()%10)/3 + 1;
               for(; loop298 < loopLimit298; loop298++) {
                  func21();
               }
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            if(PATH0 & 16) {
               func16(rng());
               if(PATH0 & 32) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop299 = 0;
               int loopLimit299 = (rand()%10)/3 + 1;
               for(; loop299 < loopLimit299; loop299++) {
                  if(PATH0 & 64) {
                     func19();
                  }
                  else {
                     if(PATH0 & 128) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop300 = 0;
               int loopLimit300 = (rand()%10)/3 + 1;
               for(; loop300 < loopLimit300; loop300++) {
                  func18(rng());
               }
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop301 = 0;
      int loopLimit301 = (rand()%10)/2 + 1;
      for(; loop301 < loopLimit301; loop301++) {
         func12(rng());
      }
   }
   else {
      int loop302 = 0;
      int loopLimit302 = (rand()%10)/2 + 1;
      for(; loop302 < loopLimit302; loop302++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop303 = 0;
         int loopLimit303 = (rand()%10)/3 + 1;
         for(; loop303 < loopLimit303; loop303++) {
            if(PATH0 & 256) {
               func13(rng());
               if(PATH0 & 512) {
                  func19();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop304 = 0;
                  int loopLimit304 = (rand()%10)/4 + 1;
                  for(; loop304 < loopLimit304; loop304++) {
                     if(PATH0 & 1024) {
                     }
                     else {
                     }
                  }
                  int loop305 = 0;
                  int loopLimit305 = (rand()%10)/4 + 1;
                  for(; loop305 < loopLimit305; loop305++) {
                     func21();
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH0 & 2048) {
                  func16(rng());
                  if(PATH0 & 4096) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop306 = 0;
                  int loopLimit306 = (rand()%10)/4 + 1;
                  for(; loop306 < loopLimit306; loop306++) {
                     if(PATH0 & 8192) {
                        func19();
                     }
                     else {
                        if(PATH0 & 16384) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop307 = 0;
                  int loopLimit307 = (rand()%10)/4 + 1;
                  for(; loop307 < loopLimit307; loop307++) {
                     func18(rng());
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop308 = 0;
         int loopLimit308 = (rand()%10)/3 + 1;
         for(; loop308 < loopLimit308; loop308++) {
            func12(rng());
         }
      }
   }
   int scalar1 = 1;
   int scalar2 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func10(rng());
   if(PATH0 & 32768) {
      func16(rng());
      if(PATH0 & 65536) {
      }
      else {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         printf("DELETE!\n");
      }
      func20();
   }
   else {
      int scalar3 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop309 = 0;
      int loopLimit309 = (rand()%10)/2 + 1;
      for(; loop309 < loopLimit309; loop309++) {
         if(PATH0 & 131072) {
            func19();
         }
         else {
            if(PATH0 & 262144) {
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func20();
         }
      }
      int loop310 = 0;
      int loopLimit310 = (rand()%10)/2 + 1;
      for(; loop310 < loopLimit310; loop310++) {
         func18(rng());
      }
      int scalar4 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      printf("DELETE!\n");
   }
   func14(rng());
   if(PATH0 & 524288) {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop311 = 0;
      int loopLimit311 = (rand()%10)/2 + 1;
      for(; loop311 < loopLimit311; loop311++) {
         if(PATH0 & 1048576) {
            func13(rng());
            if(PATH0 & 2097152) {
               func19();
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop312 = 0;
               int loopLimit312 = (rand()%10)/3 + 1;
               for(; loop312 < loopLimit312; loop312++) {
                  if(PATH0 & 4194304) {
                  }
                  else {
                  }
               }
               int loop313 = 0;
               int loopLimit313 = (rand()%10)/3 + 1;
               for(; loop313 < loopLimit313; loop313++) {
                  func21();
               }
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            if(PATH0 & 8388608) {
               func16(rng());
               if(PATH0 & 16777216) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar4 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop314 = 0;
               int loopLimit314 = (rand()%10)/3 + 1;
               for(; loop314 < loopLimit314; loop314++) {
                  if(PATH0 & 33554432) {
                     func19();
                  }
                  else {
                     if(PATH0 & 67108864) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop315 = 0;
               int loopLimit315 = (rand()%10)/3 + 1;
               for(; loop315 < loopLimit315; loop315++) {
                  func18(rng());
               }
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop316 = 0;
      int loopLimit316 = (rand()%10)/2 + 1;
      for(; loop316 < loopLimit316; loop316++) {
         func12(rng());
      }
   }
   else {
      if(PATH0 & 134217728) {
         int scalar3 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop317 = 0;
         int loopLimit317 = (rand()%10)/2 + 1;
         for(; loop317 < loopLimit317; loop317++) {
            if(PATH0 & 268435456) {
               func16(rng());
               if(PATH0 & 536870912) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               if(PATH0 & 1073741824) {
                  func19();
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop318 = 0;
                  int loopLimit318 = (rand()%10)/3 + 1;
                  for(; loop318 < loopLimit318; loop318++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop319 = 0;
                  int loopLimit319 = (rand()%10)/3 + 1;
                  for(; loop319 < loopLimit319; loop319++) {
                     func21();
                  }
                  int scalar5 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop320 = 0;
         int loopLimit320 = (rand()%10)/2 + 1;
         for(; loop320 < loopLimit320; loop320++) {
            func15(rng());
         }
      }
      else {
         int loop321 = 0;
         int loopLimit321 = (rand()%10)/2 + 1;
         for(; loop321 < loopLimit321; loop321++) {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop322 = 0;
            int loopLimit322 = (rand()%10)/3 + 1;
            for(; loop322 < loopLimit322; loop322++) {
               if(PATH0 & -2147483648) {
                  func16(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  if(PATH0 & -2147483648) {
                     func19();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop323 = 0;
                     int loopLimit323 = (rand()%10)/4 + 1;
                     for(; loop323 < loopLimit323; loop323++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop324 = 0;
                     int loopLimit324 = (rand()%10)/4 + 1;
                     for(; loop324 < loopLimit324; loop324++) {
                        func21();
                     }
                     int scalar5 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop325 = 0;
            int loopLimit325 = (rand()%10)/3 + 1;
            for(; loop325 < loopLimit325; loop325++) {
               func15(rng());
            }
         }
      }
      int scalar3 = 1;
      int scalar4 = 1;
      printf("DELETE!\n");
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func13(rng());
      if(PATH0 & -2147483648) {
         func19();
      }
      else {
         int scalar5 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop326 = 0;
         int loopLimit326 = (rand()%10)/2 + 1;
         for(; loop326 < loopLimit326; loop326++) {
            if(PATH0 & -2147483648) {
            }
            else {
            }
         }
         int loop327 = 0;
         int loopLimit327 = (rand()%10)/2 + 1;
         for(; loop327 < loopLimit327; loop327++) {
            func21();
         }
         int scalar6 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func17(rng());
      if(PATH0 & -2147483648) {
         int scalar5 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop328 = 0;
         int loopLimit328 = (rand()%10)/2 + 1;
         for(; loop328 < loopLimit328; loop328++) {
            if(PATH0 & -2147483648) {
               func16(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               if(PATH0 & -2147483648) {
                  func19();
               }
               else {
                  int scalar6 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop329 = 0;
                  int loopLimit329 = (rand()%10)/3 + 1;
                  for(; loop329 < loopLimit329; loop329++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop330 = 0;
                  int loopLimit330 = (rand()%10)/3 + 1;
                  for(; loop330 < loopLimit330; loop330++) {
                     func21();
                  }
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
         }
         int loop331 = 0;
         int loopLimit331 = (rand()%10)/2 + 1;
         for(; loop331 < loopLimit331; loop331++) {
            func15(rng());
         }
      }
      else {
         if(PATH0 & -2147483648) {
            int scalar5 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop332 = 0;
            int loopLimit332 = (rand()%10)/2 + 1;
            for(; loop332 < loopLimit332; loop332++) {
               if(PATH0 & -2147483648) {
                  func19();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
            }
            int loop333 = 0;
            int loopLimit333 = (rand()%10)/2 + 1;
            for(; loop333 < loopLimit333; loop333++) {
               func18(rng());
            }
         }
         else {
            int loop334 = 0;
            int loopLimit334 = (rand()%10)/2 + 1;
            for(; loop334 < loopLimit334; loop334++) {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop335 = 0;
               int loopLimit335 = (rand()%10)/3 + 1;
               for(; loop335 < loopLimit335; loop335++) {
                  if(PATH0 & -2147483648) {
                     func19();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop336 = 0;
               int loopLimit336 = (rand()%10)/3 + 1;
               for(; loop336 < loopLimit336; loop336++) {
                  func18(rng());
               }
            }
         }
         int scalar5 = 1;
         int scalar6 = 1;
         printf("DELETE!\n");
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func16(rng());
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar7 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func20();
         if(PATH0 & -2147483648) {
            int scalar7 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop337 = 0;
            int loopLimit337 = (rand()%10)/2 + 1;
            for(; loop337 < loopLimit337; loop337++) {
               if(PATH0 & -2147483648) {
                  func19();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
            }
            int loop338 = 0;
            int loopLimit338 = (rand()%10)/2 + 1;
            for(; loop338 < loopLimit338; loop338++) {
               func18(rng());
            }
         }
         else {
            if(PATH0 & -2147483648) {
               int scalar7 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop339 = 0;
               int loopLimit339 = (rand()%10)/2 + 1;
               for(; loop339 < loopLimit339; loop339++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop340 = 0;
               int loopLimit340 = (rand()%10)/2 + 1;
               for(; loop340 < loopLimit340; loop340++) {
                  func21();
               }
            }
            else {
               int loop341 = 0;
               int loopLimit341 = (rand()%10)/2 + 1;
               for(; loop341 < loopLimit341; loop341++) {
                  int scalar7 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop342 = 0;
                  int loopLimit342 = (rand()%10)/3 + 1;
                  for(; loop342 < loopLimit342; loop342++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop343 = 0;
                  int loopLimit343 = (rand()%10)/3 + 1;
                  for(; loop343 < loopLimit343; loop343++) {
                     func21();
                  }
               }
            }
            int scalar7 = 1;
            int scalar8 = 1;
            printf("DELETE!\n");
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            func19();
            if(PATH0 & -2147483648) {
               int scalar9 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop344 = 0;
               int loopLimit344 = (rand()%10)/2 + 1;
               for(; loop344 < loopLimit344; loop344++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop345 = 0;
               int loopLimit345 = (rand()%10)/2 + 1;
               for(; loop345 < loopLimit345; loop345++) {
                  func21();
               }
            }
            else {
               if(PATH0 & -2147483648) {
               }
               else {
                  int loop346 = 0;
                  int loopLimit346 = (rand()%10)/2 + 1;
                  for(; loop346 < loopLimit346; loop346++) {
                  }
               }
               int scalar9 = 1;
               int scalar10 = 1;
               printf("DELETE!\n");
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               if(PATH0 & -2147483648) {
               }
               else {
               }
            }
         }
      }
   }
}

void func6(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop371 = 0;
   int loopLimit371 = (rand()%10)/3 + 1;
   for(; loop371 < loopLimit371; loop371++) {
      if(PATH0 & 1) {
         func10(rng());
         if(PATH0 & 2) {
            func16(rng());
            if(PATH0 & 4) {
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func20();
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop372 = 0;
            int loopLimit372 = (rand()%10)/4 + 1;
            for(; loop372 < loopLimit372; loop372++) {
               if(PATH0 & 8) {
                  func19();
               }
               else {
                  if(PATH0 & 16) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
            }
            int loop373 = 0;
            int loopLimit373 = (rand()%10)/4 + 1;
            for(; loop373 < loopLimit373; loop373++) {
               func18(rng());
            }
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func14(rng());
      }
      else {
         if(PATH0 & 32) {
            func13(rng());
            if(PATH0 & 64) {
               func19();
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop374 = 0;
               int loopLimit374 = (rand()%10)/4 + 1;
               for(; loop374 < loopLimit374; loop374++) {
                  if(PATH0 & 128) {
                  }
                  else {
                  }
               }
               int loop375 = 0;
               int loopLimit375 = (rand()%10)/4 + 1;
               for(; loop375 < loopLimit375; loop375++) {
                  func21();
               }
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            int scalar3 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop376 = 0;
            int loopLimit376 = (rand()%10)/4 + 1;
            for(; loop376 < loopLimit376; loop376++) {
               if(PATH0 & 256) {
                  func16(rng());
                  if(PATH0 & 512) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  if(PATH0 & 1024) {
                     func19();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop377 = 0;
                     int loopLimit377 = (rand()%10)/5 + 1;
                     for(; loop377 < loopLimit377; loop377++) {
                        if(PATH0 & 2048) {
                        }
                        else {
                        }
                     }
                     int loop378 = 0;
                     int loopLimit378 = (rand()%10)/5 + 1;
                     for(; loop378 < loopLimit378; loop378++) {
                        func21();
                     }
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop379 = 0;
            int loopLimit379 = (rand()%10)/4 + 1;
            for(; loop379 < loopLimit379; loop379++) {
               func15(rng());
            }
            int scalar4 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func11(rng());
      }
   }
   int loop380 = 0;
   int loopLimit380 = (rand()%10)/3 + 1;
   for(; loop380 < loopLimit380; loop380++) {
      func9(rng());
   }
}

void func2(const unsigned long PATH0, const unsigned long PATH1) {
   if(PATH0 & 1) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop381 = 0;
      int loopLimit381 = (rand()%10)/2 + 1;
      for(; loop381 < loopLimit381; loop381++) {
         if(PATH0 & 2) {
            func10(rng());
            if(PATH0 & 4) {
               func16(rng());
               if(PATH0 & 8) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop382 = 0;
               int loopLimit382 = (rand()%10)/3 + 1;
               for(; loop382 < loopLimit382; loop382++) {
                  if(PATH0 & 16) {
                     func19();
                  }
                  else {
                     if(PATH0 & 32) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop383 = 0;
               int loopLimit383 = (rand()%10)/3 + 1;
               for(; loop383 < loopLimit383; loop383++) {
                  func18(rng());
               }
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            if(PATH0 & 64) {
               func13(rng());
               if(PATH0 & 128) {
                  func19();
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop384 = 0;
                  int loopLimit384 = (rand()%10)/3 + 1;
                  for(; loop384 < loopLimit384; loop384++) {
                     if(PATH0 & 256) {
                     }
                     else {
                     }
                  }
                  int loop385 = 0;
                  int loopLimit385 = (rand()%10)/3 + 1;
                  for(; loop385 < loopLimit385; loop385++) {
                     func21();
                  }
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop386 = 0;
               int loopLimit386 = (rand()%10)/3 + 1;
               for(; loop386 < loopLimit386; loop386++) {
                  if(PATH0 & 512) {
                     func16(rng());
                     if(PATH0 & 1024) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     if(PATH0 & 2048) {
                        func19();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop387 = 0;
                        int loopLimit387 = (rand()%10)/4 + 1;
                        for(; loop387 < loopLimit387; loop387++) {
                           if(PATH0 & 4096) {
                           }
                           else {
                           }
                        }
                        int loop388 = 0;
                        int loopLimit388 = (rand()%10)/4 + 1;
                        for(; loop388 < loopLimit388; loop388++) {
                           func21();
                        }
                        int scalar4 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop389 = 0;
               int loopLimit389 = (rand()%10)/3 + 1;
               for(; loop389 < loopLimit389; loop389++) {
                  func15(rng());
               }
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop390 = 0;
      int loopLimit390 = (rand()%10)/2 + 1;
      for(; loop390 < loopLimit390; loop390++) {
         func9(rng());
      }
   }
   else {
      int loop391 = 0;
      int loopLimit391 = (rand()%10)/2 + 1;
      for(; loop391 < loopLimit391; loop391++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop392 = 0;
         int loopLimit392 = (rand()%10)/3 + 1;
         for(; loop392 < loopLimit392; loop392++) {
            if(PATH0 & 8192) {
               func10(rng());
               if(PATH0 & 16384) {
                  func16(rng());
                  if(PATH0 & 32768) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop393 = 0;
                  int loopLimit393 = (rand()%10)/4 + 1;
                  for(; loop393 < loopLimit393; loop393++) {
                     if(PATH0 & 65536) {
                        func19();
                     }
                     else {
                        if(PATH0 & 131072) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop394 = 0;
                  int loopLimit394 = (rand()%10)/4 + 1;
                  for(; loop394 < loopLimit394; loop394++) {
                     func18(rng());
                  }
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
            else {
               if(PATH0 & 262144) {
                  func13(rng());
                  if(PATH0 & 524288) {
                     func19();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop395 = 0;
                     int loopLimit395 = (rand()%10)/4 + 1;
                     for(; loop395 < loopLimit395; loop395++) {
                        if(PATH0 & 1048576) {
                        }
                        else {
                        }
                     }
                     int loop396 = 0;
                     int loopLimit396 = (rand()%10)/4 + 1;
                     for(; loop396 < loopLimit396; loop396++) {
                        func21();
                     }
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop397 = 0;
                  int loopLimit397 = (rand()%10)/4 + 1;
                  for(; loop397 < loopLimit397; loop397++) {
                     if(PATH0 & 2097152) {
                        func16(rng());
                        if(PATH0 & 4194304) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                     else {
                        if(PATH0 & 8388608) {
                           func19();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop398 = 0;
                           int loopLimit398 = (rand()%10)/5 + 1;
                           for(; loop398 < loopLimit398; loop398++) {
                              if(PATH0 & 16777216) {
                              }
                              else {
                              }
                           }
                           int loop399 = 0;
                           int loopLimit399 = (rand()%10)/5 + 1;
                           for(; loop399 < loopLimit399; loop399++) {
                              func21();
                           }
                           int scalar4 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func17(rng());
                     }
                  }
                  int loop400 = 0;
                  int loopLimit400 = (rand()%10)/4 + 1;
                  for(; loop400 < loopLimit400; loop400++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
         }
         int loop401 = 0;
         int loopLimit401 = (rand()%10)/3 + 1;
         for(; loop401 < loopLimit401; loop401++) {
            func9(rng());
         }
      }
   }
   int scalar1 = 1;
   int scalar2 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func7(rng());
   if(PATH0 & 33554432) {
      func13(rng());
      if(PATH0 & 67108864) {
         func19();
      }
      else {
         int scalar3 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop402 = 0;
         int loopLimit402 = (rand()%10)/2 + 1;
         for(; loop402 < loopLimit402; loop402++) {
            if(PATH0 & 134217728) {
            }
            else {
            }
         }
         int loop403 = 0;
         int loopLimit403 = (rand()%10)/2 + 1;
         for(; loop403 < loopLimit403; loop403++) {
            func21();
         }
         int scalar4 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func17(rng());
   }
   else {
      int scalar3 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop404 = 0;
      int loopLimit404 = (rand()%10)/2 + 1;
      for(; loop404 < loopLimit404; loop404++) {
         if(PATH0 & 268435456) {
            func16(rng());
            if(PATH0 & 536870912) {
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func20();
         }
         else {
            if(PATH0 & 1073741824) {
               func19();
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop405 = 0;
               int loopLimit405 = (rand()%10)/3 + 1;
               for(; loop405 < loopLimit405; loop405++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop406 = 0;
               int loopLimit406 = (rand()%10)/3 + 1;
               for(; loop406 < loopLimit406; loop406++) {
                  func21();
               }
               int scalar5 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
      }
      int loop407 = 0;
      int loopLimit407 = (rand()%10)/2 + 1;
      for(; loop407 < loopLimit407; loop407++) {
         func15(rng());
      }
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      printf("DELETE!\n");
   }
   func11(rng());
   if(PATH0 & -2147483648) {
      int scalar3 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop408 = 0;
      int loopLimit408 = (rand()%10)/2 + 1;
      for(; loop408 < loopLimit408; loop408++) {
         if(PATH0 & -2147483648) {
            func10(rng());
            if(PATH0 & -2147483648) {
               func16(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop409 = 0;
               int loopLimit409 = (rand()%10)/3 + 1;
               for(; loop409 < loopLimit409; loop409++) {
                  if(PATH0 & -2147483648) {
                     func19();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop410 = 0;
               int loopLimit410 = (rand()%10)/3 + 1;
               for(; loop410 < loopLimit410; loop410++) {
                  func18(rng());
               }
               int scalar5 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            if(PATH0 & -2147483648) {
               func13(rng());
               if(PATH0 & -2147483648) {
                  func19();
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop411 = 0;
                  int loopLimit411 = (rand()%10)/3 + 1;
                  for(; loop411 < loopLimit411; loop411++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop412 = 0;
                  int loopLimit412 = (rand()%10)/3 + 1;
                  for(; loop412 < loopLimit412; loop412++) {
                     func21();
                  }
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               int scalar4 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop413 = 0;
               int loopLimit413 = (rand()%10)/3 + 1;
               for(; loop413 < loopLimit413; loop413++) {
                  if(PATH0 & -2147483648) {
                     func16(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                        func19();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop414 = 0;
                        int loopLimit414 = (rand()%10)/4 + 1;
                        for(; loop414 < loopLimit414; loop414++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop415 = 0;
                        int loopLimit415 = (rand()%10)/4 + 1;
                        for(; loop415 < loopLimit415; loop415++) {
                           func21();
                        }
                        int scalar6 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop416 = 0;
               int loopLimit416 = (rand()%10)/3 + 1;
               for(; loop416 < loopLimit416; loop416++) {
                  func15(rng());
               }
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop417 = 0;
      int loopLimit417 = (rand()%10)/2 + 1;
      for(; loop417 < loopLimit417; loop417++) {
         func9(rng());
      }
   }
   else {
      if(PATH0 & -2147483648) {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop418 = 0;
         int loopLimit418 = (rand()%10)/2 + 1;
         for(; loop418 < loopLimit418; loop418++) {
            if(PATH0 & -2147483648) {
               func13(rng());
               if(PATH0 & -2147483648) {
                  func19();
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop419 = 0;
                  int loopLimit419 = (rand()%10)/3 + 1;
                  for(; loop419 < loopLimit419; loop419++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop420 = 0;
                  int loopLimit420 = (rand()%10)/3 + 1;
                  for(; loop420 < loopLimit420; loop420++) {
                     func21();
                  }
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH0 & -2147483648) {
                  func16(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  int scalar4 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop421 = 0;
                  int loopLimit421 = (rand()%10)/3 + 1;
                  for(; loop421 < loopLimit421; loop421++) {
                     if(PATH0 & -2147483648) {
                        func19();
                     }
                     else {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar5--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop422 = 0;
                  int loopLimit422 = (rand()%10)/3 + 1;
                  for(; loop422 < loopLimit422; loop422++) {
                     func18(rng());
                  }
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop423 = 0;
         int loopLimit423 = (rand()%10)/2 + 1;
         for(; loop423 < loopLimit423; loop423++) {
            func12(rng());
         }
      }
      else {
         int loop424 = 0;
         int loopLimit424 = (rand()%10)/2 + 1;
         for(; loop424 < loopLimit424; loop424++) {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop425 = 0;
            int loopLimit425 = (rand()%10)/3 + 1;
            for(; loop425 < loopLimit425; loop425++) {
               if(PATH0 & -2147483648) {
                  func13(rng());
                  if(PATH0 & -2147483648) {
                     func19();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop426 = 0;
                     int loopLimit426 = (rand()%10)/4 + 1;
                     for(; loop426 < loopLimit426; loop426++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop427 = 0;
                     int loopLimit427 = (rand()%10)/4 + 1;
                     for(; loop427 < loopLimit427; loop427++) {
                        func21();
                     }
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  if(PATH0 & -2147483648) {
                     func16(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop428 = 0;
                     int loopLimit428 = (rand()%10)/4 + 1;
                     for(; loop428 < loopLimit428; loop428++) {
                        if(PATH0 & -2147483648) {
                           func19();
                        }
                        else {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar5--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                     }
                     int loop429 = 0;
                     int loopLimit429 = (rand()%10)/4 + 1;
                     for(; loop429 < loopLimit429; loop429++) {
                        func18(rng());
                     }
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
            }
            int loop430 = 0;
            int loopLimit430 = (rand()%10)/3 + 1;
            for(; loop430 < loopLimit430; loop430++) {
               func12(rng());
            }
         }
      }
      int scalar3 = 1;
      int scalar4 = 1;
      printf("DELETE!\n");
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func10(rng());
      if(PATH0 & -2147483648) {
         func16(rng());
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar5 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func20();
      }
      else {
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop431 = 0;
         int loopLimit431 = (rand()%10)/2 + 1;
         for(; loop431 < loopLimit431; loop431++) {
            if(PATH0 & -2147483648) {
               func19();
            }
            else {
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func20();
            }
         }
         int loop432 = 0;
         int loopLimit432 = (rand()%10)/2 + 1;
         for(; loop432 < loopLimit432; loop432++) {
            func18(rng());
         }
         int scalar6 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar4--;
         printf("DELETE!\n");
      }
      func14(rng());
      if(PATH1 & 1) {
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop433 = 0;
         int loopLimit433 = (rand()%10)/2 + 1;
         for(; loop433 < loopLimit433; loop433++) {
            if(PATH1 & 2) {
               func13(rng());
               if(PATH1 & 4) {
                  func19();
               }
               else {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop434 = 0;
                  int loopLimit434 = (rand()%10)/3 + 1;
                  for(; loop434 < loopLimit434; loop434++) {
                     if(PATH1 & 8) {
                     }
                     else {
                     }
                  }
                  int loop435 = 0;
                  int loopLimit435 = (rand()%10)/3 + 1;
                  for(; loop435 < loopLimit435; loop435++) {
                     func21();
                  }
                  int scalar7 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func17(rng());
            }
            else {
               if(PATH1 & 16) {
                  func16(rng());
                  if(PATH1 & 32) {
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  int scalar6 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop436 = 0;
                  int loopLimit436 = (rand()%10)/3 + 1;
                  for(; loop436 < loopLimit436; loop436++) {
                     if(PATH1 & 64) {
                        func19();
                     }
                     else {
                        if(PATH1 & 128) {
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar7 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop437 = 0;
                  int loopLimit437 = (rand()%10)/3 + 1;
                  for(; loop437 < loopLimit437; loop437++) {
                     func18(rng());
                  }
                  int scalar7 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop438 = 0;
         int loopLimit438 = (rand()%10)/2 + 1;
         for(; loop438 < loopLimit438; loop438++) {
            func12(rng());
         }
      }
      else {
         if(PATH1 & 256) {
            int scalar5 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop439 = 0;
            int loopLimit439 = (rand()%10)/2 + 1;
            for(; loop439 < loopLimit439; loop439++) {
               if(PATH1 & 512) {
                  func16(rng());
                  if(PATH1 & 1024) {
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  if(PATH1 & 2048) {
                     func19();
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop440 = 0;
                     int loopLimit440 = (rand()%10)/3 + 1;
                     for(; loop440 < loopLimit440; loop440++) {
                        if(PATH1 & 4096) {
                        }
                        else {
                        }
                     }
                     int loop441 = 0;
                     int loopLimit441 = (rand()%10)/3 + 1;
                     for(; loop441 < loopLimit441; loop441++) {
                        func21();
                     }
                     int scalar7 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop442 = 0;
            int loopLimit442 = (rand()%10)/2 + 1;
            for(; loop442 < loopLimit442; loop442++) {
               func15(rng());
            }
         }
         else {
            int loop443 = 0;
            int loopLimit443 = (rand()%10)/2 + 1;
            for(; loop443 < loopLimit443; loop443++) {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop444 = 0;
               int loopLimit444 = (rand()%10)/3 + 1;
               for(; loop444 < loopLimit444; loop444++) {
                  if(PATH1 & 8192) {
                     func16(rng());
                     if(PATH1 & 16384) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     if(PATH1 & 32768) {
                        func19();
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop445 = 0;
                        int loopLimit445 = (rand()%10)/4 + 1;
                        for(; loop445 < loopLimit445; loop445++) {
                           if(PATH1 & 65536) {
                           }
                           else {
                           }
                        }
                        int loop446 = 0;
                        int loopLimit446 = (rand()%10)/4 + 1;
                        for(; loop446 < loopLimit446; loop446++) {
                           func21();
                        }
                        int scalar7 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func17(rng());
                  }
               }
               int loop447 = 0;
               int loopLimit447 = (rand()%10)/3 + 1;
               for(; loop447 < loopLimit447; loop447++) {
                  func15(rng());
               }
            }
         }
         int scalar5 = 1;
         int scalar6 = 1;
         printf("DELETE!\n");
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         func13(rng());
         if(PATH1 & 131072) {
            func19();
         }
         else {
            int scalar7 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop448 = 0;
            int loopLimit448 = (rand()%10)/2 + 1;
            for(; loop448 < loopLimit448; loop448++) {
               if(PATH1 & 262144) {
               }
               else {
               }
            }
            int loop449 = 0;
            int loopLimit449 = (rand()%10)/2 + 1;
            for(; loop449 < loopLimit449; loop449++) {
               func21();
            }
            int scalar8 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar8--;
            printf("DELETE!\n");
         }
         func17(rng());
         if(PATH1 & 524288) {
            int scalar7 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop450 = 0;
            int loopLimit450 = (rand()%10)/2 + 1;
            for(; loop450 < loopLimit450; loop450++) {
               if(PATH1 & 1048576) {
                  func16(rng());
                  if(PATH1 & 2097152) {
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar8--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  if(PATH1 & 4194304) {
                     func19();
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop451 = 0;
                     int loopLimit451 = (rand()%10)/3 + 1;
                     for(; loop451 < loopLimit451; loop451++) {
                        if(PATH1 & 8388608) {
                        }
                        else {
                        }
                     }
                     int loop452 = 0;
                     int loopLimit452 = (rand()%10)/3 + 1;
                     for(; loop452 < loopLimit452; loop452++) {
                        func21();
                     }
                     int scalar9 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop453 = 0;
            int loopLimit453 = (rand()%10)/2 + 1;
            for(; loop453 < loopLimit453; loop453++) {
               func15(rng());
            }
         }
         else {
            if(PATH1 & 16777216) {
               int scalar7 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop454 = 0;
               int loopLimit454 = (rand()%10)/2 + 1;
               for(; loop454 < loopLimit454; loop454++) {
                  if(PATH1 & 33554432) {
                     func19();
                  }
                  else {
                     if(PATH1 & 67108864) {
                     }
                     else {
                        int scalar8 = 1;
                        if (scalar6 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop455 = 0;
               int loopLimit455 = (rand()%10)/2 + 1;
               for(; loop455 < loopLimit455; loop455++) {
                  func18(rng());
               }
            }
            else {
               int loop456 = 0;
               int loopLimit456 = (rand()%10)/2 + 1;
               for(; loop456 < loopLimit456; loop456++) {
                  int scalar7 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop457 = 0;
                  int loopLimit457 = (rand()%10)/3 + 1;
                  for(; loop457 < loopLimit457; loop457++) {
                     if(PATH1 & 134217728) {
                        func19();
                     }
                     else {
                        if(PATH1 & 268435456) {
                        }
                        else {
                           int scalar8 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func20();
                     }
                  }
                  int loop458 = 0;
                  int loopLimit458 = (rand()%10)/3 + 1;
                  for(; loop458 < loopLimit458; loop458++) {
                     func18(rng());
                  }
               }
            }
            int scalar7 = 1;
            int scalar8 = 1;
            printf("DELETE!\n");
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func16(rng());
            if(PATH1 & 536870912) {
            }
            else {
               int scalar9 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func20();
            if(PATH1 & 1073741824) {
               int scalar9 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop459 = 0;
               int loopLimit459 = (rand()%10)/2 + 1;
               for(; loop459 < loopLimit459; loop459++) {
                  if(PATH1 & -2147483648) {
                     func19();
                  }
                  else {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar10 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar7--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop460 = 0;
               int loopLimit460 = (rand()%10)/2 + 1;
               for(; loop460 < loopLimit460; loop460++) {
                  func18(rng());
               }
            }
            else {
               if(PATH1 & -2147483648) {
                  int scalar9 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop461 = 0;
                  int loopLimit461 = (rand()%10)/2 + 1;
                  for(; loop461 < loopLimit461; loop461++) {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop462 = 0;
                  int loopLimit462 = (rand()%10)/2 + 1;
                  for(; loop462 < loopLimit462; loop462++) {
                     func21();
                  }
               }
               else {
                  int loop463 = 0;
                  int loopLimit463 = (rand()%10)/2 + 1;
                  for(; loop463 < loopLimit463; loop463++) {
                     int scalar9 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop464 = 0;
                     int loopLimit464 = (rand()%10)/3 + 1;
                     for(; loop464 < loopLimit464; loop464++) {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop465 = 0;
                     int loopLimit465 = (rand()%10)/3 + 1;
                     for(; loop465 < loopLimit465; loop465++) {
                        func21();
                     }
                  }
               }
               int scalar9 = 1;
               int scalar10 = 1;
               printf("DELETE!\n");
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               func19();
               if(PATH1 & -2147483648) {
                  int scalar11 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop466 = 0;
                  int loopLimit466 = (rand()%10)/2 + 1;
                  for(; loop466 < loopLimit466; loop466++) {
                     if(PATH1 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop467 = 0;
                  int loopLimit467 = (rand()%10)/2 + 1;
                  for(; loop467 < loopLimit467; loop467++) {
                     func21();
                  }
               }
               else {
                  if(PATH1 & -2147483648) {
                  }
                  else {
                     int loop468 = 0;
                     int loopLimit468 = (rand()%10)/2 + 1;
                     for(; loop468 < loopLimit468; loop468++) {
                     }
                  }
                  int scalar11 = 1;
                  int scalar12 = 1;
                  printf("DELETE!\n");
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  if(PATH1 & -2147483648) {
                  }
                  else {
                  }
               }
            }
         }
      }
   }
}

void func3(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop495 = 0;
   int loopLimit495 = (rand()%10)/3 + 1;
   for(; loop495 < loopLimit495; loop495++) {
      if(PATH0 & 1) {
         func7(rng());
         if(PATH0 & 2) {
            func13(rng());
            if(PATH0 & 4) {
               func19();
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop496 = 0;
               int loopLimit496 = (rand()%10)/4 + 1;
               for(; loop496 < loopLimit496; loop496++) {
                  if(PATH0 & 8) {
                  }
                  else {
                  }
               }
               int loop497 = 0;
               int loopLimit497 = (rand()%10)/4 + 1;
               for(; loop497 < loopLimit497; loop497++) {
                  func21();
               }
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17(rng());
         }
         else {
            int scalar3 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop498 = 0;
            int loopLimit498 = (rand()%10)/4 + 1;
            for(; loop498 < loopLimit498; loop498++) {
               if(PATH0 & 16) {
                  func16(rng());
                  if(PATH0 & 32) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func20();
               }
               else {
                  if(PATH0 & 64) {
                     func19();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop499 = 0;
                     int loopLimit499 = (rand()%10)/5 + 1;
                     for(; loop499 < loopLimit499; loop499++) {
                        if(PATH0 & 128) {
                        }
                        else {
                        }
                     }
                     int loop500 = 0;
                     int loopLimit500 = (rand()%10)/5 + 1;
                     for(; loop500 < loopLimit500; loop500++) {
                        func21();
                     }
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
            }
            int loop501 = 0;
            int loopLimit501 = (rand()%10)/4 + 1;
            for(; loop501 < loopLimit501; loop501++) {
               func15(rng());
            }
            int scalar4 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func11(rng());
      }
      else {
         if(PATH0 & 256) {
            func10(rng());
            if(PATH0 & 512) {
               func16(rng());
               if(PATH0 & 1024) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func20();
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop502 = 0;
               int loopLimit502 = (rand()%10)/4 + 1;
               for(; loop502 < loopLimit502; loop502++) {
                  if(PATH0 & 2048) {
                     func19();
                  }
                  else {
                     if(PATH0 & 4096) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
               }
               int loop503 = 0;
               int loopLimit503 = (rand()%10)/4 + 1;
               for(; loop503 < loopLimit503; loop503++) {
                  func18(rng());
               }
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            int scalar3 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop504 = 0;
            int loopLimit504 = (rand()%10)/4 + 1;
            for(; loop504 < loopLimit504; loop504++) {
               if(PATH0 & 8192) {
                  func13(rng());
                  if(PATH0 & 16384) {
                     func19();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop505 = 0;
                     int loopLimit505 = (rand()%10)/5 + 1;
                     for(; loop505 < loopLimit505; loop505++) {
                        if(PATH0 & 32768) {
                        }
                        else {
                        }
                     }
                     int loop506 = 0;
                     int loopLimit506 = (rand()%10)/5 + 1;
                     for(; loop506 < loopLimit506; loop506++) {
                        func21();
                     }
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17(rng());
               }
               else {
                  if(PATH0 & 65536) {
                     func16(rng());
                     if(PATH0 & 131072) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func20();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop507 = 0;
                     int loopLimit507 = (rand()%10)/5 + 1;
                     for(; loop507 < loopLimit507; loop507++) {
                        if(PATH0 & 262144) {
                           func19();
                        }
                        else {
                           if(PATH0 & 524288) {
                           }
                           else {
                              int scalar5 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func20();
                        }
                     }
                     int loop508 = 0;
                     int loopLimit508 = (rand()%10)/5 + 1;
                     for(; loop508 < loopLimit508; loop508++) {
                        func18(rng());
                     }
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
            }
            int loop509 = 0;
            int loopLimit509 = (rand()%10)/4 + 1;
            for(; loop509 < loopLimit509; loop509++) {
               func12(rng());
            }
            int scalar4 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func8(rng());
      }
   }
   int loop510 = 0;
   int loopLimit510 = (rand()%10)/3 + 1;
   for(; loop510 < loopLimit510; loop510++) {
      func6(rng());
   }
}

