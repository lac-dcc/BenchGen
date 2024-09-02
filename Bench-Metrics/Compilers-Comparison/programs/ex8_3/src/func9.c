#include "ex8_3.h" 
Array func9(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array29;
   if (pCounter > 0) {
      array29 = vars->data[--pCounter];
      array29.refC++;
   } else {
      array29.size = 467;
      array29.refC = 1;
      array29.data = (unsigned int*)malloc(array29.size*sizeof(unsigned int));
      memset(array29.data, 0, array29.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array29;
   Array array30 = func15(&params0, loopsFactor);
   free(params0.data);
   array30.refC--;
   if(array30.refC == 0) {
      free(array30.data);
   }
   return array29;
}

