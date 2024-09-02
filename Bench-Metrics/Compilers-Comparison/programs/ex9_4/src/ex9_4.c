#include "ex9_4.h"

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
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/2 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         for (int i = 0; i < array0.size; i++) {
            array0.data[i]--;
         }
      }
      Array array20;
      array20.size = 276;
      array20.refC = 1;
      array20.data = (unsigned int*)malloc(array20.size*sizeof(unsigned int));
      memset(array20.data, 0, array20.size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop10 = 0;
         unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
         for(; loop10 < loopLimit10; loop10++) {
            Array array21;
            array21.size = 178;
            array21.refC = 1;
            array21.data = (unsigned int*)malloc(array21.size*sizeof(unsigned int));
            memset(array21.data, 0, array21.size*sizeof(unsigned int));
            for (int i = 0; i < array0.size; i++) {
               array0.data[i]--;
            }
            for (int i = 0; i < array0.size; i++) {
               if (array0.data[i] == 3) { 
                  array0.data[i] += 3;
               }
            }
            array21.refC--;
            if(array21.refC == 0) {
               free(array21.data);
            }
         }
      }
      else {
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array0;
         params1.data[1] = array1;
         params1.data[2] = array20;
         Array array22 = func9(&params1, loopsFactor);
         free(params1.data);
         array22.refC--;
         if(array22.refC == 0) {
            free(array22.data);
         }
      }
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array0;
      params1.data[1] = array1;
      params1.data[2] = array20;
      Array array25 = func6(&params1, rng(), loopsFactor);
      free(params1.data);
      unsigned int loop16 = 0;
      unsigned int loopLimit16 = (rand()%loopsFactor)/2 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         for (int i = 0; i < array20.size; i++) {
            array20.data[i]++;
         }
      }
      ArrayParam params2;
      params2.size = 4;
      params2.data = (Array*)malloc(params2.size*sizeof(Array));
      params2.data[0] = array0;
      params2.data[1] = array1;
      params2.data[2] = array20;
      params2.data[3] = array25;
      Array array34 = func3(&params2, rng(), loopsFactor);
      free(params2.data);
      Array array40;
      array40.size = 618;
      array40.refC = 1;
      array40.data = (unsigned int*)malloc(array40.size*sizeof(unsigned int));
      memset(array40.data, 0, array40.size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop18 = 0;
         unsigned int loopLimit18 = (rand()%loopsFactor)/2 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            Array array41;
            array41.size = 245;
            array41.refC = 1;
            array41.data = (unsigned int*)malloc(array41.size*sizeof(unsigned int));
            memset(array41.data, 0, array41.size*sizeof(unsigned int));
            for (int i = 0; i < array41.size; i++) {
               array41.data[i]--;
            }
            for (int i = 0; i < array40.size; i++) {
               if (array40.data[i] == 21) { 
                  array40.data[i] += 21;
               }
            }
            array41.refC--;
            if(array41.refC == 0) {
               free(array41.data);
            }
         }
      }
      else {
         ArrayParam params3;
         params3.size = 6;
         params3.data = (Array*)malloc(params3.size*sizeof(Array));
         params3.data[0] = array0;
         params3.data[1] = array1;
         params3.data[2] = array20;
         params3.data[3] = array25;
         params3.data[4] = array34;
         params3.data[5] = array40;
         Array array42 = func7(&params3, loopsFactor);
         free(params3.data);
         array42.refC--;
         if(array42.refC == 0) {
            free(array42.data);
         }
      }
      ArrayParam params3;
      params3.size = 6;
      params3.data = (Array*)malloc(params3.size*sizeof(Array));
      params3.data[0] = array0;
      params3.data[1] = array1;
      params3.data[2] = array20;
      params3.data[3] = array25;
      params3.data[4] = array34;
      params3.data[5] = array40;
      Array array46 = func4(&params3, rng(), loopsFactor);
      free(params3.data);
      for (int i = 0; i < array46.size; i++) {
         if (array46.data[i] == 72) { 
            array46.data[i] += 72;
         }
      }
      array46.refC--;
      if(array46.refC == 0) {
         free(array46.data);
      }
      array40.refC--;
      if(array40.refC == 0) {
         free(array40.data);
      }
      array34.refC--;
      if(array34.refC == 0) {
         free(array34.data);
      }
      array25.refC--;
      if(array25.refC == 0) {
         free(array25.data);
      }
      array20.refC--;
      if(array20.refC == 0) {
         free(array20.data);
      }
      array1.refC--;
      if(array1.refC == 0) {
         free(array1.data);
      }
   }
   if(rng() & 1) {
      for (int i = 0; i < array0.size; i++) {
         if (array0.data[i] == 44) { 
            array0.data[i] += 44;
         }
      }
   }
   else {
      Array array63;
      array63.size = 590;
      array63.refC = 1;
      array63.data = (unsigned int*)malloc(array63.size*sizeof(unsigned int));
      memset(array63.data, 0, array63.size*sizeof(unsigned int));
      array63.refC--;
      if(array63.refC == 0) {
         free(array63.data);
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array0;
   Array array64 = func1(&params0, loopsFactor);
   free(params0.data);
   array64.refC--;
   if(array64.refC == 0) {
      free(array64.data);
   }
   array0.refC--;
   if(array0.refC == 0) {
      free(array0.data);
   }
   return 0;
}

