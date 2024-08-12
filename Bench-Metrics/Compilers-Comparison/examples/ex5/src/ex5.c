#include "ex5.h"

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
      if(rng() & 1) {
         ArrayParam params0;
         params0.size = 0;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         Array array0 = func0(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array0.size > 0) {
            free(array0.data);
            array0.size = 0;
         }
      }
      else {
         ArrayParam params0;
         params0.size = 0;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         Array array0 = func1(&params0, loopsFactor);
         if (params0.size > 0) {
            free(params0.data);
            params0.size = 0;
         }
         if (array0.size > 0) {
            free(array0.data);
            array0.size = 0;
         }
      }
   }
   return 0;
}

