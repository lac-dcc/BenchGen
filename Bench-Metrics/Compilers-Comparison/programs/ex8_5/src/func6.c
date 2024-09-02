#include "ex8_5.h" 
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array64 = func7(&params0, rng(), loopsFactor);
      free(params0.data);
      array64.refC--;
      if(array64.refC == 0) {
         free(array64.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array73 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      array73.refC--;
      if(array73.refC == 0) {
         free(array73.data);
      }
   }
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array78 = func9(&params0, rng(), loopsFactor);
   free(params0.data);
   return array78;
}

