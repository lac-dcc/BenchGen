#include "ex8_4.h" 
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array38 = func7(&params0, rng(), loopsFactor);
      free(params0.data);
      array38.refC--;
      if(array38.refC == 0) {
         free(array38.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array44 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      array44.refC--;
      if(array44.refC == 0) {
         free(array44.data);
      }
   }
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array49 = func9(&params0, rng(), loopsFactor);
   free(params0.data);
   return array49;
}

