#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
   int loop0 = 0;
   int loopLimit0 = ceil((rand()%10)/1);
   for(; loop0 < loopLimit0; loop0++) {
      int* array2 = new int[793];
      for (int i = 0; i < 886; i++) {
         array1[i]++; 
      }
      func0(rng());
      int* array3 = new int[421];
      int loop10 = 0;
      int loopLimit10 = ceil((rand()%10)/2);
      for(; loop10 < loopLimit10; loop10++) {
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
         int loop11 = 0;
         int loopLimit11 = ceil((rand()%10)/3);
         for(; loop11 < loopLimit11; loop11++) {
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
         int loop12 = 0;
         int loopLimit12 = ceil((rand()%10)/3);
         for(; loop12 < loopLimit12; loop12++) {
            printf("DELETE!\n");
            int* array9 = new int[956];
            for (int i = 0; i < 421; i++) {
               array3[i]++; 
            }
            int* array10 = new int[862];
            func5(rng());
         }
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
   int loop3 = 0;
   int loopLimit3 = ceil((rand()%10)/2);
   for(; loop3 < loopLimit3; loop3++) {
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
   int loop4 = 0;
   int loopLimit4 = ceil((rand()%10)/2);
   for(; loop4 < loopLimit4; loop4++) {
      printf("DELETE!\n");
      int* array6 = new int[736];
      for (int i = 0; i < 736; i++) {
         array6[i]++; 
      }
      int* array7 = new int[368];
      func5(rng());
   }
   if(PATH0 & 2) {
      int* array6 = new int[567];
      func1(rng());
   }
   else {
      int loop7 = 0;
      int loopLimit7 = ceil((rand()%10)/2);
      for(; loop7 < loopLimit7; loop7++) {
         int* array6 = new int[135];
         int* array7 = new int[929];
         if(PATH0 & 4) {
            for (int i = 0; i < 421; i++) {
               array5[i]++; 
            }
            printf("DELETE!\n");
         }
         else {
            for (int i = 0; i < 421; i++) {
               array5[i]--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         int* array8 = new int[58];
         for (int i = 0; i < 58; i++) {
            array8[i]++; 
         }
         int* array9 = new int[167];
         func3(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = ceil((rand()%10)/2);
      for(; loop1 < loopLimit1; loop1++) {
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
   int loop2 = 0;
   int loopLimit2 = ceil((rand()%10)/2);
   for(; loop2 < loopLimit2; loop2++) {
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
      int loop5 = 0;
      int loopLimit5 = ceil((rand()%10)/2);
      for(; loop5 < loopLimit5; loop5++) {
         int* array7 = new int[429];
         for (int i = 0; i < 429; i++) {
            if (array7[i] == 0) { 
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
   int loop6 = 0;
   int loopLimit6 = ceil((rand()%10)/2);
   for(; loop6 < loopLimit6; loop6++) {
      int* array7 = new int[530];
      int* array8 = new int[862];
      if(PATH0 & 1) {
         for (int i = 0; i < 862; i++) {
            array8[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 862; i++) {
            array8[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop8 = 0;
      int loopLimit8 = ceil((rand()%10)/3);
      for(; loop8 < loopLimit8; loop8++) {
         int* array10 = new int[393];
         for (int i = 0; i < 393; i++) {
            if (array10[i] == 0) { 
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
   int loop9 = 0;
   int loopLimit9 = ceil((rand()%10)/3);
   for(; loop9 < loopLimit9; loop9++) {
      int* array10 = new int[11];
      int* array11 = new int[42];
      if(PATH0 & 1) {
         for (int i = 0; i < 42; i++) {
            array11[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 42; i++) {
            array11[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

