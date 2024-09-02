#include "ex9_0.h"

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
      Array array1 = func0(&params0, loopsFactor);
      free(params0.data);
      for (int i = 0; i < array0.size; i++) {
         if (array0.data[i] == 59) { 
            array0.data[i] += 59;
         }
      }
      array1.refC--;
      if(array1.refC == 0) {
         free(array1.data);
      }
   }
   if(rng() & 1) {
      for (int i = 0; i < array0.size; i++) {
         if (array0.data[i] == 26) { 
            array0.data[i] += 26;
         }
      }
   }
   else {
      Array array3;
      array3.size = 540;
      array3.refC = 1;
      array3.data = (unsigned int*)malloc(array3.size*sizeof(unsigned int));
      memset(array3.data, 0, array3.size*sizeof(unsigned int));
      array3.refC--;
      if(array3.refC == 0) {
         free(array3.data);
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array0;
   Array array4 = func1(&params0, loopsFactor);
   free(params0.data);
   array4.refC--;
   if(array4.refC == 0) {
      free(array4.data);
   }
   array0.refC--;
   if(array0.refC == 0) {
      free(array0.data);
   }
   return 0;
}

