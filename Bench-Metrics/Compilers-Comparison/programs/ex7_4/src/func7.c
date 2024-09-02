#include "ex7_4.h" 
Array func7(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array19;
   if (pCounter > 0) {
      array19 = vars->data[--pCounter];
      array19.refC++;
   } else {
      array19.size = 315;
      array19.refC = 1;
      array19.data = (unsigned int*)malloc(array19.size*sizeof(unsigned int));
      memset(array19.data, 0, array19.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array19;
   Array array20 = func11(&params0, loopsFactor);
   free(params0.data);
   array19.refC--;
   if(array19.refC == 0) {
      free(array19.data);
   }
   return array20;
}

