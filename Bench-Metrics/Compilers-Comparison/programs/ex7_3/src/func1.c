#include "ex7_3.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array29;
   if (pCounter > 0) {
      array29 = vars->data[--pCounter];
      array29.refC++;
   } else {
      array29.size = 43;
      array29.refC = 1;
      array29.data = (unsigned int*)malloc(array29.size*sizeof(unsigned int));
      memset(array29.data, 0, array29.size*sizeof(unsigned int));
   }
   Array array30;
   if (pCounter > 0) {
      array30 = vars->data[--pCounter];
      array30.refC++;
   } else {
      array30.size = 750;
      array30.refC = 1;
      array30.data = (unsigned int*)malloc(array30.size*sizeof(unsigned int));
      memset(array30.data, 0, array30.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array30.size; i++) {
      array30.data[i]++;
   }
   unsigned int loop6 = 0;
   unsigned int loopLimit6 = (rand()%loopsFactor)/1 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      for (int i = 0; i < array29.size; i++) {
         array29.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array29;
   params0.data[1] = array30;
   Array array31 = func3(&params0, rng(), loopsFactor);
   free(params0.data);
   array30.refC--;
   if(array30.refC == 0) {
      free(array30.data);
   }
   array29.refC--;
   if(array29.refC == 0) {
      free(array29.data);
   }
   return array31;
}

