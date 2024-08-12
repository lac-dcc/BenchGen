#include "ex5.h" 
Array func5(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array4 = func6(&params0, rng(), loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   if (array4.size > 0) {
      free(array4.data);
      array4.size = 0;
   }
   return array4;
}

