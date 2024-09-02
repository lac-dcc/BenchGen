#include "ex7_3.h" 
Array func2(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array19;
   if (pCounter > 0) {
      array19 = vars->data[--pCounter];
      array19.refC++;
   } else {
      array19.size = 980;
      array19.refC = 1;
      array19.data = (unsigned int*)malloc(array19.size*sizeof(unsigned int));
      memset(array19.data, 0, array19.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array19.size; i++) {
      if (array19.data[i] == 73) { 
         return array19;
      }
   }
   Array array20;
   if (pCounter > 0) {
      array20 = vars->data[--pCounter];
      array20.refC++;
   } else {
      array20.size = 862;
      array20.refC = 1;
      array20.data = (unsigned int*)malloc(array20.size*sizeof(unsigned int));
      memset(array20.data, 0, array20.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array19;
   params0.data[1] = array20;
   Array array21 = func5(&params0, rng(), loopsFactor);
   free(params0.data);
   array21.refC--;
   if(array21.refC == 0) {
      free(array21.data);
   }
   array20.refC--;
   if(array20.refC == 0) {
      free(array20.data);
   }
   return array19;
}

