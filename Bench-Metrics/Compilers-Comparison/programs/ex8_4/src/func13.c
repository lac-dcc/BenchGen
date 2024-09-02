#include "ex8_4.h" 
Array func13(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array12;
   if (pCounter > 0) {
      array12 = vars->data[--pCounter];
      array12.refC++;
   } else {
      array12.size = 784;
      array12.refC = 1;
      array12.data = (unsigned int*)malloc(array12.size*sizeof(unsigned int));
      memset(array12.data, 0, array12.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array12;
   Array array13 = func17(&params0, loopsFactor);
   free(params0.data);
   array13.refC--;
   if(array13.refC == 0) {
      free(array13.data);
   }
   return array12;
}

