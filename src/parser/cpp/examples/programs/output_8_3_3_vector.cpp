#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


unsigned long rng();
void func0(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4(const unsigned long PATH0);

int main() {
   std::vector<int> vector0 = std::vector<int>();
   std::vector<int> vector1 = std::vector<int>();
   if(rng() & 1) {
      vector1.push_back(0);
      for (auto&& i : vector1) { 
         i++; 
      }
      printf("DELETE!\n");
   }
   else {
      for (auto&& i : vector0) {
         i--; 
      }
      printf("DELETE!\n");
   }
   printf("DELETE!\n");
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      std::vector<int> vector3 = std::vector<int>();
      vector1.push_back(0);
      for (auto&& i : vector1) { 
         i++; 
      }
      func0(rng());
      std::vector<int> vector4 = std::vector<int>();
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         std::vector<int> vector6 = std::vector<int>();
         std::vector<int> vector7 = std::vector<int>();
         if(rng() & 1) {
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            printf("DELETE!\n");
         }
         else {
            for (auto&& i : vector0) {
               i--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         std::vector<int> vector8 = std::vector<int>();
         printf("DELETE!\n");
         std::vector<int> vector9 = std::vector<int>();
         vector7.push_back(0);
         for (auto&& i : vector7) { 
            i++; 
         }
         std::vector<int> vector10 = std::vector<int>();
         func5(rng());
         for(int scalar11 = 0; scalar11 < 10; scalar11++) {
            for (auto&& i : vector9) {
               if (i == 0) {
                  printf("IS 0!");
               }
            }
            if(rng() & 1) {
               scalar2++;
            }
            else {
               scalar2--;
            }
         }
         printf("DELETE!\n");
         std::vector<int> vector11 = std::vector<int>();
         scalar2++;
         std::vector<int> vector12 = std::vector<int>();
         func5(rng());
      }
      for (auto&& i : vector3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      scalar2--;
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
   std::vector<int> vector4 = std::vector<int>();
   printf("DELETE!\n");
   std::vector<int> vector5 = std::vector<int>();
   vector5.push_back(0);
   for (auto&& i : vector5) { 
      i++; 
   }
   std::vector<int> vector6 = std::vector<int>();
   func5(rng());
   for(int scalar7 = 0; scalar7 < 10; scalar7++) {
      for (auto&& i : vector4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 1) {
         vector5.push_back(0);
         for (auto&& i : vector5) { 
            i++; 
         }
      }
      else {
         vector5.pop_back();
         for (auto&& i : vector5) {
            i--; 
         }
      }
   }
   printf("DELETE!\n");
   std::vector<int> vector7 = std::vector<int>();
   vector6.push_back(0);
   for (auto&& i : vector6) { 
      i++; 
   }
   std::vector<int> vector8 = std::vector<int>();
   func5(rng());
   if(PATH0 & 2) {
      std::vector<int> vector9 = std::vector<int>();
      func1(rng());
   }
   else {
      for(int scalar9 = 0; scalar9 < 10; scalar9++) {
         std::vector<int> vector10 = std::vector<int>();
         std::vector<int> vector11 = std::vector<int>();
         if(PATH0 & 4) {
            vector7.push_back(0);
            for (auto&& i : vector7) { 
               i++; 
            }
            printf("DELETE!\n");
         }
         else {
            for (auto&& i : vector10) {
               i--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         std::vector<int> vector12 = std::vector<int>();
         vector10.push_back(0);
         for (auto&& i : vector10) { 
            i++; 
         }
         std::vector<int> vector13 = std::vector<int>();
         func3(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar7 = 0; scalar7 < 10; scalar7++) {
         std::vector<int> vector8 = std::vector<int>();
         for (auto&& i : vector8) {
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
   for(int scalar7 = 0; scalar7 < 10; scalar7++) {
      std::vector<int> vector8 = std::vector<int>();
      std::vector<int> vector9 = std::vector<int>();
      if(PATH0 & 1) {
         vector8.push_back(0);
         for (auto&& i : vector8) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         vector8.pop_back();
         for (auto&& i : vector8) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar10 = 0; scalar10 < 10; scalar10++) {
         std::vector<int> vector11 = std::vector<int>();
         for (auto&& i : vector11) {
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
   for(int scalar10 = 0; scalar10 < 10; scalar10++) {
      std::vector<int> vector11 = std::vector<int>();
      std::vector<int> vector12 = std::vector<int>();
      if(PATH0 & 1) {
         vector12.push_back(0);
         for (auto&& i : vector12) { 
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

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar14 = 0; scalar14 < 10; scalar14++) {
         std::vector<int> vector15 = std::vector<int>();
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
      std::vector<int> vector15 = std::vector<int>();
      std::vector<int> vector16 = std::vector<int>();
      if(PATH0 & 1) {
         vector15.push_back(0);
         for (auto&& i : vector15) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         vector15.pop_back();
         for (auto&& i : vector15) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

