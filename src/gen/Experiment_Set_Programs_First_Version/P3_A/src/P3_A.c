#include "P3_A.h"

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
      unsigned int loop1 = 0;
      unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         array_t* array0;
         array0 = (array_t*)malloc(sizeof(array_t));
         array0->size = 777;
         array0->refC = 1;
         array0->data = (unsigned int*)malloc(array0->size*sizeof(unsigned int));
         memset(array0->data, 0, array0->size*sizeof(unsigned int));
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]++;
         }
         array_t* array1;
         array1 = (array_t*)malloc(sizeof(array_t));
         array1->size = 793;
         array1->refC = 1;
         array1->data = (unsigned int*)malloc(array1->size*sizeof(unsigned int));
         memset(array1->data, 0, array1->size*sizeof(unsigned int));
         if(rng() & 1) {
            unsigned int loop2 = 0;
            unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
            for(; loop2 < loopLimit2; loop2++) {
               array_t* array2;
               array2 = (array_t*)malloc(sizeof(array_t));
               array2->size = 335;
               array2->refC = 1;
               array2->data = (unsigned int*)malloc(array2->size*sizeof(unsigned int));
               memset(array2->data, 0, array2->size*sizeof(unsigned int));
               for (int i = 0; i < array1->size; i++) {
                  if (array1->data[i] == 92) { 
                     array1->data[i] += 92;
                  }
               }
               array_t_param params0;
               params0.size = 3;
               params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
               params0.data[0] = array0;
               params0.data[1] = array1;
               params0.data[2] = array2;
               array_t* array3 = func4(&params0, rng(), loopsFactor);
               free(params0.data);
               unsigned int loop5 = 0;
               unsigned int loopLimit5 = (rand()%loopsFactor)/4 + 1;
               for(; loop5 < loopLimit5; loop5++) {
                  for (int i = 0; i < array0->size; i++) {
                     array0->data[i]--;
                  }
               }
               unsigned int loop6 = 0;
               unsigned int loopLimit6 = (rand()%loopsFactor)/4 + 1;
               for(; loop6 < loopLimit6; loop6++) {
                  for (int i = 0; i < array2->size; i++) {
                     array2->data[i]++;
                  }
               }
               array3->refC--;
               if(array3->refC == 0) {
                  free(array3->data);
                  free(array3);
               }
               array2->refC--;
               if(array2->refC == 0) {
                  free(array2->data);
                  free(array2);
               }
            }
         }
         else {
            array_t_param params0;
            params0.size = 2;
            params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
            params0.data[0] = array0;
            params0.data[1] = array1;
            array_t* array5 = func1(&params0, loopsFactor);
            free(params0.data);
            array5->refC--;
            if(array5->refC == 0) {
               free(array5->data);
               free(array5);
            }
         }
         for (int i = 0; i < array1->size; i++) {
            array1->data[i]++;
         }
         if(rng() & 1) {
            for (int i = 0; i < array1->size; i++) {
               if (array1->data[i] == 56) { 
                  array1->data[i] += 56;
               }
            }
         }
         else {
            if(rng() & 1) {
               for (int i = 0; i < array1->size; i++) {
                  if (array1->data[i] == 42) { 
                     array1->data[i] += 42;
                  }
               }
            }
            else {
               for (int i = 0; i < array1->size; i++) {
                  array1->data[i]++;
               }
            }
         }
         for (int i = 0; i < array1->size; i++) {
            array1->data[i]--;
         }
         unsigned int loop10 = 0;
         unsigned int loopLimit10 = (rand()%loopsFactor)/3 + 1;
         for(; loop10 < loopLimit10; loop10++) {
            for (int i = 0; i < array1->size; i++) {
               array1->data[i]--;
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array0;
         params0.data[1] = array1;
         array_t* array9 = func4(&params0, rng(), loopsFactor);
         free(params0.data);
         unsigned int loop11 = 0;
         unsigned int loopLimit11 = (rand()%loopsFactor)/3 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            for (int i = 0; i < array1->size; i++) {
               array1->data[i]--;
            }
         }
         unsigned int loop12 = 0;
         unsigned int loopLimit12 = (rand()%loopsFactor)/3 + 1;
         for(; loop12 < loopLimit12; loop12++) {
            for (int i = 0; i < array9->size; i++) {
               array9->data[i]++;
            }
         }
         array_t* array10;
         array10 = (array_t*)malloc(sizeof(array_t));
         array10->size = 324;
         array10->refC = 1;
         array10->data = (unsigned int*)malloc(array10->size*sizeof(unsigned int));
         memset(array10->data, 0, array10->size*sizeof(unsigned int));
         if(rng() & 1) {
            unsigned int loop13 = 0;
            unsigned int loopLimit13 = (rand()%loopsFactor)/3 + 1;
            for(; loop13 < loopLimit13; loop13++) {
               array_t* array11;
               array11 = (array_t*)malloc(sizeof(array_t));
               array11->size = 315;
               array11->refC = 1;
               array11->data = (unsigned int*)malloc(array11->size*sizeof(unsigned int));
               memset(array11->data, 0, array11->size*sizeof(unsigned int));
               for (int i = 0; i < array0->size; i++) {
                  if (array0->data[i] == 13) { 
                     array0->data[i] += 13;
                  }
               }
               unsigned int loop14 = 0;
               unsigned int loopLimit14 = (rand()%loopsFactor)/4 + 1;
               for(; loop14 < loopLimit14; loop14++) {
                  for (int i = 0; i < array1->size; i++) {
                     array1->data[i]++;
                  }
               }
               array11->refC--;
               if(array11->refC == 0) {
                  free(array11->data);
                  free(array11);
               }
            }
         }
         else {
            array_t_param params1;
            params1.size = 4;
            params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
            params1.data[0] = array0;
            params1.data[1] = array1;
            params1.data[2] = array9;
            params1.data[3] = array10;
            array_t* array12 = func6(&params1, loopsFactor);
            free(params1.data);
            array12->refC--;
            if(array12->refC == 0) {
               free(array12->data);
               free(array12);
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array0;
         params1.data[1] = array1;
         params1.data[2] = array9;
         params1.data[3] = array10;
         array_t* array14 = func2(&params1, rng(), loopsFactor);
         free(params1.data);
         array_t_param params2;
         params2.size = 5;
         params2.data = (array_t**)malloc(params2.size*sizeof(array_t*));
         params2.data[0] = array0;
         params2.data[1] = array1;
         params2.data[2] = array9;
         params2.data[3] = array10;
         params2.data[4] = array14;
         array_t* array23 = func0(&params2, rng(), loopsFactor);
         free(params2.data);
         unsigned int loop35 = 0;
         unsigned int loopLimit35 = (rand()%loopsFactor)/3 + 1;
         for(; loop35 < loopLimit35; loop35++) {
            for (int i = 0; i < array10->size; i++) {
               array10->data[i]++;
            }
            for (int i = 0; i < array1->size; i++) {
               if (array1->data[i] == 97) { 
                  array1->data[i] += 97;
               }
            }
            for (int i = 0; i < array23->size; i++) {
               if (array23->data[i] == 81) { 
                  array23->data[i] += 81;
               }
            }
            for (int i = 0; i < array23->size; i++) {
               array23->data[i]++;
            }
         }
         array23->refC--;
         if(array23->refC == 0) {
            free(array23->data);
            free(array23);
         }
         array14->refC--;
         if(array14->refC == 0) {
            free(array14->data);
            free(array14);
         }
         array10->refC--;
         if(array10->refC == 0) {
            free(array10->data);
            free(array10);
         }
         array9->refC--;
         if(array9->refC == 0) {
            free(array9->data);
            free(array9);
         }
         array1->refC--;
         if(array1->refC == 0) {
            free(array1->data);
            free(array1);
         }
         array0->refC--;
         if(array0->refC == 0) {
            free(array0->data);
            free(array0);
         }
      }
   }
   return 0;
}

