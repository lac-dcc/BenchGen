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
      if (vector0.size() > 0) {
         vector0.pop_back();
      }
      for (auto&& i : vector0) {
         i--; 
      }
      printf("DELETE!\n");
   }
   printf("DELETE!\n");
   for(int loop0 = 0; loop0 < 3; loop0++) {
      std::vector<int> vector2 = std::vector<int>();
      vector0.push_back(0);
      for (auto&& i : vector0) { 
         i++; 
      }
      func0(rng());
      std::vector<int> vector3 = std::vector<int>();
      for(int loop9 = 0; loop9 < 3; loop9++) {
         std::vector<int> vector4 = std::vector<int>();
         std::vector<int> vector5 = std::vector<int>();
         if(rng() & 1) {
            vector5.push_back(0);
            for (auto&& i : vector5) { 
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
         std::vector<int> vector6 = std::vector<int>();
         printf("DELETE!\n");
         std::vector<int> vector7 = std::vector<int>();
         vector7.push_back(0);
         for (auto&& i : vector7) { 
            i++; 
         }
         std::vector<int> vector8 = std::vector<int>();
         func5(rng());
         for(int loop10 = 0; loop10 < 3; loop10++) {
            for (auto&& i : vector6) {
               if (i == 0) {
                  printf("IS 0!");
               }
            }
            if(rng() & 1) {
               vector8.push_back(0);
               for (auto&& i : vector8) { 
                  i++; 
               }
            }
            else {
               if (vector8.size() > 0) {
                  vector8.pop_back();
               }
               for (auto&& i : vector8) {
                  i--; 
               }
            }
         }
         printf("DELETE!\n");
         std::vector<int> vector9 = std::vector<int>();
         vector2.push_back(0);
         for (auto&& i : vector2) { 
            i++; 
         }
         std::vector<int> vector10 = std::vector<int>();
         func5(rng());
      }
      for (auto&& i : vector3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (vector3.size() > 0) {
         vector3.pop_back();
      }
      for (auto&& i : vector3) {
         i--; 
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
   std::vector<int> vector3 = std::vector<int>();
   printf("DELETE!\n");
   std::vector<int> vector4 = std::vector<int>();
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   std::vector<int> vector5 = std::vector<int>();
   func5(rng());
   for(int loop3 = 0; loop3 < 3; loop3++) {
      for (auto&& i : vector3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 1) {
         vector3.push_back(0);
         for (auto&& i : vector3) { 
            i++; 
         }
      }
      else {
         if (vector4.size() > 0) {
            vector4.pop_back();
         }
         for (auto&& i : vector4) {
            i--; 
         }
      }
   }
   printf("DELETE!\n");
   std::vector<int> vector6 = std::vector<int>();
   vector5.push_back(0);
   for (auto&& i : vector5) { 
      i++; 
   }
   std::vector<int> vector7 = std::vector<int>();
   func5(rng());
   if(PATH0 & 2) {
      std::vector<int> vector8 = std::vector<int>();
      func1(rng());
   }
   else {
      for(int loop6 = 0; loop6 < 3; loop6++) {
         std::vector<int> vector8 = std::vector<int>();
         std::vector<int> vector9 = std::vector<int>();
         if(PATH0 & 4) {
            vector9.push_back(0);
            for (auto&& i : vector9) { 
               i++; 
            }
            printf("DELETE!\n");
         }
         else {
            if (vector3.size() > 0) {
               vector3.pop_back();
            }
            for (auto&& i : vector3) {
               i--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         std::vector<int> vector10 = std::vector<int>();
         vector7.push_back(0);
         for (auto&& i : vector7) { 
            i++; 
         }
         std::vector<int> vector11 = std::vector<int>();
         func3(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop1 = 0; loop1 < 3; loop1++) {
         std::vector<int> vector6 = std::vector<int>();
         for (auto&& i : vector6) {
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
   for(int loop2 = 0; loop2 < 3; loop2++) {
      std::vector<int> vector6 = std::vector<int>();
      std::vector<int> vector7 = std::vector<int>();
      if(PATH0 & 1) {
         vector7.push_back(0);
         for (auto&& i : vector7) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (vector6.size() > 0) {
            vector6.pop_back();
         }
         for (auto&& i : vector6) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop4 = 0; loop4 < 3; loop4++) {
         std::vector<int> vector9 = std::vector<int>();
         for (auto&& i : vector9) {
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
   for(int loop5 = 0; loop5 < 3; loop5++) {
      std::vector<int> vector9 = std::vector<int>();
      std::vector<int> vector10 = std::vector<int>();
      if(PATH0 & 1) {
         vector9.push_back(0);
         for (auto&& i : vector9) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (vector10.size() > 0) {
            vector10.pop_back();
         }
         for (auto&& i : vector10) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop7 = 0; loop7 < 3; loop7++) {
         std::vector<int> vector12 = std::vector<int>();
         for (auto&& i : vector12) {
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
   for(int loop8 = 0; loop8 < 3; loop8++) {
      std::vector<int> vector12 = std::vector<int>();
      std::vector<int> vector13 = std::vector<int>();
      if(PATH0 & 1) {
         vector12.push_back(0);
         for (auto&& i : vector12) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (vector12.size() > 0) {
            vector12.pop_back();
         }
         for (auto&& i : vector12) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

