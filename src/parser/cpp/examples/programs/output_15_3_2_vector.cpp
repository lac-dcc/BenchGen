#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
            if (vector1.size() > 0) {
               vector1.pop_back();
            }
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
         int loop0 = 0;
         int loopLimit0 = ceil((rand()%10)/1);
         for(; loop0 < loopLimit0; loop0++) {
            std::vector<int> vector0 = std::vector<int>();
            func1(rng());
            printf("DELETE!\n");
            std::vector<int> vector1 = std::vector<int>();
            vector0.push_back(0);
            for (auto&& i : vector0) { 
               i++; 
            }
            std::vector<int> vector2 = std::vector<int>();
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
      int loop1 = 0;
      int loopLimit1 = ceil((rand()%10)/2);
      for(; loop1 < loopLimit1; loop1++) {
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
      func2(rng());
   }
}

void func2(const unsigned long PATH0) {
   int loop2 = 0;
   int loopLimit2 = ceil((rand()%10)/2);
   for(; loop2 < loopLimit2; loop2++) {
      std::vector<int> vector1 = std::vector<int>();
      std::vector<int> vector2 = std::vector<int>();
      if(PATH0 & 1) {
         vector2.push_back(0);
         for (auto&& i : vector2) { 
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

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop3 = 0;
      int loopLimit3 = ceil((rand()%10)/2);
      for(; loop3 < loopLimit3; loop3++) {
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
      func4(rng());
   }
}

void func4(const unsigned long PATH0) {
   int loop4 = 0;
   int loopLimit4 = ceil((rand()%10)/2);
   for(; loop4 < loopLimit4; loop4++) {
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
         if (vector4.size() > 0) {
            vector4.pop_back();
         }
         for (auto&& i : vector4) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   int loop5 = 0;
   int loopLimit5 = ceil((rand()%10)/1);
   for(; loop5 < loopLimit5; loop5++) {
      std::vector<int> vector0 = std::vector<int>();
      printf("DELETE!\n");
      std::vector<int> vector1 = std::vector<int>();
      vector0.push_back(0);
      for (auto&& i : vector0) { 
         i++; 
      }
      std::vector<int> vector2 = std::vector<int>();
      func5(rng());
      int loop8 = 0;
      int loopLimit8 = ceil((rand()%10)/2);
      for(; loop8 < loopLimit8; loop8++) {
         for (auto&& i : vector2) {
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
            if (vector0.size() > 0) {
               vector0.pop_back();
            }
            for (auto&& i : vector0) {
               i--; 
            }
         }
      }
      int loop9 = 0;
      int loopLimit9 = ceil((rand()%10)/2);
      for(; loop9 < loopLimit9; loop9++) {
         printf("DELETE!\n");
         std::vector<int> vector3 = std::vector<int>();
         vector2.push_back(0);
         for (auto&& i : vector2) { 
            i++; 
         }
         std::vector<int> vector4 = std::vector<int>();
         func5(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop6 = 0;
      int loopLimit6 = ceil((rand()%10)/2);
      for(; loop6 < loopLimit6; loop6++) {
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
      func6(rng());
   }
}

void func6(const unsigned long PATH0) {
   int loop7 = 0;
   int loopLimit7 = ceil((rand()%10)/2);
   for(; loop7 < loopLimit7; loop7++) {
      std::vector<int> vector3 = std::vector<int>();
      std::vector<int> vector4 = std::vector<int>();
      if(PATH0 & 1) {
         vector3.push_back(0);
         for (auto&& i : vector3) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (vector4.size() > 0) {
            vector4.pop_back();
         }
         for (auto&& i : vector4) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

