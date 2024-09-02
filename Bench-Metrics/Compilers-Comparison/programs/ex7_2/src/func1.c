#include "ex7_2.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array14;
   if (pCounter > 0) {
      array14 = vars->data[--pCounter];
      array14.refC++;
   } else {
      array14.size = 42;
      array14.refC = 1;
      array14.data = (unsigned int*)malloc(array14.size*sizeof(unsigned int));
      memset(array14.data, 0, array14.size*sizeof(unsigned int));
   }
   Array array15;
   if (pCounter > 0) {
      array15 = vars->data[--pCounter];
      array15.refC++;
   } else {
      array15.size = 229;
      array15.refC = 1;
      array15.data = (unsigned int*)malloc(array15.size*sizeof(unsigned int));
      memset(array15.data, 0, array15.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array15.size; i++) {
      array15.data[i]++;
   }
   unsigned int loop2 = 0;
   unsigned int loopLimit2 = (rand()%loopsFactor)/1 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      for (int i = 0; i < array15.size; i++) {
         array15.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array14;
   params0.data[1] = array15;
   Array array16 = func3(&params0, loopsFactor);
   free(params0.data);
   array15.refC--;
   if(array15.refC == 0) {
      free(array15.data);
   }
   array14.refC--;
   if(array14.refC == 0) {
      free(array14.data);
   }
   return array16;
}

