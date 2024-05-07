#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>


unsigned long rng();
void func2(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func0(const unsigned long PATH0);

int main() {
   std::list<int> list0 = std::list<int>();
   std::list<int> list1 = std::list<int>();
   std::list<int> list2 = std::list<int>();
   std::list<int> list3 = std::list<int>();
   std::list<int> list4 = std::list<int>();
   std::list<int> list5 = std::list<int>();
   for(int loop0 = 0; loop0 < 3; loop0++) {
      if(rng() & 1) {
         for (auto&& i : list1) {
            if (i == 0) {
               printf("IS 0!");
            }
         }
      }
      else {
         if (list4.size() > 0) {
            list4.pop_back();
         }
         for (auto&& i : list4) {
            i--; 
         }
         for (auto&& i : list3) {
            if (i == 0) {
               printf("IS 0!");
            }
         }
      }
      for(int loop1 = 0; loop1 < 3; loop1++) {
         std::list<int> list6 = std::list<int>();
         list5.push_back(0);
         for (auto&& i : list5) { 
            i++; 
         }
         for(int loop2 = 0; loop2 < 3; loop2++) {
            std::list<int> list7 = std::list<int>();
            list1.push_back(0);
            for (auto&& i : list1) { 
               i++; 
            }
            for(int loop3 = 0; loop3 < 3; loop3++) {
               std::list<int> list8 = std::list<int>();
               list7.push_back(0);
               for (auto&& i : list7) { 
                  i++; 
               }
               for(int loop4 = 0; loop4 < 3; loop4++) {
                  std::list<int> list9 = std::list<int>();
                  list6.push_back(0);
                  for (auto&& i : list6) { 
                     i++; 
                  }
                  for(int loop5 = 0; loop5 < 3; loop5++) {
                     std::list<int> list10 = std::list<int>();
                     list6.push_back(0);
                     for (auto&& i : list6) { 
                        i++; 
                     }
                     for(int loop6 = 0; loop6 < 3; loop6++) {
                        std::list<int> list11 = std::list<int>();
                        list9.push_back(0);
                        for (auto&& i : list9) { 
                           i++; 
                        }
                        if (list1.size() > 0) {
                           list1.pop_back();
                        }
                        for (auto&& i : list1) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     if (list8.size() > 0) {
                        list8.pop_back();
                     }
                     for (auto&& i : list8) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (list7.size() > 0) {
                     list7.pop_back();
                  }
                  for (auto&& i : list7) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (list5.size() > 0) {
                  list5.pop_back();
               }
               for (auto&& i : list5) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list3.size() > 0) {
               list3.pop_back();
            }
            for (auto&& i : list3) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func2(rng());
   }
   for (auto&& i : list3) {
      if (i == 0) {
         printf("IS 0!");
      }
   }
   for(int loop22 = 0; loop22 < 3; loop22++) {
      std::list<int> list6 = std::list<int>();
      list6.push_back(0);
      for (auto&& i : list6) { 
         i++; 
      }
      for(int loop23 = 0; loop23 < 3; loop23++) {
         std::list<int> list7 = std::list<int>();
         list4.push_back(0);
         for (auto&& i : list4) { 
            i++; 
         }
         for(int loop24 = 0; loop24 < 3; loop24++) {
            std::list<int> list8 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            for(int loop25 = 0; loop25 < 3; loop25++) {
               std::list<int> list9 = std::list<int>();
               list6.push_back(0);
               for (auto&& i : list6) { 
                  i++; 
               }
               for(int loop26 = 0; loop26 < 3; loop26++) {
                  std::list<int> list10 = std::list<int>();
                  list9.push_back(0);
                  for (auto&& i : list9) { 
                     i++; 
                  }
                  for(int loop27 = 0; loop27 < 3; loop27++) {
                     std::list<int> list11 = std::list<int>();
                     list10.push_back(0);
                     for (auto&& i : list10) { 
                        i++; 
                     }
                     for(int loop28 = 0; loop28 < 3; loop28++) {
                        std::list<int> list12 = std::list<int>();
                        list11.push_back(0);
                        for (auto&& i : list11) { 
                           i++; 
                        }
                        if (list11.size() > 0) {
                           list11.pop_back();
                        }
                        for (auto&& i : list11) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     if (list5.size() > 0) {
                        list5.pop_back();
                     }
                     for (auto&& i : list5) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (list0.size() > 0) {
                     list0.pop_back();
                  }
                  for (auto&& i : list0) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (list5.size() > 0) {
                  list5.pop_back();
               }
               for (auto&& i : list5) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list0.size() > 0) {
               list0.pop_back();
            }
            for (auto&& i : list0) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list1.size() > 0) {
            list1.pop_back();
         }
         for (auto&& i : list1) {
            i--; 
         }
      }
      printf("DELETE!\n");
      if (list3.size() > 0) {
         list3.pop_back();
      }
      for (auto&& i : list3) {
         i--; 
      }
   }
   printf("DELETE!\n");
   func1(rng());
   func0(rng());
   for(int loop63 = 0; loop63 < 3; loop63++) {
      std::list<int> list6 = std::list<int>();
      list5.push_back(0);
      for (auto&& i : list5) { 
         i++; 
      }
      for(int loop64 = 0; loop64 < 3; loop64++) {
         std::list<int> list7 = std::list<int>();
         list4.push_back(0);
         for (auto&& i : list4) { 
            i++; 
         }
         for(int loop65 = 0; loop65 < 3; loop65++) {
            std::list<int> list8 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            for(int loop66 = 0; loop66 < 3; loop66++) {
               std::list<int> list9 = std::list<int>();
               list4.push_back(0);
               for (auto&& i : list4) { 
                  i++; 
               }
               for(int loop67 = 0; loop67 < 3; loop67++) {
                  std::list<int> list10 = std::list<int>();
                  list4.push_back(0);
                  for (auto&& i : list4) { 
                     i++; 
                  }
                  for(int loop68 = 0; loop68 < 3; loop68++) {
                     std::list<int> list11 = std::list<int>();
                     list8.push_back(0);
                     for (auto&& i : list8) { 
                        i++; 
                     }
                     for(int loop69 = 0; loop69 < 3; loop69++) {
                        std::list<int> list12 = std::list<int>();
                        list7.push_back(0);
                        for (auto&& i : list7) { 
                           i++; 
                        }
                        for(int loop70 = 0; loop70 < 3; loop70++) {
                           std::list<int> list13 = std::list<int>();
                           list7.push_back(0);
                           for (auto&& i : list7) { 
                              i++; 
                           }
                           if (list3.size() > 0) {
                              list3.pop_back();
                           }
                           for (auto&& i : list3) {
                              i--; 
                           }
                        }
                        printf("DELETE!\n");
                        if (list5.size() > 0) {
                           list5.pop_back();
                        }
                        for (auto&& i : list5) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     if (list3.size() > 0) {
                        list3.pop_back();
                     }
                     for (auto&& i : list3) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (list6.size() > 0) {
                     list6.pop_back();
                  }
                  for (auto&& i : list6) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (list2.size() > 0) {
                  list2.pop_back();
               }
               for (auto&& i : list2) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list2.size() > 0) {
               list2.pop_back();
            }
            for (auto&& i : list2) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list5.size() > 0) {
            list5.pop_back();
         }
         for (auto&& i : list5) {
            i--; 
         }
      }
      printf("DELETE!\n");
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
   }
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop7 = 0; loop7 < 3; loop7++) {
         std::list<int> list6 = std::list<int>();
         list6.push_back(0);
         for (auto&& i : list6) { 
            i++; 
         }
         for(int loop8 = 0; loop8 < 3; loop8++) {
            std::list<int> list7 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            for(int loop9 = 0; loop9 < 3; loop9++) {
               std::list<int> list8 = std::list<int>();
               list6.push_back(0);
               for (auto&& i : list6) { 
                  i++; 
               }
               for(int loop10 = 0; loop10 < 3; loop10++) {
                  std::list<int> list9 = std::list<int>();
                  list6.push_back(0);
                  for (auto&& i : list6) { 
                     i++; 
                  }
                  if (list6.size() > 0) {
                     list6.pop_back();
                  }
                  for (auto&& i : list6) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (list8.size() > 0) {
                  list8.pop_back();
               }
               for (auto&& i : list8) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list6.size() > 0) {
               list6.pop_back();
            }
            for (auto&& i : list6) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func4(rng());
   }
   else {
      std::list<int> list6 = std::list<int>();
      list6.push_back(0);
      for (auto&& i : list6) { 
         i++; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop17 = 0; loop17 < 3; loop17++) {
         std::list<int> list7 = std::list<int>();
         list7.push_back(0);
         for (auto&& i : list7) { 
            i++; 
         }
         for(int loop18 = 0; loop18 < 3; loop18++) {
            std::list<int> list8 = std::list<int>();
            list7.push_back(0);
            for (auto&& i : list7) { 
               i++; 
            }
            for(int loop19 = 0; loop19 < 3; loop19++) {
               std::list<int> list9 = std::list<int>();
               list9.push_back(0);
               for (auto&& i : list9) { 
                  i++; 
               }
               for(int loop20 = 0; loop20 < 3; loop20++) {
                  std::list<int> list10 = std::list<int>();
                  list6.push_back(0);
                  for (auto&& i : list6) { 
                     i++; 
                  }
                  for(int loop21 = 0; loop21 < 3; loop21++) {
                     std::list<int> list11 = std::list<int>();
                     list8.push_back(0);
                     for (auto&& i : list8) { 
                        i++; 
                     }
                     if (list9.size() > 0) {
                        list9.pop_back();
                     }
                     for (auto&& i : list9) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (list8.size() > 0) {
                     list8.pop_back();
                  }
                  for (auto&& i : list8) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (list8.size() > 0) {
                  list8.pop_back();
               }
               for (auto&& i : list8) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list7.size() > 0) {
               list7.pop_back();
            }
            for (auto&& i : list7) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list7.size() > 0) {
            list7.pop_back();
         }
         for (auto&& i : list7) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop11 = 0; loop11 < 3; loop11++) {
         std::list<int> list6 = std::list<int>();
         list6.push_back(0);
         for (auto&& i : list6) { 
            i++; 
         }
         for(int loop12 = 0; loop12 < 3; loop12++) {
            std::list<int> list7 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            if (list6.size() > 0) {
               list6.pop_back();
            }
            for (auto&& i : list6) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func6(rng());
   }
   else {
      std::list<int> list6 = std::list<int>();
      list6.push_back(0);
      for (auto&& i : list6) { 
         i++; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop14 = 0; loop14 < 3; loop14++) {
         std::list<int> list7 = std::list<int>();
         list6.push_back(0);
         for (auto&& i : list6) { 
            i++; 
         }
         for(int loop15 = 0; loop15 < 3; loop15++) {
            std::list<int> list8 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            for(int loop16 = 0; loop16 < 3; loop16++) {
               std::list<int> list9 = std::list<int>();
               list7.push_back(0);
               for (auto&& i : list7) { 
                  i++; 
               }
               if (list7.size() > 0) {
                  list7.pop_back();
               }
               for (auto&& i : list7) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list8.size() > 0) {
               list8.pop_back();
            }
            for (auto&& i : list8) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      std::list<int> list6 = std::list<int>();
      list6.push_back(0);
      for (auto&& i : list6) { 
         i++; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop13 = 0; loop13 < 3; loop13++) {
         std::list<int> list7 = std::list<int>();
         list6.push_back(0);
         for (auto&& i : list6) { 
            i++; 
         }
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop29 = 0; loop29 < 3; loop29++) {
         std::list<int> list6 = std::list<int>();
         list6.push_back(0);
         for (auto&& i : list6) { 
            i++; 
         }
         for(int loop30 = 0; loop30 < 3; loop30++) {
            std::list<int> list7 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            for(int loop31 = 0; loop31 < 3; loop31++) {
               std::list<int> list8 = std::list<int>();
               list8.push_back(0);
               for (auto&& i : list8) { 
                  i++; 
               }
               for(int loop32 = 0; loop32 < 3; loop32++) {
                  std::list<int> list9 = std::list<int>();
                  list9.push_back(0);
                  for (auto&& i : list9) { 
                     i++; 
                  }
                  for(int loop33 = 0; loop33 < 3; loop33++) {
                     std::list<int> list10 = std::list<int>();
                     list6.push_back(0);
                     for (auto&& i : list6) { 
                        i++; 
                     }
                     if (list8.size() > 0) {
                        list8.pop_back();
                     }
                     for (auto&& i : list8) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (list6.size() > 0) {
                     list6.pop_back();
                  }
                  for (auto&& i : list6) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (list6.size() > 0) {
                  list6.pop_back();
               }
               for (auto&& i : list6) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list6.size() > 0) {
               list6.pop_back();
            }
            for (auto&& i : list6) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func3(rng());
   }
   else {
      std::list<int> list6 = std::list<int>();
      list6.push_back(0);
      for (auto&& i : list6) { 
         i++; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop44 = 0; loop44 < 3; loop44++) {
         std::list<int> list7 = std::list<int>();
         list7.push_back(0);
         for (auto&& i : list7) { 
            i++; 
         }
         for(int loop45 = 0; loop45 < 3; loop45++) {
            std::list<int> list8 = std::list<int>();
            list6.push_back(0);
            for (auto&& i : list6) { 
               i++; 
            }
            for(int loop46 = 0; loop46 < 3; loop46++) {
               std::list<int> list9 = std::list<int>();
               list9.push_back(0);
               for (auto&& i : list9) { 
                  i++; 
               }
               for(int loop47 = 0; loop47 < 3; loop47++) {
                  std::list<int> list10 = std::list<int>();
                  list10.push_back(0);
                  for (auto&& i : list10) { 
                     i++; 
                  }
                  for(int loop48 = 0; loop48 < 3; loop48++) {
                     std::list<int> list11 = std::list<int>();
                     list7.push_back(0);
                     for (auto&& i : list7) { 
                        i++; 
                     }
                     for(int loop49 = 0; loop49 < 3; loop49++) {
                        std::list<int> list12 = std::list<int>();
                        list10.push_back(0);
                        for (auto&& i : list10) { 
                           i++; 
                        }
                        if (list9.size() > 0) {
                           list9.pop_back();
                        }
                        for (auto&& i : list9) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     if (list11.size() > 0) {
                        list11.pop_back();
                     }
                     for (auto&& i : list11) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (list9.size() > 0) {
                     list9.pop_back();
                  }
                  for (auto&& i : list9) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (list8.size() > 0) {
                  list8.pop_back();
               }
               for (auto&& i : list8) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list8.size() > 0) {
               list8.pop_back();
            }
            for (auto&& i : list8) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop34 = 0; loop34 < 3; loop34++) {
         std::list<int> list6 = std::list<int>();
         list6.push_back(0);
         for (auto&& i : list6) { 
            i++; 
         }
         for(int loop35 = 0; loop35 < 3; loop35++) {
            std::list<int> list7 = std::list<int>();
            list7.push_back(0);
            for (auto&& i : list7) { 
               i++; 
            }
            for(int loop36 = 0; loop36 < 3; loop36++) {
               std::list<int> list8 = std::list<int>();
               list8.push_back(0);
               for (auto&& i : list8) { 
                  i++; 
               }
               if (list8.size() > 0) {
                  list8.pop_back();
               }
               for (auto&& i : list8) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list7.size() > 0) {
               list7.pop_back();
            }
            for (auto&& i : list7) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func5(rng());
   }
   else {
      std::list<int> list6 = std::list<int>();
      list6.push_back(0);
      for (auto&& i : list6) { 
         i++; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop40 = 0; loop40 < 3; loop40++) {
         std::list<int> list7 = std::list<int>();
         list7.push_back(0);
         for (auto&& i : list7) { 
            i++; 
         }
         for(int loop41 = 0; loop41 < 3; loop41++) {
            std::list<int> list8 = std::list<int>();
            list8.push_back(0);
            for (auto&& i : list8) { 
               i++; 
            }
            for(int loop42 = 0; loop42 < 3; loop42++) {
               std::list<int> list9 = std::list<int>();
               list8.push_back(0);
               for (auto&& i : list8) { 
                  i++; 
               }
               for(int loop43 = 0; loop43 < 3; loop43++) {
                  std::list<int> list10 = std::list<int>();
                  list7.push_back(0);
                  for (auto&& i : list7) { 
                     i++; 
                  }
                  if (list6.size() > 0) {
                     list6.pop_back();
                  }
                  for (auto&& i : list6) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (list7.size() > 0) {
                  list7.pop_back();
               }
               for (auto&& i : list7) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list7.size() > 0) {
               list7.pop_back();
            }
            for (auto&& i : list7) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list7.size() > 0) {
            list7.pop_back();
         }
         for (auto&& i : list7) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop37 = 0; loop37 < 3; loop37++) {
         std::list<int> list6 = std::list<int>();
         list6.push_back(0);
         for (auto&& i : list6) { 
            i++; 
         }
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func7(rng());
   }
   else {
      std::list<int> list6 = std::list<int>();
      list6.push_back(0);
      for (auto&& i : list6) { 
         i++; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop38 = 0; loop38 < 3; loop38++) {
         std::list<int> list7 = std::list<int>();
         list6.push_back(0);
         for (auto&& i : list6) { 
            i++; 
         }
         for(int loop39 = 0; loop39 < 3; loop39++) {
            std::list<int> list8 = std::list<int>();
            list8.push_back(0);
            for (auto&& i : list8) { 
               i++; 
            }
            if (list6.size() > 0) {
               list6.pop_back();
            }
            for (auto&& i : list6) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list7.size() > 0) {
            list7.pop_back();
         }
         for (auto&& i : list7) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      std::list<int> list6 = std::list<int>();
      list6.push_back(0);
      for (auto&& i : list6) { 
         i++; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
   }
}

void func0(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop50 = 0; loop50 < 3; loop50++) {
         std::list<int> list6 = std::list<int>();
         list6.push_back(0);
         for (auto&& i : list6) { 
            i++; 
         }
         for(int loop51 = 0; loop51 < 3; loop51++) {
            std::list<int> list7 = std::list<int>();
            list7.push_back(0);
            for (auto&& i : list7) { 
               i++; 
            }
            for(int loop52 = 0; loop52 < 3; loop52++) {
               std::list<int> list8 = std::list<int>();
               list8.push_back(0);
               for (auto&& i : list8) { 
                  i++; 
               }
               for(int loop53 = 0; loop53 < 3; loop53++) {
                  std::list<int> list9 = std::list<int>();
                  list6.push_back(0);
                  for (auto&& i : list6) { 
                     i++; 
                  }
                  for(int loop54 = 0; loop54 < 3; loop54++) {
                     std::list<int> list10 = std::list<int>();
                     list7.push_back(0);
                     for (auto&& i : list7) { 
                        i++; 
                     }
                     for(int loop55 = 0; loop55 < 3; loop55++) {
                        std::list<int> list11 = std::list<int>();
                        list8.push_back(0);
                        for (auto&& i : list8) { 
                           i++; 
                        }
                        if (list11.size() > 0) {
                           list11.pop_back();
                        }
                        for (auto&& i : list11) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     if (list9.size() > 0) {
                        list9.pop_back();
                     }
                     for (auto&& i : list9) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (list9.size() > 0) {
                     list9.pop_back();
                  }
                  for (auto&& i : list9) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (list6.size() > 0) {
                  list6.pop_back();
               }
               for (auto&& i : list6) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list6.size() > 0) {
               list6.pop_back();
            }
            for (auto&& i : list6) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func2(rng());
   }
   else {
      std::list<int> list6 = std::list<int>();
      list6.push_back(0);
      for (auto&& i : list6) { 
         i++; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      if (list6.size() > 0) {
         list6.pop_back();
      }
      for (auto&& i : list6) {
         i--; 
      }
      for (auto&& i : list6) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop56 = 0; loop56 < 3; loop56++) {
         std::list<int> list7 = std::list<int>();
         list6.push_back(0);
         for (auto&& i : list6) { 
            i++; 
         }
         for(int loop57 = 0; loop57 < 3; loop57++) {
            std::list<int> list8 = std::list<int>();
            list7.push_back(0);
            for (auto&& i : list7) { 
               i++; 
            }
            for(int loop58 = 0; loop58 < 3; loop58++) {
               std::list<int> list9 = std::list<int>();
               list8.push_back(0);
               for (auto&& i : list8) { 
                  i++; 
               }
               for(int loop59 = 0; loop59 < 3; loop59++) {
                  std::list<int> list10 = std::list<int>();
                  list7.push_back(0);
                  for (auto&& i : list7) { 
                     i++; 
                  }
                  for(int loop60 = 0; loop60 < 3; loop60++) {
                     std::list<int> list11 = std::list<int>();
                     list7.push_back(0);
                     for (auto&& i : list7) { 
                        i++; 
                     }
                     for(int loop61 = 0; loop61 < 3; loop61++) {
                        std::list<int> list12 = std::list<int>();
                        list6.push_back(0);
                        for (auto&& i : list6) { 
                           i++; 
                        }
                        for(int loop62 = 0; loop62 < 3; loop62++) {
                           std::list<int> list13 = std::list<int>();
                           list9.push_back(0);
                           for (auto&& i : list9) { 
                              i++; 
                           }
                           if (list6.size() > 0) {
                              list6.pop_back();
                           }
                           for (auto&& i : list6) {
                              i--; 
                           }
                        }
                        printf("DELETE!\n");
                        if (list8.size() > 0) {
                           list8.pop_back();
                        }
                        for (auto&& i : list8) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     if (list8.size() > 0) {
                        list8.pop_back();
                     }
                     for (auto&& i : list8) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (list7.size() > 0) {
                     list7.pop_back();
                  }
                  for (auto&& i : list7) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (list8.size() > 0) {
                  list8.pop_back();
               }
               for (auto&& i : list8) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (list7.size() > 0) {
               list7.pop_back();
            }
            for (auto&& i : list7) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (list6.size() > 0) {
            list6.pop_back();
         }
         for (auto&& i : list6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

