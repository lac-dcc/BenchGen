#include "ex4.h"

int main(int argc, char** argv) {
   int loopsFactor = 100;
   if (argc < 2 || argc > 3) {
      printf("Usage: %s <paths seed> <loops factor (optional)>\n", argv[0]);
      return 1;
   }
   if (argc == 3) {
      loopsFactor = atoi(argv[2]);
   }
   srand(atol(argv[1]));
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array0 = func0(&params0, rng(), loopsFactor);
      if (params0.size > 0) {
         free(params0.data);
         params0.size = 0;
      }
      Array array1;
      array1.size = 350;
      array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
      memset(array1.data, 0, array1.size*sizeof(unsigned int));
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array0;
      params1.data[1] = array1;
      Array array2 = func1(&params1, rng(), loopsFactor);
      if (params1.size > 0) {
         free(params1.data);
         params1.size = 0;
      }
      if (array2.size > 0) {
         free(array2.data);
         array2.size = 0;
      }
      for (int i = 0; i < array0.size; i++) {
         if (array0.data[i] == 83) { 
            array0.data[i] += 83;
         }
      }
      if (array1.size > 0) {
         free(array1.data);
         array1.size = 0;
      }
      if (array0.size > 0) {
         free(array0.data);
         array0.size = 0;
      }
   }
   return 0;
}

