#include "ex8_4.h" 
Array func9(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array50;
   if (pCounter > 0) {
      array50 = vars->data[--pCounter];
      array50.refC++;
   } else {
      array50.size = 856;
      array50.refC = 1;
      array50.data = (unsigned int*)malloc(array50.size*sizeof(unsigned int));
      memset(array50.data, 0, array50.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array50;
   Array array51 = func15(&params0, loopsFactor);
   free(params0.data);
   if(PATH0 & 1) {
      Array array54;
      if (pCounter > 0) {
         array54 = vars->data[--pCounter];
         array54.refC++;
      } else {
         array54.size = 407;
         array54.refC = 1;
         array54.data = (unsigned int*)malloc(array54.size*sizeof(unsigned int));
         memset(array54.data, 0, array54.size*sizeof(unsigned int));
      }
      unsigned int loop16 = 0;
      unsigned int loopLimit16 = (rand()%loopsFactor)/2 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         for (int i = 0; i < array50.size; i++) {
            array50.data[i]--;
         }
         for (int i = 0; i < array51.size; i++) {
            if (array51.data[i] == 58) { 
               return array51;
            }
         }
      }
      array54.refC--;
      if(array54.refC == 0) {
         free(array54.data);
      }
   }
   else {
      ArrayParam params1;
      params1.size = 2;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array50;
      params1.data[1] = array51;
      Array array55 = func16(&params1, loopsFactor);
      free(params1.data);
      array55.refC--;
      if(array55.refC == 0) {
         free(array55.data);
      }
   }
   array50.refC--;
   if(array50.refC == 0) {
      free(array50.data);
   }
   return array51;
}

