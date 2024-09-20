#include "myBench.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array7;
   if (pCounter > 0) {
      array7 = vars->data[--pCounter];
      array7.refC++;
   } else {
      array7.size = 211;
      array7.refC = 1;
      array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
      memset(array7.data, 0, array7.size*sizeof(unsigned int));
   }
   Array array8;
   if (pCounter > 0) {
      array8 = vars->data[--pCounter];
      array8.refC++;
   } else {
      array8.size = 368;
      array8.refC = 1;
      array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
      memset(array8.data, 0, array8.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array8.size; i++) {
      array8.data[i]++;
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/1 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      for (int i = 0; i < array8.size; i++) {
         array8.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array7;
   params0.data[1] = array8;
   Array array9 = func3(&params0, loopsFactor);
   free(params0.data);
   array8.refC--;
   if(array8.refC == 0) {
      free(array8.data);
   }
   array7.refC--;
   if(array7.refC == 0) {
      free(array7.data);
   }
   return array9;
}

