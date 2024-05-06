#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


unsigned long rng();
void func0(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func21(const unsigned long PATH0);
void func33();
void func34();
void func39();
void func40();
void func41();
void func42();
void func22();
void func27(const unsigned long PATH0);
void func35();
void func28();
void func36(const unsigned long PATH0);
void func43();
void func37();
void func38(const unsigned long PATH0);
void func44();
void func29(const unsigned long PATH0);
void func30(const unsigned long PATH0);
void func10();
void func15(const unsigned long PATH0);
void func23(const unsigned long PATH0);
void func16();
void func24(const unsigned long PATH0);
void func31(const unsigned long PATH0);
void func25();
void func26(const unsigned long PATH0);
void func32();
void func17(const unsigned long PATH0);
void func18(const unsigned long PATH0);
void func3();
void func4(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func5();
void func12(const unsigned long PATH0);
void func19(const unsigned long PATH0);
void func13();
void func14(const unsigned long PATH0);
void func20();
void func6(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func8();

int main() {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      if(rng() & 1) {
         func0(rng());
      }
      else {
         func1(rng());
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

void func0(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func2(rng());
   }
   else {
      std::vector<int> vector1 = std::vector<int>();
      if(PATH0 & 2) {
         func3();
      }
      else {
         for(int scalar2 = 0; scalar2 < 10; scalar2++) {
            std::vector<int> vector3 = std::vector<int>();
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
            std::vector<int> vector4 = std::vector<int>();
            vector1.pop_back();
            for (auto&& i : vector1) {
               i--; 
            }
            std::vector<int> vector5 = std::vector<int>();
            scalar2++;
            if(PATH0 & 4) {
               func9(rng());
            }
            else {
               std::vector<int> vector6 = std::vector<int>();
               if(PATH0 & 8) {
                  func10();
               }
               else {
                  for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                     std::vector<int> vector8 = std::vector<int>();
                     vector6.push_back(0);
                     for (auto&& i : vector6) { 
                        i++; 
                     }
                     std::vector<int> vector9 = std::vector<int>();
                     for (auto&& i : vector3) {
                        i--; 
                     }
                     std::vector<int> vector10 = std::vector<int>();
                     scalar7++;
                     if(PATH0 & 16) {
                        func21(rng());
                     }
                     else {
                        std::vector<int> vector11 = std::vector<int>();
                        if(PATH0 & 32) {
                           func22();
                        }
                        else {
                           for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                              std::vector<int> vector13 = std::vector<int>();
                              scalar7++;
                              std::vector<int> vector14 = std::vector<int>();
                              for (auto&& i : vector8) {
                                 i--; 
                              }
                              std::vector<int> vector15 = std::vector<int>();
                              vector15.push_back(0);
                              for (auto&& i : vector15) { 
                                 i++; 
                              }
                              if(PATH0 & 64) {
                                 func33();
                              }
                              else {
                                 std::vector<int> vector16 = std::vector<int>();
                                 if(PATH0 & 128) {
                                    func34();
                                 }
                                 else {
                                    for(int scalar17 = 0; scalar17 < 10; scalar17++) {
                                       std::vector<int> vector18 = std::vector<int>();
                                       vector11.push_back(0);
                                       for (auto&& i : vector11) { 
                                          i++; 
                                       }
                                       std::vector<int> vector19 = std::vector<int>();
                                       scalar7--;
                                       std::vector<int> vector20 = std::vector<int>();
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

void func2(const unsigned long PATH0) {
   std::vector<int> vector1 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   std::vector<int> vector2 = std::vector<int>();
   vector1.pop_back();
   for (auto&& i : vector1) {
      i--; 
   }
   std::vector<int> vector3 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   if(PATH0 & 1) {
      func9(rng());
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      if(PATH0 & 2) {
         func10();
      }
      else {
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            std::vector<int> vector6 = std::vector<int>();
            vector2.push_back(0);
            for (auto&& i : vector2) { 
               i++; 
            }
            std::vector<int> vector7 = std::vector<int>();
            for (auto&& i : vector3) {
               i--; 
            }
            std::vector<int> vector8 = std::vector<int>();
            vector6.push_back(0);
            for (auto&& i : vector6) { 
               i++; 
            }
            if(PATH0 & 4) {
               func21(rng());
            }
            else {
               std::vector<int> vector9 = std::vector<int>();
               if(PATH0 & 8) {
                  func22();
               }
               else {
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     std::vector<int> vector11 = std::vector<int>();
                     scalar5++;
                     std::vector<int> vector12 = std::vector<int>();
                     for (auto&& i : vector4) {
                        i--; 
                     }
                     std::vector<int> vector13 = std::vector<int>();
                     vector2.push_back(0);
                     for (auto&& i : vector2) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func33();
                     }
                     else {
                        std::vector<int> vector14 = std::vector<int>();
                        if(PATH0 & 32) {
                           func34();
                        }
                        else {
                           for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                              std::vector<int> vector16 = std::vector<int>();
                              scalar10++;
                              std::vector<int> vector17 = std::vector<int>();
                              for (auto&& i : vector11) {
                                 i--; 
                              }
                              std::vector<int> vector18 = std::vector<int>();
                              vector4.push_back(0);
                              for (auto&& i : vector4) { 
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

void func9(const unsigned long PATH0) {
   std::vector<int> vector4 = std::vector<int>();
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   std::vector<int> vector5 = std::vector<int>();
   for (auto&& i : vector5) {
      i--; 
   }
   std::vector<int> vector6 = std::vector<int>();
   vector5.push_back(0);
   for (auto&& i : vector5) { 
      i++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      std::vector<int> vector7 = std::vector<int>();
      if(PATH0 & 2) {
         func22();
      }
      else {
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            std::vector<int> vector9 = std::vector<int>();
            vector5.push_back(0);
            for (auto&& i : vector5) { 
               i++; 
            }
            std::vector<int> vector10 = std::vector<int>();
            vector5.pop_back();
            for (auto&& i : vector5) {
               i--; 
            }
            std::vector<int> vector11 = std::vector<int>();
            vector11.push_back(0);
            for (auto&& i : vector11) { 
               i++; 
            }
            if(PATH0 & 4) {
               func33();
            }
            else {
               std::vector<int> vector12 = std::vector<int>();
               if(PATH0 & 8) {
                  func34();
               }
               else {
                  for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                     std::vector<int> vector14 = std::vector<int>();
                     vector14.push_back(0);
                     for (auto&& i : vector14) { 
                        i++; 
                     }
                     std::vector<int> vector15 = std::vector<int>();
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

void func21(const unsigned long PATH0) {
   std::vector<int> vector7 = std::vector<int>();
   vector7.push_back(0);
   for (auto&& i : vector7) { 
      i++; 
   }
   std::vector<int> vector8 = std::vector<int>();
   vector7.pop_back();
   for (auto&& i : vector7) {
      i--; 
   }
   std::vector<int> vector9 = std::vector<int>();
   vector7.push_back(0);
   for (auto&& i : vector7) { 
      i++; 
   }
   if(PATH0 & 1) {
      func33();
   }
   else {
      std::vector<int> vector10 = std::vector<int>();
      if(PATH0 & 2) {
         func34();
      }
      else {
         for(int scalar11 = 0; scalar11 < 10; scalar11++) {
            std::vector<int> vector12 = std::vector<int>();
            vector8.push_back(0);
            for (auto&& i : vector8) { 
               i++; 
            }
            std::vector<int> vector13 = std::vector<int>();
            for (auto&& i : vector13) {
               i--; 
            }
            std::vector<int> vector14 = std::vector<int>();
            vector13.push_back(0);
            for (auto&& i : vector13) { 
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

void func33() {
   std::vector<int> vector10 = std::vector<int>();
   vector10.push_back(0);
   for (auto&& i : vector10) { 
      i++; 
   }
   std::vector<int> vector11 = std::vector<int>();
   vector10.pop_back();
   for (auto&& i : vector10) {
      i--; 
   }
   std::vector<int> vector12 = std::vector<int>();
   vector11.push_back(0);
   for (auto&& i : vector11) { 
      i++; 
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func34() {
   func39();
   func40();
   func41();
   func42();
}

void func39() {
}

void func40() {
   for(int scalar11 = 0; scalar11 < 10; scalar11++) {
      std::vector<int> vector12 = std::vector<int>();
      if (scalar11 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func41() {
}

void func42() {
}

void func22() {
   func27(rng());
   func28();
   func29(rng());
   func30(rng());
}

void func27(const unsigned long PATH0) {
   for(int scalar8 = 0; scalar8 < 10; scalar8++) {
      if(PATH0 & 1) {
         func39();
         func40();
         func41();
         func42();
      }
      else {
         func35();
      }
   }
}

void func35() {
   std::vector<int> vector9 = std::vector<int>();
   std::vector<int> vector10 = std::vector<int>();
   vector9.push_back(0);
   for (auto&& i : vector9) { 
      i++; 
   }
   std::vector<int> vector11 = std::vector<int>();
   vector9.pop_back();
   for (auto&& i : vector9) {
      i--; 
   }
   std::vector<int> vector12 = std::vector<int>();
   vector9.push_back(0);
   for (auto&& i : vector9) { 
      i++; 
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func28() {
   for(int scalar8 = 0; scalar8 < 10; scalar8++) {
      std::vector<int> vector9 = std::vector<int>();
      if (scalar8 == 0) {
         printf("IS 0!");
      }
      func36(rng());
      func37();
      func33();
      func38(rng());
      printf("DELETE!\n");
   }
}

void func36(const unsigned long PATH0) {
   for(int scalar10 = 0; scalar10 < 10; scalar10++) {
      if(PATH0 & 1) {
      }
      else {
         func43();
      }
   }
}

void func43() {
   std::vector<int> vector11 = std::vector<int>();
   printf("DELETE!\n");
}

void func37() {
   for(int scalar10 = 0; scalar10 < 10; scalar10++) {
      std::vector<int> vector11 = std::vector<int>();
      for (auto&& i : vector11) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func39();
      func40();
      func41();
      func42();
      printf("DELETE!\n");
   }
}

void func38(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func41();
   }
   else {
      std::vector<int> vector10 = std::vector<int>();
      if(PATH0 & 2) {
         func44();
      }
      else {
         for(int scalar11 = 0; scalar11 < 10; scalar11++) {
         }
      }
   }
}

void func44() {
}

void func29(const unsigned long PATH0) {
   std::vector<int> vector8 = std::vector<int>();
   vector8.push_back(0);
   for (auto&& i : vector8) { 
      i++; 
   }
   std::vector<int> vector9 = std::vector<int>();
   for (auto&& i : vector9) {
      i--; 
   }
   std::vector<int> vector10 = std::vector<int>();
   vector8.push_back(0);
   for (auto&& i : vector8) { 
      i++; 
   }
   if(PATH0 & 1) {
      func41();
   }
   else {
      std::vector<int> vector11 = std::vector<int>();
      if(PATH0 & 2) {
         func44();
      }
      else {
         for(int scalar12 = 0; scalar12 < 10; scalar12++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func30(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func33();
   }
   else {
      std::vector<int> vector8 = std::vector<int>();
      if(PATH0 & 2) {
         func34();
      }
      else {
         for(int scalar9 = 0; scalar9 < 10; scalar9++) {
            std::vector<int> vector10 = std::vector<int>();
            vector10.push_back(0);
            for (auto&& i : vector10) { 
               i++; 
            }
            std::vector<int> vector11 = std::vector<int>();
            vector10.pop_back();
            for (auto&& i : vector10) {
               i--; 
            }
            std::vector<int> vector12 = std::vector<int>();
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
}

void func10() {
   func15(rng());
   func16();
   func17(rng());
   func18(rng());
}

void func15(const unsigned long PATH0) {
   for(int scalar5 = 0; scalar5 < 10; scalar5++) {
      if(PATH0 & 1) {
         func27(rng());
         func28();
         func29(rng());
         func30(rng());
      }
      else {
         func23(rng());
      }
   }
}

void func23(const unsigned long PATH0) {
   std::vector<int> vector6 = std::vector<int>();
   std::vector<int> vector7 = std::vector<int>();
   vector6.push_back(0);
   for (auto&& i : vector6) { 
      i++; 
   }
   std::vector<int> vector8 = std::vector<int>();
   for (auto&& i : vector8) {
      i--; 
   }
   std::vector<int> vector9 = std::vector<int>();
   vector9.push_back(0);
   for (auto&& i : vector9) { 
      i++; 
   }
   if(PATH0 & 1) {
      func33();
   }
   else {
      std::vector<int> vector10 = std::vector<int>();
      if(PATH0 & 2) {
         func34();
      }
      else {
         for(int scalar11 = 0; scalar11 < 10; scalar11++) {
            std::vector<int> vector12 = std::vector<int>();
            vector7.push_back(0);
            for (auto&& i : vector7) { 
               i++; 
            }
            std::vector<int> vector13 = std::vector<int>();
            vector6.pop_back();
            for (auto&& i : vector6) {
               i--; 
            }
            std::vector<int> vector14 = std::vector<int>();
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
   printf("DELETE!\n");
}

void func16() {
   for(int scalar5 = 0; scalar5 < 10; scalar5++) {
      std::vector<int> vector6 = std::vector<int>();
      if (scalar5 == 0) {
         printf("IS 0!");
      }
      func24(rng());
      func25();
      func21(rng());
      func26(rng());
      printf("DELETE!\n");
   }
}

void func24(const unsigned long PATH0) {
   for(int scalar7 = 0; scalar7 < 10; scalar7++) {
      if(PATH0 & 1) {
         func36(rng());
         func37();
         func33();
         func38(rng());
      }
      else {
         func31(rng());
      }
   }
}

void func31(const unsigned long PATH0) {
   std::vector<int> vector8 = std::vector<int>();
   std::vector<int> vector9 = std::vector<int>();
   vector9.push_back(0);
   for (auto&& i : vector9) { 
      i++; 
   }
   std::vector<int> vector10 = std::vector<int>();
   for (auto&& i : vector8) {
      i--; 
   }
   std::vector<int> vector11 = std::vector<int>();
   vector9.push_back(0);
   for (auto&& i : vector9) { 
      i++; 
   }
   if(PATH0 & 1) {
      func41();
   }
   else {
      std::vector<int> vector12 = std::vector<int>();
      if(PATH0 & 2) {
         func44();
      }
      else {
         for(int scalar13 = 0; scalar13 < 10; scalar13++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func25() {
   for(int scalar7 = 0; scalar7 < 10; scalar7++) {
      std::vector<int> vector8 = std::vector<int>();
      for (auto&& i : vector8) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func27(rng());
      func28();
      func29(rng());
      func30(rng());
      printf("DELETE!\n");
   }
}

void func26(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func29(rng());
   }
   else {
      std::vector<int> vector7 = std::vector<int>();
      if(PATH0 & 2) {
         func32();
      }
      else {
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            std::vector<int> vector9 = std::vector<int>();
            vector9.push_back(0);
            for (auto&& i : vector9) { 
               i++; 
            }
            std::vector<int> vector10 = std::vector<int>();
            scalar8--;
            std::vector<int> vector11 = std::vector<int>();
            vector10.push_back(0);
            for (auto&& i : vector10) { 
               i++; 
            }
            if(PATH0 & 4) {
               func41();
            }
            else {
               std::vector<int> vector12 = std::vector<int>();
               if(PATH0 & 8) {
                  func44();
               }
               else {
                  for(int scalar13 = 0; scalar13 < 10; scalar13++) {
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

void func32() {
   func36(rng());
   func37();
   func33();
   func38(rng());
}

void func17(const unsigned long PATH0) {
   std::vector<int> vector5 = std::vector<int>();
   vector5.push_back(0);
   for (auto&& i : vector5) { 
      i++; 
   }
   std::vector<int> vector6 = std::vector<int>();
   for (auto&& i : vector6) {
      i--; 
   }
   std::vector<int> vector7 = std::vector<int>();
   vector5.push_back(0);
   for (auto&& i : vector5) { 
      i++; 
   }
   if(PATH0 & 1) {
      func29(rng());
   }
   else {
      std::vector<int> vector8 = std::vector<int>();
      if(PATH0 & 2) {
         func32();
      }
      else {
         for(int scalar9 = 0; scalar9 < 10; scalar9++) {
            std::vector<int> vector10 = std::vector<int>();
            vector10.push_back(0);
            for (auto&& i : vector10) { 
               i++; 
            }
            std::vector<int> vector11 = std::vector<int>();
            vector10.pop_back();
            for (auto&& i : vector10) {
               i--; 
            }
            std::vector<int> vector12 = std::vector<int>();
            vector8.push_back(0);
            for (auto&& i : vector8) { 
               i++; 
            }
            if(PATH0 & 4) {
               func41();
            }
            else {
               std::vector<int> vector13 = std::vector<int>();
               if(PATH0 & 8) {
                  func44();
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

void func18(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      std::vector<int> vector5 = std::vector<int>();
      if(PATH0 & 2) {
         func22();
      }
      else {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            std::vector<int> vector7 = std::vector<int>();
            vector7.push_back(0);
            for (auto&& i : vector7) { 
               i++; 
            }
            std::vector<int> vector8 = std::vector<int>();
            for (auto&& i : vector5) {
               i--; 
            }
            std::vector<int> vector9 = std::vector<int>();
            vector8.push_back(0);
            for (auto&& i : vector8) { 
               i++; 
            }
            if(PATH0 & 4) {
               func33();
            }
            else {
               std::vector<int> vector10 = std::vector<int>();
               if(PATH0 & 8) {
                  func34();
               }
               else {
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     std::vector<int> vector12 = std::vector<int>();
                     scalar11++;
                     std::vector<int> vector13 = std::vector<int>();
                     for (auto&& i : vector10) {
                        i--; 
                     }
                     std::vector<int> vector14 = std::vector<int>();
                     scalar11++;
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

void func3() {
   func4(rng());
   func5();
   func6(rng());
   func7(rng());
}

void func4(const unsigned long PATH0) {
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      if(PATH0 & 1) {
         func15(rng());
         func16();
         func17(rng());
         func18(rng());
      }
      else {
         func11(rng());
      }
   }
}

void func11(const unsigned long PATH0) {
   std::vector<int> vector3 = std::vector<int>();
   std::vector<int> vector4 = std::vector<int>();
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   std::vector<int> vector5 = std::vector<int>();
   for (auto&& i : vector5) {
      i--; 
   }
   std::vector<int> vector6 = std::vector<int>();
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      std::vector<int> vector7 = std::vector<int>();
      if(PATH0 & 2) {
         func22();
      }
      else {
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            std::vector<int> vector9 = std::vector<int>();
            vector6.push_back(0);
            for (auto&& i : vector6) { 
               i++; 
            }
            std::vector<int> vector10 = std::vector<int>();
            for (auto&& i : vector9) {
               i--; 
            }
            std::vector<int> vector11 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            if(PATH0 & 4) {
               func33();
            }
            else {
               std::vector<int> vector12 = std::vector<int>();
               if(PATH0 & 8) {
                  func34();
               }
               else {
                  for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                     std::vector<int> vector14 = std::vector<int>();
                     vector5.push_back(0);
                     for (auto&& i : vector5) { 
                        i++; 
                     }
                     std::vector<int> vector15 = std::vector<int>();
                     scalar8--;
                     std::vector<int> vector16 = std::vector<int>();
                     vector7.push_back(0);
                     for (auto&& i : vector7) { 
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

void func5() {
   for(int scalar2 = 0; scalar2 < 10; scalar2++) {
      std::vector<int> vector3 = std::vector<int>();
      if (scalar2 == 0) {
         printf("IS 0!");
      }
      func12(rng());
      func13();
      func9(rng());
      func14(rng());
      printf("DELETE!\n");
   }
}

void func12(const unsigned long PATH0) {
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      if(PATH0 & 1) {
         func24(rng());
         func25();
         func21(rng());
         func26(rng());
      }
      else {
         func19(rng());
      }
   }
}

void func19(const unsigned long PATH0) {
   std::vector<int> vector5 = std::vector<int>();
   std::vector<int> vector6 = std::vector<int>();
   vector6.push_back(0);
   for (auto&& i : vector6) { 
      i++; 
   }
   std::vector<int> vector7 = std::vector<int>();
   for (auto&& i : vector7) {
      i--; 
   }
   std::vector<int> vector8 = std::vector<int>();
   vector8.push_back(0);
   for (auto&& i : vector8) { 
      i++; 
   }
   if(PATH0 & 1) {
      func29(rng());
   }
   else {
      std::vector<int> vector9 = std::vector<int>();
      if(PATH0 & 2) {
         func32();
      }
      else {
         for(int scalar10 = 0; scalar10 < 10; scalar10++) {
            std::vector<int> vector11 = std::vector<int>();
            vector8.push_back(0);
            for (auto&& i : vector8) { 
               i++; 
            }
            std::vector<int> vector12 = std::vector<int>();
            for (auto&& i : vector9) {
               i--; 
            }
            std::vector<int> vector13 = std::vector<int>();
            vector13.push_back(0);
            for (auto&& i : vector13) { 
               i++; 
            }
            if(PATH0 & 4) {
               func41();
            }
            else {
               std::vector<int> vector14 = std::vector<int>();
               if(PATH0 & 8) {
                  func44();
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
   printf("DELETE!\n");
}

void func13() {
   for(int scalar4 = 0; scalar4 < 10; scalar4++) {
      std::vector<int> vector5 = std::vector<int>();
      if (scalar4 == 0) {
         printf("IS 0!");
      }
      func15(rng());
      func16();
      func17(rng());
      func18(rng());
      printf("DELETE!\n");
   }
}

void func14(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func17(rng());
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      if(PATH0 & 2) {
         func20();
      }
      else {
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            std::vector<int> vector6 = std::vector<int>();
            vector4.push_back(0);
            for (auto&& i : vector4) { 
               i++; 
            }
            std::vector<int> vector7 = std::vector<int>();
            for (auto&& i : vector7) {
               i--; 
            }
            std::vector<int> vector8 = std::vector<int>();
            scalar5++;
            if(PATH0 & 4) {
               func29(rng());
            }
            else {
               std::vector<int> vector9 = std::vector<int>();
               if(PATH0 & 8) {
                  func32();
               }
               else {
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     std::vector<int> vector11 = std::vector<int>();
                     vector6.push_back(0);
                     for (auto&& i : vector6) { 
                        i++; 
                     }
                     std::vector<int> vector12 = std::vector<int>();
                     scalar5--;
                     std::vector<int> vector13 = std::vector<int>();
                     vector6.push_back(0);
                     for (auto&& i : vector6) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func41();
                     }
                     else {
                        std::vector<int> vector14 = std::vector<int>();
                        if(PATH0 & 32) {
                           func44();
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
}

void func20() {
   func24(rng());
   func25();
   func21(rng());
   func26(rng());
}

void func6(const unsigned long PATH0) {
   std::vector<int> vector2 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   std::vector<int> vector3 = std::vector<int>();
   vector2.pop_back();
   for (auto&& i : vector2) {
      i--; 
   }
   std::vector<int> vector4 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   if(PATH0 & 1) {
      func17(rng());
   }
   else {
      std::vector<int> vector5 = std::vector<int>();
      if(PATH0 & 2) {
         func20();
      }
      else {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            std::vector<int> vector7 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            std::vector<int> vector8 = std::vector<int>();
            vector3.pop_back();
            for (auto&& i : vector3) {
               i--; 
            }
            std::vector<int> vector9 = std::vector<int>();
            vector4.push_back(0);
            for (auto&& i : vector4) { 
               i++; 
            }
            if(PATH0 & 4) {
               func29(rng());
            }
            else {
               std::vector<int> vector10 = std::vector<int>();
               if(PATH0 & 8) {
                  func32();
               }
               else {
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     std::vector<int> vector12 = std::vector<int>();
                     scalar11++;
                     std::vector<int> vector13 = std::vector<int>();
                     for (auto&& i : vector8) {
                        i--; 
                     }
                     std::vector<int> vector14 = std::vector<int>();
                     vector3.push_back(0);
                     for (auto&& i : vector3) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func41();
                     }
                     else {
                        std::vector<int> vector15 = std::vector<int>();
                        if(PATH0 & 32) {
                           func44();
                        }
                        else {
                           for(int scalar16 = 0; scalar16 < 10; scalar16++) {
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

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func9(rng());
   }
   else {
      std::vector<int> vector2 = std::vector<int>();
      if(PATH0 & 2) {
         func10();
      }
      else {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            std::vector<int> vector4 = std::vector<int>();
            vector2.push_back(0);
            for (auto&& i : vector2) { 
               i++; 
            }
            std::vector<int> vector5 = std::vector<int>();
            for (auto&& i : vector4) {
               i--; 
            }
            std::vector<int> vector6 = std::vector<int>();
            vector6.push_back(0);
            for (auto&& i : vector6) { 
               i++; 
            }
            if(PATH0 & 4) {
               func21(rng());
            }
            else {
               std::vector<int> vector7 = std::vector<int>();
               if(PATH0 & 8) {
                  func22();
               }
               else {
                  for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                     std::vector<int> vector9 = std::vector<int>();
                     vector4.push_back(0);
                     for (auto&& i : vector4) { 
                        i++; 
                     }
                     std::vector<int> vector10 = std::vector<int>();
                     for (auto&& i : vector10) {
                        i--; 
                     }
                     std::vector<int> vector11 = std::vector<int>();
                     scalar3++;
                     if(PATH0 & 16) {
                        func33();
                     }
                     else {
                        std::vector<int> vector12 = std::vector<int>();
                        if(PATH0 & 32) {
                           func34();
                        }
                        else {
                           for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                              std::vector<int> vector14 = std::vector<int>();
                              vector11.push_back(0);
                              for (auto&& i : vector11) { 
                                 i++; 
                              }
                              std::vector<int> vector15 = std::vector<int>();
                              scalar8--;
                              std::vector<int> vector16 = std::vector<int>();
                              vector14.push_back(0);
                              for (auto&& i : vector14) { 
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

void func1(const unsigned long PATH0) {
   std::vector<int> vector1 = std::vector<int>();
   vector1.push_back(0);
   for (auto&& i : vector1) { 
      i++; 
   }
   std::vector<int> vector2 = std::vector<int>();
   for (auto&& i : vector2) {
      i--; 
   }
   std::vector<int> vector3 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   if(PATH0 & 1) {
      func6(rng());
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      if(PATH0 & 2) {
         func8();
      }
      else {
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            std::vector<int> vector6 = std::vector<int>();
            vector4.push_back(0);
            for (auto&& i : vector4) { 
               i++; 
            }
            std::vector<int> vector7 = std::vector<int>();
            scalar5--;
            std::vector<int> vector8 = std::vector<int>();
            vector2.push_back(0);
            for (auto&& i : vector2) { 
               i++; 
            }
            if(PATH0 & 4) {
               func17(rng());
            }
            else {
               std::vector<int> vector9 = std::vector<int>();
               if(PATH0 & 8) {
                  func20();
               }
               else {
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     std::vector<int> vector11 = std::vector<int>();
                     vector3.push_back(0);
                     for (auto&& i : vector3) { 
                        i++; 
                     }
                     std::vector<int> vector12 = std::vector<int>();
                     scalar10--;
                     std::vector<int> vector13 = std::vector<int>();
                     vector7.push_back(0);
                     for (auto&& i : vector7) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func29(rng());
                     }
                     else {
                        std::vector<int> vector14 = std::vector<int>();
                        if(PATH0 & 32) {
                           func32();
                        }
                        else {
                           for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                              std::vector<int> vector16 = std::vector<int>();
                              vector8.push_back(0);
                              for (auto&& i : vector8) { 
                                 i++; 
                              }
                              std::vector<int> vector17 = std::vector<int>();
                              for (auto&& i : vector16) {
                                 i--; 
                              }
                              std::vector<int> vector18 = std::vector<int>();
                              vector6.push_back(0);
                              for (auto&& i : vector6) { 
                                 i++; 
                              }
                              if(PATH0 & 64) {
                                 func41();
                              }
                              else {
                                 std::vector<int> vector19 = std::vector<int>();
                                 if(PATH0 & 128) {
                                    func44();
                                 }
                                 else {
                                    for(int scalar20 = 0; scalar20 < 10; scalar20++) {
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

void func8() {
   func12(rng());
   func13();
   func9(rng());
   func14(rng());
}

