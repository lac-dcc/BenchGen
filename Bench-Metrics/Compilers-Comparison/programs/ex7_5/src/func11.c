#include "ex7_5.h" 
Array func11(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      unsigned int loop10 = 0;
      unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
      for(; loop10 < loopLimit10; loop10++) {
      }
   }
   else {
      Array array44;
      if (pCounter > 0) {
         array44 = vars->data[--pCounter];
         array44.refC++;
      } else {
         array44.size = 492;
         array44.refC = 1;
         array44.data = (unsigned int*)malloc(array44.size*sizeof(unsigned int));
         memset(array44.data, 0, array44.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array44;
      Array array45 = func13(&params0, loopsFactor);
      free(params0.data);
      array45.refC--;
      if(array45.refC == 0) {
         free(array45.data);
      }
      array44.refC--;
      if(array44.refC == 0) {
         free(array44.data);
      }
   }
   Array array46;
   if (pCounter > 0) {
      array46 = vars->data[--pCounter];
      array46.refC++;
   } else {
      array46.size = 301;
      array46.refC = 1;
      array46.data = (unsigned int*)malloc(array46.size*sizeof(unsigned int));
      memset(array46.data, 0, array46.size*sizeof(unsigned int));
   }
   Array array47;
   if (pCounter > 0) {
      array47 = vars->data[--pCounter];
      array47.refC++;
   } else {
      array47.size = 280;
      array47.refC = 1;
      array47.data = (unsigned int*)malloc(array47.size*sizeof(unsigned int));
      memset(array47.data, 0, array47.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array46.size; i++) {
      array46.data[i]++;
   }
   unsigned int loop11 = 0;
   unsigned int loopLimit11 = (rand()%loopsFactor)/2 + 1;
   for(; loop11 < loopLimit11; loop11++) {
      for (int i = 0; i < array47.size; i++) {
         array47.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array46;
   params0.data[1] = array47;
   Array array48 = func14(&params0, loopsFactor);
   free(params0.data);
   array48.refC--;
   if(array48.refC == 0) {
      free(array48.data);
   }
   array46.refC--;
   if(array46.refC == 0) {
      free(array46.data);
   }
   return array47;
}

