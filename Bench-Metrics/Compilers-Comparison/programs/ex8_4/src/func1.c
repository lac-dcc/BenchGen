#include "ex8_4.h" 
Array func1(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array66;
   if (pCounter > 0) {
      array66 = vars->data[--pCounter];
      array66.refC++;
   } else {
      array66.size = 590;
      array66.refC = 1;
      array66.data = (unsigned int*)malloc(array66.size*sizeof(unsigned int));
      memset(array66.data, 0, array66.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array66;
   Array array67 = func3(&params0, loopsFactor);
   free(params0.data);
   if(PATH0 & 1) {
      Array array70;
      if (pCounter > 0) {
         array70 = vars->data[--pCounter];
         array70.refC++;
      } else {
         array70.size = 804;
         array70.refC = 1;
         array70.data = (unsigned int*)malloc(array70.size*sizeof(unsigned int));
         memset(array70.data, 0, array70.size*sizeof(unsigned int));
      }
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (rand()%loopsFactor)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         for (int i = 0; i < array70.size; i++) {
            array70.data[i]--;
         }
         for (int i = 0; i < array70.size; i++) {
            if (array70.data[i] == 22) { 
               return array70;
            }
         }
      }
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array66;
      params1.data[1] = array67;
      params1.data[2] = array70;
      Array array71 = func10(&params1, rng(), loopsFactor);
      free(params1.data);
      array71.refC--;
      if(array71.refC == 0) {
         free(array71.data);
      }
      array70.refC--;
      if(array70.refC == 0) {
         free(array70.data);
      }
   }
   else {
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array66;
      params1.data[1] = array67;
      Array array72 = func4(&params1, rng(), loopsFactor);
      free(params1.data);
      array72.refC--;
      if(array72.refC == 0) {
         free(array72.data);
      }
   }
   array67.refC--;
   if(array67.refC == 0) {
      free(array67.data);
   }
   return array66;
}

