#include "ex7_5.h" 
Array func6(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      unsigned int loop3 = 0;
      unsigned int loopLimit3 = (rand()%loopsFactor)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         Array array15;
         if (pCounter > 0) {
            array15 = vars->data[--pCounter];
            array15.refC++;
         } else {
            array15.size = 42;
            array15.refC = 1;
            array15.data = (unsigned int*)malloc(array15.size*sizeof(unsigned int));
            memset(array15.data, 0, array15.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array15.size; i++) {
            if (array15.data[i] == 73) { 
               return array15;
            }
         }
         array15.refC--;
         if(array15.refC == 0) {
            free(array15.data);
         }
      }
   }
   else {
      Array array16;
      if (pCounter > 0) {
         array16 = vars->data[--pCounter];
         array16.refC++;
      } else {
         array16.size = 421;
         array16.refC = 1;
         array16.data = (unsigned int*)malloc(array16.size*sizeof(unsigned int));
         memset(array16.data, 0, array16.size*sizeof(unsigned int));
      }
      Array array17;
      if (pCounter > 0) {
         array17 = vars->data[--pCounter];
         array17.refC++;
      } else {
         array17.size = 919;
         array17.refC = 1;
         array17.data = (unsigned int*)malloc(array17.size*sizeof(unsigned int));
         memset(array17.data, 0, array17.size*sizeof(unsigned int));
      }
      Array array18;
      if (pCounter > 0) {
         array18 = vars->data[--pCounter];
         array18.refC++;
      } else {
         array18.size = 784;
         array18.refC = 1;
         array18.data = (unsigned int*)malloc(array18.size*sizeof(unsigned int));
         memset(array18.data, 0, array18.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array17.size; i++) {
         array17.data[i]++;
      }
      unsigned int loop4 = 0;
      unsigned int loopLimit4 = (rand()%loopsFactor)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         for (int i = 0; i < array18.size; i++) {
            array18.data[i]--;
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array16;
      params0.data[1] = array17;
      params0.data[2] = array18;
      Array array19 = func14(&params0, loopsFactor);
      free(params0.data);
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array16;
      params1.data[1] = array17;
      params1.data[2] = array18;
      params1.data[3] = array19;
      Array array20 = func9(&params1, loopsFactor);
      free(params1.data);
      array20.refC--;
      if(array20.refC == 0) {
         free(array20.data);
      }
      array19.refC--;
      if(array19.refC == 0) {
         free(array19.data);
      }
      array18.refC--;
      if(array18.refC == 0) {
         free(array18.data);
      }
      array17.refC--;
      if(array17.refC == 0) {
         free(array17.data);
      }
      array16.refC--;
      if(array16.refC == 0) {
         free(array16.data);
      }
   }
   Array array23;
   if (pCounter > 0) {
      array23 = vars->data[--pCounter];
      array23.refC++;
   } else {
      array23.size = 170;
      array23.refC = 1;
      array23.data = (unsigned int*)malloc(array23.size*sizeof(unsigned int));
      memset(array23.data, 0, array23.size*sizeof(unsigned int));
   }
   Array array24;
   if (pCounter > 0) {
      array24 = vars->data[--pCounter];
      array24.refC++;
   } else {
      array24.size = 996;
      array24.refC = 1;
      array24.data = (unsigned int*)malloc(array24.size*sizeof(unsigned int));
      memset(array24.data, 0, array24.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array24.size; i++) {
      array24.data[i]++;
   }
   unsigned int loop5 = 0;
   unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
   for(; loop5 < loopLimit5; loop5++) {
      for (int i = 0; i < array24.size; i++) {
         array24.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array23;
   params0.data[1] = array24;
   Array array25 = func10(&params0, loopsFactor);
   free(params0.data);
   array25.refC--;
   if(array25.refC == 0) {
      free(array25.data);
   }
   array24.refC--;
   if(array24.refC == 0) {
      free(array24.data);
   }
   return array23;
}

