#include <stdio.h>
#include <stdlib.h>
#include <list>

void func0();

int main() {
   std::list<int> list0 = std::list<int>();
   if(1 < 2) {
      for(int scalar1 = 0; scalar1 < 10; scalar1++) {
         func0();
         std::list<int> list2 = std::list<int>();
      }
   }
   else {
      list0.push_back(0);
      for (auto&& i : list0) { 
         i++; 
      }
      list0.push_back(0);
      for (auto&& i : list0) { 
         i++; 
      }
      list0.push_back(0);
      for (auto&& i : list0) { 
         i++; 
      }
      list0.pop_back();
      for (auto&& i : list0) {
         i--; 
      }
      list0.pop_back();
      for (auto&& i : list0) {
         i--; 
      }
      list0.pop_back();
      for (auto&& i : list0) {
         i--; 
      }
   }
   for (auto&& i : list0) {
      if (i == 0) {
         printf("IS 0!");
      }
   }
   return 0;
}

void func0() {
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      scalar2++;
      scalar2++;
      scalar2--;
      scalar2--;
   }
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         scalar3++;
         scalar3--;
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         }
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         }
      }
   }
}

