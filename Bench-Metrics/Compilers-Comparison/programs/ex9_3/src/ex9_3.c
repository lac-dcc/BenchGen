#include "ex9_3.h"

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
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         for (int i = 0; i < array1.size; i++) {
            array1.data[i]--;
         }
      }
      Array array10;
      array10.size = 784;
      array10.refC = 1;
      array10.data = (unsigned int*)malloc(array10.size*sizeof(unsigned int));
      memset(array10.data, 0, array10.size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop6 = 0;
         unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
         for(; loop6 < loopLimit6; loop6++) {
            Array array11;
            array11.size = 537;
            array11.refC = 1;
            array11.data = (unsigned int*)malloc(array11.size*sizeof(unsigned int));
            memset(array11.data, 0, array11.size*sizeof(unsigned int));
            for (int i = 0; i < array10.size; i++) {
               array10.data[i]--;
            }
            for (int i = 0; i < array0.size; i++) {
               if (array0.data[i] == 15) { 
                  array0.data[i] += 15;
               }
            }
            array11.refC--;
            if(array11.refC == 0) {
               free(array11.data);
            }
         }
      }
      else {
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array0;
         params1.data[1] = array1;
         params1.data[2] = array10;
         Array array12 = func9(&params1, loopsFactor);
         free(params1.data);
         array12.refC--;
         if(array12.refC == 0) {
            free(array12.data);
         }
      }
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array0;
      params1.data[1] = array1;
      params1.data[2] = array10;
      Array array14 = func6(&params1, rng(), loopsFactor);
      free(params1.data);
      unsigned int loop10 = 0;
      unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         for (int i = 0; i < array0.size; i++) {
            array0.data[i]++;
         }
      }
      ArrayParam params2;
      params2.size = 4;
      params2.data = (Array*)malloc(params2.size*sizeof(Array));
      params2.data[0] = array0;
      params2.data[1] = array1;
      params2.data[2] = array10;
      params2.data[3] = array14;
      Array array20 = func3(&params2, loopsFactor);
      free(params2.data);
      Array array23;
      array23.size = 12;
      array23.refC = 1;
      array23.data = (unsigned int*)malloc(array23.size*sizeof(unsigned int));
      memset(array23.data, 0, array23.size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop11 = 0;
         unsigned int loopLimit11 = (rand()%loopsFactor)/2 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            Array array24;
            array24.size = 226;
            array24.refC = 1;
            array24.data = (unsigned int*)malloc(array24.size*sizeof(unsigned int));
            memset(array24.data, 0, array24.size*sizeof(unsigned int));
            for (int i = 0; i < array24.size; i++) {
               array24.data[i]--;
            }
            for (int i = 0; i < array20.size; i++) {
               if (array20.data[i] == 39) { 
                  array20.data[i] += 39;
               }
            }
            array24.refC--;
            if(array24.refC == 0) {
               free(array24.data);
            }
         }
      }
      else {
         ArrayParam params3;
         params3.size = 6;
         params3.data = (Array*)malloc(params3.size*sizeof(Array));
         params3.data[0] = array0;
         params3.data[1] = array1;
         params3.data[2] = array10;
         params3.data[3] = array14;
         params3.data[4] = array20;
         params3.data[5] = array23;
         Array array25 = func7(&params3, loopsFactor);
         free(params3.data);
         array25.refC--;
         if(array25.refC == 0) {
            free(array25.data);
         }
      }
      ArrayParam params3;
      params3.size = 6;
      params3.data = (Array*)malloc(params3.size*sizeof(Array));
      params3.data[0] = array0;
      params3.data[1] = array1;
      params3.data[2] = array10;
      params3.data[3] = array14;
      params3.data[4] = array20;
      params3.data[5] = array23;
      Array array28 = func4(&params3, rng(), loopsFactor);
      free(params3.data);
      for (int i = 0; i < array23.size; i++) {
         if (array23.data[i] == 28) { 
            array23.data[i] += 28;
         }
      }
      array28.refC--;
      if(array28.refC == 0) {
         free(array28.data);
      }
      array23.refC--;
      if(array23.refC == 0) {
         free(array23.data);
      }
      array20.refC--;
      if(array20.refC == 0) {
         free(array20.data);
      }
      array14.refC--;
      if(array14.refC == 0) {
         free(array14.data);
      }
      array10.refC--;
      if(array10.refC == 0) {
         free(array10.data);
      }
      array1.refC--;
      if(array1.refC == 0) {
         free(array1.data);
      }
   }
   if(rng() & 1) {
      for (int i = 0; i < array0.size; i++) {
         if (array0.data[i] == 32) { 
            array0.data[i] += 32;
         }
      }
   }
   else {
      Array array36;
      array36.size = 829;
      array36.refC = 1;
      array36.data = (unsigned int*)malloc(array36.size*sizeof(unsigned int));
      memset(array36.data, 0, array36.size*sizeof(unsigned int));
      array36.refC--;
      if(array36.refC == 0) {
         free(array36.data);
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array0;
   Array array37 = func1(&params0, loopsFactor);
   free(params0.data);
   array37.refC--;
   if(array37.refC == 0) {
      free(array37.data);
   }
   array0.refC--;
   if(array0.refC == 0) {
      free(array0.data);
   }
   return 0;
}

