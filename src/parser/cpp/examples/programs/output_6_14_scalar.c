#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2);
void func1(const unsigned long PATH0, const unsigned long PATH1);
void func4(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func10(const unsigned long PATH0);
void func13(const unsigned long PATH0);
void func16();
void func17();
void func18();
void func14(const unsigned long PATH0);
void func15(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func12(const unsigned long PATH0);
void func8(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   func0(rng(), rng(), rng());
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0, const unsigned long PATH1, const unsigned long PATH2) {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      func1(rng(), rng());
      if(PATH0 & 1) {
         func7(rng());
         if(PATH0 & 2) {
            func13(rng());
            if(PATH0 & 4) {
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func17();
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop148 = 0;
            int loopLimit148 = (rand()%10)/2 + 1;
            for(; loop148 < loopLimit148; loop148++) {
               if(PATH0 & 8) {
                  func16();
               }
               else {
                  if(PATH0 & 16) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
            }
            int loop149 = 0;
            int loopLimit149 = (rand()%10)/2 + 1;
            for(; loop149 < loopLimit149; loop149++) {
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
         int loop150 = 0;
         int loopLimit150 = (rand()%10)/2 + 1;
         for(; loop150 < loopLimit150; loop150++) {
            if(PATH0 & 32) {
               func10(rng());
               if(PATH0 & 64) {
                  func16();
               }
               else {
                  int scalar2 = 1;
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
                     func18();
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
               if(PATH0 & 256) {
                  func13(rng());
                  if(PATH0 & 512) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop153 = 0;
                  int loopLimit153 = (rand()%10)/3 + 1;
                  for(; loop153 < loopLimit153; loop153++) {
                     if(PATH0 & 1024) {
                        func16();
                     }
                     else {
                        if(PATH0 & 2048) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                  }
                  int loop154 = 0;
                  int loopLimit154 = (rand()%10)/3 + 1;
                  for(; loop154 < loopLimit154; loop154++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
         }
         int loop155 = 0;
         int loopLimit155 = (rand()%10)/2 + 1;
         for(; loop155 < loopLimit155; loop155++) {
            func9(rng());
         }
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func5(rng());
      if(PATH0 & 4096) {
         func4(rng());
         if(PATH0 & 8192) {
            func10(rng());
            if(PATH0 & 16384) {
               func16();
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop186 = 0;
               int loopLimit186 = (rand()%10)/2 + 1;
               for(; loop186 < loopLimit186; loop186++) {
                  if(PATH0 & 32768) {
                  }
                  else {
                  }
               }
               int loop187 = 0;
               int loopLimit187 = (rand()%10)/2 + 1;
               for(; loop187 < loopLimit187; loop187++) {
                  func18();
               }
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
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
            int loop188 = 0;
            int loopLimit188 = (rand()%10)/2 + 1;
            for(; loop188 < loopLimit188; loop188++) {
               if(PATH0 & 65536) {
                  func13(rng());
                  if(PATH0 & 131072) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
               else {
                  if(PATH0 & 262144) {
                     func16();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop189 = 0;
                     int loopLimit189 = (rand()%10)/3 + 1;
                     for(; loop189 < loopLimit189; loop189++) {
                        if(PATH0 & 524288) {
                        }
                        else {
                        }
                     }
                     int loop190 = 0;
                     int loopLimit190 = (rand()%10)/3 + 1;
                     for(; loop190 < loopLimit190; loop190++) {
                        func18();
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
            int loop191 = 0;
            int loopLimit191 = (rand()%10)/2 + 1;
            for(; loop191 < loopLimit191; loop191++) {
               func12(rng());
            }
            int scalar2 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar2--;
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
         int loop192 = 0;
         int loopLimit192 = (rand()%10)/2 + 1;
         for(; loop192 < loopLimit192; loop192++) {
            if(PATH0 & 1048576) {
               func7(rng());
               if(PATH0 & 2097152) {
                  func13(rng());
                  if(PATH0 & 4194304) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop193 = 0;
                  int loopLimit193 = (rand()%10)/3 + 1;
                  for(; loop193 < loopLimit193; loop193++) {
                     if(PATH0 & 8388608) {
                        func16();
                     }
                     else {
                        if(PATH0 & 16777216) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                  }
                  int loop194 = 0;
                  int loopLimit194 = (rand()%10)/3 + 1;
                  for(; loop194 < loopLimit194; loop194++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
            else {
               if(PATH0 & 33554432) {
                  func10(rng());
                  if(PATH0 & 67108864) {
                     func16();
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop195 = 0;
                     int loopLimit195 = (rand()%10)/3 + 1;
                     for(; loop195 < loopLimit195; loop195++) {
                        if(PATH0 & 134217728) {
                        }
                        else {
                        }
                     }
                     int loop196 = 0;
                     int loopLimit196 = (rand()%10)/3 + 1;
                     for(; loop196 < loopLimit196; loop196++) {
                        func18();
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
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop197 = 0;
                  int loopLimit197 = (rand()%10)/3 + 1;
                  for(; loop197 < loopLimit197; loop197++) {
                     if(PATH0 & 268435456) {
                        func13(rng());
                        if(PATH0 & 536870912) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                     else {
                        if(PATH0 & 1073741824) {
                           func16();
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop198 = 0;
                           int loopLimit198 = (rand()%10)/4 + 1;
                           for(; loop198 < loopLimit198; loop198++) {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop199 = 0;
                           int loopLimit199 = (rand()%10)/4 + 1;
                           for(; loop199 < loopLimit199; loop199++) {
                              func18();
                           }
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop200 = 0;
                  int loopLimit200 = (rand()%10)/3 + 1;
                  for(; loop200 < loopLimit200; loop200++) {
                     func12(rng());
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop201 = 0;
         int loopLimit201 = (rand()%10)/2 + 1;
         for(; loop201 < loopLimit201; loop201++) {
            func6(rng());
         }
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func2(rng());
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop259 = 0;
      int loopLimit259 = (rand()%10)/2 + 1;
      for(; loop259 < loopLimit259; loop259++) {
         if(PATH0 & -2147483648) {
            func4(rng());
            if(PATH0 & -2147483648) {
               func10(rng());
               if(PATH0 & -2147483648) {
                  func16();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop260 = 0;
                  int loopLimit260 = (rand()%10)/3 + 1;
                  for(; loop260 < loopLimit260; loop260++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop261 = 0;
                  int loopLimit261 = (rand()%10)/3 + 1;
                  for(; loop261 < loopLimit261; loop261++) {
                     func18();
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
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop262 = 0;
               int loopLimit262 = (rand()%10)/3 + 1;
               for(; loop262 < loopLimit262; loop262++) {
                  if(PATH0 & -2147483648) {
                     func13(rng());
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                        func16();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop263 = 0;
                        int loopLimit263 = (rand()%10)/4 + 1;
                        for(; loop263 < loopLimit263; loop263++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop264 = 0;
                        int loopLimit264 = (rand()%10)/4 + 1;
                        for(; loop264 < loopLimit264; loop264++) {
                           func18();
                        }
                        int scalar4 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
               }
               int loop265 = 0;
               int loopLimit265 = (rand()%10)/3 + 1;
               for(; loop265 < loopLimit265; loop265++) {
                  func12(rng());
               }
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func8(rng());
         }
         else {
            if(PATH0 & -2147483648) {
               func7(rng());
               if(PATH0 & -2147483648) {
                  func13(rng());
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
                  func17();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop266 = 0;
                  int loopLimit266 = (rand()%10)/3 + 1;
                  for(; loop266 < loopLimit266; loop266++) {
                     if(PATH0 & -2147483648) {
                        func16();
                     }
                     else {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                  }
                  int loop267 = 0;
                  int loopLimit267 = (rand()%10)/3 + 1;
                  for(; loop267 < loopLimit267; loop267++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop268 = 0;
               int loopLimit268 = (rand()%10)/3 + 1;
               for(; loop268 < loopLimit268; loop268++) {
                  if(PATH0 & -2147483648) {
                     func10(rng());
                     if(PATH0 & -2147483648) {
                        func16();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop269 = 0;
                        int loopLimit269 = (rand()%10)/4 + 1;
                        for(; loop269 < loopLimit269; loop269++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop270 = 0;
                        int loopLimit270 = (rand()%10)/4 + 1;
                        for(; loop270 < loopLimit270; loop270++) {
                           func18();
                        }
                        int scalar4 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
                  else {
                     if(PATH0 & -2147483648) {
                        func13(rng());
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop271 = 0;
                        int loopLimit271 = (rand()%10)/4 + 1;
                        for(; loop271 < loopLimit271; loop271++) {
                           if(PATH0 & -2147483648) {
                              func16();
                           }
                           else {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                                 int scalar4 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar2--;
                                 printf("DELETE!\n");
                              }
                              func17();
                           }
                        }
                        int loop272 = 0;
                        int loopLimit272 = (rand()%10)/4 + 1;
                        for(; loop272 < loopLimit272; loop272++) {
                           func15(rng());
                        }
                        int scalar4 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func11(rng());
                  }
               }
               int loop273 = 0;
               int loopLimit273 = (rand()%10)/3 + 1;
               for(; loop273 < loopLimit273; loop273++) {
                  func9(rng());
               }
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func5(rng());
         }
      }
      int loop274 = 0;
      int loopLimit274 = (rand()%10)/2 + 1;
      for(; loop274 < loopLimit274; loop274++) {
         func3(rng());
      }
      if(PATH0 & -2147483648) {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop285 = 0;
         int loopLimit285 = (rand()%10)/2 + 1;
         for(; loop285 < loopLimit285; loop285++) {
            if(PATH0 & -2147483648) {
               func7(rng());
               if(PATH0 & -2147483648) {
                  func13(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop286 = 0;
                  int loopLimit286 = (rand()%10)/3 + 1;
                  for(; loop286 < loopLimit286; loop286++) {
                     if(PATH0 & -2147483648) {
                        func16();
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
                        func17();
                     }
                  }
                  int loop287 = 0;
                  int loopLimit287 = (rand()%10)/3 + 1;
                  for(; loop287 < loopLimit287; loop287++) {
                     func15(rng());
                  }
                  int scalar4 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
            else {
               if(PATH0 & -2147483648) {
                  func10(rng());
                  if(PATH0 & -2147483648) {
                     func16();
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop288 = 0;
                     int loopLimit288 = (rand()%10)/3 + 1;
                     for(; loop288 < loopLimit288; loop288++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop289 = 0;
                     int loopLimit289 = (rand()%10)/3 + 1;
                     for(; loop289 < loopLimit289; loop289++) {
                        func18();
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
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop290 = 0;
                  int loopLimit290 = (rand()%10)/3 + 1;
                  for(; loop290 < loopLimit290; loop290++) {
                     if(PATH0 & -2147483648) {
                        func13(rng());
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                     else {
                        if(PATH0 & -2147483648) {
                           func16();
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar3 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop291 = 0;
                           int loopLimit291 = (rand()%10)/4 + 1;
                           for(; loop291 < loopLimit291; loop291++) {
                              if(PATH1 & 1) {
                              }
                              else {
                              }
                           }
                           int loop292 = 0;
                           int loopLimit292 = (rand()%10)/4 + 1;
                           for(; loop292 < loopLimit292; loop292++) {
                              func18();
                           }
                           int scalar5 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop293 = 0;
                  int loopLimit293 = (rand()%10)/3 + 1;
                  for(; loop293 < loopLimit293; loop293++) {
                     func12(rng());
                  }
                  int scalar4 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop294 = 0;
         int loopLimit294 = (rand()%10)/2 + 1;
         for(; loop294 < loopLimit294; loop294++) {
            func6(rng());
         }
      }
      else {
         int loop295 = 0;
         int loopLimit295 = (rand()%10)/2 + 1;
         for(; loop295 < loopLimit295; loop295++) {
            int scalar2 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop296 = 0;
            int loopLimit296 = (rand()%10)/3 + 1;
            for(; loop296 < loopLimit296; loop296++) {
               if(PATH1 & 2) {
                  func7(rng());
                  if(PATH1 & 4) {
                     func13(rng());
                     if(PATH1 & 8) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop297 = 0;
                     int loopLimit297 = (rand()%10)/4 + 1;
                     for(; loop297 < loopLimit297; loop297++) {
                        if(PATH1 & 16) {
                           func16();
                        }
                        else {
                           if(PATH1 & 32) {
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar4 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func17();
                        }
                     }
                     int loop298 = 0;
                     int loopLimit298 = (rand()%10)/4 + 1;
                     for(; loop298 < loopLimit298; loop298++) {
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
               else {
                  if(PATH1 & 64) {
                     func10(rng());
                     if(PATH1 & 128) {
                        func16();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop299 = 0;
                        int loopLimit299 = (rand()%10)/4 + 1;
                        for(; loop299 < loopLimit299; loop299++) {
                           if(PATH1 & 256) {
                           }
                           else {
                           }
                        }
                        int loop300 = 0;
                        int loopLimit300 = (rand()%10)/4 + 1;
                        for(; loop300 < loopLimit300; loop300++) {
                           func18();
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
                     int loop301 = 0;
                     int loopLimit301 = (rand()%10)/4 + 1;
                     for(; loop301 < loopLimit301; loop301++) {
                        if(PATH1 & 512) {
                           func13(rng());
                           if(PATH1 & 1024) {
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func17();
                        }
                        else {
                           if(PATH1 & 2048) {
                              func16();
                           }
                           else {
                              int scalar4 = 1;
                              if (scalar2 == 0) {
                                 printf("IS 0!");
                              }
                              printf("DELETE!\n");
                              int loop302 = 0;
                              int loopLimit302 = (rand()%10)/5 + 1;
                              for(; loop302 < loopLimit302; loop302++) {
                                 if(PATH1 & 4096) {
                                 }
                                 else {
                                 }
                              }
                              int loop303 = 0;
                              int loopLimit303 = (rand()%10)/5 + 1;
                              for(; loop303 < loopLimit303; loop303++) {
                                 func18();
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
                     int loop304 = 0;
                     int loopLimit304 = (rand()%10)/4 + 1;
                     for(; loop304 < loopLimit304; loop304++) {
                        func12(rng());
                     }
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func8(rng());
               }
            }
            int loop305 = 0;
            int loopLimit305 = (rand()%10)/3 + 1;
            for(; loop305 < loopLimit305; loop305++) {
               func6(rng());
            }
         }
      }
      int scalar2 = 1;
      int scalar3 = 1;
      printf("DELETE!\n");
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func4(rng());
      if(PATH1 & 8192) {
         func10(rng());
         if(PATH1 & 16384) {
            func16();
         }
         else {
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop306 = 0;
            int loopLimit306 = (rand()%10)/2 + 1;
            for(; loop306 < loopLimit306; loop306++) {
               if(PATH1 & 32768) {
               }
               else {
               }
            }
            int loop307 = 0;
            int loopLimit307 = (rand()%10)/2 + 1;
            for(; loop307 < loopLimit307; loop307++) {
               func18();
            }
            int scalar5 = 1;
            if (scalar2 == 0) {
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
         int loop308 = 0;
         int loopLimit308 = (rand()%10)/2 + 1;
         for(; loop308 < loopLimit308; loop308++) {
            if(PATH1 & 65536) {
               func13(rng());
               if(PATH1 & 131072) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func17();
            }
            else {
               if(PATH1 & 262144) {
                  func16();
               }
               else {
                  int scalar5 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop309 = 0;
                  int loopLimit309 = (rand()%10)/3 + 1;
                  for(; loop309 < loopLimit309; loop309++) {
                     if(PATH1 & 524288) {
                     }
                     else {
                     }
                  }
                  int loop310 = 0;
                  int loopLimit310 = (rand()%10)/3 + 1;
                  for(; loop310 < loopLimit310; loop310++) {
                     func18();
                  }
                  int scalar6 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop311 = 0;
         int loopLimit311 = (rand()%10)/2 + 1;
         for(; loop311 < loopLimit311; loop311++) {
            func12(rng());
         }
         int scalar5 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         printf("DELETE!\n");
      }
      func8(rng());
      if(PATH1 & 1048576) {
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop312 = 0;
         int loopLimit312 = (rand()%10)/2 + 1;
         for(; loop312 < loopLimit312; loop312++) {
            if(PATH1 & 2097152) {
               func7(rng());
               if(PATH1 & 4194304) {
                  func13(rng());
                  if(PATH1 & 8388608) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
               else {
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop313 = 0;
                  int loopLimit313 = (rand()%10)/3 + 1;
                  for(; loop313 < loopLimit313; loop313++) {
                     if(PATH1 & 16777216) {
                        func16();
                     }
                     else {
                        if(PATH1 & 33554432) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                  }
                  int loop314 = 0;
                  int loopLimit314 = (rand()%10)/3 + 1;
                  for(; loop314 < loopLimit314; loop314++) {
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
            else {
               if(PATH1 & 67108864) {
                  func10(rng());
                  if(PATH1 & 134217728) {
                     func16();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop315 = 0;
                     int loopLimit315 = (rand()%10)/3 + 1;
                     for(; loop315 < loopLimit315; loop315++) {
                        if(PATH1 & 268435456) {
                        }
                        else {
                        }
                     }
                     int loop316 = 0;
                     int loopLimit316 = (rand()%10)/3 + 1;
                     for(; loop316 < loopLimit316; loop316++) {
                        func18();
                     }
                     int scalar6 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop317 = 0;
                  int loopLimit317 = (rand()%10)/3 + 1;
                  for(; loop317 < loopLimit317; loop317++) {
                     if(PATH1 & 536870912) {
                        func13(rng());
                        if(PATH1 & 1073741824) {
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                     else {
                        if(PATH1 & -2147483648) {
                           func16();
                        }
                        else {
                           int scalar6 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop318 = 0;
                           int loopLimit318 = (rand()%10)/4 + 1;
                           for(; loop318 < loopLimit318; loop318++) {
                              if(PATH1 & -2147483648) {
                              }
                              else {
                              }
                           }
                           int loop319 = 0;
                           int loopLimit319 = (rand()%10)/4 + 1;
                           for(; loop319 < loopLimit319; loop319++) {
                              func18();
                           }
                           int scalar7 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop320 = 0;
                  int loopLimit320 = (rand()%10)/3 + 1;
                  for(; loop320 < loopLimit320; loop320++) {
                     func12(rng());
                  }
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop321 = 0;
         int loopLimit321 = (rand()%10)/2 + 1;
         for(; loop321 < loopLimit321; loop321++) {
            func6(rng());
         }
      }
      else {
         if(PATH1 & -2147483648) {
            int scalar4 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop322 = 0;
            int loopLimit322 = (rand()%10)/2 + 1;
            for(; loop322 < loopLimit322; loop322++) {
               if(PATH1 & -2147483648) {
                  func10(rng());
                  if(PATH1 & -2147483648) {
                     func16();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop323 = 0;
                     int loopLimit323 = (rand()%10)/3 + 1;
                     for(; loop323 < loopLimit323; loop323++) {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop324 = 0;
                     int loopLimit324 = (rand()%10)/3 + 1;
                     for(; loop324 < loopLimit324; loop324++) {
                        func18();
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
                  if(PATH1 & -2147483648) {
                     func13(rng());
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop325 = 0;
                     int loopLimit325 = (rand()%10)/3 + 1;
                     for(; loop325 < loopLimit325; loop325++) {
                        if(PATH1 & -2147483648) {
                           func16();
                        }
                        else {
                           if(PATH1 & -2147483648) {
                           }
                           else {
                              int scalar6 = 1;
                              if (scalar3 == 0) {
                                 printf("IS 0!");
                              }
                              scalar4--;
                              printf("DELETE!\n");
                           }
                           func17();
                        }
                     }
                     int loop326 = 0;
                     int loopLimit326 = (rand()%10)/3 + 1;
                     for(; loop326 < loopLimit326; loop326++) {
                        func15(rng());
                     }
                     int scalar6 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func11(rng());
               }
            }
            int loop327 = 0;
            int loopLimit327 = (rand()%10)/2 + 1;
            for(; loop327 < loopLimit327; loop327++) {
               func9(rng());
            }
         }
         else {
            int loop328 = 0;
            int loopLimit328 = (rand()%10)/2 + 1;
            for(; loop328 < loopLimit328; loop328++) {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop329 = 0;
               int loopLimit329 = (rand()%10)/3 + 1;
               for(; loop329 < loopLimit329; loop329++) {
                  if(PATH1 & -2147483648) {
                     func10(rng());
                     if(PATH1 & -2147483648) {
                        func16();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop330 = 0;
                        int loopLimit330 = (rand()%10)/4 + 1;
                        for(; loop330 < loopLimit330; loop330++) {
                           if(PATH1 & -2147483648) {
                           }
                           else {
                           }
                        }
                        int loop331 = 0;
                        int loopLimit331 = (rand()%10)/4 + 1;
                        for(; loop331 < loopLimit331; loop331++) {
                           func18();
                        }
                        int scalar6 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
                  else {
                     if(PATH1 & -2147483648) {
                        func13(rng());
                        if(PATH1 & -2147483648) {
                        }
                        else {
                           int scalar5 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar2--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop332 = 0;
                        int loopLimit332 = (rand()%10)/4 + 1;
                        for(; loop332 < loopLimit332; loop332++) {
                           if(PATH1 & -2147483648) {
                              func16();
                           }
                           else {
                              if(PATH1 & -2147483648) {
                              }
                              else {
                                 int scalar6 = 1;
                                 if (scalar1 == 0) {
                                    printf("IS 0!");
                                 }
                                 scalar2--;
                                 printf("DELETE!\n");
                              }
                              func17();
                           }
                        }
                        int loop333 = 0;
                        int loopLimit333 = (rand()%10)/4 + 1;
                        for(; loop333 < loopLimit333; loop333++) {
                           func15(rng());
                        }
                        int scalar6 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func11(rng());
                  }
               }
               int loop334 = 0;
               int loopLimit334 = (rand()%10)/3 + 1;
               for(; loop334 < loopLimit334; loop334++) {
                  func9(rng());
               }
            }
         }
         int scalar4 = 1;
         int scalar5 = 1;
         printf("DELETE!\n");
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func7(rng());
         if(PATH1 & -2147483648) {
            func13(rng());
            if(PATH1 & -2147483648) {
            }
            else {
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func17();
         }
         else {
            int scalar6 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop335 = 0;
            int loopLimit335 = (rand()%10)/2 + 1;
            for(; loop335 < loopLimit335; loop335++) {
               if(PATH1 & -2147483648) {
                  func16();
               }
               else {
                  if(PATH1 & -2147483648) {
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
            }
            int loop336 = 0;
            int loopLimit336 = (rand()%10)/2 + 1;
            for(; loop336 < loopLimit336; loop336++) {
               func15(rng());
            }
            int scalar7 = 1;
            if (scalar7 == 0) {
               printf("IS 0!");
            }
            scalar7--;
            printf("DELETE!\n");
         }
         func11(rng());
         if(PATH1 & -2147483648) {
            int scalar6 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop337 = 0;
            int loopLimit337 = (rand()%10)/2 + 1;
            for(; loop337 < loopLimit337; loop337++) {
               if(PATH1 & -2147483648) {
                  func10(rng());
                  if(PATH1 & -2147483648) {
                     func16();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop338 = 0;
                     int loopLimit338 = (rand()%10)/3 + 1;
                     for(; loop338 < loopLimit338; loop338++) {
                        if(PATH1 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop339 = 0;
                     int loopLimit339 = (rand()%10)/3 + 1;
                     for(; loop339 < loopLimit339; loop339++) {
                        func18();
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
               else {
                  if(PATH1 & -2147483648) {
                     func13(rng());
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar7--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop340 = 0;
                     int loopLimit340 = (rand()%10)/3 + 1;
                     for(; loop340 < loopLimit340; loop340++) {
                        if(PATH1 & -2147483648) {
                           func16();
                        }
                        else {
                           if(PATH1 & -2147483648) {
                           }
                           else {
                              int scalar8 = 1;
                              if (scalar8 == 0) {
                                 printf("IS 0!");
                              }
                              scalar3--;
                              printf("DELETE!\n");
                           }
                           func17();
                        }
                     }
                     int loop341 = 0;
                     int loopLimit341 = (rand()%10)/3 + 1;
                     for(; loop341 < loopLimit341; loop341++) {
                        func15(rng());
                     }
                     int scalar8 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func11(rng());
               }
            }
            int loop342 = 0;
            int loopLimit342 = (rand()%10)/2 + 1;
            for(; loop342 < loopLimit342; loop342++) {
               func9(rng());
            }
         }
         else {
            if(PATH1 & -2147483648) {
               int scalar6 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop343 = 0;
               int loopLimit343 = (rand()%10)/2 + 1;
               for(; loop343 < loopLimit343; loop343++) {
                  if(PATH1 & -2147483648) {
                     func13(rng());
                     if(PATH1 & -2147483648) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar7--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
                  else {
                     if(PATH1 & -2147483648) {
                        func16();
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop344 = 0;
                        int loopLimit344 = (rand()%10)/3 + 1;
                        for(; loop344 < loopLimit344; loop344++) {
                           if(PATH2 & 1) {
                           }
                           else {
                           }
                        }
                        int loop345 = 0;
                        int loopLimit345 = (rand()%10)/3 + 1;
                        for(; loop345 < loopLimit345; loop345++) {
                           func18();
                        }
                        int scalar8 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
               }
               int loop346 = 0;
               int loopLimit346 = (rand()%10)/2 + 1;
               for(; loop346 < loopLimit346; loop346++) {
                  func12(rng());
               }
            }
            else {
               int loop347 = 0;
               int loopLimit347 = (rand()%10)/2 + 1;
               for(; loop347 < loopLimit347; loop347++) {
                  int scalar6 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop348 = 0;
                  int loopLimit348 = (rand()%10)/3 + 1;
                  for(; loop348 < loopLimit348; loop348++) {
                     if(PATH2 & 2) {
                        func13(rng());
                        if(PATH2 & 4) {
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar7 == 0) {
                              printf("IS 0!");
                           }
                           scalar6--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                     else {
                        if(PATH2 & 8) {
                           func16();
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                           printf("DELETE!\n");
                           int loop349 = 0;
                           int loopLimit349 = (rand()%10)/4 + 1;
                           for(; loop349 < loopLimit349; loop349++) {
                              if(PATH2 & 16) {
                              }
                              else {
                              }
                           }
                           int loop350 = 0;
                           int loopLimit350 = (rand()%10)/4 + 1;
                           for(; loop350 < loopLimit350; loop350++) {
                              func18();
                           }
                           int scalar8 = 1;
                           if (scalar5 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                        func14(rng());
                     }
                  }
                  int loop351 = 0;
                  int loopLimit351 = (rand()%10)/3 + 1;
                  for(; loop351 < loopLimit351; loop351++) {
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
            if(PATH2 & 32) {
               func16();
            }
            else {
               int scalar8 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop352 = 0;
               int loopLimit352 = (rand()%10)/2 + 1;
               for(; loop352 < loopLimit352; loop352++) {
                  if(PATH2 & 64) {
                  }
                  else {
                  }
               }
               int loop353 = 0;
               int loopLimit353 = (rand()%10)/2 + 1;
               for(; loop353 < loopLimit353; loop353++) {
                  func18();
               }
               int scalar9 = 1;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14(rng());
            if(PATH2 & 128) {
               int scalar8 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop354 = 0;
               int loopLimit354 = (rand()%10)/2 + 1;
               for(; loop354 < loopLimit354; loop354++) {
                  if(PATH2 & 256) {
                     func13(rng());
                     if(PATH2 & 512) {
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                        scalar8--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
                  else {
                     if(PATH2 & 1024) {
                        func16();
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar9 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop355 = 0;
                        int loopLimit355 = (rand()%10)/3 + 1;
                        for(; loop355 < loopLimit355; loop355++) {
                           if(PATH2 & 2048) {
                           }
                           else {
                           }
                        }
                        int loop356 = 0;
                        int loopLimit356 = (rand()%10)/3 + 1;
                        for(; loop356 < loopLimit356; loop356++) {
                           func18();
                        }
                        int scalar10 = 1;
                        if (scalar9 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func14(rng());
                  }
               }
               int loop357 = 0;
               int loopLimit357 = (rand()%10)/2 + 1;
               for(; loop357 < loopLimit357; loop357++) {
                  func12(rng());
               }
            }
            else {
               if(PATH2 & 4096) {
                  int scalar8 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop358 = 0;
                  int loopLimit358 = (rand()%10)/2 + 1;
                  for(; loop358 < loopLimit358; loop358++) {
                     if(PATH2 & 8192) {
                        func16();
                     }
                     else {
                        if(PATH2 & 16384) {
                        }
                        else {
                           int scalar9 = 1;
                           if (scalar8 == 0) {
                              printf("IS 0!");
                           }
                           scalar6--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                  }
                  int loop359 = 0;
                  int loopLimit359 = (rand()%10)/2 + 1;
                  for(; loop359 < loopLimit359; loop359++) {
                     func15(rng());
                  }
               }
               else {
                  int loop360 = 0;
                  int loopLimit360 = (rand()%10)/2 + 1;
                  for(; loop360 < loopLimit360; loop360++) {
                     int scalar8 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop361 = 0;
                     int loopLimit361 = (rand()%10)/3 + 1;
                     for(; loop361 < loopLimit361; loop361++) {
                        if(PATH2 & 32768) {
                           func16();
                        }
                        else {
                           if(PATH2 & 65536) {
                           }
                           else {
                              int scalar9 = 1;
                              if (scalar6 == 0) {
                                 printf("IS 0!");
                              }
                              scalar1--;
                              printf("DELETE!\n");
                           }
                           func17();
                        }
                     }
                     int loop362 = 0;
                     int loopLimit362 = (rand()%10)/3 + 1;
                     for(; loop362 < loopLimit362; loop362++) {
                        func15(rng());
                     }
                  }
               }
               int scalar8 = 1;
               int scalar9 = 1;
               printf("DELETE!\n");
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               func13(rng());
               if(PATH2 & 131072) {
               }
               else {
                  int scalar10 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  scalar9--;
                  printf("DELETE!\n");
               }
               func17();
               if(PATH2 & 262144) {
                  int scalar10 = 1;
                  if (scalar8 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop363 = 0;
                  int loopLimit363 = (rand()%10)/2 + 1;
                  for(; loop363 < loopLimit363; loop363++) {
                     if(PATH2 & 524288) {
                        func16();
                     }
                     else {
                        if(PATH2 & 1048576) {
                        }
                        else {
                           int scalar11 = 1;
                           if (scalar9 == 0) {
                              printf("IS 0!");
                           }
                           scalar7--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                  }
                  int loop364 = 0;
                  int loopLimit364 = (rand()%10)/2 + 1;
                  for(; loop364 < loopLimit364; loop364++) {
                     func15(rng());
                  }
               }
               else {
                  if(PATH2 & 2097152) {
                     int scalar10 = 1;
                     if (scalar10 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop365 = 0;
                     int loopLimit365 = (rand()%10)/2 + 1;
                     for(; loop365 < loopLimit365; loop365++) {
                        if(PATH2 & 4194304) {
                        }
                        else {
                        }
                     }
                     int loop366 = 0;
                     int loopLimit366 = (rand()%10)/2 + 1;
                     for(; loop366 < loopLimit366; loop366++) {
                        func18();
                     }
                  }
                  else {
                     int loop367 = 0;
                     int loopLimit367 = (rand()%10)/2 + 1;
                     for(; loop367 < loopLimit367; loop367++) {
                        int scalar10 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop368 = 0;
                        int loopLimit368 = (rand()%10)/3 + 1;
                        for(; loop368 < loopLimit368; loop368++) {
                           if(PATH2 & 8388608) {
                           }
                           else {
                           }
                        }
                        int loop369 = 0;
                        int loopLimit369 = (rand()%10)/3 + 1;
                        for(; loop369 < loopLimit369; loop369++) {
                           func18();
                        }
                     }
                  }
                  int scalar10 = 1;
                  int scalar11 = 1;
                  printf("DELETE!\n");
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  func16();
                  if(PATH2 & 16777216) {
                     int scalar12 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop370 = 0;
                     int loopLimit370 = (rand()%10)/2 + 1;
                     for(; loop370 < loopLimit370; loop370++) {
                        if(PATH2 & 33554432) {
                        }
                        else {
                        }
                     }
                     int loop371 = 0;
                     int loopLimit371 = (rand()%10)/2 + 1;
                     for(; loop371 < loopLimit371; loop371++) {
                        func18();
                     }
                  }
                  else {
                     if(PATH2 & 67108864) {
                     }
                     else {
                        int loop372 = 0;
                        int loopLimit372 = (rand()%10)/2 + 1;
                        for(; loop372 < loopLimit372; loop372++) {
                        }
                     }
                     int scalar12 = 1;
                     int scalar13 = 1;
                     printf("DELETE!\n");
                     if (scalar12 == 0) {
                        printf("IS 0!");
                     }
                     if(PATH2 & 134217728) {
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

void func1(const unsigned long PATH0, const unsigned long PATH1) {
   int scalar1 = 1;
   func4(rng());
   if(PATH0 & 1) {
      func10(rng());
      if(PATH0 & 2) {
         func16();
      }
      else {
         int scalar2 = 1;
         if (scalar2 == 0) {
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
            func18();
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
      int scalar2 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop74 = 0;
      int loopLimit74 = (rand()%10)/2 + 1;
      for(; loop74 < loopLimit74; loop74++) {
         if(PATH0 & 8) {
            func13(rng());
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
            func17();
         }
         else {
            if(PATH0 & 32) {
               func16();
            }
            else {
               int scalar3 = 1;
               if (scalar1 == 0) {
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
                  func18();
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
      }
      int loop77 = 0;
      int loopLimit77 = (rand()%10)/2 + 1;
      for(; loop77 < loopLimit77; loop77++) {
         func12(rng());
      }
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   func8(rng());
   scalar1++;
   scalar1++;
   if(PATH0 & 128) {
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop93 = 0;
      int loopLimit93 = (rand()%10)/2 + 1;
      for(; loop93 < loopLimit93; loop93++) {
         if(PATH0 & 256) {
            func10(rng());
            if(PATH0 & 512) {
               func16();
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
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
                  func18();
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
         else {
            if(PATH0 & 2048) {
               func13(rng());
               if(PATH0 & 4096) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func17();
            }
            else {
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop96 = 0;
               int loopLimit96 = (rand()%10)/3 + 1;
               for(; loop96 < loopLimit96; loop96++) {
                  if(PATH0 & 8192) {
                     func16();
                  }
                  else {
                     if(PATH0 & 16384) {
                     }
                     else {
                        int scalar4 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
               }
               int loop97 = 0;
               int loopLimit97 = (rand()%10)/3 + 1;
               for(; loop97 < loopLimit97; loop97++) {
                  func15(rng());
               }
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop98 = 0;
      int loopLimit98 = (rand()%10)/2 + 1;
      for(; loop98 < loopLimit98; loop98++) {
         func9(rng());
      }
   }
   else {
      int loop103 = 0;
      int loopLimit103 = (rand()%10)/2 + 1;
      for(; loop103 < loopLimit103; loop103++) {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop104 = 0;
         int loopLimit104 = (rand()%10)/3 + 1;
         for(; loop104 < loopLimit104; loop104++) {
            if(PATH0 & 32768) {
               func10(rng());
               if(PATH0 & 65536) {
                  func16();
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
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
                     func18();
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
            else {
               if(PATH0 & 262144) {
                  func13(rng());
                  if(PATH0 & 524288) {
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
               else {
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop107 = 0;
                  int loopLimit107 = (rand()%10)/4 + 1;
                  for(; loop107 < loopLimit107; loop107++) {
                     if(PATH0 & 1048576) {
                        func16();
                     }
                     else {
                        if(PATH0 & 2097152) {
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar4--;
                           printf("DELETE!\n");
                        }
                        func17();
                     }
                  }
                  int loop108 = 0;
                  int loopLimit108 = (rand()%10)/4 + 1;
                  for(; loop108 < loopLimit108; loop108++) {
                     func15(rng());
                  }
                  int scalar4 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
         }
         int loop109 = 0;
         int loopLimit109 = (rand()%10)/3 + 1;
         for(; loop109 < loopLimit109; loop109++) {
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
   if(PATH0 & 4194304) {
      func13(rng());
      if(PATH0 & 8388608) {
      }
      else {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func17();
   }
   else {
      int scalar4 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop110 = 0;
      int loopLimit110 = (rand()%10)/2 + 1;
      for(; loop110 < loopLimit110; loop110++) {
         if(PATH0 & 16777216) {
            func16();
         }
         else {
            if(PATH0 & 33554432) {
            }
            else {
               int scalar5 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17();
         }
      }
      int loop111 = 0;
      int loopLimit111 = (rand()%10)/2 + 1;
      for(; loop111 < loopLimit111; loop111++) {
         func15(rng());
      }
      int scalar5 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      printf("DELETE!\n");
   }
   func11(rng());
   if(PATH0 & 67108864) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop112 = 0;
      int loopLimit112 = (rand()%10)/2 + 1;
      for(; loop112 < loopLimit112; loop112++) {
         if(PATH0 & 134217728) {
            func10(rng());
            if(PATH0 & 268435456) {
               func16();
            }
            else {
               int scalar5 = 1;
               if (scalar4 == 0) {
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
                  func18();
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
         else {
            if(PATH0 & 1073741824) {
               func13(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func17();
            }
            else {
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop115 = 0;
               int loopLimit115 = (rand()%10)/3 + 1;
               for(; loop115 < loopLimit115; loop115++) {
                  if(PATH0 & -2147483648) {
                     func16();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
               }
               int loop116 = 0;
               int loopLimit116 = (rand()%10)/3 + 1;
               for(; loop116 < loopLimit116; loop116++) {
                  func15(rng());
               }
               int scalar6 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop117 = 0;
      int loopLimit117 = (rand()%10)/2 + 1;
      for(; loop117 < loopLimit117; loop117++) {
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
         int loop118 = 0;
         int loopLimit118 = (rand()%10)/2 + 1;
         for(; loop118 < loopLimit118; loop118++) {
            if(PATH0 & -2147483648) {
               func13(rng());
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
               func17();
            }
            else {
               if(PATH0 & -2147483648) {
                  func16();
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
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
                     func18();
                  }
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop121 = 0;
         int loopLimit121 = (rand()%10)/2 + 1;
         for(; loop121 < loopLimit121; loop121++) {
            func12(rng());
         }
      }
      else {
         int loop122 = 0;
         int loopLimit122 = (rand()%10)/2 + 1;
         for(; loop122 < loopLimit122; loop122++) {
            int scalar4 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop123 = 0;
            int loopLimit123 = (rand()%10)/3 + 1;
            for(; loop123 < loopLimit123; loop123++) {
               if(PATH0 & -2147483648) {
                  func13(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
               else {
                  if(PATH0 & -2147483648) {
                     func16();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar3 == 0) {
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
                        func18();
                     }
                     int scalar6 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
            }
            int loop126 = 0;
            int loopLimit126 = (rand()%10)/3 + 1;
            for(; loop126 < loopLimit126; loop126++) {
               func12(rng());
            }
         }
      }
      int scalar4 = 1;
      int scalar5 = 1;
      printf("DELETE!\n");
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func10(rng());
      if(PATH0 & -2147483648) {
         func16();
      }
      else {
         int scalar6 = 1;
         if (scalar6 == 0) {
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
            func18();
         }
         int scalar7 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar6--;
         printf("DELETE!\n");
      }
      func14(rng());
      if(PATH0 & -2147483648) {
         int scalar6 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop129 = 0;
         int loopLimit129 = (rand()%10)/2 + 1;
         for(; loop129 < loopLimit129; loop129++) {
            if(PATH0 & -2147483648) {
               func13(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar7 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func17();
            }
            else {
               if(PATH0 & -2147483648) {
                  func16();
               }
               else {
                  int scalar7 = 1;
                  if (scalar1 == 0) {
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
                     func18();
                  }
                  int scalar8 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop132 = 0;
         int loopLimit132 = (rand()%10)/2 + 1;
         for(; loop132 < loopLimit132; loop132++) {
            func12(rng());
         }
      }
      else {
         if(PATH0 & -2147483648) {
            int scalar6 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop133 = 0;
            int loopLimit133 = (rand()%10)/2 + 1;
            for(; loop133 < loopLimit133; loop133++) {
               if(PATH0 & -2147483648) {
                  func16();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar6--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
            }
            int loop134 = 0;
            int loopLimit134 = (rand()%10)/2 + 1;
            for(; loop134 < loopLimit134; loop134++) {
               func15(rng());
            }
         }
         else {
            int loop135 = 0;
            int loopLimit135 = (rand()%10)/2 + 1;
            for(; loop135 < loopLimit135; loop135++) {
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop136 = 0;
               int loopLimit136 = (rand()%10)/3 + 1;
               for(; loop136 < loopLimit136; loop136++) {
                  if(PATH0 & -2147483648) {
                     func16();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
               }
               int loop137 = 0;
               int loopLimit137 = (rand()%10)/3 + 1;
               for(; loop137 < loopLimit137; loop137++) {
                  func15(rng());
               }
            }
         }
         int scalar6 = 1;
         int scalar7 = 1;
         printf("DELETE!\n");
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func13(rng());
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar8 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            printf("DELETE!\n");
         }
         func17();
         if(PATH0 & -2147483648) {
            int scalar8 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop138 = 0;
            int loopLimit138 = (rand()%10)/2 + 1;
            for(; loop138 < loopLimit138; loop138++) {
               if(PATH0 & -2147483648) {
                  func16();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar9 = 1;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                     scalar9--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
            }
            int loop139 = 0;
            int loopLimit139 = (rand()%10)/2 + 1;
            for(; loop139 < loopLimit139; loop139++) {
               func15(rng());
            }
         }
         else {
            if(PATH0 & -2147483648) {
               int scalar8 = 1;
               if (scalar3 == 0) {
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
                  func18();
               }
            }
            else {
               int loop142 = 0;
               int loopLimit142 = (rand()%10)/2 + 1;
               for(; loop142 < loopLimit142; loop142++) {
                  int scalar8 = 1;
                  if (scalar7 == 0) {
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
                     func18();
                  }
               }
            }
            int scalar8 = 1;
            int scalar9 = 1;
            printf("DELETE!\n");
            if (scalar8 == 0) {
               printf("IS 0!");
            }
            func16();
            if(PATH0 & -2147483648) {
               int scalar10 = 1;
               if (scalar5 == 0) {
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
                  func18();
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
               int scalar10 = 1;
               int scalar11 = 1;
               printf("DELETE!\n");
               if (scalar2 == 0) {
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

void func4(const unsigned long PATH0) {
   int scalar2 = 1;
   func7(rng());
   if(PATH0 & 1) {
      func13(rng());
      if(PATH0 & 2) {
      }
      else {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         printf("DELETE!\n");
      }
      func17();
   }
   else {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop30 = 0;
      int loopLimit30 = (rand()%10)/2 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         if(PATH0 & 4) {
            func16();
         }
         else {
            if(PATH0 & 8) {
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17();
         }
      }
      int loop31 = 0;
      int loopLimit31 = (rand()%10)/2 + 1;
      for(; loop31 < loopLimit31; loop31++) {
         func15(rng());
      }
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar4--;
      printf("DELETE!\n");
   }
   func11(rng());
   scalar2++;
   scalar2++;
   if(PATH0 & 16) {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop40 = 0;
      int loopLimit40 = (rand()%10)/2 + 1;
      for(; loop40 < loopLimit40; loop40++) {
         if(PATH0 & 32) {
            func13(rng());
            if(PATH0 & 64) {
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func17();
         }
         else {
            if(PATH0 & 128) {
               func16();
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
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
                  func18();
               }
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop43 = 0;
      int loopLimit43 = (rand()%10)/2 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         func12(rng());
      }
   }
   else {
      int loop46 = 0;
      int loopLimit46 = (rand()%10)/2 + 1;
      for(; loop46 < loopLimit46; loop46++) {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop47 = 0;
         int loopLimit47 = (rand()%10)/3 + 1;
         for(; loop47 < loopLimit47; loop47++) {
            if(PATH0 & 512) {
               func13(rng());
               if(PATH0 & 1024) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func17();
            }
            else {
               if(PATH0 & 2048) {
                  func16();
               }
               else {
                  int scalar4 = 1;
                  if (scalar4 == 0) {
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
                     func18();
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
         int loop50 = 0;
         int loopLimit50 = (rand()%10)/3 + 1;
         for(; loop50 < loopLimit50; loop50++) {
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
   if(PATH0 & 8192) {
      func16();
   }
   else {
      int scalar5 = 1;
      if (scalar3 == 0) {
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
         func18();
      }
      int scalar6 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar6--;
      printf("DELETE!\n");
   }
   func14(rng());
   if(PATH0 & 32768) {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop53 = 0;
      int loopLimit53 = (rand()%10)/2 + 1;
      for(; loop53 < loopLimit53; loop53++) {
         if(PATH0 & 65536) {
            func13(rng());
            if(PATH0 & 131072) {
            }
            else {
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17();
         }
         else {
            if(PATH0 & 262144) {
               func16();
            }
            else {
               int scalar6 = 1;
               if (scalar6 == 0) {
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
                  func18();
               }
               int scalar7 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop56 = 0;
      int loopLimit56 = (rand()%10)/2 + 1;
      for(; loop56 < loopLimit56; loop56++) {
         func12(rng());
      }
   }
   else {
      if(PATH0 & 1048576) {
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop57 = 0;
         int loopLimit57 = (rand()%10)/2 + 1;
         for(; loop57 < loopLimit57; loop57++) {
            if(PATH0 & 2097152) {
               func16();
            }
            else {
               if(PATH0 & 4194304) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func17();
            }
         }
         int loop58 = 0;
         int loopLimit58 = (rand()%10)/2 + 1;
         for(; loop58 < loopLimit58; loop58++) {
            func15(rng());
         }
      }
      else {
         int loop59 = 0;
         int loopLimit59 = (rand()%10)/2 + 1;
         for(; loop59 < loopLimit59; loop59++) {
            int scalar5 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop60 = 0;
            int loopLimit60 = (rand()%10)/3 + 1;
            for(; loop60 < loopLimit60; loop60++) {
               if(PATH0 & 8388608) {
                  func16();
               }
               else {
                  if(PATH0 & 16777216) {
                  }
                  else {
                     int scalar6 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
            }
            int loop61 = 0;
            int loopLimit61 = (rand()%10)/3 + 1;
            for(; loop61 < loopLimit61; loop61++) {
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
      if(PATH0 & 33554432) {
      }
      else {
         int scalar7 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         printf("DELETE!\n");
      }
      func17();
      if(PATH0 & 67108864) {
         int scalar7 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop62 = 0;
         int loopLimit62 = (rand()%10)/2 + 1;
         for(; loop62 < loopLimit62; loop62++) {
            if(PATH0 & 134217728) {
               func16();
            }
            else {
               if(PATH0 & 268435456) {
               }
               else {
                  int scalar8 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func17();
            }
         }
         int loop63 = 0;
         int loopLimit63 = (rand()%10)/2 + 1;
         for(; loop63 < loopLimit63; loop63++) {
            func15(rng());
         }
      }
      else {
         if(PATH0 & 536870912) {
            int scalar7 = 1;
            if (scalar3 == 0) {
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
               func18();
            }
         }
         else {
            int loop66 = 0;
            int loopLimit66 = (rand()%10)/2 + 1;
            for(; loop66 < loopLimit66; loop66++) {
               int scalar7 = 1;
               if (scalar2 == 0) {
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
                  func18();
               }
            }
         }
         int scalar7 = 1;
         int scalar8 = 1;
         printf("DELETE!\n");
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func16();
         if(PATH0 & -2147483648) {
            int scalar9 = 1;
            if (scalar6 == 0) {
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
               func18();
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
            int scalar9 = 1;
            int scalar10 = 1;
            printf("DELETE!\n");
            if (scalar2 == 0) {
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

void func7(const unsigned long PATH0) {
   int scalar3 = 1;
   func10(rng());
   if(PATH0 & 1) {
      func16();
   }
   else {
      int scalar4 = 1;
      if (scalar4 == 0) {
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
         func18();
      }
      int scalar5 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   func14(rng());
   scalar3++;
   scalar3++;
   if(PATH0 & 4) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if(PATH0 & 8) {
            func16();
         }
         else {
            if(PATH0 & 16) {
            }
            else {
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17();
         }
      }
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         func15(rng());
      }
   }
   else {
      int loop17 = 0;
      int loopLimit17 = (rand()%10)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop18 = 0;
         int loopLimit18 = (rand()%10)/3 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            if(PATH0 & 32) {
               func16();
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
               func17();
            }
         }
         int loop19 = 0;
         int loopLimit19 = (rand()%10)/3 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            func15(rng());
         }
      }
   }
   int scalar4 = 1;
   int scalar5 = 1;
   printf("DELETE!\n");
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   func13(rng());
   if(PATH0 & 128) {
   }
   else {
      int scalar6 = 1;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      scalar6--;
      printf("DELETE!\n");
   }
   func17();
   if(PATH0 & 256) {
      int scalar6 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop20 = 0;
      int loopLimit20 = (rand()%10)/2 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         if(PATH0 & 512) {
            func16();
         }
         else {
            if(PATH0 & 1024) {
            }
            else {
               int scalar7 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func17();
         }
      }
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         func15(rng());
      }
   }
   else {
      if(PATH0 & 2048) {
         int scalar6 = 1;
         if (scalar5 == 0) {
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
            func18();
         }
      }
      else {
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            int scalar6 = 1;
            if (scalar4 == 0) {
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
               func18();
            }
         }
      }
      int scalar6 = 1;
      int scalar7 = 1;
      printf("DELETE!\n");
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func16();
      if(PATH0 & 16384) {
         int scalar8 = 1;
         if (scalar4 == 0) {
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
            func18();
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
         int scalar8 = 1;
         int scalar9 = 1;
         printf("DELETE!\n");
         if (scalar3 == 0) {
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

void func10(const unsigned long PATH0) {
   int scalar4 = 1;
   func13(rng());
   if(PATH0 & 1) {
   }
   else {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      scalar4--;
      printf("DELETE!\n");
   }
   func17();
   scalar4++;
   scalar4++;
   if(PATH0 & 2) {
      int scalar5 = 1;
      if (scalar5 == 0) {
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
         func18();
      }
   }
   else {
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         int scalar5 = 1;
         if (scalar4 == 0) {
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
            func18();
         }
      }
   }
   int scalar5 = 1;
   int scalar6 = 1;
   printf("DELETE!\n");
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   func16();
   if(PATH0 & 16) {
      int scalar7 = 1;
      if (scalar6 == 0) {
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
         func18();
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
      int scalar7 = 1;
      int scalar8 = 1;
      printf("DELETE!\n");
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 128) {
      }
      else {
      }
   }
   printf("DELETE!\n");
}

void func13(const unsigned long PATH0) {
   int scalar5 = 1;
   func16();
   scalar5++;
   scalar5++;
   if(PATH0 & 1) {
   }
   else {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
      }
   }
   int scalar6 = 1;
   int scalar7 = 1;
   printf("DELETE!\n");
   if (scalar7 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
   printf("DELETE!\n");
}

void func16() {
   int scalar6 = 1;
   scalar6++;
   scalar6++;
   printf("DELETE!\n");
}

void func17() {
}

void func18() {
}

void func14(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
      }
   }
   int scalar4 = 1;
   int scalar5 = 1;
   printf("DELETE!\n");
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
}

void func15(const unsigned long PATH0) {
   int scalar5 = 1;
   if (scalar5 == 0) {
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
      func18();
   }
}

void func11(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar3 = 1;
      if (scalar3 == 0) {
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
         func18();
      }
   }
   else {
      int loop34 = 0;
      int loopLimit34 = (rand()%10)/2 + 1;
      for(; loop34 < loopLimit34; loop34++) {
         int scalar3 = 1;
         if (scalar3 == 0) {
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
            func18();
         }
      }
   }
   int scalar3 = 1;
   int scalar4 = 1;
   printf("DELETE!\n");
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   func16();
   if(PATH0 & 8) {
      int scalar5 = 1;
      if (scalar5 == 0) {
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
         func18();
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
      int scalar5 = 1;
      int scalar6 = 1;
      printf("DELETE!\n");
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 64) {
      }
      else {
      }
   }
}

void func12(const unsigned long PATH0) {
   int scalar4 = 1;
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop44 = 0;
   int loopLimit44 = (rand()%10)/3 + 1;
   for(; loop44 < loopLimit44; loop44++) {
      if(PATH0 & 1) {
         func16();
      }
      else {
         if(PATH0 & 2) {
         }
         else {
            int scalar5 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            printf("DELETE!\n");
         }
         func17();
      }
   }
   int loop45 = 0;
   int loopLimit45 = (rand()%10)/3 + 1;
   for(; loop45 < loopLimit45; loop45++) {
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
      int loop78 = 0;
      int loopLimit78 = (rand()%10)/2 + 1;
      for(; loop78 < loopLimit78; loop78++) {
         if(PATH0 & 2) {
            func16();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17();
         }
      }
      int loop79 = 0;
      int loopLimit79 = (rand()%10)/2 + 1;
      for(; loop79 < loopLimit79; loop79++) {
         func15(rng());
      }
   }
   else {
      int loop80 = 0;
      int loopLimit80 = (rand()%10)/2 + 1;
      for(; loop80 < loopLimit80; loop80++) {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop81 = 0;
         int loopLimit81 = (rand()%10)/3 + 1;
         for(; loop81 < loopLimit81; loop81++) {
            if(PATH0 & 8) {
               func16();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func17();
            }
         }
         int loop82 = 0;
         int loopLimit82 = (rand()%10)/3 + 1;
         for(; loop82 < loopLimit82; loop82++) {
            func15(rng());
         }
      }
   }
   int scalar2 = 1;
   int scalar3 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func13(rng());
   if(PATH0 & 32) {
   }
   else {
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar4--;
      printf("DELETE!\n");
   }
   func17();
   if(PATH0 & 64) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop83 = 0;
      int loopLimit83 = (rand()%10)/2 + 1;
      for(; loop83 < loopLimit83; loop83++) {
         if(PATH0 & 128) {
            func16();
         }
         else {
            if(PATH0 & 256) {
            }
            else {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17();
         }
      }
      int loop84 = 0;
      int loopLimit84 = (rand()%10)/2 + 1;
      for(; loop84 < loopLimit84; loop84++) {
         func15(rng());
      }
   }
   else {
      if(PATH0 & 512) {
         int scalar4 = 1;
         if (scalar4 == 0) {
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
            func18();
         }
      }
      else {
         int loop87 = 0;
         int loopLimit87 = (rand()%10)/2 + 1;
         for(; loop87 < loopLimit87; loop87++) {
            int scalar4 = 1;
            if (scalar3 == 0) {
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
               func18();
            }
         }
      }
      int scalar4 = 1;
      int scalar5 = 1;
      printf("DELETE!\n");
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func16();
      if(PATH0 & 4096) {
         int scalar6 = 1;
         if (scalar2 == 0) {
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
            func18();
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
         int scalar6 = 1;
         int scalar7 = 1;
         printf("DELETE!\n");
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 32768) {
         }
         else {
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
   int loop99 = 0;
   int loopLimit99 = (rand()%10)/3 + 1;
   for(; loop99 < loopLimit99; loop99++) {
      if(PATH0 & 1) {
         func13(rng());
         if(PATH0 & 2) {
         }
         else {
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func17();
      }
      else {
         if(PATH0 & 4) {
            func16();
         }
         else {
            int scalar4 = 1;
            if (scalar4 == 0) {
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
               func18();
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
   int loop102 = 0;
   int loopLimit102 = (rand()%10)/3 + 1;
   for(; loop102 < loopLimit102; loop102++) {
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
      int loop156 = 0;
      int loopLimit156 = (rand()%10)/2 + 1;
      for(; loop156 < loopLimit156; loop156++) {
         if(PATH0 & 2) {
            func13(rng());
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
            func17();
         }
         else {
            if(PATH0 & 8) {
               func16();
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
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
                  func18();
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
      }
      int loop159 = 0;
      int loopLimit159 = (rand()%10)/2 + 1;
      for(; loop159 < loopLimit159; loop159++) {
         func12(rng());
      }
   }
   else {
      int loop160 = 0;
      int loopLimit160 = (rand()%10)/2 + 1;
      for(; loop160 < loopLimit160; loop160++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop161 = 0;
         int loopLimit161 = (rand()%10)/3 + 1;
         for(; loop161 < loopLimit161; loop161++) {
            if(PATH0 & 32) {
               func13(rng());
               if(PATH0 & 64) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func17();
            }
            else {
               if(PATH0 & 128) {
                  func16();
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
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
                     func18();
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func14(rng());
            }
         }
         int loop164 = 0;
         int loopLimit164 = (rand()%10)/3 + 1;
         for(; loop164 < loopLimit164; loop164++) {
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
   if(PATH0 & 512) {
      func16();
   }
   else {
      int scalar3 = 1;
      if (scalar1 == 0) {
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
         func18();
      }
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      printf("DELETE!\n");
   }
   func14(rng());
   if(PATH0 & 2048) {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop167 = 0;
      int loopLimit167 = (rand()%10)/2 + 1;
      for(; loop167 < loopLimit167; loop167++) {
         if(PATH0 & 4096) {
            func13(rng());
            if(PATH0 & 8192) {
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func17();
         }
         else {
            if(PATH0 & 16384) {
               func16();
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
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
                  func18();
               }
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
      }
      int loop170 = 0;
      int loopLimit170 = (rand()%10)/2 + 1;
      for(; loop170 < loopLimit170; loop170++) {
         func12(rng());
      }
   }
   else {
      if(PATH0 & 65536) {
         int scalar3 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop171 = 0;
         int loopLimit171 = (rand()%10)/2 + 1;
         for(; loop171 < loopLimit171; loop171++) {
            if(PATH0 & 131072) {
               func16();
            }
            else {
               if(PATH0 & 262144) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func17();
            }
         }
         int loop172 = 0;
         int loopLimit172 = (rand()%10)/2 + 1;
         for(; loop172 < loopLimit172; loop172++) {
            func15(rng());
         }
      }
      else {
         int loop173 = 0;
         int loopLimit173 = (rand()%10)/2 + 1;
         for(; loop173 < loopLimit173; loop173++) {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop174 = 0;
            int loopLimit174 = (rand()%10)/3 + 1;
            for(; loop174 < loopLimit174; loop174++) {
               if(PATH0 & 524288) {
                  func16();
               }
               else {
                  if(PATH0 & 1048576) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
            }
            int loop175 = 0;
            int loopLimit175 = (rand()%10)/3 + 1;
            for(; loop175 < loopLimit175; loop175++) {
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
      if(PATH0 & 2097152) {
      }
      else {
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func17();
      if(PATH0 & 4194304) {
         int scalar5 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop176 = 0;
         int loopLimit176 = (rand()%10)/2 + 1;
         for(; loop176 < loopLimit176; loop176++) {
            if(PATH0 & 8388608) {
               func16();
            }
            else {
               if(PATH0 & 16777216) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17();
            }
         }
         int loop177 = 0;
         int loopLimit177 = (rand()%10)/2 + 1;
         for(; loop177 < loopLimit177; loop177++) {
            func15(rng());
         }
      }
      else {
         if(PATH0 & 33554432) {
            int scalar5 = 1;
            if (scalar3 == 0) {
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
               func18();
            }
         }
         else {
            int loop180 = 0;
            int loopLimit180 = (rand()%10)/2 + 1;
            for(; loop180 < loopLimit180; loop180++) {
               int scalar5 = 1;
               if (scalar4 == 0) {
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
                  func18();
               }
            }
         }
         int scalar5 = 1;
         int scalar6 = 1;
         printf("DELETE!\n");
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         func16();
         if(PATH0 & 268435456) {
            int scalar7 = 1;
            if (scalar3 == 0) {
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
               func18();
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
            int scalar7 = 1;
            int scalar8 = 1;
            printf("DELETE!\n");
            if (scalar7 == 0) {
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

void func6(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop202 = 0;
   int loopLimit202 = (rand()%10)/3 + 1;
   for(; loop202 < loopLimit202; loop202++) {
      if(PATH0 & 1) {
         func10(rng());
         if(PATH0 & 2) {
            func16();
         }
         else {
            int scalar3 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop203 = 0;
            int loopLimit203 = (rand()%10)/4 + 1;
            for(; loop203 < loopLimit203; loop203++) {
               if(PATH0 & 4) {
               }
               else {
               }
            }
            int loop204 = 0;
            int loopLimit204 = (rand()%10)/4 + 1;
            for(; loop204 < loopLimit204; loop204++) {
               func18();
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
         if(PATH0 & 8) {
            func13(rng());
            if(PATH0 & 16) {
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func17();
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop205 = 0;
            int loopLimit205 = (rand()%10)/4 + 1;
            for(; loop205 < loopLimit205; loop205++) {
               if(PATH0 & 32) {
                  func16();
               }
               else {
                  if(PATH0 & 64) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
            }
            int loop206 = 0;
            int loopLimit206 = (rand()%10)/4 + 1;
            for(; loop206 < loopLimit206; loop206++) {
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
   }
   int loop207 = 0;
   int loopLimit207 = (rand()%10)/3 + 1;
   for(; loop207 < loopLimit207; loop207++) {
      func9(rng());
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop208 = 0;
      int loopLimit208 = (rand()%10)/2 + 1;
      for(; loop208 < loopLimit208; loop208++) {
         if(PATH0 & 2) {
            func10(rng());
            if(PATH0 & 4) {
               func16();
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop209 = 0;
               int loopLimit209 = (rand()%10)/3 + 1;
               for(; loop209 < loopLimit209; loop209++) {
                  if(PATH0 & 8) {
                  }
                  else {
                  }
               }
               int loop210 = 0;
               int loopLimit210 = (rand()%10)/3 + 1;
               for(; loop210 < loopLimit210; loop210++) {
                  func18();
               }
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            if(PATH0 & 16) {
               func13(rng());
               if(PATH0 & 32) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func17();
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop211 = 0;
               int loopLimit211 = (rand()%10)/3 + 1;
               for(; loop211 < loopLimit211; loop211++) {
                  if(PATH0 & 64) {
                     func16();
                  }
                  else {
                     if(PATH0 & 128) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
               }
               int loop212 = 0;
               int loopLimit212 = (rand()%10)/3 + 1;
               for(; loop212 < loopLimit212; loop212++) {
                  func15(rng());
               }
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop213 = 0;
      int loopLimit213 = (rand()%10)/2 + 1;
      for(; loop213 < loopLimit213; loop213++) {
         func9(rng());
      }
   }
   else {
      int loop214 = 0;
      int loopLimit214 = (rand()%10)/2 + 1;
      for(; loop214 < loopLimit214; loop214++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop215 = 0;
         int loopLimit215 = (rand()%10)/3 + 1;
         for(; loop215 < loopLimit215; loop215++) {
            if(PATH0 & 256) {
               func10(rng());
               if(PATH0 & 512) {
                  func16();
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop216 = 0;
                  int loopLimit216 = (rand()%10)/4 + 1;
                  for(; loop216 < loopLimit216; loop216++) {
                     if(PATH0 & 1024) {
                     }
                     else {
                     }
                  }
                  int loop217 = 0;
                  int loopLimit217 = (rand()%10)/4 + 1;
                  for(; loop217 < loopLimit217; loop217++) {
                     func18();
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
               if(PATH0 & 2048) {
                  func13(rng());
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
                  func17();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop218 = 0;
                  int loopLimit218 = (rand()%10)/4 + 1;
                  for(; loop218 < loopLimit218; loop218++) {
                     if(PATH0 & 8192) {
                        func16();
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
                        func17();
                     }
                  }
                  int loop219 = 0;
                  int loopLimit219 = (rand()%10)/4 + 1;
                  for(; loop219 < loopLimit219; loop219++) {
                     func15(rng());
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func11(rng());
            }
         }
         int loop220 = 0;
         int loopLimit220 = (rand()%10)/3 + 1;
         for(; loop220 < loopLimit220; loop220++) {
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
   if(PATH0 & 32768) {
      func13(rng());
      if(PATH0 & 65536) {
      }
      else {
         int scalar3 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar3--;
         printf("DELETE!\n");
      }
      func17();
   }
   else {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop221 = 0;
      int loopLimit221 = (rand()%10)/2 + 1;
      for(; loop221 < loopLimit221; loop221++) {
         if(PATH0 & 131072) {
            func16();
         }
         else {
            if(PATH0 & 262144) {
            }
            else {
               int scalar4 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17();
         }
      }
      int loop222 = 0;
      int loopLimit222 = (rand()%10)/2 + 1;
      for(; loop222 < loopLimit222; loop222++) {
         func15(rng());
      }
      int scalar4 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      printf("DELETE!\n");
   }
   func11(rng());
   if(PATH0 & 524288) {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop223 = 0;
      int loopLimit223 = (rand()%10)/2 + 1;
      for(; loop223 < loopLimit223; loop223++) {
         if(PATH0 & 1048576) {
            func10(rng());
            if(PATH0 & 2097152) {
               func16();
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop224 = 0;
               int loopLimit224 = (rand()%10)/3 + 1;
               for(; loop224 < loopLimit224; loop224++) {
                  if(PATH0 & 4194304) {
                  }
                  else {
                  }
               }
               int loop225 = 0;
               int loopLimit225 = (rand()%10)/3 + 1;
               for(; loop225 < loopLimit225; loop225++) {
                  func18();
               }
               int scalar5 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14(rng());
         }
         else {
            if(PATH0 & 8388608) {
               func13(rng());
               if(PATH0 & 16777216) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func17();
            }
            else {
               int scalar4 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop226 = 0;
               int loopLimit226 = (rand()%10)/3 + 1;
               for(; loop226 < loopLimit226; loop226++) {
                  if(PATH0 & 33554432) {
                     func16();
                  }
                  else {
                     if(PATH0 & 67108864) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
               }
               int loop227 = 0;
               int loopLimit227 = (rand()%10)/3 + 1;
               for(; loop227 < loopLimit227; loop227++) {
                  func15(rng());
               }
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
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
      if(PATH0 & 134217728) {
         int scalar3 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop229 = 0;
         int loopLimit229 = (rand()%10)/2 + 1;
         for(; loop229 < loopLimit229; loop229++) {
            if(PATH0 & 268435456) {
               func13(rng());
               if(PATH0 & 536870912) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func17();
            }
            else {
               if(PATH0 & 1073741824) {
                  func16();
               }
               else {
                  int scalar4 = 1;
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
                     func18();
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
         int loop232 = 0;
         int loopLimit232 = (rand()%10)/2 + 1;
         for(; loop232 < loopLimit232; loop232++) {
            func12(rng());
         }
      }
      else {
         int loop233 = 0;
         int loopLimit233 = (rand()%10)/2 + 1;
         for(; loop233 < loopLimit233; loop233++) {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop234 = 0;
            int loopLimit234 = (rand()%10)/3 + 1;
            for(; loop234 < loopLimit234; loop234++) {
               if(PATH0 & -2147483648) {
                  func13(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
               else {
                  if(PATH0 & -2147483648) {
                     func16();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop235 = 0;
                     int loopLimit235 = (rand()%10)/4 + 1;
                     for(; loop235 < loopLimit235; loop235++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop236 = 0;
                     int loopLimit236 = (rand()%10)/4 + 1;
                     for(; loop236 < loopLimit236; loop236++) {
                        func18();
                     }
                     int scalar5 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func14(rng());
               }
            }
            int loop237 = 0;
            int loopLimit237 = (rand()%10)/3 + 1;
            for(; loop237 < loopLimit237; loop237++) {
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
      if(PATH0 & -2147483648) {
         func16();
      }
      else {
         int scalar5 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop238 = 0;
         int loopLimit238 = (rand()%10)/2 + 1;
         for(; loop238 < loopLimit238; loop238++) {
            if(PATH0 & -2147483648) {
            }
            else {
            }
         }
         int loop239 = 0;
         int loopLimit239 = (rand()%10)/2 + 1;
         for(; loop239 < loopLimit239; loop239++) {
            func18();
         }
         int scalar6 = 1;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func14(rng());
      if(PATH0 & -2147483648) {
         int scalar5 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop240 = 0;
         int loopLimit240 = (rand()%10)/2 + 1;
         for(; loop240 < loopLimit240; loop240++) {
            if(PATH0 & -2147483648) {
               func13(rng());
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
               func17();
            }
            else {
               if(PATH0 & -2147483648) {
                  func16();
               }
               else {
                  int scalar6 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop241 = 0;
                  int loopLimit241 = (rand()%10)/3 + 1;
                  for(; loop241 < loopLimit241; loop241++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop242 = 0;
                  int loopLimit242 = (rand()%10)/3 + 1;
                  for(; loop242 < loopLimit242; loop242++) {
                     func18();
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
         int loop243 = 0;
         int loopLimit243 = (rand()%10)/2 + 1;
         for(; loop243 < loopLimit243; loop243++) {
            func12(rng());
         }
      }
      else {
         if(PATH0 & -2147483648) {
            int scalar5 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop244 = 0;
            int loopLimit244 = (rand()%10)/2 + 1;
            for(; loop244 < loopLimit244; loop244++) {
               if(PATH0 & -2147483648) {
                  func16();
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
                  func17();
               }
            }
            int loop245 = 0;
            int loopLimit245 = (rand()%10)/2 + 1;
            for(; loop245 < loopLimit245; loop245++) {
               func15(rng());
            }
         }
         else {
            int loop246 = 0;
            int loopLimit246 = (rand()%10)/2 + 1;
            for(; loop246 < loopLimit246; loop246++) {
               int scalar5 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop247 = 0;
               int loopLimit247 = (rand()%10)/3 + 1;
               for(; loop247 < loopLimit247; loop247++) {
                  if(PATH0 & -2147483648) {
                     func16();
                  }
                  else {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                        int scalar6 = 1;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                        scalar6--;
                        printf("DELETE!\n");
                     }
                     func17();
                  }
               }
               int loop248 = 0;
               int loopLimit248 = (rand()%10)/3 + 1;
               for(; loop248 < loopLimit248; loop248++) {
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
         }
         else {
            int scalar7 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar5--;
            printf("DELETE!\n");
         }
         func17();
         if(PATH0 & -2147483648) {
            int scalar7 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop249 = 0;
            int loopLimit249 = (rand()%10)/2 + 1;
            for(; loop249 < loopLimit249; loop249++) {
               if(PATH0 & -2147483648) {
                  func16();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar8 = 1;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
            }
            int loop250 = 0;
            int loopLimit250 = (rand()%10)/2 + 1;
            for(; loop250 < loopLimit250; loop250++) {
               func15(rng());
            }
         }
         else {
            if(PATH0 & -2147483648) {
               int scalar7 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop251 = 0;
               int loopLimit251 = (rand()%10)/2 + 1;
               for(; loop251 < loopLimit251; loop251++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop252 = 0;
               int loopLimit252 = (rand()%10)/2 + 1;
               for(; loop252 < loopLimit252; loop252++) {
                  func18();
               }
            }
            else {
               int loop253 = 0;
               int loopLimit253 = (rand()%10)/2 + 1;
               for(; loop253 < loopLimit253; loop253++) {
                  int scalar7 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop254 = 0;
                  int loopLimit254 = (rand()%10)/3 + 1;
                  for(; loop254 < loopLimit254; loop254++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop255 = 0;
                  int loopLimit255 = (rand()%10)/3 + 1;
                  for(; loop255 < loopLimit255; loop255++) {
                     func18();
                  }
               }
            }
            int scalar7 = 1;
            int scalar8 = 1;
            printf("DELETE!\n");
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            func16();
            if(PATH0 & -2147483648) {
               int scalar9 = 1;
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop256 = 0;
               int loopLimit256 = (rand()%10)/2 + 1;
               for(; loop256 < loopLimit256; loop256++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop257 = 0;
               int loopLimit257 = (rand()%10)/2 + 1;
               for(; loop257 < loopLimit257; loop257++) {
                  func18();
               }
            }
            else {
               if(PATH0 & -2147483648) {
               }
               else {
                  int loop258 = 0;
                  int loopLimit258 = (rand()%10)/2 + 1;
                  for(; loop258 < loopLimit258; loop258++) {
                  }
               }
               int scalar9 = 1;
               int scalar10 = 1;
               printf("DELETE!\n");
               if (scalar10 == 0) {
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

void func3(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop275 = 0;
   int loopLimit275 = (rand()%10)/3 + 1;
   for(; loop275 < loopLimit275; loop275++) {
      if(PATH0 & 1) {
         func7(rng());
         if(PATH0 & 2) {
            func13(rng());
            if(PATH0 & 4) {
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func17();
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop276 = 0;
            int loopLimit276 = (rand()%10)/4 + 1;
            for(; loop276 < loopLimit276; loop276++) {
               if(PATH0 & 8) {
                  func16();
               }
               else {
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
                  func17();
               }
            }
            int loop277 = 0;
            int loopLimit277 = (rand()%10)/4 + 1;
            for(; loop277 < loopLimit277; loop277++) {
               func15(rng());
            }
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func11(rng());
      }
      else {
         if(PATH0 & 32) {
            func10(rng());
            if(PATH0 & 64) {
               func16();
            }
            else {
               int scalar3 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop278 = 0;
               int loopLimit278 = (rand()%10)/4 + 1;
               for(; loop278 < loopLimit278; loop278++) {
                  if(PATH0 & 128) {
                  }
                  else {
                  }
               }
               int loop279 = 0;
               int loopLimit279 = (rand()%10)/4 + 1;
               for(; loop279 < loopLimit279; loop279++) {
                  func18();
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
         else {
            int scalar3 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop280 = 0;
            int loopLimit280 = (rand()%10)/4 + 1;
            for(; loop280 < loopLimit280; loop280++) {
               if(PATH0 & 256) {
                  func13(rng());
                  if(PATH0 & 512) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func17();
               }
               else {
                  if(PATH0 & 1024) {
                     func16();
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop281 = 0;
                     int loopLimit281 = (rand()%10)/5 + 1;
                     for(; loop281 < loopLimit281; loop281++) {
                        if(PATH0 & 2048) {
                        }
                        else {
                        }
                     }
                     int loop282 = 0;
                     int loopLimit282 = (rand()%10)/5 + 1;
                     for(; loop282 < loopLimit282; loop282++) {
                        func18();
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
            int loop283 = 0;
            int loopLimit283 = (rand()%10)/4 + 1;
            for(; loop283 < loopLimit283; loop283++) {
               func12(rng());
            }
            int scalar4 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func8(rng());
      }
   }
   int loop284 = 0;
   int loopLimit284 = (rand()%10)/3 + 1;
   for(; loop284 < loopLimit284; loop284++) {
      func6(rng());
   }
}

