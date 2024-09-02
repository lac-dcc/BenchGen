#include "ex8_2.h" 
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array11 = func7(&params0, loopsFactor);
      free(params0.data);
      array11.refC--;
      if(array11.refC == 0) {
         free(array11.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array13 = func8(&params0, loopsFactor);
      free(params0.data);
      array13.refC--;
      if(array13.refC == 0) {
         free(array13.data);
      }
   }
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array15 = func9(&params0, loopsFactor);
   free(params0.data);
   return array15;
}

