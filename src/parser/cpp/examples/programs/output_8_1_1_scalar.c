#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func8(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);

int main() {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;;
   for(; loop0 < loopLimit0; loop0++) {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;;
      for(; loop1 < loopLimit1; loop1++) {
         int scalar0 = 1;
         scalar0++;
         int loop2 = 0;
         int loopLimit2 = (rand()%10)/3 + 1;;
         for(; loop2 < loopLimit2; loop2++) {
            int scalar1 = 1;
            scalar0++;
            int loop3 = 0;
            int loopLimit3 = (rand()%10)/4 + 1;;
            for(; loop3 < loopLimit3; loop3++) {
               int scalar2 = 1;
               scalar0++;
               int loop4 = 0;
               int loopLimit4 = (rand()%10)/5 + 1;;
               for(; loop4 < loopLimit4; loop4++) {
                  int scalar3 = 1;
                  scalar3++;
                  int loop5 = 0;
                  int loopLimit5 = (rand()%10)/6 + 1;;
                  for(; loop5 < loopLimit5; loop5++) {
                     int scalar4 = 1;
                     scalar3++;
                     int loop6 = 0;
                     int loopLimit6 = (rand()%10)/7 + 1;;
                     for(; loop6 < loopLimit6; loop6++) {
                        int scalar5 = 1;
                        scalar1++;
                        int loop7 = 0;
                        int loopLimit7 = (rand()%10)/8 + 1;;
                        for(; loop7 < loopLimit7; loop7++) {
                           int scalar6 = 1;
                           scalar3++;
                           int loop8 = 0;
                           int loopLimit8 = (rand()%10)/9 + 1;;
                           for(; loop8 < loopLimit8; loop8++) {
                              int scalar7 = 1;
                              scalar4++;
                              scalar1--;
                           }
                           printf("DELETE!\n");
                           scalar3--;
                        }
                        func8(rng());
                        printf("DELETE!\n");
                        scalar4--;
                     }
                     func7(rng());
                     printf("DELETE!\n");
                     scalar4--;
                  }
                  func6(rng());
                  printf("DELETE!\n");
                  scalar2--;
               }
               func5(rng());
               printf("DELETE!\n");
               scalar0--;
            }
            func4(rng());
            printf("DELETE!\n");
            scalar0--;
         }
         func3(rng());
         printf("DELETE!\n");
         scalar0--;
      }
      func2(rng());
      printf("DELETE!\n");
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
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int scalar6 = 1;
      scalar6++;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      scalar6--;
      scalar6--;
      if (scalar6 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
      }
      else {
      }
   }
   else {
      int scalar5 = 1;
      scalar5++;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      scalar5--;
      scalar5--;
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      int loop9 = 0;
      int loopLimit9 = (rand()%10)/7 + 1;;
      for(; loop9 < loopLimit9; loop9++) {
         int scalar6 = 1;
         scalar5++;
         scalar6--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/6 + 1;;
      for(; loop10 < loopLimit10; loop10++) {
         int scalar4 = 1;
         scalar4++;
         scalar4--;
      }
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func8(rng());
      }
      else {
         int scalar4 = 1;
         int scalar5 = 1;
         int scalar6 = 1;
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/6 + 1;;
         for(; loop11 < loopLimit11; loop11++) {
            if(PATH0 & 4) {
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar5--;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
            }
         }
         if (scalar5 == 0) {
            printf("IS 0!");
         }
      }
   }
   else {
      int scalar4 = 1;
      scalar4++;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      scalar4--;
      scalar4--;
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/6 + 1;;
      for(; loop12 < loopLimit12; loop12++) {
         int scalar5 = 1;
         scalar5++;
         int loop13 = 0;
         int loopLimit13 = (rand()%10)/7 + 1;;
         for(; loop13 < loopLimit13; loop13++) {
            int scalar6 = 1;
            scalar5++;
            scalar5--;
         }
         printf("DELETE!\n");
         scalar5--;
      }
      func8(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/5 + 1;;
      for(; loop14 < loopLimit14; loop14++) {
         int scalar3 = 1;
         scalar3++;
         int loop15 = 0;
         int loopLimit15 = (rand()%10)/6 + 1;;
         for(; loop15 < loopLimit15; loop15++) {
            int scalar4 = 1;
            scalar4++;
            scalar4--;
         }
         printf("DELETE!\n");
         scalar3--;
      }
      func8(rng());
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func7(rng());
      }
      else {
         int scalar3 = 1;
         int loop16 = 0;
         int loopLimit16 = (rand()%10)/5 + 1;;
         for(; loop16 < loopLimit16; loop16++) {
            int scalar4 = 1;
            scalar3++;
            scalar4--;
         }
         printf("DELETE!\n");
         int scalar4 = 1;
         int scalar5 = 1;
         int loop17 = 0;
         int loopLimit17 = (rand()%10)/5 + 1;;
         for(; loop17 < loopLimit17; loop17++) {
            if(PATH0 & 4) {
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar5--;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & 8) {
            }
            else {
            }
         }
         if (scalar3 == 0) {
            printf("IS 0!");
         }
      }
   }
   else {
      int scalar3 = 1;
      scalar3++;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      scalar3--;
      scalar3--;
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      int loop18 = 0;
      int loopLimit18 = (rand()%10)/5 + 1;;
      for(; loop18 < loopLimit18; loop18++) {
         int scalar4 = 1;
         scalar4++;
         int loop19 = 0;
         int loopLimit19 = (rand()%10)/6 + 1;;
         for(; loop19 < loopLimit19; loop19++) {
            int scalar5 = 1;
            scalar5++;
            int loop20 = 0;
            int loopLimit20 = (rand()%10)/7 + 1;;
            for(; loop20 < loopLimit20; loop20++) {
               int scalar6 = 1;
               scalar5++;
               scalar3--;
            }
            printf("DELETE!\n");
            scalar4--;
         }
         func8(rng());
         printf("DELETE!\n");
         scalar4--;
      }
      func7(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/4 + 1;;
      for(; loop21 < loopLimit21; loop21++) {
         int scalar2 = 1;
         scalar2++;
         int loop22 = 0;
         int loopLimit22 = (rand()%10)/5 + 1;;
         for(; loop22 < loopLimit22; loop22++) {
            int scalar3 = 1;
            scalar3++;
            int loop23 = 0;
            int loopLimit23 = (rand()%10)/6 + 1;;
            for(; loop23 < loopLimit23; loop23++) {
               int scalar4 = 1;
               scalar4++;
               scalar4--;
            }
            printf("DELETE!\n");
            scalar2--;
         }
         func8(rng());
         printf("DELETE!\n");
         scalar2--;
      }
      func7(rng());
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func6(rng());
      }
      else {
         int scalar2 = 1;
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/4 + 1;;
         for(; loop24 < loopLimit24; loop24++) {
            int scalar3 = 1;
            scalar3++;
            int loop25 = 0;
            int loopLimit25 = (rand()%10)/5 + 1;;
            for(; loop25 < loopLimit25; loop25++) {
               int scalar4 = 1;
               scalar4++;
               scalar2--;
            }
            printf("DELETE!\n");
            scalar3--;
         }
         func8(rng());
         printf("DELETE!\n");
         int scalar3 = 1;
         int scalar4 = 1;
         int loop26 = 0;
         int loopLimit26 = (rand()%10)/4 + 1;;
         for(; loop26 < loopLimit26; loop26++) {
            if(PATH0 & 4) {
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar2--;
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
            }
            int loop27 = 0;
            int loopLimit27 = (rand()%10)/5 + 1;;
            for(; loop27 < loopLimit27; loop27++) {
               int scalar5 = 1;
               scalar5++;
               scalar4--;
            }
            printf("DELETE!\n");
            if(PATH0 & 8) {
               func8(rng());
            }
            else {
               int scalar5 = 1;
               int scalar6 = 1;
               int scalar7 = 1;
               int loop28 = 0;
               int loopLimit28 = (rand()%10)/5 + 1;;
               for(; loop28 < loopLimit28; loop28++) {
                  if(PATH0 & 16) {
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                  }
                  else {
                     scalar5--;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                  }
               }
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
            }
         }
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
   }
   else {
      int scalar2 = 1;
      scalar2++;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      scalar2--;
      scalar2--;
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      int loop29 = 0;
      int loopLimit29 = (rand()%10)/4 + 1;;
      for(; loop29 < loopLimit29; loop29++) {
         int scalar3 = 1;
         scalar3++;
         int loop30 = 0;
         int loopLimit30 = (rand()%10)/5 + 1;;
         for(; loop30 < loopLimit30; loop30++) {
            int scalar4 = 1;
            scalar4++;
            int loop31 = 0;
            int loopLimit31 = (rand()%10)/6 + 1;;
            for(; loop31 < loopLimit31; loop31++) {
               int scalar5 = 1;
               scalar5++;
               int loop32 = 0;
               int loopLimit32 = (rand()%10)/7 + 1;;
               for(; loop32 < loopLimit32; loop32++) {
                  int scalar6 = 1;
                  scalar4++;
                  scalar2--;
               }
               printf("DELETE!\n");
               scalar2--;
            }
            func8(rng());
            printf("DELETE!\n");
            scalar2--;
         }
         func7(rng());
         printf("DELETE!\n");
         scalar3--;
      }
      func6(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop33 = 0;
      int loopLimit33 = (rand()%10)/3 + 1;;
      for(; loop33 < loopLimit33; loop33++) {
         int scalar1 = 1;
         scalar1++;
         int loop34 = 0;
         int loopLimit34 = (rand()%10)/4 + 1;;
         for(; loop34 < loopLimit34; loop34++) {
            int scalar2 = 1;
            scalar1++;
            int loop35 = 0;
            int loopLimit35 = (rand()%10)/5 + 1;;
            for(; loop35 < loopLimit35; loop35++) {
               int scalar3 = 1;
               scalar1++;
               int loop36 = 0;
               int loopLimit36 = (rand()%10)/6 + 1;;
               for(; loop36 < loopLimit36; loop36++) {
                  int scalar4 = 1;
                  scalar4++;
                  scalar4--;
               }
               printf("DELETE!\n");
               scalar2--;
            }
            func8(rng());
            printf("DELETE!\n");
            scalar1--;
         }
         func7(rng());
         printf("DELETE!\n");
         scalar1--;
      }
      func6(rng());
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func5(rng());
      }
      else {
         int scalar1 = 1;
         int loop37 = 0;
         int loopLimit37 = (rand()%10)/3 + 1;;
         for(; loop37 < loopLimit37; loop37++) {
            int scalar2 = 1;
            scalar2++;
            int loop38 = 0;
            int loopLimit38 = (rand()%10)/4 + 1;;
            for(; loop38 < loopLimit38; loop38++) {
               int scalar3 = 1;
               scalar1++;
               int loop39 = 0;
               int loopLimit39 = (rand()%10)/5 + 1;;
               for(; loop39 < loopLimit39; loop39++) {
                  int scalar4 = 1;
                  scalar2++;
                  scalar3--;
               }
               printf("DELETE!\n");
               scalar1--;
            }
            func8(rng());
            printf("DELETE!\n");
            scalar1--;
         }
         func7(rng());
         printf("DELETE!\n");
         int scalar2 = 1;
         int scalar3 = 1;
         int loop40 = 0;
         int loopLimit40 = (rand()%10)/3 + 1;;
         for(; loop40 < loopLimit40; loop40++) {
            if(PATH0 & 4) {
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar3--;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
            }
            int loop41 = 0;
            int loopLimit41 = (rand()%10)/4 + 1;;
            for(; loop41 < loopLimit41; loop41++) {
               int scalar4 = 1;
               scalar1++;
               int loop42 = 0;
               int loopLimit42 = (rand()%10)/5 + 1;;
               for(; loop42 < loopLimit42; loop42++) {
                  int scalar5 = 1;
                  scalar2++;
                  scalar2--;
               }
               printf("DELETE!\n");
               scalar2--;
            }
            func8(rng());
            printf("DELETE!\n");
            if(PATH0 & 8) {
               func7(rng());
            }
            else {
               int scalar4 = 1;
               int loop43 = 0;
               int loopLimit43 = (rand()%10)/4 + 1;;
               for(; loop43 < loopLimit43; loop43++) {
                  int scalar5 = 1;
                  scalar5++;
                  scalar5--;
               }
               printf("DELETE!\n");
               int scalar5 = 1;
               int scalar6 = 1;
               int loop44 = 0;
               int loopLimit44 = (rand()%10)/4 + 1;;
               for(; loop44 < loopLimit44; loop44++) {
                  if(PATH0 & 16) {
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                  }
                  else {
                     scalar5--;
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if(PATH0 & 32) {
                  }
                  else {
                  }
               }
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
            }
         }
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
   }
   else {
      int scalar1 = 1;
      scalar1++;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      scalar1--;
      scalar1--;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      int loop45 = 0;
      int loopLimit45 = (rand()%10)/3 + 1;;
      for(; loop45 < loopLimit45; loop45++) {
         int scalar2 = 1;
         scalar2++;
         int loop46 = 0;
         int loopLimit46 = (rand()%10)/4 + 1;;
         for(; loop46 < loopLimit46; loop46++) {
            int scalar3 = 1;
            scalar1++;
            int loop47 = 0;
            int loopLimit47 = (rand()%10)/5 + 1;;
            for(; loop47 < loopLimit47; loop47++) {
               int scalar4 = 1;
               scalar1++;
               int loop48 = 0;
               int loopLimit48 = (rand()%10)/6 + 1;;
               for(; loop48 < loopLimit48; loop48++) {
                  int scalar5 = 1;
                  scalar3++;
                  int loop49 = 0;
                  int loopLimit49 = (rand()%10)/7 + 1;;
                  for(; loop49 < loopLimit49; loop49++) {
                     int scalar6 = 1;
                     scalar4++;
                     scalar1--;
                  }
                  printf("DELETE!\n");
                  scalar1--;
               }
               func8(rng());
               printf("DELETE!\n");
               scalar3--;
            }
            func7(rng());
            printf("DELETE!\n");
            scalar3--;
         }
         func6(rng());
         printf("DELETE!\n");
         scalar2--;
      }
      func5(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop50 = 0;
      int loopLimit50 = (rand()%10)/2 + 1;;
      for(; loop50 < loopLimit50; loop50++) {
         int scalar0 = 1;
         scalar0++;
         int loop51 = 0;
         int loopLimit51 = (rand()%10)/3 + 1;;
         for(; loop51 < loopLimit51; loop51++) {
            int scalar1 = 1;
            scalar1++;
            int loop52 = 0;
            int loopLimit52 = (rand()%10)/4 + 1;;
            for(; loop52 < loopLimit52; loop52++) {
               int scalar2 = 1;
               scalar2++;
               int loop53 = 0;
               int loopLimit53 = (rand()%10)/5 + 1;;
               for(; loop53 < loopLimit53; loop53++) {
                  int scalar3 = 1;
                  scalar1++;
                  int loop54 = 0;
                  int loopLimit54 = (rand()%10)/6 + 1;;
                  for(; loop54 < loopLimit54; loop54++) {
                     int scalar4 = 1;
                     scalar3++;
                     scalar4--;
                  }
                  printf("DELETE!\n");
                  scalar2--;
               }
               func8(rng());
               printf("DELETE!\n");
               scalar0--;
            }
            func7(rng());
            printf("DELETE!\n");
            scalar0--;
         }
         func6(rng());
         printf("DELETE!\n");
         scalar0--;
      }
      func5(rng());
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func4(rng());
      }
      else {
         int scalar0 = 1;
         int loop55 = 0;
         int loopLimit55 = (rand()%10)/2 + 1;;
         for(; loop55 < loopLimit55; loop55++) {
            int scalar1 = 1;
            scalar0++;
            int loop56 = 0;
            int loopLimit56 = (rand()%10)/3 + 1;;
            for(; loop56 < loopLimit56; loop56++) {
               int scalar2 = 1;
               scalar0++;
               int loop57 = 0;
               int loopLimit57 = (rand()%10)/4 + 1;;
               for(; loop57 < loopLimit57; loop57++) {
                  int scalar3 = 1;
                  scalar0++;
                  int loop58 = 0;
                  int loopLimit58 = (rand()%10)/5 + 1;;
                  for(; loop58 < loopLimit58; loop58++) {
                     int scalar4 = 1;
                     scalar3++;
                     scalar3--;
                  }
                  printf("DELETE!\n");
                  scalar1--;
               }
               func8(rng());
               printf("DELETE!\n");
               scalar2--;
            }
            func7(rng());
            printf("DELETE!\n");
            scalar1--;
         }
         func6(rng());
         printf("DELETE!\n");
         int scalar1 = 1;
         int scalar2 = 1;
         int loop59 = 0;
         int loopLimit59 = (rand()%10)/2 + 1;;
         for(; loop59 < loopLimit59; loop59++) {
            if(PATH0 & 4) {
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar2--;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
            }
            int loop60 = 0;
            int loopLimit60 = (rand()%10)/3 + 1;;
            for(; loop60 < loopLimit60; loop60++) {
               int scalar3 = 1;
               scalar0++;
               int loop61 = 0;
               int loopLimit61 = (rand()%10)/4 + 1;;
               for(; loop61 < loopLimit61; loop61++) {
                  int scalar4 = 1;
                  scalar4++;
                  int loop62 = 0;
                  int loopLimit62 = (rand()%10)/5 + 1;;
                  for(; loop62 < loopLimit62; loop62++) {
                     int scalar5 = 1;
                     scalar2++;
                     scalar1--;
                  }
                  printf("DELETE!\n");
                  scalar0--;
               }
               func8(rng());
               printf("DELETE!\n");
               scalar1--;
            }
            func7(rng());
            printf("DELETE!\n");
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               int scalar3 = 1;
               int loop63 = 0;
               int loopLimit63 = (rand()%10)/3 + 1;;
               for(; loop63 < loopLimit63; loop63++) {
                  int scalar4 = 1;
                  scalar0++;
                  int loop64 = 0;
                  int loopLimit64 = (rand()%10)/4 + 1;;
                  for(; loop64 < loopLimit64; loop64++) {
                     int scalar5 = 1;
                     scalar2++;
                     scalar4--;
                  }
                  printf("DELETE!\n");
                  scalar4--;
               }
               func8(rng());
               printf("DELETE!\n");
               int scalar4 = 1;
               int scalar5 = 1;
               int loop65 = 0;
               int loopLimit65 = (rand()%10)/3 + 1;;
               for(; loop65 < loopLimit65; loop65++) {
                  if(PATH0 & 16) {
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                  }
                  else {
                     scalar5--;
                     if (scalar2 == 0) {
                        printf("IS 0!");
                     }
                  }
                  int loop66 = 0;
                  int loopLimit66 = (rand()%10)/4 + 1;;
                  for(; loop66 < loopLimit66; loop66++) {
                     int scalar6 = 1;
                     scalar0++;
                     scalar0--;
                  }
                  printf("DELETE!\n");
                  if(PATH0 & 32) {
                     func8(rng());
                  }
                  else {
                     int scalar6 = 1;
                     int scalar7 = 1;
                     int scalar8 = 1;
                     int loop67 = 0;
                     int loopLimit67 = (rand()%10)/4 + 1;;
                     for(; loop67 < loopLimit67; loop67++) {
                        if(PATH0 & 64) {
                           if (scalar8 == 0) {
                              printf("IS 0!");
                           }
                        }
                        else {
                           scalar4--;
                           if (scalar0 == 0) {
                              printf("IS 0!");
                           }
                        }
                     }
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                  }
               }
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
            }
         }
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
   }
   else {
      int scalar0 = 1;
      scalar0++;
      if (scalar0 == 0) {
         printf("IS 0!");
      }
      scalar0--;
      scalar0--;
      if (scalar0 == 0) {
         printf("IS 0!");
      }
      int loop68 = 0;
      int loopLimit68 = (rand()%10)/2 + 1;;
      for(; loop68 < loopLimit68; loop68++) {
         int scalar1 = 1;
         scalar1++;
         int loop69 = 0;
         int loopLimit69 = (rand()%10)/3 + 1;;
         for(; loop69 < loopLimit69; loop69++) {
            int scalar2 = 1;
            scalar2++;
            int loop70 = 0;
            int loopLimit70 = (rand()%10)/4 + 1;;
            for(; loop70 < loopLimit70; loop70++) {
               int scalar3 = 1;
               scalar3++;
               int loop71 = 0;
               int loopLimit71 = (rand()%10)/5 + 1;;
               for(; loop71 < loopLimit71; loop71++) {
                  int scalar4 = 1;
                  scalar4++;
                  int loop72 = 0;
                  int loopLimit72 = (rand()%10)/6 + 1;;
                  for(; loop72 < loopLimit72; loop72++) {
                     int scalar5 = 1;
                     scalar1++;
                     int loop73 = 0;
                     int loopLimit73 = (rand()%10)/7 + 1;;
                     for(; loop73 < loopLimit73; loop73++) {
                        int scalar6 = 1;
                        scalar1++;
                        scalar2--;
                     }
                     printf("DELETE!\n");
                     scalar2--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  scalar3--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar3--;
            }
            func6(rng());
            printf("DELETE!\n");
            scalar0--;
         }
         func5(rng());
         printf("DELETE!\n");
         scalar0--;
      }
      func4(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   int scalar0 = 1;
   int loop74 = 0;
   int loopLimit74 = (rand()%10)/2 + 1;;
   for(; loop74 < loopLimit74; loop74++) {
      int scalar1 = 1;
      scalar1++;
      int loop75 = 0;
      int loopLimit75 = (rand()%10)/3 + 1;;
      for(; loop75 < loopLimit75; loop75++) {
         int scalar2 = 1;
         scalar2++;
         int loop76 = 0;
         int loopLimit76 = (rand()%10)/4 + 1;;
         for(; loop76 < loopLimit76; loop76++) {
            int scalar3 = 1;
            scalar0++;
            int loop77 = 0;
            int loopLimit77 = (rand()%10)/5 + 1;;
            for(; loop77 < loopLimit77; loop77++) {
               int scalar4 = 1;
               scalar3++;
               int loop78 = 0;
               int loopLimit78 = (rand()%10)/6 + 1;;
               for(; loop78 < loopLimit78; loop78++) {
                  int scalar5 = 1;
                  scalar1++;
                  int loop79 = 0;
                  int loopLimit79 = (rand()%10)/7 + 1;;
                  for(; loop79 < loopLimit79; loop79++) {
                     int scalar6 = 1;
                     scalar6++;
                     int loop80 = 0;
                     int loopLimit80 = (rand()%10)/8 + 1;;
                     for(; loop80 < loopLimit80; loop80++) {
                        int scalar7 = 1;
                        scalar2++;
                        scalar6--;
                     }
                     printf("DELETE!\n");
                     scalar2--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  scalar4--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar3--;
            }
            func6(rng());
            printf("DELETE!\n");
            scalar0--;
         }
         func5(rng());
         printf("DELETE!\n");
         scalar0--;
      }
      func4(rng());
      printf("DELETE!\n");
      scalar1--;
   }
   func3(rng());
   printf("DELETE!\n");
   int scalar1 = 1;
   int scalar2 = 1;
   int loop81 = 0;
   int loopLimit81 = (rand()%10)/2 + 1;;
   for(; loop81 < loopLimit81; loop81++) {
      if(PATH0 & 1) {
         if (scalar0 == 0) {
            printf("IS 0!");
         }
      }
      else {
         scalar2--;
         if (scalar0 == 0) {
            printf("IS 0!");
         }
      }
      int loop82 = 0;
      int loopLimit82 = (rand()%10)/3 + 1;;
      for(; loop82 < loopLimit82; loop82++) {
         int scalar3 = 1;
         scalar0++;
         int loop83 = 0;
         int loopLimit83 = (rand()%10)/4 + 1;;
         for(; loop83 < loopLimit83; loop83++) {
            int scalar4 = 1;
            scalar3++;
            int loop84 = 0;
            int loopLimit84 = (rand()%10)/5 + 1;;
            for(; loop84 < loopLimit84; loop84++) {
               int scalar5 = 1;
               scalar0++;
               int loop85 = 0;
               int loopLimit85 = (rand()%10)/6 + 1;;
               for(; loop85 < loopLimit85; loop85++) {
                  int scalar6 = 1;
                  scalar1++;
                  int loop86 = 0;
                  int loopLimit86 = (rand()%10)/7 + 1;;
                  for(; loop86 < loopLimit86; loop86++) {
                     int scalar7 = 1;
                     scalar2++;
                     int loop87 = 0;
                     int loopLimit87 = (rand()%10)/8 + 1;;
                     for(; loop87 < loopLimit87; loop87++) {
                        int scalar8 = 1;
                        scalar5++;
                        scalar1--;
                     }
                     printf("DELETE!\n");
                     scalar5--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  scalar6--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar0--;
            }
            func6(rng());
            printf("DELETE!\n");
            scalar0--;
         }
         func5(rng());
         printf("DELETE!\n");
         scalar3--;
      }
      func4(rng());
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func3(rng());
      }
      else {
         int scalar3 = 1;
         int loop88 = 0;
         int loopLimit88 = (rand()%10)/3 + 1;;
         for(; loop88 < loopLimit88; loop88++) {
            int scalar4 = 1;
            scalar4++;
            int loop89 = 0;
            int loopLimit89 = (rand()%10)/4 + 1;;
            for(; loop89 < loopLimit89; loop89++) {
               int scalar5 = 1;
               scalar4++;
               int loop90 = 0;
               int loopLimit90 = (rand()%10)/5 + 1;;
               for(; loop90 < loopLimit90; loop90++) {
                  int scalar6 = 1;
                  scalar4++;
                  int loop91 = 0;
                  int loopLimit91 = (rand()%10)/6 + 1;;
                  for(; loop91 < loopLimit91; loop91++) {
                     int scalar7 = 1;
                     scalar2++;
                     int loop92 = 0;
                     int loopLimit92 = (rand()%10)/7 + 1;;
                     for(; loop92 < loopLimit92; loop92++) {
                        int scalar8 = 1;
                        scalar6++;
                        scalar8--;
                     }
                     printf("DELETE!\n");
                     scalar5--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  scalar1--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar3--;
            }
            func6(rng());
            printf("DELETE!\n");
            scalar4--;
         }
         func5(rng());
         printf("DELETE!\n");
         int scalar4 = 1;
         int scalar5 = 1;
         int loop93 = 0;
         int loopLimit93 = (rand()%10)/3 + 1;;
         for(; loop93 < loopLimit93; loop93++) {
            if(PATH0 & 4) {
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar5--;
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
            }
            int loop94 = 0;
            int loopLimit94 = (rand()%10)/4 + 1;;
            for(; loop94 < loopLimit94; loop94++) {
               int scalar6 = 1;
               scalar2++;
               int loop95 = 0;
               int loopLimit95 = (rand()%10)/5 + 1;;
               for(; loop95 < loopLimit95; loop95++) {
                  int scalar7 = 1;
                  scalar3++;
                  int loop96 = 0;
                  int loopLimit96 = (rand()%10)/6 + 1;;
                  for(; loop96 < loopLimit96; loop96++) {
                     int scalar8 = 1;
                     scalar3++;
                     int loop97 = 0;
                     int loopLimit97 = (rand()%10)/7 + 1;;
                     for(; loop97 < loopLimit97; loop97++) {
                        int scalar9 = 1;
                        scalar6++;
                        scalar8--;
                     }
                     printf("DELETE!\n");
                     scalar4--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  scalar6--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar1--;
            }
            func6(rng());
            printf("DELETE!\n");
            if(PATH0 & 8) {
               func5(rng());
            }
            else {
               int scalar6 = 1;
               int loop98 = 0;
               int loopLimit98 = (rand()%10)/4 + 1;;
               for(; loop98 < loopLimit98; loop98++) {
                  int scalar7 = 1;
                  scalar2++;
                  int loop99 = 0;
                  int loopLimit99 = (rand()%10)/5 + 1;;
                  for(; loop99 < loopLimit99; loop99++) {
                     int scalar8 = 1;
                     scalar6++;
                     int loop100 = 0;
                     int loopLimit100 = (rand()%10)/6 + 1;;
                     for(; loop100 < loopLimit100; loop100++) {
                        int scalar9 = 1;
                        scalar1++;
                        scalar1--;
                     }
                     printf("DELETE!\n");
                     scalar6--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  scalar6--;
               }
               func7(rng());
               printf("DELETE!\n");
               int scalar7 = 1;
               int scalar8 = 1;
               int loop101 = 0;
               int loopLimit101 = (rand()%10)/4 + 1;;
               for(; loop101 < loopLimit101; loop101++) {
                  if(PATH0 & 16) {
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                  }
                  else {
                     scalar3--;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                  }
                  int loop102 = 0;
                  int loopLimit102 = (rand()%10)/5 + 1;;
                  for(; loop102 < loopLimit102; loop102++) {
                     int scalar9 = 1;
                     scalar4++;
                     int loop103 = 0;
                     int loopLimit103 = (rand()%10)/6 + 1;;
                     for(; loop103 < loopLimit103; loop103++) {
                        int scalar10 = 1;
                        scalar9++;
                        scalar3--;
                     }
                     printf("DELETE!\n");
                     scalar5--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  if(PATH0 & 32) {
                     func7(rng());
                  }
                  else {
                     int scalar9 = 1;
                     int loop104 = 0;
                     int loopLimit104 = (rand()%10)/5 + 1;;
                     for(; loop104 < loopLimit104; loop104++) {
                        int scalar10 = 1;
                        scalar6++;
                        scalar0--;
                     }
                     printf("DELETE!\n");
                     int scalar10 = 1;
                     int scalar11 = 1;
                     int loop105 = 0;
                     int loopLimit105 = (rand()%10)/5 + 1;;
                     for(; loop105 < loopLimit105; loop105++) {
                        if(PATH0 & 64) {
                           if (scalar6 == 0) {
                              printf("IS 0!");
                           }
                        }
                        else {
                           scalar2--;
                           if (scalar8 == 0) {
                              printf("IS 0!");
                           }
                        }
                        if(PATH0 & 128) {
                        }
                        else {
                        }
                     }
                     if (scalar9 == 0) {
                        printf("IS 0!");
                     }
                  }
               }
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
            }
         }
         if (scalar2 == 0) {
            printf("IS 0!");
         }
      }
   }
   if (scalar0 == 0) {
      printf("IS 0!");
   }
}

void func1(const unsigned long PATH0) {
   int loop106 = 0;
   int loopLimit106 = (rand()%10)/2 + 1;;
   for(; loop106 < loopLimit106; loop106++) {
      int scalar0 = 1;
      scalar0++;
      int loop107 = 0;
      int loopLimit107 = (rand()%10)/3 + 1;;
      for(; loop107 < loopLimit107; loop107++) {
         int scalar1 = 1;
         scalar0++;
         int loop108 = 0;
         int loopLimit108 = (rand()%10)/4 + 1;;
         for(; loop108 < loopLimit108; loop108++) {
            int scalar2 = 1;
            scalar2++;
            int loop109 = 0;
            int loopLimit109 = (rand()%10)/5 + 1;;
            for(; loop109 < loopLimit109; loop109++) {
               int scalar3 = 1;
               scalar3++;
               int loop110 = 0;
               int loopLimit110 = (rand()%10)/6 + 1;;
               for(; loop110 < loopLimit110; loop110++) {
                  int scalar4 = 1;
                  scalar0++;
                  int loop111 = 0;
                  int loopLimit111 = (rand()%10)/7 + 1;;
                  for(; loop111 < loopLimit111; loop111++) {
                     int scalar5 = 1;
                     scalar2++;
                     int loop112 = 0;
                     int loopLimit112 = (rand()%10)/8 + 1;;
                     for(; loop112 < loopLimit112; loop112++) {
                        int scalar6 = 1;
                        scalar1++;
                        scalar3--;
                     }
                     printf("DELETE!\n");
                     scalar5--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  scalar1--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar2--;
            }
            func6(rng());
            printf("DELETE!\n");
            scalar1--;
         }
         func5(rng());
         printf("DELETE!\n");
         scalar0--;
      }
      func4(rng());
      printf("DELETE!\n");
      scalar0--;
   }
   func3(rng());
   printf("DELETE!\n");
   if(PATH0 & 1) {
      func2(rng());
   }
   else {
      int scalar0 = 1;
      int loop113 = 0;
      int loopLimit113 = (rand()%10)/2 + 1;;
      for(; loop113 < loopLimit113; loop113++) {
         int scalar1 = 1;
         scalar1++;
         int loop114 = 0;
         int loopLimit114 = (rand()%10)/3 + 1;;
         for(; loop114 < loopLimit114; loop114++) {
            int scalar2 = 1;
            scalar1++;
            int loop115 = 0;
            int loopLimit115 = (rand()%10)/4 + 1;;
            for(; loop115 < loopLimit115; loop115++) {
               int scalar3 = 1;
               scalar1++;
               int loop116 = 0;
               int loopLimit116 = (rand()%10)/5 + 1;;
               for(; loop116 < loopLimit116; loop116++) {
                  int scalar4 = 1;
                  scalar4++;
                  int loop117 = 0;
                  int loopLimit117 = (rand()%10)/6 + 1;;
                  for(; loop117 < loopLimit117; loop117++) {
                     int scalar5 = 1;
                     scalar4++;
                     int loop118 = 0;
                     int loopLimit118 = (rand()%10)/7 + 1;;
                     for(; loop118 < loopLimit118; loop118++) {
                        int scalar6 = 1;
                        scalar3++;
                        scalar6--;
                     }
                     printf("DELETE!\n");
                     scalar1--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  scalar3--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar2--;
            }
            func6(rng());
            printf("DELETE!\n");
            scalar1--;
         }
         func5(rng());
         printf("DELETE!\n");
         scalar0--;
      }
      func4(rng());
      printf("DELETE!\n");
      int scalar1 = 1;
      int scalar2 = 1;
      int loop119 = 0;
      int loopLimit119 = (rand()%10)/2 + 1;;
      for(; loop119 < loopLimit119; loop119++) {
         if(PATH0 & 2) {
            if (scalar2 == 0) {
               printf("IS 0!");
            }
         }
         else {
            scalar2--;
            if (scalar0 == 0) {
               printf("IS 0!");
            }
         }
         int loop120 = 0;
         int loopLimit120 = (rand()%10)/3 + 1;;
         for(; loop120 < loopLimit120; loop120++) {
            int scalar3 = 1;
            scalar2++;
            int loop121 = 0;
            int loopLimit121 = (rand()%10)/4 + 1;;
            for(; loop121 < loopLimit121; loop121++) {
               int scalar4 = 1;
               scalar4++;
               int loop122 = 0;
               int loopLimit122 = (rand()%10)/5 + 1;;
               for(; loop122 < loopLimit122; loop122++) {
                  int scalar5 = 1;
                  scalar0++;
                  int loop123 = 0;
                  int loopLimit123 = (rand()%10)/6 + 1;;
                  for(; loop123 < loopLimit123; loop123++) {
                     int scalar6 = 1;
                     scalar2++;
                     int loop124 = 0;
                     int loopLimit124 = (rand()%10)/7 + 1;;
                     for(; loop124 < loopLimit124; loop124++) {
                        int scalar7 = 1;
                        scalar0++;
                        scalar3--;
                     }
                     printf("DELETE!\n");
                     scalar4--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  scalar0--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar4--;
            }
            func6(rng());
            printf("DELETE!\n");
            scalar2--;
         }
         func5(rng());
         printf("DELETE!\n");
         if(PATH0 & 4) {
            func4(rng());
         }
         else {
            int scalar3 = 1;
            int loop125 = 0;
            int loopLimit125 = (rand()%10)/3 + 1;;
            for(; loop125 < loopLimit125; loop125++) {
               int scalar4 = 1;
               scalar2++;
               int loop126 = 0;
               int loopLimit126 = (rand()%10)/4 + 1;;
               for(; loop126 < loopLimit126; loop126++) {
                  int scalar5 = 1;
                  scalar2++;
                  int loop127 = 0;
                  int loopLimit127 = (rand()%10)/5 + 1;;
                  for(; loop127 < loopLimit127; loop127++) {
                     int scalar6 = 1;
                     scalar1++;
                     int loop128 = 0;
                     int loopLimit128 = (rand()%10)/6 + 1;;
                     for(; loop128 < loopLimit128; loop128++) {
                        int scalar7 = 1;
                        scalar4++;
                        scalar3--;
                     }
                     printf("DELETE!\n");
                     scalar5--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  scalar2--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar0--;
            }
            func6(rng());
            printf("DELETE!\n");
            int scalar4 = 1;
            int scalar5 = 1;
            int loop129 = 0;
            int loopLimit129 = (rand()%10)/3 + 1;;
            for(; loop129 < loopLimit129; loop129++) {
               if(PATH0 & 8) {
                  if (scalar0 == 0) {
                     printf("IS 0!");
                  }
               }
               else {
                  scalar5--;
                  if (scalar0 == 0) {
                     printf("IS 0!");
                  }
               }
               int loop130 = 0;
               int loopLimit130 = (rand()%10)/4 + 1;;
               for(; loop130 < loopLimit130; loop130++) {
                  int scalar6 = 1;
                  scalar4++;
                  int loop131 = 0;
                  int loopLimit131 = (rand()%10)/5 + 1;;
                  for(; loop131 < loopLimit131; loop131++) {
                     int scalar7 = 1;
                     scalar1++;
                     int loop132 = 0;
                     int loopLimit132 = (rand()%10)/6 + 1;;
                     for(; loop132 < loopLimit132; loop132++) {
                        int scalar8 = 1;
                        scalar3++;
                        scalar4--;
                     }
                     printf("DELETE!\n");
                     scalar7--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  scalar6--;
               }
               func7(rng());
               printf("DELETE!\n");
               if(PATH0 & 16) {
                  func6(rng());
               }
               else {
                  int scalar6 = 1;
                  int loop133 = 0;
                  int loopLimit133 = (rand()%10)/4 + 1;;
                  for(; loop133 < loopLimit133; loop133++) {
                     int scalar7 = 1;
                     scalar7++;
                     int loop134 = 0;
                     int loopLimit134 = (rand()%10)/5 + 1;;
                     for(; loop134 < loopLimit134; loop134++) {
                        int scalar8 = 1;
                        scalar0++;
                        scalar2--;
                     }
                     printf("DELETE!\n");
                     scalar3--;
                  }
                  func8(rng());
                  printf("DELETE!\n");
                  int scalar7 = 1;
                  int scalar8 = 1;
                  int loop135 = 0;
                  int loopLimit135 = (rand()%10)/4 + 1;;
                  for(; loop135 < loopLimit135; loop135++) {
                     if(PATH0 & 32) {
                        if (scalar7 == 0) {
                           printf("IS 0!");
                        }
                     }
                     else {
                        scalar2--;
                        if (scalar8 == 0) {
                           printf("IS 0!");
                        }
                     }
                     int loop136 = 0;
                     int loopLimit136 = (rand()%10)/5 + 1;;
                     for(; loop136 < loopLimit136; loop136++) {
                        int scalar9 = 1;
                        scalar5++;
                        scalar8--;
                     }
                     printf("DELETE!\n");
                     if(PATH0 & 64) {
                        func8(rng());
                     }
                     else {
                        int scalar9 = 1;
                        int scalar10 = 1;
                        int scalar11 = 1;
                        int loop137 = 0;
                        int loopLimit137 = (rand()%10)/5 + 1;;
                        for(; loop137 < loopLimit137; loop137++) {
                           if(PATH0 & 128) {
                              if (scalar11 == 0) {
                                 printf("IS 0!");
                              }
                           }
                           else {
                              scalar2--;
                              if (scalar0 == 0) {
                                 printf("IS 0!");
                              }
                           }
                        }
                        if (scalar10 == 0) {
                           printf("IS 0!");
                        }
                     }
                  }
                  if (scalar0 == 0) {
                     printf("IS 0!");
                  }
               }
            }
            if (scalar4 == 0) {
               printf("IS 0!");
            }
         }
      }
      if (scalar1 == 0) {
         printf("IS 0!");
      }
   }
}

