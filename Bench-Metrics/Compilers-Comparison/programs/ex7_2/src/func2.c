#include "ex7_2.h" 
Array func2(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array9;
   if (pCounter > 0) {
      array9 = vars->data[--pCounter];
      array9.refC++;
   } else {
      array9.size = 530;
      array9.refC = 1;
      array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
      memset(array9.data, 0, array9.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array9;
   Array array10 = func5(&params0, loopsFactor);
   free(params0.data);
   array10.refC--;
   if(array10.refC == 0) {
      free(array10.data);
   }
   return array9;
}

