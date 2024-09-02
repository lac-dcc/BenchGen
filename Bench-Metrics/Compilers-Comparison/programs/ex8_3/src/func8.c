#include "ex8_3.h" 
Array func8(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array array25;
      if (pCounter > 0) {
         array25 = vars->data[--pCounter];
         array25.refC++;
      } else {
         array25.size = 676;
         array25.refC = 1;
         array25.data = (unsigned int*)malloc(array25.size*sizeof(unsigned int));
         memset(array25.data, 0, array25.size*sizeof(unsigned int));
      }
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         for (int i = 0; i < array25.size; i++) {
            array25.data[i]--;
         }
         for (int i = 0; i < array25.size; i++) {
            if (array25.data[i] == 12) { 
               return array25;
            }
         }
      }
      array25.refC--;
      if(array25.refC == 0) {
         free(array25.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array26 = func14(&params0, loopsFactor);
      free(params0.data);
      array26.refC--;
      if(array26.refC == 0) {
         free(array26.data);
      }
   }
   Array array27;
   if (pCounter > 0) {
      array27 = vars->data[--pCounter];
      array27.refC++;
   } else {
      array27.size = 94;
      array27.refC = 1;
      array27.data = (unsigned int*)malloc(array27.size*sizeof(unsigned int));
      memset(array27.data, 0, array27.size*sizeof(unsigned int));
   }
   return array27;
}

