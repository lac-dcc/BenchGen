#include "ex8_5.h" 
Array func8(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array array74;
      if (pCounter > 0) {
         array74 = vars->data[--pCounter];
         array74.refC++;
      } else {
         array74.size = 605;
         array74.refC = 1;
         array74.data = (unsigned int*)malloc(array74.size*sizeof(unsigned int));
         memset(array74.data, 0, array74.size*sizeof(unsigned int));
      }
      unsigned int loop23 = 0;
      unsigned int loopLimit23 = (rand()%loopsFactor)/2 + 1;
      for(; loop23 < loopLimit23; loop23++) {
         for (int i = 0; i < array74.size; i++) {
            array74.data[i]--;
         }
         for (int i = 0; i < array74.size; i++) {
            if (array74.data[i] == 30) { 
               return array74;
            }
         }
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array74;
      Array array75 = func18(&params0, rng(), loopsFactor);
      free(params0.data);
      array75.refC--;
      if(array75.refC == 0) {
         free(array75.data);
      }
      array74.refC--;
      if(array74.refC == 0) {
         free(array74.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array76 = func14(&params0, rng(), loopsFactor);
      free(params0.data);
      array76.refC--;
      if(array76.refC == 0) {
         free(array76.data);
      }
   }
   Array array77;
   if (pCounter > 0) {
      array77 = vars->data[--pCounter];
      array77.refC++;
   } else {
      array77.size = 444;
      array77.refC = 1;
      array77.data = (unsigned int*)malloc(array77.size*sizeof(unsigned int));
      memset(array77.data, 0, array77.size*sizeof(unsigned int));
   }
   return array77;
}

