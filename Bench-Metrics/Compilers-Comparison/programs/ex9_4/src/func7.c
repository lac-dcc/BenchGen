#include "ex9_4.h" 
Array func7(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array43;
   if (pCounter > 0) {
      array43 = vars->data[--pCounter];
      array43.refC++;
   } else {
      array43.size = 228;
      array43.refC = 1;
      array43.data = (unsigned int*)malloc(array43.size*sizeof(unsigned int));
      memset(array43.data, 0, array43.size*sizeof(unsigned int));
   }
   unsigned int loop19 = 0;
   unsigned int loopLimit19 = (rand()%loopsFactor)/2 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      for (int i = 0; i < array43.size; i++) {
         array43.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array43;
   Array array44 = func13(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop20 = 0;
   unsigned int loopLimit20 = (rand()%loopsFactor)/2 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      for (int i = 0; i < array43.size; i++) {
         array43.data[i]++;
      }
   }
   ArrayParam params1;
   params1.size = 2;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array43;
   params1.data[1] = array44;
   Array array45 = func10(&params1, loopsFactor);
   free(params1.data);
   for (int i = 0; i < array43.size; i++) {
      if (array43.data[i] == 14) { 
         return array43;
      }
   }
   array44.refC--;
   if(array44.refC == 0) {
      free(array44.data);
   }
   array43.refC--;
   if(array43.refC == 0) {
      free(array43.data);
   }
   return array45;
}

