#include "ex7_4.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array60;
   if (pCounter > 0) {
      array60 = vars->data[--pCounter];
      array60.refC++;
   } else {
      array60.size = 715;
      array60.refC = 1;
      array60.data = (unsigned int*)malloc(array60.size*sizeof(unsigned int));
      memset(array60.data, 0, array60.size*sizeof(unsigned int));
   }
   Array array61;
   if (pCounter > 0) {
      array61 = vars->data[--pCounter];
      array61.refC++;
   } else {
      array61.size = 340;
      array61.refC = 1;
      array61.data = (unsigned int*)malloc(array61.size*sizeof(unsigned int));
      memset(array61.data, 0, array61.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array61.size; i++) {
      array61.data[i]++;
   }
   unsigned int loop14 = 0;
   unsigned int loopLimit14 = (rand()%loopsFactor)/1 + 1;
   for(; loop14 < loopLimit14; loop14++) {
      for (int i = 0; i < array60.size; i++) {
         array60.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array60;
   params0.data[1] = array61;
   Array array62 = func3(&params0, rng(), loopsFactor);
   free(params0.data);
   array62.refC--;
   if(array62.refC == 0) {
      free(array62.data);
   }
   array60.refC--;
   if(array60.refC == 0) {
      free(array60.data);
   }
   return array61;
}

