#include "ex9_5.h" 
Array func10(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array46;
   if (pCounter > 0) {
      array46 = vars->data[--pCounter];
      array46.refC++;
   } else {
      array46.size = 914;
      array46.refC = 1;
      array46.data = (unsigned int*)malloc(array46.size*sizeof(unsigned int));
      memset(array46.data, 0, array46.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array46.size; i++) {
      array46.data[i]++;
   }
   for (int i = 0; i < array46.size; i++) {
      if (array46.data[i] == 43) { 
         return array46;
      }
   }
   for (int i = 0; i < array46.size; i++) {
      array46.data[i]--;
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array46;
   Array array47 = func15(&params0, rng(), loopsFactor);
   free(params0.data);
   array46.refC--;
   if(array46.refC == 0) {
      free(array46.data);
   }
   return array47;
}

