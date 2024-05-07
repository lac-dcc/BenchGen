#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func1();
void func2(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func8(const unsigned long PATH0);

int main() {
   for(int loop0 = 0; loop0 < 3; loop0++) {
      if(rng() & 1) {
         func0(rng());
      }
      else {
         func1();
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
   std::vector<int> vector0 = std::vector<int>();
   std::vector<int> vector1 = std::vector<int>();
   std::vector<int> vector2 = std::vector<int>();
   for(int loop1 = 0; loop1 < 3; loop1++) {
      if(PATH0 & 1) {
         for (auto&& i : vector1) {
            if (i == 0) {
               printf("IS 0!");
            }
         }
      }
      else {
         if (vector1.size() > 0) {
            vector1.pop_back();
         }
         for (auto&& i : vector1) {
            i--; 
         }
         for (auto&& i : vector0) {
            if (i == 0) {
               printf("IS 0!");
            }
         }
      }
      for(int loop2 = 0; loop2 < 3; loop2++) {
         std::vector<int> vector3 = std::vector<int>();
         vector3.push_back(0);
         for (auto&& i : vector3) { 
            i++; 
         }
         for(int loop3 = 0; loop3 < 3; loop3++) {
            std::vector<int> vector4 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            for(int loop4 = 0; loop4 < 3; loop4++) {
               std::vector<int> vector5 = std::vector<int>();
               vector1.push_back(0);
               for (auto&& i : vector1) { 
                  i++; 
               }
               for(int loop5 = 0; loop5 < 3; loop5++) {
                  std::vector<int> vector6 = std::vector<int>();
                  vector3.push_back(0);
                  for (auto&& i : vector3) { 
                     i++; 
                  }
                  for(int loop6 = 0; loop6 < 3; loop6++) {
                     std::vector<int> vector7 = std::vector<int>();
                     vector4.push_back(0);
                     for (auto&& i : vector4) { 
                        i++; 
                     }
                     for(int loop7 = 0; loop7 < 3; loop7++) {
                        std::vector<int> vector8 = std::vector<int>();
                        vector6.push_back(0);
                        for (auto&& i : vector6) { 
                           i++; 
                        }
                        if (vector1.size() > 0) {
                           vector1.pop_back();
                        }
                        for (auto&& i : vector1) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     if (vector2.size() > 0) {
                        vector2.pop_back();
                     }
                     for (auto&& i : vector2) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (vector5.size() > 0) {
                     vector5.pop_back();
                  }
                  for (auto&& i : vector5) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (vector2.size() > 0) {
                  vector2.pop_back();
               }
               for (auto&& i : vector2) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (vector4.size() > 0) {
               vector4.pop_back();
            }
            for (auto&& i : vector4) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (vector3.size() > 0) {
            vector3.pop_back();
         }
         for (auto&& i : vector3) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func3(rng());
   }
   for (auto&& i : vector0) {
      if (i == 0) {
         printf("IS 0!");
      }
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop8 = 0; loop8 < 3; loop8++) {
         std::vector<int> vector3 = std::vector<int>();
         vector3.push_back(0);
         for (auto&& i : vector3) { 
            i++; 
         }
         for(int loop9 = 0; loop9 < 3; loop9++) {
            std::vector<int> vector4 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            for(int loop10 = 0; loop10 < 3; loop10++) {
               std::vector<int> vector5 = std::vector<int>();
               vector3.push_back(0);
               for (auto&& i : vector3) { 
                  i++; 
               }
               for(int loop11 = 0; loop11 < 3; loop11++) {
                  std::vector<int> vector6 = std::vector<int>();
                  vector3.push_back(0);
                  for (auto&& i : vector3) { 
                     i++; 
                  }
                  if (vector3.size() > 0) {
                     vector3.pop_back();
                  }
                  for (auto&& i : vector3) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (vector5.size() > 0) {
                  vector5.pop_back();
               }
               for (auto&& i : vector5) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (vector3.size() > 0) {
               vector3.pop_back();
            }
            for (auto&& i : vector3) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (vector3.size() > 0) {
            vector3.pop_back();
         }
         for (auto&& i : vector3) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func5(rng());
   }
   else {
      std::vector<int> vector3 = std::vector<int>();
      vector3.push_back(0);
      for (auto&& i : vector3) { 
         i++; 
      }
      for (auto&& i : vector3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (vector3.size() > 0) {
         vector3.pop_back();
      }
      for (auto&& i : vector3) {
         i--; 
      }
      if (vector3.size() > 0) {
         vector3.pop_back();
      }
      for (auto&& i : vector3) {
         i--; 
      }
      for (auto&& i : vector3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop18 = 0; loop18 < 3; loop18++) {
         std::vector<int> vector4 = std::vector<int>();
         vector4.push_back(0);
         for (auto&& i : vector4) { 
            i++; 
         }
         for(int loop19 = 0; loop19 < 3; loop19++) {
            std::vector<int> vector5 = std::vector<int>();
            vector4.push_back(0);
            for (auto&& i : vector4) { 
               i++; 
            }
            for(int loop20 = 0; loop20 < 3; loop20++) {
               std::vector<int> vector6 = std::vector<int>();
               vector6.push_back(0);
               for (auto&& i : vector6) { 
                  i++; 
               }
               for(int loop21 = 0; loop21 < 3; loop21++) {
                  std::vector<int> vector7 = std::vector<int>();
                  vector3.push_back(0);
                  for (auto&& i : vector3) { 
                     i++; 
                  }
                  for(int loop22 = 0; loop22 < 3; loop22++) {
                     std::vector<int> vector8 = std::vector<int>();
                     vector5.push_back(0);
                     for (auto&& i : vector5) { 
                        i++; 
                     }
                     if (vector6.size() > 0) {
                        vector6.pop_back();
                     }
                     for (auto&& i : vector6) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (vector5.size() > 0) {
                     vector5.pop_back();
                  }
                  for (auto&& i : vector5) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (vector5.size() > 0) {
                  vector5.pop_back();
               }
               for (auto&& i : vector5) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (vector4.size() > 0) {
               vector4.pop_back();
            }
            for (auto&& i : vector4) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (vector4.size() > 0) {
            vector4.pop_back();
         }
         for (auto&& i : vector4) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop12 = 0; loop12 < 3; loop12++) {
         std::vector<int> vector3 = std::vector<int>();
         vector3.push_back(0);
         for (auto&& i : vector3) { 
            i++; 
         }
         for(int loop13 = 0; loop13 < 3; loop13++) {
            std::vector<int> vector4 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            if (vector3.size() > 0) {
               vector3.pop_back();
            }
            for (auto&& i : vector3) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (vector3.size() > 0) {
            vector3.pop_back();
         }
         for (auto&& i : vector3) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func7(rng());
   }
   else {
      std::vector<int> vector3 = std::vector<int>();
      vector3.push_back(0);
      for (auto&& i : vector3) { 
         i++; 
      }
      for (auto&& i : vector3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (vector3.size() > 0) {
         vector3.pop_back();
      }
      for (auto&& i : vector3) {
         i--; 
      }
      if (vector3.size() > 0) {
         vector3.pop_back();
      }
      for (auto&& i : vector3) {
         i--; 
      }
      for (auto&& i : vector3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop15 = 0; loop15 < 3; loop15++) {
         std::vector<int> vector4 = std::vector<int>();
         vector3.push_back(0);
         for (auto&& i : vector3) { 
            i++; 
         }
         for(int loop16 = 0; loop16 < 3; loop16++) {
            std::vector<int> vector5 = std::vector<int>();
            vector3.push_back(0);
            for (auto&& i : vector3) { 
               i++; 
            }
            for(int loop17 = 0; loop17 < 3; loop17++) {
               std::vector<int> vector6 = std::vector<int>();
               vector4.push_back(0);
               for (auto&& i : vector4) { 
                  i++; 
               }
               if (vector4.size() > 0) {
                  vector4.pop_back();
               }
               for (auto&& i : vector4) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (vector5.size() > 0) {
               vector5.pop_back();
            }
            for (auto&& i : vector5) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (vector3.size() > 0) {
            vector3.pop_back();
         }
         for (auto&& i : vector3) {
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
      std::vector<int> vector3 = std::vector<int>();
      vector3.push_back(0);
      for (auto&& i : vector3) { 
         i++; 
      }
      for (auto&& i : vector3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (vector3.size() > 0) {
         vector3.pop_back();
      }
      for (auto&& i : vector3) {
         i--; 
      }
      if (vector3.size() > 0) {
         vector3.pop_back();
      }
      for (auto&& i : vector3) {
         i--; 
      }
      for (auto&& i : vector3) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop14 = 0; loop14 < 3; loop14++) {
         std::vector<int> vector4 = std::vector<int>();
         vector3.push_back(0);
         for (auto&& i : vector3) { 
            i++; 
         }
         if (vector3.size() > 0) {
            vector3.pop_back();
         }
         for (auto&& i : vector3) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func1() {
   for(int loop23 = 0; loop23 < 3; loop23++) {
      std::vector<int> vector0 = std::vector<int>();
      vector0.push_back(0);
      for (auto&& i : vector0) { 
         i++; 
      }
      for(int loop24 = 0; loop24 < 3; loop24++) {
         std::vector<int> vector1 = std::vector<int>();
         vector0.push_back(0);
         for (auto&& i : vector0) { 
            i++; 
         }
         for(int loop25 = 0; loop25 < 3; loop25++) {
            std::vector<int> vector2 = std::vector<int>();
            vector0.push_back(0);
            for (auto&& i : vector0) { 
               i++; 
            }
            for(int loop26 = 0; loop26 < 3; loop26++) {
               std::vector<int> vector3 = std::vector<int>();
               vector0.push_back(0);
               for (auto&& i : vector0) { 
                  i++; 
               }
               for(int loop27 = 0; loop27 < 3; loop27++) {
                  std::vector<int> vector4 = std::vector<int>();
                  vector0.push_back(0);
                  for (auto&& i : vector0) { 
                     i++; 
                  }
                  for(int loop28 = 0; loop28 < 3; loop28++) {
                     std::vector<int> vector5 = std::vector<int>();
                     vector4.push_back(0);
                     for (auto&& i : vector4) { 
                        i++; 
                     }
                     for(int loop29 = 0; loop29 < 3; loop29++) {
                        std::vector<int> vector6 = std::vector<int>();
                        vector4.push_back(0);
                        for (auto&& i : vector4) { 
                           i++; 
                        }
                        if (vector3.size() > 0) {
                           vector3.pop_back();
                        }
                        for (auto&& i : vector3) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     if (vector5.size() > 0) {
                        vector5.pop_back();
                     }
                     for (auto&& i : vector5) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (vector4.size() > 0) {
                     vector4.pop_back();
                  }
                  for (auto&& i : vector4) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (vector3.size() > 0) {
                  vector3.pop_back();
               }
               for (auto&& i : vector3) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (vector0.size() > 0) {
               vector0.pop_back();
            }
            for (auto&& i : vector0) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (vector1.size() > 0) {
            vector1.pop_back();
         }
         for (auto&& i : vector1) {
            i--; 
         }
      }
      printf("DELETE!\n");
      if (vector0.size() > 0) {
         vector0.pop_back();
      }
      for (auto&& i : vector0) {
         i--; 
      }
   }
   printf("DELETE!\n");
   func2(rng());
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop30 = 0; loop30 < 3; loop30++) {
         std::vector<int> vector0 = std::vector<int>();
         vector0.push_back(0);
         for (auto&& i : vector0) { 
            i++; 
         }
         for(int loop31 = 0; loop31 < 3; loop31++) {
            std::vector<int> vector1 = std::vector<int>();
            vector0.push_back(0);
            for (auto&& i : vector0) { 
               i++; 
            }
            for(int loop32 = 0; loop32 < 3; loop32++) {
               std::vector<int> vector2 = std::vector<int>();
               vector2.push_back(0);
               for (auto&& i : vector2) { 
                  i++; 
               }
               for(int loop33 = 0; loop33 < 3; loop33++) {
                  std::vector<int> vector3 = std::vector<int>();
                  vector3.push_back(0);
                  for (auto&& i : vector3) { 
                     i++; 
                  }
                  for(int loop34 = 0; loop34 < 3; loop34++) {
                     std::vector<int> vector4 = std::vector<int>();
                     vector0.push_back(0);
                     for (auto&& i : vector0) { 
                        i++; 
                     }
                     if (vector2.size() > 0) {
                        vector2.pop_back();
                     }
                     for (auto&& i : vector2) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (vector0.size() > 0) {
                     vector0.pop_back();
                  }
                  for (auto&& i : vector0) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (vector0.size() > 0) {
                  vector0.pop_back();
               }
               for (auto&& i : vector0) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (vector0.size() > 0) {
               vector0.pop_back();
            }
            for (auto&& i : vector0) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (vector0.size() > 0) {
            vector0.pop_back();
         }
         for (auto&& i : vector0) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func4(rng());
   }
   else {
      std::vector<int> vector0 = std::vector<int>();
      vector0.push_back(0);
      for (auto&& i : vector0) { 
         i++; 
      }
      for (auto&& i : vector0) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (vector0.size() > 0) {
         vector0.pop_back();
      }
      for (auto&& i : vector0) {
         i--; 
      }
      if (vector0.size() > 0) {
         vector0.pop_back();
      }
      for (auto&& i : vector0) {
         i--; 
      }
      for (auto&& i : vector0) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop45 = 0; loop45 < 3; loop45++) {
         std::vector<int> vector1 = std::vector<int>();
         vector1.push_back(0);
         for (auto&& i : vector1) { 
            i++; 
         }
         for(int loop46 = 0; loop46 < 3; loop46++) {
            std::vector<int> vector2 = std::vector<int>();
            vector0.push_back(0);
            for (auto&& i : vector0) { 
               i++; 
            }
            for(int loop47 = 0; loop47 < 3; loop47++) {
               std::vector<int> vector3 = std::vector<int>();
               vector3.push_back(0);
               for (auto&& i : vector3) { 
                  i++; 
               }
               for(int loop48 = 0; loop48 < 3; loop48++) {
                  std::vector<int> vector4 = std::vector<int>();
                  vector4.push_back(0);
                  for (auto&& i : vector4) { 
                     i++; 
                  }
                  for(int loop49 = 0; loop49 < 3; loop49++) {
                     std::vector<int> vector5 = std::vector<int>();
                     vector1.push_back(0);
                     for (auto&& i : vector1) { 
                        i++; 
                     }
                     for(int loop50 = 0; loop50 < 3; loop50++) {
                        std::vector<int> vector6 = std::vector<int>();
                        vector4.push_back(0);
                        for (auto&& i : vector4) { 
                           i++; 
                        }
                        if (vector3.size() > 0) {
                           vector3.pop_back();
                        }
                        for (auto&& i : vector3) {
                           i--; 
                        }
                     }
                     printf("DELETE!\n");
                     if (vector5.size() > 0) {
                        vector5.pop_back();
                     }
                     for (auto&& i : vector5) {
                        i--; 
                     }
                  }
                  printf("DELETE!\n");
                  if (vector3.size() > 0) {
                     vector3.pop_back();
                  }
                  for (auto&& i : vector3) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (vector2.size() > 0) {
                  vector2.pop_back();
               }
               for (auto&& i : vector2) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (vector2.size() > 0) {
               vector2.pop_back();
            }
            for (auto&& i : vector2) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (vector0.size() > 0) {
            vector0.pop_back();
         }
         for (auto&& i : vector0) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop35 = 0; loop35 < 3; loop35++) {
         std::vector<int> vector0 = std::vector<int>();
         vector0.push_back(0);
         for (auto&& i : vector0) { 
            i++; 
         }
         for(int loop36 = 0; loop36 < 3; loop36++) {
            std::vector<int> vector1 = std::vector<int>();
            vector1.push_back(0);
            for (auto&& i : vector1) { 
               i++; 
            }
            for(int loop37 = 0; loop37 < 3; loop37++) {
               std::vector<int> vector2 = std::vector<int>();
               vector2.push_back(0);
               for (auto&& i : vector2) { 
                  i++; 
               }
               if (vector2.size() > 0) {
                  vector2.pop_back();
               }
               for (auto&& i : vector2) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (vector1.size() > 0) {
               vector1.pop_back();
            }
            for (auto&& i : vector1) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (vector0.size() > 0) {
            vector0.pop_back();
         }
         for (auto&& i : vector0) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func6(rng());
   }
   else {
      std::vector<int> vector0 = std::vector<int>();
      vector0.push_back(0);
      for (auto&& i : vector0) { 
         i++; 
      }
      for (auto&& i : vector0) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (vector0.size() > 0) {
         vector0.pop_back();
      }
      for (auto&& i : vector0) {
         i--; 
      }
      if (vector0.size() > 0) {
         vector0.pop_back();
      }
      for (auto&& i : vector0) {
         i--; 
      }
      for (auto&& i : vector0) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop41 = 0; loop41 < 3; loop41++) {
         std::vector<int> vector1 = std::vector<int>();
         vector1.push_back(0);
         for (auto&& i : vector1) { 
            i++; 
         }
         for(int loop42 = 0; loop42 < 3; loop42++) {
            std::vector<int> vector2 = std::vector<int>();
            vector2.push_back(0);
            for (auto&& i : vector2) { 
               i++; 
            }
            for(int loop43 = 0; loop43 < 3; loop43++) {
               std::vector<int> vector3 = std::vector<int>();
               vector2.push_back(0);
               for (auto&& i : vector2) { 
                  i++; 
               }
               for(int loop44 = 0; loop44 < 3; loop44++) {
                  std::vector<int> vector4 = std::vector<int>();
                  vector1.push_back(0);
                  for (auto&& i : vector1) { 
                     i++; 
                  }
                  if (vector0.size() > 0) {
                     vector0.pop_back();
                  }
                  for (auto&& i : vector0) {
                     i--; 
                  }
               }
               printf("DELETE!\n");
               if (vector1.size() > 0) {
                  vector1.pop_back();
               }
               for (auto&& i : vector1) {
                  i--; 
               }
            }
            printf("DELETE!\n");
            if (vector1.size() > 0) {
               vector1.pop_back();
            }
            for (auto&& i : vector1) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (vector1.size() > 0) {
            vector1.pop_back();
         }
         for (auto&& i : vector1) {
            i--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      for(int loop38 = 0; loop38 < 3; loop38++) {
         std::vector<int> vector0 = std::vector<int>();
         vector0.push_back(0);
         for (auto&& i : vector0) { 
            i++; 
         }
         if (vector0.size() > 0) {
            vector0.pop_back();
         }
         for (auto&& i : vector0) {
            i--; 
         }
      }
      printf("DELETE!\n");
      func8(rng());
   }
   else {
      std::vector<int> vector0 = std::vector<int>();
      vector0.push_back(0);
      for (auto&& i : vector0) { 
         i++; 
      }
      for (auto&& i : vector0) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (vector0.size() > 0) {
         vector0.pop_back();
      }
      for (auto&& i : vector0) {
         i--; 
      }
      if (vector0.size() > 0) {
         vector0.pop_back();
      }
      for (auto&& i : vector0) {
         i--; 
      }
      for (auto&& i : vector0) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      for(int loop39 = 0; loop39 < 3; loop39++) {
         std::vector<int> vector1 = std::vector<int>();
         vector0.push_back(0);
         for (auto&& i : vector0) { 
            i++; 
         }
         for(int loop40 = 0; loop40 < 3; loop40++) {
            std::vector<int> vector2 = std::vector<int>();
            vector2.push_back(0);
            for (auto&& i : vector2) { 
               i++; 
            }
            if (vector0.size() > 0) {
               vector0.pop_back();
            }
            for (auto&& i : vector0) {
               i--; 
            }
         }
         printf("DELETE!\n");
         if (vector1.size() > 0) {
            vector1.pop_back();
         }
         for (auto&& i : vector1) {
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
      std::vector<int> vector0 = std::vector<int>();
      vector0.push_back(0);
      for (auto&& i : vector0) { 
         i++; 
      }
      for (auto&& i : vector0) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      if (vector0.size() > 0) {
         vector0.pop_back();
      }
      for (auto&& i : vector0) {
         i--; 
      }
      if (vector0.size() > 0) {
         vector0.pop_back();
      }
      for (auto&& i : vector0) {
         i--; 
      }
      for (auto&& i : vector0) {
         if (i == 0) {
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
   }
}

