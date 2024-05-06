#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


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
         std::vector<int> vector0 = std::vector<int>();
         std::vector<int> vector1 = std::vector<int>();
         std::vector<int> vector2 = std::vector<int>();
         if(rng() & 1) {
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
            printf("DELETE!\n");
         }
         else {
            vector1.pop_back();
            for (auto&& i : vector1) {
               i--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         for (auto&& i : vector0) {
            if (i == 0) {
               printf("IS 0!");
            }
         }
      }
      else {
         for(int scalar0 = 0; scalar0 < 10; scalar0++) {
            std::vector<int> vector1 = std::vector<int>();
            func1(rng());
            printf("DELETE!\n");
            std::vector<int> vector2 = std::vector<int>();
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
            std::vector<int> vector3 = std::vector<int>();
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
         std::vector<int> vector3 = std::vector<int>();
         for (auto&& i : vector3) {
            if (i == 0) {
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
      std::vector<int> vector3 = std::vector<int>();
      std::vector<int> vector4 = std::vector<int>();
      if(PATH0 & 1) {
         vector4.push_back(0);
         for (auto&& i : vector4) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (auto&& i : vector3) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         std::vector<int> vector5 = std::vector<int>();
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
      std::vector<int> vector5 = std::vector<int>();
      std::vector<int> vector6 = std::vector<int>();
      if(PATH0 & 1) {
         scalar4++;
         printf("DELETE!\n");
      }
      else {
         for (auto&& i : vector5) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      std::vector<int> vector1 = std::vector<int>();
      printf("DELETE!\n");
      std::vector<int> vector2 = std::vector<int>();
      vector2.push_back(0);
      for (auto&& i : vector2) { 
         i++; 
      }
      std::vector<int> vector3 = std::vector<int>();
      func5(rng());
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         for (auto&& i : vector3) {
            if (i == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & 1) {
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
         }
         else {
            scalar0--;
         }
      }
      printf("DELETE!\n");
      std::vector<int> vector4 = std::vector<int>();
      vector1.push_back(0);
      for (auto&& i : vector1) { 
         i++; 
      }
      std::vector<int> vector5 = std::vector<int>();
      func5(rng());
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         std::vector<int> vector5 = std::vector<int>();
         for (auto&& i : vector5) {
            if (i == 0) {
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
      std::vector<int> vector5 = std::vector<int>();
      std::vector<int> vector6 = std::vector<int>();
      if(PATH0 & 1) {
         vector6.push_back(0);
         for (auto&& i : vector6) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (auto&& i : vector5) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

