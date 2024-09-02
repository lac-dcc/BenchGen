#include "ex8_2.h"

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
      Array array8;
      array8.size = 58;
      array8.refC = 1;
      array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
      memset(array8.data, 0, array8.size*sizeof(unsigned int));
      if(rng() & 1) {
         if(rng() & 1) {
            Array array9;
            array9.size = 69;
            array9.refC = 1;
            array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
            memset(array9.data, 0, array9.size*sizeof(unsigned int));
            unsigned int loop4 = 0;
            unsigned int loopLimit4 = (rand()%loopsFactor)/2 + 1;
            for(; loop4 < loopLimit4; loop4++) {
               for (int i = 0; i < array0.size; i++) {
                  array0.data[i]--;
               }
               for (int i = 0; i < array8.size; i++) {
                  if (array8.data[i] == 56) { 
                     array8.data[i] += 56;
                  }
               }
            }
            ArrayParam params1;
            params1.size = 3;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array0;
            params1.data[1] = array8;
            params1.data[2] = array9;
            Array array10 = func6(&params1, rng(), loopsFactor);
            free(params1.data);
            array10.refC--;
            if(array10.refC == 0) {
               free(array10.data);
            }
            array9.refC--;
            if(array9.refC == 0) {
               free(array9.data);
            }
         }
         else {
            ArrayParam params1;
            params1.size = 2;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array0;
            params1.data[1] = array8;
            Array array17 = func2(&params1, loopsFactor);
            free(params1.data);
            array17.refC--;
            if(array17.refC == 0) {
               free(array17.data);
            }
         }
      }
      else {
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array0;
         params1.data[1] = array8;
         Array array19 = func1(&params1, rng(), loopsFactor);
         free(params1.data);
         array19.refC--;
         if(array19.refC == 0) {
            free(array19.data);
         }
      }
      array8.refC--;
      if(array8.refC == 0) {
         free(array8.data);
      }
      array0.refC--;
      if(array0.refC == 0) {
         free(array0.data);
      }
   }
   return 0;
}

