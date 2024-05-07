#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long rng();
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);

int main() {
   if(rng() & 1) {
      if(rng() & 1) {
         int* array0 = new int[383];
         int* array1 = new int[886];
         int* array2 = new int[777];
         if(rng() & 1) {
            for (int i = 0; i < 886; i++) {
               array1[i]++; 
            }
            printf("DELETE!\n");
         }
         else {
            for (int i = 0; i < 777; i++) {
               array2[i]--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         for (int i = 0; i < 886; i++) {
            if (array1[i] == 0) { 
               printf("IS 0!");
            }
         }
      }
      else {
         for(int loop0 = 0; loop0 < 3; loop0++) {
            int* array0 = new int[386];
            func1(rng());
            printf("DELETE!\n");
            int* array1 = new int[59];
            for (int i = 0; i < 59; i++) {
               array1[i]++; 
            }
            int* array2 = new int[926];
            func3(rng());
         }
      }
   }
   else {
      func0(rng());
   }
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop1 = 0; loop1 < 3; loop1++) {
         int* array1 = new int[492];
         for (int i = 0; i < 492; i++) {
            if (array1[i] == 0) { 
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
   for(int loop2 = 0; loop2 < 3; loop2++) {
      int* array1 = new int[421];
      int* array2 = new int[362];
      if(PATH0 & 1) {
         for (int i = 0; i < 362; i++) {
            array2[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 421; i++) {
            array1[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop3 = 0; loop3 < 3; loop3++) {
         int* array3 = new int[540];
         for (int i = 0; i < 540; i++) {
            if (array3[i] == 0) { 
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
   for(int loop4 = 0; loop4 < 3; loop4++) {
      int* array3 = new int[172];
      int* array4 = new int[736];
      if(PATH0 & 1) {
         for (int i = 0; i < 736; i++) {
            array4[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 172; i++) {
            array3[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   for(int loop5 = 0; loop5 < 3; loop5++) {
      int* array0 = new int[567];
      printf("DELETE!\n");
      int* array1 = new int[429];
      for (int i = 0; i < 567; i++) {
         array0[i]++; 
      }
      int* array2 = new int[530];
      func5(rng());
      for(int loop8 = 0; loop8 < 3; loop8++) {
         for (int i = 0; i < 567; i++) {
            if (array0[i] == 0) { 
               printf("IS 0!");
            }
         }
         if(PATH0 & 1) {
            for (int i = 0; i < 567; i++) {
               array0[i]++; 
            }
         }
         else {
            for (int i = 0; i < 530; i++) {
               array2[i]--; 
            }
         }
      }
      printf("DELETE!\n");
      int* array3 = new int[167];
      for (int i = 0; i < 429; i++) {
         array1[i]++; 
      }
      int* array4 = new int[456];
      func5(rng());
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop6 = 0; loop6 < 3; loop6++) {
         int* array3 = new int[862];
         for (int i = 0; i < 862; i++) {
            if (array3[i] == 0) { 
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
   for(int loop7 = 0; loop7 < 3; loop7++) {
      int* array3 = new int[67];
      int* array4 = new int[135];
      if(PATH0 & 1) {
         for (int i = 0; i < 135; i++) {
            array4[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 67; i++) {
            array3[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

