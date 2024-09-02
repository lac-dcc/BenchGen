#include "ex8_1.h"

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
      Array array0 = func0(&params0, loopsFactor);
      free(params0.data);
      Array array2;
      array2.size = 362;
      array2.refC = 1;
      array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
      memset(array2.data, 0, array2.size*sizeof(unsigned int));
      if(rng() & 1) {
         if(rng() & 1) {
            Array array3;
            array3.size = 27;
            array3.refC = 1;
            array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
            memset(array3.data, 0, array3.size*sizeof(unsigned int));
            unsigned int loop2 = 0;
            unsigned int loopLimit2 = (rand()%loopsFactor)/2 + 1;
            for(; loop2 < loopLimit2; loop2++) {
               for (int i = 0; i < array3.size; i++) {
                  array3.data[i]--;
               }
               for (int i = 0; i < array2.size; i++) {
                  if (array2.data[i] == 63) { 
                     array2.data[i] += 63;
                  }
               }
            }
            array3.refC--;
            if(array3.refC == 0) {
               free(array3.data);
            }
         }
         else {
            ArrayParam params1;
            params1.size = 2;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array0;
            params1.data[1] = array2;
            Array array4 = func2(&params1, loopsFactor);
            free(params1.data);
            array4.refC--;
            if(array4.refC == 0) {
               free(array4.data);
            }
         }
      }
      else {
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array0;
         params1.data[1] = array2;
         Array array6 = func1(&params1, loopsFactor);
         free(params1.data);
         array6.refC--;
         if(array6.refC == 0) {
            free(array6.data);
         }
      }
      array2.refC--;
      if(array2.refC == 0) {
         free(array2.data);
      }
      array0.refC--;
      if(array0.refC == 0) {
         free(array0.data);
      }
   }
   return 0;
}

