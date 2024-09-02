#include "ex9_4.h" 
Array func8(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array11;
   if (pCounter > 0) {
      array11 = vars->data[--pCounter];
      array11.refC++;
   } else {
      array11.size = 11;
      array11.refC = 1;
      array11.data = (unsigned int*)malloc(array11.size*sizeof(unsigned int));
      memset(array11.data, 0, array11.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop4 = 0;
      unsigned int loopLimit4 = (rand()%loopsFactor)/2 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         for (int i = 0; i < array11.size; i++) {
            array11.data[i]--;
         }
      }
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         for (int i = 0; i < array11.size; i++) {
            array11.data[i]++;
         }
      }
      ArrayParam params0;
      params0.size = 1;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array11;
      Array array12 = func12(&params0, loopsFactor);
      free(params0.data);
      array12.refC--;
      if(array12.refC == 0) {
         free(array12.data);
      }
   }
   else {
      Array array14;
      if (pCounter > 0) {
         array14 = vars->data[--pCounter];
         array14.refC++;
      } else {
         array14.size = 324;
         array14.refC = 1;
         array14.data = (unsigned int*)malloc(array14.size*sizeof(unsigned int));
         memset(array14.data, 0, array14.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array14.size; i++) {
         array14.data[i]++;
      }
      for (int i = 0; i < array11.size; i++) {
         if (array11.data[i] == 13) { 
            return array11;
         }
      }
      for (int i = 0; i < array11.size; i++) {
         array11.data[i]--;
      }
      array14.refC--;
      if(array14.refC == 0) {
         free(array14.data);
      }
   }
   unsigned int loop6 = 0;
   unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      for (int i = 0; i < array11.size; i++) {
         array11.data[i]++;
      }
      Array array15;
      if (pCounter > 0) {
         array15 = vars->data[--pCounter];
         array15.refC++;
      } else {
         array15.size = 980;
         array15.refC = 1;
         array15.data = (unsigned int*)malloc(array15.size*sizeof(unsigned int));
         memset(array15.data, 0, array15.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array11.size; i++) {
         array11.data[i]++;
      }
      for (int i = 0; i < array15.size; i++) {
         if (array15.data[i] == 62) { 
            return array15;
         }
      }
      for (int i = 0; i < array11.size; i++) {
         array11.data[i]--;
      }
      array15.refC--;
      if(array15.refC == 0) {
         free(array15.data);
      }
   }
   return array11;
}

