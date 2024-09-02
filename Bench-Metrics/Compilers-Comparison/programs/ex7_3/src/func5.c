#include "ex7_3.h" 
Array func5(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      unsigned int loop4 = 0;
      unsigned int loopLimit4 = (rand()%loopsFactor)/1 + 1;
      for(; loop4 < loopLimit4; loop4++) {
      }
   }
   else {
      Array array22;
      if (pCounter > 0) {
         array22 = vars->data[--pCounter];
         array22.refC++;
      } else {
         array22.size = 925;
         array22.refC = 1;
         array22.data = (unsigned int*)malloc(array22.size*sizeof(unsigned int));
         memset(array22.data, 0, array22.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array22;
      Array array23 = func7(&params0, loopsFactor);
      free(params0.data);
      array23.refC--;
      if(array23.refC == 0) {
         free(array23.data);
      }
      array22.refC--;
      if(array22.refC == 0) {
         free(array22.data);
      }
   }
   Array array24;
   if (pCounter > 0) {
      array24 = vars->data[--pCounter];
      array24.refC++;
   } else {
      array24.size = 336;
      array24.refC = 1;
      array24.data = (unsigned int*)malloc(array24.size*sizeof(unsigned int));
      memset(array24.data, 0, array24.size*sizeof(unsigned int));
   }
   Array array25;
   if (pCounter > 0) {
      array25 = vars->data[--pCounter];
      array25.refC++;
   } else {
      array25.size = 505;
      array25.refC = 1;
      array25.data = (unsigned int*)malloc(array25.size*sizeof(unsigned int));
      memset(array25.data, 0, array25.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array24.size; i++) {
      array24.data[i]++;
   }
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/1 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      for (int i = 0; i < array25.size; i++) {
         array25.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array24;
   params0.data[1] = array25;
   Array array26 = func8(&params0, loopsFactor);
   free(params0.data);
   array26.refC--;
   if(array26.refC == 0) {
      free(array26.data);
   }
   array25.refC--;
   if(array25.refC == 0) {
      free(array25.data);
   }
   return array24;
}

