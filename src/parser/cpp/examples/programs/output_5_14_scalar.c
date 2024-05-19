#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0, const unsigned long PATH1);
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func10(const unsigned long PATH0);
void func13();
void func14();
void func15();
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
   func0(rng(), rng());
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0, const unsigned long PATH1) {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      func1(rng());
      if(PATH0 & 1) {
         func7(rng());
         if(PATH0 & 2) {
            func13();
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
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
               func15();
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
         int loop74 = 0;
         int loopLimit74 = (rand()%10)/2 + 1;
         for(; loop74 < loopLimit74; loop74++) {
            if(PATH0 & 8) {
               func10(rng());
               if(PATH0 & 16) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func14();
            }
            else {
               if(PATH0 & 32) {
                  func13();
               }
               else {
                  int scalar2 = 1;
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
                     func15();
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
         }
         int loop77 = 0;
         int loopLimit77 = (rand()%10)/2 + 1;
         for(; loop77 < loopLimit77; loop77++) {
            func9(rng());
         }
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         printf("DELETE!\n");
      }
      func5(rng());
      if(PATH0 & 128) {
         func4(rng());
         if(PATH0 & 256) {
            func10(rng());
            if(PATH0 & 512) {
            }
            else {
               int scalar1 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14();
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop93 = 0;
            int loopLimit93 = (rand()%10)/2 + 1;
            for(; loop93 < loopLimit93; loop93++) {
               if(PATH0 & 1024) {
                  func13();
               }
               else {
                  if(PATH0 & 2048) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func14();
               }
            }
            int loop94 = 0;
            int loopLimit94 = (rand()%10)/2 + 1;
            for(; loop94 < loopLimit94; loop94++) {
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
         int loop95 = 0;
         int loopLimit95 = (rand()%10)/2 + 1;
         for(; loop95 < loopLimit95; loop95++) {
            if(PATH0 & 4096) {
               func7(rng());
               if(PATH0 & 8192) {
                  func13();
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop96 = 0;
                  int loopLimit96 = (rand()%10)/3 + 1;
                  for(; loop96 < loopLimit96; loop96++) {
                     if(PATH0 & 16384) {
                     }
                     else {
                     }
                  }
                  int loop97 = 0;
                  int loopLimit97 = (rand()%10)/3 + 1;
                  for(; loop97 < loopLimit97; loop97++) {
                     func15();
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
               if(PATH0 & 32768) {
                  func10(rng());
                  if(PATH0 & 65536) {
                  }
                  else {
                     int scalar2 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func14();
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop98 = 0;
                  int loopLimit98 = (rand()%10)/3 + 1;
                  for(; loop98 < loopLimit98; loop98++) {
                     if(PATH0 & 131072) {
                        func13();
                     }
                     else {
                        if(PATH0 & 262144) {
                        }
                        else {
                           int scalar3 = 1;
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func14();
                     }
                  }
                  int loop99 = 0;
                  int loopLimit99 = (rand()%10)/3 + 1;
                  for(; loop99 < loopLimit99; loop99++) {
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
         int loop100 = 0;
         int loopLimit100 = (rand()%10)/2 + 1;
         for(; loop100 < loopLimit100; loop100++) {
            func6(rng());
         }
         int scalar2 = 1;
         if (scalar1 == 0) {
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
      int loop135 = 0;
      int loopLimit135 = (rand()%10)/2 + 1;
      for(; loop135 < loopLimit135; loop135++) {
         if(PATH0 & 524288) {
            func4(rng());
            if(PATH0 & 1048576) {
               func10(rng());
               if(PATH0 & 2097152) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func14();
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop136 = 0;
               int loopLimit136 = (rand()%10)/3 + 1;
               for(; loop136 < loopLimit136; loop136++) {
                  if(PATH0 & 4194304) {
                     func13();
                  }
                  else {
                     if(PATH0 & 8388608) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar1--;
                        printf("DELETE!\n");
                     }
                     func14();
                  }
               }
               int loop137 = 0;
               int loopLimit137 = (rand()%10)/3 + 1;
               for(; loop137 < loopLimit137; loop137++) {
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
         }
         else {
            if(PATH0 & 16777216) {
               func7(rng());
               if(PATH0 & 33554432) {
                  func13();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop138 = 0;
                  int loopLimit138 = (rand()%10)/3 + 1;
                  for(; loop138 < loopLimit138; loop138++) {
                     if(PATH0 & 67108864) {
                     }
                     else {
                     }
                  }
                  int loop139 = 0;
                  int loopLimit139 = (rand()%10)/3 + 1;
                  for(; loop139 < loopLimit139; loop139++) {
                     func15();
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
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop140 = 0;
               int loopLimit140 = (rand()%10)/3 + 1;
               for(; loop140 < loopLimit140; loop140++) {
                  if(PATH0 & 134217728) {
                     func10(rng());
                     if(PATH0 & 268435456) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar1 == 0) {
                           printf("IS 0!");
                        }
                        scalar3--;
                        printf("DELETE!\n");
                     }
                     func14();
                  }
                  else {
                     if(PATH0 & 536870912) {
                        func13();
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop141 = 0;
                        int loopLimit141 = (rand()%10)/4 + 1;
                        for(; loop141 < loopLimit141; loop141++) {
                           if(PATH0 & 1073741824) {
                           }
                           else {
                           }
                        }
                        int loop142 = 0;
                        int loopLimit142 = (rand()%10)/4 + 1;
                        for(; loop142 < loopLimit142; loop142++) {
                           func15();
                        }
                        int scalar4 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar4--;
                        printf("DELETE!\n");
                     }
                     func11(rng());
                  }
               }
               int loop143 = 0;
               int loopLimit143 = (rand()%10)/3 + 1;
               for(; loop143 < loopLimit143; loop143++) {
                  func9(rng());
               }
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func5(rng());
         }
      }
      int loop144 = 0;
      int loopLimit144 = (rand()%10)/2 + 1;
      for(; loop144 < loopLimit144; loop144++) {
         func3(rng());
      }
      if(PATH0 & -2147483648) {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop151 = 0;
         int loopLimit151 = (rand()%10)/2 + 1;
         for(; loop151 < loopLimit151; loop151++) {
            if(PATH0 & -2147483648) {
               func7(rng());
               if(PATH0 & -2147483648) {
                  func13();
               }
               else {
                  int scalar3 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop152 = 0;
                  int loopLimit152 = (rand()%10)/3 + 1;
                  for(; loop152 < loopLimit152; loop152++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop153 = 0;
                  int loopLimit153 = (rand()%10)/3 + 1;
                  for(; loop153 < loopLimit153; loop153++) {
                     func15();
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
               if(PATH0 & -2147483648) {
                  func10(rng());
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
                  func14();
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop154 = 0;
                  int loopLimit154 = (rand()%10)/3 + 1;
                  for(; loop154 < loopLimit154; loop154++) {
                     if(PATH0 & -2147483648) {
                        func13();
                     }
                     else {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                           int scalar4 = 1;
                           if (scalar1 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func14();
                     }
                  }
                  int loop155 = 0;
                  int loopLimit155 = (rand()%10)/3 + 1;
                  for(; loop155 < loopLimit155; loop155++) {
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
         int loop156 = 0;
         int loopLimit156 = (rand()%10)/2 + 1;
         for(; loop156 < loopLimit156; loop156++) {
            func6(rng());
         }
      }
      else {
         int loop157 = 0;
         int loopLimit157 = (rand()%10)/2 + 1;
         for(; loop157 < loopLimit157; loop157++) {
            int scalar2 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop158 = 0;
            int loopLimit158 = (rand()%10)/3 + 1;
            for(; loop158 < loopLimit158; loop158++) {
               if(PATH0 & -2147483648) {
                  func7(rng());
                  if(PATH0 & -2147483648) {
                     func13();
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop159 = 0;
                     int loopLimit159 = (rand()%10)/4 + 1;
                     for(; loop159 < loopLimit159; loop159++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop160 = 0;
                     int loopLimit160 = (rand()%10)/4 + 1;
                     for(; loop160 < loopLimit160; loop160++) {
                        func15();
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
               else {
                  if(PATH0 & -2147483648) {
                     func10(rng());
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
                     func14();
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop161 = 0;
                     int loopLimit161 = (rand()%10)/4 + 1;
                     for(; loop161 < loopLimit161; loop161++) {
                        if(PATH0 & -2147483648) {
                           func13();
                        }
                        else {
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
                           func14();
                        }
                     }
                     int loop162 = 0;
                     int loopLimit162 = (rand()%10)/4 + 1;
                     for(; loop162 < loopLimit162; loop162++) {
                        func12(rng());
                     }
                     int scalar4 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func8(rng());
               }
            }
            int loop163 = 0;
            int loopLimit163 = (rand()%10)/3 + 1;
            for(; loop163 < loopLimit163; loop163++) {
               func6(rng());
            }
         }
      }
      int scalar2 = 1;
      int scalar3 = 1;
      printf("DELETE!\n");
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func4(rng());
      if(PATH0 & -2147483648) {
         func10(rng());
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func14();
      }
      else {
         int scalar4 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop164 = 0;
         int loopLimit164 = (rand()%10)/2 + 1;
         for(; loop164 < loopLimit164; loop164++) {
            if(PATH0 & -2147483648) {
               func13();
            }
            else {
               if(PATH0 & -2147483648) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func14();
            }
         }
         int loop165 = 0;
         int loopLimit165 = (rand()%10)/2 + 1;
         for(; loop165 < loopLimit165; loop165++) {
            func12(rng());
         }
         int scalar5 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func8(rng());
      if(PATH0 & -2147483648) {
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop166 = 0;
         int loopLimit166 = (rand()%10)/2 + 1;
         for(; loop166 < loopLimit166; loop166++) {
            if(PATH0 & -2147483648) {
               func7(rng());
               if(PATH0 & -2147483648) {
                  func13();
               }
               else {
                  int scalar5 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop167 = 0;
                  int loopLimit167 = (rand()%10)/3 + 1;
                  for(; loop167 < loopLimit167; loop167++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop168 = 0;
                  int loopLimit168 = (rand()%10)/3 + 1;
                  for(; loop168 < loopLimit168; loop168++) {
                     func15();
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
            else {
               if(PATH0 & -2147483648) {
                  func10(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func14();
               }
               else {
                  int scalar5 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop169 = 0;
                  int loopLimit169 = (rand()%10)/3 + 1;
                  for(; loop169 < loopLimit169; loop169++) {
                     if(PATH0 & -2147483648) {
                        func13();
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
                        func14();
                     }
                  }
                  int loop170 = 0;
                  int loopLimit170 = (rand()%10)/3 + 1;
                  for(; loop170 < loopLimit170; loop170++) {
                     func12(rng());
                  }
                  int scalar6 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop171 = 0;
         int loopLimit171 = (rand()%10)/2 + 1;
         for(; loop171 < loopLimit171; loop171++) {
            func6(rng());
         }
      }
      else {
         if(PATH0 & -2147483648) {
            int scalar4 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop172 = 0;
            int loopLimit172 = (rand()%10)/2 + 1;
            for(; loop172 < loopLimit172; loop172++) {
               if(PATH0 & -2147483648) {
                  func10(rng());
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func14();
               }
               else {
                  if(PATH0 & -2147483648) {
                     func13();
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop173 = 0;
                     int loopLimit173 = (rand()%10)/3 + 1;
                     for(; loop173 < loopLimit173; loop173++) {
                        if(PATH0 & -2147483648) {
                        }
                        else {
                        }
                     }
                     int loop174 = 0;
                     int loopLimit174 = (rand()%10)/3 + 1;
                     for(; loop174 < loopLimit174; loop174++) {
                        func15();
                     }
                     int scalar6 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     scalar5--;
                     printf("DELETE!\n");
                  }
                  func11(rng());
               }
            }
            int loop175 = 0;
            int loopLimit175 = (rand()%10)/2 + 1;
            for(; loop175 < loopLimit175; loop175++) {
               func9(rng());
            }
         }
         else {
            int loop176 = 0;
            int loopLimit176 = (rand()%10)/2 + 1;
            for(; loop176 < loopLimit176; loop176++) {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop177 = 0;
               int loopLimit177 = (rand()%10)/3 + 1;
               for(; loop177 < loopLimit177; loop177++) {
                  if(PATH0 & -2147483648) {
                     func10(rng());
                     if(PATH1 & 1) {
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func14();
                  }
                  else {
                     if(PATH1 & 2) {
                        func13();
                     }
                     else {
                        int scalar5 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        printf("DELETE!\n");
                        int loop178 = 0;
                        int loopLimit178 = (rand()%10)/4 + 1;
                        for(; loop178 < loopLimit178; loop178++) {
                           if(PATH1 & 4) {
                           }
                           else {
                           }
                        }
                        int loop179 = 0;
                        int loopLimit179 = (rand()%10)/4 + 1;
                        for(; loop179 < loopLimit179; loop179++) {
                           func15();
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
               int loop180 = 0;
               int loopLimit180 = (rand()%10)/3 + 1;
               for(; loop180 < loopLimit180; loop180++) {
                  func9(rng());
               }
            }
         }
         int scalar4 = 1;
         int scalar5 = 1;
         printf("DELETE!\n");
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         func7(rng());
         if(PATH1 & 8) {
            func13();
         }
         else {
            int scalar6 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop181 = 0;
            int loopLimit181 = (rand()%10)/2 + 1;
            for(; loop181 < loopLimit181; loop181++) {
               if(PATH1 & 16) {
               }
               else {
               }
            }
            int loop182 = 0;
            int loopLimit182 = (rand()%10)/2 + 1;
            for(; loop182 < loopLimit182; loop182++) {
               func15();
            }
            int scalar7 = 1;
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func11(rng());
         if(PATH1 & 32) {
            int scalar6 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop183 = 0;
            int loopLimit183 = (rand()%10)/2 + 1;
            for(; loop183 < loopLimit183; loop183++) {
               if(PATH1 & 64) {
                  func10(rng());
                  if(PATH1 & 128) {
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func14();
               }
               else {
                  if(PATH1 & 256) {
                     func13();
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop184 = 0;
                     int loopLimit184 = (rand()%10)/3 + 1;
                     for(; loop184 < loopLimit184; loop184++) {
                        if(PATH1 & 512) {
                        }
                        else {
                        }
                     }
                     int loop185 = 0;
                     int loopLimit185 = (rand()%10)/3 + 1;
                     for(; loop185 < loopLimit185; loop185++) {
                        func15();
                     }
                     int scalar8 = 1;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func11(rng());
               }
            }
            int loop186 = 0;
            int loopLimit186 = (rand()%10)/2 + 1;
            for(; loop186 < loopLimit186; loop186++) {
               func9(rng());
            }
         }
         else {
            if(PATH1 & 1024) {
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop187 = 0;
               int loopLimit187 = (rand()%10)/2 + 1;
               for(; loop187 < loopLimit187; loop187++) {
                  if(PATH1 & 2048) {
                     func13();
                  }
                  else {
                     if(PATH1 & 4096) {
                     }
                     else {
                        int scalar7 = 1;
                        if (scalar2 == 0) {
                           printf("IS 0!");
                        }
                        scalar5--;
                        printf("DELETE!\n");
                     }
                     func14();
                  }
               }
               int loop188 = 0;
               int loopLimit188 = (rand()%10)/2 + 1;
               for(; loop188 < loopLimit188; loop188++) {
                  func12(rng());
               }
            }
            else {
               int loop189 = 0;
               int loopLimit189 = (rand()%10)/2 + 1;
               for(; loop189 < loopLimit189; loop189++) {
                  int scalar6 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop190 = 0;
                  int loopLimit190 = (rand()%10)/3 + 1;
                  for(; loop190 < loopLimit190; loop190++) {
                     if(PATH1 & 8192) {
                        func13();
                     }
                     else {
                        if(PATH1 & 16384) {
                        }
                        else {
                           int scalar7 = 1;
                           if (scalar4 == 0) {
                              printf("IS 0!");
                           }
                           scalar3--;
                           printf("DELETE!\n");
                        }
                        func14();
                     }
                  }
                  int loop191 = 0;
                  int loopLimit191 = (rand()%10)/3 + 1;
                  for(; loop191 < loopLimit191; loop191++) {
                     func12(rng());
                  }
               }
            }
            int scalar6 = 1;
            int scalar7 = 1;
            printf("DELETE!\n");
            if (scalar5 == 0) {
               printf("IS 0!");
            }
            func10(rng());
            if(PATH1 & 32768) {
            }
            else {
               int scalar8 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func14();
            if(PATH1 & 65536) {
               int scalar8 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop192 = 0;
               int loopLimit192 = (rand()%10)/2 + 1;
               for(; loop192 < loopLimit192; loop192++) {
                  if(PATH1 & 131072) {
                     func13();
                  }
                  else {
                     if(PATH1 & 262144) {
                     }
                     else {
                        int scalar9 = 1;
                        if (scalar4 == 0) {
                           printf("IS 0!");
                        }
                        scalar7--;
                        printf("DELETE!\n");
                     }
                     func14();
                  }
               }
               int loop193 = 0;
               int loopLimit193 = (rand()%10)/2 + 1;
               for(; loop193 < loopLimit193; loop193++) {
                  func12(rng());
               }
            }
            else {
               if(PATH1 & 524288) {
                  int scalar8 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop194 = 0;
                  int loopLimit194 = (rand()%10)/2 + 1;
                  for(; loop194 < loopLimit194; loop194++) {
                     if(PATH1 & 1048576) {
                     }
                     else {
                     }
                  }
                  int loop195 = 0;
                  int loopLimit195 = (rand()%10)/2 + 1;
                  for(; loop195 < loopLimit195; loop195++) {
                     func15();
                  }
               }
               else {
                  int loop196 = 0;
                  int loopLimit196 = (rand()%10)/2 + 1;
                  for(; loop196 < loopLimit196; loop196++) {
                     int scalar8 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop197 = 0;
                     int loopLimit197 = (rand()%10)/3 + 1;
                     for(; loop197 < loopLimit197; loop197++) {
                        if(PATH1 & 2097152) {
                        }
                        else {
                        }
                     }
                     int loop198 = 0;
                     int loopLimit198 = (rand()%10)/3 + 1;
                     for(; loop198 < loopLimit198; loop198++) {
                        func15();
                     }
                  }
               }
               int scalar8 = 1;
               int scalar9 = 1;
               printf("DELETE!\n");
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
               func13();
               if(PATH1 & 4194304) {
                  int scalar10 = 1;
                  if (scalar6 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop199 = 0;
                  int loopLimit199 = (rand()%10)/2 + 1;
                  for(; loop199 < loopLimit199; loop199++) {
                     if(PATH1 & 8388608) {
                     }
                     else {
                     }
                  }
                  int loop200 = 0;
                  int loopLimit200 = (rand()%10)/2 + 1;
                  for(; loop200 < loopLimit200; loop200++) {
                     func15();
                  }
               }
               else {
                  if(PATH1 & 16777216) {
                  }
                  else {
                     int loop201 = 0;
                     int loopLimit201 = (rand()%10)/2 + 1;
                     for(; loop201 < loopLimit201; loop201++) {
                     }
                  }
                  int scalar10 = 1;
                  int scalar11 = 1;
                  printf("DELETE!\n");
                  if (scalar10 == 0) {
                     printf("IS 0!");
                  }
                  if(PATH1 & 33554432) {
                  }
                  else {
                  }
               }
            }
         }
      }
   }
}

void func1(const unsigned long PATH0) {
   int scalar1 = 1;
   func4(rng());
   if(PATH0 & 1) {
      func10(rng());
      if(PATH0 & 2) {
      }
      else {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func14();
   }
   else {
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop30 = 0;
      int loopLimit30 = (rand()%10)/2 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         if(PATH0 & 4) {
            func13();
         }
         else {
            if(PATH0 & 8) {
            }
            else {
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14();
         }
      }
      int loop31 = 0;
      int loopLimit31 = (rand()%10)/2 + 1;
      for(; loop31 < loopLimit31; loop31++) {
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
   scalar1++;
   scalar1++;
   if(PATH0 & 16) {
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop40 = 0;
      int loopLimit40 = (rand()%10)/2 + 1;
      for(; loop40 < loopLimit40; loop40++) {
         if(PATH0 & 32) {
            func10(rng());
            if(PATH0 & 64) {
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func14();
         }
         else {
            if(PATH0 & 128) {
               func13();
            }
            else {
               int scalar3 = 1;
               if (scalar1 == 0) {
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
                  func15();
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
      }
      int loop43 = 0;
      int loopLimit43 = (rand()%10)/2 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         func9(rng());
      }
   }
   else {
      int loop46 = 0;
      int loopLimit46 = (rand()%10)/2 + 1;
      for(; loop46 < loopLimit46; loop46++) {
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop47 = 0;
         int loopLimit47 = (rand()%10)/3 + 1;
         for(; loop47 < loopLimit47; loop47++) {
            if(PATH0 & 512) {
               func10(rng());
               if(PATH0 & 1024) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func14();
            }
            else {
               if(PATH0 & 2048) {
                  func13();
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
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
                     func15();
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
         int loop50 = 0;
         int loopLimit50 = (rand()%10)/3 + 1;
         for(; loop50 < loopLimit50; loop50++) {
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
   if(PATH0 & 8192) {
      func13();
   }
   else {
      int scalar4 = 1;
      if (scalar2 == 0) {
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
         func15();
      }
      int scalar5 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar5--;
      printf("DELETE!\n");
   }
   func11(rng());
   if(PATH0 & 32768) {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop53 = 0;
      int loopLimit53 = (rand()%10)/2 + 1;
      for(; loop53 < loopLimit53; loop53++) {
         if(PATH0 & 65536) {
            func10(rng());
            if(PATH0 & 131072) {
            }
            else {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14();
         }
         else {
            if(PATH0 & 262144) {
               func13();
            }
            else {
               int scalar5 = 1;
               if (scalar5 == 0) {
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
                  func15();
               }
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop56 = 0;
      int loopLimit56 = (rand()%10)/2 + 1;
      for(; loop56 < loopLimit56; loop56++) {
         func9(rng());
      }
   }
   else {
      if(PATH0 & 1048576) {
         int scalar4 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop57 = 0;
         int loopLimit57 = (rand()%10)/2 + 1;
         for(; loop57 < loopLimit57; loop57++) {
            if(PATH0 & 2097152) {
               func13();
            }
            else {
               if(PATH0 & 4194304) {
               }
               else {
                  int scalar5 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func14();
            }
         }
         int loop58 = 0;
         int loopLimit58 = (rand()%10)/2 + 1;
         for(; loop58 < loopLimit58; loop58++) {
            func12(rng());
         }
      }
      else {
         int loop59 = 0;
         int loopLimit59 = (rand()%10)/2 + 1;
         for(; loop59 < loopLimit59; loop59++) {
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop60 = 0;
            int loopLimit60 = (rand()%10)/3 + 1;
            for(; loop60 < loopLimit60; loop60++) {
               if(PATH0 & 8388608) {
                  func13();
               }
               else {
                  if(PATH0 & 16777216) {
                  }
                  else {
                     int scalar5 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar2--;
                     printf("DELETE!\n");
                  }
                  func14();
               }
            }
            int loop61 = 0;
            int loopLimit61 = (rand()%10)/3 + 1;
            for(; loop61 < loopLimit61; loop61++) {
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
      if(PATH0 & 33554432) {
      }
      else {
         int scalar6 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func14();
      if(PATH0 & 67108864) {
         int scalar6 = 1;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop62 = 0;
         int loopLimit62 = (rand()%10)/2 + 1;
         for(; loop62 < loopLimit62; loop62++) {
            if(PATH0 & 134217728) {
               func13();
            }
            else {
               if(PATH0 & 268435456) {
               }
               else {
                  int scalar7 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func14();
            }
         }
         int loop63 = 0;
         int loopLimit63 = (rand()%10)/2 + 1;
         for(; loop63 < loopLimit63; loop63++) {
            func12(rng());
         }
      }
      else {
         if(PATH0 & 536870912) {
            int scalar6 = 1;
            if (scalar2 == 0) {
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
               func15();
            }
         }
         else {
            int loop66 = 0;
            int loopLimit66 = (rand()%10)/2 + 1;
            for(; loop66 < loopLimit66; loop66++) {
               int scalar6 = 1;
               if (scalar1 == 0) {
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
                  func15();
               }
            }
         }
         int scalar6 = 1;
         int scalar7 = 1;
         printf("DELETE!\n");
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         func13();
         if(PATH0 & -2147483648) {
            int scalar8 = 1;
            if (scalar5 == 0) {
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
               func15();
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
            int scalar8 = 1;
            int scalar9 = 1;
            printf("DELETE!\n");
            if (scalar1 == 0) {
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

void func4(const unsigned long PATH0) {
   int scalar2 = 1;
   func7(rng());
   if(PATH0 & 1) {
      func13();
   }
   else {
      int scalar3 = 1;
      if (scalar3 == 0) {
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
         func15();
      }
      int scalar4 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      printf("DELETE!\n");
   }
   func11(rng());
   scalar2++;
   scalar2++;
   if(PATH0 & 4) {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if(PATH0 & 8) {
            func13();
         }
         else {
            if(PATH0 & 16) {
            }
            else {
               int scalar4 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14();
         }
      }
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         func12(rng());
      }
   }
   else {
      int loop17 = 0;
      int loopLimit17 = (rand()%10)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         int scalar3 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop18 = 0;
         int loopLimit18 = (rand()%10)/3 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            if(PATH0 & 32) {
               func13();
            }
            else {
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
               func14();
            }
         }
         int loop19 = 0;
         int loopLimit19 = (rand()%10)/3 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            func12(rng());
         }
      }
   }
   int scalar3 = 1;
   int scalar4 = 1;
   printf("DELETE!\n");
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   func10(rng());
   if(PATH0 & 128) {
   }
   else {
      int scalar5 = 1;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      scalar5--;
      printf("DELETE!\n");
   }
   func14();
   if(PATH0 & 256) {
      int scalar5 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop20 = 0;
      int loopLimit20 = (rand()%10)/2 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         if(PATH0 & 512) {
            func13();
         }
         else {
            if(PATH0 & 1024) {
            }
            else {
               int scalar6 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func14();
         }
      }
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         func12(rng());
      }
   }
   else {
      if(PATH0 & 2048) {
         int scalar5 = 1;
         if (scalar4 == 0) {
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
            func15();
         }
      }
      else {
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            int scalar5 = 1;
            if (scalar3 == 0) {
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
               func15();
            }
         }
      }
      int scalar5 = 1;
      int scalar6 = 1;
      printf("DELETE!\n");
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func13();
      if(PATH0 & 16384) {
         int scalar7 = 1;
         if (scalar3 == 0) {
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
            func15();
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
         int scalar7 = 1;
         int scalar8 = 1;
         printf("DELETE!\n");
         if (scalar2 == 0) {
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

void func7(const unsigned long PATH0) {
   int scalar3 = 1;
   func10(rng());
   if(PATH0 & 1) {
   }
   else {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      printf("DELETE!\n");
   }
   func14();
   scalar3++;
   scalar3++;
   if(PATH0 & 2) {
      int scalar4 = 1;
      if (scalar4 == 0) {
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
         func15();
      }
   }
   else {
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         int scalar4 = 1;
         if (scalar3 == 0) {
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
            func15();
         }
      }
   }
   int scalar4 = 1;
   int scalar5 = 1;
   printf("DELETE!\n");
   if (scalar4 == 0) {
      printf("IS 0!");
   }
   func13();
   if(PATH0 & 16) {
      int scalar6 = 1;
      if (scalar5 == 0) {
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
         func15();
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
      int scalar6 = 1;
      int scalar7 = 1;
      printf("DELETE!\n");
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 128) {
      }
      else {
      }
   }
   printf("DELETE!\n");
}

void func10(const unsigned long PATH0) {
   int scalar4 = 1;
   func13();
   scalar4++;
   scalar4++;
   if(PATH0 & 1) {
   }
   else {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
      }
   }
   int scalar5 = 1;
   int scalar6 = 1;
   printf("DELETE!\n");
   if (scalar6 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
   printf("DELETE!\n");
}

void func13() {
   int scalar5 = 1;
   scalar5++;
   scalar5++;
   printf("DELETE!\n");
}

void func14() {
}

void func15() {
}

void func11(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
      }
   }
   int scalar3 = 1;
   int scalar4 = 1;
   printf("DELETE!\n");
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
}

void func12(const unsigned long PATH0) {
   int scalar4 = 1;
   if (scalar4 == 0) {
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
      func15();
   }
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar2 = 1;
      if (scalar2 == 0) {
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
         func15();
      }
   }
   else {
      int loop34 = 0;
      int loopLimit34 = (rand()%10)/2 + 1;
      for(; loop34 < loopLimit34; loop34++) {
         int scalar2 = 1;
         if (scalar2 == 0) {
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
            func15();
         }
      }
   }
   int scalar2 = 1;
   int scalar3 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func13();
   if(PATH0 & 8) {
      int scalar4 = 1;
      if (scalar4 == 0) {
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
         func15();
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
      int scalar4 = 1;
      int scalar5 = 1;
      printf("DELETE!\n");
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 64) {
      }
      else {
      }
   }
}

void func9(const unsigned long PATH0) {
   int scalar3 = 1;
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop44 = 0;
   int loopLimit44 = (rand()%10)/3 + 1;
   for(; loop44 < loopLimit44; loop44++) {
      if(PATH0 & 1) {
         func13();
      }
      else {
         if(PATH0 & 2) {
         }
         else {
            int scalar4 = 1;
            if (scalar4 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func14();
      }
   }
   int loop45 = 0;
   int loopLimit45 = (rand()%10)/3 + 1;
   for(; loop45 < loopLimit45; loop45++) {
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
      int loop78 = 0;
      int loopLimit78 = (rand()%10)/2 + 1;
      for(; loop78 < loopLimit78; loop78++) {
         if(PATH0 & 2) {
            func13();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14();
         }
      }
      int loop79 = 0;
      int loopLimit79 = (rand()%10)/2 + 1;
      for(; loop79 < loopLimit79; loop79++) {
         func12(rng());
      }
   }
   else {
      int loop80 = 0;
      int loopLimit80 = (rand()%10)/2 + 1;
      for(; loop80 < loopLimit80; loop80++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop81 = 0;
         int loopLimit81 = (rand()%10)/3 + 1;
         for(; loop81 < loopLimit81; loop81++) {
            if(PATH0 & 8) {
               func13();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func14();
            }
         }
         int loop82 = 0;
         int loopLimit82 = (rand()%10)/3 + 1;
         for(; loop82 < loopLimit82; loop82++) {
            func12(rng());
         }
      }
   }
   int scalar1 = 1;
   int scalar2 = 1;
   printf("DELETE!\n");
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func10(rng());
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
   func14();
   if(PATH0 & 64) {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop83 = 0;
      int loopLimit83 = (rand()%10)/2 + 1;
      for(; loop83 < loopLimit83; loop83++) {
         if(PATH0 & 128) {
            func13();
         }
         else {
            if(PATH0 & 256) {
            }
            else {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14();
         }
      }
      int loop84 = 0;
      int loopLimit84 = (rand()%10)/2 + 1;
      for(; loop84 < loopLimit84; loop84++) {
         func12(rng());
      }
   }
   else {
      if(PATH0 & 512) {
         int scalar3 = 1;
         if (scalar3 == 0) {
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
            func15();
         }
      }
      else {
         int loop87 = 0;
         int loopLimit87 = (rand()%10)/2 + 1;
         for(; loop87 < loopLimit87; loop87++) {
            int scalar3 = 1;
            if (scalar2 == 0) {
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
               func15();
            }
         }
      }
      int scalar3 = 1;
      int scalar4 = 1;
      printf("DELETE!\n");
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func13();
      if(PATH0 & 4096) {
         int scalar5 = 1;
         if (scalar1 == 0) {
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
            func15();
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
         int scalar5 = 1;
         int scalar6 = 1;
         printf("DELETE!\n");
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 32768) {
         }
         else {
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
   int loop101 = 0;
   int loopLimit101 = (rand()%10)/3 + 1;
   for(; loop101 < loopLimit101; loop101++) {
      if(PATH0 & 1) {
         func10(rng());
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
         func14();
      }
      else {
         if(PATH0 & 4) {
            func13();
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop102 = 0;
            int loopLimit102 = (rand()%10)/4 + 1;
            for(; loop102 < loopLimit102; loop102++) {
               if(PATH0 & 8) {
               }
               else {
               }
            }
            int loop103 = 0;
            int loopLimit103 = (rand()%10)/4 + 1;
            for(; loop103 < loopLimit103; loop103++) {
               func15();
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
   int loop104 = 0;
   int loopLimit104 = (rand()%10)/3 + 1;
   for(; loop104 < loopLimit104; loop104++) {
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
      int loop105 = 0;
      int loopLimit105 = (rand()%10)/2 + 1;
      for(; loop105 < loopLimit105; loop105++) {
         if(PATH0 & 2) {
            func10(rng());
            if(PATH0 & 4) {
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func14();
         }
         else {
            if(PATH0 & 8) {
               func13();
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop106 = 0;
               int loopLimit106 = (rand()%10)/3 + 1;
               for(; loop106 < loopLimit106; loop106++) {
                  if(PATH0 & 16) {
                  }
                  else {
                  }
               }
               int loop107 = 0;
               int loopLimit107 = (rand()%10)/3 + 1;
               for(; loop107 < loopLimit107; loop107++) {
                  func15();
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
      int loop108 = 0;
      int loopLimit108 = (rand()%10)/2 + 1;
      for(; loop108 < loopLimit108; loop108++) {
         func9(rng());
      }
   }
   else {
      int loop109 = 0;
      int loopLimit109 = (rand()%10)/2 + 1;
      for(; loop109 < loopLimit109; loop109++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop110 = 0;
         int loopLimit110 = (rand()%10)/3 + 1;
         for(; loop110 < loopLimit110; loop110++) {
            if(PATH0 & 32) {
               func10(rng());
               if(PATH0 & 64) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func14();
            }
            else {
               if(PATH0 & 128) {
                  func13();
               }
               else {
                  int scalar2 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop111 = 0;
                  int loopLimit111 = (rand()%10)/4 + 1;
                  for(; loop111 < loopLimit111; loop111++) {
                     if(PATH0 & 256) {
                     }
                     else {
                     }
                  }
                  int loop112 = 0;
                  int loopLimit112 = (rand()%10)/4 + 1;
                  for(; loop112 < loopLimit112; loop112++) {
                     func15();
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
         }
         int loop113 = 0;
         int loopLimit113 = (rand()%10)/3 + 1;
         for(; loop113 < loopLimit113; loop113++) {
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
   if(PATH0 & 512) {
      func13();
   }
   else {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop114 = 0;
      int loopLimit114 = (rand()%10)/2 + 1;
      for(; loop114 < loopLimit114; loop114++) {
         if(PATH0 & 1024) {
         }
         else {
         }
      }
      int loop115 = 0;
      int loopLimit115 = (rand()%10)/2 + 1;
      for(; loop115 < loopLimit115; loop115++) {
         func15();
      }
      int scalar4 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      printf("DELETE!\n");
   }
   func11(rng());
   if(PATH0 & 2048) {
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop116 = 0;
      int loopLimit116 = (rand()%10)/2 + 1;
      for(; loop116 < loopLimit116; loop116++) {
         if(PATH0 & 4096) {
            func10(rng());
            if(PATH0 & 8192) {
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
            func14();
         }
         else {
            if(PATH0 & 16384) {
               func13();
            }
            else {
               int scalar4 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop117 = 0;
               int loopLimit117 = (rand()%10)/3 + 1;
               for(; loop117 < loopLimit117; loop117++) {
                  if(PATH0 & 32768) {
                  }
                  else {
                  }
               }
               int loop118 = 0;
               int loopLimit118 = (rand()%10)/3 + 1;
               for(; loop118 < loopLimit118; loop118++) {
                  func15();
               }
               int scalar5 = 1;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               scalar5--;
               printf("DELETE!\n");
            }
            func11(rng());
         }
      }
      int loop119 = 0;
      int loopLimit119 = (rand()%10)/2 + 1;
      for(; loop119 < loopLimit119; loop119++) {
         func9(rng());
      }
   }
   else {
      if(PATH0 & 65536) {
         int scalar3 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop120 = 0;
         int loopLimit120 = (rand()%10)/2 + 1;
         for(; loop120 < loopLimit120; loop120++) {
            if(PATH0 & 131072) {
               func13();
            }
            else {
               if(PATH0 & 262144) {
               }
               else {
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
                  printf("DELETE!\n");
               }
               func14();
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
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop123 = 0;
            int loopLimit123 = (rand()%10)/3 + 1;
            for(; loop123 < loopLimit123; loop123++) {
               if(PATH0 & 524288) {
                  func13();
               }
               else {
                  if(PATH0 & 1048576) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func14();
               }
            }
            int loop124 = 0;
            int loopLimit124 = (rand()%10)/3 + 1;
            for(; loop124 < loopLimit124; loop124++) {
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
      if(PATH0 & 2097152) {
      }
      else {
         int scalar5 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar5--;
         printf("DELETE!\n");
      }
      func14();
      if(PATH0 & 4194304) {
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop125 = 0;
         int loopLimit125 = (rand()%10)/2 + 1;
         for(; loop125 < loopLimit125; loop125++) {
            if(PATH0 & 8388608) {
               func13();
            }
            else {
               if(PATH0 & 16777216) {
               }
               else {
                  int scalar6 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func14();
            }
         }
         int loop126 = 0;
         int loopLimit126 = (rand()%10)/2 + 1;
         for(; loop126 < loopLimit126; loop126++) {
            func12(rng());
         }
      }
      else {
         if(PATH0 & 33554432) {
            int scalar5 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop127 = 0;
            int loopLimit127 = (rand()%10)/2 + 1;
            for(; loop127 < loopLimit127; loop127++) {
               if(PATH0 & 67108864) {
               }
               else {
               }
            }
            int loop128 = 0;
            int loopLimit128 = (rand()%10)/2 + 1;
            for(; loop128 < loopLimit128; loop128++) {
               func15();
            }
         }
         else {
            int loop129 = 0;
            int loopLimit129 = (rand()%10)/2 + 1;
            for(; loop129 < loopLimit129; loop129++) {
               int scalar5 = 1;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop130 = 0;
               int loopLimit130 = (rand()%10)/3 + 1;
               for(; loop130 < loopLimit130; loop130++) {
                  if(PATH0 & 134217728) {
                  }
                  else {
                  }
               }
               int loop131 = 0;
               int loopLimit131 = (rand()%10)/3 + 1;
               for(; loop131 < loopLimit131; loop131++) {
                  func15();
               }
            }
         }
         int scalar5 = 1;
         int scalar6 = 1;
         printf("DELETE!\n");
         if (scalar6 == 0) {
            printf("IS 0!");
         }
         func13();
         if(PATH0 & 268435456) {
            int scalar7 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop132 = 0;
            int loopLimit132 = (rand()%10)/2 + 1;
            for(; loop132 < loopLimit132; loop132++) {
               if(PATH0 & 536870912) {
               }
               else {
               }
            }
            int loop133 = 0;
            int loopLimit133 = (rand()%10)/2 + 1;
            for(; loop133 < loopLimit133; loop133++) {
               func15();
            }
         }
         else {
            if(PATH0 & 1073741824) {
            }
            else {
               int loop134 = 0;
               int loopLimit134 = (rand()%10)/2 + 1;
               for(; loop134 < loopLimit134; loop134++) {
               }
            }
            int scalar7 = 1;
            int scalar8 = 1;
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

void func3(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop145 = 0;
   int loopLimit145 = (rand()%10)/3 + 1;
   for(; loop145 < loopLimit145; loop145++) {
      if(PATH0 & 1) {
         func7(rng());
         if(PATH0 & 2) {
            func13();
         }
         else {
            int scalar3 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop146 = 0;
            int loopLimit146 = (rand()%10)/4 + 1;
            for(; loop146 < loopLimit146; loop146++) {
               if(PATH0 & 4) {
               }
               else {
               }
            }
            int loop147 = 0;
            int loopLimit147 = (rand()%10)/4 + 1;
            for(; loop147 < loopLimit147; loop147++) {
               func15();
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
         if(PATH0 & 8) {
            func10(rng());
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
            func14();
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop148 = 0;
            int loopLimit148 = (rand()%10)/4 + 1;
            for(; loop148 < loopLimit148; loop148++) {
               if(PATH0 & 32) {
                  func13();
               }
               else {
                  if(PATH0 & 64) {
                  }
                  else {
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func14();
               }
            }
            int loop149 = 0;
            int loopLimit149 = (rand()%10)/4 + 1;
            for(; loop149 < loopLimit149; loop149++) {
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
   int loop150 = 0;
   int loopLimit150 = (rand()%10)/3 + 1;
   for(; loop150 < loopLimit150; loop150++) {
      func6(rng());
   }
}

