#include "P1_A.h" 
array_t* func9(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array36;
   if (pCounter > 0) {
      array36 = vars->data[--pCounter];
      array36->refC++;
   } else {
      array36 = (array_t*)malloc(sizeof(array_t));
      array36->size = 871;
      array36->refC = 1;
      array36->data = (unsigned int*)malloc(array36->size*sizeof(unsigned int));
      memset(array36->data, 0, array36->size*sizeof(unsigned int));
   }
   unsigned int loop17 = 0;
   unsigned int loopLimit17 = (rand()%loopsFactor)/2 + 1;
   for(; loop17 < loopLimit17; loop17++) {
      for (int i = 0; i < array36->size; i++) {
         array36->data[i]--;
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array36;
   array_t* array37 = func15(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop18 = 0;
   unsigned int loopLimit18 = (rand()%loopsFactor)/2 + 1;
   for(; loop18 < loopLimit18; loop18++) {
      for (int i = 0; i < array37->size; i++) {
         array37->data[i]++;
      }
   }
   array_t_param params1;
   params1.size = 2;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array36;
   params1.data[1] = array37;
   array_t* array38 = func12(&params1, loopsFactor);
   free(params1.data);
   for (int i = 0; i < array37->size; i++) {
      if (array37->data[i] == 15) { 
         return array37;
      }
   }
   array38->refC--;
   if(array38->refC == 0) {
      free(array38->data);
      free(array38);
   }
   array36->refC--;
   if(array36->refC == 0) {
      free(array36->data);
      free(array36);
   }
   return array37;
}

