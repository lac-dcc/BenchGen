#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>


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
   for(int loop0 = 0; loop0 < 3; loop0++) {
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
      std::list<int> list0 = std::list<int>();
      if(PATH0 & 2) {
         func3();
      }
      else {
         for(int loop44 = 0; loop44 < 3; loop44++) {
            std::list<int> list1 = std::list<int>();
            list0.push_back(0);
            for (auto&& i : list0) { 
               i++; 
            }
            std::list<int> list2 = std::list<int>();
            if (list1.size() > 0) {
               list1.pop_back();
            }
            for (auto&& i : list1) {
               i--; 
            }
            std::list<int> list3 = std::list<int>();
            list0.push_back(0);
            for (auto&& i : list0) { 
               i++; 
            }
            if(PATH0 & 4) {
               func9(rng());
            }
            else {
               std::list<int> list4 = std::list<int>();
               if(PATH0 & 8) {
                  func10();
               }
               else {
                  for(int loop45 = 0; loop45 < 3; loop45++) {
                     std::list<int> list5 = std::list<int>();
                     list1.push_back(0);
                     for (auto&& i : list1) { 
                        i++; 
                     }
                     std::list<int> list6 = std::list<int>();
                     if (list2.size() > 0) {
                        list2.pop_back();
                     }
                     for (auto&& i : list2) {
                        i--; 
                     }
                     std::list<int> list7 = std::list<int>();
                     list6.push_back(0);
                     for (auto&& i : list6) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func21(rng());
                     }
                     else {
                        std::list<int> list8 = std::list<int>();
                        if(PATH0 & 32) {
                           func22();
                        }
                        else {
                           for(int loop46 = 0; loop46 < 3; loop46++) {
                              std::list<int> list9 = std::list<int>();
                              list1.push_back(0);
                              for (auto&& i : list1) { 
                                 i++; 
                              }
                              std::list<int> list10 = std::list<int>();
                              if (list6.size() > 0) {
                                 list6.pop_back();
                              }
                              for (auto&& i : list6) {
                                 i--; 
                              }
                              std::list<int> list11 = std::list<int>();
                              list5.push_back(0);
                              for (auto&& i : list5) { 
                                 i++; 
                              }
                              if(PATH0 & 64) {
                                 func33();
                              }
                              else {
                                 std::list<int> list12 = std::list<int>();
                                 if(PATH0 & 128) {
                                    func34();
                                 }
                                 else {
                                    for(int loop47 = 0; loop47 < 3; loop47++) {
                                       std::list<int> list13 = std::list<int>();
                                       list6.push_back(0);
                                       for (auto&& i : list6) { 
                                          i++; 
                                       }
                                       std::list<int> list14 = std::list<int>();
                                       if (list14.size() > 0) {
                                          list14.pop_back();
                                       }
                                       for (auto&& i : list14) {
                                          i--; 
                                       }
                                       std::list<int> list15 = std::list<int>();
                                       list8.push_back(0);
                                       for (auto&& i : list8) { 
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
   std::list<int> list0 = std::list<int>();
   list0.push_back(0);
   for (auto&& i : list0) { 
      i++; 
   }
   std::list<int> list1 = std::list<int>();
   if (list0.size() > 0) {
      list0.pop_back();
   }
   for (auto&& i : list0) {
      i--; 
   }
   std::list<int> list2 = std::list<int>();
   list0.push_back(0);
   for (auto&& i : list0) { 
      i++; 
   }
   if(PATH0 & 1) {
      func9(rng());
   }
   else {
      std::list<int> list3 = std::list<int>();
      if(PATH0 & 2) {
         func10();
      }
      else {
         for(int loop24 = 0; loop24 < 3; loop24++) {
            std::list<int> list4 = std::list<int>();
            list1.push_back(0);
            for (auto&& i : list1) { 
               i++; 
            }
            std::list<int> list5 = std::list<int>();
            if (list3.size() > 0) {
               list3.pop_back();
            }
            for (auto&& i : list3) {
               i--; 
            }
            std::list<int> list6 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            if(PATH0 & 4) {
               func21(rng());
            }
            else {
               std::list<int> list7 = std::list<int>();
               if(PATH0 & 8) {
                  func22();
               }
               else {
                  for(int loop25 = 0; loop25 < 3; loop25++) {
                     std::list<int> list8 = std::list<int>();
                     list5.push_back(0);
                     for (auto&& i : list5) { 
                        i++; 
                     }
                     std::list<int> list9 = std::list<int>();
                     if (list7.size() > 0) {
                        list7.pop_back();
                     }
                     for (auto&& i : list7) {
                        i--; 
                     }
                     std::list<int> list10 = std::list<int>();
                     list6.push_back(0);
                     for (auto&& i : list6) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func33();
                     }
                     else {
                        std::list<int> list11 = std::list<int>();
                        if(PATH0 & 32) {
                           func34();
                        }
                        else {
                           for(int loop26 = 0; loop26 < 3; loop26++) {
                              std::list<int> list12 = std::list<int>();
                              list4.push_back(0);
                              for (auto&& i : list4) { 
                                 i++; 
                              }
                              std::list<int> list13 = std::list<int>();
                              if (list12.size() > 0) {
                                 list12.pop_back();
                              }
                              for (auto&& i : list12) {
                                 i--; 
                              }
                              std::list<int> list14 = std::list<int>();
                              list9.push_back(0);
                              for (auto&& i : list9) { 
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
   std::list<int> list3 = std::list<int>();
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   std::list<int> list4 = std::list<int>();
   if (list4.size() > 0) {
      list4.pop_back();
   }
   for (auto&& i : list4) {
      i--; 
   }
   std::list<int> list5 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      std::list<int> list6 = std::list<int>();
      if(PATH0 & 2) {
         func22();
      }
      else {
         for(int loop10 = 0; loop10 < 3; loop10++) {
            std::list<int> list7 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            std::list<int> list8 = std::list<int>();
            if (list4.size() > 0) {
               list4.pop_back();
            }
            for (auto&& i : list4) {
               i--; 
            }
            std::list<int> list9 = std::list<int>();
            list8.push_back(0);
            for (auto&& i : list8) { 
               i++; 
            }
            if(PATH0 & 4) {
               func33();
            }
            else {
               std::list<int> list10 = std::list<int>();
               if(PATH0 & 8) {
                  func34();
               }
               else {
                  for(int loop11 = 0; loop11 < 3; loop11++) {
                     std::list<int> list11 = std::list<int>();
                     list8.push_back(0);
                     for (auto&& i : list8) { 
                        i++; 
                     }
                     std::list<int> list12 = std::list<int>();
                     if (list5.size() > 0) {
                        list5.pop_back();
                     }
                     for (auto&& i : list5) {
                        i--; 
                     }
                     std::list<int> list13 = std::list<int>();
                     list13.push_back(0);
                     for (auto&& i : list13) { 
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
   std::list<int> list6 = std::list<int>();
   list6.push_back(0);
   for (auto&& i : list6) { 
      i++; 
   }
   std::list<int> list7 = std::list<int>();
   if (list6.size() > 0) {
      list6.pop_back();
   }
   for (auto&& i : list6) {
      i--; 
   }
   std::list<int> list8 = std::list<int>();
   list6.push_back(0);
   for (auto&& i : list6) { 
      i++; 
   }
   if(PATH0 & 1) {
      func33();
   }
   else {
      std::list<int> list9 = std::list<int>();
      if(PATH0 & 2) {
         func34();
      }
      else {
         for(int loop2 = 0; loop2 < 3; loop2++) {
            std::list<int> list10 = std::list<int>();
            list10.push_back(0);
            for (auto&& i : list10) { 
               i++; 
            }
            std::list<int> list11 = std::list<int>();
            if (list11.size() > 0) {
               list11.pop_back();
            }
            for (auto&& i : list11) {
               i--; 
            }
            std::list<int> list12 = std::list<int>();
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

void func33() {
   std::list<int> list9 = std::list<int>();
   list9.push_back(0);
   for (auto&& i : list9) { 
      i++; 
   }
   std::list<int> list10 = std::list<int>();
   if (list9.size() > 0) {
      list9.pop_back();
   }
   for (auto&& i : list9) {
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

void func34() {
   func39();
   func40();
   func41();
   func42();
}

void func39() {
}

void func40() {
   for(int loop1 = 0; loop1 < 3; loop1++) {
      std::list<int> list10 = std::list<int>();
      for (auto&& i : list10) {
         if (i == 0) {
            printf("IS 0!");
         }
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
   for(int loop3 = 0; loop3 < 3; loop3++) {
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
   std::list<int> list7 = std::list<int>();
   std::list<int> list8 = std::list<int>();
   list7.push_back(0);
   for (auto&& i : list7) { 
      i++; 
   }
   std::list<int> list9 = std::list<int>();
   if (list7.size() > 0) {
      list7.pop_back();
   }
   for (auto&& i : list7) {
      i--; 
   }
   std::list<int> list10 = std::list<int>();
   list7.push_back(0);
   for (auto&& i : list7) { 
      i++; 
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func28() {
   for(int loop4 = 0; loop4 < 3; loop4++) {
      std::list<int> list7 = std::list<int>();
      for (auto&& i : list7) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func36(rng());
      func37();
      func33();
      func38(rng());
      printf("DELETE!\n");
   }
}

void func36(const unsigned long PATH0) {
   for(int loop5 = 0; loop5 < 3; loop5++) {
      if(PATH0 & 1) {
      }
      else {
         func43();
      }
   }
}

void func43() {
   std::list<int> list8 = std::list<int>();
   printf("DELETE!\n");
}

void func37() {
   for(int loop6 = 0; loop6 < 3; loop6++) {
      std::list<int> list8 = std::list<int>();
      for (auto&& i : list8) {
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
      std::list<int> list8 = std::list<int>();
      if(PATH0 & 2) {
         func44();
      }
      else {
         for(int loop7 = 0; loop7 < 3; loop7++) {
         }
      }
   }
}

void func44() {
}

void func29(const unsigned long PATH0) {
   std::list<int> list7 = std::list<int>();
   list7.push_back(0);
   for (auto&& i : list7) { 
      i++; 
   }
   std::list<int> list8 = std::list<int>();
   if (list8.size() > 0) {
      list8.pop_back();
   }
   for (auto&& i : list8) {
      i--; 
   }
   std::list<int> list9 = std::list<int>();
   list7.push_back(0);
   for (auto&& i : list7) { 
      i++; 
   }
   if(PATH0 & 1) {
      func41();
   }
   else {
      std::list<int> list10 = std::list<int>();
      if(PATH0 & 2) {
         func44();
      }
      else {
         for(int loop8 = 0; loop8 < 3; loop8++) {
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
      std::list<int> list7 = std::list<int>();
      if(PATH0 & 2) {
         func34();
      }
      else {
         for(int loop9 = 0; loop9 < 3; loop9++) {
            std::list<int> list8 = std::list<int>();
            list7.push_back(0);
            for (auto&& i : list7) { 
               i++; 
            }
            std::list<int> list9 = std::list<int>();
            if (list9.size() > 0) {
               list9.pop_back();
            }
            for (auto&& i : list9) {
               i--; 
            }
            std::list<int> list10 = std::list<int>();
            list9.push_back(0);
            for (auto&& i : list9) { 
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
   for(int loop12 = 0; loop12 < 3; loop12++) {
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
   std::list<int> list4 = std::list<int>();
   std::list<int> list5 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   std::list<int> list6 = std::list<int>();
   if (list6.size() > 0) {
      list6.pop_back();
   }
   for (auto&& i : list6) {
      i--; 
   }
   std::list<int> list7 = std::list<int>();
   list7.push_back(0);
   for (auto&& i : list7) { 
      i++; 
   }
   if(PATH0 & 1) {
      func33();
   }
   else {
      std::list<int> list8 = std::list<int>();
      if(PATH0 & 2) {
         func34();
      }
      else {
         for(int loop13 = 0; loop13 < 3; loop13++) {
            std::list<int> list9 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            std::list<int> list10 = std::list<int>();
            if (list4.size() > 0) {
               list4.pop_back();
            }
            for (auto&& i : list4) {
               i--; 
            }
            std::list<int> list11 = std::list<int>();
            list7.push_back(0);
            for (auto&& i : list7) { 
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
   for(int loop14 = 0; loop14 < 3; loop14++) {
      std::list<int> list4 = std::list<int>();
      for (auto&& i : list4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func24(rng());
      func25();
      func21(rng());
      func26(rng());
      printf("DELETE!\n");
   }
}

void func24(const unsigned long PATH0) {
   for(int loop15 = 0; loop15 < 3; loop15++) {
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
   std::list<int> list5 = std::list<int>();
   std::list<int> list6 = std::list<int>();
   list6.push_back(0);
   for (auto&& i : list6) { 
      i++; 
   }
   std::list<int> list7 = std::list<int>();
   if (list5.size() > 0) {
      list5.pop_back();
   }
   for (auto&& i : list5) {
      i--; 
   }
   std::list<int> list8 = std::list<int>();
   list6.push_back(0);
   for (auto&& i : list6) { 
      i++; 
   }
   if(PATH0 & 1) {
      func41();
   }
   else {
      std::list<int> list9 = std::list<int>();
      if(PATH0 & 2) {
         func44();
      }
      else {
         for(int loop16 = 0; loop16 < 3; loop16++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func25() {
   for(int loop17 = 0; loop17 < 3; loop17++) {
      std::list<int> list5 = std::list<int>();
      for (auto&& i : list5) {
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
      std::list<int> list5 = std::list<int>();
      if(PATH0 & 2) {
         func32();
      }
      else {
         for(int loop18 = 0; loop18 < 3; loop18++) {
            std::list<int> list6 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            std::list<int> list7 = std::list<int>();
            if (list6.size() > 0) {
               list6.pop_back();
            }
            for (auto&& i : list6) {
               i--; 
            }
            std::list<int> list8 = std::list<int>();
            list7.push_back(0);
            for (auto&& i : list7) { 
               i++; 
            }
            if(PATH0 & 4) {
               func41();
            }
            else {
               std::list<int> list9 = std::list<int>();
               if(PATH0 & 8) {
                  func44();
               }
               else {
                  for(int loop19 = 0; loop19 < 3; loop19++) {
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
   std::list<int> list4 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   std::list<int> list5 = std::list<int>();
   if (list5.size() > 0) {
      list5.pop_back();
   }
   for (auto&& i : list5) {
      i--; 
   }
   std::list<int> list6 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   if(PATH0 & 1) {
      func29(rng());
   }
   else {
      std::list<int> list7 = std::list<int>();
      if(PATH0 & 2) {
         func32();
      }
      else {
         for(int loop20 = 0; loop20 < 3; loop20++) {
            std::list<int> list8 = std::list<int>();
            list7.push_back(0);
            for (auto&& i : list7) { 
               i++; 
            }
            std::list<int> list9 = std::list<int>();
            if (list8.size() > 0) {
               list8.pop_back();
            }
            for (auto&& i : list8) {
               i--; 
            }
            std::list<int> list10 = std::list<int>();
            list4.push_back(0);
            for (auto&& i : list4) { 
               i++; 
            }
            if(PATH0 & 4) {
               func41();
            }
            else {
               std::list<int> list11 = std::list<int>();
               if(PATH0 & 8) {
                  func44();
               }
               else {
                  for(int loop21 = 0; loop21 < 3; loop21++) {
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
      std::list<int> list4 = std::list<int>();
      if(PATH0 & 2) {
         func22();
      }
      else {
         for(int loop22 = 0; loop22 < 3; loop22++) {
            std::list<int> list5 = std::list<int>();
            list4.push_back(0);
            for (auto&& i : list4) { 
               i++; 
            }
            std::list<int> list6 = std::list<int>();
            if (list6.size() > 0) {
               list6.pop_back();
            }
            for (auto&& i : list6) {
               i--; 
            }
            std::list<int> list7 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            if(PATH0 & 4) {
               func33();
            }
            else {
               std::list<int> list8 = std::list<int>();
               if(PATH0 & 8) {
                  func34();
               }
               else {
                  for(int loop23 = 0; loop23 < 3; loop23++) {
                     std::list<int> list9 = std::list<int>();
                     list6.push_back(0);
                     for (auto&& i : list6) { 
                        i++; 
                     }
                     std::list<int> list10 = std::list<int>();
                     if (list8.size() > 0) {
                        list8.pop_back();
                     }
                     for (auto&& i : list8) {
                        i--; 
                     }
                     std::list<int> list11 = std::list<int>();
                     list8.push_back(0);
                     for (auto&& i : list8) { 
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

void func3() {
   func4(rng());
   func5();
   func6(rng());
   func7(rng());
}

void func4(const unsigned long PATH0) {
   for(int loop27 = 0; loop27 < 3; loop27++) {
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
   std::list<int> list1 = std::list<int>();
   std::list<int> list2 = std::list<int>();
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   std::list<int> list3 = std::list<int>();
   if (list3.size() > 0) {
      list3.pop_back();
   }
   for (auto&& i : list3) {
      i--; 
   }
   std::list<int> list4 = std::list<int>();
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   if(PATH0 & 1) {
      func21(rng());
   }
   else {
      std::list<int> list5 = std::list<int>();
      if(PATH0 & 2) {
         func22();
      }
      else {
         for(int loop28 = 0; loop28 < 3; loop28++) {
            std::list<int> list6 = std::list<int>();
            list4.push_back(0);
            for (auto&& i : list4) { 
               i++; 
            }
            std::list<int> list7 = std::list<int>();
            if (list3.size() > 0) {
               list3.pop_back();
            }
            for (auto&& i : list3) {
               i--; 
            }
            std::list<int> list8 = std::list<int>();
            list2.push_back(0);
            for (auto&& i : list2) { 
               i++; 
            }
            if(PATH0 & 4) {
               func33();
            }
            else {
               std::list<int> list9 = std::list<int>();
               if(PATH0 & 8) {
                  func34();
               }
               else {
                  for(int loop29 = 0; loop29 < 3; loop29++) {
                     std::list<int> list10 = std::list<int>();
                     list5.push_back(0);
                     for (auto&& i : list5) { 
                        i++; 
                     }
                     std::list<int> list11 = std::list<int>();
                     if (list11.size() > 0) {
                        list11.pop_back();
                     }
                     for (auto&& i : list11) {
                        i--; 
                     }
                     std::list<int> list12 = std::list<int>();
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
   printf("DELETE!\n");
}

void func5() {
   for(int loop30 = 0; loop30 < 3; loop30++) {
      std::list<int> list1 = std::list<int>();
      for (auto&& i : list1) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      func12(rng());
      func13();
      func9(rng());
      func14(rng());
      printf("DELETE!\n");
   }
}

void func12(const unsigned long PATH0) {
   for(int loop31 = 0; loop31 < 3; loop31++) {
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
   std::list<int> list2 = std::list<int>();
   std::list<int> list3 = std::list<int>();
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   std::list<int> list4 = std::list<int>();
   if (list4.size() > 0) {
      list4.pop_back();
   }
   for (auto&& i : list4) {
      i--; 
   }
   std::list<int> list5 = std::list<int>();
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   if(PATH0 & 1) {
      func29(rng());
   }
   else {
      std::list<int> list6 = std::list<int>();
      if(PATH0 & 2) {
         func32();
      }
      else {
         for(int loop32 = 0; loop32 < 3; loop32++) {
            std::list<int> list7 = std::list<int>();
            list2.push_back(0);
            for (auto&& i : list2) { 
               i++; 
            }
            std::list<int> list8 = std::list<int>();
            if (list7.size() > 0) {
               list7.pop_back();
            }
            for (auto&& i : list7) {
               i--; 
            }
            std::list<int> list9 = std::list<int>();
            list4.push_back(0);
            for (auto&& i : list4) { 
               i++; 
            }
            if(PATH0 & 4) {
               func41();
            }
            else {
               std::list<int> list10 = std::list<int>();
               if(PATH0 & 8) {
                  func44();
               }
               else {
                  for(int loop33 = 0; loop33 < 3; loop33++) {
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
   for(int loop34 = 0; loop34 < 3; loop34++) {
      std::list<int> list2 = std::list<int>();
      for (auto&& i : list2) {
         if (i == 0) {
            printf("IS 0!");
         }
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
      std::list<int> list2 = std::list<int>();
      if(PATH0 & 2) {
         func20();
      }
      else {
         for(int loop35 = 0; loop35 < 3; loop35++) {
            std::list<int> list3 = std::list<int>();
            list2.push_back(0);
            for (auto&& i : list2) { 
               i++; 
            }
            std::list<int> list4 = std::list<int>();
            if (list2.size() > 0) {
               list2.pop_back();
            }
            for (auto&& i : list2) {
               i--; 
            }
            std::list<int> list5 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            if(PATH0 & 4) {
               func29(rng());
            }
            else {
               std::list<int> list6 = std::list<int>();
               if(PATH0 & 8) {
                  func32();
               }
               else {
                  for(int loop36 = 0; loop36 < 3; loop36++) {
                     std::list<int> list7 = std::list<int>();
                     list4.push_back(0);
                     for (auto&& i : list4) { 
                        i++; 
                     }
                     std::list<int> list8 = std::list<int>();
                     if (list3.size() > 0) {
                        list3.pop_back();
                     }
                     for (auto&& i : list3) {
                        i--; 
                     }
                     std::list<int> list9 = std::list<int>();
                     list6.push_back(0);
                     for (auto&& i : list6) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func41();
                     }
                     else {
                        std::list<int> list10 = std::list<int>();
                        if(PATH0 & 32) {
                           func44();
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
}

void func20() {
   func24(rng());
   func25();
   func21(rng());
   func26(rng());
}

void func6(const unsigned long PATH0) {
   std::list<int> list1 = std::list<int>();
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   std::list<int> list2 = std::list<int>();
   if (list1.size() > 0) {
      list1.pop_back();
   }
   for (auto&& i : list1) {
      i--; 
   }
   std::list<int> list3 = std::list<int>();
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   if(PATH0 & 1) {
      func17(rng());
   }
   else {
      std::list<int> list4 = std::list<int>();
      if(PATH0 & 2) {
         func20();
      }
      else {
         for(int loop38 = 0; loop38 < 3; loop38++) {
            std::list<int> list5 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            std::list<int> list6 = std::list<int>();
            if (list5.size() > 0) {
               list5.pop_back();
            }
            for (auto&& i : list5) {
               i--; 
            }
            std::list<int> list7 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            if(PATH0 & 4) {
               func29(rng());
            }
            else {
               std::list<int> list8 = std::list<int>();
               if(PATH0 & 8) {
                  func32();
               }
               else {
                  for(int loop39 = 0; loop39 < 3; loop39++) {
                     std::list<int> list9 = std::list<int>();
                     list1.push_back(0);
                     for (auto&& i : list1) { 
                        i++; 
                     }
                     std::list<int> list10 = std::list<int>();
                     if (list5.size() > 0) {
                        list5.pop_back();
                     }
                     for (auto&& i : list5) {
                        i--; 
                     }
                     std::list<int> list11 = std::list<int>();
                     list10.push_back(0);
                     for (auto&& i : list10) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func41();
                     }
                     else {
                        std::list<int> list12 = std::list<int>();
                        if(PATH0 & 32) {
                           func44();
                        }
                        else {
                           for(int loop40 = 0; loop40 < 3; loop40++) {
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
      std::list<int> list1 = std::list<int>();
      if(PATH0 & 2) {
         func10();
      }
      else {
         for(int loop41 = 0; loop41 < 3; loop41++) {
            std::list<int> list2 = std::list<int>();
            list2.push_back(0);
            for (auto&& i : list2) { 
               i++; 
            }
            std::list<int> list3 = std::list<int>();
            if (list2.size() > 0) {
               list2.pop_back();
            }
            for (auto&& i : list2) {
               i--; 
            }
            std::list<int> list4 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            if(PATH0 & 4) {
               func21(rng());
            }
            else {
               std::list<int> list5 = std::list<int>();
               if(PATH0 & 8) {
                  func22();
               }
               else {
                  for(int loop42 = 0; loop42 < 3; loop42++) {
                     std::list<int> list6 = std::list<int>();
                     list5.push_back(0);
                     for (auto&& i : list5) { 
                        i++; 
                     }
                     std::list<int> list7 = std::list<int>();
                     if (list2.size() > 0) {
                        list2.pop_back();
                     }
                     for (auto&& i : list2) {
                        i--; 
                     }
                     std::list<int> list8 = std::list<int>();
                     list2.push_back(0);
                     for (auto&& i : list2) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func33();
                     }
                     else {
                        std::list<int> list9 = std::list<int>();
                        if(PATH0 & 32) {
                           func34();
                        }
                        else {
                           for(int loop43 = 0; loop43 < 3; loop43++) {
                              std::list<int> list10 = std::list<int>();
                              list8.push_back(0);
                              for (auto&& i : list8) { 
                                 i++; 
                              }
                              std::list<int> list11 = std::list<int>();
                              if (list8.size() > 0) {
                                 list8.pop_back();
                              }
                              for (auto&& i : list8) {
                                 i--; 
                              }
                              std::list<int> list12 = std::list<int>();
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
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func1(const unsigned long PATH0) {
   std::list<int> list0 = std::list<int>();
   list0.push_back(0);
   for (auto&& i : list0) { 
      i++; 
   }
   std::list<int> list1 = std::list<int>();
   if (list1.size() > 0) {
      list1.pop_back();
   }
   for (auto&& i : list1) {
      i--; 
   }
   std::list<int> list2 = std::list<int>();
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   if(PATH0 & 1) {
      func6(rng());
   }
   else {
      std::list<int> list3 = std::list<int>();
      if(PATH0 & 2) {
         func8();
      }
      else {
         for(int loop48 = 0; loop48 < 3; loop48++) {
            std::list<int> list4 = std::list<int>();
            list2.push_back(0);
            for (auto&& i : list2) { 
               i++; 
            }
            std::list<int> list5 = std::list<int>();
            if (list5.size() > 0) {
               list5.pop_back();
            }
            for (auto&& i : list5) {
               i--; 
            }
            std::list<int> list6 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            if(PATH0 & 4) {
               func17(rng());
            }
            else {
               std::list<int> list7 = std::list<int>();
               if(PATH0 & 8) {
                  func20();
               }
               else {
                  for(int loop49 = 0; loop49 < 3; loop49++) {
                     std::list<int> list8 = std::list<int>();
                     list2.push_back(0);
                     for (auto&& i : list2) { 
                        i++; 
                     }
                     std::list<int> list9 = std::list<int>();
                     if (list9.size() > 0) {
                        list9.pop_back();
                     }
                     for (auto&& i : list9) {
                        i--; 
                     }
                     std::list<int> list10 = std::list<int>();
                     list8.push_back(0);
                     for (auto&& i : list8) { 
                        i++; 
                     }
                     if(PATH0 & 16) {
                        func29(rng());
                     }
                     else {
                        std::list<int> list11 = std::list<int>();
                        if(PATH0 & 32) {
                           func32();
                        }
                        else {
                           for(int loop50 = 0; loop50 < 3; loop50++) {
                              std::list<int> list12 = std::list<int>();
                              list0.push_back(0);
                              for (auto&& i : list0) { 
                                 i++; 
                              }
                              std::list<int> list13 = std::list<int>();
                              if (list10.size() > 0) {
                                 list10.pop_back();
                              }
                              for (auto&& i : list10) {
                                 i--; 
                              }
                              std::list<int> list14 = std::list<int>();
                              list2.push_back(0);
                              for (auto&& i : list2) { 
                                 i++; 
                              }
                              if(PATH0 & 64) {
                                 func41();
                              }
                              else {
                                 std::list<int> list15 = std::list<int>();
                                 if(PATH0 & 128) {
                                    func44();
                                 }
                                 else {
                                    for(int loop51 = 0; loop51 < 3; loop51++) {
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

