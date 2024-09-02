#include "ex8_5.h" 
Array func21(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array53;
   if (pCounter > 0) {
      array53 = vars->data[--pCounter];
      array53.refC++;
   } else {
      array53.size = 275;
      array53.refC = 1;
      array53.data = (unsigned int*)malloc(array53.size*sizeof(unsigned int));
      memset(array53.data, 0, array53.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array53;
   Array array54 = func23(&params0, loopsFactor);
   free(params0.data);
   array53.refC--;
   if(array53.refC == 0) {
      free(array53.data);
   }
   return array54;
}

