#include "P2_A.h" 
array_t* func0(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array23;
   if (pCounter > 0) {
      array23 = vars->data[--pCounter];
      array23->refC++;
   } else {
      array23 = (array_t*)malloc(sizeof(array_t));
      array23->size = 94;
      array23->refC = 1;
      array23->data = (unsigned int*)malloc(array23->size*sizeof(unsigned int));
      memset(array23->data, 0, array23->size*sizeof(unsigned int));
   }
   unsigned int loop20 = 0;
   unsigned int loopLimit20 = (rand()%loopsFactor)/3 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      for (int i = 0; i < array23->size; i++) {
         array23->data[i]--;
      }
   }
   for (int i = 0; i < array23->size; i++) {
      array23->data[i]++;
   }
   for (int i = 0; i < array23->size; i++) {
      if (array23->data[i] == 34) { 
         return array23;
      }
   }
   for (int i = 0; i < array23->size; i++) {
      array23->data[i]--;
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array23;
   array_t* array24 = func5(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop21 = 0;
   unsigned int loopLimit21 = (rand()%loopsFactor)/3 + 1;
   for(; loop21 < loopLimit21; loop21++) {
      for (int i = 0; i < array24->size; i++) {
         array24->data[i]--;
      }
   }
   for (int i = 0; i < array23->size; i++) {
      array23->data[i]--;
   }
   array_t_param params1;
   params1.size = 2;
   params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
   params1.data[0] = array23;
   params1.data[1] = array24;
   array_t* array25 = func1(&params1, loopsFactor);
   free(params1.data);
   array24->refC--;
   if(array24->refC == 0) {
      free(array24->data);
      free(array24);
   }
   array23->refC--;
   if(array23->refC == 0) {
      free(array23->data);
      free(array23);
   }
   return array25;
}

