#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>


unsigned long rng();
void func0(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func4(const unsigned long PATH0);

int main() {
   std::list<int> list0 = std::list<int>();
   std::list<int> list1 = std::list<int>();
   if(rng() & 1) {
      list1.push_back(0);
      for (auto&& i : list1) { 
         i++; 
      }
      printf("DELETE!\n");
   }
   else {
      for (auto&& i : list0) {
         i--; 
      }
      printf("DELETE!\n");
   }
   printf("DELETE!\n");
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      std::list<int> list3 = std::list<int>();
      list1.push_back(0);
      for (auto&& i : list1) { 
         i++; 
      }
      func0(rng());
      std::list<int> list4 = std::list<int>();
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         std::list<int> list6 = std::list<int>();
         std::list<int> list7 = std::list<int>();
         if(rng() & 1) {
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            printf("DELETE!\n");
         }
         else {
            for (auto&& i : list0) {
               i--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         std::list<int> list8 = std::list<int>();
         printf("DELETE!\n");
         std::list<int> list9 = std::list<int>();
         list7.push_back(0);
         for (auto&& i : list7) { 
            i++; 
         }
         std::list<int> list10 = std::list<int>();
         func5(rng());
         for(int scalar11 = 0; scalar11 < 10; scalar11++) {
            for (auto&& i : list9) {
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
         std::list<int> list11 = std::list<int>();
         scalar2++;
         std::list<int> list12 = std::list<int>();
         func5(rng());
      }
      for (auto&& i : list3) {
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
   std::list<int> list4 = std::list<int>();
   printf("DELETE!\n");
   std::list<int> list5 = std::list<int>();
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   std::list<int> list6 = std::list<int>();
   func5(rng());
   for(int scalar7 = 0; scalar7 < 10; scalar7++) {
      for (auto&& i : list4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 1) {
         list5.push_back(0);
         for (auto&& i : list5) { 
            i++; 
         }
      }
      else {
         list5.pop_back();
         for (auto&& i : list5) {
            i--; 
         }
      }
   }
   printf("DELETE!\n");
   std::list<int> list7 = std::list<int>();
   list6.push_back(0);
   for (auto&& i : list6) { 
      i++; 
   }
   std::list<int> list8 = std::list<int>();
   func5(rng());
   if(PATH0 & 2) {
      std::list<int> list9 = std::list<int>();
      func1(rng());
   }
   else {
      for(int scalar9 = 0; scalar9 < 10; scalar9++) {
         std::list<int> list10 = std::list<int>();
         std::list<int> list11 = std::list<int>();
         if(PATH0 & 4) {
            list7.push_back(0);
            for (auto&& i : list7) { 
               i++; 
            }
            printf("DELETE!\n");
         }
         else {
            for (auto&& i : list10) {
               i--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         std::list<int> list12 = std::list<int>();
         list10.push_back(0);
         for (auto&& i : list10) { 
            i++; 
         }
         std::list<int> list13 = std::list<int>();
         func3(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar7 = 0; scalar7 < 10; scalar7++) {
         std::list<int> list8 = std::list<int>();
         for (auto&& i : list8) {
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
      std::list<int> list8 = std::list<int>();
      std::list<int> list9 = std::list<int>();
      if(PATH0 & 1) {
         list8.push_back(0);
         for (auto&& i : list8) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         list8.pop_back();
         for (auto&& i : list8) {
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
         std::list<int> list11 = std::list<int>();
         for (auto&& i : list11) {
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
      std::list<int> list11 = std::list<int>();
      std::list<int> list12 = std::list<int>();
      if(PATH0 & 1) {
         list12.push_back(0);
         for (auto&& i : list12) { 
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

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar14 = 0; scalar14 < 10; scalar14++) {
         std::list<int> list15 = std::list<int>();
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
      std::list<int> list15 = std::list<int>();
      std::list<int> list16 = std::list<int>();
      if(PATH0 & 1) {
         list15.push_back(0);
         for (auto&& i : list15) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         list15.pop_back();
         for (auto&& i : list15) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

