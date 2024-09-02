#include "ex7_5.h" 
Array func7(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array41;
   if (pCounter > 0) {
      array41 = vars->data[--pCounter];
      array41.refC++;
   } else {
      array41.size = 570;
      array41.refC = 1;
      array41.data = (unsigned int*)malloc(array41.size*sizeof(unsigned int));
      memset(array41.data, 0, array41.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array41.size; i++) {
      if (array41.data[i] == 78) { 
         return array41;
      }
   }
   Array array42;
   if (pCounter > 0) {
      array42 = vars->data[--pCounter];
      array42.refC++;
   } else {
      array42.size = 467;
      array42.refC = 1;
      array42.data = (unsigned int*)malloc(array42.size*sizeof(unsigned int));
      memset(array42.data, 0, array42.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array41;
   params0.data[1] = array42;
   Array array43 = func11(&params0, rng(), loopsFactor);
   free(params0.data);
   array42.refC--;
   if(array42.refC == 0) {
      free(array42.data);
   }
   array41.refC--;
   if(array41.refC == 0) {
      free(array41.data);
   }
   return array43;
}

