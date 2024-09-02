#include "ex7_5.h" 
Array func9(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array21;
   if (pCounter > 0) {
      array21 = vars->data[--pCounter];
      array21.refC++;
   } else {
      array21.size = 980;
      array21.refC = 1;
      array21.data = (unsigned int*)malloc(array21.size*sizeof(unsigned int));
      memset(array21.data, 0, array21.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array21;
   Array array22 = func12(&params0, loopsFactor);
   free(params0.data);
   array22.refC--;
   if(array22.refC == 0) {
      free(array22.data);
   }
   return array21;
}

