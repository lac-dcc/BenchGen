#include "ex9_2.h"

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
      unsigned int loop4 = 0;
      unsigned int loopLimit4 = (rand()%loopsFactor)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         for (int i = 0; i < array0.size; i++) {
            array0.data[i]--;
         }
      }
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array0;
      params1.data[1] = array1;
      Array array8 = func6(&params1, rng(), loopsFactor);
      free(params1.data);
      unsigned int loop6 = 0;
      unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         for (int i = 0; i < array0.size; i++) {
            array0.data[i]++;
         }
      }
      ArrayParam params2;
      params2.size = 3;
      params2.data = (Array*)malloc(params2.size*sizeof(Array));
      params2.data[0] = array0;
      params2.data[1] = array1;
      params2.data[2] = array8;
      Array array10 = func3(&params2, loopsFactor);
      free(params2.data);
      Array array12;
      array12.size = 526;
      array12.refC = 1;
      array12.data = (unsigned int*)malloc(array12.size*sizeof(unsigned int));
      memset(array12.data, 0, array12.size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop7 = 0;
         unsigned int loopLimit7 = (rand()%loopsFactor)/2 + 1;
         for(; loop7 < loopLimit7; loop7++) {
            Array array13;
            array13.size = 91;
            array13.refC = 1;
            array13.data = (unsigned int*)malloc(array13.size*sizeof(unsigned int));
            memset(array13.data, 0, array13.size*sizeof(unsigned int));
            for (int i = 0; i < array8.size; i++) {
               array8.data[i]--;
            }
            for (int i = 0; i < array8.size; i++) {
               if (array8.data[i] == 73) { 
                  array8.data[i] += 73;
               }
            }
            array13.refC--;
            if(array13.refC == 0) {
               free(array13.data);
            }
         }
      }
      else {
         ArrayParam params3;
         params3.size = 5;
         params3.data = (Array*)malloc(params3.size*sizeof(Array));
         params3.data[0] = array0;
         params3.data[1] = array1;
         params3.data[2] = array8;
         params3.data[3] = array10;
         params3.data[4] = array12;
         Array array14 = func7(&params3, loopsFactor);
         free(params3.data);
         array14.refC--;
         if(array14.refC == 0) {
            free(array14.data);
         }
      }
      ArrayParam params3;
      params3.size = 5;
      params3.data = (Array*)malloc(params3.size*sizeof(Array));
      params3.data[0] = array0;
      params3.data[1] = array1;
      params3.data[2] = array8;
      params3.data[3] = array10;
      params3.data[4] = array12;
      Array array16 = func4(&params3, rng(), loopsFactor);
      free(params3.data);
      for (int i = 0; i < array0.size; i++) {
         if (array0.data[i] == 3) { 
            array0.data[i] += 3;
         }
      }
      array16.refC--;
      if(array16.refC == 0) {
         free(array16.data);
      }
      array12.refC--;
      if(array12.refC == 0) {
         free(array12.data);
      }
      array10.refC--;
      if(array10.refC == 0) {
         free(array10.data);
      }
      array8.refC--;
      if(array8.refC == 0) {
         free(array8.data);
      }
      array1.refC--;
      if(array1.refC == 0) {
         free(array1.data);
      }
   }
   if(rng() & 1) {
      for (int i = 0; i < array0.size; i++) {
         if (array0.data[i] == 54) { 
            array0.data[i] += 54;
         }
      }
   }
   else {
      Array array21;
      array21.size = 399;
      array21.refC = 1;
      array21.data = (unsigned int*)malloc(array21.size*sizeof(unsigned int));
      memset(array21.data, 0, array21.size*sizeof(unsigned int));
      array21.refC--;
      if(array21.refC == 0) {
         free(array21.data);
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array0;
   Array array22 = func1(&params0, loopsFactor);
   free(params0.data);
   array22.refC--;
   if(array22.refC == 0) {
      free(array22.data);
   }
   array0.refC--;
   if(array0.refC == 0) {
      free(array0.data);
   }
   return 0;
}

