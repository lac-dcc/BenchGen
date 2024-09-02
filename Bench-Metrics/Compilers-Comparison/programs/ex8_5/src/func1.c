#include "ex8_5.h" 
Array func1(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array97;
   if (pCounter > 0) {
      array97 = vars->data[--pCounter];
      array97.refC++;
   } else {
      array97.size = 206;
      array97.refC = 1;
      array97.data = (unsigned int*)malloc(array97.size*sizeof(unsigned int));
      memset(array97.data, 0, array97.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array97;
   Array array98 = func3(&params0, loopsFactor);
   free(params0.data);
   if(PATH0 & 1) {
      Array array101;
      if (pCounter > 0) {
         array101 = vars->data[--pCounter];
         array101.refC++;
      } else {
         array101.size = 940;
         array101.refC = 1;
         array101.data = (unsigned int*)malloc(array101.size*sizeof(unsigned int));
         memset(array101.data, 0, array101.size*sizeof(unsigned int));
      }
      unsigned int loop30 = 0;
      unsigned int loopLimit30 = (rand()%loopsFactor)/2 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         for (int i = 0; i < array101.size; i++) {
            array101.data[i]--;
         }
         for (int i = 0; i < array101.size; i++) {
            if (array101.data[i] == 28) { 
               return array101;
            }
         }
      }
      ArrayParam params1;
      params1.size = 3;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array97;
      params1.data[1] = array98;
      params1.data[2] = array101;
      Array array102 = func10(&params1, rng(), loopsFactor);
      free(params1.data);
      array102.refC--;
      if(array102.refC == 0) {
         free(array102.data);
      }
      array101.refC--;
      if(array101.refC == 0) {
         free(array101.data);
      }
   }
   else {
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array97;
      params1.data[1] = array98;
      Array array103 = func4(&params1, rng(), loopsFactor);
      free(params1.data);
      array103.refC--;
      if(array103.refC == 0) {
         free(array103.data);
      }
   }
   array98.refC--;
   if(array98.refC == 0) {
      free(array98.data);
   }
   return array97;
}

