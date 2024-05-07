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
            if (list1.size() > 0) {
               list1.pop_back();
            }
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
         for(int loop0 = 0; loop0 < 3; loop0++) {
            std::list<int> list0 = std::list<int>();
            func1(rng());
            printf("DELETE!\n");
            std::list<int> list1 = std::list<int>();
            list0.push_back(0);
            for (auto&& i : list0) { 
               i++; 
            }
            std::list<int> list2 = std::list<int>();
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
      func2(rng());
   }
}

void func2(const unsigned long PATH0) {
   for(int loop2 = 0; loop2 < 3; loop2++) {
      std::list<int> list1 = std::list<int>();
      std::list<int> list2 = std::list<int>();
      if(PATH0 & 1) {
         list2.push_back(0);
         for (auto&& i : list2) { 
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

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop3 = 0; loop3 < 3; loop3++) {
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
      func4(rng());
   }
}

void func4(const unsigned long PATH0) {
   for(int loop4 = 0; loop4 < 3; loop4++) {
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
         if (list4.size() > 0) {
            list4.pop_back();
         }
         for (auto&& i : list4) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   for(int loop5 = 0; loop5 < 3; loop5++) {
      std::list<int> list0 = std::list<int>();
      printf("DELETE!\n");
      std::list<int> list1 = std::list<int>();
      list0.push_back(0);
      for (auto&& i : list0) { 
         i++; 
      }
      std::list<int> list2 = std::list<int>();
      func5(rng());
      for(int loop8 = 0; loop8 < 3; loop8++) {
         for (auto&& i : list2) {
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
            if (list0.size() > 0) {
               list0.pop_back();
            }
            for (auto&& i : list0) {
               i--; 
            }
         }
      }
      printf("DELETE!\n");
      std::list<int> list3 = std::list<int>();
      list2.push_back(0);
      for (auto&& i : list2) { 
         i++; 
      }
      std::list<int> list4 = std::list<int>();
      func5(rng());
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop6 = 0; loop6 < 3; loop6++) {
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
      func6(rng());
   }
}

void func6(const unsigned long PATH0) {
   for(int loop7 = 0; loop7 < 3; loop7++) {
      std::list<int> list3 = std::list<int>();
      std::list<int> list4 = std::list<int>();
      if(PATH0 & 1) {
         list3.push_back(0);
         for (auto&& i : list3) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (list4.size() > 0) {
            list4.pop_back();
         }
         for (auto&& i : list4) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

