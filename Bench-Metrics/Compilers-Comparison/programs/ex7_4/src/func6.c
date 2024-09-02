#include "ex7_4.h" 
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      unsigned int loop1 = 0;
      unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
      }
   }
   else {
      Array array5;
      if (pCounter > 0) {
         array5 = vars->data[--pCounter];
         array5.refC++;
      } else {
         array5.size = 926;
         array5.refC = 1;
         array5.data = (unsigned int*)malloc(array5.size*sizeof(unsigned int));
         memset(array5.data, 0, array5.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array5;
      Array array6 = func9(&params0, loopsFactor);
      free(params0.data);
      array6.refC--;
      if(array6.refC == 0) {
         free(array6.data);
      }
      array5.refC--;
      if(array5.refC == 0) {
         free(array5.data);
      }
   }
   Array array8;
   if (pCounter > 0) {
      array8 = vars->data[--pCounter];
      array8.refC++;
   } else {
      array8.size = 567;
      array8.refC = 1;
      array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
      memset(array8.data, 0, array8.size*sizeof(unsigned int));
   }
   Array array9;
   if (pCounter > 0) {
      array9 = vars->data[--pCounter];
      array9.refC++;
   } else {
      array9.size = 429;
      array9.refC = 1;
      array9.data = (unsigned int*)malloc(array9.size*sizeof(unsigned int));
      memset(array9.data, 0, array9.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array8.size; i++) {
      array8.data[i]++;
   }
   unsigned int loop2 = 0;
   unsigned int loopLimit2 = (rand()%loopsFactor)/2 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      for (int i = 0; i < array8.size; i++) {
         array8.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array8;
   params0.data[1] = array9;
   Array array10 = func10(&params0, loopsFactor);
   free(params0.data);
   array10.refC--;
   if(array10.refC == 0) {
      free(array10.data);
   }
   array9.refC--;
   if(array9.refC == 0) {
      free(array9.data);
   }
   return array8;
}

