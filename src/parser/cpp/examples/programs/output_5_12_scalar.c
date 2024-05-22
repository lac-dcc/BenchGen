#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0, const unsigned long PATH1);
void func10(const unsigned long PATH0);
void func13(const unsigned long PATH0);
void func14();
void func11(const unsigned long PATH0);
void func15(const unsigned long PATH0);
void func12(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func8(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func1(const unsigned long PATH0);
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
      int scalar1 = 1;
      int scalar2 = 1;
      int scalar3 = 1;
      int scalar4 = 1;
      int scalar5 = 1;
      int scalar6 = 1;
      int scalar7 = 1;
      int scalar8 = 1;
      if(PATH0 & 1) {
         scalar8++;
         printf("DELETE!\n");
      }
      else {
         scalar7--;
         printf("DELETE!\n");
      }
      if(PATH0 & 2) {
      }
      else {
         int scalar9 = 1;
         scalar1++;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar9 = 1;
      printf("DELETE!\n");
      int scalar10 = 1;
      scalar4++;
      func10(rng());
      if(PATH0 & 4) {
         scalar1++;
         printf("DELETE!\n");
      }
      else {
         scalar10--;
         printf("DELETE!\n");
      }
      int scalar11 = 1;
      int scalar12 = 1;
      int scalar13 = 1;
      int scalar14 = 1;
      scalar14++;
      func13(rng());
      if(PATH0 & 8) {
         scalar1++;
         printf("DELETE!\n");
      }
      else {
         scalar11--;
         printf("DELETE!\n");
      }
      int scalar15 = 1;
      int scalar16 = 1;
      if(PATH0 & 16) {
         scalar3++;
         printf("DELETE!\n");
      }
      else {
         scalar5--;
         printf("DELETE!\n");
      }
      if(PATH0 & 32) {
      }
      else {
         int scalar17 = 1;
         scalar15++;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar17 = 1;
      printf("DELETE!\n");
      if(PATH0 & 64) {
         func15(rng());
         printf("DELETE!\n");
         int scalar18 = 1;
         scalar9++;
      }
      else {
         int scalar18 = 1;
         scalar16++;
         if (scalar16 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar18 = 1;
      printf("DELETE!\n");
      if(PATH0 & 128) {
         func12(rng());
         printf("DELETE!\n");
         int scalar19 = 1;
         scalar6++;
         int scalar20 = 1;
         int scalar21 = 1;
         scalar20++;
         func13(rng());
      }
      else {
         int scalar19 = 1;
         scalar7++;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar19 = 1;
      printf("DELETE!\n");
      int scalar20 = 1;
      scalar3++;
      func4(rng());
      if(PATH0 & 256) {
         scalar17++;
         printf("DELETE!\n");
      }
      else {
         scalar19--;
         printf("DELETE!\n");
      }
      int scalar21 = 1;
      int scalar22 = 1;
      int scalar23 = 1;
      int scalar24 = 1;
      int scalar25 = 1;
      int scalar26 = 1;
      int scalar27 = 1;
      scalar24++;
      func13(rng());
      if(PATH0 & 512) {
         scalar13++;
         printf("DELETE!\n");
      }
      else {
         scalar7--;
         printf("DELETE!\n");
      }
      int scalar28 = 1;
      int scalar29 = 1;
      if(PATH0 & 1024) {
         scalar25++;
         printf("DELETE!\n");
      }
      else {
         scalar22--;
         printf("DELETE!\n");
      }
      if(PATH0 & 2048) {
      }
      else {
         int scalar30 = 1;
         scalar20++;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar30 = 1;
      printf("DELETE!\n");
      if(PATH0 & 4096) {
         func15(rng());
         printf("DELETE!\n");
         int scalar31 = 1;
         scalar1++;
      }
      else {
         int scalar31 = 1;
         scalar17++;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar31 = 1;
      printf("DELETE!\n");
      int scalar32 = 1;
      scalar28++;
      func7(rng());
      if(PATH0 & 8192) {
         scalar29++;
         printf("DELETE!\n");
      }
      else {
         scalar3--;
         printf("DELETE!\n");
      }
      int scalar33 = 1;
      int scalar34 = 1;
      int scalar35 = 1;
      int scalar36 = 1;
      int scalar37 = 1;
      if(PATH0 & 16384) {
         scalar37++;
         printf("DELETE!\n");
      }
      else {
         scalar25--;
         printf("DELETE!\n");
      }
      if(PATH0 & 32768) {
      }
      else {
         int scalar38 = 1;
         scalar8++;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar38 = 1;
      printf("DELETE!\n");
      int scalar39 = 1;
      scalar8++;
      func10(rng());
      if(PATH0 & 65536) {
         scalar30++;
         printf("DELETE!\n");
      }
      else {
         scalar29--;
         printf("DELETE!\n");
      }
      int scalar40 = 1;
      int scalar41 = 1;
      int scalar42 = 1;
      int scalar43 = 1;
      scalar31++;
      func13(rng());
      if(PATH0 & 131072) {
         scalar38++;
         printf("DELETE!\n");
      }
      else {
         scalar39--;
         printf("DELETE!\n");
      }
      int scalar44 = 1;
      int scalar45 = 1;
      if(PATH0 & 262144) {
         scalar3++;
         printf("DELETE!\n");
      }
      else {
         scalar43--;
         printf("DELETE!\n");
      }
      if(PATH0 & 524288) {
      }
      else {
         int scalar46 = 1;
         scalar31++;
         if (scalar31 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar46 = 1;
      printf("DELETE!\n");
      if(PATH0 & 1048576) {
         func15(rng());
         printf("DELETE!\n");
         int scalar47 = 1;
         scalar10++;
      }
      else {
         int scalar47 = 1;
         scalar24++;
         if (scalar38 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar47 = 1;
      printf("DELETE!\n");
      if(PATH0 & 2097152) {
         func12(rng());
         printf("DELETE!\n");
         int scalar48 = 1;
         scalar15++;
         int scalar49 = 1;
         int scalar50 = 1;
         scalar42++;
         func13(rng());
      }
      else {
         int scalar48 = 1;
         scalar10++;
         if (scalar42 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar48 = 1;
      printf("DELETE!\n");
      if(PATH0 & 4194304) {
         func9(rng());
         printf("DELETE!\n");
         int scalar49 = 1;
         scalar4++;
         int scalar50 = 1;
         int scalar51 = 1;
         int scalar52 = 1;
         if(PATH0 & 8388608) {
            scalar36++;
            printf("DELETE!\n");
         }
         else {
            scalar42--;
            printf("DELETE!\n");
         }
         if(PATH0 & 16777216) {
         }
         else {
            int scalar53 = 1;
            scalar33++;
            if (scalar6 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar53 = 1;
         printf("DELETE!\n");
         int scalar54 = 1;
         scalar53++;
         func10(rng());
      }
      else {
         int scalar49 = 1;
         scalar6++;
         if (scalar34 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar49 = 1;
      printf("DELETE!\n");
      if(PATH0 & 33554432) {
         func6(rng());
         printf("DELETE!\n");
         int scalar50 = 1;
         scalar47++;
         int scalar51 = 1;
         int scalar52 = 1;
         int scalar53 = 1;
         int scalar54 = 1;
         int scalar55 = 1;
         scalar49++;
         func13(rng());
         if(PATH0 & 67108864) {
            scalar54++;
            printf("DELETE!\n");
         }
         else {
            scalar16--;
            printf("DELETE!\n");
         }
         int scalar56 = 1;
         int scalar57 = 1;
         if(PATH0 & 134217728) {
            scalar9++;
            printf("DELETE!\n");
         }
         else {
            scalar25--;
            printf("DELETE!\n");
         }
         if(PATH0 & 268435456) {
         }
         else {
            int scalar58 = 1;
            scalar42++;
            if (scalar48 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar58 = 1;
         printf("DELETE!\n");
         if(PATH0 & 536870912) {
            func15(rng());
            printf("DELETE!\n");
            int scalar59 = 1;
            scalar27++;
         }
         else {
            int scalar59 = 1;
            scalar21++;
            if (scalar35 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar59 = 1;
         printf("DELETE!\n");
         int scalar60 = 1;
         scalar9++;
         func7(rng());
      }
      else {
         int scalar50 = 1;
         scalar42++;
         if (scalar1 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar50 = 1;
      printf("DELETE!\n");
      int scalar51 = 1;
      func6(rng());
      printf("DELETE!\n");
      int scalar52 = 1;
      scalar42++;
      int scalar53 = 1;
      int scalar54 = 1;
      int scalar55 = 1;
      int scalar56 = 1;
      int scalar57 = 1;
      scalar50++;
      func13(rng());
      if(PATH0 & 1073741824) {
         scalar39++;
         printf("DELETE!\n");
      }
      else {
         scalar26--;
         printf("DELETE!\n");
      }
      int scalar58 = 1;
      int scalar59 = 1;
      if(PATH0 & -2147483648) {
         scalar19++;
         printf("DELETE!\n");
      }
      else {
         scalar40--;
         printf("DELETE!\n");
      }
      if(PATH0 & -2147483648) {
      }
      else {
         int scalar60 = 1;
         scalar48++;
         if (scalar57 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar60 = 1;
      printf("DELETE!\n");
      if(PATH0 & -2147483648) {
         func15(rng());
         printf("DELETE!\n");
         int scalar61 = 1;
         scalar18++;
      }
      else {
         int scalar61 = 1;
         scalar30++;
         if (scalar21 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar61 = 1;
      printf("DELETE!\n");
      int scalar62 = 1;
      scalar8++;
      func7(rng());
      int loop15 = 0;
      int loopLimit15 = (rand()%10)/2 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         if (scalar36 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & -2147483648) {
            scalar9++;
         }
         else {
            int scalar63 = 1;
            int scalar64 = 1;
            int scalar65 = 1;
            int scalar66 = 1;
            int scalar67 = 1;
            int scalar68 = 1;
            if(PATH0 & -2147483648) {
               scalar17++;
               printf("DELETE!\n");
            }
            else {
               scalar44--;
               printf("DELETE!\n");
            }
            if(PATH0 & -2147483648) {
            }
            else {
               int scalar69 = 1;
               scalar39++;
               if (scalar5 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
            }
            int scalar69 = 1;
            printf("DELETE!\n");
            int scalar70 = 1;
            scalar66++;
            func10(rng());
            if(PATH0 & -2147483648) {
               scalar38++;
               printf("DELETE!\n");
            }
            else {
               scalar55--;
               printf("DELETE!\n");
            }
            int scalar71 = 1;
            int scalar72 = 1;
            int scalar73 = 1;
            int scalar74 = 1;
            scalar26++;
            func13(rng());
            if(PATH0 & -2147483648) {
               scalar19++;
               printf("DELETE!\n");
            }
            else {
               scalar64--;
               printf("DELETE!\n");
            }
            int scalar75 = 1;
            int scalar76 = 1;
            if(PATH0 & -2147483648) {
               scalar50++;
               printf("DELETE!\n");
            }
            else {
               scalar14--;
               printf("DELETE!\n");
            }
            if(PATH0 & -2147483648) {
            }
            else {
               int scalar77 = 1;
               scalar9++;
               if (scalar31 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
            }
            int scalar77 = 1;
            printf("DELETE!\n");
            if(PATH0 & -2147483648) {
               func15(rng());
               printf("DELETE!\n");
               int scalar78 = 1;
               scalar63++;
            }
            else {
               int scalar78 = 1;
               scalar9++;
               if (scalar46 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
            }
            int scalar78 = 1;
            printf("DELETE!\n");
            if(PATH0 & -2147483648) {
               func12(rng());
               printf("DELETE!\n");
               int scalar79 = 1;
               scalar74++;
               int scalar80 = 1;
               int scalar81 = 1;
               scalar34++;
               func13(rng());
            }
            else {
               int scalar79 = 1;
               scalar63++;
               if (scalar25 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
            }
            int scalar79 = 1;
            printf("DELETE!\n");
            int scalar80 = 1;
            scalar5++;
            func4(rng());
            scalar44--;
         }
      }
      int loop16 = 0;
      int loopLimit16 = (rand()%10)/2 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         func6(rng());
         printf("DELETE!\n");
         int scalar63 = 1;
         scalar17++;
         int scalar64 = 1;
         int scalar65 = 1;
         int scalar66 = 1;
         int scalar67 = 1;
         int scalar68 = 1;
         scalar2++;
         func13(rng());
         if(PATH0 & -2147483648) {
            scalar15++;
            printf("DELETE!\n");
         }
         else {
            scalar55--;
            printf("DELETE!\n");
         }
         int scalar69 = 1;
         int scalar70 = 1;
         if(PATH0 & -2147483648) {
            scalar31++;
            printf("DELETE!\n");
         }
         else {
            scalar5--;
            printf("DELETE!\n");
         }
         if(PATH0 & -2147483648) {
         }
         else {
            int scalar71 = 1;
            scalar19++;
            if (scalar71 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar71 = 1;
         printf("DELETE!\n");
         if(PATH0 & -2147483648) {
            func15(rng());
            printf("DELETE!\n");
            int scalar72 = 1;
            scalar1++;
         }
         else {
            int scalar72 = 1;
            scalar34++;
            if (scalar46 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar72 = 1;
         printf("DELETE!\n");
         int scalar73 = 1;
         scalar60++;
         func7(rng());
      }
      func1(rng());
      printf("DELETE!\n");
      int scalar63 = 1;
      scalar52++;
      int scalar64 = 1;
      int scalar65 = 1;
      int scalar66 = 1;
      int scalar67 = 1;
      int scalar68 = 1;
      int scalar69 = 1;
      if(PATH0 & -2147483648) {
         scalar11++;
         printf("DELETE!\n");
      }
      else {
         scalar30--;
         printf("DELETE!\n");
      }
      if(PATH0 & -2147483648) {
      }
      else {
         int scalar70 = 1;
         scalar51++;
         if (scalar67 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar70 = 1;
      printf("DELETE!\n");
      int scalar71 = 1;
      scalar10++;
      func10(rng());
      if(PATH0 & -2147483648) {
         scalar60++;
         printf("DELETE!\n");
      }
      else {
         scalar39--;
         printf("DELETE!\n");
      }
      int scalar72 = 1;
      int scalar73 = 1;
      int scalar74 = 1;
      int scalar75 = 1;
      scalar66++;
      func13(rng());
      if(PATH0 & -2147483648) {
         scalar9++;
         printf("DELETE!\n");
      }
      else {
         scalar17--;
         printf("DELETE!\n");
      }
      int scalar76 = 1;
      int scalar77 = 1;
      if(PATH0 & -2147483648) {
         scalar17++;
         printf("DELETE!\n");
      }
      else {
         scalar3--;
         printf("DELETE!\n");
      }
      if(PATH0 & -2147483648) {
      }
      else {
         int scalar78 = 1;
         scalar45++;
         if (scalar28 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar78 = 1;
      printf("DELETE!\n");
      if(PATH0 & -2147483648) {
         func15(rng());
         printf("DELETE!\n");
         int scalar79 = 1;
         scalar28++;
      }
      else {
         int scalar79 = 1;
         scalar37++;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar79 = 1;
      printf("DELETE!\n");
      if(PATH0 & -2147483648) {
         func12(rng());
         printf("DELETE!\n");
         int scalar80 = 1;
         scalar37++;
         int scalar81 = 1;
         int scalar82 = 1;
         scalar81++;
         func13(rng());
      }
      else {
         int scalar80 = 1;
         scalar60++;
         if (scalar20 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar80 = 1;
      printf("DELETE!\n");
      int scalar81 = 1;
      scalar74++;
      func4(rng());
      int scalar82 = 1;
      int scalar83 = 1;
      int scalar84 = 1;
      int scalar85 = 1;
      int scalar86 = 1;
      int scalar87 = 1;
      int scalar88 = 1;
      int scalar89 = 1;
      scalar79++;
      func13(rng());
      if(PATH0 & -2147483648) {
         scalar37++;
         printf("DELETE!\n");
      }
      else {
         scalar47--;
         printf("DELETE!\n");
      }
      int scalar90 = 1;
      int scalar91 = 1;
      if(PATH0 & -2147483648) {
         scalar52++;
         printf("DELETE!\n");
      }
      else {
         scalar90--;
         printf("DELETE!\n");
      }
      if(PATH0 & -2147483648) {
      }
      else {
         int scalar92 = 1;
         scalar79++;
         if (scalar54 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar92 = 1;
      printf("DELETE!\n");
      if(PATH0 & -2147483648) {
         func15(rng());
         printf("DELETE!\n");
         int scalar93 = 1;
         scalar87++;
      }
      else {
         int scalar93 = 1;
         scalar5++;
         if (scalar7 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar93 = 1;
      printf("DELETE!\n");
      int scalar94 = 1;
      scalar48++;
      func7(rng());
      if(PATH0 & -2147483648) {
         scalar16++;
         printf("DELETE!\n");
      }
      else {
         scalar44--;
         printf("DELETE!\n");
      }
      int scalar95 = 1;
      int scalar96 = 1;
      int scalar97 = 1;
      int scalar98 = 1;
      int scalar99 = 1;
      if(PATH0 & -2147483648) {
         scalar68++;
         printf("DELETE!\n");
      }
      else {
         scalar67--;
         printf("DELETE!\n");
      }
      if(PATH0 & -2147483648) {
      }
      else {
         int scalar100 = 1;
         scalar74++;
         if (scalar14 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar100 = 1;
      printf("DELETE!\n");
      int scalar101 = 1;
      scalar101++;
      func10(rng());
      if(PATH0 & -2147483648) {
         scalar33++;
         printf("DELETE!\n");
      }
      else {
         scalar5--;
         printf("DELETE!\n");
      }
      int scalar102 = 1;
      int scalar103 = 1;
      int scalar104 = 1;
      int scalar105 = 1;
      scalar12++;
      func13(rng());
      if(PATH0 & -2147483648) {
         scalar102++;
         printf("DELETE!\n");
      }
      else {
         scalar45--;
         printf("DELETE!\n");
      }
      int scalar106 = 1;
      int scalar107 = 1;
      if(PATH1 & 1) {
         scalar44++;
         printf("DELETE!\n");
      }
      else {
         scalar64--;
         printf("DELETE!\n");
      }
      if(PATH1 & 2) {
      }
      else {
         int scalar108 = 1;
         scalar93++;
         if (scalar73 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar108 = 1;
      printf("DELETE!\n");
      if(PATH1 & 4) {
         func15(rng());
         printf("DELETE!\n");
         int scalar109 = 1;
         scalar21++;
      }
      else {
         int scalar109 = 1;
         scalar71++;
         if (scalar99 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar109 = 1;
      printf("DELETE!\n");
      if(PATH1 & 8) {
         func12(rng());
         printf("DELETE!\n");
         int scalar110 = 1;
         scalar36++;
         int scalar111 = 1;
         int scalar112 = 1;
         scalar13++;
         func13(rng());
      }
      else {
         int scalar110 = 1;
         scalar80++;
         if (scalar79 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar110 = 1;
      printf("DELETE!\n");
      if(PATH1 & 16) {
         func9(rng());
         printf("DELETE!\n");
         int scalar111 = 1;
         scalar36++;
         int scalar112 = 1;
         int scalar113 = 1;
         int scalar114 = 1;
         if(PATH1 & 32) {
            scalar45++;
            printf("DELETE!\n");
         }
         else {
            scalar95--;
            printf("DELETE!\n");
         }
         if(PATH1 & 64) {
         }
         else {
            int scalar115 = 1;
            scalar43++;
            if (scalar100 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar115 = 1;
         printf("DELETE!\n");
         int scalar116 = 1;
         scalar94++;
         func10(rng());
      }
      else {
         int scalar111 = 1;
         scalar81++;
         if (scalar24 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar111 = 1;
      printf("DELETE!\n");
      int scalar112 = 1;
      scalar23++;
      func2(rng());
   }
}

void func10(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         int scalar11 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         int scalar12 = 1;
         int scalar13 = 1;
         scalar12++;
         func13(rng());
         printf("DELETE!\n");
      }
   }
   else {
      func11(rng());
   }
}

void func13(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/3 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         int scalar14 = 1;
         if (scalar14 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func14();
   }
}

void func14() {
   int loop3 = 0;
   int loopLimit3 = (rand()%10)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
   }
}

void func11(const unsigned long PATH0) {
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/2 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      int scalar11 = 1;
      int scalar12 = 1;
      if(PATH0 & 1) {
         scalar12++;
         printf("DELETE!\n");
      }
      else {
         scalar12--;
         printf("DELETE!\n");
      }
      if(PATH0 & 2) {
      }
      else {
         int scalar13 = 1;
         scalar13++;
         if (scalar12 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar13 = 1;
      printf("DELETE!\n");
   }
}

void func15(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
   }
}

void func12(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func15(rng());
      printf("DELETE!\n");
      int scalar19 = 1;
      scalar19++;
   }
   else {
      int scalar19 = 1;
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         if (scalar19 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 2) {
            scalar19++;
         }
         else {
            scalar19--;
         }
      }
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/2 + 1;
      for(; loop6 < loopLimit6; loop6++) {
      }
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/2 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         int scalar21 = 1;
         if (scalar21 == 0) {
            printf("IS 0!");
         }
         int scalar22 = 1;
         int scalar23 = 1;
         int scalar24 = 1;
         int scalar25 = 1;
         int scalar26 = 1;
         scalar26++;
         func13(rng());
         if(PATH0 & 2) {
            scalar24++;
            printf("DELETE!\n");
         }
         else {
            scalar22--;
            printf("DELETE!\n");
         }
         int scalar27 = 1;
         int scalar28 = 1;
         if(PATH0 & 4) {
            scalar21++;
            printf("DELETE!\n");
         }
         else {
            scalar24--;
            printf("DELETE!\n");
         }
         if(PATH0 & 8) {
         }
         else {
            int scalar29 = 1;
            scalar28++;
            if (scalar27 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar29 = 1;
         printf("DELETE!\n");
         if(PATH0 & 16) {
            func15(rng());
            printf("DELETE!\n");
            int scalar30 = 1;
            scalar24++;
         }
         else {
            int scalar30 = 1;
            scalar22++;
            if (scalar30 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar30 = 1;
         printf("DELETE!\n");
         int scalar31 = 1;
         scalar21++;
         func7(rng());
         printf("DELETE!\n");
      }
   }
   else {
      func5(rng());
   }
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/3 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         int scalar32 = 1;
         if (scalar32 == 0) {
            printf("IS 0!");
         }
         int scalar33 = 1;
         int scalar34 = 1;
         int scalar35 = 1;
         if(PATH0 & 2) {
            scalar34++;
            printf("DELETE!\n");
         }
         else {
            scalar32--;
            printf("DELETE!\n");
         }
         if(PATH0 & 4) {
         }
         else {
            int scalar36 = 1;
            scalar32++;
            if (scalar32 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar36 = 1;
         printf("DELETE!\n");
         int scalar37 = 1;
         scalar37++;
         func10(rng());
         printf("DELETE!\n");
      }
   }
   else {
      func8(rng());
   }
}

void func8(const unsigned long PATH0) {
   int loop9 = 0;
   int loopLimit9 = (rand()%10)/3 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      int scalar32 = 1;
      int scalar33 = 1;
      int scalar34 = 1;
      int scalar35 = 1;
      scalar34++;
      func13(rng());
      if(PATH0 & 1) {
         scalar35++;
         printf("DELETE!\n");
      }
      else {
         scalar32--;
         printf("DELETE!\n");
      }
      int scalar36 = 1;
      int scalar37 = 1;
      if(PATH0 & 2) {
         scalar34++;
         printf("DELETE!\n");
      }
      else {
         scalar35--;
         printf("DELETE!\n");
      }
      if(PATH0 & 4) {
      }
      else {
         int scalar38 = 1;
         scalar36++;
         if (scalar36 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar38 = 1;
      printf("DELETE!\n");
      if(PATH0 & 8) {
         func15(rng());
         printf("DELETE!\n");
         int scalar39 = 1;
         scalar36++;
      }
      else {
         int scalar39 = 1;
         scalar33++;
         if (scalar33 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar39 = 1;
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   int loop10 = 0;
   int loopLimit10 = (rand()%10)/2 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      int scalar21 = 1;
      int scalar22 = 1;
      int scalar23 = 1;
      int scalar24 = 1;
      int scalar25 = 1;
      if(PATH0 & 1) {
         scalar21++;
         printf("DELETE!\n");
      }
      else {
         scalar25--;
         printf("DELETE!\n");
      }
      if(PATH0 & 2) {
      }
      else {
         int scalar26 = 1;
         scalar24++;
         if (scalar23 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar26 = 1;
      printf("DELETE!\n");
      int scalar27 = 1;
      scalar26++;
      func10(rng());
      if(PATH0 & 4) {
         scalar26++;
         printf("DELETE!\n");
      }
      else {
         scalar25--;
         printf("DELETE!\n");
      }
      int scalar28 = 1;
      int scalar29 = 1;
      int scalar30 = 1;
      int scalar31 = 1;
      scalar25++;
      func13(rng());
      if(PATH0 & 8) {
         scalar22++;
         printf("DELETE!\n");
      }
      else {
         scalar21--;
         printf("DELETE!\n");
      }
      int scalar32 = 1;
      int scalar33 = 1;
      if(PATH0 & 16) {
         scalar23++;
         printf("DELETE!\n");
      }
      else {
         scalar21--;
         printf("DELETE!\n");
      }
      if(PATH0 & 32) {
      }
      else {
         int scalar34 = 1;
         scalar24++;
         if (scalar31 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar34 = 1;
      printf("DELETE!\n");
      if(PATH0 & 64) {
         func15(rng());
         printf("DELETE!\n");
         int scalar35 = 1;
         scalar33++;
      }
      else {
         int scalar35 = 1;
         scalar35++;
         if (scalar35 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar35 = 1;
      printf("DELETE!\n");
      if(PATH0 & 128) {
         func12(rng());
         printf("DELETE!\n");
         int scalar36 = 1;
         scalar32++;
         int scalar37 = 1;
         int scalar38 = 1;
         scalar35++;
         func13(rng());
      }
      else {
         int scalar36 = 1;
         scalar36++;
         if (scalar29 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar36 = 1;
      printf("DELETE!\n");
   }
}

void func9(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func12(rng());
      printf("DELETE!\n");
      int scalar49 = 1;
      scalar49++;
      int scalar50 = 1;
      int scalar51 = 1;
      scalar51++;
      func13(rng());
   }
   else {
      int scalar49 = 1;
      func15(rng());
      printf("DELETE!\n");
      int scalar50 = 1;
      scalar49++;
      int loop11 = 0;
      int loopLimit11 = (rand()%10)/2 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         if (scalar50 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 2) {
            scalar50++;
         }
         else {
            int scalar51 = 1;
            int scalar52 = 1;
            scalar50++;
            func13(rng());
            scalar50--;
         }
      }
      int loop12 = 0;
      int loopLimit12 = (rand()%10)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
         func15(rng());
         printf("DELETE!\n");
         int scalar51 = 1;
         scalar51++;
      }
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func9(rng());
      printf("DELETE!\n");
      int scalar50 = 1;
      scalar50++;
      int scalar51 = 1;
      int scalar52 = 1;
      int scalar53 = 1;
      if(PATH0 & 2) {
         scalar51++;
         printf("DELETE!\n");
      }
      else {
         scalar52--;
         printf("DELETE!\n");
      }
      if(PATH0 & 4) {
      }
      else {
         int scalar54 = 1;
         scalar53++;
         if (scalar54 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar54 = 1;
      printf("DELETE!\n");
      int scalar55 = 1;
      scalar52++;
      func10(rng());
   }
   else {
      int scalar50 = 1;
      func12(rng());
      printf("DELETE!\n");
      int scalar51 = 1;
      scalar50++;
      int scalar52 = 1;
      int scalar53 = 1;
      scalar53++;
      func13(rng());
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if (scalar50 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 8) {
            scalar51++;
         }
         else {
            int scalar54 = 1;
            int scalar55 = 1;
            int scalar56 = 1;
            if(PATH0 & 16) {
               scalar53++;
               printf("DELETE!\n");
            }
            else {
               scalar54--;
               printf("DELETE!\n");
            }
            if(PATH0 & 32) {
            }
            else {
               int scalar57 = 1;
               scalar56++;
               if (scalar50 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
            }
            int scalar57 = 1;
            printf("DELETE!\n");
            int scalar58 = 1;
            scalar57++;
            func10(rng());
            scalar52--;
         }
      }
      int loop14 = 0;
      int loopLimit14 = (rand()%10)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         func12(rng());
         printf("DELETE!\n");
         int scalar54 = 1;
         scalar50++;
         int scalar55 = 1;
         int scalar56 = 1;
         scalar52++;
         func13(rng());
      }
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func6(rng());
      printf("DELETE!\n");
      int scalar63 = 1;
      scalar63++;
      int scalar64 = 1;
      int scalar65 = 1;
      int scalar66 = 1;
      int scalar67 = 1;
      int scalar68 = 1;
      scalar65++;
      func13(rng());
      if(PATH0 & 2) {
         scalar66++;
         printf("DELETE!\n");
      }
      else {
         scalar63--;
         printf("DELETE!\n");
      }
      int scalar69 = 1;
      int scalar70 = 1;
      if(PATH0 & 4) {
         scalar70++;
         printf("DELETE!\n");
      }
      else {
         scalar65--;
         printf("DELETE!\n");
      }
      if(PATH0 & 8) {
      }
      else {
         int scalar71 = 1;
         scalar68++;
         if (scalar64 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar71 = 1;
      printf("DELETE!\n");
      if(PATH0 & 16) {
         func15(rng());
         printf("DELETE!\n");
         int scalar72 = 1;
         scalar68++;
      }
      else {
         int scalar72 = 1;
         scalar67++;
         if (scalar63 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar72 = 1;
      printf("DELETE!\n");
      int scalar73 = 1;
      scalar65++;
      func7(rng());
   }
   else {
      int scalar63 = 1;
      func9(rng());
      printf("DELETE!\n");
      int scalar64 = 1;
      scalar64++;
      int scalar65 = 1;
      int scalar66 = 1;
      int scalar67 = 1;
      if(PATH0 & 32) {
         scalar67++;
         printf("DELETE!\n");
      }
      else {
         scalar64--;
         printf("DELETE!\n");
      }
      if(PATH0 & 64) {
      }
      else {
         int scalar68 = 1;
         scalar66++;
         if (scalar65 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar68 = 1;
      printf("DELETE!\n");
      int scalar69 = 1;
      scalar67++;
      func10(rng());
      int loop17 = 0;
      int loopLimit17 = (rand()%10)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         if (scalar69 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 128) {
            scalar68++;
         }
         else {
            int scalar70 = 1;
            int scalar71 = 1;
            int scalar72 = 1;
            int scalar73 = 1;
            int scalar74 = 1;
            scalar66++;
            func13(rng());
            if(PATH0 & 256) {
               scalar66++;
               printf("DELETE!\n");
            }
            else {
               scalar67--;
               printf("DELETE!\n");
            }
            int scalar75 = 1;
            int scalar76 = 1;
            if(PATH0 & 512) {
               scalar67++;
               printf("DELETE!\n");
            }
            else {
               scalar72--;
               printf("DELETE!\n");
            }
            if(PATH0 & 1024) {
            }
            else {
               int scalar77 = 1;
               scalar65++;
               if (scalar66 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
            }
            int scalar77 = 1;
            printf("DELETE!\n");
            if(PATH0 & 2048) {
               func15(rng());
               printf("DELETE!\n");
               int scalar78 = 1;
               scalar66++;
            }
            else {
               int scalar78 = 1;
               scalar78++;
               if (scalar65 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
            }
            int scalar78 = 1;
            printf("DELETE!\n");
            int scalar79 = 1;
            scalar76++;
            func7(rng());
            scalar68--;
         }
      }
      int loop18 = 0;
      int loopLimit18 = (rand()%10)/2 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         func9(rng());
         printf("DELETE!\n");
         int scalar70 = 1;
         scalar69++;
         int scalar71 = 1;
         int scalar72 = 1;
         int scalar73 = 1;
         if(PATH0 & 4096) {
            scalar63++;
            printf("DELETE!\n");
         }
         else {
            scalar71--;
            printf("DELETE!\n");
         }
         if(PATH0 & 8192) {
         }
         else {
            int scalar74 = 1;
            scalar72++;
            if (scalar64 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar74 = 1;
         printf("DELETE!\n");
         int scalar75 = 1;
         scalar69++;
         func10(rng());
      }
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop19 = 0;
      int loopLimit19 = (rand()%10)/2 + 1;
      for(; loop19 < loopLimit19; loop19++) {
         int scalar113 = 1;
         if (scalar113 == 0) {
            printf("IS 0!");
         }
         int scalar114 = 1;
         int scalar115 = 1;
         int scalar116 = 1;
         int scalar117 = 1;
         int scalar118 = 1;
         int scalar119 = 1;
         if(PATH0 & 2) {
            scalar113++;
            printf("DELETE!\n");
         }
         else {
            scalar117--;
            printf("DELETE!\n");
         }
         if(PATH0 & 4) {
         }
         else {
            int scalar120 = 1;
            scalar114++;
            if (scalar117 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar120 = 1;
         printf("DELETE!\n");
         int scalar121 = 1;
         scalar117++;
         func10(rng());
         if(PATH0 & 8) {
            scalar120++;
            printf("DELETE!\n");
         }
         else {
            scalar121--;
            printf("DELETE!\n");
         }
         int scalar122 = 1;
         int scalar123 = 1;
         int scalar124 = 1;
         int scalar125 = 1;
         scalar116++;
         func13(rng());
         if(PATH0 & 16) {
            scalar117++;
            printf("DELETE!\n");
         }
         else {
            scalar124--;
            printf("DELETE!\n");
         }
         int scalar126 = 1;
         int scalar127 = 1;
         if(PATH0 & 32) {
            scalar117++;
            printf("DELETE!\n");
         }
         else {
            scalar114--;
            printf("DELETE!\n");
         }
         if(PATH0 & 64) {
         }
         else {
            int scalar128 = 1;
            scalar117++;
            if (scalar116 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar128 = 1;
         printf("DELETE!\n");
         if(PATH0 & 128) {
            func15(rng());
            printf("DELETE!\n");
            int scalar129 = 1;
            scalar120++;
         }
         else {
            int scalar129 = 1;
            scalar113++;
            if (scalar117 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar129 = 1;
         printf("DELETE!\n");
         if(PATH0 & 256) {
            func12(rng());
            printf("DELETE!\n");
            int scalar130 = 1;
            scalar121++;
            int scalar131 = 1;
            int scalar132 = 1;
            scalar117++;
            func13(rng());
         }
         else {
            int scalar130 = 1;
            scalar117++;
            if (scalar113 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar130 = 1;
         printf("DELETE!\n");
         int scalar131 = 1;
         scalar129++;
         func4(rng());
         printf("DELETE!\n");
      }
   }
   else {
      func3(rng());
   }
}

void func3(const unsigned long PATH0) {
   int loop20 = 0;
   int loopLimit20 = (rand()%10)/2 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      int scalar113 = 1;
      int scalar114 = 1;
      int scalar115 = 1;
      int scalar116 = 1;
      int scalar117 = 1;
      int scalar118 = 1;
      int scalar119 = 1;
      scalar115++;
      func13(rng());
      if(PATH0 & 1) {
         scalar113++;
         printf("DELETE!\n");
      }
      else {
         scalar118--;
         printf("DELETE!\n");
      }
      int scalar120 = 1;
      int scalar121 = 1;
      if(PATH0 & 2) {
         scalar120++;
         printf("DELETE!\n");
      }
      else {
         scalar119--;
         printf("DELETE!\n");
      }
      if(PATH0 & 4) {
      }
      else {
         int scalar122 = 1;
         scalar117++;
         if (scalar115 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar122 = 1;
      printf("DELETE!\n");
      if(PATH0 & 8) {
         func15(rng());
         printf("DELETE!\n");
         int scalar123 = 1;
         scalar113++;
      }
      else {
         int scalar123 = 1;
         scalar115++;
         if (scalar118 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar123 = 1;
      printf("DELETE!\n");
      int scalar124 = 1;
      scalar114++;
      func7(rng());
      if(PATH0 & 16) {
         scalar122++;
         printf("DELETE!\n");
      }
      else {
         scalar115--;
         printf("DELETE!\n");
      }
      int scalar125 = 1;
      int scalar126 = 1;
      int scalar127 = 1;
      int scalar128 = 1;
      int scalar129 = 1;
      if(PATH0 & 32) {
         scalar123++;
         printf("DELETE!\n");
      }
      else {
         scalar120--;
         printf("DELETE!\n");
      }
      if(PATH0 & 64) {
      }
      else {
         int scalar130 = 1;
         scalar115++;
         if (scalar115 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar130 = 1;
      printf("DELETE!\n");
      int scalar131 = 1;
      scalar122++;
      func10(rng());
      if(PATH0 & 128) {
         scalar113++;
         printf("DELETE!\n");
      }
      else {
         scalar121--;
         printf("DELETE!\n");
      }
      int scalar132 = 1;
      int scalar133 = 1;
      int scalar134 = 1;
      int scalar135 = 1;
      scalar126++;
      func13(rng());
      if(PATH0 & 256) {
         scalar133++;
         printf("DELETE!\n");
      }
      else {
         scalar132--;
         printf("DELETE!\n");
      }
      int scalar136 = 1;
      int scalar137 = 1;
      if(PATH0 & 512) {
         scalar119++;
         printf("DELETE!\n");
      }
      else {
         scalar132--;
         printf("DELETE!\n");
      }
      if(PATH0 & 1024) {
      }
      else {
         int scalar138 = 1;
         scalar125++;
         if (scalar137 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar138 = 1;
      printf("DELETE!\n");
      if(PATH0 & 2048) {
         func15(rng());
         printf("DELETE!\n");
         int scalar139 = 1;
         scalar123++;
      }
      else {
         int scalar139 = 1;
         scalar127++;
         if (scalar114 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar139 = 1;
      printf("DELETE!\n");
      if(PATH0 & 4096) {
         func12(rng());
         printf("DELETE!\n");
         int scalar140 = 1;
         scalar136++;
         int scalar141 = 1;
         int scalar142 = 1;
         scalar142++;
         func13(rng());
      }
      else {
         int scalar140 = 1;
         scalar114++;
         if (scalar121 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar140 = 1;
      printf("DELETE!\n");
      if(PATH0 & 8192) {
         func9(rng());
         printf("DELETE!\n");
         int scalar141 = 1;
         scalar134++;
         int scalar142 = 1;
         int scalar143 = 1;
         int scalar144 = 1;
         if(PATH0 & 16384) {
            scalar136++;
            printf("DELETE!\n");
         }
         else {
            scalar117--;
            printf("DELETE!\n");
         }
         if(PATH0 & 32768) {
         }
         else {
            int scalar145 = 1;
            scalar135++;
            if (scalar145 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar145 = 1;
         printf("DELETE!\n");
         int scalar146 = 1;
         scalar127++;
         func10(rng());
      }
      else {
         int scalar141 = 1;
         scalar120++;
         if (scalar137 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar141 = 1;
      printf("DELETE!\n");
   }
}

