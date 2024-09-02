#include "ex8_4.h" 
Array func12(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      Array array7;
      if (pCounter > 0) {
         array7 = vars->data[--pCounter];
         array7.refC++;
      } else {
         array7.size = 530;
         array7.refC = 1;
         array7.data = (unsigned int*)malloc(array7.size*sizeof(unsigned int));
         memset(array7.data, 0, array7.size*sizeof(unsigned int));
      }
      unsigned int loop4 = 0;
      unsigned int loopLimit4 = (rand()%loopsFactor)/3 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         for (int i = 0; i < array7.size; i++) {
            array7.data[i]--;
         }
         for (int i = 0; i < array7.size; i++) {
            if (array7.data[i] == 67) { 
               return array7;
            }
         }
      }
      array7.refC--;
      if(array7.refC == 0) {
         free(array7.data);
      }
   }
   else {
      ArrayParam params0;
      params0.size = 0;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      Array array8 = func16(&params0, loopsFactor);
      free(params0.data);
      array8.refC--;
      if(array8.refC == 0) {
         free(array8.data);
      }
   }
   Array array10;
   if (pCounter > 0) {
      array10 = vars->data[--pCounter];
      array10.refC++;
   } else {
      array10.size = 11;
      array10.refC = 1;
      array10.data = (unsigned int*)malloc(array10.size*sizeof(unsigned int));
      memset(array10.data, 0, array10.size*sizeof(unsigned int));
   }
   return array10;
}

