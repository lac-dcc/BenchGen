#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func8();
void func5(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func1(const unsigned long PATH0);
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
      int scalar1 = 1;
      int scalar2 = 1;
      int scalar3 = 1;
      int scalar4 = 1;
      int scalar5 = 1;
      if(PATH0 & 1) {
         scalar4++;
         printf("DELETE!\n");
      }
      else {
         scalar2--;
         printf("DELETE!\n");
      }
      if(PATH0 & 2) {
      }
      else {
         int scalar6 = 1;
         scalar4++;
         if (scalar2 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar6 = 1;
      printf("DELETE!\n");
      int scalar7 = 1;
      scalar2++;
      func4(rng());
      if(PATH0 & 4) {
         scalar7++;
         printf("DELETE!\n");
      }
      else {
         scalar5--;
         printf("DELETE!\n");
      }
      int scalar8 = 1;
      int scalar9 = 1;
      int scalar10 = 1;
      int scalar11 = 1;
      scalar8++;
      func7(rng());
      if(PATH0 & 8) {
         scalar5++;
         printf("DELETE!\n");
      }
      else {
         scalar10--;
         printf("DELETE!\n");
      }
      int scalar12 = 1;
      int scalar13 = 1;
      if(PATH0 & 16) {
         scalar11++;
         printf("DELETE!\n");
      }
      else {
         scalar11--;
         printf("DELETE!\n");
      }
      if(PATH0 & 32) {
      }
      else {
         int scalar14 = 1;
         scalar3++;
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar14 = 1;
      printf("DELETE!\n");
      if(PATH0 & 64) {
         func9(rng());
         printf("DELETE!\n");
         int scalar15 = 1;
         scalar9++;
      }
      else {
         int scalar15 = 1;
         scalar13++;
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar15 = 1;
      printf("DELETE!\n");
      if(PATH0 & 128) {
         func6(rng());
         printf("DELETE!\n");
         int scalar16 = 1;
         scalar4++;
         int scalar17 = 1;
         int scalar18 = 1;
         scalar2++;
         func7(rng());
      }
      else {
         int scalar16 = 1;
         scalar10++;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar16 = 1;
      printf("DELETE!\n");
      int scalar17 = 1;
      func6(rng());
      printf("DELETE!\n");
      int scalar18 = 1;
      scalar1++;
      int scalar19 = 1;
      int scalar20 = 1;
      scalar19++;
      func7(rng());
      int loop7 = 0;
      int loopLimit7 = (rand()%10)/2 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 256) {
            scalar8++;
         }
         else {
            int scalar21 = 1;
            int scalar22 = 1;
            int scalar23 = 1;
            if(PATH0 & 512) {
               scalar23++;
               printf("DELETE!\n");
            }
            else {
               scalar10--;
               printf("DELETE!\n");
            }
            if(PATH0 & 1024) {
            }
            else {
               int scalar24 = 1;
               scalar20++;
               if (scalar11 == 0) {
                  printf("IS 0!");
               }
               printf("DELETE!\n");
            }
            int scalar24 = 1;
            printf("DELETE!\n");
            int scalar25 = 1;
            scalar5++;
            func4(rng());
            scalar24--;
         }
      }
      int loop8 = 0;
      int loopLimit8 = (rand()%10)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         func6(rng());
         printf("DELETE!\n");
         int scalar21 = 1;
         scalar13++;
         int scalar22 = 1;
         int scalar23 = 1;
         scalar11++;
         func7(rng());
      }
      func1(rng());
      printf("DELETE!\n");
      int scalar21 = 1;
      scalar8++;
      int scalar22 = 1;
      int scalar23 = 1;
      int scalar24 = 1;
      if(PATH0 & 2048) {
         scalar21++;
         printf("DELETE!\n");
      }
      else {
         scalar21--;
         printf("DELETE!\n");
      }
      if(PATH0 & 4096) {
      }
      else {
         int scalar25 = 1;
         scalar24++;
         if (scalar13 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar25 = 1;
      printf("DELETE!\n");
      int scalar26 = 1;
      scalar7++;
      func4(rng());
      int scalar27 = 1;
      int scalar28 = 1;
      int scalar29 = 1;
      int scalar30 = 1;
      int scalar31 = 1;
      scalar10++;
      func7(rng());
      if(PATH0 & 8192) {
         scalar2++;
         printf("DELETE!\n");
      }
      else {
         scalar31--;
         printf("DELETE!\n");
      }
      int scalar32 = 1;
      int scalar33 = 1;
      if(PATH0 & 16384) {
         scalar16++;
         printf("DELETE!\n");
      }
      else {
         scalar27--;
         printf("DELETE!\n");
      }
      if(PATH0 & 32768) {
      }
      else {
         int scalar34 = 1;
         scalar4++;
         if (scalar3 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar34 = 1;
      printf("DELETE!\n");
      if(PATH0 & 65536) {
         func9(rng());
         printf("DELETE!\n");
         int scalar35 = 1;
         scalar6++;
      }
      else {
         int scalar35 = 1;
         scalar27++;
         if (scalar5 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar35 = 1;
      printf("DELETE!\n");
      int scalar36 = 1;
      scalar14++;
      func2(rng());
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         int scalar8 = 1;
         if (scalar8 == 0) {
            printf("IS 0!");
         }
         int scalar9 = 1;
         int scalar10 = 1;
         scalar9++;
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
      int loop2 = 0;
      int loopLimit2 = (rand()%10)/3 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         int scalar11 = 1;
         if (scalar11 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func8();
   }
}

void func8() {
   int loop3 = 0;
   int loopLimit3 = (rand()%10)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
   }
}

void func5(const unsigned long PATH0) {
   int loop4 = 0;
   int loopLimit4 = (rand()%10)/2 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      int scalar8 = 1;
      int scalar9 = 1;
      if(PATH0 & 1) {
         scalar9++;
         printf("DELETE!\n");
      }
      else {
         scalar9--;
         printf("DELETE!\n");
      }
      if(PATH0 & 2) {
      }
      else {
         int scalar10 = 1;
         scalar10++;
         if (scalar9 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar10 = 1;
      printf("DELETE!\n");
   }
}

void func9(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func9(rng());
      printf("DELETE!\n");
      int scalar16 = 1;
      scalar16++;
   }
   else {
      int scalar16 = 1;
      int loop5 = 0;
      int loopLimit5 = (rand()%10)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         if (scalar16 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 2) {
            scalar16++;
         }
         else {
            scalar16--;
         }
      }
      int loop6 = 0;
      int loopLimit6 = (rand()%10)/2 + 1;
      for(; loop6 < loopLimit6; loop6++) {
      }
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func6(rng());
      printf("DELETE!\n");
      int scalar21 = 1;
      scalar21++;
      int scalar22 = 1;
      int scalar23 = 1;
      scalar22++;
      func7(rng());
   }
   else {
      int scalar21 = 1;
      func9(rng());
      printf("DELETE!\n");
      int scalar22 = 1;
      scalar21++;
      int loop9 = 0;
      int loopLimit9 = (rand()%10)/2 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         if (scalar21 == 0) {
            printf("IS 0!");
         }
         if(PATH0 & 2) {
            scalar22++;
         }
         else {
            int scalar23 = 1;
            int scalar24 = 1;
            scalar23++;
            func7(rng());
            scalar22--;
         }
      }
      int loop10 = 0;
      int loopLimit10 = (rand()%10)/2 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         func9(rng());
         printf("DELETE!\n");
         int scalar23 = 1;
         scalar22++;
      }
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop11 = 0;
      int loopLimit11 = (rand()%10)/2 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         int scalar37 = 1;
         if (scalar37 == 0) {
            printf("IS 0!");
         }
         int scalar38 = 1;
         int scalar39 = 1;
         int scalar40 = 1;
         if(PATH0 & 2) {
            scalar37++;
            printf("DELETE!\n");
         }
         else {
            scalar40--;
            printf("DELETE!\n");
         }
         if(PATH0 & 4) {
         }
         else {
            int scalar41 = 1;
            scalar39++;
            if (scalar37 == 0) {
               printf("IS 0!");
            }
            printf("DELETE!\n");
         }
         int scalar41 = 1;
         printf("DELETE!\n");
         int scalar42 = 1;
         scalar39++;
         func4(rng());
         printf("DELETE!\n");
      }
   }
   else {
      func3(rng());
   }
}

void func3(const unsigned long PATH0) {
   int loop12 = 0;
   int loopLimit12 = (rand()%10)/2 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      int scalar37 = 1;
      int scalar38 = 1;
      int scalar39 = 1;
      int scalar40 = 1;
      scalar40++;
      func7(rng());
      if(PATH0 & 1) {
         scalar39++;
         printf("DELETE!\n");
      }
      else {
         scalar37--;
         printf("DELETE!\n");
      }
      int scalar41 = 1;
      int scalar42 = 1;
      if(PATH0 & 2) {
         scalar40++;
         printf("DELETE!\n");
      }
      else {
         scalar39--;
         printf("DELETE!\n");
      }
      if(PATH0 & 4) {
      }
      else {
         int scalar43 = 1;
         scalar37++;
         if (scalar40 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar43 = 1;
      printf("DELETE!\n");
      if(PATH0 & 8) {
         func9(rng());
         printf("DELETE!\n");
         int scalar44 = 1;
         scalar41++;
      }
      else {
         int scalar44 = 1;
         scalar39++;
         if (scalar41 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
      int scalar44 = 1;
      printf("DELETE!\n");
   }
}

