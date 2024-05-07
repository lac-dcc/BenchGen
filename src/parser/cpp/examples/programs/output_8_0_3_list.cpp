#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>


unsigned long rng();
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func8();
void func5(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func3(const unsigned long PATH0);

int main() {
   func1(rng());
   for(int loop10 = 0; loop10 < 3; loop10++) {
      std::list<int> list0 = std::list<int>();
      list0.push_back(0);
      for (auto&& i : list0) { 
         i++; 
      }
      func0(rng());
      std::list<int> list1 = std::list<int>();
      for(int loop25 = 0; loop25 < 3; loop25++) {
         func1(rng());
         if(rng() & 1) {
            func2(rng());
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
      for(int loop0 = 0; loop0 < 3; loop0++) {
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
      for(int loop8 = 0; loop8 < 3; loop8++) {
         for(int loop9 = 0; loop9 < 3; loop9++) {
            if(PATH0 & 8) {
               func4(rng());
            }
            else {
               if(PATH0 & 16) {
                  func5(rng());
               }
               else {
                  std::list<int> list1 = std::list<int>();
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
      for(int loop1 = 0; loop1 < 3; loop1++) {
         if(PATH0 & 2) {
            func7(rng());
         }
         else {
            if(PATH0 & 4) {
               func8();
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
      for(int loop3 = 0; loop3 < 3; loop3++) {
         for(int loop4 = 0; loop4 < 3; loop4++) {
            if(PATH0 & 8) {
               func7(rng());
            }
            else {
               if(PATH0 & 16) {
                  func8();
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
   }
   else {
      for(int loop2 = 0; loop2 < 3; loop2++) {
      }
   }
   printf("DELETE!\n");
}

void func8() {
   std::list<int> list2 = std::list<int>();
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
   }
   list2.push_back(0);
   for (auto&& i : list2) { 
      i++; 
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
      for(int loop5 = 0; loop5 < 3; loop5++) {
         if(PATH0 & 2) {
            func8();
         }
         else {
            if(PATH0 & 4) {
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
      for(int loop6 = 0; loop6 < 3; loop6++) {
         for(int loop7 = 0; loop7 < 3; loop7++) {
            if(PATH0 & 8) {
               func8();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  std::list<int> list2 = std::list<int>();
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
         for(int loop17 = 0; loop17 < 3; loop17++) {
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
         for(int loop21 = 0; loop21 < 3; loop21++) {
            for(int loop22 = 0; loop22 < 3; loop22++) {
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
      for(int loop23 = 0; loop23 < 3; loop23++) {
         func1(rng());
         for(int loop24 = 0; loop24 < 3; loop24++) {
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
      for(int loop11 = 0; loop11 < 3; loop11++) {
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
      for(int loop15 = 0; loop15 < 3; loop15++) {
         for(int loop16 = 0; loop16 < 3; loop16++) {
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
      for(int loop12 = 0; loop12 < 3; loop12++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
   }
   else {
      for(int loop13 = 0; loop13 < 3; loop13++) {
         for(int loop14 = 0; loop14 < 3; loop14++) {
            if(PATH0 & 4) {
            }
            else {
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
      for(int loop18 = 0; loop18 < 3; loop18++) {
         if(PATH0 & 2) {
            func6(rng());
         }
         else {
            if(PATH0 & 4) {
               func7(rng());
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
      for(int loop19 = 0; loop19 < 3; loop19++) {
         for(int loop20 = 0; loop20 < 3; loop20++) {
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

