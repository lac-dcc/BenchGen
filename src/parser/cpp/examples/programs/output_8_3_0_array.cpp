#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);

int main() {
   int* array0 = new int[383];
   int* array1 = new int[886];
   int* array2 = new int[777];
   int* array3 = new int[915];
   func0(rng());
   printf("DELETE!\n");
   int* array4 = new int[362];
   for (int i = 0; i < 777; i++) {
      array2[i]++; 
   }
   int* array5 = new int[690];
   func2(rng());
   int* array6 = new int[736];
   printf("DELETE!\n");
   int* array7 = new int[211];
   for (int i = 0; i < 383; i++) {
      array0[i]++; 
   }
   int* array8 = new int[567];
   func4(rng());
   for(int loop6 = 0; loop6 < 3; loop6++) {
      for (int i = 0; i < 886; i++) {
         if (array1[i] == 0) { 
            printf("IS 0!");
         }
      }
      if(rng() & 1) {
         for (int i = 0; i < 690; i++) {
            array5[i]++; 
         }
      }
      else {
         for (int i = 0; i < 383; i++) {
            array0[i]--; 
         }
      }
   }
   printf("DELETE!\n");
   int* array9 = new int[22];
   for (int i = 0; i < 567; i++) {
      array8[i]++; 
   }
   int* array10 = new int[69];
   func4(rng());
   int* array11 = new int[167];
   int* array12 = new int[393];
   if(rng() & 1) {
      for (int i = 0; i < 690; i++) {
         array5[i]++; 
      }
      printf("DELETE!\n");
   }
   else {
      for (int i = 0; i < 22; i++) {
         array9[i]--; 
      }
      printf("DELETE!\n");
   }
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop0 = 0; loop0 < 3; loop0++) {
         int* array4 = new int[793];
         for (int i = 0; i < 793; i++) {
            if (array4[i] == 0) { 
               printf("IS 0!");
            }
         }
         printf("DELETE!\n");
      }
   }
   else {
      func1(rng());
   }
}

void func1(const unsigned long PATH0) {
   for(int loop1 = 0; loop1 < 3; loop1++) {
      int* array4 = new int[386];
      int* array5 = new int[492];
      if(PATH0 & 1) {
         for (int i = 0; i < 492; i++) {
            array5[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 492; i++) {
            array5[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop2 = 0; loop2 < 3; loop2++) {
         int* array6 = new int[59];
         for (int i = 0; i < 59; i++) {
            if (array6[i] == 0) { 
               printf("IS 0!");
            }
         }
         printf("DELETE!\n");
      }
   }
   else {
      func3(rng());
   }
}

void func3(const unsigned long PATH0) {
   for(int loop3 = 0; loop3 < 3; loop3++) {
      int* array6 = new int[926];
      int* array7 = new int[540];
      if(PATH0 & 1) {
         for (int i = 0; i < 926; i++) {
            array6[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 926; i++) {
            array6[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
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
      func5(rng());
   }
}

void func5(const unsigned long PATH0) {
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

