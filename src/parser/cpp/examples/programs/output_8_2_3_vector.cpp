#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


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
   for(int loop0 = 0; loop0 < 3; loop0++) {
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
   for(int loop44 = 0; loop44 < 3; loop44++) {
      std::vector<int> vector0 = std::vector<int>();
      vector0.push_back(0);
      for (auto&& i : vector0) { 
         i++; 
      }
      func0(rng());
      std::vector<int> vector1 = std::vector<int>();
      for(int loop67 = 0; loop67 < 3; loop67++) {
         for(int loop68 = 0; loop68 < 3; loop68++) {
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
      for (auto&& i : vector0) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (vector1.size() > 0) {
         vector1.pop_back();
      }
      for (auto&& i : vector1) {
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
   for(int loop1 = 0; loop1 < 3; loop1++) {
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
   for(int loop2 = 0; loop2 < 3; loop2++) {
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
   for(int loop3 = 0; loop3 < 3; loop3++) {
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
   for(int loop4 = 0; loop4 < 3; loop4++) {
      std::vector<int> vector0 = std::vector<int>();
      for (auto&& i : vector0) {
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
   std::vector<int> vector0 = std::vector<int>();
   std::vector<int> vector1 = std::vector<int>();
   vector0.push_back(0);
   for (auto&& i : vector0) { 
      i++; 
   }
   std::vector<int> vector2 = std::vector<int>();
   if (vector0.size() > 0) {
      vector0.pop_back();
   }
   for (auto&& i : vector0) {
      i--; 
   }
   std::vector<int> vector3 = std::vector<int>();
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func32() {
   for(int loop5 = 0; loop5 < 3; loop5++) {
      std::vector<int> vector0 = std::vector<int>();
      for (auto&& i : vector0) {
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
   for(int loop6 = 0; loop6 < 3; loop6++) {
      if(PATH0 & 1) {
      }
      else {
         func47();
      }
   }
}

void func47() {
   std::vector<int> vector1 = std::vector<int>();
   printf("DELETE!\n");
}

void func39() {
   for(int loop7 = 0; loop7 < 3; loop7++) {
      std::vector<int> vector1 = std::vector<int>();
      for (auto&& i : vector1) {
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
   std::vector<int> vector1 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   std::vector<int> vector2 = std::vector<int>();
   if (vector1.size() > 0) {
      vector1.pop_back();
   }
   for (auto&& i : vector1) {
      i--; 
   }
   std::vector<int> vector3 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
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
      std::vector<int> vector1 = std::vector<int>();
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int loop8 = 0; loop8 < 3; loop8++) {
         }
      }
   }
}

void func48() {
}

void func33(const unsigned long PATH0) {
   std::vector<int> vector0 = std::vector<int>();
   vector0.push_back(0);
   for (auto&& i : vector0) { 
      i++; 
   }
   std::vector<int> vector1 = std::vector<int>();
   if (vector0.size() > 0) {
      vector0.pop_back();
   }
   for (auto&& i : vector0) {
      i--; 
   }
   std::vector<int> vector2 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   if(PATH0 & 1) {
      func45();
   }
   else {
      std::vector<int> vector3 = std::vector<int>();
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int loop9 = 0; loop9 < 3; loop9++) {
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
      std::vector<int> vector0 = std::vector<int>();
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int loop10 = 0; loop10 < 3; loop10++) {
            std::vector<int> vector1 = std::vector<int>();
            vector0.push_back(0);
            for (auto&& i : vector0) { 
               i++; 
            }
            std::vector<int> vector2 = std::vector<int>();
            if (vector1.size() > 0) {
               vector1.pop_back();
            }
            for (auto&& i : vector1) {
               i--; 
            }
            std::vector<int> vector3 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
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
   std::vector<int> vector0 = std::vector<int>();
   std::vector<int> vector1 = std::vector<int>();
   vector0.push_back(0);
   for (auto&& i : vector0) { 
      i++; 
   }
   std::vector<int> vector2 = std::vector<int>();
   if (vector0.size() > 0) {
      vector0.pop_back();
   }
   for (auto&& i : vector0) {
      i--; 
   }
   std::vector<int> vector3 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   if(PATH0 & 1) {
      func40();
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int loop11 = 0; loop11 < 3; loop11++) {
            std::vector<int> vector5 = std::vector<int>();
            vector4.push_back(0);
            for (auto&& i : vector4) { 
               i++; 
            }
            std::vector<int> vector6 = std::vector<int>();
            if (vector2.size() > 0) {
               vector2.pop_back();
            }
            for (auto&& i : vector2) {
               i--; 
            }
            std::vector<int> vector7 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
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
   for(int loop12 = 0; loop12 < 3; loop12++) {
      std::vector<int> vector0 = std::vector<int>();
      for (auto&& i : vector0) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func26(rng());
      func27();
      func28(rng());
      func29(rng());
      printf("DELETE!\n");
   }
}

void func26(const unsigned long PATH0) {
   for(int loop13 = 0; loop13 < 3; loop13++) {
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
   std::vector<int> vector1 = std::vector<int>();
   std::vector<int> vector2 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   std::vector<int> vector3 = std::vector<int>();
   if (vector1.size() > 0) {
      vector1.pop_back();
   }
   for (auto&& i : vector1) {
      i--; 
   }
   std::vector<int> vector4 = std::vector<int>();
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   if(PATH0 & 1) {
      func45();
   }
   else {
      std::vector<int> vector5 = std::vector<int>();
      if(PATH0 & 2) {
         func48();
      }
      else {
         for(int loop14 = 0; loop14 < 3; loop14++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func27() {
   for(int loop15 = 0; loop15 < 3; loop15++) {
      std::vector<int> vector1 = std::vector<int>();
      for (auto&& i : vector1) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func31(rng());
      func32();
      func33(rng());
      func34(rng());
      printf("DELETE!\n");
   }
}

void func28(const unsigned long PATH0) {
   std::vector<int> vector1 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   std::vector<int> vector2 = std::vector<int>();
   if (vector2.size() > 0) {
      vector2.pop_back();
   }
   for (auto&& i : vector2) {
      i--; 
   }
   std::vector<int> vector3 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   if(PATH0 & 1) {
      func40();
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      if(PATH0 & 2) {
         func42();
      }
      else {
         for(int loop16 = 0; loop16 < 3; loop16++) {
            std::vector<int> vector5 = std::vector<int>();
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
            std::vector<int> vector6 = std::vector<int>();
            if (vector6.size() > 0) {
               vector6.pop_back();
            }
            for (auto&& i : vector6) {
               i--; 
            }
            std::vector<int> vector7 = std::vector<int>();
            vector1.push_back(0);
            for (auto&& i : vector1) { 
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
      std::vector<int> vector1 = std::vector<int>();
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int loop17 = 0; loop17 < 3; loop17++) {
            std::vector<int> vector2 = std::vector<int>();
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
            std::vector<int> vector3 = std::vector<int>();
            if (vector1.size() > 0) {
               vector1.pop_back();
            }
            for (auto&& i : vector1) {
               i--; 
            }
            std::vector<int> vector4 = std::vector<int>();
            vector2.push_back(0);
            for (auto&& i : vector2) { 
               i++; 
            }
            if(PATH0 & 4) {
               func45();
            }
            else {
               std::vector<int> vector5 = std::vector<int>();
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int loop18 = 0; loop18 < 3; loop18++) {
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
   std::vector<int> vector0 = std::vector<int>();
   vector0.push_back(0);
   for (auto&& i : vector0) { 
      i++; 
   }
   std::vector<int> vector1 = std::vector<int>();
   if (vector1.size() > 0) {
      vector1.pop_back();
   }
   for (auto&& i : vector1) {
      i--; 
   }
   std::vector<int> vector2 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   if(PATH0 & 1) {
      func33(rng());
   }
   else {
      std::vector<int> vector3 = std::vector<int>();
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int loop19 = 0; loop19 < 3; loop19++) {
            std::vector<int> vector4 = std::vector<int>();
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
            std::vector<int> vector5 = std::vector<int>();
            if (vector4.size() > 0) {
               vector4.pop_back();
            }
            for (auto&& i : vector4) {
               i--; 
            }
            std::vector<int> vector6 = std::vector<int>();
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
            if(PATH0 & 4) {
               func45();
            }
            else {
               std::vector<int> vector7 = std::vector<int>();
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int loop20 = 0; loop20 < 3; loop20++) {
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
      std::vector<int> vector0 = std::vector<int>();
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int loop21 = 0; loop21 < 3; loop21++) {
            std::vector<int> vector1 = std::vector<int>();
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
            std::vector<int> vector2 = std::vector<int>();
            if (vector0.size() > 0) {
               vector0.pop_back();
            }
            for (auto&& i : vector0) {
               i--; 
            }
            std::vector<int> vector3 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            if(PATH0 & 4) {
               func40();
            }
            else {
               std::vector<int> vector4 = std::vector<int>();
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int loop22 = 0; loop22 < 3; loop22++) {
                     std::vector<int> vector5 = std::vector<int>();
                     vector2.push_back(0);
                     for (auto&& i : vector2) { 
                        i++; 
                     }
                     std::vector<int> vector6 = std::vector<int>();
                     if (vector3.size() > 0) {
                        vector3.pop_back();
                     }
                     for (auto&& i : vector3) {
                        i--; 
                     }
                     std::vector<int> vector7 = std::vector<int>();
                     vector6.push_back(0);
                     for (auto&& i : vector6) { 
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
   std::vector<int> vector0 = std::vector<int>();
   std::vector<int> vector1 = std::vector<int>();
   vector0.push_back(0);
   for (auto&& i : vector0) { 
      i++; 
   }
   std::vector<int> vector2 = std::vector<int>();
   if (vector2.size() > 0) {
      vector2.pop_back();
   }
   for (auto&& i : vector2) {
      i--; 
   }
   std::vector<int> vector3 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   if(PATH0 & 1) {
      func28(rng());
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int loop23 = 0; loop23 < 3; loop23++) {
            std::vector<int> vector5 = std::vector<int>();
            vector5.push_back(0);
            for (auto&& i : vector5) { 
               i++; 
            }
            std::vector<int> vector6 = std::vector<int>();
            if (vector5.size() > 0) {
               vector5.pop_back();
            }
            for (auto&& i : vector5) {
               i--; 
            }
            std::vector<int> vector7 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            if(PATH0 & 4) {
               func40();
            }
            else {
               std::vector<int> vector8 = std::vector<int>();
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int loop24 = 0; loop24 < 3; loop24++) {
                     std::vector<int> vector9 = std::vector<int>();
                     vector0.push_back(0);
                     for (auto&& i : vector0) { 
                        i++; 
                     }
                     std::vector<int> vector10 = std::vector<int>();
                     if (vector7.size() > 0) {
                        vector7.pop_back();
                     }
                     for (auto&& i : vector7) {
                        i--; 
                     }
                     std::vector<int> vector11 = std::vector<int>();
                     vector9.push_back(0);
                     for (auto&& i : vector9) { 
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
   for(int loop25 = 0; loop25 < 3; loop25++) {
      std::vector<int> vector0 = std::vector<int>();
      for (auto&& i : vector0) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func14(rng());
      func15();
      func16(rng());
      func17(rng());
      printf("DELETE!\n");
   }
}

void func14(const unsigned long PATH0) {
   for(int loop26 = 0; loop26 < 3; loop26++) {
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
   std::vector<int> vector1 = std::vector<int>();
   std::vector<int> vector2 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   std::vector<int> vector3 = std::vector<int>();
   if (vector2.size() > 0) {
      vector2.pop_back();
   }
   for (auto&& i : vector2) {
      i--; 
   }
   std::vector<int> vector4 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   if(PATH0 & 1) {
      func33(rng());
   }
   else {
      std::vector<int> vector5 = std::vector<int>();
      if(PATH0 & 2) {
         func36();
      }
      else {
         for(int loop27 = 0; loop27 < 3; loop27++) {
            std::vector<int> vector6 = std::vector<int>();
            vector4.push_back(0);
            for (auto&& i : vector4) { 
               i++; 
            }
            std::vector<int> vector7 = std::vector<int>();
            if (vector7.size() > 0) {
               vector7.pop_back();
            }
            for (auto&& i : vector7) {
               i--; 
            }
            std::vector<int> vector8 = std::vector<int>();
            vector5.push_back(0);
            for (auto&& i : vector5) { 
               i++; 
            }
            if(PATH0 & 4) {
               func45();
            }
            else {
               std::vector<int> vector9 = std::vector<int>();
               if(PATH0 & 8) {
                  func48();
               }
               else {
                  for(int loop28 = 0; loop28 < 3; loop28++) {
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
   for(int loop29 = 0; loop29 < 3; loop29++) {
      std::vector<int> vector1 = std::vector<int>();
      for (auto&& i : vector1) {
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
   std::vector<int> vector1 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   std::vector<int> vector2 = std::vector<int>();
   if (vector2.size() > 0) {
      vector2.pop_back();
   }
   for (auto&& i : vector2) {
      i--; 
   }
   std::vector<int> vector3 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   if(PATH0 & 1) {
      func28(rng());
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      if(PATH0 & 2) {
         func30();
      }
      else {
         for(int loop30 = 0; loop30 < 3; loop30++) {
            std::vector<int> vector5 = std::vector<int>();
            vector5.push_back(0);
            for (auto&& i : vector5) { 
               i++; 
            }
            std::vector<int> vector6 = std::vector<int>();
            if (vector2.size() > 0) {
               vector2.pop_back();
            }
            for (auto&& i : vector2) {
               i--; 
            }
            std::vector<int> vector7 = std::vector<int>();
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
            if(PATH0 & 4) {
               func40();
            }
            else {
               std::vector<int> vector8 = std::vector<int>();
               if(PATH0 & 8) {
                  func42();
               }
               else {
                  for(int loop31 = 0; loop31 < 3; loop31++) {
                     std::vector<int> vector9 = std::vector<int>();
                     vector1.push_back(0);
                     for (auto&& i : vector1) { 
                        i++; 
                     }
                     std::vector<int> vector10 = std::vector<int>();
                     if (vector6.size() > 0) {
                        vector6.pop_back();
                     }
                     for (auto&& i : vector6) {
                        i--; 
                     }
                     std::vector<int> vector11 = std::vector<int>();
                     vector10.push_back(0);
                     for (auto&& i : vector10) { 
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
      std::vector<int> vector1 = std::vector<int>();
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int loop32 = 0; loop32 < 3; loop32++) {
            std::vector<int> vector2 = std::vector<int>();
            vector2.push_back(0);
            for (auto&& i : vector2) { 
               i++; 
            }
            std::vector<int> vector3 = std::vector<int>();
            if (vector3.size() > 0) {
               vector3.pop_back();
            }
            for (auto&& i : vector3) {
               i--; 
            }
            std::vector<int> vector4 = std::vector<int>();
            vector4.push_back(0);
            for (auto&& i : vector4) { 
               i++; 
            }
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               std::vector<int> vector5 = std::vector<int>();
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int loop33 = 0; loop33 < 3; loop33++) {
                     std::vector<int> vector6 = std::vector<int>();
                     vector3.push_back(0);
                     for (auto&& i : vector3) { 
                        i++; 
                     }
                     std::vector<int> vector7 = std::vector<int>();
                     if (vector1.size() > 0) {
                        vector1.pop_back();
                     }
                     for (auto&& i : vector1) {
                        i--; 
                     }
                     std::vector<int> vector8 = std::vector<int>();
                     vector4.push_back(0);
                     for (auto&& i : vector4) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        std::vector<int> vector9 = std::vector<int>();
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int loop34 = 0; loop34 < 3; loop34++) {
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
   std::vector<int> vector0 = std::vector<int>();
   vector0.push_back(0);
   for (auto&& i : vector0) { 
      i++; 
   }
   std::vector<int> vector1 = std::vector<int>();
   if (vector1.size() > 0) {
      vector1.pop_back();
   }
   for (auto&& i : vector1) {
      i--; 
   }
   std::vector<int> vector2 = std::vector<int>();
   vector0.push_back(0);
   for (auto&& i : vector0) { 
      i++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      std::vector<int> vector3 = std::vector<int>();
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int loop35 = 0; loop35 < 3; loop35++) {
            std::vector<int> vector4 = std::vector<int>();
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
            std::vector<int> vector5 = std::vector<int>();
            if (vector2.size() > 0) {
               vector2.pop_back();
            }
            for (auto&& i : vector2) {
               i--; 
            }
            std::vector<int> vector6 = std::vector<int>();
            vector4.push_back(0);
            for (auto&& i : vector4) { 
               i++; 
            }
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               std::vector<int> vector7 = std::vector<int>();
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int loop36 = 0; loop36 < 3; loop36++) {
                     std::vector<int> vector8 = std::vector<int>();
                     vector3.push_back(0);
                     for (auto&& i : vector3) { 
                        i++; 
                     }
                     std::vector<int> vector9 = std::vector<int>();
                     if (vector3.size() > 0) {
                        vector3.pop_back();
                     }
                     for (auto&& i : vector3) {
                        i--; 
                     }
                     std::vector<int> vector10 = std::vector<int>();
                     vector10.push_back(0);
                     for (auto&& i : vector10) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        std::vector<int> vector11 = std::vector<int>();
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int loop37 = 0; loop37 < 3; loop37++) {
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
      std::vector<int> vector0 = std::vector<int>();
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int loop38 = 0; loop38 < 3; loop38++) {
            std::vector<int> vector1 = std::vector<int>();
            vector0.push_back(0);
            for (auto&& i : vector0) { 
               i++; 
            }
            std::vector<int> vector2 = std::vector<int>();
            if (vector1.size() > 0) {
               vector1.pop_back();
            }
            for (auto&& i : vector1) {
               i--; 
            }
            std::vector<int> vector3 = std::vector<int>();
            vector0.push_back(0);
            for (auto&& i : vector0) { 
               i++; 
            }
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               std::vector<int> vector4 = std::vector<int>();
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int loop39 = 0; loop39 < 3; loop39++) {
                     std::vector<int> vector5 = std::vector<int>();
                     vector0.push_back(0);
                     for (auto&& i : vector0) { 
                        i++; 
                     }
                     std::vector<int> vector6 = std::vector<int>();
                     if (vector5.size() > 0) {
                        vector5.pop_back();
                     }
                     for (auto&& i : vector5) {
                        i--; 
                     }
                     std::vector<int> vector7 = std::vector<int>();
                     vector0.push_back(0);
                     for (auto&& i : vector0) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        std::vector<int> vector8 = std::vector<int>();
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int loop40 = 0; loop40 < 3; loop40++) {
                              std::vector<int> vector9 = std::vector<int>();
                              vector9.push_back(0);
                              for (auto&& i : vector9) { 
                                 i++; 
                              }
                              std::vector<int> vector10 = std::vector<int>();
                              if (vector4.size() > 0) {
                                 vector4.pop_back();
                              }
                              for (auto&& i : vector4) {
                                 i--; 
                              }
                              std::vector<int> vector11 = std::vector<int>();
                              vector10.push_back(0);
                              for (auto&& i : vector10) { 
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
}

void func18() {
   func19(rng());
   func20();
   func21(rng());
   func22(rng());
}

void func1(const unsigned long PATH0) {
   std::vector<int> vector0 = std::vector<int>();
   std::vector<int> vector1 = std::vector<int>();
   vector0.push_back(0);
   for (auto&& i : vector0) { 
      i++; 
   }
   std::vector<int> vector2 = std::vector<int>();
   if (vector0.size() > 0) {
      vector0.pop_back();
   }
   for (auto&& i : vector0) {
      i--; 
   }
   std::vector<int> vector3 = std::vector<int>();
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int loop41 = 0; loop41 < 3; loop41++) {
            std::vector<int> vector5 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            std::vector<int> vector6 = std::vector<int>();
            if (vector0.size() > 0) {
               vector0.pop_back();
            }
            for (auto&& i : vector0) {
               i--; 
            }
            std::vector<int> vector7 = std::vector<int>();
            vector2.push_back(0);
            for (auto&& i : vector2) { 
               i++; 
            }
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               std::vector<int> vector8 = std::vector<int>();
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int loop42 = 0; loop42 < 3; loop42++) {
                     std::vector<int> vector9 = std::vector<int>();
                     vector8.push_back(0);
                     for (auto&& i : vector8) { 
                        i++; 
                     }
                     std::vector<int> vector10 = std::vector<int>();
                     if (vector5.size() > 0) {
                        vector5.pop_back();
                     }
                     for (auto&& i : vector5) {
                        i--; 
                     }
                     std::vector<int> vector11 = std::vector<int>();
                     vector9.push_back(0);
                     for (auto&& i : vector9) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        std::vector<int> vector12 = std::vector<int>();
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int loop43 = 0; loop43 < 3; loop43++) {
                              std::vector<int> vector13 = std::vector<int>();
                              vector7.push_back(0);
                              for (auto&& i : vector7) { 
                                 i++; 
                              }
                              std::vector<int> vector14 = std::vector<int>();
                              if (vector2.size() > 0) {
                                 vector2.pop_back();
                              }
                              for (auto&& i : vector2) {
                                 i--; 
                              }
                              std::vector<int> vector15 = std::vector<int>();
                              vector5.push_back(0);
                              for (auto&& i : vector5) { 
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
         std::vector<int> vector1 = std::vector<int>();
         if(PATH0 & 4) {
            func6();
         }
         else {
            for(int loop57 = 0; loop57 < 3; loop57++) {
               std::vector<int> vector2 = std::vector<int>();
               vector2.push_back(0);
               for (auto&& i : vector2) { 
                  i++; 
               }
               std::vector<int> vector3 = std::vector<int>();
               if (vector3.size() > 0) {
                  vector3.pop_back();
               }
               for (auto&& i : vector3) {
                  i--; 
               }
               std::vector<int> vector4 = std::vector<int>();
               vector2.push_back(0);
               for (auto&& i : vector2) { 
                  i++; 
               }
               if(PATH0 & 8) {
                  func16(rng());
               }
               else {
                  std::vector<int> vector5 = std::vector<int>();
                  if(PATH0 & 16) {
                     func18();
                  }
                  else {
                     for(int loop58 = 0; loop58 < 3; loop58++) {
                        std::vector<int> vector6 = std::vector<int>();
                        vector4.push_back(0);
                        for (auto&& i : vector4) { 
                           i++; 
                        }
                        std::vector<int> vector7 = std::vector<int>();
                        if (vector5.size() > 0) {
                           vector5.pop_back();
                        }
                        for (auto&& i : vector5) {
                           i--; 
                        }
                        std::vector<int> vector8 = std::vector<int>();
                        vector7.push_back(0);
                        for (auto&& i : vector7) { 
                           i++; 
                        }
                        if(PATH0 & 32) {
                           func28(rng());
                        }
                        else {
                           std::vector<int> vector9 = std::vector<int>();
                           if(PATH0 & 64) {
                              func30();
                           }
                           else {
                              for(int loop59 = 0; loop59 < 3; loop59++) {
                                 std::vector<int> vector10 = std::vector<int>();
                                 vector9.push_back(0);
                                 for (auto&& i : vector9) { 
                                    i++; 
                                 }
                                 std::vector<int> vector11 = std::vector<int>();
                                 if (vector4.size() > 0) {
                                    vector4.pop_back();
                                 }
                                 for (auto&& i : vector4) {
                                    i--; 
                                 }
                                 std::vector<int> vector12 = std::vector<int>();
                                 vector12.push_back(0);
                                 for (auto&& i : vector12) { 
                                    i++; 
                                 }
                                 if(PATH0 & 128) {
                                    func40();
                                 }
                                 else {
                                    std::vector<int> vector13 = std::vector<int>();
                                    if(PATH0 & 256) {
                                       func42();
                                    }
                                    else {
                                       for(int loop60 = 0; loop60 < 3; loop60++) {
                                          std::vector<int> vector14 = std::vector<int>();
                                          vector11.push_back(0);
                                          for (auto&& i : vector11) { 
                                             i++; 
                                          }
                                          std::vector<int> vector15 = std::vector<int>();
                                          if (vector10.size() > 0) {
                                             vector10.pop_back();
                                          }
                                          for (auto&& i : vector10) {
                                             i--; 
                                          }
                                          std::vector<int> vector16 = std::vector<int>();
                                          vector5.push_back(0);
                                          for (auto&& i : vector5) { 
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
         }
      }
   }
   else {
      for(int loop61 = 0; loop61 < 3; loop61++) {
         for(int loop62 = 0; loop62 < 3; loop62++) {
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
         std::vector<int> vector1 = std::vector<int>();
         vector1.push_back(0);
         for (auto&& i : vector1) { 
            i++; 
         }
         std::vector<int> vector2 = std::vector<int>();
         if (vector1.size() > 0) {
            vector1.pop_back();
         }
         for (auto&& i : vector1) {
            i--; 
         }
         std::vector<int> vector3 = std::vector<int>();
         vector2.push_back(0);
         for (auto&& i : vector2) { 
            i++; 
         }
         if(PATH0 & 1024) {
            func9(rng());
         }
         else {
            std::vector<int> vector4 = std::vector<int>();
            if(PATH0 & 2048) {
               func12();
            }
            else {
               for(int loop63 = 0; loop63 < 3; loop63++) {
                  std::vector<int> vector5 = std::vector<int>();
                  vector2.push_back(0);
                  for (auto&& i : vector2) { 
                     i++; 
                  }
                  std::vector<int> vector6 = std::vector<int>();
                  if (vector4.size() > 0) {
                     vector4.pop_back();
                  }
                  for (auto&& i : vector4) {
                     i--; 
                  }
                  std::vector<int> vector7 = std::vector<int>();
                  vector5.push_back(0);
                  for (auto&& i : vector5) { 
                     i++; 
                  }
                  if(PATH0 & 4096) {
                     func21(rng());
                  }
                  else {
                     std::vector<int> vector8 = std::vector<int>();
                     if(PATH0 & 8192) {
                        func24();
                     }
                     else {
                        for(int loop64 = 0; loop64 < 3; loop64++) {
                           std::vector<int> vector9 = std::vector<int>();
                           vector3.push_back(0);
                           for (auto&& i : vector3) { 
                              i++; 
                           }
                           std::vector<int> vector10 = std::vector<int>();
                           if (vector10.size() > 0) {
                              vector10.pop_back();
                           }
                           for (auto&& i : vector10) {
                              i--; 
                           }
                           std::vector<int> vector11 = std::vector<int>();
                           vector7.push_back(0);
                           for (auto&& i : vector7) { 
                              i++; 
                           }
                           if(PATH0 & 16384) {
                              func33(rng());
                           }
                           else {
                              std::vector<int> vector12 = std::vector<int>();
                              if(PATH0 & 32768) {
                                 func36();
                              }
                              else {
                                 for(int loop65 = 0; loop65 < 3; loop65++) {
                                    std::vector<int> vector13 = std::vector<int>();
                                    vector1.push_back(0);
                                    for (auto&& i : vector1) { 
                                       i++; 
                                    }
                                    std::vector<int> vector14 = std::vector<int>();
                                    if (vector1.size() > 0) {
                                       vector1.pop_back();
                                    }
                                    for (auto&& i : vector1) {
                                       i--; 
                                    }
                                    std::vector<int> vector15 = std::vector<int>();
                                    vector2.push_back(0);
                                    for (auto&& i : vector2) { 
                                       i++; 
                                    }
                                    if(PATH0 & 65536) {
                                       func45();
                                    }
                                    else {
                                       std::vector<int> vector16 = std::vector<int>();
                                       if(PATH0 & 131072) {
                                          func48();
                                       }
                                       else {
                                          for(int loop66 = 0; loop66 < 3; loop66++) {
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
   for(int loop45 = 0; loop45 < 3; loop45++) {
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
   std::vector<int> vector1 = std::vector<int>();
   std::vector<int> vector2 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   std::vector<int> vector3 = std::vector<int>();
   if (vector3.size() > 0) {
      vector3.pop_back();
   }
   for (auto&& i : vector3) {
      i--; 
   }
   std::vector<int> vector4 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      std::vector<int> vector5 = std::vector<int>();
      if(PATH0 & 2) {
         func24();
      }
      else {
         for(int loop46 = 0; loop46 < 3; loop46++) {
            std::vector<int> vector6 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            std::vector<int> vector7 = std::vector<int>();
            if (vector7.size() > 0) {
               vector7.pop_back();
            }
            for (auto&& i : vector7) {
               i--; 
            }
            std::vector<int> vector8 = std::vector<int>();
            vector2.push_back(0);
            for (auto&& i : vector2) { 
               i++; 
            }
            if(PATH0 & 4) {
               func33(rng());
            }
            else {
               std::vector<int> vector9 = std::vector<int>();
               if(PATH0 & 8) {
                  func36();
               }
               else {
                  for(int loop47 = 0; loop47 < 3; loop47++) {
                     std::vector<int> vector10 = std::vector<int>();
                     vector6.push_back(0);
                     for (auto&& i : vector6) { 
                        i++; 
                     }
                     std::vector<int> vector11 = std::vector<int>();
                     if (vector11.size() > 0) {
                        vector11.pop_back();
                     }
                     for (auto&& i : vector11) {
                        i--; 
                     }
                     std::vector<int> vector12 = std::vector<int>();
                     vector5.push_back(0);
                     for (auto&& i : vector5) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func45();
                     }
                     else {
                        std::vector<int> vector13 = std::vector<int>();
                        if(PATH0 & 32) {
                           func48();
                        }
                        else {
                           for(int loop48 = 0; loop48 < 3; loop48++) {
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
   for(int loop49 = 0; loop49 < 3; loop49++) {
      std::vector<int> vector1 = std::vector<int>();
      for (auto&& i : vector1) {
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
   std::vector<int> vector1 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   std::vector<int> vector2 = std::vector<int>();
   if (vector2.size() > 0) {
      vector2.pop_back();
   }
   for (auto&& i : vector2) {
      i--; 
   }
   std::vector<int> vector3 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      if(PATH0 & 2) {
         func18();
      }
      else {
         for(int loop50 = 0; loop50 < 3; loop50++) {
            std::vector<int> vector5 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            std::vector<int> vector6 = std::vector<int>();
            if (vector4.size() > 0) {
               vector4.pop_back();
            }
            for (auto&& i : vector4) {
               i--; 
            }
            std::vector<int> vector7 = std::vector<int>();
            vector5.push_back(0);
            for (auto&& i : vector5) { 
               i++; 
            }
            if(PATH0 & 4) {
               func28(rng());
            }
            else {
               std::vector<int> vector8 = std::vector<int>();
               if(PATH0 & 8) {
                  func30();
               }
               else {
                  for(int loop51 = 0; loop51 < 3; loop51++) {
                     std::vector<int> vector9 = std::vector<int>();
                     vector4.push_back(0);
                     for (auto&& i : vector4) { 
                        i++; 
                     }
                     std::vector<int> vector10 = std::vector<int>();
                     if (vector6.size() > 0) {
                        vector6.pop_back();
                     }
                     for (auto&& i : vector6) {
                        i--; 
                     }
                     std::vector<int> vector11 = std::vector<int>();
                     vector11.push_back(0);
                     for (auto&& i : vector11) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func40();
                     }
                     else {
                        std::vector<int> vector12 = std::vector<int>();
                        if(PATH0 & 32) {
                           func42();
                        }
                        else {
                           for(int loop52 = 0; loop52 < 3; loop52++) {
                              std::vector<int> vector13 = std::vector<int>();
                              vector7.push_back(0);
                              for (auto&& i : vector7) { 
                                 i++; 
                              }
                              std::vector<int> vector14 = std::vector<int>();
                              if (vector12.size() > 0) {
                                 vector12.pop_back();
                              }
                              for (auto&& i : vector12) {
                                 i--; 
                              }
                              std::vector<int> vector15 = std::vector<int>();
                              vector2.push_back(0);
                              for (auto&& i : vector2) { 
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
      std::vector<int> vector1 = std::vector<int>();
      if(PATH0 & 2) {
         func12();
      }
      else {
         for(int loop53 = 0; loop53 < 3; loop53++) {
            std::vector<int> vector2 = std::vector<int>();
            vector2.push_back(0);
            for (auto&& i : vector2) { 
               i++; 
            }
            std::vector<int> vector3 = std::vector<int>();
            if (vector1.size() > 0) {
               vector1.pop_back();
            }
            for (auto&& i : vector1) {
               i--; 
            }
            std::vector<int> vector4 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            if(PATH0 & 4) {
               func21(rng());
            }
            else {
               std::vector<int> vector5 = std::vector<int>();
               if(PATH0 & 8) {
                  func24();
               }
               else {
                  for(int loop54 = 0; loop54 < 3; loop54++) {
                     std::vector<int> vector6 = std::vector<int>();
                     vector6.push_back(0);
                     for (auto&& i : vector6) { 
                        i++; 
                     }
                     std::vector<int> vector7 = std::vector<int>();
                     if (vector2.size() > 0) {
                        vector2.pop_back();
                     }
                     for (auto&& i : vector2) {
                        i--; 
                     }
                     std::vector<int> vector8 = std::vector<int>();
                     vector4.push_back(0);
                     for (auto&& i : vector4) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func33(rng());
                     }
                     else {
                        std::vector<int> vector9 = std::vector<int>();
                        if(PATH0 & 32) {
                           func36();
                        }
                        else {
                           for(int loop55 = 0; loop55 < 3; loop55++) {
                              std::vector<int> vector10 = std::vector<int>();
                              vector10.push_back(0);
                              for (auto&& i : vector10) { 
                                 i++; 
                              }
                              std::vector<int> vector11 = std::vector<int>();
                              if (vector8.size() > 0) {
                                 vector8.pop_back();
                              }
                              for (auto&& i : vector8) {
                                 i--; 
                              }
                              std::vector<int> vector12 = std::vector<int>();
                              vector5.push_back(0);
                              for (auto&& i : vector5) { 
                                 i++; 
                              }
                              if(PATH0 & 64) {
                                 func45();
                              }
                              else {
                                 std::vector<int> vector13 = std::vector<int>();
                                 if(PATH0 & 128) {
                                    func48();
                                 }
                                 else {
                                    for(int loop56 = 0; loop56 < 3; loop56++) {
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

