#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


unsigned long rng();
void func0();
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func1();
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);

int main() {
   for(int loop0 = 0; loop0 < 3; loop0++) {
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
   std::vector<int> vector0 = std::vector<int>();
   func2(rng());
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop1 = 0; loop1 < 3; loop1++) {
         std::vector<int> vector1 = std::vector<int>();
         for (auto&& i : vector1) {
            if (i == 0) {
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
   for(int loop2 = 0; loop2 < 3; loop2++) {
      std::vector<int> vector1 = std::vector<int>();
      std::vector<int> vector2 = std::vector<int>();
      if(PATH0 & 1) {
         vector1.push_back(0);
         for (auto&& i : vector1) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (vector2.size() > 0) {
            vector2.pop_back();
         }
         for (auto&& i : vector2) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func1() {
   printf("DELETE!\n");
   std::vector<int> vector0 = std::vector<int>();
   vector0.push_back(0);
   for (auto&& i : vector0) { 
      i++; 
   }
   std::vector<int> vector1 = std::vector<int>();
   func4(rng());
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop3 = 0; loop3 < 3; loop3++) {
         std::vector<int> vector2 = std::vector<int>();
         for (auto&& i : vector2) {
            if (i == 0) {
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
   for(int loop4 = 0; loop4 < 3; loop4++) {
      std::vector<int> vector2 = std::vector<int>();
      std::vector<int> vector3 = std::vector<int>();
      if(PATH0 & 1) {
         vector3.push_back(0);
         for (auto&& i : vector3) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (vector2.size() > 0) {
            vector2.pop_back();
         }
         for (auto&& i : vector2) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

