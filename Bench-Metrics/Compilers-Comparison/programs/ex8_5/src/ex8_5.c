#include "ex8_5.h"

int main(int argc, char** argv) {
   if (argc < 2 || argc > 3) {
      printf("Usage: %s <paths seed> <loops factor (optional)>\n", argv[0]);
      return 1;
   }
   int loopsFactor = 100;
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
      free(params0.data);
      Array array61;
      array61.size = 369;
      array61.refC = 1;
      array61.data = (unsigned int*)malloc(array61.size*sizeof(unsigned int));
      memset(array61.data, 0, array61.size*sizeof(unsigned int));
      if(rng() & 1) {
         if(rng() & 1) {
            Array array62;
            array62.size = 917;
            array62.refC = 1;
            array62.data = (unsigned int*)malloc(array62.size*sizeof(unsigned int));
            memset(array62.data, 0, array62.size*sizeof(unsigned int));
            unsigned int loop19 = 0;
            unsigned int loopLimit19 = (rand()%loopsFactor)/2 + 1;
            for(; loop19 < loopLimit19; loop19++) {
               for (int i = 0; i < array62.size; i++) {
                  array62.data[i]--;
               }
               for (int i = 0; i < array0.size; i++) {
                  if (array0.data[i] == 24) { 
                     array0.data[i] += 24;
                  }
               }
            }
            ArrayParam params1;
            params1.size = 3;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array0;
            params1.data[1] = array61;
            params1.data[2] = array62;
            Array array63 = func6(&params1, rng(), loopsFactor);
            free(params1.data);
            array63.refC--;
            if(array63.refC == 0) {
               free(array63.data);
            }
            array62.refC--;
            if(array62.refC == 0) {
               free(array62.data);
            }
         }
         else {
            ArrayParam params1;
            params1.size = 2;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array0;
            params1.data[1] = array61;
            Array array86 = func2(&params1, rng(), loopsFactor);
            free(params1.data);
            array86.refC--;
            if(array86.refC == 0) {
               free(array86.data);
            }
         }
      }
      else {
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array0;
         params1.data[1] = array61;
         Array array96 = func1(&params1, rng(), loopsFactor);
         free(params1.data);
         array96.refC--;
         if(array96.refC == 0) {
            free(array96.data);
         }
      }
      array61.refC--;
      if(array61.refC == 0) {
         free(array61.data);
      }
      array0.refC--;
      if(array0.refC == 0) {
         free(array0.data);
      }
   }
   return 0;
}

