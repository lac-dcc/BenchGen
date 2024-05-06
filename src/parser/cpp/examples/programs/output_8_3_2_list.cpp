#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>


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
         std::list<int> list0 = std::list<int>();
         std::list<int> list1 = std::list<int>();
         std::list<int> list2 = std::list<int>();
         if(rng() & 1) {
            list1.push_back(0);
            for (auto&& i : list1) { 
               i++; 
            }
            printf("DELETE!\n");
         }
         else {
            list1.pop_back();
            for (auto&& i : list1) {
               i--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         for (auto&& i : list0) {
            if (i == 0) {
               printf("IS 0!");
            }
         }
      }
      else {
         for(int scalar0 = 0; scalar0 < 10; scalar0++) {
            std::list<int> list1 = std::list<int>();
            func1(rng());
            printf("DELETE!\n");
            std::list<int> list2 = std::list<int>();
            list1.push_back(0);
            for (auto&& i : list1) { 
               i++; 
            }
            std::list<int> list3 = std::list<int>();
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
         std::list<int> list3 = std::list<int>();
         for (auto&& i : list3) {
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
      std::list<int> list3 = std::list<int>();
      std::list<int> list4 = std::list<int>();
      if(PATH0 & 1) {
         list4.push_back(0);
         for (auto&& i : list4) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (auto&& i : list3) {
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
         std::list<int> list5 = std::list<int>();
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
      std::list<int> list5 = std::list<int>();
      std::list<int> list6 = std::list<int>();
      if(PATH0 & 1) {
         scalar4++;
         printf("DELETE!\n");
      }
      else {
         for (auto&& i : list5) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      std::list<int> list1 = std::list<int>();
      printf("DELETE!\n");
      std::list<int> list2 = std::list<int>();
      list2.push_back(0);
      for (auto&& i : list2) { 
         i++; 
      }
      std::list<int> list3 = std::list<int>();
      func5(rng());
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         for (auto&& i : list3) {
            if (i == 0) {
               printf("IS 0!");
            }
         }
         if(PATH0 & 1) {
            list1.push_back(0);
            for (auto&& i : list1) { 
               i++; 
            }
         }
         else {
            scalar0--;
         }
      }
      printf("DELETE!\n");
      std::list<int> list4 = std::list<int>();
      list1.push_back(0);
      for (auto&& i : list1) { 
         i++; 
      }
      std::list<int> list5 = std::list<int>();
      func5(rng());
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         std::list<int> list5 = std::list<int>();
         for (auto&& i : list5) {
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
      std::list<int> list5 = std::list<int>();
      std::list<int> list6 = std::list<int>();
      if(PATH0 & 1) {
         list6.push_back(0);
         for (auto&& i : list6) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (auto&& i : list5) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

