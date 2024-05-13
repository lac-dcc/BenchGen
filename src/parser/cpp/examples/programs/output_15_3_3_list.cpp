#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
   int loop0 = 0;
   int loopLimit0 = ceil((rand()%10)/1);
   for(; loop0 < loopLimit0; loop0++) {
      std::list<int> list2 = std::list<int>();
      list0.push_back(0);
      for (auto&& i : list0) { 
         i++; 
      }
      func0(rng());
      std::list<int> list3 = std::list<int>();
      int loop10 = 0;
      int loopLimit10 = ceil((rand()%10)/2);
      for(; loop10 < loopLimit10; loop10++) {
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
         int loop11 = 0;
         int loopLimit11 = ceil((rand()%10)/3);
         for(; loop11 < loopLimit11; loop11++) {
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
         int loop12 = 0;
         int loopLimit12 = ceil((rand()%10)/3);
         for(; loop12 < loopLimit12; loop12++) {
            printf("DELETE!\n");
            std::list<int> list9 = std::list<int>();
            list2.push_back(0);
            for (auto&& i : list2) { 
               i++; 
            }
            std::list<int> list10 = std::list<int>();
            func5(rng());
         }
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
   int loop3 = 0;
   int loopLimit3 = ceil((rand()%10)/2);
   for(; loop3 < loopLimit3; loop3++) {
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
   int loop4 = 0;
   int loopLimit4 = ceil((rand()%10)/2);
   for(; loop4 < loopLimit4; loop4++) {
      printf("DELETE!\n");
      std::list<int> list6 = std::list<int>();
      list5.push_back(0);
      for (auto&& i : list5) { 
         i++; 
      }
      std::list<int> list7 = std::list<int>();
      func5(rng());
   }
   if(PATH0 & 2) {
      std::list<int> list6 = std::list<int>();
      func1(rng());
   }
   else {
      int loop7 = 0;
      int loopLimit7 = ceil((rand()%10)/2);
      for(; loop7 < loopLimit7; loop7++) {
         std::list<int> list6 = std::list<int>();
         std::list<int> list7 = std::list<int>();
         if(PATH0 & 4) {
            list6.push_back(0);
            for (auto&& i : list6) { 
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
         printf("DELETE!\n");
         std::list<int> list8 = std::list<int>();
         list3.push_back(0);
         for (auto&& i : list3) { 
            i++; 
         }
         std::list<int> list9 = std::list<int>();
         func3(rng());
      }
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = ceil((rand()%10)/2);
      for(; loop1 < loopLimit1; loop1++) {
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
   int loop2 = 0;
   int loopLimit2 = ceil((rand()%10)/2);
   for(; loop2 < loopLimit2; loop2++) {
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
      int loop5 = 0;
      int loopLimit5 = ceil((rand()%10)/2);
      for(; loop5 < loopLimit5; loop5++) {
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
      func2(rng());
   }
}

void func2(const unsigned long PATH0) {
   int loop6 = 0;
   int loopLimit6 = ceil((rand()%10)/2);
   for(; loop6 < loopLimit6; loop6++) {
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
         if (list8.size() > 0) {
            list8.pop_back();
         }
         for (auto&& i : list8) {
            i--; 
         }
         printf("DELETE!\n");
      }
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop8 = 0;
      int loopLimit8 = ceil((rand()%10)/3);
      for(; loop8 < loopLimit8; loop8++) {
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
      func4(rng());
   }
}

void func4(const unsigned long PATH0) {
   int loop9 = 0;
   int loopLimit9 = ceil((rand()%10)/3);
   for(; loop9 < loopLimit9; loop9++) {
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

