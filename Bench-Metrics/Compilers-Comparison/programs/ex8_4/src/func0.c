#include "ex8_4.h" 
Array func0(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array1;
   if (pCounter > 0) {
      array1 = vars->data[--pCounter];
      array1.refC++;
   } else {
      array1.size = 386;
      array1.refC = 1;
      array1.data = (unsigned int*)malloc(array1.size*sizeof(unsigned int));
      memset(array1.data, 0, array1.size*sizeof(unsigned int));
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      if(PATH0 & 1) {
         Array array2;
         if (pCounter > 0) {
            array2 = vars->data[--pCounter];
            array2.refC++;
         } else {
            array2.size = 492;
            array2.refC = 1;
            array2.data = (unsigned int*)malloc(array2.size*sizeof(unsigned int));
            memset(array2.data, 0, array2.size*sizeof(unsigned int));
         }
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            for (int i = 0; i < array2.size; i++) {
               array2.data[i]--;
            }
            for (int i = 0; i < array2.size; i++) {
               if (array2.data[i] == 62) { 
                  return array2;
               }
            }
         }
         ArrayParam params0;
         params0.size = 2;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array1;
         params0.data[1] = array2;
         Array array3 = func10(&params0, rng(), loopsFactor);
         free(params0.data);
         array3.refC--;
         if(array3.refC == 0) {
            free(array3.data);
         }
         array2.refC--;
         if(array2.refC == 0) {
            free(array2.data);
         }
      }
      else {
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array1;
         Array array15 = func4(&params0, rng(), loopsFactor);
         free(params0.data);
         array15.refC--;
         if(array15.refC == 0) {
            free(array15.data);
         }
      }
      Array array21;
      if (pCounter > 0) {
         array21 = vars->data[--pCounter];
         array21.refC++;
      } else {
         array21.size = 434;
         array21.refC = 1;
         array21.data = (unsigned int*)malloc(array21.size*sizeof(unsigned int));
         memset(array21.data, 0, array21.size*sizeof(unsigned int));
      }
      ArrayParam params0;
      params0.size = 2;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array1;
      params0.data[1] = array21;
      Array array22 = func5(&params0, loopsFactor);
      free(params0.data);
      if(PATH0 & 2) {
         Array array25;
         if (pCounter > 0) {
            array25 = vars->data[--pCounter];
            array25.refC++;
         } else {
            array25.size = 754;
            array25.refC = 1;
            array25.data = (unsigned int*)malloc(array25.size*sizeof(unsigned int));
            memset(array25.data, 0, array25.size*sizeof(unsigned int));
         }
         unsigned int loop9 = 0;
         unsigned int loopLimit9 = (rand()%loopsFactor)/3 + 1;
         for(; loop9 < loopLimit9; loop9++) {
            for (int i = 0; i < array25.size; i++) {
               array25.data[i]--;
            }
            for (int i = 0; i < array1.size; i++) {
               if (array1.data[i] == 60) { 
                  return array1;
               }
            }
         }
         ArrayParam params1;
         params1.size = 4;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array1;
         params1.data[1] = array21;
         params1.data[2] = array22;
         params1.data[3] = array25;
         Array array26 = func18(&params1, rng(), loopsFactor);
         free(params1.data);
         array26.refC--;
         if(array26.refC == 0) {
            free(array26.data);
         }
         array25.refC--;
         if(array25.refC == 0) {
            free(array25.data);
         }
      }
      else {
         ArrayParam params1;
         params1.size = 3;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array1;
         params1.data[1] = array21;
         params1.data[2] = array22;
         Array array33 = func14(&params1, loopsFactor);
         free(params1.data);
         array33.refC--;
         if(array33.refC == 0) {
            free(array33.data);
         }
      }
      for (int i = 0; i < array1.size; i++) {
         if (array1.data[i] == 75) { 
            return array1;
         }
      }
      array22.refC--;
      if(array22.refC == 0) {
         free(array22.data);
      }
      array21.refC--;
      if(array21.refC == 0) {
         free(array21.data);
      }
   }
   return array1;
}

