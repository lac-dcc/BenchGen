#include "ex8_4.h" 
Array func10(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array4 = func11(&params0, loopsFactor);
      free(params0.data);
      array4.refC--;
      if(array4.refC == 0) {
         free(array4.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array6 = func12(&params0, rng(), loopsFactor);
      free(params0.data);
      array6.refC--;
      if(array6.refC == 0) {
         free(array6.data);
      }
   }
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array11 = func13(&params0, loopsFactor);
   free(params0.data);
   return array11;
}

