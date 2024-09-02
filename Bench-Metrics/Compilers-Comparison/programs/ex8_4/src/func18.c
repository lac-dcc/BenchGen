#include "ex8_4.h" 
Array func18(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array27 = func19(&params0, loopsFactor);
      free(params0.data);
      array27.refC--;
      if(array27.refC == 0) {
         free(array27.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array29 = func20(&params0, loopsFactor);
      free(params0.data);
      array29.refC--;
      if(array29.refC == 0) {
         free(array29.data);
      }
   }
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array31 = func21(&params0, loopsFactor);
   free(params0.data);
   return array31;
}

