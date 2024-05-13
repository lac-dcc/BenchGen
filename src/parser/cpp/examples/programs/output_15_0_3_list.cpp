#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <list>


unsigned long rng();
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func10(const unsigned long PATH0);
void func13(const unsigned long PATH0);
void func14(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func15();
void func8(const unsigned long PATH0);
void func12(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func3(const unsigned long PATH0);

int main() {
   func1(rng());
   int loop31 = 0;
   int loopLimit31 = ceil((rand()%10)/1);
   for(; loop31 < loopLimit31; loop31++) {
      std::list<int> list0 = std::list<int>();
      list0.push_back(0);
      for (auto&& i : list0) { 
         i++; 
      }
      func0(rng());
      std::list<int> list1 = std::list<int>();
      int loop46 = 0;
      int loopLimit46 = ceil((rand()%10)/2);
      for(; loop46 < loopLimit46; loop46++) {
         func1(rng());
         if(rng() & 1) {
            func2(rng());
         }
         else {
            std::list<int> list2 = std::list<int>();
            for (auto&& i : list2) {
               if (i == 0) {
                  printf("IS 0!");
               }
            }
            if (list2.size() > 0) {
               list2.pop_back();
            }
            for (auto&& i : list2) {
               i--; 
            }
            printf("DELETE!\n");
         }
      }
      for (auto&& i : list1) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (list0.size() > 0) {
         list0.pop_back();
      }
      for (auto&& i : list0) {
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

void func1(const unsigned long PATH0) {
   std::list<int> list0 = std::list<int>();
   list0.push_back(0);
   for (auto&& i : list0) { 
      i++; 
   }
   list0.push_back(0);
   for (auto&& i : list0) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop0 = 0;
      int loopLimit0 = ceil((rand()%10)/1);
      for(; loop0 < loopLimit0; loop0++) {
         if(PATH0 & 2) {
            func4(rng());
         }
         else {
            if(PATH0 & 4) {
               func5(rng());
            }
            else {
               std::list<int> list1 = std::list<int>();
               for (auto&& i : list0) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (list0.size() > 0) {
                  list0.pop_back();
               }
               for (auto&& i : list0) {
                  i--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop29 = 0;
      int loopLimit29 = ceil((rand()%10)/1);
      for(; loop29 < loopLimit29; loop29++) {
         int loop30 = 0;
         int loopLimit30 = ceil((rand()%10)/2);
         for(; loop30 < loopLimit30; loop30++) {
            if(PATH0 & 8) {
               func4(rng());
            }
            else {
               if(PATH0 & 16) {
                  func5(rng());
               }
               else {
                  std::list<int> list1 = std::list<int>();
                  for (auto&& i : list0) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (list1.size() > 0) {
                     list1.pop_back();
                  }
                  for (auto&& i : list1) {
                     i--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0) {
   std::list<int> list1 = std::list<int>();
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop1 = 0;
      int loopLimit1 = ceil((rand()%10)/2);
      for(; loop1 < loopLimit1; loop1++) {
         if(PATH0 & 2) {
            func7(rng());
         }
         else {
            if(PATH0 & 4) {
               func8(rng());
            }
            else {
               std::list<int> list2 = std::list<int>();
               for (auto&& i : list2) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (list2.size() > 0) {
                  list2.pop_back();
               }
               for (auto&& i : list2) {
                  i--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop21 = 0;
      int loopLimit21 = ceil((rand()%10)/2);
      for(; loop21 < loopLimit21; loop21++) {
         int loop22 = 0;
         int loopLimit22 = ceil((rand()%10)/3);
         for(; loop22 < loopLimit22; loop22++) {
            if(PATH0 & 8) {
               func7(rng());
            }
            else {
               if(PATH0 & 16) {
                  func8(rng());
               }
               else {
                  std::list<int> list2 = std::list<int>();
                  for (auto&& i : list2) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (list2.size() > 0) {
                     list2.pop_back();
                  }
                  for (auto&& i : list2) {
                     i--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func7(const unsigned long PATH0) {
   std::list<int> list2 = std::list<int>();
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop2 = 0;
      int loopLimit2 = ceil((rand()%10)/3);
      for(; loop2 < loopLimit2; loop2++) {
         if(PATH0 & 2) {
            func10(rng());
         }
         else {
            if(PATH0 & 4) {
               func11(rng());
            }
            else {
               std::list<int> list3 = std::list<int>();
               for (auto&& i : list2) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (list2.size() > 0) {
                  list2.pop_back();
               }
               for (auto&& i : list2) {
                  i--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop13 = 0;
      int loopLimit13 = ceil((rand()%10)/3);
      for(; loop13 < loopLimit13; loop13++) {
         int loop14 = 0;
         int loopLimit14 = ceil((rand()%10)/4);
         for(; loop14 < loopLimit14; loop14++) {
            if(PATH0 & 8) {
               func10(rng());
            }
            else {
               if(PATH0 & 16) {
                  func11(rng());
               }
               else {
                  std::list<int> list3 = std::list<int>();
                  for (auto&& i : list2) {
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
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func10(const unsigned long PATH0) {
   std::list<int> list3 = std::list<int>();
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop3 = 0;
      int loopLimit3 = ceil((rand()%10)/4);
      for(; loop3 < loopLimit3; loop3++) {
         if(PATH0 & 2) {
            func13(rng());
         }
         else {
            if(PATH0 & 4) {
               func14(rng());
            }
            else {
               std::list<int> list4 = std::list<int>();
               for (auto&& i : list3) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (list4.size() > 0) {
                  list4.pop_back();
               }
               for (auto&& i : list4) {
                  i--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop8 = 0;
      int loopLimit8 = ceil((rand()%10)/4);
      for(; loop8 < loopLimit8; loop8++) {
         int loop9 = 0;
         int loopLimit9 = ceil((rand()%10)/5);
         for(; loop9 < loopLimit9; loop9++) {
            if(PATH0 & 8) {
               func13(rng());
            }
            else {
               if(PATH0 & 16) {
                  func14(rng());
               }
               else {
                  std::list<int> list4 = std::list<int>();
                  for (auto&& i : list4) {
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
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func13(const unsigned long PATH0) {
   std::list<int> list4 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop4 = 0;
      int loopLimit4 = ceil((rand()%10)/5);
      for(; loop4 < loopLimit4; loop4++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
   }
   else {
      int loop5 = 0;
      int loopLimit5 = ceil((rand()%10)/5);
      for(; loop5 < loopLimit5; loop5++) {
         int loop6 = 0;
         int loopLimit6 = ceil((rand()%10)/6);
         for(; loop6 < loopLimit6; loop6++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func14(const unsigned long PATH0) {
   std::list<int> list4 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   if(PATH0 & 1) {
   }
   else {
      int loop7 = 0;
      int loopLimit7 = ceil((rand()%10)/5);
      for(; loop7 < loopLimit7; loop7++) {
      }
   }
   printf("DELETE!\n");
}

void func11(const unsigned long PATH0) {
   std::list<int> list3 = std::list<int>();
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop10 = 0;
      int loopLimit10 = ceil((rand()%10)/4);
      for(; loop10 < loopLimit10; loop10++) {
         if(PATH0 & 2) {
            func14(rng());
         }
         else {
            if(PATH0 & 4) {
               func15();
            }
            else {
               std::list<int> list4 = std::list<int>();
               for (auto&& i : list4) {
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
         }
      }
   }
   else {
      int loop11 = 0;
      int loopLimit11 = ceil((rand()%10)/4);
      for(; loop11 < loopLimit11; loop11++) {
         int loop12 = 0;
         int loopLimit12 = ceil((rand()%10)/5);
         for(; loop12 < loopLimit12; loop12++) {
            if(PATH0 & 8) {
               func14(rng());
            }
            else {
               if(PATH0 & 16) {
                  func15();
               }
               else {
                  std::list<int> list4 = std::list<int>();
                  for (auto&& i : list4) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (list4.size() > 0) {
                     list4.pop_back();
                  }
                  for (auto&& i : list4) {
                     i--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func15() {
   std::list<int> list4 = std::list<int>();
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   list4.push_back(0);
   for (auto&& i : list4) { 
      i++; 
   }
   printf("DELETE!\n");
}

void func8(const unsigned long PATH0) {
   std::list<int> list2 = std::list<int>();
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop15 = 0;
      int loopLimit15 = ceil((rand()%10)/3);
      for(; loop15 < loopLimit15; loop15++) {
         if(PATH0 & 2) {
            func11(rng());
         }
         else {
            if(PATH0 & 4) {
               func12(rng());
            }
            else {
               std::list<int> list3 = std::list<int>();
               for (auto&& i : list3) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (list2.size() > 0) {
                  list2.pop_back();
               }
               for (auto&& i : list2) {
                  i--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop19 = 0;
      int loopLimit19 = ceil((rand()%10)/3);
      for(; loop19 < loopLimit19; loop19++) {
         int loop20 = 0;
         int loopLimit20 = ceil((rand()%10)/4);
         for(; loop20 < loopLimit20; loop20++) {
            if(PATH0 & 8) {
               func11(rng());
            }
            else {
               if(PATH0 & 16) {
                  func12(rng());
               }
               else {
                  std::list<int> list3 = std::list<int>();
                  for (auto&& i : list3) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (list2.size() > 0) {
                     list2.pop_back();
                  }
                  for (auto&& i : list2) {
                     i--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func12(const unsigned long PATH0) {
   std::list<int> list3 = std::list<int>();
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   list3.push_back(0);
   for (auto&& i : list3) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop16 = 0;
      int loopLimit16 = ceil((rand()%10)/4);
      for(; loop16 < loopLimit16; loop16++) {
         if(PATH0 & 2) {
            func15();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               std::list<int> list4 = std::list<int>();
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
         }
      }
   }
   else {
      int loop17 = 0;
      int loopLimit17 = ceil((rand()%10)/4);
      for(; loop17 < loopLimit17; loop17++) {
         int loop18 = 0;
         int loopLimit18 = ceil((rand()%10)/5);
         for(; loop18 < loopLimit18; loop18++) {
            if(PATH0 & 8) {
               func15();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  std::list<int> list4 = std::list<int>();
                  for (auto&& i : list4) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (list4.size() > 0) {
                     list4.pop_back();
                  }
                  for (auto&& i : list4) {
                     i--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   std::list<int> list1 = std::list<int>();
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop23 = 0;
      int loopLimit23 = ceil((rand()%10)/2);
      for(; loop23 < loopLimit23; loop23++) {
         if(PATH0 & 2) {
            func8(rng());
         }
         else {
            if(PATH0 & 4) {
               func9(rng());
            }
            else {
               std::list<int> list2 = std::list<int>();
               for (auto&& i : list2) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (list1.size() > 0) {
                  list1.pop_back();
               }
               for (auto&& i : list1) {
                  i--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop27 = 0;
      int loopLimit27 = ceil((rand()%10)/2);
      for(; loop27 < loopLimit27; loop27++) {
         int loop28 = 0;
         int loopLimit28 = ceil((rand()%10)/3);
         for(; loop28 < loopLimit28; loop28++) {
            if(PATH0 & 8) {
               func8(rng());
            }
            else {
               if(PATH0 & 16) {
                  func9(rng());
               }
               else {
                  std::list<int> list2 = std::list<int>();
                  for (auto&& i : list1) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (list2.size() > 0) {
                     list2.pop_back();
                  }
                  for (auto&& i : list2) {
                     i--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func9(const unsigned long PATH0) {
   std::list<int> list2 = std::list<int>();
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop24 = 0;
      int loopLimit24 = ceil((rand()%10)/3);
      for(; loop24 < loopLimit24; loop24++) {
         if(PATH0 & 2) {
            func12(rng());
         }
         else {
            if(PATH0 & 4) {
               func13(rng());
            }
            else {
               std::list<int> list3 = std::list<int>();
               for (auto&& i : list3) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (list2.size() > 0) {
                  list2.pop_back();
               }
               for (auto&& i : list2) {
                  i--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop25 = 0;
      int loopLimit25 = ceil((rand()%10)/3);
      for(; loop25 < loopLimit25; loop25++) {
         int loop26 = 0;
         int loopLimit26 = ceil((rand()%10)/4);
         for(; loop26 < loopLimit26; loop26++) {
            if(PATH0 & 8) {
               func12(rng());
            }
            else {
               if(PATH0 & 16) {
                  func13(rng());
               }
               else {
                  std::list<int> list3 = std::list<int>();
                  for (auto&& i : list3) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (list2.size() > 0) {
                     list2.pop_back();
                  }
                  for (auto&& i : list2) {
                     i--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func0(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func2(rng());
   }
   else {
      std::list<int> list1 = std::list<int>();
      for (auto&& i : list1) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (list1.size() > 0) {
         list1.pop_back();
      }
      for (auto&& i : list1) {
         i--; 
      }
      printf("DELETE!\n");
   }
   if(PATH0 & 2) {
      if(PATH0 & 4) {
         int loop38 = 0;
         int loopLimit38 = ceil((rand()%10)/2);
         for(; loop38 < loopLimit38; loop38++) {
            if(PATH0 & 8) {
               func3(rng());
            }
            else {
               if(PATH0 & 16) {
                  func4(rng());
               }
               else {
                  std::list<int> list1 = std::list<int>();
                  for (auto&& i : list1) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (list1.size() > 0) {
                     list1.pop_back();
                  }
                  for (auto&& i : list1) {
                     i--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
      else {
         int loop42 = 0;
         int loopLimit42 = ceil((rand()%10)/2);
         for(; loop42 < loopLimit42; loop42++) {
            int loop43 = 0;
            int loopLimit43 = ceil((rand()%10)/3);
            for(; loop43 < loopLimit43; loop43++) {
               if(PATH0 & 32) {
                  func3(rng());
               }
               else {
                  if(PATH0 & 64) {
                     func4(rng());
                  }
                  else {
                     std::list<int> list1 = std::list<int>();
                     for (auto&& i : list1) {
                        if (i == 0) {
                           printf("IS 0!");
                        }
                     }
                     if (list1.size() > 0) {
                        list1.pop_back();
                     }
                     for (auto&& i : list1) {
                        i--; 
                     }
                     printf("DELETE!\n");
                  }
               }
            }
         }
      }
   }
   else {
      int loop44 = 0;
      int loopLimit44 = ceil((rand()%10)/2);
      for(; loop44 < loopLimit44; loop44++) {
         func1(rng());
         int loop45 = 0;
         int loopLimit45 = ceil((rand()%10)/3);
         for(; loop45 < loopLimit45; loop45++) {
            if(PATH0 & 128) {
               func2(rng());
            }
            else {
               if(PATH0 & 256) {
                  func3(rng());
               }
               else {
                  std::list<int> list1 = std::list<int>();
                  for (auto&& i : list1) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (list1.size() > 0) {
                     list1.pop_back();
                  }
                  for (auto&& i : list1) {
                     i--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
}

void func2(const unsigned long PATH0) {
   std::list<int> list1 = std::list<int>();
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop32 = 0;
      int loopLimit32 = ceil((rand()%10)/2);
      for(; loop32 < loopLimit32; loop32++) {
         if(PATH0 & 2) {
            func5(rng());
         }
         else {
            if(PATH0 & 4) {
               func6(rng());
            }
            else {
               std::list<int> list2 = std::list<int>();
               for (auto&& i : list2) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (list1.size() > 0) {
                  list1.pop_back();
               }
               for (auto&& i : list1) {
                  i--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop36 = 0;
      int loopLimit36 = ceil((rand()%10)/2);
      for(; loop36 < loopLimit36; loop36++) {
         int loop37 = 0;
         int loopLimit37 = ceil((rand()%10)/3);
         for(; loop37 < loopLimit37; loop37++) {
            if(PATH0 & 8) {
               func5(rng());
            }
            else {
               if(PATH0 & 16) {
                  func6(rng());
               }
               else {
                  std::list<int> list2 = std::list<int>();
                  for (auto&& i : list2) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (list1.size() > 0) {
                     list1.pop_back();
                  }
                  for (auto&& i : list1) {
                     i--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func6(const unsigned long PATH0) {
   std::list<int> list2 = std::list<int>();
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop33 = 0;
      int loopLimit33 = ceil((rand()%10)/3);
      for(; loop33 < loopLimit33; loop33++) {
         if(PATH0 & 2) {
            func9(rng());
         }
         else {
            if(PATH0 & 4) {
               func10(rng());
            }
            else {
               std::list<int> list3 = std::list<int>();
               for (auto&& i : list3) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (list2.size() > 0) {
                  list2.pop_back();
               }
               for (auto&& i : list2) {
                  i--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop34 = 0;
      int loopLimit34 = ceil((rand()%10)/3);
      for(; loop34 < loopLimit34; loop34++) {
         int loop35 = 0;
         int loopLimit35 = ceil((rand()%10)/4);
         for(; loop35 < loopLimit35; loop35++) {
            if(PATH0 & 8) {
               func9(rng());
            }
            else {
               if(PATH0 & 16) {
                  func10(rng());
               }
               else {
                  std::list<int> list3 = std::list<int>();
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
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func3(const unsigned long PATH0) {
   std::list<int> list1 = std::list<int>();
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   list1.push_back(0);
   for (auto&& i : list1) { 
      i++; 
   }
   if(PATH0 & 1) {
      int loop39 = 0;
      int loopLimit39 = ceil((rand()%10)/3);
      for(; loop39 < loopLimit39; loop39++) {
         if(PATH0 & 2) {
            func6(rng());
         }
         else {
            if(PATH0 & 4) {
               func7(rng());
            }
            else {
               std::list<int> list2 = std::list<int>();
               for (auto&& i : list1) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (list2.size() > 0) {
                  list2.pop_back();
               }
               for (auto&& i : list2) {
                  i--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      int loop40 = 0;
      int loopLimit40 = ceil((rand()%10)/3);
      for(; loop40 < loopLimit40; loop40++) {
         int loop41 = 0;
         int loopLimit41 = ceil((rand()%10)/4);
         for(; loop41 < loopLimit41; loop41++) {
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               if(PATH0 & 16) {
                  func7(rng());
               }
               else {
                  std::list<int> list2 = std::list<int>();
                  for (auto&& i : list1) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (list2.size() > 0) {
                     list2.pop_back();
                  }
                  for (auto&& i : list2) {
                     i--; 
                  }
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

