#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func7(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func0(const unsigned long PATH0);

int main() {
   int scalar0 = 1;
   int scalar1 = 1;
   int scalar2 = 1;
   int scalar3 = 1;
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;;
   for(; loop0 < loopLimit0; loop0++) {
      int scalar4 = 1;
      scalar3++;
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;;
      for(; loop1 < loopLimit1; loop1++) {
         int scalar5 = 1;
         scalar4++;
         int loop2 = 0;
         int loopLimit2 = (rand()%10)/3 + 1;;
         for(; loop2 < loopLimit2; loop2++) {
            int scalar6 = 1;
            scalar2++;
            int loop3 = 0;
            int loopLimit3 = (rand()%10)/4 + 1;;
            for(; loop3 < loopLimit3; loop3++) {
               int scalar7 = 1;
               scalar3++;
               int loop4 = 0;
               int loopLimit4 = (rand()%10)/5 + 1;;
               for(; loop4 < loopLimit4; loop4++) {
                  int scalar8 = 1;
                  scalar5++;
                  int loop5 = 0;
                  int loopLimit5 = (rand()%10)/6 + 1;;
                  for(; loop5 < loopLimit5; loop5++) {
                     int scalar9 = 1;
                     scalar5++;
                     int loop6 = 0;
                     int loopLimit6 = (rand()%10)/7 + 1;;
                     for(; loop6 < loopLimit6; loop6++) {
                        int scalar10 = 1;
                        scalar0++;
                        scalar6--;
                     }
                     printf("DELETE!\n");
                     scalar9--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar5--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar7--;
            }
            func5(rng());
            printf("DELETE!\n");
            scalar2--;
         }
         func4(rng());
         printf("DELETE!\n");
         scalar3--;
      }
      func3(rng());
      printf("DELETE!\n");
      scalar4--;
   }
   func2(rng());
   printf("DELETE!\n");
   int scalar4 = 1;
   int scalar5 = 1;
   int loop48 = 0;
   int loopLimit48 = (rand()%10)/1 + 1;;
   for(; loop48 < loopLimit48; loop48++) {
      if(rng() & 1) {
         if (scalar5 == 0) {
            printf("IS 0!");
         }
      }
      else {
         scalar2--;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
      }
      int loop49 = 0;
      int loopLimit49 = (rand()%10)/2 + 1;;
      for(; loop49 < loopLimit49; loop49++) {
         int scalar6 = 1;
         scalar3++;
         int loop50 = 0;
         int loopLimit50 = (rand()%10)/3 + 1;;
         for(; loop50 < loopLimit50; loop50++) {
            int scalar7 = 1;
            scalar4++;
            int loop51 = 0;
            int loopLimit51 = (rand()%10)/4 + 1;;
            for(; loop51 < loopLimit51; loop51++) {
               int scalar8 = 1;
               scalar8++;
               int loop52 = 0;
               int loopLimit52 = (rand()%10)/5 + 1;;
               for(; loop52 < loopLimit52; loop52++) {
                  int scalar9 = 1;
                  scalar3++;
                  int loop53 = 0;
                  int loopLimit53 = (rand()%10)/6 + 1;;
                  for(; loop53 < loopLimit53; loop53++) {
                     int scalar10 = 1;
                     scalar4++;
                     int loop54 = 0;
                     int loopLimit54 = (rand()%10)/7 + 1;;
                     for(; loop54 < loopLimit54; loop54++) {
                        int scalar11 = 1;
                        scalar6++;
                        scalar0--;
                     }
                     printf("DELETE!\n");
                     scalar3--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar5--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar4--;
            }
            func5(rng());
            printf("DELETE!\n");
            scalar5--;
         }
         func4(rng());
         printf("DELETE!\n");
         scalar4--;
      }
      func3(rng());
      printf("DELETE!\n");
      if(rng() & 1) {
         func2(rng());
      }
      else {
         int scalar6 = 1;
         int loop55 = 0;
         int loopLimit55 = (rand()%10)/2 + 1;;
         for(; loop55 < loopLimit55; loop55++) {
            int scalar7 = 1;
            scalar3++;
            int loop56 = 0;
            int loopLimit56 = (rand()%10)/3 + 1;;
            for(; loop56 < loopLimit56; loop56++) {
               int scalar8 = 1;
               scalar5++;
               int loop57 = 0;
               int loopLimit57 = (rand()%10)/4 + 1;;
               for(; loop57 < loopLimit57; loop57++) {
                  int scalar9 = 1;
                  scalar5++;
                  int loop58 = 0;
                  int loopLimit58 = (rand()%10)/5 + 1;;
                  for(; loop58 < loopLimit58; loop58++) {
                     int scalar10 = 1;
                     scalar5++;
                     int loop59 = 0;
                     int loopLimit59 = (rand()%10)/6 + 1;;
                     for(; loop59 < loopLimit59; loop59++) {
                        int scalar11 = 1;
                        scalar3++;
                        scalar1--;
                     }
                     printf("DELETE!\n");
                     scalar4--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar9--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar7--;
            }
            func5(rng());
            printf("DELETE!\n");
            scalar4--;
         }
         func4(rng());
         printf("DELETE!\n");
         int scalar7 = 1;
         int scalar8 = 1;
         int loop60 = 0;
         int loopLimit60 = (rand()%10)/2 + 1;;
         for(; loop60 < loopLimit60; loop60++) {
            if(rng() & 1) {
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar1--;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
            }
            int loop61 = 0;
            int loopLimit61 = (rand()%10)/3 + 1;;
            for(; loop61 < loopLimit61; loop61++) {
               int scalar9 = 1;
               scalar3++;
               int loop62 = 0;
               int loopLimit62 = (rand()%10)/4 + 1;;
               for(; loop62 < loopLimit62; loop62++) {
                  int scalar10 = 1;
                  scalar9++;
                  int loop63 = 0;
                  int loopLimit63 = (rand()%10)/5 + 1;;
                  for(; loop63 < loopLimit63; loop63++) {
                     int scalar11 = 1;
                     scalar2++;
                     int loop64 = 0;
                     int loopLimit64 = (rand()%10)/6 + 1;;
                     for(; loop64 < loopLimit64; loop64++) {
                        int scalar12 = 1;
                        scalar0++;
                        scalar2--;
                     }
                     printf("DELETE!\n");
                     scalar10--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar4--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar6--;
            }
            func5(rng());
            printf("DELETE!\n");
            if(rng() & 1) {
               func4(rng());
            }
            else {
               int scalar9 = 1;
               int loop65 = 0;
               int loopLimit65 = (rand()%10)/3 + 1;;
               for(; loop65 < loopLimit65; loop65++) {
                  int scalar10 = 1;
                  scalar6++;
                  int loop66 = 0;
                  int loopLimit66 = (rand()%10)/4 + 1;;
                  for(; loop66 < loopLimit66; loop66++) {
                     int scalar11 = 1;
                     scalar3++;
                     int loop67 = 0;
                     int loopLimit67 = (rand()%10)/5 + 1;;
                     for(; loop67 < loopLimit67; loop67++) {
                        int scalar12 = 1;
                        scalar8++;
                        scalar5--;
                     }
                     printf("DELETE!\n");
                     scalar3--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar6--;
               }
               func6(rng());
               printf("DELETE!\n");
               int scalar10 = 1;
               int scalar11 = 1;
               int loop68 = 0;
               int loopLimit68 = (rand()%10)/3 + 1;;
               for(; loop68 < loopLimit68; loop68++) {
                  if(rng() & 1) {
                     if (scalar4 == 0) {
                        printf("IS 0!");
                     }
                  }
                  else {
                     scalar11--;
                     if (scalar5 == 0) {
                        printf("IS 0!");
                     }
                  }
                  int loop69 = 0;
                  int loopLimit69 = (rand()%10)/4 + 1;;
                  for(; loop69 < loopLimit69; loop69++) {
                     int scalar12 = 1;
                     scalar1++;
                     int loop70 = 0;
                     int loopLimit70 = (rand()%10)/5 + 1;;
                     for(; loop70 < loopLimit70; loop70++) {
                        int scalar13 = 1;
                        scalar9++;
                        scalar9--;
                     }
                     printf("DELETE!\n");
                     scalar10--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  if(rng() & 1) {
                     func6(rng());
                  }
                  else {
                     int scalar12 = 1;
                     int loop71 = 0;
                     int loopLimit71 = (rand()%10)/4 + 1;;
                     for(; loop71 < loopLimit71; loop71++) {
                        int scalar13 = 1;
                        scalar1++;
                        scalar0--;
                     }
                     printf("DELETE!\n");
                     int scalar13 = 1;
                     int scalar14 = 1;
                     int loop72 = 0;
                     int loopLimit72 = (rand()%10)/4 + 1;;
                     for(; loop72 < loopLimit72; loop72++) {
                        if(rng() & 1) {
                           if (scalar10 == 0) {
                              printf("IS 0!");
                           }
                        }
                        else {
                           scalar14--;
                           if (scalar7 == 0) {
                              printf("IS 0!");
                           }
                        }
                        if(rng() & 1) {
                        }
                        else {
                        }
                     }
                     if (scalar0 == 0) {
                        printf("IS 0!");
                     }
                  }
               }
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
            }
         }
         if (scalar5 == 0) {
            printf("IS 0!");
         }
      }
   }
   if (scalar2 == 0) {
      printf("IS 0!");
   }
   int loop73 = 0;
   int loopLimit73 = (rand()%10)/1 + 1;;
   for(; loop73 < loopLimit73; loop73++) {
      int scalar6 = 1;
      scalar5++;
      int loop74 = 0;
      int loopLimit74 = (rand()%10)/2 + 1;;
      for(; loop74 < loopLimit74; loop74++) {
         int scalar7 = 1;
         scalar3++;
         int loop75 = 0;
         int loopLimit75 = (rand()%10)/3 + 1;;
         for(; loop75 < loopLimit75; loop75++) {
            int scalar8 = 1;
            scalar6++;
            int loop76 = 0;
            int loopLimit76 = (rand()%10)/4 + 1;;
            for(; loop76 < loopLimit76; loop76++) {
               int scalar9 = 1;
               scalar9++;
               int loop77 = 0;
               int loopLimit77 = (rand()%10)/5 + 1;;
               for(; loop77 < loopLimit77; loop77++) {
                  int scalar10 = 1;
                  scalar9++;
                  int loop78 = 0;
                  int loopLimit78 = (rand()%10)/6 + 1;;
                  for(; loop78 < loopLimit78; loop78++) {
                     int scalar11 = 1;
                     scalar4++;
                     int loop79 = 0;
                     int loopLimit79 = (rand()%10)/7 + 1;;
                     for(; loop79 < loopLimit79; loop79++) {
                        int scalar12 = 1;
                        scalar1++;
                        scalar7--;
                     }
                     printf("DELETE!\n");
                     scalar5--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar3--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar6--;
            }
            func5(rng());
            printf("DELETE!\n");
            scalar7--;
         }
         func4(rng());
         printf("DELETE!\n");
         scalar0--;
      }
      func3(rng());
      printf("DELETE!\n");
      scalar2--;
   }
   func2(rng());
   printf("DELETE!\n");
   if(rng() & 1) {
      func1(rng());
   }
   else {
      int scalar6 = 1;
      int loop104 = 0;
      int loopLimit104 = (rand()%10)/1 + 1;;
      for(; loop104 < loopLimit104; loop104++) {
         int scalar7 = 1;
         scalar0++;
         int loop105 = 0;
         int loopLimit105 = (rand()%10)/2 + 1;;
         for(; loop105 < loopLimit105; loop105++) {
            int scalar8 = 1;
            scalar0++;
            int loop106 = 0;
            int loopLimit106 = (rand()%10)/3 + 1;;
            for(; loop106 < loopLimit106; loop106++) {
               int scalar9 = 1;
               scalar6++;
               int loop107 = 0;
               int loopLimit107 = (rand()%10)/4 + 1;;
               for(; loop107 < loopLimit107; loop107++) {
                  int scalar10 = 1;
                  scalar3++;
                  int loop108 = 0;
                  int loopLimit108 = (rand()%10)/5 + 1;;
                  for(; loop108 < loopLimit108; loop108++) {
                     int scalar11 = 1;
                     scalar11++;
                     int loop109 = 0;
                     int loopLimit109 = (rand()%10)/6 + 1;;
                     for(; loop109 < loopLimit109; loop109++) {
                        int scalar12 = 1;
                        scalar0++;
                        scalar11--;
                     }
                     printf("DELETE!\n");
                     scalar8--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar4--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar3--;
            }
            func5(rng());
            printf("DELETE!\n");
            scalar8--;
         }
         func4(rng());
         printf("DELETE!\n");
         scalar1--;
      }
      func3(rng());
      printf("DELETE!\n");
      int scalar7 = 1;
      int scalar8 = 1;
      int loop110 = 0;
      int loopLimit110 = (rand()%10)/1 + 1;;
      for(; loop110 < loopLimit110; loop110++) {
         if(rng() & 1) {
            if (scalar1 == 0) {
               printf("IS 0!");
            }
         }
         else {
            scalar7--;
            if (scalar2 == 0) {
               printf("IS 0!");
            }
         }
         int loop111 = 0;
         int loopLimit111 = (rand()%10)/2 + 1;;
         for(; loop111 < loopLimit111; loop111++) {
            int scalar9 = 1;
            scalar0++;
            int loop112 = 0;
            int loopLimit112 = (rand()%10)/3 + 1;;
            for(; loop112 < loopLimit112; loop112++) {
               int scalar10 = 1;
               scalar4++;
               int loop113 = 0;
               int loopLimit113 = (rand()%10)/4 + 1;;
               for(; loop113 < loopLimit113; loop113++) {
                  int scalar11 = 1;
                  scalar7++;
                  int loop114 = 0;
                  int loopLimit114 = (rand()%10)/5 + 1;;
                  for(; loop114 < loopLimit114; loop114++) {
                     int scalar12 = 1;
                     scalar6++;
                     int loop115 = 0;
                     int loopLimit115 = (rand()%10)/6 + 1;;
                     for(; loop115 < loopLimit115; loop115++) {
                        int scalar13 = 1;
                        scalar5++;
                        scalar12--;
                     }
                     printf("DELETE!\n");
                     scalar1--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar9--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar1--;
            }
            func5(rng());
            printf("DELETE!\n");
            scalar8--;
         }
         func4(rng());
         printf("DELETE!\n");
         if(rng() & 1) {
            func3(rng());
         }
         else {
            int scalar9 = 1;
            int loop116 = 0;
            int loopLimit116 = (rand()%10)/2 + 1;;
            for(; loop116 < loopLimit116; loop116++) {
               int scalar10 = 1;
               scalar4++;
               int loop117 = 0;
               int loopLimit117 = (rand()%10)/3 + 1;;
               for(; loop117 < loopLimit117; loop117++) {
                  int scalar11 = 1;
                  scalar7++;
                  int loop118 = 0;
                  int loopLimit118 = (rand()%10)/4 + 1;;
                  for(; loop118 < loopLimit118; loop118++) {
                     int scalar12 = 1;
                     scalar4++;
                     int loop119 = 0;
                     int loopLimit119 = (rand()%10)/5 + 1;;
                     for(; loop119 < loopLimit119; loop119++) {
                        int scalar13 = 1;
                        scalar10++;
                        scalar2--;
                     }
                     printf("DELETE!\n");
                     scalar7--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar10--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar1--;
            }
            func5(rng());
            printf("DELETE!\n");
            int scalar10 = 1;
            int scalar11 = 1;
            int loop120 = 0;
            int loopLimit120 = (rand()%10)/2 + 1;;
            for(; loop120 < loopLimit120; loop120++) {
               if(rng() & 1) {
                  if (scalar0 == 0) {
                     printf("IS 0!");
                  }
               }
               else {
                  scalar6--;
                  if (scalar0 == 0) {
                     printf("IS 0!");
                  }
               }
               int loop121 = 0;
               int loopLimit121 = (rand()%10)/3 + 1;;
               for(; loop121 < loopLimit121; loop121++) {
                  int scalar12 = 1;
                  scalar3++;
                  int loop122 = 0;
                  int loopLimit122 = (rand()%10)/4 + 1;;
                  for(; loop122 < loopLimit122; loop122++) {
                     int scalar13 = 1;
                     scalar11++;
                     int loop123 = 0;
                     int loopLimit123 = (rand()%10)/5 + 1;;
                     for(; loop123 < loopLimit123; loop123++) {
                        int scalar14 = 1;
                        scalar6++;
                        scalar4--;
                     }
                     printf("DELETE!\n");
                     scalar0--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar6--;
               }
               func6(rng());
               printf("DELETE!\n");
               if(rng() & 1) {
                  func5(rng());
               }
               else {
                  int scalar12 = 1;
                  int loop124 = 0;
                  int loopLimit124 = (rand()%10)/3 + 1;;
                  for(; loop124 < loopLimit124; loop124++) {
                     int scalar13 = 1;
                     scalar4++;
                     int loop125 = 0;
                     int loopLimit125 = (rand()%10)/4 + 1;;
                     for(; loop125 < loopLimit125; loop125++) {
                        int scalar14 = 1;
                        scalar13++;
                        scalar7--;
                     }
                     printf("DELETE!\n");
                     scalar7--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  int scalar13 = 1;
                  int scalar14 = 1;
                  int loop126 = 0;
                  int loopLimit126 = (rand()%10)/3 + 1;;
                  for(; loop126 < loopLimit126; loop126++) {
                     if(rng() & 1) {
                        if (scalar9 == 0) {
                           printf("IS 0!");
                        }
                     }
                     else {
                        scalar11--;
                        if (scalar5 == 0) {
                           printf("IS 0!");
                        }
                     }
                     int loop127 = 0;
                     int loopLimit127 = (rand()%10)/4 + 1;;
                     for(; loop127 < loopLimit127; loop127++) {
                        int scalar15 = 1;
                        scalar6++;
                        scalar3--;
                     }
                     printf("DELETE!\n");
                     if(rng() & 1) {
                        func7(rng());
                     }
                     else {
                        int scalar15 = 1;
                        int scalar16 = 1;
                        int scalar17 = 1;
                        int loop128 = 0;
                        int loopLimit128 = (rand()%10)/4 + 1;;
                        for(; loop128 < loopLimit128; loop128++) {
                           if(rng() & 1) {
                              if (scalar12 == 0) {
                                 printf("IS 0!");
                              }
                           }
                           else {
                              scalar15--;
                              if (scalar1 == 0) {
                                 printf("IS 0!");
                              }
                           }
                        }
                        if (scalar12 == 0) {
                           printf("IS 0!");
                        }
                     }
                  }
                  if (scalar1 == 0) {
                     printf("IS 0!");
                  }
               }
            }
            if (scalar7 == 0) {
               printf("IS 0!");
            }
         }
      }
      if (scalar8 == 0) {
         printf("IS 0!");
      }
   }
   func0(rng());
   int loop160 = 0;
   int loopLimit160 = (rand()%10)/1 + 1;;
   for(; loop160 < loopLimit160; loop160++) {
      int scalar6 = 1;
      scalar1++;
      int loop161 = 0;
      int loopLimit161 = (rand()%10)/2 + 1;;
      for(; loop161 < loopLimit161; loop161++) {
         int scalar7 = 1;
         scalar5++;
         int loop162 = 0;
         int loopLimit162 = (rand()%10)/3 + 1;;
         for(; loop162 < loopLimit162; loop162++) {
            int scalar8 = 1;
            scalar4++;
            int loop163 = 0;
            int loopLimit163 = (rand()%10)/4 + 1;;
            for(; loop163 < loopLimit163; loop163++) {
               int scalar9 = 1;
               scalar8++;
               int loop164 = 0;
               int loopLimit164 = (rand()%10)/5 + 1;;
               for(; loop164 < loopLimit164; loop164++) {
                  int scalar10 = 1;
                  scalar0++;
                  int loop165 = 0;
                  int loopLimit165 = (rand()%10)/6 + 1;;
                  for(; loop165 < loopLimit165; loop165++) {
                     int scalar11 = 1;
                     scalar6++;
                     int loop166 = 0;
                     int loopLimit166 = (rand()%10)/7 + 1;;
                     for(; loop166 < loopLimit166; loop166++) {
                        int scalar12 = 1;
                        scalar7++;
                        int loop167 = 0;
                        int loopLimit167 = (rand()%10)/8 + 1;;
                        for(; loop167 < loopLimit167; loop167++) {
                           int scalar13 = 1;
                           scalar0++;
                           scalar3--;
                        }
                        printf("DELETE!\n");
                        scalar4--;
                     }
                     func7(rng());
                     printf("DELETE!\n");
                     scalar3--;
                  }
                  func6(rng());
                  printf("DELETE!\n");
                  scalar10--;
               }
               func5(rng());
               printf("DELETE!\n");
               scalar3--;
            }
            func4(rng());
            printf("DELETE!\n");
            scalar8--;
         }
         func3(rng());
         printf("DELETE!\n");
         scalar2--;
      }
      func2(rng());
      printf("DELETE!\n");
      scalar3--;
   }
   func1(rng());
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int scalar9 = 1;
      scalar9++;
      if (scalar9 == 0) {
         printf("IS 0!");
      }
      scalar9--;
      scalar9--;
      if (scalar9 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      if(PATH0 & 2) {
      }
      else {
      }
   }
   else {
      int scalar8 = 1;
      scalar8++;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      scalar8--;
      scalar8--;
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/5 + 1;;
      for(; loop7 < loopLimit7; loop7++) {
         int scalar9 = 1;
         scalar9++;
         scalar8--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/4 + 1;;
      for(; loop8 < loopLimit8; loop8++) {
         int scalar7 = 1;
         scalar7++;
         scalar7--;
      }
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func7(rng());
      }
      else {
         int scalar7 = 1;
         int scalar8 = 1;
         int scalar9 = 1;
         int loop9 = 0;
         int loopLimit9 = (rand()%10)/4 + 1;;
         for(; loop9 < loopLimit9; loop9++) {
            if(PATH0 & 4) {
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar9--;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
            }
         }
         if (scalar8 == 0) {
            printf("IS 0!");
         }
      }
   }
   else {
      int scalar7 = 1;
      scalar7++;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      scalar7--;
      scalar7--;
      if (scalar7 == 0) {
         printf("IS 0!");
      }
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/4 + 1;;
      for(; loop10 < loopLimit10; loop10++) {
         int scalar8 = 1;
         scalar8++;
         int loop11 = 0;
         int loopLimit11 = (rand()%10)/5 + 1;;
         for(; loop11 < loopLimit11; loop11++) {
            int scalar9 = 1;
            scalar7++;
            scalar8--;
         }
         printf("DELETE!\n");
         scalar7--;
      }
      func7(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/3 + 1;;
      for(; loop12 < loopLimit12; loop12++) {
         int scalar6 = 1;
         scalar6++;
         int loop13 = 0;
         int loopLimit13 = (rand()%10)/4 + 1;;
         for(; loop13 < loopLimit13; loop13++) {
            int scalar7 = 1;
            scalar7++;
            scalar7--;
         }
         printf("DELETE!\n");
         scalar6--;
      }
      func7(rng());
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func6(rng());
      }
      else {
         int scalar6 = 1;
         int loop14 = 0;
         int loopLimit14 = (rand()%10)/3 + 1;;
         for(; loop14 < loopLimit14; loop14++) {
            int scalar7 = 1;
            scalar7++;
            scalar6--;
         }
         printf("DELETE!\n");
         int scalar7 = 1;
         int scalar8 = 1;
         int loop15 = 0;
         int loopLimit15 = (rand()%10)/3 + 1;;
         for(; loop15 < loopLimit15; loop15++) {
            if(PATH0 & 4) {
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar8--;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
            }
            if(PATH0 & 8) {
            }
            else {
            }
         }
         if (scalar8 == 0) {
            printf("IS 0!");
         }
      }
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
      int loop16 = 0;
      int loopLimit16 = (rand()%10)/3 + 1;;
      for(; loop16 < loopLimit16; loop16++) {
         int scalar7 = 1;
         scalar6++;
         int loop17 = 0;
         int loopLimit17 = (rand()%10)/4 + 1;;
         for(; loop17 < loopLimit17; loop17++) {
            int scalar8 = 1;
            scalar6++;
            int loop18 = 0;
            int loopLimit18 = (rand()%10)/5 + 1;;
            for(; loop18 < loopLimit18; loop18++) {
               int scalar9 = 1;
               scalar8++;
               scalar8--;
            }
            printf("DELETE!\n");
            scalar7--;
         }
         func7(rng());
         printf("DELETE!\n");
         scalar7--;
      }
      func6(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop19 = 0;
      int loopLimit19 = (rand()%10)/2 + 1;;
      for(; loop19 < loopLimit19; loop19++) {
         int scalar5 = 1;
         scalar5++;
         int loop20 = 0;
         int loopLimit20 = (rand()%10)/3 + 1;;
         for(; loop20 < loopLimit20; loop20++) {
            int scalar6 = 1;
            scalar5++;
            int loop21 = 0;
            int loopLimit21 = (rand()%10)/4 + 1;;
            for(; loop21 < loopLimit21; loop21++) {
               int scalar7 = 1;
               scalar5++;
               scalar7--;
            }
            printf("DELETE!\n");
            scalar6--;
         }
         func7(rng());
         printf("DELETE!\n");
         scalar5--;
      }
      func6(rng());
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func5(rng());
      }
      else {
         int scalar5 = 1;
         int loop22 = 0;
         int loopLimit22 = (rand()%10)/2 + 1;;
         for(; loop22 < loopLimit22; loop22++) {
            int scalar6 = 1;
            scalar6++;
            int loop23 = 0;
            int loopLimit23 = (rand()%10)/3 + 1;;
            for(; loop23 < loopLimit23; loop23++) {
               int scalar7 = 1;
               scalar6++;
               scalar7--;
            }
            printf("DELETE!\n");
            scalar5--;
         }
         func7(rng());
         printf("DELETE!\n");
         int scalar6 = 1;
         int scalar7 = 1;
         int loop24 = 0;
         int loopLimit24 = (rand()%10)/2 + 1;;
         for(; loop24 < loopLimit24; loop24++) {
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
            int loop25 = 0;
            int loopLimit25 = (rand()%10)/3 + 1;;
            for(; loop25 < loopLimit25; loop25++) {
               int scalar8 = 1;
               scalar7++;
               scalar8--;
            }
            printf("DELETE!\n");
            if(PATH0 & 8) {
               func7(rng());
            }
            else {
               int scalar8 = 1;
               int scalar9 = 1;
               int scalar10 = 1;
               int loop26 = 0;
               int loopLimit26 = (rand()%10)/3 + 1;;
               for(; loop26 < loopLimit26; loop26++) {
                  if(PATH0 & 16) {
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                  }
                  else {
                     scalar7--;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                  }
               }
               if (scalar7 == 0) {
                  printf("IS 0!");
               }
            }
         }
         if (scalar6 == 0) {
            printf("IS 0!");
         }
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
      int loop27 = 0;
      int loopLimit27 = (rand()%10)/2 + 1;;
      for(; loop27 < loopLimit27; loop27++) {
         int scalar6 = 1;
         scalar6++;
         int loop28 = 0;
         int loopLimit28 = (rand()%10)/3 + 1;;
         for(; loop28 < loopLimit28; loop28++) {
            int scalar7 = 1;
            scalar7++;
            int loop29 = 0;
            int loopLimit29 = (rand()%10)/4 + 1;;
            for(; loop29 < loopLimit29; loop29++) {
               int scalar8 = 1;
               scalar7++;
               int loop30 = 0;
               int loopLimit30 = (rand()%10)/5 + 1;;
               for(; loop30 < loopLimit30; loop30++) {
                  int scalar9 = 1;
                  scalar9++;
                  scalar7--;
               }
               printf("DELETE!\n");
               scalar5--;
            }
            func7(rng());
            printf("DELETE!\n");
            scalar7--;
         }
         func6(rng());
         printf("DELETE!\n");
         scalar5--;
      }
      func5(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop31 = 0;
      int loopLimit31 = (rand()%10)/1 + 1;;
      for(; loop31 < loopLimit31; loop31++) {
         int scalar4 = 1;
         scalar4++;
         int loop32 = 0;
         int loopLimit32 = (rand()%10)/2 + 1;;
         for(; loop32 < loopLimit32; loop32++) {
            int scalar5 = 1;
            scalar4++;
            int loop33 = 0;
            int loopLimit33 = (rand()%10)/3 + 1;;
            for(; loop33 < loopLimit33; loop33++) {
               int scalar6 = 1;
               scalar4++;
               int loop34 = 0;
               int loopLimit34 = (rand()%10)/4 + 1;;
               for(; loop34 < loopLimit34; loop34++) {
                  int scalar7 = 1;
                  scalar6++;
                  scalar7--;
               }
               printf("DELETE!\n");
               scalar4--;
            }
            func7(rng());
            printf("DELETE!\n");
            scalar4--;
         }
         func6(rng());
         printf("DELETE!\n");
         scalar4--;
      }
      func5(rng());
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func4(rng());
      }
      else {
         int scalar4 = 1;
         int loop35 = 0;
         int loopLimit35 = (rand()%10)/1 + 1;;
         for(; loop35 < loopLimit35; loop35++) {
            int scalar5 = 1;
            scalar4++;
            int loop36 = 0;
            int loopLimit36 = (rand()%10)/2 + 1;;
            for(; loop36 < loopLimit36; loop36++) {
               int scalar6 = 1;
               scalar6++;
               int loop37 = 0;
               int loopLimit37 = (rand()%10)/3 + 1;;
               for(; loop37 < loopLimit37; loop37++) {
                  int scalar7 = 1;
                  scalar5++;
                  scalar5--;
               }
               printf("DELETE!\n");
               scalar6--;
            }
            func7(rng());
            printf("DELETE!\n");
            scalar5--;
         }
         func6(rng());
         printf("DELETE!\n");
         int scalar5 = 1;
         int scalar6 = 1;
         int loop38 = 0;
         int loopLimit38 = (rand()%10)/1 + 1;;
         for(; loop38 < loopLimit38; loop38++) {
            if(PATH0 & 4) {
               if (scalar4 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar5--;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
            }
            int loop39 = 0;
            int loopLimit39 = (rand()%10)/2 + 1;;
            for(; loop39 < loopLimit39; loop39++) {
               int scalar7 = 1;
               scalar5++;
               int loop40 = 0;
               int loopLimit40 = (rand()%10)/3 + 1;;
               for(; loop40 < loopLimit40; loop40++) {
                  int scalar8 = 1;
                  scalar4++;
                  scalar5--;
               }
               printf("DELETE!\n");
               scalar5--;
            }
            func7(rng());
            printf("DELETE!\n");
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               int scalar7 = 1;
               int loop41 = 0;
               int loopLimit41 = (rand()%10)/2 + 1;;
               for(; loop41 < loopLimit41; loop41++) {
                  int scalar8 = 1;
                  scalar4++;
                  scalar8--;
               }
               printf("DELETE!\n");
               int scalar8 = 1;
               int scalar9 = 1;
               int loop42 = 0;
               int loopLimit42 = (rand()%10)/2 + 1;;
               for(; loop42 < loopLimit42; loop42++) {
                  if(PATH0 & 16) {
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                  }
                  else {
                     scalar9--;
                     if (scalar8 == 0) {
                        printf("IS 0!");
                     }
                  }
                  if(PATH0 & 32) {
                  }
                  else {
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
      int loop43 = 0;
      int loopLimit43 = (rand()%10)/1 + 1;;
      for(; loop43 < loopLimit43; loop43++) {
         int scalar5 = 1;
         scalar5++;
         int loop44 = 0;
         int loopLimit44 = (rand()%10)/2 + 1;;
         for(; loop44 < loopLimit44; loop44++) {
            int scalar6 = 1;
            scalar5++;
            int loop45 = 0;
            int loopLimit45 = (rand()%10)/3 + 1;;
            for(; loop45 < loopLimit45; loop45++) {
               int scalar7 = 1;
               scalar7++;
               int loop46 = 0;
               int loopLimit46 = (rand()%10)/4 + 1;;
               for(; loop46 < loopLimit46; loop46++) {
                  int scalar8 = 1;
                  scalar5++;
                  int loop47 = 0;
                  int loopLimit47 = (rand()%10)/5 + 1;;
                  for(; loop47 < loopLimit47; loop47++) {
                     int scalar9 = 1;
                     scalar9++;
                     scalar7--;
                  }
                  printf("DELETE!\n");
                  scalar5--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar5--;
            }
            func6(rng());
            printf("DELETE!\n");
            scalar5--;
         }
         func5(rng());
         printf("DELETE!\n");
         scalar5--;
      }
      func4(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop80 = 0;
      int loopLimit80 = (rand()%10)/1 + 1;;
      for(; loop80 < loopLimit80; loop80++) {
         int scalar6 = 1;
         scalar6++;
         int loop81 = 0;
         int loopLimit81 = (rand()%10)/2 + 1;;
         for(; loop81 < loopLimit81; loop81++) {
            int scalar7 = 1;
            scalar6++;
            int loop82 = 0;
            int loopLimit82 = (rand()%10)/3 + 1;;
            for(; loop82 < loopLimit82; loop82++) {
               int scalar8 = 1;
               scalar6++;
               int loop83 = 0;
               int loopLimit83 = (rand()%10)/4 + 1;;
               for(; loop83 < loopLimit83; loop83++) {
                  int scalar9 = 1;
                  scalar7++;
                  int loop84 = 0;
                  int loopLimit84 = (rand()%10)/5 + 1;;
                  for(; loop84 < loopLimit84; loop84++) {
                     int scalar10 = 1;
                     scalar8++;
                     scalar7--;
                  }
                  printf("DELETE!\n");
                  scalar6--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar6--;
            }
            func6(rng());
            printf("DELETE!\n");
            scalar6--;
         }
         func5(rng());
         printf("DELETE!\n");
         scalar6--;
      }
      func4(rng());
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func3(rng());
      }
      else {
         int scalar6 = 1;
         int loop85 = 0;
         int loopLimit85 = (rand()%10)/1 + 1;;
         for(; loop85 < loopLimit85; loop85++) {
            int scalar7 = 1;
            scalar6++;
            int loop86 = 0;
            int loopLimit86 = (rand()%10)/2 + 1;;
            for(; loop86 < loopLimit86; loop86++) {
               int scalar8 = 1;
               scalar8++;
               int loop87 = 0;
               int loopLimit87 = (rand()%10)/3 + 1;;
               for(; loop87 < loopLimit87; loop87++) {
                  int scalar9 = 1;
                  scalar6++;
                  int loop88 = 0;
                  int loopLimit88 = (rand()%10)/4 + 1;;
                  for(; loop88 < loopLimit88; loop88++) {
                     int scalar10 = 1;
                     scalar6++;
                     scalar10--;
                  }
                  printf("DELETE!\n");
                  scalar8--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar8--;
            }
            func6(rng());
            printf("DELETE!\n");
            scalar7--;
         }
         func5(rng());
         printf("DELETE!\n");
         int scalar7 = 1;
         int scalar8 = 1;
         int loop89 = 0;
         int loopLimit89 = (rand()%10)/1 + 1;;
         for(; loop89 < loopLimit89; loop89++) {
            if(PATH0 & 4) {
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar7--;
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
            }
            int loop90 = 0;
            int loopLimit90 = (rand()%10)/2 + 1;;
            for(; loop90 < loopLimit90; loop90++) {
               int scalar9 = 1;
               scalar8++;
               int loop91 = 0;
               int loopLimit91 = (rand()%10)/3 + 1;;
               for(; loop91 < loopLimit91; loop91++) {
                  int scalar10 = 1;
                  scalar8++;
                  int loop92 = 0;
                  int loopLimit92 = (rand()%10)/4 + 1;;
                  for(; loop92 < loopLimit92; loop92++) {
                     int scalar11 = 1;
                     scalar8++;
                     scalar7--;
                  }
                  printf("DELETE!\n");
                  scalar8--;
               }
               func7(rng());
               printf("DELETE!\n");
               scalar9--;
            }
            func6(rng());
            printf("DELETE!\n");
            if(PATH0 & 8) {
               func5(rng());
            }
            else {
               int scalar9 = 1;
               int loop93 = 0;
               int loopLimit93 = (rand()%10)/2 + 1;;
               for(; loop93 < loopLimit93; loop93++) {
                  int scalar10 = 1;
                  scalar10++;
                  int loop94 = 0;
                  int loopLimit94 = (rand()%10)/3 + 1;;
                  for(; loop94 < loopLimit94; loop94++) {
                     int scalar11 = 1;
                     scalar8++;
                     scalar11--;
                  }
                  printf("DELETE!\n");
                  scalar8--;
               }
               func7(rng());
               printf("DELETE!\n");
               int scalar10 = 1;
               int scalar11 = 1;
               int loop95 = 0;
               int loopLimit95 = (rand()%10)/2 + 1;;
               for(; loop95 < loopLimit95; loop95++) {
                  if(PATH0 & 16) {
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                  }
                  else {
                     scalar11--;
                     if (scalar9 == 0) {
                        printf("IS 0!");
                     }
                  }
                  int loop96 = 0;
                  int loopLimit96 = (rand()%10)/3 + 1;;
                  for(; loop96 < loopLimit96; loop96++) {
                     int scalar12 = 1;
                     scalar7++;
                     scalar7--;
                  }
                  printf("DELETE!\n");
                  if(PATH0 & 32) {
                     func7(rng());
                  }
                  else {
                     int scalar12 = 1;
                     int scalar13 = 1;
                     int scalar14 = 1;
                     int loop97 = 0;
                     int loopLimit97 = (rand()%10)/3 + 1;;
                     for(; loop97 < loopLimit97; loop97++) {
                        if(PATH0 & 64) {
                           if (scalar10 == 0) {
                              printf("IS 0!");
                           }
                        }
                        else {
                           scalar10--;
                           if (scalar14 == 0) {
                              printf("IS 0!");
                           }
                        }
                     }
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                  }
               }
               if (scalar9 == 0) {
                  printf("IS 0!");
               }
            }
         }
         if (scalar7 == 0) {
            printf("IS 0!");
         }
      }
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
      int loop98 = 0;
      int loopLimit98 = (rand()%10)/1 + 1;;
      for(; loop98 < loopLimit98; loop98++) {
         int scalar7 = 1;
         scalar6++;
         int loop99 = 0;
         int loopLimit99 = (rand()%10)/2 + 1;;
         for(; loop99 < loopLimit99; loop99++) {
            int scalar8 = 1;
            scalar7++;
            int loop100 = 0;
            int loopLimit100 = (rand()%10)/3 + 1;;
            for(; loop100 < loopLimit100; loop100++) {
               int scalar9 = 1;
               scalar8++;
               int loop101 = 0;
               int loopLimit101 = (rand()%10)/4 + 1;;
               for(; loop101 < loopLimit101; loop101++) {
                  int scalar10 = 1;
                  scalar8++;
                  int loop102 = 0;
                  int loopLimit102 = (rand()%10)/5 + 1;;
                  for(; loop102 < loopLimit102; loop102++) {
                     int scalar11 = 1;
                     scalar11++;
                     int loop103 = 0;
                     int loopLimit103 = (rand()%10)/6 + 1;;
                     for(; loop103 < loopLimit103; loop103++) {
                        int scalar12 = 1;
                        scalar11++;
                        scalar11--;
                     }
                     printf("DELETE!\n");
                     scalar6--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar9--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar6--;
            }
            func5(rng());
            printf("DELETE!\n");
            scalar6--;
         }
         func4(rng());
         printf("DELETE!\n");
         scalar6--;
      }
      func3(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop129 = 0;
      int loopLimit129 = (rand()%10)/1 + 1;;
      for(; loop129 < loopLimit129; loop129++) {
         int scalar6 = 1;
         scalar6++;
         int loop130 = 0;
         int loopLimit130 = (rand()%10)/2 + 1;;
         for(; loop130 < loopLimit130; loop130++) {
            int scalar7 = 1;
            scalar7++;
            int loop131 = 0;
            int loopLimit131 = (rand()%10)/3 + 1;;
            for(; loop131 < loopLimit131; loop131++) {
               int scalar8 = 1;
               scalar8++;
               int loop132 = 0;
               int loopLimit132 = (rand()%10)/4 + 1;;
               for(; loop132 < loopLimit132; loop132++) {
                  int scalar9 = 1;
                  scalar9++;
                  int loop133 = 0;
                  int loopLimit133 = (rand()%10)/5 + 1;;
                  for(; loop133 < loopLimit133; loop133++) {
                     int scalar10 = 1;
                     scalar7++;
                     int loop134 = 0;
                     int loopLimit134 = (rand()%10)/6 + 1;;
                     for(; loop134 < loopLimit134; loop134++) {
                        int scalar11 = 1;
                        scalar8++;
                        scalar11--;
                     }
                     printf("DELETE!\n");
                     scalar6--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar6--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar8--;
            }
            func5(rng());
            printf("DELETE!\n");
            scalar6--;
         }
         func4(rng());
         printf("DELETE!\n");
         scalar6--;
      }
      func3(rng());
      printf("DELETE!\n");
      if(PATH0 & 2) {
         func2(rng());
      }
      else {
         int scalar6 = 1;
         int loop135 = 0;
         int loopLimit135 = (rand()%10)/1 + 1;;
         for(; loop135 < loopLimit135; loop135++) {
            int scalar7 = 1;
            scalar6++;
            int loop136 = 0;
            int loopLimit136 = (rand()%10)/2 + 1;;
            for(; loop136 < loopLimit136; loop136++) {
               int scalar8 = 1;
               scalar6++;
               int loop137 = 0;
               int loopLimit137 = (rand()%10)/3 + 1;;
               for(; loop137 < loopLimit137; loop137++) {
                  int scalar9 = 1;
                  scalar6++;
                  int loop138 = 0;
                  int loopLimit138 = (rand()%10)/4 + 1;;
                  for(; loop138 < loopLimit138; loop138++) {
                     int scalar10 = 1;
                     scalar8++;
                     int loop139 = 0;
                     int loopLimit139 = (rand()%10)/5 + 1;;
                     for(; loop139 < loopLimit139; loop139++) {
                        int scalar11 = 1;
                        scalar11++;
                        scalar8--;
                     }
                     printf("DELETE!\n");
                     scalar7--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar8--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar8--;
            }
            func5(rng());
            printf("DELETE!\n");
            scalar6--;
         }
         func4(rng());
         printf("DELETE!\n");
         int scalar7 = 1;
         int scalar8 = 1;
         int loop140 = 0;
         int loopLimit140 = (rand()%10)/1 + 1;;
         for(; loop140 < loopLimit140; loop140++) {
            if(PATH0 & 4) {
               if (scalar6 == 0) {
                  printf("IS 0!");
               }
            }
            else {
               scalar8--;
               if (scalar8 == 0) {
                  printf("IS 0!");
               }
            }
            int loop141 = 0;
            int loopLimit141 = (rand()%10)/2 + 1;;
            for(; loop141 < loopLimit141; loop141++) {
               int scalar9 = 1;
               scalar7++;
               int loop142 = 0;
               int loopLimit142 = (rand()%10)/3 + 1;;
               for(; loop142 < loopLimit142; loop142++) {
                  int scalar10 = 1;
                  scalar6++;
                  int loop143 = 0;
                  int loopLimit143 = (rand()%10)/4 + 1;;
                  for(; loop143 < loopLimit143; loop143++) {
                     int scalar11 = 1;
                     scalar8++;
                     int loop144 = 0;
                     int loopLimit144 = (rand()%10)/5 + 1;;
                     for(; loop144 < loopLimit144; loop144++) {
                        int scalar12 = 1;
                        scalar8++;
                        scalar10--;
                     }
                     printf("DELETE!\n");
                     scalar8--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar9--;
               }
               func6(rng());
               printf("DELETE!\n");
               scalar7--;
            }
            func5(rng());
            printf("DELETE!\n");
            if(PATH0 & 8) {
               func4(rng());
            }
            else {
               int scalar9 = 1;
               int loop145 = 0;
               int loopLimit145 = (rand()%10)/2 + 1;;
               for(; loop145 < loopLimit145; loop145++) {
                  int scalar10 = 1;
                  scalar9++;
                  int loop146 = 0;
                  int loopLimit146 = (rand()%10)/3 + 1;;
                  for(; loop146 < loopLimit146; loop146++) {
                     int scalar11 = 1;
                     scalar8++;
                     int loop147 = 0;
                     int loopLimit147 = (rand()%10)/4 + 1;;
                     for(; loop147 < loopLimit147; loop147++) {
                        int scalar12 = 1;
                        scalar9++;
                        scalar10--;
                     }
                     printf("DELETE!\n");
                     scalar11--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  scalar7--;
               }
               func6(rng());
               printf("DELETE!\n");
               int scalar10 = 1;
               int scalar11 = 1;
               int loop148 = 0;
               int loopLimit148 = (rand()%10)/2 + 1;;
               for(; loop148 < loopLimit148; loop148++) {
                  if(PATH0 & 16) {
                     if (scalar9 == 0) {
                        printf("IS 0!");
                     }
                  }
                  else {
                     scalar10--;
                     if (scalar6 == 0) {
                        printf("IS 0!");
                     }
                  }
                  int loop149 = 0;
                  int loopLimit149 = (rand()%10)/3 + 1;;
                  for(; loop149 < loopLimit149; loop149++) {
                     int scalar12 = 1;
                     scalar12++;
                     int loop150 = 0;
                     int loopLimit150 = (rand()%10)/4 + 1;;
                     for(; loop150 < loopLimit150; loop150++) {
                        int scalar13 = 1;
                        scalar8++;
                        scalar10--;
                     }
                     printf("DELETE!\n");
                     scalar8--;
                  }
                  func7(rng());
                  printf("DELETE!\n");
                  if(PATH0 & 32) {
                     func6(rng());
                  }
                  else {
                     int scalar12 = 1;
                     int loop151 = 0;
                     int loopLimit151 = (rand()%10)/3 + 1;;
                     for(; loop151 < loopLimit151; loop151++) {
                        int scalar13 = 1;
                        scalar7++;
                        scalar7--;
                     }
                     printf("DELETE!\n");
                     int scalar13 = 1;
                     int scalar14 = 1;
                     int loop152 = 0;
                     int loopLimit152 = (rand()%10)/3 + 1;;
                     for(; loop152 < loopLimit152; loop152++) {
                        if(PATH0 & 64) {
                           if (scalar14 == 0) {
                              printf("IS 0!");
                           }
                        }
                        else {
                           scalar12--;
                           if (scalar7 == 0) {
                              printf("IS 0!");
                           }
                        }
                        if(PATH0 & 128) {
                        }
                        else {
                        }
                     }
                     if (scalar7 == 0) {
                        printf("IS 0!");
                     }
                  }
               }
               if (scalar10 == 0) {
                  printf("IS 0!");
               }
            }
         }
         if (scalar8 == 0) {
            printf("IS 0!");
         }
      }
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
      int loop153 = 0;
      int loopLimit153 = (rand()%10)/1 + 1;;
      for(; loop153 < loopLimit153; loop153++) {
         int scalar7 = 1;
         scalar6++;
         int loop154 = 0;
         int loopLimit154 = (rand()%10)/2 + 1;;
         for(; loop154 < loopLimit154; loop154++) {
            int scalar8 = 1;
            scalar7++;
            int loop155 = 0;
            int loopLimit155 = (rand()%10)/3 + 1;;
            for(; loop155 < loopLimit155; loop155++) {
               int scalar9 = 1;
               scalar7++;
               int loop156 = 0;
               int loopLimit156 = (rand()%10)/4 + 1;;
               for(; loop156 < loopLimit156; loop156++) {
                  int scalar10 = 1;
                  scalar10++;
                  int loop157 = 0;
                  int loopLimit157 = (rand()%10)/5 + 1;;
                  for(; loop157 < loopLimit157; loop157++) {
                     int scalar11 = 1;
                     scalar6++;
                     int loop158 = 0;
                     int loopLimit158 = (rand()%10)/6 + 1;;
                     for(; loop158 < loopLimit158; loop158++) {
                        int scalar12 = 1;
                        scalar10++;
                        int loop159 = 0;
                        int loopLimit159 = (rand()%10)/7 + 1;;
                        for(; loop159 < loopLimit159; loop159++) {
                           int scalar13 = 1;
                           scalar6++;
                           scalar8--;
                        }
                        printf("DELETE!\n");
                        scalar6--;
                     }
                     func7(rng());
                     printf("DELETE!\n");
                     scalar8--;
                  }
                  func6(rng());
                  printf("DELETE!\n");
                  scalar10--;
               }
               func5(rng());
               printf("DELETE!\n");
               scalar7--;
            }
            func4(rng());
            printf("DELETE!\n");
            scalar6--;
         }
         func3(rng());
         printf("DELETE!\n");
         scalar6--;
      }
      func2(rng());
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

