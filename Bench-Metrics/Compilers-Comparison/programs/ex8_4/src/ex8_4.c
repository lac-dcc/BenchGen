#include "ex8_4.h"

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
      Array array35;
      array35.size = 927;
      array35.refC = 1;
      array35.data = (unsigned int*)malloc(array35.size*sizeof(unsigned int));
      memset(array35.data, 0, array35.size*sizeof(unsigned int));
      if(rng() & 1) {
         if(rng() & 1) {
            Array array36;
            array36.size = 567;
            array36.refC = 1;
            array36.data = (unsigned int*)malloc(array36.size*sizeof(unsigned int));
            memset(array36.data, 0, array36.size*sizeof(unsigned int));
            unsigned int loop11 = 0;
            unsigned int loopLimit11 = (rand()%loopsFactor)/2 + 1;
            for(; loop11 < loopLimit11; loop11++) {
               for (int i = 0; i < array35.size; i++) {
                  array35.data[i]--;
               }
               for (int i = 0; i < array36.size; i++) {
                  if (array36.data[i] == 53) { 
                     array36.data[i] += 53;
                  }
               }
            }
            ArrayParam params1;
            params1.size = 3;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array0;
            params1.data[1] = array35;
            params1.data[2] = array36;
            Array array37 = func6(&params1, rng(), loopsFactor);
            free(params1.data);
            array37.refC--;
            if(array37.refC == 0) {
               free(array37.data);
            }
            array36.refC--;
            if(array36.refC == 0) {
               free(array36.data);
            }
         }
         else {
            ArrayParam params1;
            params1.size = 2;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array0;
            params1.data[1] = array35;
            Array array56 = func2(&params1, rng(), loopsFactor);
            free(params1.data);
            array56.refC--;
            if(array56.refC == 0) {
               free(array56.data);
            }
         }
      }
      else {
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array0;
         params1.data[1] = array35;
         Array array65 = func1(&params1, rng(), loopsFactor);
         free(params1.data);
         array65.refC--;
         if(array65.refC == 0) {
            free(array65.data);
         }
      }
      array35.refC--;
      if(array35.refC == 0) {
         free(array35.data);
      }
      array0.refC--;
      if(array0.refC == 0) {
         free(array0.data);
      }
   }
   return 0;
}

