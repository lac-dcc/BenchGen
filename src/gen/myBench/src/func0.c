#include "myBench.h" 
Array func0(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      unsigned int loop0 = 0;
      unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
      for(; loop0 < loopLimit0; loop0++) {
      }
   }
   else {
      Array array2;
      if (pCounter > 0) {
         array2 = vars->data[--pCounter];
         array2.refC++;
      } else {
         array2.size = 492;
         array2.refC = 1;
         array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
         memset(array2.data, 0, array2.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array2;
      Array array3 = func2(&params0, loopsFactor);
      free(params0.data);
      array3.refC--;
      if(array3.refC == 0) {
         free(array3.data);
      }
      array2.refC--;
      if(array2.refC == 0) {
         free(array2.data);
      }
   }
   Array array5;
   if (pCounter > 0) {
      array5 = vars->data[--pCounter];
      array5.refC++;
   } else {
      array5.size = 763;
      array5.refC = 1;
      array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
      memset(array5.data, 0, array5.size*sizeof(unsigned int));
   }
   return array5;
}

