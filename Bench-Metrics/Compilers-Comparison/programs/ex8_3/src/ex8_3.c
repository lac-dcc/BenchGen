#include "ex8_3.h"

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
      Array array19;
      array19.size = 545;
      array19.refC = 1;
      array19.data = (unsigned int*)malloc(array19.size*sizeof(unsigned int));
      memset(array19.data, 0, array19.size*sizeof(unsigned int));
      if(rng() & 1) {
         if(rng() & 1) {
            Array array20;
            array20.size = 814;
            array20.refC = 1;
            array20.data = (unsigned int*)malloc(array20.size*sizeof(unsigned int));
            memset(array20.data, 0, array20.size*sizeof(unsigned int));
            unsigned int loop6 = 0;
            unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
            for(; loop6 < loopLimit6; loop6++) {
               for (int i = 0; i < array0.size; i++) {
                  array0.data[i]--;
               }
               for (int i = 0; i < array20.size; i++) {
                  if (array20.data[i] == 64) { 
                     array20.data[i] += 64;
                  }
               }
            }
            ArrayParam params1;
            params1.size = 3;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array0;
            params1.data[1] = array19;
            params1.data[2] = array20;
            Array array21 = func6(&params1, rng(), loopsFactor);
            free(params1.data);
            array21.refC--;
            if(array21.refC == 0) {
               free(array21.data);
            }
            array20.refC--;
            if(array20.refC == 0) {
               free(array20.data);
            }
         }
         else {
            ArrayParam params1;
            params1.size = 2;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array0;
            params1.data[1] = array19;
            Array array32 = func2(&params1, rng(), loopsFactor);
            free(params1.data);
            array32.refC--;
            if(array32.refC == 0) {
               free(array32.data);
            }
         }
      }
      else {
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array0;
         params1.data[1] = array19;
         Array array38 = func1(&params1, rng(), loopsFactor);
         free(params1.data);
         array38.refC--;
         if(array38.refC == 0) {
            free(array38.data);
         }
      }
      array19.refC--;
      if(array19.refC == 0) {
         free(array19.data);
      }
      array0.refC--;
      if(array0.refC == 0) {
         free(array0.data);
      }
   }
   return 0;
}

