#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>


unsigned long rng();
void func0(const unsigned long PATH0);
void func1(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func8(const unsigned long PATH0);

int main() {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      std::list<int> list1 = std::list<int>();
      list1.push_back(0);
      for (auto&& i : list1) { 
         i++; 
      }
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         std::list<int> list3 = std::list<int>();
         scalar2++;
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            std::list<int> list5 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               std::list<int> list7 = std::list<int>();
               list3.push_back(0);
               for (auto&& i : list3) { 
                  i++; 
               }
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  std::list<int> list9 = std::list<int>();
                  list3.push_back(0);
                  for (auto&& i : list3) { 
                     i++; 
                  }
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     std::list<int> list11 = std::list<int>();
                     list7.push_back(0);
                     for (auto&& i : list7) { 
                        i++; 
                     }
                     for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                        std::list<int> list13 = std::list<int>();
                        scalar10++;
                        for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                           std::list<int> list15 = std::list<int>();
                           scalar12++;
                           for (auto&& i : list9) {
                              i--; 
                           }
                        }
                        printf("DELETE!\n");
                        list3.pop_back();
                        for (auto&& i : list3) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     scalar2--;
                  }
                  printf("DELETE!\n");
                  list7.pop_back();
                  for (auto&& i : list7) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               scalar2--;
            }
            printf("DELETE!\n");
            list1.pop_back();
            for (auto&& i : list1) {
               i--; 
            }
         }
         printf("DELETE!\n");
         list3.pop_back();
         for (auto&& i : list3) {
            i--; 
         }
      }
      printf("DELETE!\n");
      scalar0--;
   }
   printf("DELETE!\n");
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      std::list<int> list1 = std::list<int>();
      scalar0++;
      func0(rng());
      std::list<int> list2 = std::list<int>();
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            std::list<int> list5 = std::list<int>();
            scalar4++;
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               std::list<int> list7 = std::list<int>();
               scalar3++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  std::list<int> list9 = std::list<int>();
                  scalar3++;
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     std::list<int> list11 = std::list<int>();
                     list5.push_back(0);
                     for (auto&& i : list5) { 
                        i++; 
                     }
                     for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                        std::list<int> list13 = std::list<int>();
                        list2.push_back(0);
                        for (auto&& i : list2) { 
                           i++; 
                        }
                        for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                           std::list<int> list15 = std::list<int>();
                           scalar14++;
                           for(int scalar16 = 0; scalar16 < 10; scalar16++) {
                              std::list<int> list17 = std::list<int>();
                              scalar16++;
                              for(int scalar18 = 0; scalar18 < 10; scalar18++) {
                                 std::list<int> list19 = std::list<int>();
                                 scalar4++;
                                 scalar18--;
                              }
                              printf("DELETE!\n");
                              scalar12--;
                           }
                           printf("DELETE!\n");
                           scalar0--;
                        }
                        printf("DELETE!\n");
                        for (auto&& i : list13) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (auto&& i : list9) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (auto&& i : list7) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               scalar4--;
            }
            printf("DELETE!\n");
            list2.pop_back();
            for (auto&& i : list2) {
               i--; 
            }
         }
         printf("DELETE!\n");
         func1(rng());
      }
      if (scalar0 == 0) {
         printf("IS 0!");
      }
      scalar0--;
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
   func1(rng());
   if(PATH0 & 1) {
      std::list<int> list2 = std::list<int>();
      std::list<int> list3 = std::list<int>();
      std::list<int> list4 = std::list<int>();
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         if(PATH0 & 2) {
            for (auto&& i : list2) {
               if (i == 0) {
                  printf("IS 0!");
               }
            }
         }
         else {
            scalar5--;
            for (auto&& i : list2) {
               if (i == 0) {
                  printf("IS 0!");
               }
            }
         }
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            std::list<int> list7 = std::list<int>();
            scalar6++;
            for(int scalar8 = 0; scalar8 < 10; scalar8++) {
               std::list<int> list9 = std::list<int>();
               list4.push_back(0);
               for (auto&& i : list4) { 
                  i++; 
               }
               for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                  std::list<int> list11 = std::list<int>();
                  scalar6++;
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     std::list<int> list13 = std::list<int>();
                     list13.push_back(0);
                     for (auto&& i : list13) { 
                        i++; 
                     }
                     for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                        std::list<int> list15 = std::list<int>();
                        list13.push_back(0);
                        for (auto&& i : list13) { 
                           i++; 
                        }
                        for(int scalar16 = 0; scalar16 < 10; scalar16++) {
                           std::list<int> list17 = std::list<int>();
                           scalar12++;
                           scalar12--;
                        }
                        printf("DELETE!\n");
                        for (auto&& i : list2) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     list13.pop_back();
                     for (auto&& i : list13) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (auto&& i : list3) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               for (auto&& i : list3) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            list4.pop_back();
            for (auto&& i : list4) {
               i--; 
            }
         }
         printf("DELETE!\n");
         func3(rng());
      }
      for (auto&& i : list2) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
   }
   else {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            std::list<int> list4 = std::list<int>();
            scalar2++;
            for(int scalar5 = 0; scalar5 < 10; scalar5++) {
               std::list<int> list6 = std::list<int>();
               list4.push_back(0);
               for (auto&& i : list4) { 
                  i++; 
               }
               for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                  std::list<int> list8 = std::list<int>();
                  scalar3++;
                  for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                     std::list<int> list10 = std::list<int>();
                     scalar9++;
                     for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                        std::list<int> list12 = std::list<int>();
                        scalar9++;
                        for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                           std::list<int> list14 = std::list<int>();
                           scalar5++;
                           for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                              std::list<int> list16 = std::list<int>();
                              scalar3++;
                              for(int scalar17 = 0; scalar17 < 10; scalar17++) {
                                 std::list<int> list18 = std::list<int>();
                                 list16.push_back(0);
                                 for (auto&& i : list16) { 
                                    i++; 
                                 }
                                 list4.pop_back();
                                 for (auto&& i : list4) {
                                    i--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (auto&& i : list6) {
                                 i--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (auto&& i : list12) {
                              i--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (auto&& i : list6) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (auto&& i : list8) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  scalar5--;
               }
               printf("DELETE!\n");
               for (auto&& i : list4) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            scalar2--;
         }
         printf("DELETE!\n");
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            std::list<int> list4 = std::list<int>();
            list4.push_back(0);
            for (auto&& i : list4) { 
               i++; 
            }
            for(int scalar5 = 0; scalar5 < 10; scalar5++) {
               std::list<int> list6 = std::list<int>();
               scalar3++;
               for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                  std::list<int> list8 = std::list<int>();
                  scalar7++;
                  for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                     std::list<int> list10 = std::list<int>();
                     scalar2++;
                     for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                        std::list<int> list12 = std::list<int>();
                        list10.push_back(0);
                        for (auto&& i : list10) { 
                           i++; 
                        }
                        for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                           std::list<int> list14 = std::list<int>();
                           scalar2++;
                           for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                              std::list<int> list16 = std::list<int>();
                              scalar3++;
                              list4.pop_back();
                              for (auto&& i : list4) {
                                 i--; 
                              }
                           }
                           printf("DELETE!\n");
                           scalar7--;
                        }
                        printf("DELETE!\n");
                        for (auto&& i : list12) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     scalar7--;
                  }
                  printf("DELETE!\n");
                  scalar3--;
               }
               printf("DELETE!\n");
               scalar5--;
            }
            printf("DELETE!\n");
            for (auto&& i : list4) {
               i--; 
            }
         }
         printf("DELETE!\n");
         func2(rng());
      }
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         std::list<int> list3 = std::list<int>();
         scalar2++;
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            std::list<int> list5 = std::list<int>();
            scalar2++;
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               std::list<int> list7 = std::list<int>();
               scalar6++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  std::list<int> list9 = std::list<int>();
                  list5.push_back(0);
                  for (auto&& i : list5) { 
                     i++; 
                  }
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     std::list<int> list11 = std::list<int>();
                     scalar10++;
                     for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                        std::list<int> list13 = std::list<int>();
                        list5.push_back(0);
                        for (auto&& i : list5) { 
                           i++; 
                        }
                        for (auto&& i : list11) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     scalar4--;
                  }
                  printf("DELETE!\n");
                  scalar4--;
               }
               printf("DELETE!\n");
               scalar4--;
            }
            printf("DELETE!\n");
            list5.pop_back();
            for (auto&& i : list5) {
               i--; 
            }
         }
         printf("DELETE!\n");
         for (auto&& i : list3) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func3(rng());
   }
   else {
      std::list<int> list2 = std::list<int>();
      list2.push_back(0);
      for (auto&& i : list2) { 
         i++; 
      }
      for (auto&& i : list2) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      list2.pop_back();
      for (auto&& i : list2) {
         i--; 
      }
      for (auto&& i : list2) {
         i--; 
      }
      for (auto&& i : list2) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         std::list<int> list4 = std::list<int>();
         list4.push_back(0);
         for (auto&& i : list4) { 
            i++; 
         }
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            std::list<int> list6 = std::list<int>();
            list4.push_back(0);
            for (auto&& i : list4) { 
               i++; 
            }
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               std::list<int> list8 = std::list<int>();
               scalar5++;
               for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                  std::list<int> list10 = std::list<int>();
                  list8.push_back(0);
                  for (auto&& i : list8) { 
                     i++; 
                  }
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     std::list<int> list12 = std::list<int>();
                     scalar11++;
                     for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                        std::list<int> list14 = std::list<int>();
                        scalar3++;
                        for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                           std::list<int> list16 = std::list<int>();
                           scalar11++;
                           scalar5--;
                        }
                        printf("DELETE!\n");
                        for (auto&& i : list2) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     scalar5--;
                  }
                  printf("DELETE!\n");
                  scalar3--;
               }
               printf("DELETE!\n");
               scalar7--;
            }
            printf("DELETE!\n");
            for (auto&& i : list2) {
               i--; 
            }
         }
         printf("DELETE!\n");
         list4.pop_back();
         for (auto&& i : list4) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         std::list<int> list3 = std::list<int>();
         list3.push_back(0);
         for (auto&& i : list3) { 
            i++; 
         }
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            std::list<int> list5 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               std::list<int> list7 = std::list<int>();
               scalar2++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  std::list<int> list9 = std::list<int>();
                  scalar8++;
                  scalar4--;
               }
               printf("DELETE!\n");
               for (auto&& i : list7) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            for (auto&& i : list5) {
               i--; 
            }
         }
         printf("DELETE!\n");
         list3.pop_back();
         for (auto&& i : list3) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func5(rng());
   }
   else {
      std::list<int> list2 = std::list<int>();
      list2.push_back(0);
      for (auto&& i : list2) { 
         i++; 
      }
      for (auto&& i : list2) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      list2.pop_back();
      for (auto&& i : list2) {
         i--; 
      }
      for (auto&& i : list2) {
         i--; 
      }
      for (auto&& i : list2) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         std::list<int> list4 = std::list<int>();
         list4.push_back(0);
         for (auto&& i : list4) { 
            i++; 
         }
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            std::list<int> list6 = std::list<int>();
            list2.push_back(0);
            for (auto&& i : list2) { 
               i++; 
            }
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               std::list<int> list8 = std::list<int>();
               scalar7++;
               for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                  std::list<int> list10 = std::list<int>();
                  scalar5++;
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     std::list<int> list12 = std::list<int>();
                     list6.push_back(0);
                     for (auto&& i : list6) { 
                        i++; 
                     }
                     scalar3--;
                  }
                  printf("DELETE!\n");
                  list2.pop_back();
                  for (auto&& i : list2) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               scalar5--;
            }
            printf("DELETE!\n");
            list4.pop_back();
            for (auto&& i : list4) {
               i--; 
            }
         }
         printf("DELETE!\n");
         for (auto&& i : list2) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         std::list<int> list3 = std::list<int>();
         scalar2++;
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            std::list<int> list5 = std::list<int>();
            list5.push_back(0);
            for (auto&& i : list5) { 
               i++; 
            }
            scalar4--;
         }
         printf("DELETE!\n");
         for (auto&& i : list3) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func7(rng());
   }
   else {
      std::list<int> list2 = std::list<int>();
      list2.push_back(0);
      for (auto&& i : list2) { 
         i++; 
      }
      for (auto&& i : list2) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      list2.pop_back();
      for (auto&& i : list2) {
         i--; 
      }
      for (auto&& i : list2) {
         i--; 
      }
      for (auto&& i : list2) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         std::list<int> list4 = std::list<int>();
         list4.push_back(0);
         for (auto&& i : list4) { 
            i++; 
         }
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            std::list<int> list6 = std::list<int>();
            scalar3++;
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               std::list<int> list8 = std::list<int>();
               list4.push_back(0);
               for (auto&& i : list4) { 
                  i++; 
               }
               for (auto&& i : list6) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            for (auto&& i : list2) {
               i--; 
            }
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      std::list<int> list2 = std::list<int>();
      list2.push_back(0);
      for (auto&& i : list2) { 
         i++; 
      }
      for (auto&& i : list2) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      list2.pop_back();
      for (auto&& i : list2) {
         i--; 
      }
      for (auto&& i : list2) {
         i--; 
      }
      for (auto&& i : list2) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         std::list<int> list4 = std::list<int>();
         list4.push_back(0);
         for (auto&& i : list4) { 
            i++; 
         }
         list4.pop_back();
         for (auto&& i : list4) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         std::list<int> list4 = std::list<int>();
         scalar3++;
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            std::list<int> list6 = std::list<int>();
            scalar3++;
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               std::list<int> list8 = std::list<int>();
               list6.push_back(0);
               for (auto&& i : list6) { 
                  i++; 
               }
               for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                  std::list<int> list10 = std::list<int>();
                  scalar7++;
                  for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                     std::list<int> list12 = std::list<int>();
                     list12.push_back(0);
                     for (auto&& i : list12) { 
                        i++; 
                     }
                     list6.pop_back();
                     for (auto&& i : list6) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (auto&& i : list6) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               scalar3--;
            }
            printf("DELETE!\n");
            scalar3--;
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      func4(rng());
   }
   else {
      std::list<int> list3 = std::list<int>();
      list3.push_back(0);
      for (auto&& i : list3) { 
         i++; 
      }
      for (auto&& i : list3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      list3.pop_back();
      for (auto&& i : list3) {
         i--; 
      }
      for (auto&& i : list3) {
         i--; 
      }
      for (auto&& i : list3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         std::list<int> list5 = std::list<int>();
         scalar4++;
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            std::list<int> list7 = std::list<int>();
            list7.push_back(0);
            for (auto&& i : list7) { 
               i++; 
            }
            for(int scalar8 = 0; scalar8 < 10; scalar8++) {
               std::list<int> list9 = std::list<int>();
               list7.push_back(0);
               for (auto&& i : list7) { 
                  i++; 
               }
               for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                  std::list<int> list11 = std::list<int>();
                  scalar6++;
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     std::list<int> list13 = std::list<int>();
                     list11.push_back(0);
                     for (auto&& i : list11) { 
                        i++; 
                     }
                     for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                        std::list<int> list15 = std::list<int>();
                        list13.push_back(0);
                        for (auto&& i : list13) { 
                           i++; 
                        }
                        list11.pop_back();
                        for (auto&& i : list11) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     list7.pop_back();
                     for (auto&& i : list7) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (auto&& i : list9) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               list7.pop_back();
               for (auto&& i : list7) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            for (auto&& i : list7) {
               i--; 
            }
         }
         printf("DELETE!\n");
         for (auto&& i : list5) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         std::list<int> list4 = std::list<int>();
         list4.push_back(0);
         for (auto&& i : list4) { 
            i++; 
         }
         for(int scalar5 = 0; scalar5 < 10; scalar5++) {
            std::list<int> list6 = std::list<int>();
            scalar3++;
            for(int scalar7 = 0; scalar7 < 10; scalar7++) {
               std::list<int> list8 = std::list<int>();
               list6.push_back(0);
               for (auto&& i : list6) { 
                  i++; 
               }
               scalar3--;
            }
            printf("DELETE!\n");
            list6.pop_back();
            for (auto&& i : list6) {
               i--; 
            }
         }
         printf("DELETE!\n");
         scalar3--;
      }
      printf("DELETE!\n");
      func6(rng());
   }
   else {
      std::list<int> list3 = std::list<int>();
      list3.push_back(0);
      for (auto&& i : list3) { 
         i++; 
      }
      for (auto&& i : list3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      list3.pop_back();
      for (auto&& i : list3) {
         i--; 
      }
      for (auto&& i : list3) {
         i--; 
      }
      for (auto&& i : list3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         std::list<int> list5 = std::list<int>();
         list5.push_back(0);
         for (auto&& i : list5) { 
            i++; 
         }
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            std::list<int> list7 = std::list<int>();
            list3.push_back(0);
            for (auto&& i : list3) { 
               i++; 
            }
            for(int scalar8 = 0; scalar8 < 10; scalar8++) {
               std::list<int> list9 = std::list<int>();
               scalar6++;
               for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                  std::list<int> list11 = std::list<int>();
                  scalar10++;
                  for (auto&& i : list7) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               for (auto&& i : list7) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            list5.pop_back();
            for (auto&& i : list5) {
               i--; 
            }
         }
         printf("DELETE!\n");
         scalar4--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         std::list<int> list4 = std::list<int>();
         list4.push_back(0);
         for (auto&& i : list4) { 
            i++; 
         }
         scalar3--;
      }
      printf("DELETE!\n");
      func8(rng());
   }
   else {
      std::list<int> list3 = std::list<int>();
      list3.push_back(0);
      for (auto&& i : list3) { 
         i++; 
      }
      for (auto&& i : list3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      list3.pop_back();
      for (auto&& i : list3) {
         i--; 
      }
      for (auto&& i : list3) {
         i--; 
      }
      for (auto&& i : list3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         std::list<int> list5 = std::list<int>();
         scalar4++;
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            std::list<int> list7 = std::list<int>();
            list7.push_back(0);
            for (auto&& i : list7) { 
               i++; 
            }
            list7.pop_back();
            for (auto&& i : list7) {
               i--; 
            }
         }
         printf("DELETE!\n");
         for (auto&& i : list3) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      std::list<int> list3 = std::list<int>();
      list3.push_back(0);
      for (auto&& i : list3) { 
         i++; 
      }
      for (auto&& i : list3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      list3.pop_back();
      for (auto&& i : list3) {
         i--; 
      }
      for (auto&& i : list3) {
         i--; 
      }
      for (auto&& i : list3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
   }
}

