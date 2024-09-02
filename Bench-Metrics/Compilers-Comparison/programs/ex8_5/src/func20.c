#include "ex8_5.h" 
Array func20(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array array49;
      if (pCounter > 0) {
         array49 = vars->data[--pCounter];
         array49.refC++;
      } else {
         array49.size = 987;
         array49.refC = 1;
         array49.data = (unsigned int*)malloc(array49.size*sizeof(unsigned int));
         memset(array49.data, 0, array49.size*sizeof(unsigned int));
      }
      unsigned int loop16 = 0;
      unsigned int loopLimit16 = (rand()%loopsFactor)/3 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         for (int i = 0; i < array49.size; i++) {
            array49.data[i]--;
         }
         for (int i = 0; i < array49.size; i++) {
            if (array49.data[i] == 91) { 
               return array49;
            }
         }
      }
      array49.refC--;
      if(array49.refC == 0) {
         free(array49.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array50 = func22(&params0, loopsFactor);
      free(params0.data);
      array50.refC--;
      if(array50.refC == 0) {
         free(array50.data);
      }
   }
   Array array51;
   if (pCounter > 0) {
      array51 = vars->data[--pCounter];
      array51.refC++;
   } else {
      array51.size = 859;
      array51.refC = 1;
      array51.data = (unsigned int*)malloc(array51.size*sizeof(unsigned int));
      memset(array51.data, 0, array51.size*sizeof(unsigned int));
   }
   return array51;
}

