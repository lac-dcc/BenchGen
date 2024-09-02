#include "ex8_1.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array7;
   if (pCounter > 0) {
      array7 = vars->data[--pCounter];
      array7.refC++;
   } else {
      array7.size = 67;
      array7.refC = 1;
      array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
      memset(array7.data, 0, array7.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array7;
   Array array8 = func3(&params0, loopsFactor);
   free(params0.data);
   array7.refC--;
   if(array7.refC == 0) {
      free(array7.data);
   }
   return array8;
}

