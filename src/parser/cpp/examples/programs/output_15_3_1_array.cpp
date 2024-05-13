#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


unsigned long rng();
void func0();
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func1();
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);

int main() {
   int loop0 = 0;
   int loopLimit0 = ceil((rand()%10)/1);
   for(; loop0 < loopLimit0; loop0++) {
      if(rng() & 1) {
         func0();
      }
      else {
         func1();
      }
   }
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func0() {
   int* array0 = new int[383];
   func2(rng());
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = ceil((rand()%10)/2);
      for(; loop1 < loopLimit1; loop1++) {
         int* array1 = new int[886];
         for (int i = 0; i < 886; i++) {
            if (array1[i] == 0) { 
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
   int loop2 = 0;
   int loopLimit2 = ceil((rand()%10)/2);
   for(; loop2 < loopLimit2; loop2++) {
      int* array1 = new int[915];
      int* array2 = new int[793];
      if(PATH0 & 1) {
         for (int i = 0; i < 793; i++) {
            array2[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 915; i++) {
            array1[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func1() {
   printf("DELETE!\n");
   int* array0 = new int[492];
   for (int i = 0; i < 492; i++) {
      array0[i]++; 
   }
   int* array1 = new int[421];
   func4(rng());
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop3 = 0;
      int loopLimit3 = ceil((rand()%10)/2);
      for(; loop3 < loopLimit3; loop3++) {
         int* array2 = new int[362];
         for (int i = 0; i < 362; i++) {
            if (array2[i] == 0) { 
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
   int loop4 = 0;
   int loopLimit4 = ceil((rand()%10)/2);
   for(; loop4 < loopLimit4; loop4++) {
      int* array2 = new int[690];
      int* array3 = new int[59];
      if(PATH0 & 1) {
         for (int i = 0; i < 59; i++) {
            array3[i]++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (int i = 0; i < 690; i++) {
            array2[i]--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

