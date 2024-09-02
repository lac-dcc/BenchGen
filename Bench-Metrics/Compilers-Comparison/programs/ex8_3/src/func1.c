#include "ex8_3.h" 
Array func1(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array39;
   if (pCounter > 0) {
      array39 = vars->data[--pCounter];
      array39.refC++;
   } else {
      array39.size = 528;
      array39.refC = 1;
      array39.data = (unsigned int*)malloc(array39.size*sizeof(unsigned int));
      memset(array39.data, 0, array39.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array39;
   Array array40 = func3(&params0, loopsFactor);
   free(params0.data);
   if(PATH0 & 1) {
      Array array43;
      if (pCounter > 0) {
         array43 = vars->data[--pCounter];
         array43.refC++;
      } else {
         array43.size = 796;
         array43.refC = 1;
         array43.data = (unsigned int*)malloc(array43.size*sizeof(unsigned int));
         memset(array43.data, 0, array43.size*sizeof(unsigned int));
      }
      unsigned int loop13 = 0;
      unsigned int loopLimit13 = (rand()%loopsFactor)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         for (int i = 0; i < array43.size; i++) {
            array43.data[i]--;
         }
         for (int i = 0; i < array43.size; i++) {
            if (array43.data[i] == 45) { 
               return array43;
            }
         }
      }
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array39;
      params1.data[1] = array40;
      params1.data[2] = array43;
      Array array44 = func10(&params1, rng(), loopsFactor);
      free(params1.data);
      array44.refC--;
      if(array44.refC == 0) {
         free(array44.data);
      }
      array43.refC--;
      if(array43.refC == 0) {
         free(array43.data);
      }
   }
   else {
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array39;
      params1.data[1] = array40;
      Array array45 = func4(&params1, loopsFactor);
      free(params1.data);
      array45.refC--;
      if(array45.refC == 0) {
         free(array45.data);
      }
   }
   array39.refC--;
   if(array39.refC == 0) {
      free(array39.data);
   }
   return array40;
}

