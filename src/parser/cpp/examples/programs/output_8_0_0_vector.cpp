#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


unsigned long rng();
void func2(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func7();
void func1(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func0(const unsigned long PATH0);

int main() {
   std::vector<int> vector0 = std::vector<int>();
   std::vector<int> vector1 = std::vector<int>();
   std::vector<int> vector2 = std::vector<int>();
   if(rng() & 1) {
      for(int loop0 = 0; loop0 < 3; loop0++) {
         if(rng() & 1) {
            func2(rng());
         }
         else {
            if(rng() & 1) {
               func3(rng());
            }
            else {
               std::vector<int> vector3 = std::vector<int>();
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
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop11 = 0; loop11 < 3; loop11++) {
         for(int loop12 = 0; loop12 < 3; loop12++) {
            if(rng() & 1) {
               func2(rng());
            }
            else {
               if(rng() & 1) {
                  func3(rng());
               }
               else {
                  std::vector<int> vector3 = std::vector<int>();
                  for (auto&& i : vector3) {
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
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   for(int loop13 = 0; loop13 < 3; loop13++) {
      if(rng() & 1) {
         func1(rng());
      }
      else {
         if(rng() & 1) {
            func2(rng());
         }
         else {
            std::vector<int> vector3 = std::vector<int>();
            for (auto&& i : vector1) {
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
            printf("DELETE!\n");
         }
      }
   }
   if(rng() & 1) {
      func1(rng());
   }
   else {
      std::vector<int> vector3 = std::vector<int>();
      for (auto&& i : vector1) {
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
      printf("DELETE!\n");
   }
   func0(rng());
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func2(const unsigned long PATH0) {
   std::vector<int> vector3 = std::vector<int>();
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   if(PATH0 & 1) {
      for(int loop1 = 0; loop1 < 3; loop1++) {
         if(PATH0 & 2) {
            func5(rng());
         }
         else {
            if(PATH0 & 4) {
               func6(rng());
            }
            else {
               std::vector<int> vector4 = std::vector<int>();
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
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop6 = 0; loop6 < 3; loop6++) {
         for(int loop7 = 0; loop7 < 3; loop7++) {
            if(PATH0 & 8) {
               func5(rng());
            }
            else {
               if(PATH0 & 16) {
                  func6(rng());
               }
               else {
                  std::vector<int> vector4 = std::vector<int>();
                  for (auto&& i : vector4) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (vector4.size() > 0) {
                     vector4.pop_back();
                  }
                  for (auto&& i : vector4) {
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
   std::vector<int> vector4 = std::vector<int>();
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   if(PATH0 & 1) {
      for(int loop2 = 0; loop2 < 3; loop2++) {
         if(PATH0 & 2) {
         }
         else {
         }
      }
   }
   else {
      for(int loop3 = 0; loop3 < 3; loop3++) {
         for(int loop4 = 0; loop4 < 3; loop4++) {
            if(PATH0 & 4) {
            }
            else {
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func6(const unsigned long PATH0) {
   std::vector<int> vector4 = std::vector<int>();
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   if(PATH0 & 1) {
   }
   else {
      for(int loop5 = 0; loop5 < 3; loop5++) {
      }
   }
   printf("DELETE!\n");
}

void func3(const unsigned long PATH0) {
   std::vector<int> vector3 = std::vector<int>();
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   if(PATH0 & 1) {
      for(int loop8 = 0; loop8 < 3; loop8++) {
         if(PATH0 & 2) {
            func6(rng());
         }
         else {
            if(PATH0 & 4) {
               func7();
            }
            else {
               std::vector<int> vector4 = std::vector<int>();
               for (auto&& i : vector4) {
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
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop9 = 0; loop9 < 3; loop9++) {
         for(int loop10 = 0; loop10 < 3; loop10++) {
            if(PATH0 & 8) {
               func6(rng());
            }
            else {
               if(PATH0 & 16) {
                  func7();
               }
               else {
                  std::vector<int> vector4 = std::vector<int>();
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
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func7() {
   std::vector<int> vector4 = std::vector<int>();
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   printf("DELETE!\n");
}

void func1(const unsigned long PATH0) {
   std::vector<int> vector3 = std::vector<int>();
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   if(PATH0 & 1) {
      for(int loop14 = 0; loop14 < 3; loop14++) {
         if(PATH0 & 2) {
            func4(rng());
         }
         else {
            if(PATH0 & 4) {
               func5(rng());
            }
            else {
               std::vector<int> vector4 = std::vector<int>();
               for (auto&& i : vector4) {
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
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop18 = 0; loop18 < 3; loop18++) {
         for(int loop19 = 0; loop19 < 3; loop19++) {
            if(PATH0 & 8) {
               func4(rng());
            }
            else {
               if(PATH0 & 16) {
                  func5(rng());
               }
               else {
                  std::vector<int> vector4 = std::vector<int>();
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
                  printf("DELETE!\n");
               }
            }
         }
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0) {
   std::vector<int> vector4 = std::vector<int>();
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   vector4.push_back(0);
   for (auto&& i : vector4) { 
      i++; 
   }
   if(PATH0 & 1) {
      for(int loop15 = 0; loop15 < 3; loop15++) {
         if(PATH0 & 2) {
            func7();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               std::vector<int> vector5 = std::vector<int>();
               for (auto&& i : vector4) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (vector5.size() > 0) {
                  vector5.pop_back();
               }
               for (auto&& i : vector5) {
                  i--; 
               }
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int loop16 = 0; loop16 < 3; loop16++) {
         for(int loop17 = 0; loop17 < 3; loop17++) {
            if(PATH0 & 8) {
               func7();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  std::vector<int> vector5 = std::vector<int>();
                  for (auto&& i : vector5) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (vector5.size() > 0) {
                     vector5.pop_back();
                  }
                  for (auto&& i : vector5) {
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
   std::vector<int> vector3 = std::vector<int>();
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   vector3.push_back(0);
   for (auto&& i : vector3) { 
      i++; 
   }
   if(PATH0 & 1) {
      for(int loop20 = 0; loop20 < 3; loop20++) {
         if(PATH0 & 2) {
            func3(rng());
         }
         else {
            if(PATH0 & 4) {
               func4(rng());
            }
            else {
               std::vector<int> vector4 = std::vector<int>();
               for (auto&& i : vector4) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               if (vector4.size() > 0) {
                  vector4.pop_back();
               }
               for (auto&& i : vector4) {
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
            if(PATH0 & 8) {
               func3(rng());
            }
            else {
               if(PATH0 & 16) {
                  func4(rng());
               }
               else {
                  std::vector<int> vector4 = std::vector<int>();
                  for (auto&& i : vector4) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  if (vector4.size() > 0) {
                     vector4.pop_back();
                  }
                  for (auto&& i : vector4) {
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

