#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func7(const unsigned long PATH0);
void func19(const unsigned long PATH0);
void func31(const unsigned long PATH0);
void func43();
void func44();
void func45();
void func46();
void func37();
void func32();
void func38(const unsigned long PATH0);
void func47();
void func39();
void func40();
void func41(const unsigned long PATH0);
void func48();
void func33(const unsigned long PATH0);
void func34(const unsigned long PATH0);
void func42();
void func25(const unsigned long PATH0);
void func20();
void func26(const unsigned long PATH0);
void func35(const unsigned long PATH0);
void func27();
void func28(const unsigned long PATH0);
void func29(const unsigned long PATH0);
void func36();
void func21(const unsigned long PATH0);
void func22(const unsigned long PATH0);
void func30();
void func13(const unsigned long PATH0);
void func8();
void func14(const unsigned long PATH0);
void func23(const unsigned long PATH0);
void func15();
void func16(const unsigned long PATH0);
void func17(const unsigned long PATH0);
void func24();
void func9(const unsigned long PATH0);
void func10(const unsigned long PATH0);
void func18();
void func1(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func3();
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func12();
void func6();

int main() {
   for(int loop0 = 0; loop0 < 3; loop0++) {
      if(rng() & 1) {
         func7(rng());
         func8();
         func9(rng());
         func10(rng());
      }
      else {
         func1(rng());
      }
   }
   for(int loop44 = 0; loop44 < 3; loop44++) {
      int* array0 = new int[305];
      for (int i = 0; i < 305; i++) {
         array0[i]++; 
      }
      func0(rng());
      int* array1 = new int[504];
      for(int loop67 = 0; loop67 < 3; loop67++) {
         for(int loop68 = 0; loop68 < 3; loop68++) {
            if(rng() & 1) {
               func7(rng());
               func8();
               func9(rng());
               func10(rng());
            }
            else {
               func1(rng());
            }
         }
         func2(rng());
         func3();
         func4(rng());
         func5(rng());
      }
      for (int i = 0; i < 504; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 504; i++) {
         array1[i]--; 
      }
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

void func7(const unsigned long PATH0) {
   for(int loop1 = 0; loop1 < 3; loop1++) {
      if(PATH0 & 1) {
         func19(rng());
         func20();
         func21(rng());
         func22(rng());
      }
      else {
         func13(rng());
      }
   }
}

void func19(const unsigned long PATH0) {
   for(int loop2 = 0; loop2 < 3; loop2++) {
      if(PATH0 & 1) {
         func31(rng());
         func32();
         func33(rng());
         func34(rng());
      }
      else {
         func25(rng());
      }
   }
}

void func31(const unsigned long PATH0) {
   for(int loop3 = 0; loop3 < 3; loop3++) {
      if(PATH0 & 1) {
         func43();
         func44();
         func45();
         func46();
      }
      else {
         func37();
      }
   }
}

void func43() {
}

void func44() {
   for(int loop4 = 0; loop4 < 3; loop4++) {
      int* array0 = new int[383];
      for (int i = 0; i < 383; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
   }
}

void func45() {
}

void func46() {
}

void func37() {
   int* array0 = new int[777];
   int* array1 = new int[915];
   for (int i = 0; i < 915; i++) {
      array1[i]++; 
   }
   int* array2 = new int[335];
   for (int i = 0; i < 915; i++) {
      array1[i]--; 
   }
   int* array3 = new int[492];
   for (int i = 0; i < 915; i++) {
      array1[i]++; 
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func32() {
   for(int loop5 = 0; loop5 < 3; loop5++) {
      int* array0 = new int[421];
      for (int i = 0; i < 421; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      func38(rng());
      func39();
      func40();
      func41(rng());
      printf("DELETE!\n");
   }
}

void func38(const unsigned long PATH0) {
   for(int loop6 = 0; loop6 < 3; loop6++) {
      if(PATH0 & 1) {
      }
      else {
         func47();
      }
   }
}

void func47() {
   int* array1 = new int[27];
   printf("DELETE!\n");
}

void func39() {
   for(int loop7 = 0; loop7 < 3; loop7++) {
      int* array1 = new int[690];
      for (int i = 0; i < 690; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      func43();
      func44();
      func45();
      func46();
      printf("DELETE!\n");
   }
}

void func40() {
   int* array1 = new int[763];
   for (int i = 0; i < 763; i++) {
      array1[i]++; 
   }
   int* array2 = new int[540];
   for (int i = 0; i < 763; i++) {
      array1[i]--; 
   }
   int* array3 = new int[172];
   for (int i = 0; i < 540; i++) {
      array2[i]++; 
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func41(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func45();
   }
   else {
      int* array1 = new int[211];
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int loop8 = 0; loop8 < 3; loop8++) {
         }
      }
   }
}

void func48() {
}

void func33(const unsigned long PATH0) {
   int* array0 = new int[368];
   for (int i = 0; i < 368; i++) {
      array0[i]++; 
   }
   int* array1 = new int[429];
   for (int i = 0; i < 368; i++) {
      array0[i]--; 
   }
   int* array2 = new int[530];
   for (int i = 0; i < 530; i++) {
      array2[i]++; 
   }
   if(PATH0 & 1) {
      func45();
   }
   else {
      int* array3 = new int[123];
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int loop9 = 0; loop9 < 3; loop9++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func34(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func40();
   }
   else {
      int* array0 = new int[67];
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int loop10 = 0; loop10 < 3; loop10++) {
            int* array1 = new int[135];
            for (int i = 0; i < 135; i++) {
               array1[i]++; 
            }
            int* array2 = new int[802];
            for (int i = 0; i < 67; i++) {
               array0[i]--; 
            }
            int* array3 = new int[58];
            for (int i = 0; i < 135; i++) {
               array1[i]++; 
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func42() {
   func43();
   func44();
   func45();
   func46();
}

void func25(const unsigned long PATH0) {
   int* array0 = new int[167];
   int* array1 = new int[393];
   for (int i = 0; i < 167; i++) {
      array0[i]++; 
   }
   int* array2 = new int[11];
   for (int i = 0; i < 393; i++) {
      array1[i]--; 
   }
   int* array3 = new int[229];
   for (int i = 0; i < 393; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      func40();
   }
   else {
      int* array4 = new int[421];
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int loop11 = 0; loop11 < 3; loop11++) {
            int* array5 = new int[919];
            for (int i = 0; i < 11; i++) {
               array2[i]++; 
            }
            int* array6 = new int[537];
            for (int i = 0; i < 537; i++) {
               array6[i]--; 
            }
            int* array7 = new int[324];
            for (int i = 0; i < 229; i++) {
               array3[i]++; 
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func20() {
   for(int loop12 = 0; loop12 < 3; loop12++) {
      int* array0 = new int[370];
      for (int i = 0; i < 370; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      func26(rng());
      func27();
      func28(rng());
      func29(rng());
      printf("DELETE!\n");
   }
}

void func26(const unsigned long PATH0) {
   for(int loop13 = 0; loop13 < 3; loop13++) {
      if(PATH0 & 1) {
         func38(rng());
         func39();
         func40();
         func41(rng());
      }
      else {
         func35(rng());
      }
   }
}

void func35(const unsigned long PATH0) {
   int* array1 = new int[526];
   int* array2 = new int[91];
   for (int i = 0; i < 526; i++) {
      array1[i]++; 
   }
   int* array3 = new int[956];
   for (int i = 0; i < 526; i++) {
      array1[i]--; 
   }
   int* array4 = new int[862];
   for (int i = 0; i < 956; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      func45();
   }
   else {
      int* array5 = new int[996];
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int loop14 = 0; loop14 < 3; loop14++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func27() {
   for(int loop15 = 0; loop15 < 3; loop15++) {
      int* array1 = new int[281];
      for (int i = 0; i < 281; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      func31(rng());
      func32();
      func33(rng());
      func34(rng());
      printf("DELETE!\n");
   }
}

void func28(const unsigned long PATH0) {
   int* array1 = new int[925];
   for (int i = 0; i < 925; i++) {
      array1[i]++; 
   }
   int* array2 = new int[327];
   for (int i = 0; i < 925; i++) {
      array1[i]--; 
   }
   int* array3 = new int[505];
   for (int i = 0; i < 327; i++) {
      array2[i]++; 
   }
   if(PATH0 & 1) {
      func40();
   }
   else {
      int* array4 = new int[729];
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int loop16 = 0; loop16 < 3; loop16++) {
            int* array5 = new int[313];
            for (int i = 0; i < 505; i++) {
               array3[i]++; 
            }
            int* array6 = new int[124];
            for (int i = 0; i < 729; i++) {
               array4[i]--; 
            }
            int* array7 = new int[582];
            for (int i = 0; i < 729; i++) {
               array4[i]++; 
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func29(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func33(rng());
   }
   else {
      int* array1 = new int[814];
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int loop17 = 0; loop17 < 3; loop17++) {
            int* array2 = new int[367];
            for (int i = 0; i < 814; i++) {
               array1[i]++; 
            }
            int* array3 = new int[364];
            for (int i = 0; i < 814; i++) {
               array1[i]--; 
            }
            int* array4 = new int[750];
            for (int i = 0; i < 750; i++) {
               array4[i]++; 
            }
            if(PATH0 & 4) {
               func45();
            }
            else {
               int* array5 = new int[808];
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int loop18 = 0; loop18 < 3; loop18++) {
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func36() {
   func38(rng());
   func39();
   func40();
   func41(rng());
}

void func21(const unsigned long PATH0) {
   int* array0 = new int[276];
   for (int i = 0; i < 276; i++) {
      array0[i]++; 
   }
   int* array1 = new int[788];
   for (int i = 0; i < 276; i++) {
      array0[i]--; 
   }
   int* array2 = new int[403];
   for (int i = 0; i < 403; i++) {
      array2[i]++; 
   }
   if(PATH0 & 1) {
      func33(rng());
   }
   else {
      int* array3 = new int[754];
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int loop19 = 0; loop19 < 3; loop19++) {
            int* array4 = new int[399];
            for (int i = 0; i < 403; i++) {
               array2[i]++; 
            }
            int* array5 = new int[60];
            for (int i = 0; i < 403; i++) {
               array2[i]--; 
            }
            int* array6 = new int[368];
            for (int i = 0; i < 276; i++) {
               array0[i]++; 
            }
            if(PATH0 & 4) {
               func45();
            }
            else {
               int* array7 = new int[12];
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int loop20 = 0; loop20 < 3; loop20++) {
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func22(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func28(rng());
   }
   else {
      int* array0 = new int[226];
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int loop21 = 0; loop21 < 3; loop21++) {
            int* array1 = new int[586];
            for (int i = 0; i < 226; i++) {
               array0[i]++; 
            }
            int* array2 = new int[539];
            for (int i = 0; i < 226; i++) {
               array0[i]--; 
            }
            int* array3 = new int[570];
            for (int i = 0; i < 539; i++) {
               array2[i]++; 
            }
            if(PATH0 & 4) {
               func40();
            }
            else {
               int* array4 = new int[378];
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int loop22 = 0; loop22 < 3; loop22++) {
                     int* array5 = new int[467];
                     for (int i = 0; i < 570; i++) {
                        array3[i]++; 
                     }
                     int* array6 = new int[97];
                     for (int i = 0; i < 97; i++) {
                        array6[i]--; 
                     }
                     int* array7 = new int[317];
                     for (int i = 0; i < 378; i++) {
                        array4[i]++; 
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func30() {
   func31(rng());
   func32();
   func33(rng());
   func34(rng());
}

void func13(const unsigned long PATH0) {
   int* array0 = new int[652];
   int* array1 = new int[756];
   for (int i = 0; i < 756; i++) {
      array1[i]++; 
   }
   int* array2 = new int[280];
   for (int i = 0; i < 280; i++) {
      array2[i]--; 
   }
   int* array3 = new int[441];
   for (int i = 0; i < 756; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      func28(rng());
   }
   else {
      int* array4 = new int[689];
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int loop23 = 0; loop23 < 3; loop23++) {
            int* array5 = new int[444];
            for (int i = 0; i < 444; i++) {
               array5[i]++; 
            }
            int* array6 = new int[440];
            for (int i = 0; i < 441; i++) {
               array3[i]--; 
            }
            int* array7 = new int[31];
            for (int i = 0; i < 444; i++) {
               array5[i]++; 
            }
            if(PATH0 & 4) {
               func40();
            }
            else {
               int* array8 = new int[97];
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int loop24 = 0; loop24 < 3; loop24++) {
                     int* array9 = new int[771];
                     for (int i = 0; i < 756; i++) {
                        array1[i]++; 
                     }
                     int* array10 = new int[675];
                     for (int i = 0; i < 675; i++) {
                        array10[i]--; 
                     }
                     int* array11 = new int[927];
                     for (int i = 0; i < 441; i++) {
                        array3[i]++; 
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func8() {
   for(int loop25 = 0; loop25 < 3; loop25++) {
      int* array0 = new int[856];
      for (int i = 0; i < 856; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      func14(rng());
      func15();
      func16(rng());
      func17(rng());
      printf("DELETE!\n");
   }
}

void func14(const unsigned long PATH0) {
   for(int loop26 = 0; loop26 < 3; loop26++) {
      if(PATH0 & 1) {
         func26(rng());
         func27();
         func28(rng());
         func29(rng());
      }
      else {
         func23(rng());
      }
   }
}

void func23(const unsigned long PATH0) {
   int* array1 = new int[353];
   int* array2 = new int[586];
   for (int i = 0; i < 586; i++) {
      array2[i]++; 
   }
   int* array3 = new int[306];
   for (int i = 0; i < 306; i++) {
      array3[i]--; 
   }
   int* array4 = new int[219];
   for (int i = 0; i < 353; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      func33(rng());
   }
   else {
      int* array5 = new int[528];
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int loop27 = 0; loop27 < 3; loop27++) {
            int* array6 = new int[871];
            for (int i = 0; i < 306; i++) {
               array3[i]++; 
            }
            int* array7 = new int[829];
            for (int i = 0; i < 219; i++) {
               array4[i]--; 
            }
            int* array8 = new int[19];
            for (int i = 0; i < 829; i++) {
               array7[i]++; 
            }
            if(PATH0 & 4) {
               func45();
            }
            else {
               int* array9 = new int[368];
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int loop28 = 0; loop28 < 3; loop28++) {
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func15() {
   for(int loop29 = 0; loop29 < 3; loop29++) {
      int* array1 = new int[708];
      for (int i = 0; i < 708; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      func19(rng());
      func20();
      func21(rng());
      func22(rng());
      printf("DELETE!\n");
   }
}

void func16(const unsigned long PATH0) {
   int* array1 = new int[340];
   for (int i = 0; i < 340; i++) {
      array1[i]++; 
   }
   int* array2 = new int[796];
   for (int i = 0; i < 796; i++) {
      array2[i]--; 
   }
   int* array3 = new int[618];
   for (int i = 0; i < 796; i++) {
      array2[i]++; 
   }
   if(PATH0 & 1) {
      func28(rng());
   }
   else {
      int* array4 = new int[846];
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int loop30 = 0; loop30 < 3; loop30++) {
            int* array5 = new int[451];
            for (int i = 0; i < 796; i++) {
               array2[i]++; 
            }
            int* array6 = new int[555];
            for (int i = 0; i < 555; i++) {
               array6[i]--; 
            }
            int* array7 = new int[488];
            for (int i = 0; i < 618; i++) {
               array3[i]++; 
            }
            if(PATH0 & 4) {
               func40();
            }
            else {
               int* array8 = new int[228];
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int loop31 = 0; loop31 < 3; loop31++) {
                     int* array9 = new int[841];
                     for (int i = 0; i < 555; i++) {
                        array6[i]++; 
                     }
                     int* array10 = new int[193];
                     for (int i = 0; i < 340; i++) {
                        array1[i]--; 
                     }
                     int* array11 = new int[34];
                     for (int i = 0; i < 796; i++) {
                        array2[i]++; 
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func17(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      int* array1 = new int[124];
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int loop32 = 0; loop32 < 3; loop32++) {
            int* array2 = new int[914];
            for (int i = 0; i < 914; i++) {
               array2[i]++; 
            }
            int* array3 = new int[856];
            for (int i = 0; i < 124; i++) {
               array1[i]--; 
            }
            int* array4 = new int[491];
            for (int i = 0; i < 491; i++) {
               array4[i]++; 
            }
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               int* array5 = new int[365];
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int loop33 = 0; loop33 < 3; loop33++) {
                     int* array6 = new int[859];
                     for (int i = 0; i < 365; i++) {
                        array5[i]++; 
                     }
                     int* array7 = new int[432];
                     for (int i = 0; i < 365; i++) {
                        array5[i]--; 
                     }
                     int* array8 = new int[437];
                     for (int i = 0; i < 365; i++) {
                        array5[i]++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        int* array9 = new int[275];
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int loop34 = 0; loop34 < 3; loop34++) {
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func24() {
   func26(rng());
   func27();
   func28(rng());
   func29(rng());
}

void func9(const unsigned long PATH0) {
   int* array0 = new int[407];
   for (int i = 0; i < 407; i++) {
      array0[i]++; 
   }
   int* array1 = new int[121];
   for (int i = 0; i < 407; i++) {
      array0[i]--; 
   }
   int* array2 = new int[395];
   for (int i = 0; i < 395; i++) {
      array2[i]++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      int* array3 = new int[237];
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int loop35 = 0; loop35 < 3; loop35++) {
            int* array4 = new int[235];
            for (int i = 0; i < 237; i++) {
               array3[i]++; 
            }
            int* array5 = new int[818];
            for (int i = 0; i < 395; i++) {
               array2[i]--; 
            }
            int* array6 = new int[143];
            for (int i = 0; i < 237; i++) {
               array3[i]++; 
            }
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               int* array7 = new int[928];
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int loop36 = 0; loop36 < 3; loop36++) {
                     int* array8 = new int[529];
                     for (int i = 0; i < 395; i++) {
                        array2[i]++; 
                     }
                     int* array9 = new int[404];
                     for (int i = 0; i < 237; i++) {
                        array3[i]--; 
                     }
                     int* array10 = new int[763];
                     for (int i = 0; i < 143; i++) {
                        array6[i]++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        int* array11 = new int[538];
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int loop37 = 0; loop37 < 3; loop37++) {
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func10(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      int* array0 = new int[606];
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int loop38 = 0; loop38 < 3; loop38++) {
            int* array1 = new int[840];
            for (int i = 0; i < 606; i++) {
               array0[i]++; 
            }
            int* array2 = new int[818];
            for (int i = 0; i < 606; i++) {
               array0[i]--; 
            }
            int* array3 = new int[688];
            for (int i = 0; i < 840; i++) {
               array1[i]++; 
            }
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               int* array4 = new int[917];
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int loop39 = 0; loop39 < 3; loop39++) {
                     int* array5 = new int[917];
                     for (int i = 0; i < 606; i++) {
                        array0[i]++; 
                     }
                     int* array6 = new int[324];
                     for (int i = 0; i < 606; i++) {
                        array0[i]--; 
                     }
                     int* array7 = new int[470];
                     for (int i = 0; i < 470; i++) {
                        array7[i]++; 
                     }
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        int* array8 = new int[490];
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int loop40 = 0; loop40 < 3; loop40++) {
                              int* array9 = new int[499];
                              for (int i = 0; i < 818; i++) {
                                 array2[i]++; 
                              }
                              int* array10 = new int[725];
                              for (int i = 0; i < 818; i++) {
                                 array2[i]--; 
                              }
                              int* array11 = new int[590];
                              for (int i = 0; i < 917; i++) {
                                 array5[i]++; 
                              }
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func18() {
   func19(rng());
   func20();
   func21(rng());
   func22(rng());
}

void func1(const unsigned long PATH0) {
   int* array0 = new int[139];
   int* array1 = new int[954];
   for (int i = 0; i < 139; i++) {
      array0[i]++; 
   }
   int* array2 = new int[669];
   for (int i = 0; i < 669; i++) {
      array2[i]--; 
   }
   int* array3 = new int[542];
   for (int i = 0; i < 139; i++) {
      array0[i]++; 
   }
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      int* array4 = new int[197];
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int loop41 = 0; loop41 < 3; loop41++) {
            int* array5 = new int[507];
            for (int i = 0; i < 542; i++) {
               array3[i]++; 
            }
            int* array6 = new int[804];
            for (int i = 0; i < 197; i++) {
               array4[i]--; 
            }
            int* array7 = new int[611];
            for (int i = 0; i < 804; i++) {
               array6[i]++; 
            }
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               int* array8 = new int[828];
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int loop42 = 0; loop42 < 3; loop42++) {
                     int* array9 = new int[299];
                     for (int i = 0; i < 542; i++) {
                        array3[i]++; 
                     }
                     int* array10 = new int[746];
                     for (int i = 0; i < 954; i++) {
                        array1[i]--; 
                     }
                     int* array11 = new int[340];
                     for (int i = 0; i < 746; i++) {
                        array10[i]++; 
                     }
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        int* array12 = new int[311];
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int loop43 = 0; loop43 < 3; loop43++) {
                              int* array13 = new int[810];
                              for (int i = 0; i < 611; i++) {
                                 array7[i]++; 
                              }
                              int* array14 = new int[801];
                              for (int i = 0; i < 954; i++) {
                                 array1[i]--; 
                              }
                              int* array15 = new int[730];
                              for (int i = 0; i < 801; i++) {
                                 array14[i]++; 
                              }
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func0(const unsigned long PATH0) {
   func2(rng());
   func3();
   func4(rng());
   func5(rng());
   if(PATH0 & 1) {
      if(PATH0 & 2) {
         func4(rng());
      }
      else {
         int* array1 = new int[939];
         if(PATH0 & 4) {
            func6();
         }
         else {
            for(int loop57 = 0; loop57 < 3; loop57++) {
               int* array2 = new int[811];
               for (int i = 0; i < 939; i++) {
                  array1[i]++; 
               }
               int* array3 = new int[667];
               for (int i = 0; i < 667; i++) {
                  array3[i]--; 
               }
               int* array4 = new int[228];
               for (int i = 0; i < 228; i++) {
                  array4[i]++; 
               }
               if(PATH0 & 8) {
                  func16(rng());
               }
               else {
                  int* array5 = new int[150];
                  if(PATH0 & 16) {
                     func18();
                  }
                  else {
                     for(int loop58 = 0; loop58 < 3; loop58++) {
                        int* array6 = new int[984];
                        for (int i = 0; i < 150; i++) {
                           array5[i]++; 
                        }
                        int* array7 = new int[920];
                        for (int i = 0; i < 228; i++) {
                           array4[i]--; 
                        }
                        int* array8 = new int[422];
                        for (int i = 0; i < 984; i++) {
                           array6[i]++; 
                        }
                        if(PATH0 & 32) {
                           func28(rng());
                        }
                        else {
                           int* array9 = new int[396];
                           if(PATH0 & 64) {
                              func30();
                           }
                           else {
                              for(int loop59 = 0; loop59 < 3; loop59++) {
                                 int* array10 = new int[81];
                                 for (int i = 0; i < 939; i++) {
                                    array1[i]++; 
                                 }
                                 int* array11 = new int[84];
                                 for (int i = 0; i < 667; i++) {
                                    array3[i]--; 
                                 }
                                 int* array12 = new int[972];
                                 for (int i = 0; i < 396; i++) {
                                    array9[i]++; 
                                 }
                                 if(PATH0 & 128) {
                                    func40();
                                 }
                                 else {
                                    int* array13 = new int[850];
                                    if(PATH0 & 256) {
                                       func42();
                                    }
                                    else {
                                       for(int loop60 = 0; loop60 < 3; loop60++) {
                                          int* array14 = new int[625];
                                          for (int i = 0; i < 81; i++) {
                                             array10[i]++; 
                                          }
                                          int* array15 = new int[222];
                                          for (int i = 0; i < 150; i++) {
                                             array5[i]--; 
                                          }
                                          int* array16 = new int[640];
                                          for (int i = 0; i < 84; i++) {
                                             array11[i]++; 
                                          }
                                          printf("DELETE!\n");
                                          printf("DELETE!\n");
                                          printf("DELETE!\n");
                                       }
                                    }
                                 }
                                 printf("DELETE!\n");
                                 printf("DELETE!\n");
                                 printf("DELETE!\n");
                              }
                           }
                        }
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                     }
                  }
               }
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop61 = 0; loop61 < 3; loop61++) {
         for(int loop62 = 0; loop62 < 3; loop62++) {
            if(PATH0 & 512) {
               func7(rng());
               func8();
               func9(rng());
               func10(rng());
            }
            else {
               func1(rng());
            }
         }
         int* array1 = new int[898];
         for (int i = 0; i < 898; i++) {
            array1[i]++; 
         }
         int* array2 = new int[298];
         for (int i = 0; i < 898; i++) {
            array1[i]--; 
         }
         int* array3 = new int[524];
         for (int i = 0; i < 524; i++) {
            array3[i]++; 
         }
         if(PATH0 & 1024) {
            func9(rng());
         }
         else {
            int* array4 = new int[209];
            if(PATH0 & 2048) {
               func12();
            }
            else {
               for(int loop63 = 0; loop63 < 3; loop63++) {
                  int* array5 = new int[581];
                  for (int i = 0; i < 581; i++) {
                     array5[i]++; 
                  }
                  int* array6 = new int[336];
                  for (int i = 0; i < 898; i++) {
                     array1[i]--; 
                  }
                  int* array7 = new int[155];
                  for (int i = 0; i < 581; i++) {
                     array5[i]++; 
                  }
                  if(PATH0 & 4096) {
                     func21(rng());
                  }
                  else {
                     int* array8 = new int[4];
                     if(PATH0 & 8192) {
                        func24();
                     }
                     else {
                        for(int loop64 = 0; loop64 < 3; loop64++) {
                           int* array9 = new int[379];
                           for (int i = 0; i < 379; i++) {
                              array9[i]++; 
                           }
                           int* array10 = new int[273];
                           for (int i = 0; i < 155; i++) {
                              array7[i]--; 
                           }
                           int* array11 = new int[850];
                           for (int i = 0; i < 298; i++) {
                              array2[i]++; 
                           }
                           if(PATH0 & 16384) {
                              func33(rng());
                           }
                           else {
                              int* array12 = new int[860];
                              if(PATH0 & 32768) {
                                 func36();
                              }
                              else {
                                 for(int loop65 = 0; loop65 < 3; loop65++) {
                                    int* array13 = new int[142];
                                    for (int i = 0; i < 336; i++) {
                                       array6[i]++; 
                                    }
                                    int* array14 = new int[884];
                                    for (int i = 0; i < 273; i++) {
                                       array10[i]--; 
                                    }
                                    int* array15 = new int[205];
                                    for (int i = 0; i < 860; i++) {
                                       array12[i]++; 
                                    }
                                    if(PATH0 & 65536) {
                                       func45();
                                    }
                                    else {
                                       int* array16 = new int[567];
                                       if(PATH0 & 131072) {
                                          func48();
                                       }
                                       else {
                                          for(int loop66 = 0; loop66 < 3; loop66++) {
                                          }
                                       }
                                    }
                                    printf("DELETE!\n");
                                    printf("DELETE!\n");
                                    printf("DELETE!\n");
                                 }
                              }
                           }
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                        }
                     }
                  }
                  printf("DELETE!\n");
                  printf("DELETE!\n");
                  printf("DELETE!\n");
               }
            }
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         printf("DELETE!\n");
      }
   }
}

void func2(const unsigned long PATH0) {
   for(int loop45 = 0; loop45 < 3; loop45++) {
      if(PATH0 & 1) {
         func14(rng());
         func15();
         func16(rng());
         func17(rng());
      }
      else {
         func11(rng());
      }
   }
}

void func11(const unsigned long PATH0) {
   int* array1 = new int[736];
   int* array2 = new int[444];
   for (int i = 0; i < 736; i++) {
      array1[i]++; 
   }
   int* array3 = new int[522];
   for (int i = 0; i < 522; i++) {
      array3[i]--; 
   }
   int* array4 = new int[708];
   for (int i = 0; i < 736; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      int* array5 = new int[282];
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int loop46 = 0; loop46 < 3; loop46++) {
            int* array6 = new int[258];
            for (int i = 0; i < 522; i++) {
               array3[i]++; 
            }
            int* array7 = new int[637];
            for (int i = 0; i < 444; i++) {
               array2[i]--; 
            }
            int* array8 = new int[624];
            for (int i = 0; i < 736; i++) {
               array1[i]++; 
            }
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               int* array9 = new int[36];
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int loop47 = 0; loop47 < 3; loop47++) {
                     int* array10 = new int[452];
                     for (int i = 0; i < 452; i++) {
                        array10[i]++; 
                     }
                     int* array11 = new int[379];
                     for (int i = 0; i < 522; i++) {
                        array3[i]--; 
                     }
                     int* array12 = new int[468];
                     for (int i = 0; i < 468; i++) {
                        array12[i]++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        int* array13 = new int[973];
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int loop48 = 0; loop48 < 3; loop48++) {
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func3() {
   for(int loop49 = 0; loop49 < 3; loop49++) {
      int* array1 = new int[131];
      for (int i = 0; i < 131; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      func7(rng());
      func8();
      func9(rng());
      func10(rng());
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   int* array1 = new int[930];
   for (int i = 0; i < 930; i++) {
      array1[i]++; 
   }
   int* array2 = new int[894];
   for (int i = 0; i < 930; i++) {
      array1[i]--; 
   }
   int* array3 = new int[163];
   for (int i = 0; i < 894; i++) {
      array2[i]++; 
   }
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      int* array4 = new int[981];
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int loop50 = 0; loop50 < 3; loop50++) {
            int* array5 = new int[899];
            for (int i = 0; i < 894; i++) {
               array2[i]++; 
            }
            int* array6 = new int[959];
            for (int i = 0; i < 981; i++) {
               array4[i]--; 
            }
            int* array7 = new int[813];
            for (int i = 0; i < 163; i++) {
               array3[i]++; 
            }
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               int* array8 = new int[190];
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int loop51 = 0; loop51 < 3; loop51++) {
                     int* array9 = new int[95];
                     for (int i = 0; i < 163; i++) {
                        array3[i]++; 
                     }
                     int* array10 = new int[466];
                     for (int i = 0; i < 899; i++) {
                        array5[i]--; 
                     }
                     int* array11 = new int[340];
                     for (int i = 0; i < 466; i++) {
                        array10[i]++; 
                     }
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        int* array12 = new int[684];
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int loop52 = 0; loop52 < 3; loop52++) {
                              int* array13 = new int[376];
                              for (int i = 0; i < 981; i++) {
                                 array4[i]++; 
                              }
                              int* array14 = new int[936];
                              for (int i = 0; i < 936; i++) {
                                 array14[i]--; 
                              }
                              int* array15 = new int[445];
                              for (int i = 0; i < 813; i++) {
                                 array7[i]++; 
                              }
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func9(rng());
   }
   else {
      int* array1 = new int[179];
      if(PATH0 & 2) {
         func12();
      }
      else {
         for(int loop53 = 0; loop53 < 3; loop53++) {
            int* array2 = new int[418];
            for (int i = 0; i < 418; i++) {
               array2[i]++; 
            }
            int* array3 = new int[412];
            for (int i = 0; i < 418; i++) {
               array2[i]--; 
            }
            int* array4 = new int[172];
            for (int i = 0; i < 172; i++) {
               array4[i]++; 
            }
            if(PATH0 & 4) {
               func21(rng());
            }
            else {
               int* array5 = new int[9];
               if(PATH0 & 8) {
                  func24();
               }
               else {
                  for(int loop54 = 0; loop54 < 3; loop54++) {
                     int* array6 = new int[336];
                     for (int i = 0; i < 412; i++) {
                        array3[i]++; 
                     }
                     int* array7 = new int[342];
                     for (int i = 0; i < 418; i++) {
                        array2[i]--; 
                     }
                     int* array8 = new int[206];
                     for (int i = 0; i < 336; i++) {
                        array6[i]++; 
                     }
                     if(PATH0 & 16) {
                        func33(rng());
                     }
                     else {
                        int* array9 = new int[713];
                        if(PATH0 & 32) {
                           func36();
                        }
                        else {
                           for(int loop55 = 0; loop55 < 3; loop55++) {
                              int* array10 = new int[372];
                              for (int i = 0; i < 418; i++) {
                                 array2[i]++; 
                              }
                              int* array11 = new int[255];
                              for (int i = 0; i < 372; i++) {
                                 array10[i]--; 
                              }
                              int* array12 = new int[599];
                              for (int i = 0; i < 372; i++) {
                                 array10[i]++; 
                              }
                              if(PATH0 & 64) {
                                 func45();
                              }
                              else {
                                 int* array13 = new int[904];
                                 if(PATH0 & 128) {
                                    func48();
                                 }
                                 else {
                                    for(int loop56 = 0; loop56 < 3; loop56++) {
                                    }
                                 }
                              }
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func12() {
   func14(rng());
   func15();
   func16(rng());
   func17(rng());
}

void func6() {
   func7(rng());
   func8();
   func9(rng());
   func10(rng());
}

