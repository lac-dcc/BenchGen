#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>


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
   std::list<int> list0 = std::list<int>();
   func2(rng());
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop1 = 0; loop1 < 3; loop1++) {
         std::list<int> list1 = std::list<int>();
         for (auto&& i : list1) {
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
      std::list<int> list1 = std::list<int>();
      std::list<int> list2 = std::list<int>();
      if(PATH0 & 1) {
         list1.push_back(0);
         for (auto&& i : list1) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (list2.size() > 0) {
            list2.pop_back();
         }
         for (auto&& i : list2) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func1() {
   printf("DELETE!\n");
   std::list<int> list0 = std::list<int>();
   list0.push_back(0);
   for (auto&& i : list0) { 
      i++; 
   }
   std::list<int> list1 = std::list<int>();
   func4(rng());
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop3 = 0; loop3 < 3; loop3++) {
         std::list<int> list2 = std::list<int>();
         for (auto&& i : list2) {
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
      std::list<int> list2 = std::list<int>();
      std::list<int> list3 = std::list<int>();
      if(PATH0 & 1) {
         list3.push_back(0);
         for (auto&& i : list3) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (list2.size() > 0) {
            list2.pop_back();
         }
         for (auto&& i : list2) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

