#include "ex7_5.h" 
Array func2(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array78;
   if (pCounter > 0) {
      array78 = vars->data[--pCounter];
      array78.refC++;
   } else {
      array78.size = 237;
      array78.refC = 1;
      array78.data = (unsigned int*)malloc(array78.size*sizeof(unsigned int));
      memset(array78.data, 0, array78.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array78.size; i++) {
      if (array78.data[i] == 93) { 
         return array78;
      }
   }
   Array array79;
   if (pCounter > 0) {
      array79 = vars->data[--pCounter];
      array79.refC++;
   } else {
      array79.size = 818;
      array79.refC = 1;
      array79.data = (unsigned int*)malloc(array79.size*sizeof(unsigned int));
      memset(array79.data, 0, array79.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array78;
   params0.data[1] = array79;
   Array array80 = func11(&params0, rng(), loopsFactor);
   free(params0.data);
   Array array81;
   if (pCounter > 0) {
      array81 = vars->data[--pCounter];
      array81.refC++;
   } else {
      array81.size = 11;
      array81.refC = 1;
      array81.data = (unsigned int*)malloc(array81.size*sizeof(unsigned int));
      memset(array81.data, 0, array81.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop19 = 0;
      unsigned int loopLimit19 = (rand()%loopsFactor)/1 + 1;
      for(; loop19 < loopLimit19; loop19++) {
         Array array82;
         if (pCounter > 0) {
            array82 = vars->data[--pCounter];
            array82.refC++;
         } else {
            array82.size = 928;
            array82.refC = 1;
            array82.data = (unsigned int*)malloc(array82.size*sizeof(unsigned int));
            memset(array82.data, 0, array82.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array82.size; i++) {
            if (array82.data[i] == 76) { 
               return array82;
            }
         }
         array82.refC--;
         if(array82.refC == 0) {
            free(array82.data);
         }
      }
   }
   else {
      Array array83;
      if (pCounter > 0) {
         array83 = vars->data[--pCounter];
         array83.refC++;
      } else {
         array83.size = 404;
         array83.refC = 1;
         array83.data = (unsigned int*)malloc(array83.size*sizeof(unsigned int));
         memset(array83.data, 0, array83.size*sizeof(unsigned int));
      }
      Array array84;
      if (pCounter > 0) {
         array84 = vars->data[--pCounter];
         array84.refC++;
      } else {
         array84.size = 443;
         array84.refC = 1;
         array84.data = (unsigned int*)malloc(array84.size*sizeof(unsigned int));
         memset(array84.data, 0, array84.size*sizeof(unsigned int));
      }
      Array array85;
      if (pCounter > 0) {
         array85 = vars->data[--pCounter];
         array85.refC++;
      } else {
         array85.size = 763;
         array85.refC = 1;
         array85.data = (unsigned int*)malloc(array85.size*sizeof(unsigned int));
         memset(array85.data, 0, array85.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array85.size; i++) {
         array85.data[i]++;
      }
      unsigned int loop20 = 0;
      unsigned int loopLimit20 = (rand()%loopsFactor)/1 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         for (int i = 0; i < array80.size; i++) {
            array80.data[i]--;
         }
      }
      ArrayParam params1;
      params1.size = 7;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array78;
      params1.data[1] = array79;
      params1.data[2] = array80;
      params1.data[3] = array81;
      params1.data[4] = array83;
      params1.data[5] = array84;
      params1.data[6] = array85;
      Array array86 = func14(&params1, loopsFactor);
      free(params1.data);
      ArrayParam params2;
      params2.size = 8;
      params2.data = (Array*)malloc(params2.size*sizeof(Array));
      params2.data[0] = array78;
      params2.data[1] = array79;
      params2.data[2] = array80;
      params2.data[3] = array81;
      params2.data[4] = array83;
      params2.data[5] = array84;
      params2.data[6] = array85;
      params2.data[7] = array86;
      Array array87 = func9(&params2, loopsFactor);
      free(params2.data);
      array87.refC--;
      if(array87.refC == 0) {
         free(array87.data);
      }
      array86.refC--;
      if(array86.refC == 0) {
         free(array86.data);
      }
      array85.refC--;
      if(array85.refC == 0) {
         free(array85.data);
      }
      array84.refC--;
      if(array84.refC == 0) {
         free(array84.data);
      }
      array83.refC--;
      if(array83.refC == 0) {
         free(array83.data);
      }
   }
   for (int i = 0; i < array78.size; i++) {
      if (array78.data[i] == 88) { 
         return array78;
      }
   }
   Array array88;
   if (pCounter > 0) {
      array88 = vars->data[--pCounter];
      array88.refC++;
   } else {
      array88.size = 369;
      array88.refC = 1;
      array88.data = (unsigned int*)malloc(array88.size*sizeof(unsigned int));
      memset(array88.data, 0, array88.size*sizeof(unsigned int));
   }
   Array array89;
   if (pCounter > 0) {
      array89 = vars->data[--pCounter];
      array89.refC++;
   } else {
      array89.size = 917;
      array89.refC = 1;
      array89.data = (unsigned int*)malloc(array89.size*sizeof(unsigned int));
      memset(array89.data, 0, array89.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array89.size; i++) {
      array89.data[i]++;
   }
   unsigned int loop21 = 0;
   unsigned int loopLimit21 = (rand()%loopsFactor)/1 + 1;
   for(; loop21 < loopLimit21; loop21++) {
      for (int i = 0; i < array78.size; i++) {
         array78.data[i]--;
      }
   }
   ArrayParam params1;
   params1.size = 6;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array78;
   params1.data[1] = array79;
   params1.data[2] = array80;
   params1.data[3] = array81;
   params1.data[4] = array88;
   params1.data[5] = array89;
   Array array90 = func10(&params1, loopsFactor);
   free(params1.data);
   Array array91;
   if (pCounter > 0) {
      array91 = vars->data[--pCounter];
      array91.refC++;
   } else {
      array91.size = 470;
      array91.refC = 1;
      array91.data = (unsigned int*)malloc(array91.size*sizeof(unsigned int));
      memset(array91.data, 0, array91.size*sizeof(unsigned int));
   }
   ArrayParam params2;
   params2.size = 8;
   params2.data = (Array*)malloc(params2.size*sizeof(Array));
   params2.data[0] = array78;
   params2.data[1] = array79;
   params2.data[2] = array80;
   params2.data[3] = array81;
   params2.data[4] = array88;
   params2.data[5] = array89;
   params2.data[6] = array90;
   params2.data[7] = array91;
   Array array92 = func5(&params2, rng(), loopsFactor);
   free(params2.data);
   array92.refC--;
   if(array92.refC == 0) {
      free(array92.data);
   }
   array90.refC--;
   if(array90.refC == 0) {
      free(array90.data);
   }
   array89.refC--;
   if(array89.refC == 0) {
      free(array89.data);
   }
   array88.refC--;
   if(array88.refC == 0) {
      free(array88.data);
   }
   array81.refC--;
   if(array81.refC == 0) {
      free(array81.data);
   }
   array80.refC--;
   if(array80.refC == 0) {
      free(array80.data);
   }
   array79.refC--;
   if(array79.refC == 0) {
      free(array79.data);
   }
   array78.refC--;
   if(array78.refC == 0) {
      free(array78.data);
   }
   return array91;
}

