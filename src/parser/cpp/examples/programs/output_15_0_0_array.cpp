#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


unsigned long rng();
void func2(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func8(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func14();
void func12(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func13(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func10(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func0(const unsigned long PATH0);

int main() {
   int* array0 = new int[383];
   int* array1 = new int[886];
   int* array2 = new int[777];
   if(rng() & 1) {
      int loop0 = 0;
      int loopLimit0 = ceil((rand()%10)/1);
      for(; loop0 < loopLimit0; loop0++) {
         if(rng() & 1) {
            func2(rng());
         }
         else {
            if(rng() & 1) {
               func3(rng());
            }
            else {
               int* array3 = new int[368];
               for (int i = 0; i < 368; i++) {
                  if (array3[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 383; i++) {
                  array0[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop32 = 0;
      int loopLimit32 = ceil((rand()%10)/1);
      for(; loop32 < loopLimit32; loop32++) {
         int loop33 = 0;
         int loopLimit33 = ceil((rand()%10)/2);
         for(; loop33 < loopLimit33; loop33++) {
            if(rng() & 1) {
               func2(rng());
            }
            else {
               if(rng() & 1) {
                  func3(rng());
               }
               else {
                  int* array3 = new int[226];
                  for (int i = 0; i < 777; i++) {
                     if (array2[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 777; i++) {
                     array2[i]--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   int loop34 = 0;
   int loopLimit34 = ceil((rand()%10)/1);
   for(; loop34 < loopLimit34; loop34++) {
      if(rng() & 1) {
         func1(rng());
      }
      else {
         if(rng() & 1) {
            func2(rng());
         }
         else {
            int* array3 = new int[689];
            for (int i = 0; i < 383; i++) {
               if (array0[i] == 0) { 
                  printf("IS 0!");
               }
            }
            for (int i = 0; i < 689; i++) {
               array3[i]--; 
            }
            printf("DELETE!\n");
         }
      }
   }
   if(rng() & 1) {
      func1(rng());
   }
   else {
      int* array3 = new int[440];
      for (int i = 0; i < 886; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 440; i++) {
         array3[i]--; 
      }
      printf("DELETE!\n");
   }
   func0(rng());
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func2(const unsigned long PATH0) {
   int* array3 = new int[915];
   for (int i = 0; i < 915; i++) {
      array3[i]++; 
   }
   for (int i = 0; i < 915; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = ceil((rand()%10)/2);
      for(; loop1 < loopLimit1; loop1++) {
         if(PATH0 & 2) {
            func5(rng());
         }
         else {
            if(PATH0 & 4) {
               func6(rng());
            }
            else {
               int* array4 = new int[857];
               for (int i = 0; i < 915; i++) {
                  if (array3[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 857; i++) {
                  array4[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop24 = 0;
      int loopLimit24 = ceil((rand()%10)/2);
      for(; loop24 < loopLimit24; loop24++) {
         int loop25 = 0;
         int loopLimit25 = ceil((rand()%10)/3);
         for(; loop25 < loopLimit25; loop25++) {
            if(PATH0 & 8) {
               func5(rng());
            }
            else {
               if(PATH0 & 16) {
                  func6(rng());
               }
               else {
                  int* array4 = new int[582];
                  for (int i = 0; i < 582; i++) {
                     if (array4[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 915; i++) {
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

void func5(const unsigned long PATH0) {
   int* array4 = new int[386];
   for (int i = 0; i < 386; i++) {
      array4[i]++; 
   }
   for (int i = 0; i < 386; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
      int loop2 = 0;
      int loopLimit2 = ceil((rand()%10)/3);
      for(; loop2 < loopLimit2; loop2++) {
         if(PATH0 & 2) {
            func8(rng());
         }
         else {
            if(PATH0 & 4) {
               func9(rng());
            }
            else {
               int* array5 = new int[537];
               for (int i = 0; i < 386; i++) {
                  if (array4[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 386; i++) {
                  array4[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop16 = 0;
      int loopLimit16 = ceil((rand()%10)/3);
      for(; loop16 < loopLimit16; loop16++) {
         int loop17 = 0;
         int loopLimit17 = ceil((rand()%10)/4);
         for(; loop17 < loopLimit17; loop17++) {
            if(PATH0 & 8) {
               func8(rng());
            }
            else {
               if(PATH0 & 16) {
                  func9(rng());
               }
               else {
                  int* array5 = new int[315];
                  for (int i = 0; i < 386; i++) {
                     if (array4[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 315; i++) {
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

void func8(const unsigned long PATH0) {
   int* array5 = new int[421];
   for (int i = 0; i < 421; i++) {
      array5[i]++; 
   }
   for (int i = 0; i < 421; i++) {
      array5[i]++; 
   }
   if(PATH0 & 1) {
      int loop3 = 0;
      int loopLimit3 = ceil((rand()%10)/4);
      for(; loop3 < loopLimit3; loop3++) {
         if(PATH0 & 2) {
            func11(rng());
         }
         else {
            if(PATH0 & 4) {
               func12(rng());
            }
            else {
               int* array6 = new int[123];
               for (int i = 0; i < 123; i++) {
                  if (array6[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 123; i++) {
                  array6[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop10 = 0;
      int loopLimit10 = ceil((rand()%10)/4);
      for(; loop10 < loopLimit10; loop10++) {
         int loop11 = 0;
         int loopLimit11 = ceil((rand()%10)/5);
         for(; loop11 < loopLimit11; loop11++) {
            if(PATH0 & 8) {
               func11(rng());
            }
            else {
               if(PATH0 & 16) {
                  func12(rng());
               }
               else {
                  int* array6 = new int[929];
                  for (int i = 0; i < 421; i++) {
                     if (array5[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 421; i++) {
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

void func11(const unsigned long PATH0) {
   int* array6 = new int[690];
   for (int i = 0; i < 690; i++) {
      array6[i]++; 
   }
   for (int i = 0; i < 690; i++) {
      array6[i]++; 
   }
   if(PATH0 & 1) {
      int loop4 = 0;
      int loopLimit4 = ceil((rand()%10)/5);
      for(; loop4 < loopLimit4; loop4++) {
         if(PATH0 & 2) {
            func14();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               int* array7 = new int[172];
               for (int i = 0; i < 690; i++) {
                  if (array6[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 172; i++) {
                  array7[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop5 = 0;
      int loopLimit5 = ceil((rand()%10)/5);
      for(; loop5 < loopLimit5; loop5++) {
         int loop6 = 0;
         int loopLimit6 = ceil((rand()%10)/6);
         for(; loop6 < loopLimit6; loop6++) {
            if(PATH0 & 8) {
               func14();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  int* array7 = new int[368];
                  for (int i = 0; i < 368; i++) {
                     if (array7[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 368; i++) {
                     array7[i]--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func14() {
   int* array7 = new int[926];
   for (int i = 0; i < 926; i++) {
      array7[i]++; 
   }
   for (int i = 0; i < 926; i++) {
      array7[i]++; 
   }
   printf("DELETE!\n");
}

void func12(const unsigned long PATH0) {
   int* array6 = new int[782];
   for (int i = 0; i < 782; i++) {
      array6[i]++; 
   }
   for (int i = 0; i < 782; i++) {
      array6[i]++; 
   }
   if(PATH0 & 1) {
      int loop7 = 0;
      int loopLimit7 = ceil((rand()%10)/5);
      for(; loop7 < loopLimit7; loop7++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
   }
   else {
      int loop8 = 0;
      int loopLimit8 = ceil((rand()%10)/5);
      for(; loop8 < loopLimit8; loop8++) {
         int loop9 = 0;
         int loopLimit9 = ceil((rand()%10)/6);
         for(; loop9 < loopLimit9; loop9++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func9(const unsigned long PATH0) {
   int* array5 = new int[58];
   for (int i = 0; i < 58; i++) {
      array5[i]++; 
   }
   for (int i = 0; i < 58; i++) {
      array5[i]++; 
   }
   if(PATH0 & 1) {
      int loop12 = 0;
      int loopLimit12 = ceil((rand()%10)/4);
      for(; loop12 < loopLimit12; loop12++) {
         if(PATH0 & 2) {
            func12(rng());
         }
         else {
            if(PATH0 & 4) {
               func13(rng());
            }
            else {
               int* array6 = new int[42];
               for (int i = 0; i < 42; i++) {
                  if (array6[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 42; i++) {
                  array6[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop14 = 0;
      int loopLimit14 = ceil((rand()%10)/4);
      for(; loop14 < loopLimit14; loop14++) {
         int loop15 = 0;
         int loopLimit15 = ceil((rand()%10)/5);
         for(; loop15 < loopLimit15; loop15++) {
            if(PATH0 & 8) {
               func12(rng());
            }
            else {
               if(PATH0 & 16) {
                  func13(rng());
               }
               else {
                  int* array6 = new int[421];
                  for (int i = 0; i < 421; i++) {
                     if (array6[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 58; i++) {
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

void func13(const unsigned long PATH0) {
   int* array6 = new int[393];
   for (int i = 0; i < 393; i++) {
      array6[i]++; 
   }
   for (int i = 0; i < 393; i++) {
      array6[i]++; 
   }
   if(PATH0 & 1) {
   }
   else {
      int loop13 = 0;
      int loopLimit13 = ceil((rand()%10)/5);
      for(; loop13 < loopLimit13; loop13++) {
      }
   }
   printf("DELETE!\n");
}

void func6(const unsigned long PATH0) {
   int* array4 = new int[526];
   for (int i = 0; i < 526; i++) {
      array4[i]++; 
   }
   for (int i = 0; i < 526; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
      int loop18 = 0;
      int loopLimit18 = ceil((rand()%10)/3);
      for(; loop18 < loopLimit18; loop18++) {
         if(PATH0 & 2) {
            func9(rng());
         }
         else {
            if(PATH0 & 4) {
               func10(rng());
            }
            else {
               int* array5 = new int[327];
               for (int i = 0; i < 526; i++) {
                  if (array4[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 327; i++) {
                  array5[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop22 = 0;
      int loopLimit22 = ceil((rand()%10)/3);
      for(; loop22 < loopLimit22; loop22++) {
         int loop23 = 0;
         int loopLimit23 = ceil((rand()%10)/4);
         for(; loop23 < loopLimit23; loop23++) {
            if(PATH0 & 8) {
               func9(rng());
            }
            else {
               if(PATH0 & 16) {
                  func10(rng());
               }
               else {
                  int* array5 = new int[846];
                  for (int i = 0; i < 846; i++) {
                     if (array5[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 846; i++) {
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

void func10(const unsigned long PATH0) {
   int* array5 = new int[956];
   for (int i = 0; i < 956; i++) {
      array5[i]++; 
   }
   for (int i = 0; i < 956; i++) {
      array5[i]++; 
   }
   if(PATH0 & 1) {
      int loop19 = 0;
      int loopLimit19 = ceil((rand()%10)/4);
      for(; loop19 < loopLimit19; loop19++) {
         if(PATH0 & 2) {
            func13(rng());
         }
         else {
            if(PATH0 & 4) {
               func14();
            }
            else {
               int* array6 = new int[170];
               for (int i = 0; i < 956; i++) {
                  if (array5[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 170; i++) {
                  array6[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop20 = 0;
      int loopLimit20 = ceil((rand()%10)/4);
      for(; loop20 < loopLimit20; loop20++) {
         int loop21 = 0;
         int loopLimit21 = ceil((rand()%10)/5);
         for(; loop21 < loopLimit21; loop21++) {
            if(PATH0 & 8) {
               func13(rng());
            }
            else {
               if(PATH0 & 16) {
                  func14();
               }
               else {
                  int* array6 = new int[305];
                  for (int i = 0; i < 305; i++) {
                     if (array6[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 956; i++) {
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

void func3(const unsigned long PATH0) {
   int* array3 = new int[367];
   for (int i = 0; i < 367; i++) {
      array3[i]++; 
   }
   for (int i = 0; i < 367; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      int loop26 = 0;
      int loopLimit26 = ceil((rand()%10)/2);
      for(; loop26 < loopLimit26; loop26++) {
         if(PATH0 & 2) {
            func6(rng());
         }
         else {
            if(PATH0 & 4) {
               func7(rng());
            }
            else {
               int* array4 = new int[651];
               for (int i = 0; i < 367; i++) {
                  if (array3[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 651; i++) {
                  array4[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop30 = 0;
      int loopLimit30 = ceil((rand()%10)/2);
      for(; loop30 < loopLimit30; loop30++) {
         int loop31 = 0;
         int loopLimit31 = ceil((rand()%10)/3);
         for(; loop31 < loopLimit31; loop31++) {
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               if(PATH0 & 16) {
                  func7(rng());
               }
               else {
                  int* array4 = new int[932];
                  for (int i = 0; i < 367; i++) {
                     if (array3[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 367; i++) {
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
   int* array4 = new int[43];
   for (int i = 0; i < 43; i++) {
      array4[i]++; 
   }
   for (int i = 0; i < 43; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
      int loop27 = 0;
      int loopLimit27 = ceil((rand()%10)/3);
      for(; loop27 < loopLimit27; loop27++) {
         if(PATH0 & 2) {
            func10(rng());
         }
         else {
            if(PATH0 & 4) {
               func11(rng());
            }
            else {
               int* array5 = new int[808];
               for (int i = 0; i < 43; i++) {
                  if (array4[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 43; i++) {
                  array4[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop28 = 0;
      int loopLimit28 = ceil((rand()%10)/3);
      for(; loop28 < loopLimit28; loop28++) {
         int loop29 = 0;
         int loopLimit29 = ceil((rand()%10)/4);
         for(; loop29 < loopLimit29; loop29++) {
            if(PATH0 & 8) {
               func10(rng());
            }
            else {
               if(PATH0 & 16) {
                  func11(rng());
               }
               else {
                  int* array5 = new int[788];
                  for (int i = 0; i < 43; i++) {
                     if (array4[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 788; i++) {
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

void func1(const unsigned long PATH0) {
   int* array3 = new int[539];
   for (int i = 0; i < 539; i++) {
      array3[i]++; 
   }
   for (int i = 0; i < 539; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      int loop35 = 0;
      int loopLimit35 = ceil((rand()%10)/2);
      for(; loop35 < loopLimit35; loop35++) {
         if(PATH0 & 2) {
            func4(rng());
         }
         else {
            if(PATH0 & 4) {
               func5(rng());
            }
            else {
               int* array4 = new int[756];
               for (int i = 0; i < 756; i++) {
                  if (array4[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 539; i++) {
                  array3[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop39 = 0;
      int loopLimit39 = ceil((rand()%10)/2);
      for(; loop39 < loopLimit39; loop39++) {
         int loop40 = 0;
         int loopLimit40 = ceil((rand()%10)/3);
         for(; loop40 < loopLimit40; loop40++) {
            if(PATH0 & 8) {
               func4(rng());
            }
            else {
               if(PATH0 & 16) {
                  func5(rng());
               }
               else {
                  int* array4 = new int[286];
                  for (int i = 0; i < 286; i++) {
                     if (array4[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 286; i++) {
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

void func4(const unsigned long PATH0) {
   int* array4 = new int[434];
   for (int i = 0; i < 434; i++) {
      array4[i]++; 
   }
   for (int i = 0; i < 434; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
      int loop36 = 0;
      int loopLimit36 = ceil((rand()%10)/3);
      for(; loop36 < loopLimit36; loop36++) {
         if(PATH0 & 2) {
            func7(rng());
         }
         else {
            if(PATH0 & 4) {
               func8(rng());
            }
            else {
               int* array5 = new int[601];
               for (int i = 0; i < 601; i++) {
                  if (array5[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 434; i++) {
                  array4[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop37 = 0;
      int loopLimit37 = ceil((rand()%10)/3);
      for(; loop37 < loopLimit37; loop37++) {
         int loop38 = 0;
         int loopLimit38 = ceil((rand()%10)/4);
         for(; loop38 < loopLimit38; loop38++) {
            if(PATH0 & 8) {
               func7(rng());
            }
            else {
               if(PATH0 & 16) {
                  func8(rng());
               }
               else {
                  int* array5 = new int[317];
                  for (int i = 0; i < 434; i++) {
                     if (array4[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 434; i++) {
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

void func0(const unsigned long PATH0) {
   int* array3 = new int[117];
   for (int i = 0; i < 117; i++) {
      array3[i]++; 
   }
   for (int i = 0; i < 117; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      int loop41 = 0;
      int loopLimit41 = ceil((rand()%10)/1);
      for(; loop41 < loopLimit41; loop41++) {
         if(PATH0 & 2) {
            func3(rng());
         }
         else {
            if(PATH0 & 4) {
               func4(rng());
            }
            else {
               int* array4 = new int[481];
               for (int i = 0; i < 481; i++) {
                  if (array4[i] == 0) { 
                     printf("IS 0!");
                  }
               }
               for (int i = 0; i < 481; i++) {
                  array4[i]--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop42 = 0;
      int loopLimit42 = ceil((rand()%10)/1);
      for(; loop42 < loopLimit42; loop42++) {
         int loop43 = 0;
         int loopLimit43 = ceil((rand()%10)/2);
         for(; loop43 < loopLimit43; loop43++) {
            if(PATH0 & 8) {
               func3(rng());
            }
            else {
               if(PATH0 & 16) {
                  func4(rng());
               }
               else {
                  int* array4 = new int[927];
                  for (int i = 0; i < 927; i++) {
                     if (array4[i] == 0) { 
                        printf("IS 0!");
                     }
                  }
                  for (int i = 0; i < 117; i++) {
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

