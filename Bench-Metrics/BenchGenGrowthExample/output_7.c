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
Array func5();
Array func6();
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
      unsigned int loop12 = 0;
      unsigned int loopLimit12 = (rand()%loopsFactor)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
         for (int i = 0; i < array1.size; i++) {
            array1.data[i]++; 
         }
      }
      Array array3 = func2();
      if (array3.size > 0) {
         free(array3.data);
         array3.size = 0;
      }
      Array array4;
      array4.size = 537;
      array4.data = (unsigned int*)malloc(array4.size*sizeof(unsigned int));
      unsigned int loop17 = 0;
      unsigned int loopLimit17 = (rand()%loopsFactor)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         Array array5 = func3();
         unsigned int loop18 = 0;
         unsigned int loopLimit18 = (rand()%loopsFactor)/3 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            for (int i = 0; i < array5.size; i++) {
               array5.data[i]++; 
            }
         }
         Array array6 = func4();
         if (array6.size > 0) {
            free(array6.data);
            array6.size = 0;
         }
         Array array7;
         array7.size = 370;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         unsigned int loop19 = 0;
         unsigned int loopLimit19 = (rand()%loopsFactor)/3 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            Array array8 = func5();
            unsigned int loop20 = 0;
            unsigned int loopLimit20 = (rand()%loopsFactor)/4 + 1;
            for(; loop20 < loopLimit20; loop20++) {
               for (int i = 0; i < array7.size; i++) {
                  array7.data[i]++; 
               }
            }
            Array array9 = func6();
            if (array9.size > 0) {
               free(array9.data);
               array9.size = 0;
            }
            Array array10;
            array10.size = 980;
            array10.data = (unsigned int*)malloc(array10.size*sizeof(unsigned int));
            unsigned int loop21 = 0;
            unsigned int loopLimit21 = (rand()%loopsFactor)/4 + 1;
            for(; loop21 < loopLimit21; loop21++) {
               for (int i = 0; i < array7.size; i++) {
                  array7.data[i]--; 
               }
            }
            if (array10.size > 0) {
               free(array10.data);
               array10.size = 0;
            }
            if (array8.size > 0) {
               free(array8.data);
               array8.size = 0;
            }
            for (int i = 0; i < array4.size; i++) {
               array4.data[i]--; 
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
         for (int i = 0; i < array5.size; i++) {
            array5.data[i]--; 
         }
      }
      if (array4.size > 0) {
         free(array4.data);
         array4.size = 0;
      }
      if (array2.size > 0) {
         free(array2.data);
         array2.size = 0;
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
      unsigned int loop6 = 0;
      unsigned int loopLimit6 = (rand()%loopsFactor)/3 + 1;
      for(; loop6 < loopLimit6; loop6++) {
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
      array6.size = 782;
      array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/3 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         Array array7 = func5();
         unsigned int loop10 = 0;
         unsigned int loopLimit10 = (rand()%loopsFactor)/4 + 1;
         for(; loop10 < loopLimit10; loop10++) {
            for (int i = 0; i < array5.size; i++) {
               array5.data[i]++; 
            }
         }
         Array array8 = func6();
         if (array8.size > 0) {
            free(array8.data);
            array8.size = 0;
         }
         Array array9;
         array9.size = 67;
         array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
         unsigned int loop11 = 0;
         unsigned int loopLimit11 = (rand()%loopsFactor)/4 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            for (int i = 0; i < array8.size; i++) {
               array8.data[i]--; 
            }
         }
         if (array9.size > 0) {
            free(array9.data);
            array9.size = 0;
         }
         if (array8.size > 0) {
            free(array8.data);
            array8.size = 0;
         }
         for (int i = 0; i < array8.size; i++) {
            array8.data[i]--; 
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
      Array array6 = func5();
      unsigned int loop4 = 0;
      unsigned int loopLimit4 = (rand()%loopsFactor)/4 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         for (int i = 0; i < array6.size; i++) {
            array6.data[i]++; 
         }
      }
      Array array7 = func6();
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
      Array array8;
      array8.size = 59;
      array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/4 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         for (int i = 0; i < array8.size; i++) {
            array8.data[i]--; 
         }
      }
      if (array8.size > 0) {
         free(array8.data);
         array8.size = 0;
      }
      if (array6.size > 0) {
         free(array6.data);
         array6.size = 0;
      }
   }
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   return array5;
}

Array func5() {
   Array array7;
   array7.size = 492;
   array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/4 + 1;
   for(; loop3 < loopLimit3; loop3++) {
   }
   if (array7.size > 0) {
      free(array7.data);
      array7.size = 0;
   }
   return array7;
}

Array func6() {
   Array array8;
   array8.size = 27;
   array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
   return array8;
}

Array func4() {
   Array array6 = func5();
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/3 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]++; 
      }
   }
   Array array7 = func6();
   if (array7.size > 0) {
      free(array7.data);
      array7.size = 0;
   }
   Array array8;
   array8.size = 368;
   array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/3 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      for (int i = 0; i < array6.size; i++) {
         array6.data[i]--; 
      }
   }
   if (array8.size > 0) {
      free(array8.data);
      array8.size = 0;
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   return array6;
}

Array func2() {
   Array array4 = func3();
   unsigned int loop13 = 0;
   unsigned int loopLimit13 = (rand()%loopsFactor)/2 + 1;
   for(; loop13 < loopLimit13; loop13++) {
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
   array6.size = 456;
   array6.data = (unsigned int*)malloc(array6.size*sizeof(unsigned int));
   unsigned int loop14 = 0;
   unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
   for(; loop14 < loopLimit14; loop14++) {
      Array array7 = func5();
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/3 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         for (int i = 0; i < array6.size; i++) {
            array6.data[i]++; 
         }
      }
      Array array8 = func6();
      if (array8.size > 0) {
         free(array8.data);
         array8.size = 0;
      }
      Array array9;
      array9.size = 373;
      array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
      unsigned int loop16 = 0;
      unsigned int loopLimit16 = (rand()%loopsFactor)/3 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         for (int i = 0; i < array7.size; i++) {
            array7.data[i]--; 
         }
      }
      if (array9.size > 0) {
         free(array9.data);
         array9.size = 0;
      }
      if (array7.size > 0) {
         free(array7.data);
         array7.size = 0;
      }
      for (int i = 0; i < array9.size; i++) {
         array9.data[i]--; 
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

