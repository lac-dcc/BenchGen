#include "ex8_5.h" 
Array func13(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array25;
   if (pCounter > 0) {
      array25 = vars->data[--pCounter];
      array25.refC++;
   } else {
      array25.size = 739;
      array25.refC = 1;
      array25.data = (unsigned int*)malloc(array25.size*sizeof(unsigned int));
      memset(array25.data, 0, array25.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array25;
   Array array26 = func17(&params0, loopsFactor);
   free(params0.data);
   if(PATH0 & 1) {
      Array array29;
      if (pCounter > 0) {
         array29 = vars->data[--pCounter];
         array29.refC++;
      } else {
         array29.size = 97;
         array29.refC = 1;
         array29.data = (unsigned int*)malloc(array29.size*sizeof(unsigned int));
         memset(array29.data, 0, array29.size*sizeof(unsigned int));
      }
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/3 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         for (int i = 0; i < array29.size; i++) {
            array29.data[i]--;
         }
         for (int i = 0; i < array25.size; i++) {
            if (array25.data[i] == 92) { 
               return array25;
            }
         }
      }
      array29.refC--;
      if(array29.refC == 0) {
         free(array29.data);
      }
   }
   else {
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array25;
      params1.data[1] = array26;
      Array array30 = func22(&params1, loopsFactor);
      free(params1.data);
      array30.refC--;
      if(array30.refC == 0) {
         free(array30.data);
      }
   }
   array25.refC--;
   if(array25.refC == 0) {
      free(array25.data);
   }
   return array26;
}

