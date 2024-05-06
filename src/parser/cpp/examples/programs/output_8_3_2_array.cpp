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
         for(int scalar0 = 0; scalar0 < 10; scalar0++) {
            int* array1 = new int[386];
            func1(rng());
            printf("DELETE!\n");
            int* array2 = new int[59];
            for (int i = 0; i < 59; i++) {
               array2[i]++; 
            }
            int* array3 = new int[926];
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
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         int* array3 = new int[492];
         for (int i = 0; i < 492; i++) {
            if (array3[i] == 0) { 
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
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      int* array3 = new int[421];
      int* array4 = new int[362];
      if(PATH0 & 1) {
         for (int i = 0; i < 421; i++) {
            array3[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 362; i++) {
            array4[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         int* array5 = new int[540];
         if (scalar4 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func4(rng());
   }
}

void func4(const unsigned long PATH0) {
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      int* array5 = new int[172];
      int* array6 = new int[736];
      if(PATH0 & 1) {
         for (int i = 0; i < 736; i++) {
            array6[i]++; 
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
   }
}

void func0(const unsigned long PATH0) {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      int* array1 = new int[567];
      printf("DELETE!\n");
      int* array2 = new int[429];
      for (int i = 0; i < 429; i++) {
         array2[i]++; 
      }
      int* array3 = new int[530];
      func5(rng());
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         for (int i = 0; i < 429; i++) {
            if (array2[i] == 0) { 
               printf("IS 0!");
            }
         }
         if(PATH0 & 1) {
            for (int i = 0; i < 530; i++) {
               array3[i]++; 
            }
         }
         else {
            scalar4--;
         }
      }
      printf("DELETE!\n");
      int* array4 = new int[167];
      for (int i = 0; i < 530; i++) {
         array3[i]++; 
      }
      int* array5 = new int[456];
      func5(rng());
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         int* array5 = new int[862];
         for (int i = 0; i < 862; i++) {
            if (array5[i] == 0) { 
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
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      int* array5 = new int[67];
      int* array6 = new int[135];
      if(PATH0 & 1) {
         for (int i = 0; i < 135; i++) {
            array6[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         scalar4--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

