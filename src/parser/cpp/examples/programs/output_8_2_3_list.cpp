#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>


unsigned long rng();
void func7(const unsigned long PATH0);
void func19(const unsigned long PATH0);
void func31(const unsigned long PATH0);
void func43();
void func44();
void func45();
void func46();
void func37();
void func32();
void func38(const unsigned long PATH0);
void func47();
void func39();
void func40();
void func41(const unsigned long PATH0);
void func48();
void func33(const unsigned long PATH0);
void func34(const unsigned long PATH0);
void func42();
void func25(const unsigned long PATH0);
void func20();
void func26(const unsigned long PATH0);
void func35(const unsigned long PATH0);
void func27();
void func28(const unsigned long PATH0);
void func29(const unsigned long PATH0);
void func36();
void func21(const unsigned long PATH0);
void func22(const unsigned long PATH0);
void func30();
void func13(const unsigned long PATH0);
void func8();
void func14(const unsigned long PATH0);
void func23(const unsigned long PATH0);
void func15();
void func16(const unsigned long PATH0);
void func17(const unsigned long PATH0);
void func24();
void func9(const unsigned long PATH0);
void func10(const unsigned long PATH0);
void func18();
void func1(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func3();
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func12();
void func6();

int main() {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      if(rng() & 1) {
         func7(rng());
         func8();
         func9(rng());
         func10(rng());
      }
      else {
         func1(rng());
      }
   }
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      std::list<int> list1 = std::list<int>();
      scalar0++;
      func0(rng());
      std::list<int> list2 = std::list<int>();
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            if(rng() & 1) {
               func7(rng());
               func8();
               func9(rng());
               func10(rng());
            }
            else {
               func1(rng());
            }
         }
         func2(rng());
         func3();
         func4(rng());
         func5(rng());
      }
      for (auto&& i : list2) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for (auto&& i : list1) {
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

void func7(const unsigned long PATH0) {
   for(int scalar1 = 0; scalar1 < 10; scalar1++) {
      if(PATH0 & 1) {
         func19(rng());
         func20();
         func21(rng());
         func22(rng());
      }
      else {
         func13(rng());
      }
   }
}

void func19(const unsigned long PATH0) {
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      if(PATH0 & 1) {
         func31(rng());
         func32();
         func33(rng());
         func34(rng());
      }
      else {
         func25(rng());
      }
   }
}

void func31(const unsigned long PATH0) {
   for(int scalar3 = 0; scalar3 < 10; scalar3++) {
      if(PATH0 & 1) {
         func43();
         func44();
         func45();
         func46();
      }
      else {
         func37();
      }
   }
}

void func43() {
}

