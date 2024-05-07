#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4(const unsigned long PATH0);

int main() {
   int* array0 = new int[383];
   int* array1 = new int[886];
   if(rng() & 1) {
      for (int i = 0; i < 886; i++) {
         array1[i]++; 
      }
      printf("DELETE!\n");
   }
   else {
      for (int i = 0; i < 886; i++) {
         array1[i]--; 
      }
      printf("DELETE!\n");
   }
   printf("DELETE!\n");
   for(int loop0 = 0; loop0 < 3; loop0++) {
      int* array2 = new int[793];
      for (int i = 0; i < 886; i++) {
         array1[i]++; 
      }
      func0(rng());
      int* array3 = new int[421];
      for(int loop9 = 0; loop9 < 3; loop9++) {
         int* array4 = new int[919];
         int* array5 = new int[784];
         if(rng() & 1) {
            for (int i = 0; i < 886; i++) {
               array1[i]++; 
            }
            printf("DELETE!\n");
         }
         else {
            for (int i = 0; i < 793; i++) {
               array2[i]--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         int* array6 = new int[324];
         printf("DELETE!\n");
         int* array7 = new int[315];
         for (int i = 0; i < 793; i++) {
            array2[i]++; 
         }
         int* array8 = new int[413];
         func5(rng());
         for(int loop10 = 0; loop10 < 3; loop10++) {
            for (int i = 0; i < 886; i++) {
               if (array1[i] == 0) { 
                  printf("IS 0!");
               }
            }
            if(rng() & 1) {
               for (int i = 0; i < 886; i++) {
                  array1[i]++; 
               }
            }
            else {
               for (int i = 0; i < 413; i++) {
                  array8[i]--; 
               }
            }
         }
         printf("DELETE!\n");
         int* array9 = new int[956];
         for (int i = 0; i < 421; i++) {
            array3[i]++; 
         }
         int* array10 = new int[862];
         func5(rng());
      }
      for (int i = 0; i < 793; i++) {
         if (array2[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 383; i++) {
         array0[i]--; 
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

void func0(const unsigned long PATH0) {
   int* array3 = new int[386];
   printf("DELETE!\n");
   int* array4 = new int[492];
   for (int i = 0; i < 492; i++) {
      array4[i]++; 
   }
   int* array5 = new int[421];
   func5(rng());
   for(int loop3 = 0; loop3 < 3; loop3++) {
      for (int i = 0; i < 386; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      if(PATH0 & 1) {
         for (int i = 0; i < 386; i++) {
            array3[i]++; 
         }
      }
      else {
         for (int i = 0; i < 492; i++) {
            array4[i]--; 
         }
      }
   }
   printf("DELETE!\n");
   int* array6 = new int[736];
   for (int i = 0; i < 736; i++) {
      array6[i]++; 
   }
   int* array7 = new int[368];
   func5(rng());
   if(PATH0 & 2) {
      int* array8 = new int[567];
      func1(rng());
   }
   else {
      for(int loop6 = 0; loop6 < 3; loop6++) {
         int* array8 = new int[135];
         int* array9 = new int[929];
         if(PATH0 & 4) {
            for (int i = 0; i < 386; i++) {
               array3[i]++; 
            }
            printf("DELETE!\n");
         }
         else {
            for (int i = 0; i < 736; i++) {
               array6[i]--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         int* array10 = new int[58];
         for (int i = 0; i < 135; i++) {
            array8[i]++; 
         }
         int* array11 = new int[167];
         func3(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop1 = 0; loop1 < 3; loop1++) {
         int* array6 = new int[362];
         for (int i = 0; i < 362; i++) {
            if (array6[i] == 0) { 
               printf("IS 0!");
            }
         }
         printf("DELETE!\n");
      }
   }
   else {
      func6(rng());
   }
}

void func6(const unsigned long PATH0) {
   for(int loop2 = 0; loop2 < 3; loop2++) {
      int* array6 = new int[690];
      int* array7 = new int[59];
      if(PATH0 & 1) {
         for (int i = 0; i < 59; i++) {
            array7[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 690; i++) {
            array6[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop4 = 0; loop4 < 3; loop4++) {
         int* array9 = new int[429];
         for (int i = 0; i < 429; i++) {
            if (array9[i] == 0) { 
               printf("IS 0!");
            }
         }
         printf("DELETE!\n");
      }
   }
   else {
      func2(rng());
   }
}

void func2(const unsigned long PATH0) {
   for(int loop5 = 0; loop5 < 3; loop5++) {
      int* array9 = new int[530];
      int* array10 = new int[862];
      if(PATH0 & 1) {
         for (int i = 0; i < 862; i++) {
            array10[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 862; i++) {
            array10[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop7 = 0; loop7 < 3; loop7++) {
         int* array12 = new int[393];
         for (int i = 0; i < 393; i++) {
            if (array12[i] == 0) { 
               printf("IS 0!");
            }
         }
         printf("DELETE!\n");
      }
   }
   else {
      func4(rng());
   }
}

void func4(const unsigned long PATH0) {
   for(int loop8 = 0; loop8 < 3; loop8++) {
      int* array12 = new int[11];
      int* array13 = new int[42];
      if(PATH0 & 1) {
         for (int i = 0; i < 42; i++) {
            array13[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 42; i++) {
            array13[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

