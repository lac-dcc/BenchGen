#include "ex4.h" 
Array func10(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   int pCounter = vars->size;
   Array array7;
   if (pCounter > 0) {
      array7 = vars->data[--pCounter];
   } else {
      array7.size = 584;
      array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
      memset(array7.data, 0, array7.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array7.size; i++) {
      array7.data[i]++;
   }
   if(PATH0 & 1) {
   }
   else {
      Array array8;
      if (pCounter > 0) {
         array8 = vars->data[--pCounter];
      } else {
         array8.size = 651;
         array8.data = (unsigned int*)malloc(array8.size*sizeof(unsigned int));
         memset(array8.data, 0, array8.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array7.size; i++) {
         array7.data[i]--;
      }
      for (int i = 0; i < array8.size; i++) {
         array8.data[i]--;
      }
      for (int i = 0; i < array7.size; i++) {
         if (array7.data[i] == 60) { 
            return array7;
         }
      }
      if (array8.size > 0) {
         free(array8.data);
         array8.size = 0;
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array7;
   Array array8 = func15(&params0, loopsFactor);
   if (params0.size > 0) {
      free(params0.data);
      params0.size = 0;
   }
   if (array8.size > 0) {
      free(array8.data);
      array8.size = 0;
   }
   if (array7.size > 0) {
      free(array7.data);
      array7.size = 0;
   }
   return array7;
}