void func44() {
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

void func45() {
}

void func46() {
}

void func37() {
   std::list<int> list4 = std::list<int>();
   std::list<int> list5 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   std::list<int> list6 = std::list<int>();
   list4.pop_back();
   for (auto&& i : list4) {
      i--; 
   }
   std::list<int> list7 = std::list<int>();
   list7.push_back(0);
   for (auto&& i : list7) { 
      i++; 
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func32() {
   for(int scalar3 = 0; scalar3 < 10; scalar3++) {
      std::list<int> list4 = std::list<int>();
      for (auto&& i : list4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func38(rng());
      func39();
      func40();
      func41(rng());
      printf("DELETE!\n");
   }
}

void func38(const unsigned long PATH0) {
   for(int scalar5 = 0; scalar5 < 10; scalar5++) {
      if(PATH0 & 1) {
      }
      else {
         func47();
      }
   }
}

void func47() {
   std::list<int> list6 = std::list<int>();
   printf("DELETE!\n");
}

void func39() {
   for(int scalar5 = 0; scalar5 < 10; scalar5++) {
      std::list<int> list6 = std::list<int>();
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func43();
      func44();
      func45();
      func46();
      printf("DELETE!\n");
   }
}

void func40() {
   std::list<int> list5 = std::list<int>();
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   std::list<int> list6 = std::list<int>();
   list5.pop_back();
   for (auto&& i : list5) {
      i--; 
   }
   std::list<int> list7 = std::list<int>();
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func41(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func45();
   }
   else {
      std::list<int> list5 = std::list<int>();
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
         }
      }
   }
}

void func48() {
}

void func33(const unsigned long PATH0) {
   std::list<int> list3 = std::list<int>();
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   std::list<int> list4 = std::list<int>();
   list3.pop_back();
   for (auto&& i : list3) {
      i--; 
   }
   std::list<int> list5 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   if(PATH0 & 1) {
      func45();
   }
   else {
      std::list<int> list6 = std::list<int>();
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func34(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func40();
   }
   else {
      std::list<int> list3 = std::list<int>();
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            std::list<int> list5 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            std::list<int> list6 = std::list<int>();
            for (auto&& i : list6) {
               i--; 
            }
            std::list<int> list7 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func42() {
   func43();
   func44();
   func45();
   func46();
}

void func25(const unsigned long PATH0) {
   std::list<int> list3 = std::list<int>();
   std::list<int> list4 = std::list<int>();
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   std::list<int> list5 = std::list<int>();
   list3.pop_back();
   for (auto&& i : list3) {
      i--; 
   }
   std::list<int> list6 = std::list<int>();
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   if(PATH0 & 1) {
      func40();
   }
   else {
      std::list<int> list7 = std::list<int>();
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            std::list<int> list9 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            std::list<int> list10 = std::list<int>();
            for (auto&& i : list3) {
               i--; 
            }
            std::list<int> list11 = std::list<int>();
            list11.push_back(0);
            for (auto&& i : list11) { 
               i++; 
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func20() {
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      std::list<int> list3 = std::list<int>();
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func26(rng());
      func27();
      func28(rng());
      func29(rng());
      printf("DELETE!\n");
   }
}

void func26(const unsigned long PATH0) {
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      if(PATH0 & 1) {
         func38(rng());
         func39();
         func40();
         func41(rng());
      }
      else {
         func35(rng());
      }
   }
}

void func35(const unsigned long PATH0) {
   std::list<int> list5 = std::list<int>();
   std::list<int> list6 = std::list<int>();
   list6.push_back(0);
   for (auto&& i : list6) { 
      i++; 
   }
   std::list<int> list7 = std::list<int>();
   for (auto&& i : list5) {
      i--; 
   }
   std::list<int> list8 = std::list<int>();
   list7.push_back(0);
   for (auto&& i : list7) { 
      i++; 
   }
   if(PATH0 & 1) {
      func45();
   }
   else {
      std::list<int> list9 = std::list<int>();
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int scalar10 = 0; scalar10 < 10; scalar10++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func27() {
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      std::list<int> list5 = std::list<int>();
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func31(rng());
      func32();
      func33(rng());
      func34(rng());
      printf("DELETE!\n");
   }
}

void func28(const unsigned long PATH0) {
   std::list<int> list4 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   std::list<int> list5 = std::list<int>();
   for (auto&& i : list5) {
      i--; 
   }
   std::list<int> list6 = std::list<int>();
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   if(PATH0 & 1) {
      func40();
   }
   else {
      std::list<int> list7 = std::list<int>();
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            std::list<int> list9 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            std::list<int> list10 = std::list<int>();
            for (auto&& i : list9) {
               i--; 
            }
            std::list<int> list11 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func29(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func33(rng());
   }
   else {
      std::list<int> list4 = std::list<int>();
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            std::list<int> list6 = std::list<int>();
            list4.push_back(0);
            for (auto&& i : list4) { 
               i++; 
            }
            std::list<int> list7 = std::list<int>();
            for (auto&& i : list6) {
               i--; 
            }
            std::list<int> list8 = std::list<int>();
            list8.push_back(0);
            for (auto&& i : list8) { 
               i++; 
            }
            if(PATH0 & 4) {
               func45();
            }
            else {
               std::list<int> list9 = std::list<int>();
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func36() {
   func38(rng());
   func39();
   func40();
   func41(rng());
}

void func21(const unsigned long PATH0) {
   std::list<int> list2 = std::list<int>();
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   std::list<int> list3 = std::list<int>();
   for (auto&& i : list3) {
      i--; 
   }
   std::list<int> list4 = std::list<int>();
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   if(PATH0 & 1) {
      func33(rng());
   }
   else {
      std::list<int> list5 = std::list<int>();
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            std::list<int> list7 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            std::list<int> list8 = std::list<int>();
            for (auto&& i : list4) {
               i--; 
            }
            std::list<int> list9 = std::list<int>();
            list7.push_back(0);
            for (auto&& i : list7) { 
               i++; 
            }
            if(PATH0 & 4) {
               func45();
            }
            else {
               std::list<int> list10 = std::list<int>();
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func22(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func28(rng());
   }
   else {
      std::list<int> list2 = std::list<int>();
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            std::list<int> list4 = std::list<int>();
            list2.push_back(0);
            for (auto&& i : list2) { 
               i++; 
            }
            std::list<int> list5 = std::list<int>();
            scalar3--;
            std::list<int> list6 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            if(PATH0 & 4) {
               func40();
            }
            else {
               std::list<int> list7 = std::list<int>();
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                     std::list<int> list9 = std::list<int>();
                     list2.push_back(0);
                     for (auto&& i : list2) { 
                        i++; 
                     }
                     std::list<int> list10 = std::list<int>();
                     list6.pop_back();
                     for (auto&& i : list6) {
                        i--; 
                     }
                     std::list<int> list11 = std::list<int>();
                     list10.push_back(0);
                     for (auto&& i : list10) { 
                        i++; 
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func30() {
   func31(rng());
   func32();
   func33(rng());
   func34(rng());
}

void func13(const unsigned long PATH0) {
   std::list<int> list2 = std::list<int>();
   std::list<int> list3 = std::list<int>();
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   std::list<int> list4 = std::list<int>();
   for (auto&& i : list4) {
      i--; 
   }
   std::list<int> list5 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   if(PATH0 & 1) {
      func28(rng());
   }
   else {
      std::list<int> list6 = std::list<int>();
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            std::list<int> list8 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            std::list<int> list9 = std::list<int>();
            for (auto&& i : list8) {
               i--; 
            }
            std::list<int> list10 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            if(PATH0 & 4) {
               func40();
            }
            else {
               std::list<int> list11 = std::list<int>();
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     std::list<int> list13 = std::list<int>();
                     list10.push_back(0);
                     for (auto&& i : list10) { 
                        i++; 
                     }
                     std::list<int> list14 = std::list<int>();
                     list4.pop_back();
                     for (auto&& i : list4) {
                        i--; 
                     }
                     std::list<int> list15 = std::list<int>();
                     list11.push_back(0);
                     for (auto&& i : list11) { 
                        i++; 
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func8() {
   for(int scalar1 = 0; scalar1 < 10; scalar1++) {
      std::list<int> list2 = std::list<int>();
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func14(rng());
      func15();
      func16(rng());
      func17(rng());
      printf("DELETE!\n");
   }
}

void func14(const unsigned long PATH0) {
   for(int scalar3 = 0; scalar3 < 10; scalar3++) {
      if(PATH0 & 1) {
         func26(rng());
         func27();
         func28(rng());
         func29(rng());
      }
      else {
         func23(rng());
      }
   }
}

void func23(const unsigned long PATH0) {
   std::list<int> list4 = std::list<int>();
   std::list<int> list5 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   std::list<int> list6 = std::list<int>();
   for (auto&& i : list5) {
      i--; 
   }
   std::list<int> list7 = std::list<int>();
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   if(PATH0 & 1) {
      func33(rng());
   }
   else {
      std::list<int> list8 = std::list<int>();
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int scalar9 = 0; scalar9 < 10; scalar9++) {
            std::list<int> list10 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            std::list<int> list11 = std::list<int>();
            scalar9--;
            std::list<int> list12 = std::list<int>();
            scalar9++;
            if(PATH0 & 4) {
               func45();
            }
            else {
               std::list<int> list13 = std::list<int>();
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func15() {
   for(int scalar3 = 0; scalar3 < 10; scalar3++) {
      std::list<int> list4 = std::list<int>();
      for (auto&& i : list4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func19(rng());
      func20();
      func21(rng());
      func22(rng());
      printf("DELETE!\n");
   }
}

void func16(const unsigned long PATH0) {
   std::list<int> list3 = std::list<int>();
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   std::list<int> list4 = std::list<int>();
   for (auto&& i : list4) {
      i--; 
   }
   std::list<int> list5 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   if(PATH0 & 1) {
      func28(rng());
   }
   else {
      std::list<int> list6 = std::list<int>();
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            std::list<int> list8 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            std::list<int> list9 = std::list<int>();
            list6.pop_back();
            for (auto&& i : list6) {
               i--; 
            }
            std::list<int> list10 = std::list<int>();
            list4.push_back(0);
            for (auto&& i : list4) { 
               i++; 
            }
            if(PATH0 & 4) {
               func40();
            }
            else {
               std::list<int> list11 = std::list<int>();
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     std::list<int> list13 = std::list<int>();
                     list3.push_back(0);
                     for (auto&& i : list3) { 
                        i++; 
                     }
                     std::list<int> list14 = std::list<int>();
                     for (auto&& i : list6) {
                        i--; 
                     }
                     std::list<int> list15 = std::list<int>();
                     list3.push_back(0);
                     for (auto&& i : list3) { 
                        i++; 
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func17(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      std::list<int> list3 = std::list<int>();
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            std::list<int> list5 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            std::list<int> list6 = std::list<int>();
            for (auto&& i : list5) {
               i--; 
            }
            std::list<int> list7 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               std::list<int> list8 = std::list<int>();
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                     std::list<int> list10 = std::list<int>();
                     list5.push_back(0);
                     for (auto&& i : list5) { 
                        i++; 
                     }
                     std::list<int> list11 = std::list<int>();
                     for (auto&& i : list8) {
                        i--; 
                     }
                     std::list<int> list12 = std::list<int>();
                     list6.push_back(0);
                     for (auto&& i : list6) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        std::list<int> list13 = std::list<int>();
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func24() {
   func26(rng());
   func27();
   func28(rng());
   func29(rng());
}

void func9(const unsigned long PATH0) {
   std::list<int> list1 = std::list<int>();
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   std::list<int> list2 = std::list<int>();
   for (auto&& i : list2) {
      i--; 
   }
   std::list<int> list3 = std::list<int>();
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      std::list<int> list4 = std::list<int>();
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            std::list<int> list6 = std::list<int>();
            list1.push_back(0);
            for (auto&& i : list1) { 
               i++; 
            }
            std::list<int> list7 = std::list<int>();
            list1.pop_back();
            for (auto&& i : list1) {
               i--; 
            }
            std::list<int> list8 = std::list<int>();
            scalar5++;
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               std::list<int> list9 = std::list<int>();
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     std::list<int> list11 = std::list<int>();
                     scalar10++;
                     std::list<int> list12 = std::list<int>();
                     for (auto&& i : list4) {
                        i--; 
                     }
                     std::list<int> list13 = std::list<int>();
                     list1.push_back(0);
                     for (auto&& i : list1) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        std::list<int> list14 = std::list<int>();
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func10(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      std::list<int> list1 = std::list<int>();
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int scalar2 = 0; scalar2 < 10; scalar2++) {
            std::list<int> list3 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            std::list<int> list4 = std::list<int>();
            for (auto&& i : list4) {
               i--; 
            }
            std::list<int> list5 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               std::list<int> list6 = std::list<int>();
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                     std::list<int> list8 = std::list<int>();
                     list5.push_back(0);
                     for (auto&& i : list5) { 
                        i++; 
                     }
                     std::list<int> list9 = std::list<int>();
                     for (auto&& i : list9) {
                        i--; 
                     }
                     std::list<int> list10 = std::list<int>();
                     list9.push_back(0);
                     for (auto&& i : list9) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        std::list<int> list11 = std::list<int>();
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                              std::list<int> list13 = std::list<int>();
                              list8.push_back(0);
                              for (auto&& i : list8) { 
                                 i++; 
                              }
                              std::list<int> list14 = std::list<int>();
                              list9.pop_back();
                              for (auto&& i : list9) {
                                 i--; 
                              }
                              std::list<int> list15 = std::list<int>();
                              scalar2++;
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func18() {
   func19(rng());
   func20();
   func21(rng());
   func22(rng());
}

void func1(const unsigned long PATH0) {
   std::list<int> list1 = std::list<int>();
   std::list<int> list2 = std::list<int>();
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   std::list<int> list3 = std::list<int>();
   list1.pop_back();
   for (auto&& i : list1) {
      i--; 
   }
   std::list<int> list4 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      std::list<int> list5 = std::list<int>();
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            std::list<int> list7 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            std::list<int> list8 = std::list<int>();
            for (auto&& i : list3) {
               i--; 
            }
            std::list<int> list9 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               std::list<int> list10 = std::list<int>();
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     std::list<int> list12 = std::list<int>();
                     scalar11++;
                     std::list<int> list13 = std::list<int>();
                     for (auto&& i : list12) {
                        i--; 
                     }
                     std::list<int> list14 = std::list<int>();
                     scalar6++;
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        std::list<int> list15 = std::list<int>();
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int scalar16 = 0; scalar16 < 10; scalar16++) {
                              std::list<int> list17 = std::list<int>();
                              scalar16++;
                              std::list<int> list18 = std::list<int>();
                              list3.pop_back();
                              for (auto&& i : list3) {
                                 i--; 
                              }
                              std::list<int> list19 = std::list<int>();
                              list12.push_back(0);
                              for (auto&& i : list12) { 
                                 i++; 
                              }
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func0(const unsigned long PATH0) {
   func2(rng());
   func3();
   func4(rng());
   func5(rng());
   if(PATH0 & 1) {
      if(PATH0 & 2) {
         func4(rng());
      }
      else {
         std::list<int> list2 = std::list<int>();
         if(PATH0 & 4) {
            func6();
         }
         else {
            for(int scalar3 = 0; scalar3 < 10; scalar3++) {
               std::list<int> list4 = std::list<int>();
               list2.push_back(0);
               for (auto&& i : list2) { 
                  i++; 
               }
               std::list<int> list5 = std::list<int>();
               list2.pop_back();
               for (auto&& i : list2) {
                  i--; 
               }
               std::list<int> list6 = std::list<int>();
               list6.push_back(0);
               for (auto&& i : list6) { 
                  i++; 
               }
               if(PATH0 & 8) {
                  func16(rng());
               }
               else {
                  std::list<int> list7 = std::list<int>();
                  if(PATH0 & 16) {
                     func18();
                  }
                  else {
                     for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                        std::list<int> list9 = std::list<int>();
                        list9.push_back(0);
                        for (auto&& i : list9) { 
                           i++; 
                        }
                        std::list<int> list10 = std::list<int>();
                        for (auto&& i : list4) {
                           i--; 
                        }
                        std::list<int> list11 = std::list<int>();
                        list2.push_back(0);
                        for (auto&& i : list2) { 
                           i++; 
                        }
                        if(PATH0 & 32) {
                           func28(rng());
                        }
                        else {
                           std::list<int> list12 = std::list<int>();
                           if(PATH0 & 64) {
                              func30();
                           }
                           else {
                              for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                                 std::list<int> list14 = std::list<int>();
                                 list7.push_back(0);
                                 for (auto&& i : list7) { 
                                    i++; 
                                 }
                                 std::list<int> list15 = std::list<int>();
                                 for (auto&& i : list12) {
                                    i--; 
                                 }
                                 std::list<int> list16 = std::list<int>();
                                 list7.push_back(0);
                                 for (auto&& i : list7) { 
                                    i++; 
                                 }
                                 if(PATH0 & 128) {
                                    func40();
                                 }
                                 else {
                                    std::list<int> list17 = std::list<int>();
                                    if(PATH0 & 256) {
                                       func42();
                                    }
                                    else {
                                       for(int scalar18 = 0; scalar18 < 10; scalar18++) {
                                          std::list<int> list19 = std::list<int>();
                                          list6.push_back(0);
                                          for (auto&& i : list6) { 
                                             i++; 
                                          }
                                          std::list<int> list20 = std::list<int>();
                                          list7.pop_back();
                                          for (auto&& i : list7) {
                                             i--; 
                                          }
                                          std::list<int> list21 = std::list<int>();
                                          scalar18++;
                                          printf("DELETE!\n");
                                          printf("DELETE!\n");
                                          printf("DELETE!\n");
                                       }
                                    }
                                 }
                                 printf("DELETE!\n");
                                 printf("DELETE!\n");
                                 printf("DELETE!\n");
                              }
                           }
                        }
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                     }
                  }
               }
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            if(PATH0 & 512) {
               func7(rng());
               func8();
               func9(rng());
               func10(rng());
            }
            else {
               func1(rng());
            }
         }
         std::list<int> list3 = std::list<int>();
         list3.push_back(0);
         for (auto&& i : list3) { 
            i++; 
         }
         std::list<int> list4 = std::list<int>();
         for (auto&& i : list4) {
            i--; 
         }
         std::list<int> list5 = std::list<int>();
         list3.push_back(0);
         for (auto&& i : list3) { 
            i++; 
         }
         if(PATH0 & 1024) {
            func9(rng());
         }
         else {
            std::list<int> list6 = std::list<int>();
            if(PATH0 & 2048) {
               func12();
            }
            else {
               for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                  std::list<int> list8 = std::list<int>();
                  list8.push_back(0);
                  for (auto&& i : list8) { 
                     i++; 
                  }
                  std::list<int> list9 = std::list<int>();
                  for (auto&& i : list5) {
                     i--; 
                  }
                  std::list<int> list10 = std::list<int>();
                  list6.push_back(0);
                  for (auto&& i : list6) { 
                     i++; 
                  }
                  if(PATH0 & 4096) {
                     func21(rng());
                  }
                  else {
                     std::list<int> list11 = std::list<int>();
                     if(PATH0 & 8192) {
                        func24();
                     }
                     else {
                        for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                           std::list<int> list13 = std::list<int>();
                           list13.push_back(0);
                           for (auto&& i : list13) { 
                              i++; 
                           }
                           std::list<int> list14 = std::list<int>();
                           list3.pop_back();
                           for (auto&& i : list3) {
                              i--; 
                           }
                           std::list<int> list15 = std::list<int>();
                           list10.push_back(0);
                           for (auto&& i : list10) { 
                              i++; 
                           }
                           if(PATH0 & 16384) {
                              func33(rng());
                           }
                           else {
                              std::list<int> list16 = std::list<int>();
                              if(PATH0 & 32768) {
                                 func36();
                              }
                              else {
                                 for(int scalar17 = 0; scalar17 < 10; scalar17++) {
                                    std::list<int> list18 = std::list<int>();
                                    list18.push_back(0);
                                    for (auto&& i : list18) { 
                                       i++; 
                                    }
                                    std::list<int> list19 = std::list<int>();
                                    for (auto&& i : list16) {
                                       i--; 
                                    }
                                    std::list<int> list20 = std::list<int>();
                                    list11.push_back(0);
                                    for (auto&& i : list11) { 
                                       i++; 
                                    }
                                    if(PATH0 & 65536) {
                                       func45();
                                    }
                                    else {
                                       std::list<int> list21 = std::list<int>();
                                       if(PATH0 & 131072) {
                                          func48();
                                       }
                                       else {
                                          for(int scalar22 = 0; scalar22 < 10; scalar22++) {
                                          }
                                       }
                                    }
                                    printf("DELETE!\n");
                                    printf("DELETE!\n");
                                    printf("DELETE!\n");
                                 }
                              }
                           }
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                        }
                     }
                  }
                  printf("DELETE!\n");
                  printf("DELETE!\n");
                  printf("DELETE!\n");
               }
            }
         }
         printf("DELETE!\n");
         printf("DELETE!\n");
         printf("DELETE!\n");
      }
   }
}

void func2(const unsigned long PATH0) {
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      if(PATH0 & 1) {
         func14(rng());
         func15();
         func16(rng());
         func17(rng());
      }
      else {
         func11(rng());
      }
   }
}

void func11(const unsigned long PATH0) {
   std::list<int> list3 = std::list<int>();
   std::list<int> list4 = std::list<int>();
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   std::list<int> list5 = std::list<int>();
   for (auto&& i : list5) {
      i--; 
   }
   std::list<int> list6 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      std::list<int> list7 = std::list<int>();
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            std::list<int> list9 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            std::list<int> list10 = std::list<int>();
            for (auto&& i : list9) {
               i--; 
            }
            std::list<int> list11 = std::list<int>();
            list4.push_back(0);
            for (auto&& i : list4) { 
               i++; 
            }
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               std::list<int> list12 = std::list<int>();
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                     std::list<int> list14 = std::list<int>();
                     list12.push_back(0);
                     for (auto&& i : list12) { 
                        i++; 
                     }
                     std::list<int> list15 = std::list<int>();
                     scalar13--;
                     std::list<int> list16 = std::list<int>();
                     list9.push_back(0);
                     for (auto&& i : list9) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        std::list<int> list17 = std::list<int>();
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int scalar18 = 0; scalar18 < 10; scalar18++) {
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func3() {
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      std::list<int> list3 = std::list<int>();
      for (auto&& i : list3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func7(rng());
      func8();
      func9(rng());
      func10(rng());
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   std::list<int> list2 = std::list<int>();
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   std::list<int> list3 = std::list<int>();
   for (auto&& i : list3) {
      i--; 
   }
   std::list<int> list4 = std::list<int>();
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      std::list<int> list5 = std::list<int>();
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            std::list<int> list7 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            std::list<int> list8 = std::list<int>();
            for (auto&& i : list5) {
               i--; 
            }
            std::list<int> list9 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               std::list<int> list10 = std::list<int>();
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     std::list<int> list12 = std::list<int>();
                     list7.push_back(0);
                     for (auto&& i : list7) { 
                        i++; 
                     }
                     std::list<int> list13 = std::list<int>();
                     for (auto&& i : list13) {
                        i--; 
                     }
                     std::list<int> list14 = std::list<int>();
                     list4.push_back(0);
                     for (auto&& i : list4) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        std::list<int> list15 = std::list<int>();
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int scalar16 = 0; scalar16 < 10; scalar16++) {
                              std::list<int> list17 = std::list<int>();
                              list17.push_back(0);
                              for (auto&& i : list17) { 
                                 i++; 
                              }
                              std::list<int> list18 = std::list<int>();
                              list5.pop_back();
                              for (auto&& i : list5) {
                                 i--; 
                              }
                              std::list<int> list19 = std::list<int>();
                              list18.push_back(0);
                              for (auto&& i : list18) { 
                                 i++; 
                              }
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func9(rng());
   }
   else {
      std::list<int> list2 = std::list<int>();
      if(PATH0 & 2) {
         func12();
      }
      else {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            std::list<int> list4 = std::list<int>();
            list4.push_back(0);
            for (auto&& i : list4) { 
               i++; 
            }
            std::list<int> list5 = std::list<int>();
            scalar3--;
            std::list<int> list6 = std::list<int>();
            scalar3++;
            if(PATH0 & 4) {
               func21(rng());
            }
            else {
               std::list<int> list7 = std::list<int>();
               if(PATH0 & 8) {
                  func24();
               }
               else {
                  for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                     std::list<int> list9 = std::list<int>();
                     list7.push_back(0);
                     for (auto&& i : list7) { 
                        i++; 
                     }
                     std::list<int> list10 = std::list<int>();
                     for (auto&& i : list6) {
                        i--; 
                     }
                     std::list<int> list11 = std::list<int>();
                     list5.push_back(0);
                     for (auto&& i : list5) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func33(rng());
                     }
                     else {
                        std::list<int> list12 = std::list<int>();
                        if(PATH0 & 32) {
                           func36();
                        }
                        else {
                           for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                              std::list<int> list14 = std::list<int>();
                              list11.push_back(0);
                              for (auto&& i : list11) { 
                                 i++; 
                              }
                              std::list<int> list15 = std::list<int>();
                              for (auto&& i : list14) {
                                 i--; 
                              }
                              std::list<int> list16 = std::list<int>();
                              list15.push_back(0);
                              for (auto&& i : list15) { 
                                 i++; 
                              }
                              if(PATH0 & 64) {
                                 func45();
                              }
                              else {
                                 std::list<int> list17 = std::list<int>();
                                 if(PATH0 & 128) {
                                    func48();
                                 }
                                 else {
                                    for(int scalar18 = 0; scalar18 < 10; scalar18++) {
                                    }
                                 }
                              }
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func12() {
   func14(rng());
   func15();
   func16(rng());
   func17(rng());
}

void func6() {
   func7(rng());
   func8();
   func9(rng());
   func10(rng());
}

