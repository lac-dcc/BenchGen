#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
   int loop6 = 0;
   int loopLimit6 = ceil((rand()%10)/1);
   for(; loop6 < loopLimit6; loop6++) {
      for (auto&& i : list4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if(rng() & 1) {
         list5.push_back(0);
         for (auto&& i : list5) { 
            i++; 
         }
      }
      else {
         if (list7.size() > 0) {
            list7.pop_back();
         }
         for (auto&& i : list7) {
            i--; 
         }
      }
   }
   int loop7 = 0;
   int loopLimit7 = ceil((rand()%10)/1);
   for(; loop7 < loopLimit7; loop7++) {
      printf("DELETE!\n");
      std::list<int> list9 = std::list<int>();
      list3.push_back(0);
      for (auto&& i : list3) { 
         i++; 
      }
      std::list<int> list10 = std::list<int>();
      func4(rng());
   }
   std::list<int> list9 = std::list<int>();
   std::list<int> list10 = std::list<int>();
   if(rng() & 1) {
      list4.push_back(0);
      for (auto&& i : list4) { 
         i++; 
      }
      printf("DELETE!\n");
   }
   else {
      if (list9.size() > 0) {
         list9.pop_back();
      }
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
      int loop0 = 0;
      int loopLimit0 = ceil((rand()%10)/1);
      for(; loop0 < loopLimit0; loop0++) {
         std::list<int> list4 = std::list<int>();
         for (auto&& i : list4) {
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
   int loop1 = 0;
   int loopLimit1 = ceil((rand()%10)/1);
   for(; loop1 < loopLimit1; loop1++) {
      std::list<int> list4 = std::list<int>();
      std::list<int> list5 = std::list<int>();
      if(PATH0 & 1) {
         list4.push_back(0);
         for (auto&& i : list4) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (list5.size() > 0) {
            list5.pop_back();
         }
         for (auto&& i : list5) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop2 = 0;
      int loopLimit2 = ceil((rand()%10)/1);
      for(; loop2 < loopLimit2; loop2++) {
         std::list<int> list6 = std::list<int>();
         for (auto&& i : list6) {
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
   int loop3 = 0;
   int loopLimit3 = ceil((rand()%10)/1);
   for(; loop3 < loopLimit3; loop3++) {
      std::list<int> list6 = std::list<int>();
      std::list<int> list7 = std::list<int>();
      if(PATH0 & 1) {
         list7.push_back(0);
         for (auto&& i : list7) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop4 = 0;
      int loopLimit4 = ceil((rand()%10)/1);
      for(; loop4 < loopLimit4; loop4++) {
         std::list<int> list9 = std::list<int>();
         for (auto&& i : list9) {
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
   int loop5 = 0;
   int loopLimit5 = ceil((rand()%10)/1);
   for(; loop5 < loopLimit5; loop5++) {
      std::list<int> list9 = std::list<int>();
      std::list<int> list10 = std::list<int>();
      if(PATH0 & 1) {
         list10.push_back(0);
         for (auto&& i : list10) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (list9.size() > 0) {
            list9.pop_back();
         }
         for (auto&& i : list9) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

