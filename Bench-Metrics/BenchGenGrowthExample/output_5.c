#include <stdio.h>
#include <stdlib.h>

typedef struct {
   unsigned int* data;
   int size;
} Array;
int loopsFactor = 100;

unsigned long rng();
Array func0();
Array func1();
Array func3();
Array func4();
Array func2();

int main(int argc, char** argv) {
   if (argc < 2 || argc > 3) {
      printf("Usage: %s <paths seed> <loops factor (optional)>\n", argv[0]);
      return 1;
   }
   if (argc == 3) {
      loopsFactor = atoi(argv[2]);
   }
   srand(atol(argv[1]));
   Array array0 = func0();
   if (array0.size > 0) {
      free(array0.data);
      array0.size = 0;
   }
   return 0;
}

unsigned long rng() {
   unsigned long n = rand();
   return (n << 32) | rand();
}

Array func0() {
   Array array1;
   array1.size = 886;
   array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      Array array2 = func1();
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         for (int i = 0; i < array2.size; i++) {
            array2.data[i]++; 
         }
      }
      Array array3 = func2();
      if (array3.size > 0) {
         free(array3.data);
         array3.size = 0;
      }
      Array array4;
      array4.size = 567;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         Array array5 = func3();
         unsigned int loop9 = 0;
         unsigned int loopLimit9 = (rand()%loopsFactor)/3 + 1;
         for(; loop9 < loopLimit9; loop9++) {
            for (int i = 0; i < array3.size; i++) {
               array3.data[i]++; 
            }
         }
         Array array6 = func4();
         if (array6.size > 0) {
            free(array6.data);
            array6.size = 0;
         }
         Array array7;
         array7.size = 862;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         unsigned int loop10 = 0;
         unsigned int loopLimit10 = (rand()%loopsFactor)/3 + 1;
         for(; loop10 < loopLimit10; loop10++) {
            for (int i = 0; i < array7.size; i++) {
               array7.data[i]--; 
            }
         }
         if (array7.size > 0) {
            free(array7.data);
            array7.size = 0;
         }
         if (array5.size > 0) {
            free(array5.data);
            array5.size = 0;
         }
         for (int i = 0; i < array2.size; i++) {
            array2.data[i]--; 
         }
      }
      if (array4.size > 0) {
         free(array4.data);
         array4.size = 0;
      }
      if (array3.size > 0) {
         free(array3.data);
         array3.size = 0;
      }
   }
   if (array1.size > 0) {
      free(array1.data);
      array1.size = 0;
   }
   return array1;
}

Array func1() {
   Array array3;
   array3.size = 915;
   array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      Array array4 = func3();
      unsigned int loop3 = 0;
      unsigned int loopLimit3 = (rand()%loopsFactor)/3 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         for (int i = 0; i < array3.size; i++) {
            array3.data[i]++; 
         }
      }
      Array array5 = func4();
      if (array5.size > 0) {
         free(array5.data);
         array5.size = 0;
      }
      Array array6;
      array6.size = 27;
      array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
      unsigned int loop4 = 0;
      unsigned int loopLimit4 = (rand()%loopsFactor)/3 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         for (int i = 0; i < array5.size; i++) {
            array5.data[i]--; 
         }
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
      if (array5.size > 0) {
         free(array5.data);
         array5.size = 0;
      }
   }
   if (array3.size > 0) {
      free(array3.data);
      array3.size = 0;
   }
   return array3;
}

Array func3() {
   Array array5;
   array5.size = 335;
   array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
   unsigned int loop2 = 0;
   unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
   for(; loop2 < loopLimit2; loop2++) {
   }
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   return array5;
}

Array func4() {
   Array array6;
   array6.size = 421;
   array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
   return array6;
}

Array func2() {
   Array array4 = func3();
   unsigned int loop6 = 0;
   unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      for (int i = 0; i < array4.size; i++) {
         array4.data[i]++; 
      }
   }
   Array array5 = func4();
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   Array array6;
   array6.size = 736;
   array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/2 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]--; 
      }
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   if (array4.size > 0) {
      free(array4.data);
      array4.size = 0;
   }
   return array6;
}

