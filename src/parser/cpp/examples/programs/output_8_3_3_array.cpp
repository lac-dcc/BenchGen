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
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      int* array3 = new int[793];
      for (int i = 0; i < 793; i++) {
         array3[i]++; 
      }
      func0(rng());
      int* array4 = new int[421];
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         int* array6 = new int[919];
         int* array7 = new int[784];
         if(rng() & 1) {
            for (int i = 0; i < 886; i++) {
               array1[i]++; 
            }
            printf("DELETE!\n");
         }
         else {
            for (int i = 0; i < 919; i++) {
               array6[i]--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         int* array8 = new int[324];
         printf("DELETE!\n");
         int* array9 = new int[315];
         for (int i = 0; i < 383; i++) {
            array0[i]++; 
         }
         int* array10 = new int[413];
         func5(rng());
         for(int scalar11 = 0; scalar11 < 10; scalar11++) {
            for (int i = 0; i < 413; i++) {
               if (array10[i] == 0) { 
                  printf("IS 0!");
               }
            }
            if(rng() & 1) {
               for (int i = 0; i < 784; i++) {
                  array7[i]++; 
               }
            }
            else {
               for (int i = 0; i < 324; i++) {
                  array8[i]--; 
               }
            }
         }
         printf("DELETE!\n");
         int* array11 = new int[956];
         for (int i = 0; i < 315; i++) {
            array9[i]++; 
         }
         int* array12 = new int[862];
         func5(rng());
      }
      for (int i = 0; i < 383; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 886; i++) {
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

void func0(const unsigned long PATH0) {
   int* array4 = new int[386];
   printf("DELETE!\n");
   int* array5 = new int[492];
   for (int i = 0; i < 492; i++) {
      array5[i]++; 
   }
   int* array6 = new int[421];
   func5(rng());
   for(int scalar7 = 0; scalar7 < 10; scalar7++) {
      for (int i = 0; i < 386; i++) {
         if (array4[i] == 0) { 
            printf("IS 0!");
         }
      }
      if(PATH0 & 1) {
         for (int i = 0; i < 421; i++) {
            array6[i]++; 
         }
      }
      else {
         for (int i = 0; i < 386; i++) {
            array4[i]--; 
         }
      }
   }
   printf("DELETE!\n");
   int* array7 = new int[736];
   for (int i = 0; i < 736; i++) {
      array7[i]++; 
   }
   int* array8 = new int[368];
   func5(rng());
   if(PATH0 & 2) {
      int* array9 = new int[567];
      func1(rng());
   }
   else {
      for(int scalar9 = 0; scalar9 < 10; scalar9++) {
         int* array10 = new int[135];
         int* array11 = new int[929];
         if(PATH0 & 4) {
            for (int i = 0; i < 421; i++) {
               array6[i]++; 
            }
            printf("DELETE!\n");
         }
         else {
            for (int i = 0; i < 135; i++) {
               array10[i]--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         int* array12 = new int[58];
         scalar9++;
         int* array13 = new int[167];
         func3(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar7 = 0; scalar7 < 10; scalar7++) {
         int* array8 = new int[362];
         for (int i = 0; i < 362; i++) {
            if (array8[i] == 0) { 
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
   for(int scalar7 = 0; scalar7 < 10; scalar7++) {
      int* array8 = new int[690];
      int* array9 = new int[59];
      if(PATH0 & 1) {
         for (int i = 0; i < 59; i++) {
            array9[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 690; i++) {
            array8[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar10 = 0; scalar10 < 10; scalar10++) {
         int* array11 = new int[429];
         if (scalar10 == 0) {
            printf("IS 0!");
         }
         printf("DELETE!\n");
      }
   }
   else {
      func2(rng());
   }
}

void func2(const unsigned long PATH0) {
   for(int scalar10 = 0; scalar10 < 10; scalar10++) {
      int* array11 = new int[530];
      int* array12 = new int[862];
      if(PATH0 & 1) {
         for (int i = 0; i < 530; i++) {
            array11[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 530; i++) {
            array11[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar14 = 0; scalar14 < 10; scalar14++) {
         int* array15 = new int[393];
         if (scalar14 == 0) {
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
   for(int scalar14 = 0; scalar14 < 10; scalar14++) {
      int* array15 = new int[11];
      int* array16 = new int[42];
      if(PATH0 & 1) {
         scalar14++;
         printf("DELETE!\n");
      }
      else {
         scalar14--;
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

