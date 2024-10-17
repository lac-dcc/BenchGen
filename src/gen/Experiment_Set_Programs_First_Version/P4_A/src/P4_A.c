#include "P4_A.h"

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
      array_t* array0;
      array0 = (array_t*)malloc(sizeof(array_t));
      array0->size = 777;
      array0->refC = 1;
      array0->data = (unsigned int*)malloc(array0->size*sizeof(unsigned int));
      memset(array0->data, 0, array0->size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop1 = 0;
         unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
         for(; loop1 < loopLimit1; loop1++) {
            array_t* array1;
            array1 = (array_t*)malloc(sizeof(array_t));
            array1->size = 915;
            array1->refC = 1;
            array1->data = (unsigned int*)malloc(array1->size*sizeof(unsigned int));
            memset(array1->data, 0, array1->size*sizeof(unsigned int));
            for (int i = 0; i < array1->size; i++) {
               if (array1->data[i] == 35) { 
                  array1->data[i] += 35;
               }
            }
            array_t_param params0;
            params0.size = 2;
            params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
            params0.data[0] = array0;
            params0.data[1] = array1;
            array_t* array2 = func3(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop3 = 0;
            unsigned int loopLimit3 = (rand()%loopsFactor)/3 + 1;
            for(; loop3 < loopLimit3; loop3++) {
               for (int i = 0; i < array1->size; i++) {
                  array1->data[i]--;
               }
            }
            unsigned int loop4 = 0;
            unsigned int loopLimit4 = (rand()%loopsFactor)/3 + 1;
            for(; loop4 < loopLimit4; loop4++) {
               for (int i = 0; i < array1->size; i++) {
                  array1->data[i]++;
               }
            }
            array2->refC--;
            if(array2->refC == 0) {
               free(array2->data);
               free(array2);
            }
            array1->refC--;
            if(array1->refC == 0) {
               free(array1->data);
               free(array1);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array0;
         array_t* array4 = func0(&params0, loopsFactor);
         free(params0.data);
         array4->refC--;
         if(array4->refC == 0) {
            free(array4->data);
            free(array4);
         }
      }
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/2 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]++;
         }
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
      }
      array_t* array10;
      array10 = (array_t*)malloc(sizeof(array_t));
      array10->size = 537;
      array10->refC = 1;
      array10->data = (unsigned int*)malloc(array10->size*sizeof(unsigned int));
      memset(array10->data, 0, array10->size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop10 = 0;
         unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
         for(; loop10 < loopLimit10; loop10++) {
            array_t* array11;
            array11 = (array_t*)malloc(sizeof(array_t));
            array11->size = 198;
            array11->refC = 1;
            array11->data = (unsigned int*)malloc(array11->size*sizeof(unsigned int));
            memset(array11->data, 0, array11->size*sizeof(unsigned int));
            for (int i = 0; i < array11->size; i++) {
               if (array11->data[i] == 15) { 
                  array11->data[i] += 15;
               }
            }
            array_t_param params0;
            params0.size = 3;
            params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
            params0.data[0] = array0;
            params0.data[1] = array10;
            params0.data[2] = array11;
            array_t* array12 = func3(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop11 = 0;
            unsigned int loopLimit11 = (rand()%loopsFactor)/3 + 1;
            for(; loop11 < loopLimit11; loop11++) {
               for (int i = 0; i < array11->size; i++) {
                  array11->data[i]--;
               }
            }
            unsigned int loop12 = 0;
            unsigned int loopLimit12 = (rand()%loopsFactor)/3 + 1;
            for(; loop12 < loopLimit12; loop12++) {
               for (int i = 0; i < array12->size; i++) {
                  array12->data[i]++;
               }
            }
            array12->refC--;
            if(array12->refC == 0) {
               free(array12->data);
               free(array12);
            }
            array11->refC--;
            if(array11->refC == 0) {
               free(array11->data);
               free(array11);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array0;
         params0.data[1] = array10;
         array_t* array13 = func0(&params0, loopsFactor);
         free(params0.data);
         array13->refC--;
         if(array13->refC == 0) {
            free(array13->data);
            free(array13);
         }
      }
      unsigned int loop13 = 0;
      unsigned int loopLimit13 = (rand()%loopsFactor)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         for (int i = 0; i < array10->size; i++) {
            array10->data[i]++;
         }
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
      }
      unsigned int loop14 = 0;
      unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array0;
      params0.data[1] = array10;
      array_t* array14 = func3(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/2 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
      }
      unsigned int loop16 = 0;
      unsigned int loopLimit16 = (rand()%loopsFactor)/2 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         array_t* array15;
         array15 = (array_t*)malloc(sizeof(array_t));
         array15->size = 84;
         array15->refC = 1;
         array15->data = (unsigned int*)malloc(array15->size*sizeof(unsigned int));
         memset(array15->data, 0, array15->size*sizeof(unsigned int));
         array_t* array16;
         array16 = (array_t*)malloc(sizeof(array_t));
         array16->size = 327;
         array16->refC = 1;
         array16->data = (unsigned int*)malloc(array16->size*sizeof(unsigned int));
         memset(array16->data, 0, array16->size*sizeof(unsigned int));
         for (int i = 0; i < array10->size; i++) {
            if (array10->data[i] == 5) { 
               array10->data[i] += 5;
            }
         }
         unsigned int loop17 = 0;
         unsigned int loopLimit17 = (rand()%loopsFactor)/3 + 1;
         for(; loop17 < loopLimit17; loop17++) {
            for (int i = 0; i < array10->size; i++) {
               if (array10->data[i] == 29) { 
                  array10->data[i] += 29;
               }
            }
         }
         array16->refC--;
         if(array16->refC == 0) {
            free(array16->data);
            free(array16);
         }
         array15->refC--;
         if(array15->refC == 0) {
            free(array15->data);
            free(array15);
         }
      }
      array_t* array17;
      array17 = (array_t*)malloc(sizeof(array_t));
      array17->size = 313;
      array17->refC = 1;
      array17->data = (unsigned int*)malloc(array17->size*sizeof(unsigned int));
      memset(array17->data, 0, array17->size*sizeof(unsigned int));
      if(rng() & 1) {
         unsigned int loop18 = 0;
         unsigned int loopLimit18 = (rand()%loopsFactor)/2 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            array_t* array18;
            array18 = (array_t*)malloc(sizeof(array_t));
            array18->size = 857;
            array18->refC = 1;
            array18->data = (unsigned int*)malloc(array18->size*sizeof(unsigned int));
            memset(array18->data, 0, array18->size*sizeof(unsigned int));
            for (int i = 0; i < array18->size; i++) {
               if (array18->data[i] == 95) { 
                  array18->data[i] += 95;
               }
            }
            unsigned int loop19 = 0;
            unsigned int loopLimit19 = (rand()%loopsFactor)/3 + 1;
            for(; loop19 < loopLimit19; loop19++) {
               for (int i = 0; i < array14->size; i++) {
                  array14->data[i]++;
               }
            }
            array18->refC--;
            if(array18->refC == 0) {
               free(array18->data);
               free(array18);
            }
         }
      }
      else {
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array0;
         params1.data[1] = array10;
         params1.data[2] = array14;
         params1.data[3] = array17;
         array_t* array19 = func5(&params1, loopsFactor);
         free(params1.data);
         array19->refC--;
         if(array19->refC == 0) {
            free(array19->data);
            free(array19);
         }
      }
      unsigned int loop20 = 0;
      unsigned int loopLimit20 = (rand()%loopsFactor)/2 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]++;
         }
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
         for (int i = 0; i < array14->size; i++) {
            array14->data[i]--;
         }
      }
      array_t_param params1;
      params1.size = 4;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array0;
      params1.data[1] = array10;
      params1.data[2] = array14;
      params1.data[3] = array17;
      array_t* array21 = func1(&params1, rng(), loopsFactor);
      free(params1.data);
      unsigned int loop31 = 0;
      unsigned int loopLimit31 = (rand()%loopsFactor)/2 + 1;
      for(; loop31 < loopLimit31; loop31++) {
         array_t* array32;
         array32 = (array_t*)malloc(sizeof(array_t));
         array32->size = 440;
         array32->refC = 1;
         array32->data = (unsigned int*)malloc(array32->size*sizeof(unsigned int));
         memset(array32->data, 0, array32->size*sizeof(unsigned int));
         if(rng() & 1) {
            unsigned int loop32 = 0;
            unsigned int loopLimit32 = (rand()%loopsFactor)/3 + 1;
            for(; loop32 < loopLimit32; loop32++) {
               array_t* array33;
               array33 = (array_t*)malloc(sizeof(array_t));
               array33->size = 729;
               array33->refC = 1;
               array33->data = (unsigned int*)malloc(array33->size*sizeof(unsigned int));
               memset(array33->data, 0, array33->size*sizeof(unsigned int));
               for (int i = 0; i < array17->size; i++) {
                  if (array17->data[i] == 17) { 
                     array17->data[i] += 17;
                  }
               }
               unsigned int loop33 = 0;
               unsigned int loopLimit33 = (rand()%loopsFactor)/4 + 1;
               for(; loop33 < loopLimit33; loop33++) {
                  for (int i = 0; i < array17->size; i++) {
                     array17->data[i]++;
                  }
               }
               array33->refC--;
               if(array33->refC == 0) {
                  free(array33->data);
                  free(array33);
               }
            }
         }
         else {
            array_t_param params2;
            params2.size = 6;
            params2.data = (array_t**)malloc(params2.size*sizeof(array_t*));
            params2.data[0] = array0;
            params2.data[1] = array10;
            params2.data[2] = array14;
            params2.data[3] = array17;
            params2.data[4] = array21;
            params2.data[5] = array32;
            array_t* array34 = func5(&params2, loopsFactor);
            free(params2.data);
            array34->refC--;
            if(array34->refC == 0) {
               free(array34->data);
               free(array34);
            }
         }
         unsigned int loop34 = 0;
         unsigned int loopLimit34 = (rand()%loopsFactor)/3 + 1;
         for(; loop34 < loopLimit34; loop34++) {
            for (int i = 0; i < array32->size; i++) {
               array32->data[i]++;
            }
            for (int i = 0; i < array17->size; i++) {
               array17->data[i]--;
            }
            for (int i = 0; i < array10->size; i++) {
               array10->data[i]--;
            }
         }
         array_t_param params2;
         params2.size = 6;
         params2.data = (array_t**)malloc(params2.size*sizeof(array_t*));
         params2.data[0] = array0;
         params2.data[1] = array10;
         params2.data[2] = array14;
         params2.data[3] = array17;
         params2.data[4] = array21;
         params2.data[5] = array32;
         array_t* array35 = func2(&params2, rng(), loopsFactor);
         free(params2.data);
         unsigned int loop51 = 0;
         unsigned int loopLimit51 = (rand()%loopsFactor)/3 + 1;
         for(; loop51 < loopLimit51; loop51++) {
            for (int i = 0; i < array14->size; i++) {
               array14->data[i]--;
            }
         }
         array_t* array52;
         array52 = (array_t*)malloc(sizeof(array_t));
         array52->size = 29;
         array52->refC = 1;
         array52->data = (unsigned int*)malloc(array52->size*sizeof(unsigned int));
         memset(array52->data, 0, array52->size*sizeof(unsigned int));
         if(rng() & 1) {
            unsigned int loop52 = 0;
            unsigned int loopLimit52 = (rand()%loopsFactor)/3 + 1;
            for(; loop52 < loopLimit52; loop52++) {
               array_t* array53;
               array53 = (array_t*)malloc(sizeof(array_t));
               array53->size = 237;
               array53->refC = 1;
               array53->data = (unsigned int*)malloc(array53->size*sizeof(unsigned int));
               memset(array53->data, 0, array53->size*sizeof(unsigned int));
               for (int i = 0; i < array17->size; i++) {
                  if (array17->data[i] == 93) { 
                     array17->data[i] += 93;
                  }
               }
               array_t_param params3;
               params3.size = 9;
               params3.data = (array_t**)malloc(params3.size*sizeof(array_t*));
               params3.data[0] = array0;
               params3.data[1] = array10;
               params3.data[2] = array14;
               params3.data[3] = array17;
               params3.data[4] = array21;
               params3.data[5] = array32;
               params3.data[6] = array35;
               params3.data[7] = array52;
               params3.data[8] = array53;
               array_t* array54 = func3(&params3, rng(), loopsFactor);
               free(params3.data);
               unsigned int loop53 = 0;
               unsigned int loopLimit53 = (rand()%loopsFactor)/4 + 1;
               for(; loop53 < loopLimit53; loop53++) {
                  for (int i = 0; i < array17->size; i++) {
                     array17->data[i]--;
                  }
               }
               unsigned int loop54 = 0;
               unsigned int loopLimit54 = (rand()%loopsFactor)/4 + 1;
               for(; loop54 < loopLimit54; loop54++) {
                  for (int i = 0; i < array10->size; i++) {
                     array10->data[i]++;
                  }
               }
               array54->refC--;
               if(array54->refC == 0) {
                  free(array54->data);
                  free(array54);
               }
               array53->refC--;
               if(array53->refC == 0) {
                  free(array53->data);
                  free(array53);
               }
            }
         }
         else {
            array_t_param params3;
            params3.size = 8;
            params3.data = (array_t**)malloc(params3.size*sizeof(array_t*));
            params3.data[0] = array0;
            params3.data[1] = array10;
            params3.data[2] = array14;
            params3.data[3] = array17;
            params3.data[4] = array21;
            params3.data[5] = array32;
            params3.data[6] = array35;
            params3.data[7] = array52;
            array_t* array55 = func0(&params3, loopsFactor);
            free(params3.data);
            array55->refC--;
            if(array55->refC == 0) {
               free(array55->data);
               free(array55);
            }
         }
         unsigned int loop55 = 0;
         unsigned int loopLimit55 = (rand()%loopsFactor)/3 + 1;
         for(; loop55 < loopLimit55; loop55++) {
            for (int i = 0; i < array0->size; i++) {
               array0->data[i]++;
            }
            for (int i = 0; i < array21->size; i++) {
               array21->data[i]--;
            }
            for (int i = 0; i < array17->size; i++) {
               array17->data[i]--;
            }
         }
         array52->refC--;
         if(array52->refC == 0) {
            free(array52->data);
            free(array52);
         }
         array35->refC--;
         if(array35->refC == 0) {
            free(array35->data);
            free(array35);
         }
         array32->refC--;
         if(array32->refC == 0) {
            free(array32->data);
            free(array32);
         }
      }
      array21->refC--;
      if(array21->refC == 0) {
         free(array21->data);
         free(array21);
      }
      array17->refC--;
      if(array17->refC == 0) {
         free(array17->data);
         free(array17);
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
      array0->refC--;
      if(array0->refC == 0) {
         free(array0->data);
         free(array0);
      }
   }
   return 0;
}

