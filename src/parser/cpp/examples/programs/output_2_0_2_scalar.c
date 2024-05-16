#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func1(const unsigned long PATH0);
void func4();
void func5();
void func6();
void func2(const unsigned long PATH0);
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);

int main() {
   if(rng() & 1) {
      if(rng() & 1) {
         int scalar0 = 1;
         func1(rng());
         if (scalar0 == 0) {
            printf("IS 0!");
         }
      }
      else {
         int loop1 = 0;
         int loopLimit1 = (rand()%10)/1 + 1;;
         for(; loop1 < loopLimit1; loop1++) {
            if(rng() & 1) {
               int loop2 = 0;
               int loopLimit2 = (rand()%10)/2 + 1;;
               for(; loop2 < loopLimit2; loop2++) {
                  if(rng() & 1) {
                  }
                  else {
                  }
               }
               int loop3 = 0;
               int loopLimit3 = (rand()%10)/2 + 1;;
               for(; loop3 < loopLimit3; loop3++) {
                  func5();
               }
            }
            else {
               int loop4 = 0;
               int loopLimit4 = (rand()%10)/2 + 1;;
               for(; loop4 < loopLimit4; loop4++) {
                  int loop5 = 0;
                  int loopLimit5 = (rand()%10)/3 + 1;;
                  for(; loop5 < loopLimit5; loop5++) {
                     if(rng() & 1) {
                     }
                     else {
                     }
                  }
                  int loop6 = 0;
                  int loopLimit6 = (rand()%10)/3 + 1;;
                  for(; loop6 < loopLimit6; loop6++) {
                     func5();
                  }
               }
            }
            if(rng() & 1) {
            }
            else {
               int loop7 = 0;
               int loopLimit7 = (rand()%10)/2 + 1;;
               for(; loop7 < loopLimit7; loop7++) {
               }
            }
            int loop8 = 0;
            int loopLimit8 = (rand()%10)/2 + 1;;
            for(; loop8 < loopLimit8; loop8++) {
               if(rng() & 1) {
                  func4();
               }
               else {
                  if(rng() & 1) {
                  }
                  else {
                     int scalar0 = 1;
                     if (scalar0 == 0) {
                        printf("IS 0!");
                     }
                     scalar0--;
                     printf("DELETE!\n");
                  }
                  func6();
               }
            }
            int loop9 = 0;
            int loopLimit9 = (rand()%10)/2 + 1;;
            for(; loop9 < loopLimit9; loop9++) {
               func2(rng());
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
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func1(const unsigned long PATH0) {
   int scalar1 = 1;
   func4();
   scalar1++;
   scalar1++;
   if(PATH0 & 1) {
   }
   else {
      int loop0 = 0;
      int loopLimit0 = (rand()%10)/1 + 1;;
      for(; loop0 < loopLimit0; loop0++) {
      }
   }
   printf("DELETE!\n");
}

void func4() {
   int scalar2 = 1;
   scalar2++;
   scalar2++;
   printf("DELETE!\n");
}

void func5() {
}

void func6() {
}

void func2(const unsigned long PATH0) {
   int loop10 = 0;
   int loopLimit10 = (rand()%10)/3 + 1;;
   for(; loop10 < loopLimit10; loop10++) {
      if(PATH0 & 1) {
      }
      else {
      }
   }
   int loop11 = 0;
   int loopLimit11 = (rand()%10)/3 + 1;;
   for(; loop11 < loopLimit11; loop11++) {
      func5();
   }
}

void func0(const unsigned long PATH0) {
   int loop12 = 0;
   int loopLimit12 = (rand()%10)/1 + 1;;
   for(; loop12 < loopLimit12; loop12++) {
      if(PATH0 & 1) {
         func4();
      }
      else {
         int scalar0 = 1;
         if (scalar0 == 0) {
            printf("IS 0!");
         }
         scalar0--;
         printf("DELETE!\n");
      }
      func3(rng());
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/2 + 1;;
      for(; loop13 < loopLimit13; loop13++) {
      }
   }
}

