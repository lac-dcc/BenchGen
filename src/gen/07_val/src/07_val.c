#include "07_val.h"

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
   Array array0;
   array0.size = 777;
   array0.refC = 1;
   array0.data = (unsigned int*)malloc(array0.size*sizeof(unsigned int));
   memset(array0.data, 0, array0.size*sizeof(unsigned int));
   if(rng() & 1) {
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array0;
      Array array1 = func0(&params0, rng(), loopsFactor);
      free(params0.data);
      array1.refC--;
      if(array1.refC == 0) {
         free(array1.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array0;
      Array array6 = func1(&params0, loopsFactor);
      free(params0.data);
      array6.refC--;
      if(array6.refC == 0) {
         free(array6.data);
      }
   }
   array0.refC--;
   if(array0.refC == 0) {
      free(array0.data);
   }
   return 0;
}

