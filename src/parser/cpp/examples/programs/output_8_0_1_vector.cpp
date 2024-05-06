#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func8();
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func5(const unsigned long PATH0);

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
      for(int scalar1 = 0; scalar1 < 10; scalar1++) {
         if(PATH0 & 2) {
            func3(rng());
         }
         else {
            if(PATH0 & 4) {
               func4(rng());
            }
            else {
               std::vector<int> vector2 = std::vector<int>();
               if (scalar1 == 0) {
                  printf("IS 0!");
               }
               scalar1--;
               printf("DELETE!\n");
            }
         }
      }
   }
   else {
      for(int scalar1 = 0; scalar1 < 10; scalar1++) {
         for(int scalar2 = 0; scalar2 < 10; scalar2++) {
            if(PATH0 & 8) {
               func3(rng());
            }
            else {
               if(PATH0 & 16) {
                  func4(rng());
               }
               else {
                  std::vector<int> vector3 = std::vector<int>();
                  for (auto&& i : vector3) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
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
}

void func3(const unsigned long PATH0) {
   std::vector<int> vector2 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   vector2.push_back(0);
   for (auto&& i : vector2) { 
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
               std::vector<int> vector4 = std::vector<int>();
               if (scalar3 == 0) {
                  printf("IS 0!");
               }
               vector2.pop_back();
               for (auto&& i : vector2) {
                  i--; 
               }
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
                  std::vector<int> vector5 = std::vector<int>();
                  if (scalar3 == 0) {
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

void func7(const unsigned long PATH0) {
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
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
      }
   }
   printf("DELETE!\n");
}

void func4(const unsigned long PATH0) {
   std::vector<int> vector2 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   if(PATH0 & 1) {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         if(PATH0 & 2) {
            func7(rng());
         }
         else {
            if(PATH0 & 4) {
               func8();
            }
            else {
               std::vector<int> vector4 = std::vector<int>();
               for (auto&& i : vector4) {
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
   else {
      for(int scalar3 = 0; scalar3 < 10; scalar3++) {
         for(int scalar4 = 0; scalar4 < 10; scalar4++) {
            if(PATH0 & 8) {
               func7(rng());
            }
            else {
               if(PATH0 & 16) {
                  func8();
               }
               else {
                  std::vector<int> vector5 = std::vector<int>();
                  for (auto&& i : vector2) {
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
   }
   printf("DELETE!\n");
}

void func8() {
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
   for(int scalar1 = 0; scalar1 < 10; scalar1++) {
      if(PATH0 & 1) {
         func2(rng());
      }
      else {
         if(PATH0 & 2) {
            func3(rng());
         }
         else {
            std::vector<int> vector2 = std::vector<int>();
            for (auto&& i : vector2) {
               if (i == 0) {
                  printf("IS 0!");
               }
            }
            for (auto&& i : vector2) {
               i--; 
            }
            printf("DELETE!\n");
         }
      }
   }
}

void func2(const unsigned long PATH0) {
   std::vector<int> vector2 = std::vector<int>();
   vector2.push_back(0);
   for (auto&& i : vector2) { 
      i++; 
   }
   vector2.push_back(0);
   for (auto&& i : vector2) { 
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
               std::vector<int> vector4 = std::vector<int>();
               for (auto&& i : vector4) {
                  if (i == 0) {
                     printf("IS 0!");
                  }
               }
               vector2.pop_back();
               for (auto&& i : vector2) {
                  i--; 
               }
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
                  std::vector<int> vector5 = std::vector<int>();
                  if (scalar4 == 0) {
                     printf("IS 0!");
                  }
                  scalar4--;
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
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         if(PATH0 & 2) {
            func8();
         }
         else {
            if(PATH0 & 4) {
            }
            else {
               std::vector<int> vector6 = std::vector<int>();
               for (auto&& i : vector6) {
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
   else {
      for(int scalar5 = 0; scalar5 < 10; scalar5++) {
         for(int scalar6 = 0; scalar6 < 10; scalar6++) {
            if(PATH0 & 8) {
               func8();
            }
            else {
               if(PATH0 & 16) {
               }
               else {
                  std::vector<int> vector7 = std::vector<int>();
                  for (auto&& i : vector7) {
                     if (i == 0) {
                        printf("IS 0!");
                     }
                  }
                  for (auto&& i : vector7) {
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

