#include "ex9_5.h"

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
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/2 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         for (int i = 0; i < array0.size; i++) {
            array0.data[i]--;
         }
      }
      Array array33;
      array33.size = 497;
      array33.refC = 1;
      array33.data = (unsigned int*)malloc(array33.size*sizeof(unsigned int));
      memset(array33.data, 0, array33.size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop16 = 0;
         unsigned int loopLimit16 = (rand()%loopsFactor)/2 + 1;
         for(; loop16 < loopLimit16; loop16++) {
            Array array34;
            array34.size = 353;
            array34.refC = 1;
            array34.data = (unsigned int*)malloc(array34.size*sizeof(unsigned int));
            memset(array34.data, 0, array34.size*sizeof(unsigned int));
            for (int i = 0; i < array33.size; i++) {
               array33.data[i]--;
            }
            for (int i = 0; i < array1.size; i++) {
               if (array1.data[i] == 6) { 
                  array1.data[i] += 6;
               }
            }
            array34.refC--;
            if(array34.refC == 0) {
               free(array34.data);
            }
         }
      }
      else {
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array0;
         params1.data[1] = array1;
         params1.data[2] = array33;
         Array array35 = func9(&params1, loopsFactor);
         free(params1.data);
         array35.refC--;
         if(array35.refC == 0) {
            free(array35.data);
         }
      }
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array0;
      params1.data[1] = array1;
      params1.data[2] = array33;
      Array array39 = func6(&params1, rng(), loopsFactor);
      free(params1.data);
      unsigned int loop25 = 0;
      unsigned int loopLimit25 = (rand()%loopsFactor)/2 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         for (int i = 0; i < array33.size; i++) {
            array33.data[i]++;
         }
      }
      ArrayParam params2;
      params2.size = 4;
      params2.data = (Array*)malloc(params2.size*sizeof(Array));
      params2.data[0] = array0;
      params2.data[1] = array1;
      params2.data[2] = array33;
      params2.data[3] = array39;
      Array array58 = func3(&params2, rng(), loopsFactor);
      free(params2.data);
      Array array64;
      array64.size = 786;
      array64.refC = 1;
      array64.data = (unsigned int*)malloc(array64.size*sizeof(unsigned int));
      memset(array64.data, 0, array64.size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop27 = 0;
         unsigned int loopLimit27 = (rand()%loopsFactor)/2 + 1;
         for(; loop27 < loopLimit27; loop27++) {
            Array array65;
            array65.size = 669;
            array65.refC = 1;
            array65.data = (unsigned int*)malloc(array65.size*sizeof(unsigned int));
            memset(array65.data, 0, array65.size*sizeof(unsigned int));
            for (int i = 0; i < array64.size; i++) {
               array64.data[i]--;
            }
            for (int i = 0; i < array58.size; i++) {
               if (array58.data[i] == 64) { 
                  array58.data[i] += 64;
               }
            }
            array65.refC--;
            if(array65.refC == 0) {
               free(array65.data);
            }
         }
      }
      else {
         ArrayParam params3;
         params3.size = 6;
         params3.data = (Array*)malloc(params3.size*sizeof(Array));
         params3.data[0] = array0;
         params3.data[1] = array1;
         params3.data[2] = array33;
         params3.data[3] = array39;
         params3.data[4] = array58;
         params3.data[5] = array64;
         Array array66 = func7(&params3, rng(), loopsFactor);
         free(params3.data);
         array66.refC--;
         if(array66.refC == 0) {
            free(array66.data);
         }
      }
      ArrayParam params3;
      params3.size = 6;
      params3.data = (Array*)malloc(params3.size*sizeof(Array));
      params3.data[0] = array0;
      params3.data[1] = array1;
      params3.data[2] = array33;
      params3.data[3] = array39;
      params3.data[4] = array58;
      params3.data[5] = array64;
      Array array73 = func4(&params3, rng(), loopsFactor);
      free(params3.data);
      for (int i = 0; i < array33.size; i++) {
         if (array33.data[i] == 36) { 
            array33.data[i] += 36;
         }
      }
      array73.refC--;
      if(array73.refC == 0) {
         free(array73.data);
      }
      array64.refC--;
      if(array64.refC == 0) {
         free(array64.data);
      }
      array58.refC--;
      if(array58.refC == 0) {
         free(array58.data);
      }
      array39.refC--;
      if(array39.refC == 0) {
         free(array39.data);
      }
      array33.refC--;
      if(array33.refC == 0) {
         free(array33.data);
      }
      array1.refC--;
      if(array1.refC == 0) {
         free(array1.data);
      }
   }
   if(rng() & 1) {
      for (int i = 0; i < array0.size; i++) {
         if (array0.data[i] == 45) { 
            array0.data[i] += 45;
         }
      }
   }
   else {
      Array array90;
      array90.size = 756;
      array90.refC = 1;
      array90.data = (unsigned int*)malloc(array90.size*sizeof(unsigned int));
      memset(array90.data, 0, array90.size*sizeof(unsigned int));
      array90.refC--;
      if(array90.refC == 0) {
         free(array90.data);
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array0;
   Array array91 = func1(&params0, loopsFactor);
   free(params0.data);
   array91.refC--;
   if(array91.refC == 0) {
      free(array91.data);
   }
   array0.refC--;
   if(array0.refC == 0) {
      free(array0.data);
   }
   return 0;
}

