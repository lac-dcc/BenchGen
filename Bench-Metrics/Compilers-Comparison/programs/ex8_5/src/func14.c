#include "ex8_5.h" 
Array func14(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array56;
   if (pCounter > 0) {
      array56 = vars->data[--pCounter];
      array56.refC++;
   } else {
      array56.size = 793;
      array56.refC = 1;
      array56.data = (unsigned int*)malloc(array56.size*sizeof(unsigned int));
      memset(array56.data, 0, array56.size*sizeof(unsigned int));
   }
   unsigned int loop17 = 0;
   unsigned int loopLimit17 = (rand()%loopsFactor)/3 + 1;
   for(; loop17 < loopLimit17; loop17++) {
      if(PATH0 & 1) {
         Array array57;
         if (pCounter > 0) {
            array57 = vars->data[--pCounter];
            array57.refC++;
         } else {
            array57.size = 818;
            array57.refC = 1;
            array57.data = (unsigned int*)malloc(array57.size*sizeof(unsigned int));
            memset(array57.data, 0, array57.size*sizeof(unsigned int));
         }
         unsigned int loop18 = 0;
         unsigned int loopLimit18 = (rand()%loopsFactor)/4 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            for (int i = 0; i < array56.size; i++) {
               array56.data[i]--;
            }
            for (int i = 0; i < array57.size; i++) {
               if (array57.data[i] == 11) { 
                  return array57;
               }
            }
         }
         array57.refC--;
         if(array57.refC == 0) {
            free(array57.data);
         }
      }
      else {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array56;
         Array array58 = func22(&params0, loopsFactor);
         free(params0.data);
         array58.refC--;
         if(array58.refC == 0) {
            free(array58.data);
         }
      }
      Array array59;
      if (pCounter > 0) {
         array59 = vars->data[--pCounter];
         array59.refC++;
      } else {
         array59.size = 776;
         array59.refC = 1;
         array59.data = (unsigned int*)malloc(array59.size*sizeof(unsigned int));
         memset(array59.data, 0, array59.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array56;
      params0.data[1] = array59;
      Array array60 = func23(&params0, loopsFactor);
      free(params0.data);
      for (int i = 0; i < array59.size; i++) {
         if (array59.data[i] == 13) { 
            return array59;
         }
      }
      array60.refC--;
      if(array60.refC == 0) {
         free(array60.data);
      }
      array59.refC--;
      if(array59.refC == 0) {
         free(array59.data);
      }
   }
   for (int i = 0; i < array56.size; i++) {
      array56.data[i]--;
   }
   for (int i = 0; i < array56.size; i++) {
      if (array56.data[i] == 40) { 
         return array56;
      }
   }
   return array56;
}

