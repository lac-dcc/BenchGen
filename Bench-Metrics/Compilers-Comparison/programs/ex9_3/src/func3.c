#include "ex9_3.h" 
Array func3(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array21;
   if (pCounter > 0) {
      array21 = vars->data[--pCounter];
      array21.refC++;
   } else {
      array21.size = 651;
      array21.refC = 1;
      array21.data = (unsigned int*)malloc(array21.size*sizeof(unsigned int));
      memset(array21.data, 0, array21.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array21.size; i++) {
      array21.data[i]++;
   }
   for (int i = 0; i < array21.size; i++) {
      if (array21.data[i] == 32) { 
         return array21;
      }
   }
   for (int i = 0; i < array21.size; i++) {
      array21.data[i]--;
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array21;
   Array array22 = func8(&params0, rng(), loopsFactor);
   free(params0.data);
   array21.refC--;
   if(array21.refC == 0) {
      free(array21.data);
   }
   return array22;
}

