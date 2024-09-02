#include "ex8_4.h" 
Array func3(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array68;
   if (pCounter > 0) {
      array68 = vars->data[--pCounter];
      array68.refC++;
   } else {
      array68.size = 669;
      array68.refC = 1;
      array68.data = (unsigned int*)malloc(array68.size*sizeof(unsigned int));
      memset(array68.data, 0, array68.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array68;
   Array array69 = func6(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop20 = 0;
   unsigned int loopLimit20 = (rand()%loopsFactor)/2 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      for (int i = 0; i < array68.size; i++) {
         array68.data[i]++;
      }
   }
   for (int i = 0; i < array69.size; i++) {
      if (array69.data[i] == 7) { 
         return array69;
      }
   }
   array68.refC--;
   if(array68.refC == 0) {
      free(array68.data);
   }
   return array69;
}

