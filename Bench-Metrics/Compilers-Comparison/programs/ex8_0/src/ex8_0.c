#include "ex8_0.h"

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
      array2.size = 649;
      array2.refC = 1;
      array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
      memset(array2.data, 0, array2.size*sizeof(unsigned int));
      if(rng() & 1) {
      }
      else {
         ArrayParam params1;
         params1.size = 2;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array0;
         params1.data[1] = array2;
         Array array3 = func1(&params1, loopsFactor);
         free(params1.data);
         array3.refC--;
         if(array3.refC == 0) {
            free(array3.data);
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

