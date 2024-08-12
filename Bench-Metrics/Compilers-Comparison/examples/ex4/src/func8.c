#include "ex4.h" 
Array func8(ArrayParam* vars, int loopsFactor) {
   int pCounter = vars->size;
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array5 = func14(&params0, loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   if (array5.size > 0) {
      free(array5.data);
      array5.size = 0;
   }
   return array5;
}

