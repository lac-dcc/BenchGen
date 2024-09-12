#include "ex9.h"

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
   for (int i = 0; i < array0.size; i++) {
      if (array0.data[i] == 93) { 
         array0.data[i] += 93;
      }
   }
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      for (int i = 0; i < array0.size; i++) {
         array0.data[i]++;
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array0;
      Array array1 = func0(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop2 = 0;
      unsigned int loopLimit2 = (rand()%loopsFactor)/2 + 1;
      for(; loop2 < loopLimit2; loop2++) {
         for (int i = 0; i < array0.size; i++) {
            array0.data[i]--;
         }
      }
      unsigned int loop3 = 0;
      unsigned int loopLimit3 = (rand()%loopsFactor)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         for (int i = 0; i < array0.size; i++) {
            array0.data[i]++;
         }
      }
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array0;
      params1.data[1] = array1;
      Array array6 = func3(&params1, loopsFactor);
      free(params1.data);
      ArrayParam params2;
      params2.size = 3;
      params2.data = (Array*)malloc(params2.size*sizeof(Array));
      params2.data[0] = array0;
      params2.data[1] = array1;
      params2.data[2] = array6;
      Array array8 = func4(&params2, rng(), loopsFactor);
      free(params2.data);
      for (int i = 0; i < array6.size; i++) {
         if (array6.data[i] == 29) { 
            array6.data[i] += 29;
         }
      }
      array8.refC--;
      if(array8.refC == 0) {
         free(array8.data);
      }
      array6.refC--;
      if(array6.refC == 0) {
         free(array6.data);
      }
      array1.refC--;
      if(array1.refC == 0) {
         free(array1.data);
      }
   }
   if(rng() & 1) {
      for (int i = 0; i < array0.size; i++) {
         if (array0.data[i] == 21) { 
            array0.data[i] += 21;
         }
      }
   }
   else {
      Array array10;
      array10.size = 919;
      array10.refC = 1;
      array10.data = (unsigned int*)malloc(array10.size*sizeof(unsigned int));
      memset(array10.data, 0, array10.size*sizeof(unsigned int));
      array10.refC--;
      if(array10.refC == 0) {
         free(array10.data);
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array0;
   Array array11 = func1(&params0, loopsFactor);
   free(params0.data);
   array11.refC--;
   if(array11.refC == 0) {
      free(array11.data);
   }
   array0.refC--;
   if(array0.refC == 0) {
      free(array0.data);
   }
   return 0;
}

