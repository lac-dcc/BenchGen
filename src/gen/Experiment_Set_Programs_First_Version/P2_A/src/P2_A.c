#include "P2_A.h"

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
   array_t* array0;
   array0 = (array_t*)malloc(sizeof(array_t));
   array0->size = 777;
   array0->refC = 1;
   array0->data = (unsigned int*)malloc(array0->size*sizeof(unsigned int));
   memset(array0->data, 0, array0->size*sizeof(unsigned int));
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      for (int i = 0; i < array0->size; i++) {
         if (array0->data[i] == 93) { 
            array0->data[i] += 93;
         }
      }
      array_t* array1;
      array1 = (array_t*)malloc(sizeof(array_t));
      array1->size = 335;
      array1->refC = 1;
      array1->data = (unsigned int*)malloc(array1->size*sizeof(unsigned int));
      memset(array1->data, 0, array1->size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop1 = 0;
         unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
         for(; loop1 < loopLimit1; loop1++) {
            array_t* array2;
            array2 = (array_t*)malloc(sizeof(array_t));
            array2->size = 386;
            array2->refC = 1;
            array2->data = (unsigned int*)malloc(array2->size*sizeof(unsigned int));
            memset(array2->data, 0, array2->size*sizeof(unsigned int));
            for (int i = 0; i < array0->size; i++) {
               array0->data[i]--;
            }
            for (int i = 0; i < array0->size; i++) {
               if (array0->data[i] == 21) { 
                  array0->data[i] += 21;
               }
            }
            array_t_param params0;
            params0.size = 3;
            params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
            params0.data[0] = array0;
            params0.data[1] = array1;
            params0.data[2] = array2;
            array_t* array3 = func5(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop3 = 0;
            unsigned int loopLimit3 = (rand()%loopsFactor)/3 + 1;
            for(; loop3 < loopLimit3; loop3++) {
               for (int i = 0; i < array2->size; i++) {
                  array2->data[i]--;
               }
            }
            unsigned int loop4 = 0;
            unsigned int loopLimit4 = (rand()%loopsFactor)/3 + 1;
            for(; loop4 < loopLimit4; loop4++) {
               for (int i = 0; i < array0->size; i++) {
                  array0->data[i]++;
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
         array_t* array5 = func2(&params0, loopsFactor);
         free(params0.data);
         array5->refC--;
         if(array5->refC == 0) {
            free(array5->data);
            free(array5);
         }
      }
      for (int i = 0; i < array1->size; i++) {
         array1->data[i]--;
      }
      unsigned int loop7 = 0;
      unsigned int loopLimit7 = (rand()%loopsFactor)/2 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         for (int i = 0; i < array1->size; i++) {
            array1->data[i]--;
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array0;
      params0.data[1] = array1;
      array_t* array9 = func5(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         for (int i = 0; i < array1->size; i++) {
            array1->data[i]--;
         }
      }
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/2 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array0;
      params1.data[1] = array1;
      params1.data[2] = array9;
      array_t* array10 = func3(&params1, loopsFactor);
      free(params1.data);
      unsigned int loop11 = 0;
      unsigned int loopLimit11 = (rand()%loopsFactor)/2 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         for (int i = 0; i < array10->size; i++) {
            array10->data[i]++;
         }
         array_t* array12;
         array12 = (array_t*)malloc(sizeof(array_t));
         array12->size = 980;
         array12->refC = 1;
         array12->data = (unsigned int*)malloc(array12->size*sizeof(unsigned int));
         memset(array12->data, 0, array12->size*sizeof(unsigned int));
         if(rng() & 1) {
            unsigned int loop12 = 0;
            unsigned int loopLimit12 = (rand()%loopsFactor)/3 + 1;
            for(; loop12 < loopLimit12; loop12++) {
               array_t* array13;
               array13 = (array_t*)malloc(sizeof(array_t));
               array13->size = 956;
               array13->refC = 1;
               array13->data = (unsigned int*)malloc(array13->size*sizeof(unsigned int));
               memset(array13->data, 0, array13->size*sizeof(unsigned int));
               for (int i = 0; i < array10->size; i++) {
                  array10->data[i]--;
               }
               for (int i = 0; i < array9->size; i++) {
                  if (array9->data[i] == 70) { 
                     array9->data[i] += 70;
                  }
               }
               unsigned int loop13 = 0;
               unsigned int loopLimit13 = (rand()%loopsFactor)/4 + 1;
               for(; loop13 < loopLimit13; loop13++) {
                  for (int i = 0; i < array12->size; i++) {
                     array12->data[i]++;
                  }
               }
               array13->refC--;
               if(array13->refC == 0) {
                  free(array13->data);
                  free(array13);
               }
            }
         }
         else {
            array_t_param params2;
            params2.size = 5;
            params2.data = (array_t**)malloc(params2.size*sizeof(array_t*));
            params2.data[0] = array0;
            params2.data[1] = array1;
            params2.data[2] = array9;
            params2.data[3] = array10;
            params2.data[4] = array12;
            array_t* array14 = func7(&params2, loopsFactor);
            free(params2.data);
            array14->refC--;
            if(array14->refC == 0) {
               free(array14->data);
               free(array14);
            }
         }
         array_t_param params2;
         params2.size = 5;
         params2.data = (array_t**)malloc(params2.size*sizeof(array_t*));
         params2.data[0] = array0;
         params2.data[1] = array1;
         params2.data[2] = array9;
         params2.data[3] = array10;
         params2.data[4] = array12;
         array_t* array16 = func4(&params2, rng(), loopsFactor);
         free(params2.data);
         unsigned int loop19 = 0;
         unsigned int loopLimit19 = (rand()%loopsFactor)/3 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            for (int i = 0; i < array0->size; i++) {
               array0->data[i]--;
            }
         }
         if(rng() & 1) {
            for (int i = 0; i < array0->size; i++) {
               if (array0->data[i] == 76) { 
                  array0->data[i] += 76;
               }
            }
         }
         else {
            array_t* array21;
            array21 = (array_t*)malloc(sizeof(array_t));
            array21->size = 368;
            array21->refC = 1;
            array21->data = (unsigned int*)malloc(array21->size*sizeof(unsigned int));
            memset(array21->data, 0, array21->size*sizeof(unsigned int));
            array21->refC--;
            if(array21->refC == 0) {
               free(array21->data);
               free(array21);
            }
         }
         array_t_param params3;
         params3.size = 6;
         params3.data = (array_t**)malloc(params3.size*sizeof(array_t*));
         params3.data[0] = array0;
         params3.data[1] = array1;
         params3.data[2] = array9;
         params3.data[3] = array10;
         params3.data[4] = array12;
         params3.data[5] = array16;
         array_t* array22 = func0(&params3, loopsFactor);
         free(params3.data);
         array22->refC--;
         if(array22->refC == 0) {
            free(array22->data);
            free(array22);
         }
         array16->refC--;
         if(array16->refC == 0) {
            free(array16->data);
            free(array16);
         }
         array12->refC--;
         if(array12->refC == 0) {
            free(array12->data);
            free(array12);
         }
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
   }
   array0->refC--;
   if(array0->refC == 0) {
      free(array0->data);
      free(array0);
   }
   return 0;
}

