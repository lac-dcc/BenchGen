#include "ex8_3.h" 
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array22 = func7(&params0, loopsFactor);
      free(params0.data);
      array22.refC--;
      if(array22.refC == 0) {
         free(array22.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array24 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      array24.refC--;
      if(array24.refC == 0) {
         free(array24.data);
      }
   }
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array28 = func9(&params0, loopsFactor);
   free(params0.data);
   return array28;
}

