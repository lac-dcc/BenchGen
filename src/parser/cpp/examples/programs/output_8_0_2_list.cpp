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
void func3(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func0(const unsigned long PATH0);

int main() {
   if(rng() & 1) {
      if(rng() & 1) {
         std::list<int> list0 = std::list<int>();
         func1(rng());
         for (auto&& i : list0) {
            if (i == 0) {
               printf("IS 0!");
            }
         }
      }
      else {
         for(int scalar0 = 0; scalar0 < 10; scalar0++) {
            if(rng() & 1) {
               for(int scalar1 = 0; scalar1 < 10; scalar1++) {
                  if(rng() & 1) {
                     func3(rng());
                  }
                  else {
                     if(rng() & 1) {
                        func4(rng());
                     }
                     else {
                        std::list<int> list2 = std::list<int>();
                        if (scalar0 == 0) {
                           printf("IS 0!");
                        }
                        scalar0--;
                        printf("DELETE!\n");
                     }
                  }
               }
            }
            else {
               for(int scalar1 = 0; scalar1 < 10; scalar1++) {
                  for(int scalar2 = 0; scalar2 < 10; scalar2++) {
                     if(rng() & 1) {
                        func3(rng());
                     }
                     else {
                        if(rng() & 1) {
                           func4(rng());
                        }
                        else {
                           std::list<int> list3 = std::list<int>();
                           if (scalar2 == 0) {
                              printf("IS 0!");
                           }
                           scalar1--;
                           printf("DELETE!\n");
                        }
                     }
                  }
               }
            }
            for(int scalar1 = 0; scalar1 < 10; scalar1++) {
               if(rng() & 1) {
                  func2(rng());
               }
               else {
                  if(rng() & 1) {
                     func3(rng());
                  }
                  else {
                     std::list<int> list2 = std::list<int>();
                     if (scalar0 == 0) {
                        printf("IS 0!");
                     }
                     scalar0--;
                     printf("DELETE!\n");
                  }
               }
            }
         }
      }
   }
   else {
      func0(rng());
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
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         if(PATH0 & 2) {
            func4(rng());
         }
         else {
            if(PATH0 & 4) {
               func5(rng());
            }
            else {
               std::list<int> list3 = std::list<int>();
               if (scalar2 == 0) {
                  printf("IS 0!");
               }
               scalar2--;
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            if(PATH0 & 8) {
               func4(rng());
            }
            else {
               if(PATH0 & 16) {
                  func5(rng());
               }
               else {
                  std::list<int> list4 = std::list<int>();
                  for (auto&& i : list4) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  list1.pop_back();
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
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         if(PATH0 & 2) {
            func7(rng());
         }
         else {
            if(PATH0 & 4) {
               func8();
            }
            else {
               std::list<int> list5 = std::list<int>();
               for (auto&& i : list3) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               scalar4--;
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            if(PATH0 & 8) {
               func7(rng());
            }
            else {
               if(PATH0 & 16) {
                  func8();
               }
               else {
                  std::list<int> list6 = std::list<int>();
                  if (scalar5 == 0) {
                     printf("IS 0!");
                  }
                  for (auto&& i : list6) {
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
   std::list<int> list5 = std::list<int>();
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   if(PATH0 & 1) {
   }
   else {
      for(int scalar6 = 0; scalar6 < 10; scalar6++) {
      }
   }
   printf("DELETE!\n");
}

void func8() {
   std::list<int> list5 = std::list<int>();
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   list5.push_back(0);
   for (auto&& i : list5) { 
      i++; 
   }
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
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
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         if(PATH0 & 2) {
            func8();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               std::list<int> list5 = std::list<int>();
               for (auto&& i : list5) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               scalar4--;
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            if(PATH0 & 8) {
               func8();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  std::list<int> list6 = std::list<int>();
                  for (auto&& i : list3) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  scalar5--;
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func3(const unsigned long PATH0) {
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
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         if(PATH0 & 2) {
            func6(rng());
         }
         else {
            if(PATH0 & 4) {
               func7(rng());
            }
            else {
               std::list<int> list4 = std::list<int>();
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               if(PATH0 & 16) {
                  func7(rng());
               }
               else {
                  std::list<int> list5 = std::list<int>();
                  for (auto&& i : list5) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func6(const unsigned long PATH0) {
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
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
   }
   else {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func2(const unsigned long PATH0) {
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
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         if(PATH0 & 2) {
            func5(rng());
         }
         else {
            if(PATH0 & 4) {
               func6(rng());
            }
            else {
               std::list<int> list4 = std::list<int>();
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               scalar3--;
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            if(PATH0 & 8) {
               func5(rng());
            }
            else {
               if(PATH0 & 16) {
                  func6(rng());
               }
               else {
                  std::list<int> list5 = std::list<int>();
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar3--;
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func0(const unsigned long PATH0) {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
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
         scalar0--;
         printf("DELETE!\n");
      }
   }
}

