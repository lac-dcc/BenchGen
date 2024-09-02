#include "ex8_5.h" 
Array func24(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array15 = func25(&params0, loopsFactor);
      free(params0.data);
      array15.refC--;
      if(array15.refC == 0) {
         free(array15.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array17 = func26(&params0, loopsFactor);
      free(params0.data);
      array17.refC--;
      if(array17.refC == 0) {
         free(array17.data);
      }
   }
   ArrayParam params0;
   params0.size = 0;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   Array array19 = func27(&params0, loopsFactor);
   free(params0.data);
   return array19;
}

