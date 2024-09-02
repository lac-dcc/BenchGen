#include "ex8_2.h" 
Array func3(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array22;
   if (pCounter > 0) {
      array22 = vars->data[--pCounter];
      array22.refC++;
   } else {
      array22.size = 808;
      array22.refC = 1;
      array22.data = (unsigned int*)malloc(array22.size*sizeof(unsigned int));
      memset(array22.data, 0, array22.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array22;
   Array array23 = func6(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop6 = 0;
   unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      for (int i = 0; i < array22.size; i++) {
         array22.data[i]++;
      }
   }
   for (int i = 0; i < array22.size; i++) {
      if (array22.data[i] == 3) { 
         return array22;
      }
   }
   array22.refC--;
   if(array22.refC == 0) {
      free(array22.data);
   }
   return array23;
}

