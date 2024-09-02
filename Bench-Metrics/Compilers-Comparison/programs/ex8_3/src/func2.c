#include "ex8_3.h" 
Array func2(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array33;
   if (pCounter > 0) {
      array33 = vars->data[--pCounter];
      array33.refC++;
   } else {
      array33.size = 440;
      array33.refC = 1;
      array33.data = (unsigned int*)malloc(array33.size*sizeof(unsigned int));
      memset(array33.data, 0, array33.size*sizeof(unsigned int));
   }
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      if(PATH0 & 1) {
         Array array34;
         if (pCounter > 0) {
            array34 = vars->data[--pCounter];
            array34.refC++;
         } else {
            array34.size = 729;
            array34.refC = 1;
            array34.data = (unsigned int*)malloc(array34.size*sizeof(unsigned int));
            memset(array34.data, 0, array34.size*sizeof(unsigned int));
         }
         unsigned int loop11 = 0;
         unsigned int loopLimit11 = (rand()%loopsFactor)/3 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            for (int i = 0; i < array34.size; i++) {
               array34.data[i]--;
            }
            for (int i = 0; i < array34.size; i++) {
               if (array34.data[i] == 97) { 
                  return array34;
               }
            }
         }
         array34.refC--;
         if(array34.refC == 0) {
            free(array34.data);
         }
      }
      else {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array33;
         Array array35 = func14(&params0, loopsFactor);
         free(params0.data);
         array35.refC--;
         if(array35.refC == 0) {
            free(array35.data);
         }
      }
      Array array36;
      if (pCounter > 0) {
         array36 = vars->data[--pCounter];
         array36.refC++;
      } else {
         array36.size = 675;
         array36.refC = 1;
         array36.data = (unsigned int*)malloc(array36.size*sizeof(unsigned int));
         memset(array36.data, 0, array36.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array33;
      params0.data[1] = array36;
      Array array37 = func15(&params0, loopsFactor);
      free(params0.data);
      for (int i = 0; i < array33.size; i++) {
         if (array33.data[i] == 56) { 
            return array33;
         }
      }
      array37.refC--;
      if(array37.refC == 0) {
         free(array37.data);
      }
      array36.refC--;
      if(array36.refC == 0) {
         free(array36.data);
      }
   }
   for (int i = 0; i < array33.size; i++) {
      array33.data[i]--;
   }
   for (int i = 0; i < array33.size; i++) {
      if (array33.data[i] == 86) { 
         return array33;
      }
   }
   return array33;
}

