#include "ex8_5.h" 
Array func18(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array46 = func19(&params0, loopsFactor);
      free(params0.data);
      array46.refC--;
      if(array46.refC == 0) {
         free(array46.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array48 = func20(&params0, rng(), loopsFactor);
      free(params0.data);
      array48.refC--;
      if(array48.refC == 0) {
         free(array48.data);
      }
   }
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array52 = func21(&params0, loopsFactor);
   free(params0.data);
   return array52;
}

