#include "ex9_4.h" 
Array func5(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array17;
   if (pCounter > 0) {
      array17 = vars->data[--pCounter];
      array17.refC++;
   } else {
      array17.size = 336;
      array17.refC = 1;
      array17.data = (unsigned int*)malloc(array17.size*sizeof(unsigned int));
      memset(array17.data, 0, array17.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array17.size; i++) {
      array17.data[i]++;
   }
   for (int i = 0; i < array17.size; i++) {
      if (array17.data[i] == 29) { 
         return array17;
      }
   }
   for (int i = 0; i < array17.size; i++) {
      array17.data[i]--;
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array17;
   Array array18 = func13(&params0, rng(), loopsFactor);
   free(params0.data);
   array18.refC--;
   if(array18.refC == 0) {
      free(array18.data);
   }
   return array17;
}

