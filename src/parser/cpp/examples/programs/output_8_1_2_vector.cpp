#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


unsigned long rng();
void func3(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func8(const unsigned long PATH0);
void func0();
void func1(const unsigned long PATH0);

int main() {
   if(rng() & 1) {
      if(rng() & 1) {
         std::vector<int> vector0 = std::vector<int>();
         for(int scalar1 = 0; scalar1 < 10; scalar1++) {
            std::vector<int> vector2 = std::vector<int>();
            scalar1++;
            for(int scalar3 = 0; scalar3 < 10; scalar3++) {
               std::vector<int> vector4 = std::vector<int>();
               scalar1++;
               for(int scalar5 = 0; scalar5 < 10; scalar5++) {
                  std::vector<int> vector6 = std::vector<int>();
                  vector2.push_back(0);
                  for (auto&& i : vector2) { 
                     i++; 
                  }
                  for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                     std::vector<int> vector8 = std::vector<int>();
                     scalar7++;
                     for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                        std::vector<int> vector10 = std::vector<int>();
                        scalar1++;
                        for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                           std::vector<int> vector12 = std::vector<int>();
                           scalar1++;
                           for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                              std::vector<int> vector14 = std::vector<int>();
                              scalar1++;
                              for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                                 std::vector<int> vector16 = std::vector<int>();
                                 vector14.push_back(0);
                                 for (auto&& i : vector14) { 
                                    i++; 
                                 }
                                 scalar11--;
                              }
                              printf("DELETE!\n");
                              scalar1--;
                           }
                           printf("DELETE!\n");
                           vector2.pop_back();
                           for (auto&& i : vector2) {
                              i--; 
                           }
                        }
                        printf("DELETE!\n");
                        scalar7--;
                     }
                     printf("DELETE!\n");
                     scalar5--;
                  }
                  printf("DELETE!\n");
                  for (auto&& i : vector4) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               scalar3--;
            }
            printf("DELETE!\n");
            scalar1--;
         }
         printf("DELETE!\n");
         for (auto&& i : vector0) {
            if (i == 0) {
               printf("IS 0!");
            }
         }
      }
      else {
         for(int scalar0 = 0; scalar0 < 10; scalar0++) {
            std::vector<int> vector1 = std::vector<int>();
            std::vector<int> vector2 = std::vector<int>();
            std::vector<int> vector3 = std::vector<int>();
            for(int scalar4 = 0; scalar4 < 10; scalar4++) {
               if(rng() & 1) {
                  for (auto&& i : vector1) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
               }
               else {
                  for (auto&& i : vector2) {
                     i--; 
                  }
                  for (auto&& i : vector1) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
               }
               for(int scalar5 = 0; scalar5 < 10; scalar5++) {
                  std::vector<int> vector6 = std::vector<int>();
                  vector3.push_back(0);
                  for (auto&& i : vector3) { 
                     i++; 
                  }
                  for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                     std::vector<int> vector8 = std::vector<int>();
                     vector8.push_back(0);
                     for (auto&& i : vector8) { 
                        i++; 
                     }
                     for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                        std::vector<int> vector10 = std::vector<int>();
                        scalar5++;
                        for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                           std::vector<int> vector12 = std::vector<int>();
                           vector3.push_back(0);
                           for (auto&& i : vector3) { 
                              i++; 
                           }
                           for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                              std::vector<int> vector14 = std::vector<int>();
                              vector2.push_back(0);
                              for (auto&& i : vector2) { 
                                 i++; 
                              }
                              for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                                 std::vector<int> vector16 = std::vector<int>();
                                 scalar5++;
                                 vector8.pop_back();
                                 for (auto&& i : vector8) {
                                    i--; 
                                 }
                              }
                              printf("DELETE!\n");
                              scalar13--;
                           }
                           printf("DELETE!\n");
                           for (auto&& i : vector10) {
                              i--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (auto&& i : vector10) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     scalar5--;
                  }
                  printf("DELETE!\n");
                  scalar0--;
               }
               printf("DELETE!\n");
               func3(rng());
            }
            if (scalar0 == 0) {
               printf("IS 0!");
            }
            for(int scalar4 = 0; scalar4 < 10; scalar4++) {
               std::vector<int> vector5 = std::vector<int>();
               vector3.push_back(0);
               for (auto&& i : vector3) { 
                  i++; 
               }
               for(int scalar6 = 0; scalar6 < 10; scalar6++) {
                  std::vector<int> vector7 = std::vector<int>();
                  scalar6++;
                  for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                     std::vector<int> vector9 = std::vector<int>();
                     vector7.push_back(0);
                     for (auto&& i : vector7) { 
                        i++; 
                     }
                     for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                        std::vector<int> vector11 = std::vector<int>();
                        scalar0++;
                        for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                           std::vector<int> vector13 = std::vector<int>();
                           scalar12++;
                           for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                              std::vector<int> vector15 = std::vector<int>();
                              scalar10++;
                              for(int scalar16 = 0; scalar16 < 10; scalar16++) {
                                 std::vector<int> vector17 = std::vector<int>();
                                 scalar14++;
                                 scalar12--;
                              }
                              printf("DELETE!\n");
                              for (auto&& i : vector11) {
                                 i--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (auto&& i : vector9) {
                              i--; 
                           }
                        }
                        printf("DELETE!\n");
                        vector2.pop_back();
                        for (auto&& i : vector2) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (auto&& i : vector9) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  scalar4--;
               }
               printf("DELETE!\n");
               scalar0--;
            }
            printf("DELETE!\n");
            func2(rng());
         }
      }
   }
   else {
      func0();
   }
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         std::vector<int> vector6 = std::vector<int>();
         scalar5++;
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            std::vector<int> vector8 = std::vector<int>();
            scalar7++;
            for(int scalar9 = 0; scalar9 < 10; scalar9++) {
               std::vector<int> vector10 = std::vector<int>();
               vector10.push_back(0);
               for (auto&& i : vector10) { 
                  i++; 
               }
               for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                  std::vector<int> vector12 = std::vector<int>();
                  vector12.push_back(0);
                  for (auto&& i : vector12) { 
                     i++; 
                  }
                  for (auto&& i : vector6) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               scalar9--;
            }
            printf("DELETE!\n");
            for (auto&& i : vector8) {
               i--; 
            }
         }
         printf("DELETE!\n");
         scalar5--;
      }
      printf("DELETE!\n");
      func5(rng());
   }
   else {
      std::vector<int> vector5 = std::vector<int>();
      vector5.push_back(0);
      for (auto&& i : vector5) { 
         i++; 
      }
      for (auto&& i : vector5) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      vector5.pop_back();
      for (auto&& i : vector5) {
         i--; 
      }
      for (auto&& i : vector5) {
         i--; 
      }
      for (auto&& i : vector5) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar6 = 0; scalar6 < 10; scalar6++) {
         std::vector<int> vector7 = std::vector<int>();
         vector5.push_back(0);
         for (auto&& i : vector5) { 
            i++; 
         }
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            std::vector<int> vector9 = std::vector<int>();
            scalar8++;
            for(int scalar10 = 0; scalar10 < 10; scalar10++) {
               std::vector<int> vector11 = std::vector<int>();
               vector5.push_back(0);
               for (auto&& i : vector5) { 
                  i++; 
               }
               for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                  std::vector<int> vector13 = std::vector<int>();
                  vector5.push_back(0);
                  for (auto&& i : vector5) { 
                     i++; 
                  }
                  for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                     std::vector<int> vector15 = std::vector<int>();
                     vector15.push_back(0);
                     for (auto&& i : vector15) { 
                        i++; 
                     }
                     scalar14--;
                  }
                  printf("DELETE!\n");
                  vector5.pop_back();
                  for (auto&& i : vector5) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               scalar8--;
            }
            printf("DELETE!\n");
            for (auto&& i : vector7) {
               i--; 
            }
         }
         printf("DELETE!\n");
         for (auto&& i : vector7) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         std::vector<int> vector6 = std::vector<int>();
         vector6.push_back(0);
         for (auto&& i : vector6) { 
            i++; 
         }
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            std::vector<int> vector8 = std::vector<int>();
            vector6.push_back(0);
            for (auto&& i : vector6) { 
               i++; 
            }
            vector6.pop_back();
            for (auto&& i : vector6) {
               i--; 
            }
         }
         printf("DELETE!\n");
         vector6.pop_back();
         for (auto&& i : vector6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func7(rng());
   }
   else {
      std::vector<int> vector5 = std::vector<int>();
      vector5.push_back(0);
      for (auto&& i : vector5) { 
         i++; 
      }
      for (auto&& i : vector5) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      vector5.pop_back();
      for (auto&& i : vector5) {
         i--; 
      }
      for (auto&& i : vector5) {
         i--; 
      }
      for (auto&& i : vector5) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar6 = 0; scalar6 < 10; scalar6++) {
         std::vector<int> vector7 = std::vector<int>();
         vector7.push_back(0);
         for (auto&& i : vector7) { 
            i++; 
         }
         for(int scalar8 = 0; scalar8 < 10; scalar8++) {
            std::vector<int> vector9 = std::vector<int>();
            vector5.push_back(0);
            for (auto&& i : vector5) { 
               i++; 
            }
            for(int scalar10 = 0; scalar10 < 10; scalar10++) {
               std::vector<int> vector11 = std::vector<int>();
               scalar6++;
               scalar8--;
            }
            printf("DELETE!\n");
            vector5.pop_back();
            for (auto&& i : vector5) {
               i--; 
            }
         }
         printf("DELETE!\n");
         for (auto&& i : vector5) {
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
      std::vector<int> vector5 = std::vector<int>();
      vector5.push_back(0);
      for (auto&& i : vector5) { 
         i++; 
      }
      for (auto&& i : vector5) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      vector5.pop_back();
      for (auto&& i : vector5) {
         i--; 
      }
      for (auto&& i : vector5) {
         i--; 
      }
      for (auto&& i : vector5) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar6 = 0; scalar6 < 10; scalar6++) {
         std::vector<int> vector7 = std::vector<int>();
         vector5.push_back(0);
         for (auto&& i : vector5) { 
            i++; 
         }
         for (auto&& i : vector7) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         std::vector<int> vector5 = std::vector<int>();
         scalar4++;
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            std::vector<int> vector7 = std::vector<int>();
            scalar4++;
            for(int scalar8 = 0; scalar8 < 10; scalar8++) {
               std::vector<int> vector9 = std::vector<int>();
               vector5.push_back(0);
               for (auto&& i : vector5) { 
                  i++; 
               }
               for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                  std::vector<int> vector11 = std::vector<int>();
                  scalar8++;
                  for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                     std::vector<int> vector13 = std::vector<int>();
                     scalar10++;
                     scalar10--;
                  }
                  printf("DELETE!\n");
                  scalar10--;
               }
               printf("DELETE!\n");
               for (auto&& i : vector9) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            for (auto&& i : vector7) {
               i--; 
            }
         }
         printf("DELETE!\n");
         scalar4--;
      }
      printf("DELETE!\n");
      func4(rng());
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      vector4.push_back(0);
      for (auto&& i : vector4) { 
         i++; 
      }
      for (auto&& i : vector4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      vector4.pop_back();
      for (auto&& i : vector4) {
         i--; 
      }
      for (auto&& i : vector4) {
         i--; 
      }
      for (auto&& i : vector4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         std::vector<int> vector6 = std::vector<int>();
         vector6.push_back(0);
         for (auto&& i : vector6) { 
            i++; 
         }
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            std::vector<int> vector8 = std::vector<int>();
            vector8.push_back(0);
            for (auto&& i : vector8) { 
               i++; 
            }
            for(int scalar9 = 0; scalar9 < 10; scalar9++) {
               std::vector<int> vector10 = std::vector<int>();
               scalar7++;
               for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                  std::vector<int> vector12 = std::vector<int>();
                  vector6.push_back(0);
                  for (auto&& i : vector6) { 
                     i++; 
                  }
                  for(int scalar13 = 0; scalar13 < 10; scalar13++) {
                     std::vector<int> vector14 = std::vector<int>();
                     scalar13++;
                     for(int scalar15 = 0; scalar15 < 10; scalar15++) {
                        std::vector<int> vector16 = std::vector<int>();
                        scalar9++;
                        scalar5--;
                     }
                     printf("DELETE!\n");
                     scalar11--;
                  }
                  printf("DELETE!\n");
                  vector8.pop_back();
                  for (auto&& i : vector8) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               vector6.pop_back();
               for (auto&& i : vector6) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            scalar5--;
         }
         printf("DELETE!\n");
         vector6.pop_back();
         for (auto&& i : vector6) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         std::vector<int> vector5 = std::vector<int>();
         scalar4++;
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            std::vector<int> vector7 = std::vector<int>();
            scalar6++;
            for(int scalar8 = 0; scalar8 < 10; scalar8++) {
               std::vector<int> vector9 = std::vector<int>();
               vector9.push_back(0);
               for (auto&& i : vector9) { 
                  i++; 
               }
               for (auto&& i : vector7) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            for (auto&& i : vector5) {
               i--; 
            }
         }
         printf("DELETE!\n");
         scalar4--;
      }
      printf("DELETE!\n");
      func6(rng());
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      vector4.push_back(0);
      for (auto&& i : vector4) { 
         i++; 
      }
      for (auto&& i : vector4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      vector4.pop_back();
      for (auto&& i : vector4) {
         i--; 
      }
      for (auto&& i : vector4) {
         i--; 
      }
      for (auto&& i : vector4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         std::vector<int> vector6 = std::vector<int>();
         scalar5++;
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            std::vector<int> vector8 = std::vector<int>();
            vector6.push_back(0);
            for (auto&& i : vector6) { 
               i++; 
            }
            for(int scalar9 = 0; scalar9 < 10; scalar9++) {
               std::vector<int> vector10 = std::vector<int>();
               scalar7++;
               for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                  std::vector<int> vector12 = std::vector<int>();
                  scalar9++;
                  scalar7--;
               }
               printf("DELETE!\n");
               scalar5--;
            }
            printf("DELETE!\n");
            for (auto&& i : vector4) {
               i--; 
            }
         }
         printf("DELETE!\n");
         scalar5--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar4 = 0; scalar4 < 10; scalar4++) {
         std::vector<int> vector5 = std::vector<int>();
         vector5.push_back(0);
         for (auto&& i : vector5) { 
            i++; 
         }
         scalar4--;
      }
      printf("DELETE!\n");
      func8(rng());
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      vector4.push_back(0);
      for (auto&& i : vector4) { 
         i++; 
      }
      for (auto&& i : vector4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      vector4.pop_back();
      for (auto&& i : vector4) {
         i--; 
      }
      for (auto&& i : vector4) {
         i--; 
      }
      for (auto&& i : vector4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         std::vector<int> vector6 = std::vector<int>();
         scalar5++;
         for(int scalar7 = 0; scalar7 < 10; scalar7++) {
            std::vector<int> vector8 = std::vector<int>();
            vector8.push_back(0);
            for (auto&& i : vector8) { 
               i++; 
            }
            scalar5--;
         }
         printf("DELETE!\n");
         scalar5--;
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      std::vector<int> vector4 = std::vector<int>();
      vector4.push_back(0);
      for (auto&& i : vector4) { 
         i++; 
      }
      for (auto&& i : vector4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      vector4.pop_back();
      for (auto&& i : vector4) {
         i--; 
      }
      for (auto&& i : vector4) {
         i--; 
      }
      for (auto&& i : vector4) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
   }
}

void func0() {
   for(int scalar0 = 0; scalar0 < 10; scalar0++) {
      func1(rng());
   }
}

void func1(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int scalar1 = 0; scalar1 < 10; scalar1++) {
         std::vector<int> vector2 = std::vector<int>();
         scalar1++;
         for(int scalar3 = 0; scalar3 < 10; scalar3++) {
            std::vector<int> vector4 = std::vector<int>();
            vector2.push_back(0);
            for (auto&& i : vector2) { 
               i++; 
            }
            for(int scalar5 = 0; scalar5 < 10; scalar5++) {
               std::vector<int> vector6 = std::vector<int>();
               scalar3++;
               for(int scalar7 = 0; scalar7 < 10; scalar7++) {
                  std::vector<int> vector8 = std::vector<int>();
                  vector4.push_back(0);
                  for (auto&& i : vector4) { 
                     i++; 
                  }
                  for(int scalar9 = 0; scalar9 < 10; scalar9++) {
                     std::vector<int> vector10 = std::vector<int>();
                     vector2.push_back(0);
                     for (auto&& i : vector2) { 
                        i++; 
                     }
                     for(int scalar11 = 0; scalar11 < 10; scalar11++) {
                        std::vector<int> vector12 = std::vector<int>();
                        vector12.push_back(0);
                        for (auto&& i : vector12) { 
                           i++; 
                        }
                        vector12.pop_back();
                        for (auto&& i : vector12) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     scalar9--;
                  }
                  printf("DELETE!\n");
                  scalar5--;
               }
               printf("DELETE!\n");
               scalar3--;
            }
            printf("DELETE!\n");
            vector2.pop_back();
            for (auto&& i : vector2) {
               i--; 
            }
         }
         printf("DELETE!\n");
         scalar1--;
      }
      printf("DELETE!\n");
      func3(rng());
   }
   else {
      std::vector<int> vector1 = std::vector<int>();
      vector1.push_back(0);
      for (auto&& i : vector1) { 
         i++; 
      }
      for (auto&& i : vector1) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      vector1.pop_back();
      for (auto&& i : vector1) {
         i--; 
      }
      for (auto&& i : vector1) {
         i--; 
      }
      for (auto&& i : vector1) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int scalar2 = 0; scalar2 < 10; scalar2++) {
         std::vector<int> vector3 = std::vector<int>();
         scalar2++;
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            std::vector<int> vector5 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            for(int scalar6 = 0; scalar6 < 10; scalar6++) {
               std::vector<int> vector7 = std::vector<int>();
               scalar2++;
               for(int scalar8 = 0; scalar8 < 10; scalar8++) {
                  std::vector<int> vector9 = std::vector<int>();
                  vector7.push_back(0);
                  for (auto&& i : vector7) { 
                     i++; 
                  }
                  for(int scalar10 = 0; scalar10 < 10; scalar10++) {
                     std::vector<int> vector11 = std::vector<int>();
                     vector5.push_back(0);
                     for (auto&& i : vector5) { 
                        i++; 
                     }
                     for(int scalar12 = 0; scalar12 < 10; scalar12++) {
                        std::vector<int> vector13 = std::vector<int>();
                        vector9.push_back(0);
                        for (auto&& i : vector9) { 
                           i++; 
                        }
                        for(int scalar14 = 0; scalar14 < 10; scalar14++) {
                           std::vector<int> vector15 = std::vector<int>();
                           vector11.push_back(0);
                           for (auto&& i : vector11) { 
                              i++; 
                           }
                           scalar10--;
                        }
                        printf("DELETE!\n");
                        vector11.pop_back();
                        for (auto&& i : vector11) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     scalar8--;
                  }
                  printf("DELETE!\n");
                  vector3.pop_back();
                  for (auto&& i : vector3) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               for (auto&& i : vector1) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            scalar4--;
         }
         printf("DELETE!\n");
         for (auto&& i : vector3) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

