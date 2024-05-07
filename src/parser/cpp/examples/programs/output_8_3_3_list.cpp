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
      if (list0.size() > 0) {
         list0.pop_back();
      }
      for (auto&& i : list0) {
         i--; 
      }
      printf("DELETE!\n");
   }
   printf("DELETE!\n");
   for(int loop0 = 0; loop0 < 3; loop0++) {
      std::list<int> list2 = std::list<int>();
      list0.push_back(0);
      for (auto&& i : list0) { 
         i++; 
      }
      func0(rng());
      std::list<int> list3 = std::list<int>();
      for(int loop9 = 0; loop9 < 3; loop9++) {
         std::list<int> list4 = std::list<int>();
         std::list<int> list5 = std::list<int>();
         if(rng() & 1) {
            list5.push_back(0);
            for (auto&& i : list5) { 
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
         std::list<int> list6 = std::list<int>();
         printf("DELETE!\n");
         std::list<int> list7 = std::list<int>();
         list7.push_back(0);
         for (auto&& i : list7) { 
            i++; 
         }
         std::list<int> list8 = std::list<int>();
         func5(rng());
         for(int loop10 = 0; loop10 < 3; loop10++) {
            for (auto&& i : list6) {
               if (i == 0) {
                  printf("IS 0!");
               }
            }
            if(rng() & 1) {
               list8.push_back(0);
               for (auto&& i : list8) { 
                  i++; 
               }
            }
            else {
               if (list8.size() > 0) {
                  list8.pop_back();
               }
               for (auto&& i : list8) {
                  i--; 
               }
            }
         }
         printf("DELETE!\n");
         std::list<int> list9 = std::list<int>();
         list2.push_back(0);
         for (auto&& i : list2) { 
            i++; 
         }
         std::list<int> list10 = std::list<int>();
         func5(rng());
      }
      for (auto&& i : list3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (list3.size() > 0) {
         list3.pop_back();
      }
      for (auto&& i : list3) {
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
   std::list<int> list3 = std::list<int>();
   printf("DELETE!\n");
   std::list<int> list4 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   std::list<int> list5 = std::list<int>();
   func5(rng());
   for(int loop3 = 0; loop3 < 3; loop3++) {
      for (auto&& i : list3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if(PATH0 & 1) {
         list3.push_back(0);
         for (auto&& i : list3) { 
            i++; 
         }
      }
      else {
         if (list4.size() > 0) {
            list4.pop_back();
         }
         for (auto&& i : list4) {
            i--; 
         }
      }
   }
   printf("DELETE!\n");
   std::list<int> list6 = std::list<int>();
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   std::list<int> list7 = std::list<int>();
   func5(rng());
   if(PATH0 & 2) {
      std::list<int> list8 = std::list<int>();
      func1(rng());
   }
   else {
      for(int loop6 = 0; loop6 < 3; loop6++) {
         std::list<int> list8 = std::list<int>();
         std::list<int> list9 = std::list<int>();
         if(PATH0 & 4) {
            list9.push_back(0);
            for (auto&& i : list9) { 
               i++; 
            }
            printf("DELETE!\n");
         }
         else {
            if (list3.size() > 0) {
               list3.pop_back();
            }
            for (auto&& i : list3) {
               i--; 
            }
            printf("DELETE!\n");
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         std::list<int> list10 = std::list<int>();
         list7.push_back(0);
         for (auto&& i : list7) { 
            i++; 
         }
         std::list<int> list11 = std::list<int>();
         func3(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop1 = 0; loop1 < 3; loop1++) {
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
      func6(rng());
   }
}

void func6(const unsigned long PATH0) {
   for(int loop2 = 0; loop2 < 3; loop2++) {
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

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop4 = 0; loop4 < 3; loop4++) {
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
      func2(rng());
   }
}

void func2(const unsigned long PATH0) {
   for(int loop5 = 0; loop5 < 3; loop5++) {
      std::list<int> list9 = std::list<int>();
      std::list<int> list10 = std::list<int>();
      if(PATH0 & 1) {
         list9.push_back(0);
         for (auto&& i : list9) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (list10.size() > 0) {
            list10.pop_back();
         }
         for (auto&& i : list10) {
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
         std::list<int> list12 = std::list<int>();
         for (auto&& i : list12) {
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
      std::list<int> list12 = std::list<int>();
      std::list<int> list13 = std::list<int>();
      if(PATH0 & 1) {
         list12.push_back(0);
         for (auto&& i : list12) { 
            i++; 
         }
         printf("DELETE!\n");
      }
      else {
         if (list12.size() > 0) {
            list12.pop_back();
         }
         for (auto&& i : list12) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

