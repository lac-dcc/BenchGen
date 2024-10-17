#include "P5_A.h"

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
               if (array0->data[i] == 49) { 
                  array0->data[i] += 49;
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
               for (int i = 0; i < array0->size; i++) {
                  array0->data[i]--;
               }
            }
            unsigned int loop4 = 0;
            unsigned int loopLimit4 = (rand()%loopsFactor)/3 + 1;
            for(; loop4 < loopLimit4; loop4++) {
               for (int i = 0; i < array3->size; i++) {
                  array3->data[i]++;
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
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/2 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         for (int i = 0; i < array1->size; i++) {
            array1->data[i]++;
         }
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
      }
      for (int i = 0; i < array1->size; i++) {
         array1->data[i]--;
      }
      unsigned int loop10 = 0;
      unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array0;
      params0.data[1] = array1;
      array_t* array11 = func5(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop11 = 0;
      unsigned int loopLimit11 = (rand()%loopsFactor)/2 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         for (int i = 0; i < array1->size; i++) {
            array1->data[i]--;
         }
      }
      unsigned int loop12 = 0;
      unsigned int loopLimit12 = (rand()%loopsFactor)/2 + 1;
      for(; loop12 < loopLimit12; loop12++) {
         array_t* array12;
         array12 = (array_t*)malloc(sizeof(array_t));
         array12->size = 980;
         array12->refC = 1;
         array12->data = (unsigned int*)malloc(array12->size*sizeof(unsigned int));
         memset(array12->data, 0, array12->size*sizeof(unsigned int));
         array_t* array13;
         array13 = (array_t*)malloc(sizeof(array_t));
         array13->size = 956;
         array13->refC = 1;
         array13->data = (unsigned int*)malloc(array13->size*sizeof(unsigned int));
         memset(array13->data, 0, array13->size*sizeof(unsigned int));
         for (int i = 0; i < array12->size; i++) {
            if (array12->data[i] == 62) { 
               array12->data[i] += 62;
            }
         }
         unsigned int loop13 = 0;
         unsigned int loopLimit13 = (rand()%loopsFactor)/3 + 1;
         for(; loop13 < loopLimit13; loop13++) {
            for (int i = 0; i < array0->size; i++) {
               if (array0->data[i] == 96) { 
                  array0->data[i] += 96;
               }
            }
         }
         array13->refC--;
         if(array13->refC == 0) {
            free(array13->data);
            free(array13);
         }
         array12->refC--;
         if(array12->refC == 0) {
            free(array12->data);
            free(array12);
         }
      }
      array_t* array14;
      array14 = (array_t*)malloc(sizeof(array_t));
      array14->size = 281;
      array14->refC = 1;
      array14->data = (unsigned int*)malloc(array14->size*sizeof(unsigned int));
      memset(array14->data, 0, array14->size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop14 = 0;
         unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
         for(; loop14 < loopLimit14; loop14++) {
            array_t* array15;
            array15 = (array_t*)malloc(sizeof(array_t));
            array15->size = 305;
            array15->refC = 1;
            array15->data = (unsigned int*)malloc(array15->size*sizeof(unsigned int));
            memset(array15->data, 0, array15->size*sizeof(unsigned int));
            for (int i = 0; i < array0->size; i++) {
               if (array0->data[i] == 84) { 
                  array0->data[i] += 84;
               }
            }
            unsigned int loop15 = 0;
            unsigned int loopLimit15 = (rand()%loopsFactor)/3 + 1;
            for(; loop15 < loopLimit15; loop15++) {
               for (int i = 0; i < array11->size; i++) {
                  array11->data[i]++;
               }
            }
            array15->refC--;
            if(array15->refC == 0) {
               free(array15->data);
               free(array15);
            }
         }
      }
      else {
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array0;
         params1.data[1] = array1;
         params1.data[2] = array11;
         params1.data[3] = array14;
         array_t* array16 = func7(&params1, loopsFactor);
         free(params1.data);
         array16->refC--;
         if(array16->refC == 0) {
            free(array16->data);
            free(array16);
         }
      }
      unsigned int loop16 = 0;
      unsigned int loopLimit16 = (rand()%loopsFactor)/2 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         for (int i = 0; i < array11->size; i++) {
            array11->data[i]++;
         }
         for (int i = 0; i < array1->size; i++) {
            array1->data[i]--;
         }
         for (int i = 0; i < array11->size; i++) {
            array11->data[i]--;
         }
      }
      array_t_param params1;
      params1.size = 4;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array0;
      params1.data[1] = array1;
      params1.data[2] = array11;
      params1.data[3] = array14;
      array_t* array18 = func3(&params1, rng(), loopsFactor);
      free(params1.data);
      unsigned int loop27 = 0;
      unsigned int loopLimit27 = (rand()%loopsFactor)/2 + 1;
      for(; loop27 < loopLimit27; loop27++) {
         for (int i = 0; i < array1->size; i++) {
            array1->data[i]++;
         }
         array_t* array29;
         array29 = (array_t*)malloc(sizeof(array_t));
         array29->size = 301;
         array29->refC = 1;
         array29->data = (unsigned int*)malloc(array29->size*sizeof(unsigned int));
         memset(array29->data, 0, array29->size*sizeof(unsigned int));
         if(rng() & 1) {
            unsigned int loop28 = 0;
            unsigned int loopLimit28 = (rand()%loopsFactor)/3 + 1;
            for(; loop28 < loopLimit28; loop28++) {
               array_t* array30;
               array30 = (array_t*)malloc(sizeof(array_t));
               array30->size = 280;
               array30->refC = 1;
               array30->data = (unsigned int*)malloc(array30->size*sizeof(unsigned int));
               memset(array30->data, 0, array30->size*sizeof(unsigned int));
               for (int i = 0; i < array30->size; i++) {
                  if (array30->data[i] == 41) { 
                     array30->data[i] += 41;
                  }
               }
               unsigned int loop29 = 0;
               unsigned int loopLimit29 = (rand()%loopsFactor)/4 + 1;
               for(; loop29 < loopLimit29; loop29++) {
                  for (int i = 0; i < array0->size; i++) {
                     array0->data[i]++;
                  }
               }
               array30->refC--;
               if(array30->refC == 0) {
                  free(array30->data);
                  free(array30);
               }
            }
         }
         else {
            array_t_param params2;
            params2.size = 6;
            params2.data = (array_t**)malloc(params2.size*sizeof(array_t*));
            params2.data[0] = array0;
            params2.data[1] = array1;
            params2.data[2] = array11;
            params2.data[3] = array14;
            params2.data[4] = array18;
            params2.data[5] = array29;
            array_t* array31 = func7(&params2, loopsFactor);
            free(params2.data);
            array31->refC--;
            if(array31->refC == 0) {
               free(array31->data);
               free(array31);
            }
         }
         unsigned int loop30 = 0;
         unsigned int loopLimit30 = (rand()%loopsFactor)/3 + 1;
         for(; loop30 < loopLimit30; loop30++) {
            for (int i = 0; i < array29->size; i++) {
               array29->data[i]++;
            }
            for (int i = 0; i < array18->size; i++) {
               array18->data[i]--;
            }
            for (int i = 0; i < array14->size; i++) {
               array14->data[i]--;
            }
         }
         array_t_param params2;
         params2.size = 6;
         params2.data = (array_t**)malloc(params2.size*sizeof(array_t*));
         params2.data[0] = array0;
         params2.data[1] = array1;
         params2.data[2] = array11;
         params2.data[3] = array14;
         params2.data[4] = array18;
         params2.data[5] = array29;
         array_t* array32 = func4(&params2, rng(), loopsFactor);
         free(params2.data);
         unsigned int loop47 = 0;
         unsigned int loopLimit47 = (rand()%loopsFactor)/3 + 1;
         for(; loop47 < loopLimit47; loop47++) {
            for (int i = 0; i < array18->size; i++) {
               array18->data[i]--;
            }
         }
         if(rng() & 1) {
            for (int i = 0; i < array0->size; i++) {
               if (array0->data[i] == 28) { 
                  array0->data[i] += 28;
               }
            }
         }
         else {
            array_t* array49;
            array49 = (array_t*)malloc(sizeof(array_t));
            array49->size = 275;
            array49->refC = 1;
            array49->data = (unsigned int*)malloc(array49->size*sizeof(unsigned int));
            memset(array49->data, 0, array49->size*sizeof(unsigned int));
            array49->refC--;
            if(array49->refC == 0) {
               free(array49->data);
               free(array49);
            }
         }
         array_t_param params3;
         params3.size = 7;
         params3.data = (array_t**)malloc(params3.size*sizeof(array_t*));
         params3.data[0] = array0;
         params3.data[1] = array1;
         params3.data[2] = array11;
         params3.data[3] = array14;
         params3.data[4] = array18;
         params3.data[5] = array29;
         params3.data[6] = array32;
         array_t* array50 = func0(&params3, rng(), loopsFactor);
         free(params3.data);
         array50->refC--;
         if(array50->refC == 0) {
            free(array50->data);
            free(array50);
         }
         array32->refC--;
         if(array32->refC == 0) {
            free(array32->data);
            free(array32);
         }
         array29->refC--;
         if(array29->refC == 0) {
            free(array29->data);
            free(array29);
         }
      }
      array18->refC--;
      if(array18->refC == 0) {
         free(array18->data);
         free(array18);
      }
      array14->refC--;
      if(array14->refC == 0) {
         free(array14->data);
         free(array14);
      }
      array11->refC--;
      if(array11->refC == 0) {
         free(array11->data);
         free(array11);
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

