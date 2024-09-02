#include "ex8_2.h" 
Array func1(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array20;
   if (pCounter > 0) {
      array20 = vars->data[--pCounter];
      array20.refC++;
   } else {
      array20.size = 434;
      array20.refC = 1;
      array20.data = (unsigned int*)malloc(array20.size*sizeof(unsigned int));
      memset(array20.data, 0, array20.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array20;
   Array array21 = func3(&params0, loopsFactor);
   free(params0.data);
   if(PATH0 & 1) {
      Array array24;
      if (pCounter > 0) {
         array24 = vars->data[--pCounter];
         array24.refC++;
      } else {
         array24.size = 754;
         array24.refC = 1;
         array24.data = (unsigned int*)malloc(array24.size*sizeof(unsigned int));
         memset(array24.data, 0, array24.size*sizeof(unsigned int));
      }
      unsigned int loop7 = 0;
      unsigned int loopLimit7 = (rand()%loopsFactor)/2 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         for (int i = 0; i < array21.size; i++) {
            array21.data[i]--;
         }
         for (int i = 0; i < array20.size; i++) {
            if (array20.data[i] == 60) { 
               return array20;
            }
         }
      }
      array24.refC--;
      if(array24.refC == 0) {
         free(array24.data);
      }
   }
   else {
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array20;
      params1.data[1] = array21;
      Array array25 = func4(&params1, loopsFactor);
      free(params1.data);
      array25.refC--;
      if(array25.refC == 0) {
         free(array25.data);
      }
   }
   array20.refC--;
   if(array20.refC == 0) {
      free(array20.data);
   }
   return array21;
}

