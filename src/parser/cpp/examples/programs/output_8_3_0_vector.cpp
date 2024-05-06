#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);

int main() {
   std::vector<int> vector0 = std::vector<int>();
   std::vector<int> vector1 = std::vector<int>();
   std::vector<int> vector2 = std::vector<int>();
   std::vector<int> vector3 = std::vector<int>();
   func0(rng());
   printf("DELETE!\n");
   std::vector<int> vector4 = std::vector<int>();
   vector0.push_back(0);
   for (auto&& i : vector0) { 
      i++; 
   }
   std::vector<int> vector5 = std::vector<int>();
   func2(rng());
   std::vector<int> vector6 = std::vector<int>();
   printf("DELETE!\n");
   std::vector<int> vector7 = std::vector<int>();
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   std::vector<int> vector8 = std::vector<int>();
   func4(rng());
   for(int scalar9 = 0; scalar9 < 10; scalar9++) {
      for (auto&& i : vector7) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if(rng() & 1) {
         vector0.push_back(0);
         for (auto&& i : vector0) { 
            i++; 
         }
      }
      else {
         scalar9--;
      }
   }
   printf("DELETE!\n");
   std::vector<int> vector9 = std::vector<int>();
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   std::vector<int> vector10 = std::vector<int>();
   func4(rng());
   std::vector<int> vector11 = std::vector<int>();
   std::vector<int> vector12 = std::vector<int>();
   if(rng() & 1) {
      vector1.push_back(0);
      for (auto&& i : vector1) { 
         i++; 
      }
      printf("DELETE!\n");
   }
   else {
      for (auto&& i : vector9) {
         i--; 
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
      func1(rng());
   }
}

void func1(const unsigned long PATH0) {
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      std::vector<int> vector5 = std::vector<int>();
      std::vector<int> vector6 = std::vector<int>();
      if(PATH0 & 1) {
         vector5.push_back(0);
         for (auto&& i : vector5) { 
            i++; 
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

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar6 = 0; scalar6 < 10; scalar6++) {
         std::vector<int> vector7 = std::vector<int>();
         for (auto&& i : vector7) {
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
   for(int scalar6 = 0; scalar6 < 10; scalar6++) {
      std::vector<int> vector7 = std::vector<int>();
      std::vector<int> vector8 = std::vector<int>();
      if(PATH0 & 1) {
         vector7.push_back(0);
         for (auto&& i : vector7) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         vector7.pop_back();
         for (auto&& i : vector7) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar9 = 0; scalar9 < 10; scalar9++) {
         std::vector<int> vector10 = std::vector<int>();
         for (auto&& i : vector10) {
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
   for(int scalar9 = 0; scalar9 < 10; scalar9++) {
      std::vector<int> vector10 = std::vector<int>();
      std::vector<int> vector11 = std::vector<int>();
      if(PATH0 & 1) {
         vector10.push_back(0);
         for (auto&& i : vector10) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (auto&& i : vector11) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

