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
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
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
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      int* array1 = new int[305];
      scalar0++;
      func0(rng());
      int* array2 = new int[504];
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
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
      for (int i = 0; i < 305; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 305; i++) {
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
   for(int scalar1 = 0; scalar1 < 10; scalar1++) {
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
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
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
   for(int scalar3 = 0; scalar3 < 10; scalar3++) {
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
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      int* array5 = new int[383];
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func45() {
}

void func46() {
}

void func37() {
   int* array4 = new int[777];
   int* array5 = new int[915];
   for (int i = 0; i < 915; i++) {
      array5[i]++; 
   }
   int* array6 = new int[335];
   for (int i = 0; i < 915; i++) {
      array5[i]--; 
   }
   int* array7 = new int[492];
   for (int i = 0; i < 915; i++) {
      array5[i]++; 
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func32() {
   for(int scalar3 = 0; scalar3 < 10; scalar3++) {
      int* array4 = new int[421];
      if (scalar3 == 0) {
         printf("IS 0!");
      }
      func38(rng());
      func39();
      func40();
      func41(rng());
      printf("DELETE!\n");
   }
}

void func38(const unsigned long PATH0) {
   for(int scalar5 = 0; scalar5 < 10; scalar5++) {
      if(PATH0 & 1) {
      }
      else {
         func47();
      }
   }
}

void func47() {
   int* array6 = new int[27];
   printf("DELETE!\n");
}

void func39() {
   for(int scalar5 = 0; scalar5 < 10; scalar5++) {
      int* array6 = new int[690];
      for (int i = 0; i < 690; i++) {
         if (array6[i] == 0) { 
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
   int* array5 = new int[763];
   for (int i = 0; i < 763; i++) {
      array5[i]++; 
   }
   int* array6 = new int[540];
   for (int i = 0; i < 763; i++) {
      array5[i]--; 
   }
   int* array7 = new int[172];
   for (int i = 0; i < 540; i++) {
      array6[i]++; 
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
      int* array5 = new int[211];
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
         }
      }
   }
}

void func48() {
}

void func33(const unsigned long PATH0) {
   int* array3 = new int[368];
   for (int i = 0; i < 368; i++) {
      array3[i]++; 
   }
   int* array4 = new int[429];
   for (int i = 0; i < 368; i++) {
      array3[i]--; 
   }
   int* array5 = new int[530];
   for (int i = 0; i < 530; i++) {
      array5[i]++; 
   }
   if(PATH0 & 1) {
      func45();
   }
   else {
      int* array6 = new int[123];
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
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
      int* array3 = new int[67];
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int* array5 = new int[135];
            for (int i = 0; i < 135; i++) {
               array5[i]++; 
            }
            int* array6 = new int[802];
            for (int i = 0; i < 135; i++) {
               array5[i]--; 
            }
            int* array7 = new int[58];
            for (int i = 0; i < 58; i++) {
               array7[i]++; 
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
   int* array3 = new int[167];
   int* array4 = new int[393];
   for (int i = 0; i < 167; i++) {
      array3[i]++; 
   }
   int* array5 = new int[11];
   for (int i = 0; i < 393; i++) {
      array4[i]--; 
   }
   int* array6 = new int[229];
   for (int i = 0; i < 393; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
      func40();
   }
   else {
      int* array7 = new int[421];
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            int* array9 = new int[919];
            for (int i = 0; i < 919; i++) {
               array9[i]++; 
            }
            int* array10 = new int[537];
            for (int i = 0; i < 919; i++) {
               array9[i]--; 
            }
            int* array11 = new int[324];
            for (int i = 0; i < 11; i++) {
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
   printf("DELETE!\n");
}

void func20() {
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      int* array3 = new int[370];
      for (int i = 0; i < 370; i++) {
         if (array3[i] == 0) { 
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
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
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
   int* array5 = new int[526];
   int* array6 = new int[91];
   for (int i = 0; i < 526; i++) {
      array5[i]++; 
   }
   int* array7 = new int[956];
   for (int i = 0; i < 526; i++) {
      array5[i]--; 
   }
   int* array8 = new int[862];
   for (int i = 0; i < 956; i++) {
      array7[i]++; 
   }
   if(PATH0 & 1) {
      func45();
   }
   else {
      int* array9 = new int[996];
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int scalar10 = 0; scalar10 < 10; scalar10++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func27() {
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      int* array5 = new int[281];
      for (int i = 0; i < 281; i++) {
         if (array5[i] == 0) { 
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
   int* array4 = new int[925];
   for (int i = 0; i < 925; i++) {
      array4[i]++; 
   }
   int* array5 = new int[327];
   for (int i = 0; i < 925; i++) {
      array4[i]--; 
   }
   int* array6 = new int[505];
   for (int i = 0; i < 327; i++) {
      array5[i]++; 
   }
   if(PATH0 & 1) {
      func40();
   }
   else {
      int* array7 = new int[729];
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            int* array9 = new int[313];
            for (int i = 0; i < 313; i++) {
               array9[i]++; 
            }
            int* array10 = new int[124];
            for (int i = 0; i < 729; i++) {
               array7[i]--; 
            }
            int* array11 = new int[582];
            for (int i = 0; i < 327; i++) {
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

void func29(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func33(rng());
   }
   else {
      int* array4 = new int[814];
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int* array6 = new int[367];
            for (int i = 0; i < 367; i++) {
               array6[i]++; 
            }
            int* array7 = new int[364];
            for (int i = 0; i < 364; i++) {
               array7[i]--; 
            }
            int* array8 = new int[750];
            for (int i = 0; i < 367; i++) {
               array6[i]++; 
            }
            if(PATH0 & 4) {
               func45();
            }
            else {
               int* array9 = new int[808];
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
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
   int* array2 = new int[276];
   for (int i = 0; i < 276; i++) {
      array2[i]++; 
   }
   int* array3 = new int[788];
   for (int i = 0; i < 276; i++) {
      array2[i]--; 
   }
   int* array4 = new int[403];
   for (int i = 0; i < 403; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
      func33(rng());
   }
   else {
      int* array5 = new int[754];
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            int* array7 = new int[399];
            for (int i = 0; i < 276; i++) {
               array2[i]++; 
            }
            int* array8 = new int[60];
            for (int i = 0; i < 399; i++) {
               array7[i]--; 
            }
            int* array9 = new int[368];
            for (int i = 0; i < 754; i++) {
               array5[i]++; 
            }
            if(PATH0 & 4) {
               func45();
            }
            else {
               int* array10 = new int[12];
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
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
      int* array2 = new int[226];
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            int* array4 = new int[586];
            for (int i = 0; i < 226; i++) {
               array2[i]++; 
            }
            int* array5 = new int[539];
            for (int i = 0; i < 539; i++) {
               array5[i]--; 
            }
            int* array6 = new int[570];
            for (int i = 0; i < 570; i++) {
               array6[i]++; 
            }
            if(PATH0 & 4) {
               func40();
            }
            else {
               int* array7 = new int[378];
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                     int* array9 = new int[467];
                     scalar3++;
                     int* array10 = new int[97];
                     for (int i = 0; i < 586; i++) {
                        array4[i]--; 
                     }
                     int* array11 = new int[317];
                     for (int i = 0; i < 586; i++) {
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
   int* array2 = new int[652];
   int* array3 = new int[756];
   for (int i = 0; i < 756; i++) {
      array3[i]++; 
   }
   int* array4 = new int[280];
   for (int i = 0; i < 280; i++) {
      array4[i]--; 
   }
   int* array5 = new int[441];
   for (int i = 0; i < 756; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      func28(rng());
   }
   else {
      int* array6 = new int[689];
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            int* array8 = new int[444];
            for (int i = 0; i < 756; i++) {
               array3[i]++; 
            }
            int* array9 = new int[440];
            for (int i = 0; i < 756; i++) {
               array3[i]--; 
            }
            int* array10 = new int[31];
            for (int i = 0; i < 689; i++) {
               array6[i]++; 
            }
            if(PATH0 & 4) {
               func40();
            }
            else {
               int* array11 = new int[97];
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     int* array13 = new int[771];
                     for (int i = 0; i < 97; i++) {
                        array11[i]++; 
                     }
                     int* array14 = new int[675];
                     for (int i = 0; i < 280; i++) {
                        array4[i]--; 
                     }
                     int* array15 = new int[927];
                     for (int i = 0; i < 771; i++) {
                        array13[i]++; 
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
   for(int scalar1 = 0; scalar1 < 10; scalar1++) {
      int* array2 = new int[856];
      for (int i = 0; i < 856; i++) {
         if (array2[i] == 0) { 
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
   for(int scalar3 = 0; scalar3 < 10; scalar3++) {
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
   int* array4 = new int[353];
   int* array5 = new int[586];
   for (int i = 0; i < 586; i++) {
      array5[i]++; 
   }
   int* array6 = new int[306];
   for (int i = 0; i < 306; i++) {
      array6[i]--; 
   }
   int* array7 = new int[219];
   for (int i = 0; i < 353; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
      func33(rng());
   }
   else {
      int* array8 = new int[528];
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int scalar9 = 0; scalar9 < 10; scalar9++) {
            int* array10 = new int[871];
            for (int i = 0; i < 528; i++) {
               array8[i]++; 
            }
            int* array11 = new int[829];
            for (int i = 0; i < 829; i++) {
               array11[i]--; 
            }
            int* array12 = new int[19];
            for (int i = 0; i < 353; i++) {
               array4[i]++; 
            }
            if(PATH0 & 4) {
               func45();
            }
            else {
               int* array13 = new int[368];
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int scalar14 = 0; scalar14 < 10; scalar14++) {
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
   for(int scalar3 = 0; scalar3 < 10; scalar3++) {
      int* array4 = new int[708];
      for (int i = 0; i < 708; i++) {
         if (array4[i] == 0) { 
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
   int* array3 = new int[340];
   for (int i = 0; i < 340; i++) {
      array3[i]++; 
   }
   int* array4 = new int[796];
   for (int i = 0; i < 796; i++) {
      array4[i]--; 
   }
   int* array5 = new int[618];
   for (int i = 0; i < 796; i++) {
      array4[i]++; 
   }
   if(PATH0 & 1) {
      func28(rng());
   }
   else {
      int* array6 = new int[846];
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            int* array8 = new int[451];
            for (int i = 0; i < 796; i++) {
               array4[i]++; 
            }
            int* array9 = new int[555];
            scalar7--;
            int* array10 = new int[488];
            scalar7++;
            if(PATH0 & 4) {
               func40();
            }
            else {
               int* array11 = new int[228];
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     int* array13 = new int[841];
                     for (int i = 0; i < 488; i++) {
                        array10[i]++; 
                     }
                     int* array14 = new int[193];
                     scalar7--;
                     int* array15 = new int[34];
                     for (int i = 0; i < 340; i++) {
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
}

void func17(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      int* array3 = new int[124];
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            int* array5 = new int[914];
            for (int i = 0; i < 914; i++) {
               array5[i]++; 
            }
            int* array6 = new int[856];
            for (int i = 0; i < 856; i++) {
               array6[i]--; 
            }
            int* array7 = new int[491];
            for (int i = 0; i < 914; i++) {
               array5[i]++; 
            }
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               int* array8 = new int[365];
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                     int* array10 = new int[859];
                     for (int i = 0; i < 124; i++) {
                        array3[i]++; 
                     }
                     int* array11 = new int[432];
                     for (int i = 0; i < 914; i++) {
                        array5[i]--; 
                     }
                     int* array12 = new int[437];
                     for (int i = 0; i < 432; i++) {
                        array11[i]++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        int* array13 = new int[275];
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int scalar14 = 0; scalar14 < 10; scalar14++) {
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
   int* array1 = new int[407];
   for (int i = 0; i < 407; i++) {
      array1[i]++; 
   }
   int* array2 = new int[121];
   for (int i = 0; i < 407; i++) {
      array1[i]--; 
   }
   int* array3 = new int[395];
   for (int i = 0; i < 395; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      int* array4 = new int[237];
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            int* array6 = new int[235];
            for (int i = 0; i < 121; i++) {
               array2[i]++; 
            }
            int* array7 = new int[818];
            for (int i = 0; i < 235; i++) {
               array6[i]--; 
            }
            int* array8 = new int[143];
            for (int i = 0; i < 237; i++) {
               array4[i]++; 
            }
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               int* array9 = new int[928];
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     int* array11 = new int[529];
                     scalar10++;
                     int* array12 = new int[404];
                     for (int i = 0; i < 143; i++) {
                        array8[i]--; 
                     }
                     int* array13 = new int[763];
                     for (int i = 0; i < 143; i++) {
                        array8[i]++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        int* array14 = new int[538];
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int scalar15 = 0; scalar15 < 10; scalar15++) {
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
      int* array1 = new int[606];
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int scalar2 = 0; scalar2 < 10; scalar2++) {
            int* array3 = new int[840];
            scalar2++;
            int* array4 = new int[818];
            for (int i = 0; i < 606; i++) {
               array1[i]--; 
            }
            int* array5 = new int[688];
            for (int i = 0; i < 688; i++) {
               array5[i]++; 
            }
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               int* array6 = new int[917];
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                     int* array8 = new int[917];
                     for (int i = 0; i < 688; i++) {
                        array5[i]++; 
                     }
                     int* array9 = new int[324];
                     for (int i = 0; i < 818; i++) {
                        array4[i]--; 
                     }
                     int* array10 = new int[470];
                     for (int i = 0; i < 818; i++) {
                        array4[i]++; 
                     }
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        int* array11 = new int[490];
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                              int* array13 = new int[499];
                              for (int i = 0; i < 470; i++) {
                                 array10[i]++; 
                              }
                              int* array14 = new int[725];
                              scalar7--;
                              int* array15 = new int[590];
                              for (int i = 0; i < 917; i++) {
                                 array6[i]++; 
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
   int* array1 = new int[139];
   int* array2 = new int[954];
   for (int i = 0; i < 139; i++) {
      array1[i]++; 
   }
   int* array3 = new int[669];
   for (int i = 0; i < 669; i++) {
      array3[i]--; 
   }
   int* array4 = new int[542];
   for (int i = 0; i < 139; i++) {
      array1[i]++; 
   }
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      int* array5 = new int[197];
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            int* array7 = new int[507];
            for (int i = 0; i < 139; i++) {
               array1[i]++; 
            }
            int* array8 = new int[804];
            for (int i = 0; i < 197; i++) {
               array5[i]--; 
            }
            int* array9 = new int[611];
            for (int i = 0; i < 611; i++) {
               array9[i]++; 
            }
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               int* array10 = new int[828];
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     int* array12 = new int[299];
                     for (int i = 0; i < 542; i++) {
                        array4[i]++; 
                     }
                     int* array13 = new int[746];
                     for (int i = 0; i < 669; i++) {
                        array3[i]--; 
                     }
                     int* array14 = new int[340];
                     for (int i = 0; i < 507; i++) {
                        array7[i]++; 
                     }
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        int* array15 = new int[311];
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int scalar16 = 0; scalar16 < 10; scalar16++) {
                              int* array17 = new int[810];
                              for (int i = 0; i < 828; i++) {
                                 array10[i]++; 
                              }
                              int* array18 = new int[801];
                              for (int i = 0; i < 340; i++) {
                                 array14[i]--; 
                              }
                              int* array19 = new int[730];
                              scalar6++;
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
         int* array2 = new int[939];
         if(PATH0 & 4) {
            func6();
         }
         else {
            for(int scalar3 = 0; scalar3 < 10; scalar3++) {
               int* array4 = new int[811];
               for (int i = 0; i < 811; i++) {
                  array4[i]++; 
               }
               int* array5 = new int[667];
               scalar3--;
               int* array6 = new int[228];
               for (int i = 0; i < 811; i++) {
                  array4[i]++; 
               }
               if(PATH0 & 8) {
                  func16(rng());
               }
               else {
                  int* array7 = new int[150];
                  if(PATH0 & 16) {
                     func18();
                  }
                  else {
                     for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                        int* array9 = new int[984];
                        for (int i = 0; i < 811; i++) {
                           array4[i]++; 
                        }
                        int* array10 = new int[920];
                        for (int i = 0; i < 984; i++) {
                           array9[i]--; 
                        }
                        int* array11 = new int[422];
                        for (int i = 0; i < 422; i++) {
                           array11[i]++; 
                        }
                        if(PATH0 & 32) {
                           func28(rng());
                        }
                        else {
                           int* array12 = new int[396];
                           if(PATH0 & 64) {
                              func30();
                           }
                           else {
                              for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                                 int* array14 = new int[81];
                                 for (int i = 0; i < 984; i++) {
                                    array9[i]++; 
                                 }
                                 int* array15 = new int[84];
                                 for (int i = 0; i < 81; i++) {
                                    array14[i]--; 
                                 }
                                 int* array16 = new int[972];
                                 for (int i = 0; i < 811; i++) {
                                    array4[i]++; 
                                 }
                                 if(PATH0 & 128) {
                                    func40();
                                 }
                                 else {
                                    int* array17 = new int[850];
                                    if(PATH0 & 256) {
                                       func42();
                                    }
                                    else {
                                       for(int scalar18 = 0; scalar18 < 10; scalar18++) {
                                          int* array19 = new int[625];
                                          for (int i = 0; i < 422; i++) {
                                             array11[i]++; 
                                          }
                                          int* array20 = new int[222];
                                          scalar13--;
                                          int* array21 = new int[640];
                                          for (int i = 0; i < 811; i++) {
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
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
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
         int* array3 = new int[898];
         for (int i = 0; i < 898; i++) {
            array3[i]++; 
         }
         int* array4 = new int[298];
         for (int i = 0; i < 298; i++) {
            array4[i]--; 
         }
         int* array5 = new int[524];
         for (int i = 0; i < 298; i++) {
            array4[i]++; 
         }
         if(PATH0 & 1024) {
            func9(rng());
         }
         else {
            int* array6 = new int[209];
            if(PATH0 & 2048) {
               func12();
            }
            else {
               for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                  int* array8 = new int[581];
                  for (int i = 0; i < 209; i++) {
                     array6[i]++; 
                  }
                  int* array9 = new int[336];
                  for (int i = 0; i < 209; i++) {
                     array6[i]--; 
                  }
                  int* array10 = new int[155];
                  scalar7++;
                  if(PATH0 & 4096) {
                     func21(rng());
                  }
                  else {
                     int* array11 = new int[4];
                     if(PATH0 & 8192) {
                        func24();
                     }
                     else {
                        for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                           int* array13 = new int[379];
                           scalar7++;
                           int* array14 = new int[273];
                           for (int i = 0; i < 898; i++) {
                              array3[i]--; 
                           }
                           int* array15 = new int[850];
                           for (int i = 0; i < 4; i++) {
                              array11[i]++; 
                           }
                           if(PATH0 & 16384) {
                              func33(rng());
                           }
                           else {
                              int* array16 = new int[860];
                              if(PATH0 & 32768) {
                                 func36();
                              }
                              else {
                                 for(int scalar17 = 0; scalar17 < 10; scalar17++) {
                                    int* array18 = new int[142];
                                    for (int i = 0; i < 524; i++) {
                                       array5[i]++; 
                                    }
                                    int* array19 = new int[884];
                                    for (int i = 0; i < 850; i++) {
                                       array15[i]--; 
                                    }
                                    int* array20 = new int[205];
                                    for (int i = 0; i < 205; i++) {
                                       array20[i]++; 
                                    }
                                    if(PATH0 & 65536) {
                                       func45();
                                    }
                                    else {
                                       int* array21 = new int[567];
                                       if(PATH0 & 131072) {
                                          func48();
                                       }
                                       else {
                                          for(int scalar22 = 0; scalar22 < 10; scalar22++) {
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
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
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
   int* array3 = new int[736];
   int* array4 = new int[444];
   for (int i = 0; i < 736; i++) {
      array3[i]++; 
   }
   int* array5 = new int[522];
   for (int i = 0; i < 522; i++) {
      array5[i]--; 
   }
   int* array6 = new int[708];
   for (int i = 0; i < 736; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      int* array7 = new int[282];
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            int* array9 = new int[258];
            for (int i = 0; i < 736; i++) {
               array3[i]++; 
            }
            int* array10 = new int[637];
            for (int i = 0; i < 258; i++) {
               array9[i]--; 
            }
            int* array11 = new int[624];
            for (int i = 0; i < 736; i++) {
               array3[i]++; 
            }
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               int* array12 = new int[36];
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                     int* array14 = new int[452];
                     for (int i = 0; i < 452; i++) {
                        array14[i]++; 
                     }
                     int* array15 = new int[379];
                     for (int i = 0; i < 452; i++) {
                        array14[i]--; 
                     }
                     int* array16 = new int[468];
                     for (int i = 0; i < 444; i++) {
                        array4[i]++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        int* array17 = new int[973];
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int scalar18 = 0; scalar18 < 10; scalar18++) {
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
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      int* array3 = new int[131];
      for (int i = 0; i < 131; i++) {
         if (array3[i] == 0) { 
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
   int* array2 = new int[930];
   for (int i = 0; i < 930; i++) {
      array2[i]++; 
   }
   int* array3 = new int[894];
   for (int i = 0; i < 930; i++) {
      array2[i]--; 
   }
   int* array4 = new int[163];
   for (int i = 0; i < 894; i++) {
      array3[i]++; 
   }
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      int* array5 = new int[981];
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            int* array7 = new int[899];
            scalar6++;
            int* array8 = new int[959];
            for (int i = 0; i < 959; i++) {
               array8[i]--; 
            }
            int* array9 = new int[813];
            scalar6++;
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               int* array10 = new int[190];
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     int* array12 = new int[95];
                     scalar11++;
                     int* array13 = new int[466];
                     for (int i = 0; i < 190; i++) {
                        array10[i]--; 
                     }
                     int* array14 = new int[340];
                     for (int i = 0; i < 813; i++) {
                        array9[i]++; 
                     }
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        int* array15 = new int[684];
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int scalar16 = 0; scalar16 < 10; scalar16++) {
                              int* array17 = new int[376];
                              for (int i = 0; i < 959; i++) {
                                 array8[i]++; 
                              }
                              int* array18 = new int[936];
                              for (int i = 0; i < 899; i++) {
                                 array7[i]--; 
                              }
                              int* array19 = new int[445];
                              for (int i = 0; i < 959; i++) {
                                 array8[i]++; 
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
      int* array2 = new int[179];
      if(PATH0 & 2) {
         func12();
      }
      else {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            int* array4 = new int[418];
            for (int i = 0; i < 418; i++) {
               array4[i]++; 
            }
            int* array5 = new int[412];
            for (int i = 0; i < 179; i++) {
               array2[i]--; 
            }
            int* array6 = new int[172];
            for (int i = 0; i < 172; i++) {
               array6[i]++; 
            }
            if(PATH0 & 4) {
               func21(rng());
            }
            else {
               int* array7 = new int[9];
               if(PATH0 & 8) {
                  func24();
               }
               else {
                  for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                     int* array9 = new int[336];
                     for (int i = 0; i < 418; i++) {
                        array4[i]++; 
                     }
                     int* array10 = new int[342];
                     for (int i = 0; i < 9; i++) {
                        array7[i]--; 
                     }
                     int* array11 = new int[206];
                     scalar3++;
                     if(PATH0 & 16) {
                        func33(rng());
                     }
                     else {
                        int* array12 = new int[713];
                        if(PATH0 & 32) {
                           func36();
                        }
                        else {
                           for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                              int* array14 = new int[372];
                              for (int i = 0; i < 713; i++) {
                                 array12[i]++; 
                              }
                              int* array15 = new int[255];
                              for (int i = 0; i < 255; i++) {
                                 array15[i]--; 
                              }
                              int* array16 = new int[599];
                              scalar8++;
                              if(PATH0 & 64) {
                                 func45();
                              }
                              else {
                                 int* array17 = new int[904];
                                 if(PATH0 & 128) {
                                    func48();
                                 }
                                 else {
                                    for(int scalar18 = 0; scalar18 < 10; scalar18++) {
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

