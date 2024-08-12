#include "ex4.h" 
Array func7(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array6 = func11(&params0, rng(), loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   if (array6.size > 0) {
      free(array6.data);
      array6.size = 0;
   }
   return array6;
}

