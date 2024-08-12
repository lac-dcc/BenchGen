#include "ex2.h"

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
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array0 = func0(&params0, rng(), loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   if (array0.size > 0) {
      free(array0.data);
      array0.size = 0;
   }
   ArrayParam params1;
   params1.size = 1;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array0;
   Array array1 = func1(&params1, rng(), loopsFactor);
   if (params1.size > 0) {
      free(params1.data);
      params1.size = 0;
   }
   if (array1.size > 0) {
      free(array1.data);
      array1.size = 0;
   }
   return 0;
}

