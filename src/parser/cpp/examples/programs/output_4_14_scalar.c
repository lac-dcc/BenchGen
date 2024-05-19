#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func10();
void func11();
void func12();
void func8(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   func0(rng());
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0) {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      func1(rng());
      if(PATH0 & 1) {
         func7(rng());
         if(PATH0 & 2) {
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            scalar1--;
            printf("DELETE!\n");
         }
         func11();
      }
      else {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop30 = 0;
         int loopLimit30 = (rand()%10)/2 + 1;
         for(; loop30 < loopLimit30; loop30++) {
            if(PATH0 & 4) {
               func10();
            }
            else {
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
               func11();
            }
         }
         int loop31 = 0;
         int loopLimit31 = (rand()%10)/2 + 1;
         for(; loop31 < loopLimit31; loop31++) {
            func9(rng());
         }
         int scalar2 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func5(rng());
      if(PATH0 & 16) {
         func4(rng());
         if(PATH0 & 32) {
            func10();
         }
         else {
            int scalar1 = 1;
            if (scalar1 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop40 = 0;
            int loopLimit40 = (rand()%10)/2 + 1;
            for(; loop40 < loopLimit40; loop40++) {
               if(PATH0 & 64) {
               }
               else {
               }
            }
            int loop41 = 0;
            int loopLimit41 = (rand()%10)/2 + 1;
            for(; loop41 < loopLimit41; loop41++) {
               func12();
            }
            int scalar2 = 1;
            if (scalar1 == 0) {
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
         int loop42 = 0;
         int loopLimit42 = (rand()%10)/2 + 1;
         for(; loop42 < loopLimit42; loop42++) {
            if(PATH0 & 128) {
               func7(rng());
               if(PATH0 & 256) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func11();
            }
            else {
               if(PATH0 & 512) {
                  func10();
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop43 = 0;
                  int loopLimit43 = (rand()%10)/3 + 1;
                  for(; loop43 < loopLimit43; loop43++) {
                     if(PATH0 & 1024) {
                     }
                     else {
                     }
                  }
                  int loop44 = 0;
                  int loopLimit44 = (rand()%10)/3 + 1;
                  for(; loop44 < loopLimit44; loop44++) {
                     func12();
                  }
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop45 = 0;
         int loopLimit45 = (rand()%10)/2 + 1;
         for(; loop45 < loopLimit45; loop45++) {
            func6(rng());
         }
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         scalar2--;
         printf("DELETE!\n");
      }
      func2(rng());
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop63 = 0;
      int loopLimit63 = (rand()%10)/2 + 1;
      for(; loop63 < loopLimit63; loop63++) {
         if(PATH0 & 2048) {
            func4(rng());
            if(PATH0 & 4096) {
               func10();
            }
            else {
               int scalar2 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop64 = 0;
               int loopLimit64 = (rand()%10)/3 + 1;
               for(; loop64 < loopLimit64; loop64++) {
                  if(PATH0 & 8192) {
                  }
                  else {
                  }
               }
               int loop65 = 0;
               int loopLimit65 = (rand()%10)/3 + 1;
               for(; loop65 < loopLimit65; loop65++) {
                  func12();
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
         else {
            if(PATH0 & 16384) {
               func7(rng());
               if(PATH0 & 32768) {
               }
               else {
                  int scalar2 = 1;
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
                  scalar2--;
                  printf("DELETE!\n");
               }
               func11();
            }
            else {
               int scalar2 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop66 = 0;
               int loopLimit66 = (rand()%10)/3 + 1;
               for(; loop66 < loopLimit66; loop66++) {
                  if(PATH0 & 65536) {
                     func10();
                  }
                  else {
                     if(PATH0 & 131072) {
                     }
                     else {
                        int scalar3 = 1;
                        if (scalar3 == 0) {
                           printf("IS 0!");
                        }
                        scalar2--;
                        printf("DELETE!\n");
                     }
                     func11();
                  }
               }
               int loop67 = 0;
               int loopLimit67 = (rand()%10)/3 + 1;
               for(; loop67 < loopLimit67; loop67++) {
                  func9(rng());
               }
               int scalar3 = 1;
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func5(rng());
         }
      }
      int loop68 = 0;
      int loopLimit68 = (rand()%10)/2 + 1;
      for(; loop68 < loopLimit68; loop68++) {
         func3(rng());
      }
      if(PATH0 & 262144) {
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop73 = 0;
         int loopLimit73 = (rand()%10)/2 + 1;
         for(; loop73 < loopLimit73; loop73++) {
            if(PATH0 & 524288) {
               func7(rng());
               if(PATH0 & 1048576) {
               }
               else {
                  int scalar3 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar1--;
                  printf("DELETE!\n");
               }
               func11();
            }
            else {
               if(PATH0 & 2097152) {
                  func10();
               }
               else {
                  int scalar3 = 1;
                  if (scalar2 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop74 = 0;
                  int loopLimit74 = (rand()%10)/3 + 1;
                  for(; loop74 < loopLimit74; loop74++) {
                     if(PATH0 & 4194304) {
                     }
                     else {
                     }
                  }
                  int loop75 = 0;
                  int loopLimit75 = (rand()%10)/3 + 1;
                  for(; loop75 < loopLimit75; loop75++) {
                     func12();
                  }
                  int scalar4 = 1;
                  if (scalar3 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop76 = 0;
         int loopLimit76 = (rand()%10)/2 + 1;
         for(; loop76 < loopLimit76; loop76++) {
            func6(rng());
         }
      }
      else {
         int loop77 = 0;
         int loopLimit77 = (rand()%10)/2 + 1;
         for(; loop77 < loopLimit77; loop77++) {
            int scalar2 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop78 = 0;
            int loopLimit78 = (rand()%10)/3 + 1;
            for(; loop78 < loopLimit78; loop78++) {
               if(PATH0 & 8388608) {
                  func7(rng());
                  if(PATH0 & 16777216) {
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar1 == 0) {
                        printf("IS 0!");
                     }
                     scalar3--;
                     printf("DELETE!\n");
                  }
                  func11();
               }
               else {
                  if(PATH0 & 33554432) {
                     func10();
                  }
                  else {
                     int scalar3 = 1;
                     if (scalar3 == 0) {
                        printf("IS 0!");
                     }
                     printf("DELETE!\n");
                     int loop79 = 0;
                     int loopLimit79 = (rand()%10)/4 + 1;
                     for(; loop79 < loopLimit79; loop79++) {
                        if(PATH0 & 67108864) {
                        }
                        else {
                        }
                     }
                     int loop80 = 0;
                     int loopLimit80 = (rand()%10)/4 + 1;
                     for(; loop80 < loopLimit80; loop80++) {
                        func12();
                     }
                     int scalar4 = 1;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                     scalar1--;
                     printf("DELETE!\n");
                  }
                  func8(rng());
               }
            }
            int loop81 = 0;
            int loopLimit81 = (rand()%10)/3 + 1;
            for(; loop81 < loopLimit81; loop81++) {
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
      if(PATH0 & 134217728) {
         func10();
      }
      else {
         int scalar4 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop82 = 0;
         int loopLimit82 = (rand()%10)/2 + 1;
         for(; loop82 < loopLimit82; loop82++) {
            if(PATH0 & 268435456) {
            }
            else {
            }
         }
         int loop83 = 0;
         int loopLimit83 = (rand()%10)/2 + 1;
         for(; loop83 < loopLimit83; loop83++) {
            func12();
         }
         int scalar5 = 1;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         scalar1--;
         printf("DELETE!\n");
      }
      func8(rng());
      if(PATH0 & 536870912) {
         int scalar4 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop84 = 0;
         int loopLimit84 = (rand()%10)/2 + 1;
         for(; loop84 < loopLimit84; loop84++) {
            if(PATH0 & 1073741824) {
               func7(rng());
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
               func11();
            }
            else {
               if(PATH0 & -2147483648) {
                  func10();
               }
               else {
                  int scalar5 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop85 = 0;
                  int loopLimit85 = (rand()%10)/3 + 1;
                  for(; loop85 < loopLimit85; loop85++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop86 = 0;
                  int loopLimit86 = (rand()%10)/3 + 1;
                  for(; loop86 < loopLimit86; loop86++) {
                     func12();
                  }
                  int scalar6 = 1;
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  scalar6--;
                  printf("DELETE!\n");
               }
               func8(rng());
            }
         }
         int loop87 = 0;
         int loopLimit87 = (rand()%10)/2 + 1;
         for(; loop87 < loopLimit87; loop87++) {
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
            int loop88 = 0;
            int loopLimit88 = (rand()%10)/2 + 1;
            for(; loop88 < loopLimit88; loop88++) {
               if(PATH0 & -2147483648) {
                  func10();
               }
               else {
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
                  func11();
               }
            }
            int loop89 = 0;
            int loopLimit89 = (rand()%10)/2 + 1;
            for(; loop89 < loopLimit89; loop89++) {
               func9(rng());
            }
         }
         else {
            int loop90 = 0;
            int loopLimit90 = (rand()%10)/2 + 1;
            for(; loop90 < loopLimit90; loop90++) {
               int scalar4 = 1;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop91 = 0;
               int loopLimit91 = (rand()%10)/3 + 1;
               for(; loop91 < loopLimit91; loop91++) {
                  if(PATH0 & -2147483648) {
                     func10();
                  }
                  else {
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
                     func11();
                  }
               }
               int loop92 = 0;
               int loopLimit92 = (rand()%10)/3 + 1;
               for(; loop92 < loopLimit92; loop92++) {
                  func9(rng());
               }
            }
         }
         int scalar4 = 1;
         int scalar5 = 1;
         printf("DELETE!\n");
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         func7(rng());
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar6 = 1;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            scalar4--;
            printf("DELETE!\n");
         }
         func11();
         if(PATH0 & -2147483648) {
            int scalar6 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop93 = 0;
            int loopLimit93 = (rand()%10)/2 + 1;
            for(; loop93 < loopLimit93; loop93++) {
               if(PATH0 & -2147483648) {
                  func10();
               }
               else {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                     int scalar7 = 1;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                     scalar4--;
                     printf("DELETE!\n");
                  }
                  func11();
               }
            }
            int loop94 = 0;
            int loopLimit94 = (rand()%10)/2 + 1;
            for(; loop94 < loopLimit94; loop94++) {
               func9(rng());
            }
         }
         else {
            if(PATH0 & -2147483648) {
               int scalar6 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop95 = 0;
               int loopLimit95 = (rand()%10)/2 + 1;
               for(; loop95 < loopLimit95; loop95++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop96 = 0;
               int loopLimit96 = (rand()%10)/2 + 1;
               for(; loop96 < loopLimit96; loop96++) {
                  func12();
               }
            }
            else {
               int loop97 = 0;
               int loopLimit97 = (rand()%10)/2 + 1;
               for(; loop97 < loopLimit97; loop97++) {
                  int scalar6 = 1;
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  printf("DELETE!\n");
                  int loop98 = 0;
                  int loopLimit98 = (rand()%10)/3 + 1;
                  for(; loop98 < loopLimit98; loop98++) {
                     if(PATH0 & -2147483648) {
                     }
                     else {
                     }
                  }
                  int loop99 = 0;
                  int loopLimit99 = (rand()%10)/3 + 1;
                  for(; loop99 < loopLimit99; loop99++) {
                     func12();
                  }
               }
            }
            int scalar6 = 1;
            int scalar7 = 1;
            printf("DELETE!\n");
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            func10();
            if(PATH0 & -2147483648) {
               int scalar8 = 1;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
               int loop100 = 0;
               int loopLimit100 = (rand()%10)/2 + 1;
               for(; loop100 < loopLimit100; loop100++) {
                  if(PATH0 & -2147483648) {
                  }
                  else {
                  }
               }
               int loop101 = 0;
               int loopLimit101 = (rand()%10)/2 + 1;
               for(; loop101 < loopLimit101; loop101++) {
                  func12();
               }
            }
            else {
               if(PATH0 & -2147483648) {
               }
               else {
                  int loop102 = 0;
                  int loopLimit102 = (rand()%10)/2 + 1;
                  for(; loop102 < loopLimit102; loop102++) {
                  }
               }
               int scalar8 = 1;
               int scalar9 = 1;
               printf("DELETE!\n");
               if (scalar5 == 0) {
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

void func1(const unsigned long PATH0) {
   int scalar1 = 1;
   func4(rng());
   if(PATH0 & 1) {
      func10();
   }
   else {
      int scalar2 = 1;
      if (scalar2 == 0) {
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
         func12();
      }
      int scalar3 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      printf("DELETE!\n");
   }
   func8(rng());
   scalar1++;
   scalar1++;
   if(PATH0 & 4) {
      int scalar2 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if(PATH0 & 8) {
            func10();
         }
         else {
            if(PATH0 & 16) {
            }
            else {
               int scalar3 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
            func11();
         }
      }
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         func9(rng());
      }
   }
   else {
      int loop17 = 0;
      int loopLimit17 = (rand()%10)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         int scalar2 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop18 = 0;
         int loopLimit18 = (rand()%10)/3 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            if(PATH0 & 32) {
               func10();
            }
            else {
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
               func11();
            }
         }
         int loop19 = 0;
         int loopLimit19 = (rand()%10)/3 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            func9(rng());
         }
      }
   }
   int scalar2 = 1;
   int scalar3 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   func7(rng());
   if(PATH0 & 128) {
   }
   else {
      int scalar4 = 1;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar4--;
      printf("DELETE!\n");
   }
   func11();
   if(PATH0 & 256) {
      int scalar4 = 1;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop20 = 0;
      int loopLimit20 = (rand()%10)/2 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         if(PATH0 & 512) {
            func10();
         }
         else {
            if(PATH0 & 1024) {
            }
            else {
               int scalar5 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
            func11();
         }
      }
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         func9(rng());
      }
   }
   else {
      if(PATH0 & 2048) {
         int scalar4 = 1;
         if (scalar3 == 0) {
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
            func12();
         }
      }
      else {
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            int scalar4 = 1;
            if (scalar2 == 0) {
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
               func12();
            }
         }
      }
      int scalar4 = 1;
      int scalar5 = 1;
      printf("DELETE!\n");
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func10();
      if(PATH0 & 16384) {
         int scalar6 = 1;
         if (scalar2 == 0) {
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
            func12();
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
         int scalar6 = 1;
         int scalar7 = 1;
         printf("DELETE!\n");
         if (scalar1 == 0) {
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

void func4(const unsigned long PATH0) {
   int scalar2 = 1;
   func7(rng());
   if(PATH0 & 1) {
   }
   else {
      int scalar3 = 1;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      printf("DELETE!\n");
   }
   func11();
   scalar2++;
   scalar2++;
   if(PATH0 & 2) {
      int scalar3 = 1;
      if (scalar3 == 0) {
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
         func12();
      }
   }
   else {
      int loop4 = 0;
      int loopLimit4 = (rand()%10)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         int scalar3 = 1;
         if (scalar2 == 0) {
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
            func12();
         }
      }
   }
   int scalar3 = 1;
   int scalar4 = 1;
   printf("DELETE!\n");
   if (scalar3 == 0) {
      printf("IS 0!");
   }
   func10();
   if(PATH0 & 16) {
      int scalar5 = 1;
      if (scalar4 == 0) {
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
         func12();
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
      int scalar5 = 1;
      int scalar6 = 1;
      printf("DELETE!\n");
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 128) {
      }
      else {
      }
   }
   printf("DELETE!\n");
}

void func7(const unsigned long PATH0) {
   int scalar3 = 1;
   func10();
   scalar3++;
   scalar3++;
   if(PATH0 & 1) {
   }
   else {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
      }
   }
   int scalar4 = 1;
   int scalar5 = 1;
   printf("DELETE!\n");
   if (scalar5 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
   printf("DELETE!\n");
}

void func10() {
   int scalar4 = 1;
   scalar4++;
   scalar4++;
   printf("DELETE!\n");
}

void func11() {
}

void func12() {
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
      }
   }
   int scalar2 = 1;
   int scalar3 = 1;
   printf("DELETE!\n");
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   if(PATH0 & 2) {
   }
   else {
   }
}

void func9(const unsigned long PATH0) {
   int scalar3 = 1;
   if (scalar3 == 0) {
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
      func12();
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int scalar1 = 1;
      if (scalar1 == 0) {
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
         func12();
      }
   }
   else {
      int loop34 = 0;
      int loopLimit34 = (rand()%10)/2 + 1;
      for(; loop34 < loopLimit34; loop34++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
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
            func12();
         }
      }
   }
   int scalar1 = 1;
   int scalar2 = 1;
   printf("DELETE!\n");
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func10();
   if(PATH0 & 8) {
      int scalar3 = 1;
      if (scalar3 == 0) {
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
         func12();
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
      int scalar3 = 1;
      int scalar4 = 1;
      printf("DELETE!\n");
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      if(PATH0 & 64) {
      }
      else {
      }
   }
}

void func6(const unsigned long PATH0) {
   int scalar2 = 1;
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   printf("DELETE!\n");
   int loop46 = 0;
   int loopLimit46 = (rand()%10)/3 + 1;
   for(; loop46 < loopLimit46; loop46++) {
      if(PATH0 & 1) {
         func10();
      }
      else {
         if(PATH0 & 2) {
         }
         else {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func11();
      }
   }
   int loop47 = 0;
   int loopLimit47 = (rand()%10)/3 + 1;
   for(; loop47 < loopLimit47; loop47++) {
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
      int loop48 = 0;
      int loopLimit48 = (rand()%10)/2 + 1;
      for(; loop48 < loopLimit48; loop48++) {
         if(PATH0 & 2) {
            func10();
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
            func11();
         }
      }
      int loop49 = 0;
      int loopLimit49 = (rand()%10)/2 + 1;
      for(; loop49 < loopLimit49; loop49++) {
         func9(rng());
      }
   }
   else {
      int loop50 = 0;
      int loopLimit50 = (rand()%10)/2 + 1;
      for(; loop50 < loopLimit50; loop50++) {
         int scalar1 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop51 = 0;
         int loopLimit51 = (rand()%10)/3 + 1;
         for(; loop51 < loopLimit51; loop51++) {
            if(PATH0 & 8) {
               func10();
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
               func11();
            }
         }
         int loop52 = 0;
         int loopLimit52 = (rand()%10)/3 + 1;
         for(; loop52 < loopLimit52; loop52++) {
            func9(rng());
         }
      }
   }
   int scalar1 = 1;
   int scalar2 = 1;
   printf("DELETE!\n");
   if (scalar1 == 0) {
      printf("IS 0!");
   }
   func7(rng());
   if(PATH0 & 32) {
   }
   else {
      int scalar3 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      printf("DELETE!\n");
   }
   func11();
   if(PATH0 & 64) {
      int scalar3 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
      int loop53 = 0;
      int loopLimit53 = (rand()%10)/2 + 1;
      for(; loop53 < loopLimit53; loop53++) {
         if(PATH0 & 128) {
            func10();
         }
         else {
            if(PATH0 & 256) {
            }
            else {
               int scalar4 = 1;
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar4--;
               printf("DELETE!\n");
            }
            func11();
         }
      }
      int loop54 = 0;
      int loopLimit54 = (rand()%10)/2 + 1;
      for(; loop54 < loopLimit54; loop54++) {
         func9(rng());
      }
   }
   else {
      if(PATH0 & 512) {
         int scalar3 = 1;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop55 = 0;
         int loopLimit55 = (rand()%10)/2 + 1;
         for(; loop55 < loopLimit55; loop55++) {
            if(PATH0 & 1024) {
            }
            else {
            }
         }
         int loop56 = 0;
         int loopLimit56 = (rand()%10)/2 + 1;
         for(; loop56 < loopLimit56; loop56++) {
            func12();
         }
      }
      else {
         int loop57 = 0;
         int loopLimit57 = (rand()%10)/2 + 1;
         for(; loop57 < loopLimit57; loop57++) {
            int scalar3 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop58 = 0;
            int loopLimit58 = (rand()%10)/3 + 1;
            for(; loop58 < loopLimit58; loop58++) {
               if(PATH0 & 2048) {
               }
               else {
               }
            }
            int loop59 = 0;
            int loopLimit59 = (rand()%10)/3 + 1;
            for(; loop59 < loopLimit59; loop59++) {
               func12();
            }
         }
      }
      int scalar3 = 1;
      int scalar4 = 1;
      printf("DELETE!\n");
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func10();
      if(PATH0 & 4096) {
         int scalar5 = 1;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
         int loop60 = 0;
         int loopLimit60 = (rand()%10)/2 + 1;
         for(; loop60 < loopLimit60; loop60++) {
            if(PATH0 & 8192) {
            }
            else {
            }
         }
         int loop61 = 0;
         int loopLimit61 = (rand()%10)/2 + 1;
         for(; loop61 < loopLimit61; loop61++) {
            func12();
         }
      }
      else {
         if(PATH0 & 16384) {
         }
         else {
            int loop62 = 0;
            int loopLimit62 = (rand()%10)/2 + 1;
            for(; loop62 < loopLimit62; loop62++) {
            }
         }
         int scalar5 = 1;
         int scalar6 = 1;
         printf("DELETE!\n");
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 32768) {
         }
         else {
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
   int loop69 = 0;
   int loopLimit69 = (rand()%10)/3 + 1;
   for(; loop69 < loopLimit69; loop69++) {
      if(PATH0 & 1) {
         func7(rng());
         if(PATH0 & 2) {
         }
         else {
            int scalar3 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            scalar3--;
            printf("DELETE!\n");
         }
         func11();
      }
      else {
         if(PATH0 & 4) {
            func10();
         }
         else {
            int scalar3 = 1;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
            int loop70 = 0;
            int loopLimit70 = (rand()%10)/4 + 1;
            for(; loop70 < loopLimit70; loop70++) {
               if(PATH0 & 8) {
               }
               else {
               }
            }
            int loop71 = 0;
            int loopLimit71 = (rand()%10)/4 + 1;
            for(; loop71 < loopLimit71; loop71++) {
               func12();
            }
            int scalar4 = 1;
            if (scalar3 == 0) {
               printf("IS 0!");
            }
            scalar2--;
            printf("DELETE!\n");
         }
         func8(rng());
      }
   }
   int loop72 = 0;
   int loopLimit72 = (rand()%10)/3 + 1;
   for(; loop72 < loopLimit72; loop72++) {
      func6(rng());
   }
}

