#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);

int main() {
   std::list<int> list0 = std::list<int>();
   std::list<int> list1 = std::list<int>();
   std::list<int> list2 = std::list<int>();
   std::list<int> list3 = std::list<int>();
   func0(rng());
   printf("DELETE!\n");
   std::list<int> list4 = std::list<int>();
   list0.push_back(0);
   for (auto&& i : list0) { 
      i++; 
   }
   std::list<int> list5 = std::list<int>();
   func2(rng());
   std::list<int> list6 = std::list<int>();
   printf("DELETE!\n");
   std::list<int> list7 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   std::list<int> list8 = std::list<int>();
   func4(rng());
   for(int scalar9 = 0; scalar9 < 10; scalar9++) {
      for (auto&& i : list7) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if(rng() & 1) {
         list0.push_back(0);
         for (auto&& i : list0) { 
            i++; 
         }
      }
      else {
         scalar9--;
      }
   }
   printf("DELETE!\n");
   std::list<int> list9 = std::list<int>();
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   std::list<int> list10 = std::list<int>();
   func4(rng());
   std::list<int> list11 = std::list<int>();
   std::list<int> list12 = std::list<int>();
   if(rng() & 1) {
      list1.push_back(0);
      for (auto&& i : list1) { 
         i++; 
      }
      printf("DELETE!\n");
   }
   else {
      for (auto&& i : list9) {
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
      func1(rng());
   }
}

void func1(const unsigned long PATH0) {
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      std::list<int> list5 = std::list<int>();
      std::list<int> list6 = std::list<int>();
      if(PATH0 & 1) {
         list5.push_back(0);
         for (auto&& i : list5) { 
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
         std::list<int> list7 = std::list<int>();
         for (auto&& i : list7) {
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
      std::list<int> list7 = std::list<int>();
      std::list<int> list8 = std::list<int>();
      if(PATH0 & 1) {
         list7.push_back(0);
         for (auto&& i : list7) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         list7.pop_back();
         for (auto&& i : list7) {
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
         std::list<int> list10 = std::list<int>();
         for (auto&& i : list10) {
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
      std::list<int> list10 = std::list<int>();
      std::list<int> list11 = std::list<int>();
      if(PATH0 & 1) {
         list10.push_back(0);
         for (auto&& i : list10) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         for (auto&& i : list11) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

