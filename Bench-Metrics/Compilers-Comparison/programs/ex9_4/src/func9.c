#include "ex9_4.h" 
Array func9(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array23;
   if (pCounter > 0) {
      array23 = vars->data[--pCounter];
      array23.refC++;
   } else {
      array23.size = 60;
      array23.refC = 1;
      array23.data = (unsigned int*)malloc(array23.size*sizeof(unsigned int));
      memset(array23.data, 0, array23.size*sizeof(unsigned int));
   }
   unsigned int loop11 = 0;
   unsigned int loopLimit11 = (rand()%loopsFactor)/2 + 1;
   for(; loop11 < loopLimit11; loop11++) {
      for (int i = 0; i < array23.size; i++) {
         array23.data[i]--;
      }
   }
   unsigned int loop12 = 0;
   unsigned int loopLimit12 = (rand()%loopsFactor)/2 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      for (int i = 0; i < array23.size; i++) {
         array23.data[i]++;
      }
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array23;
   Array array24 = func12(&params0, loopsFactor);
   free(params0.data);
   for (int i = 0; i < array23.size; i++) {
      if (array23.data[i] == 86) { 
         return array23;
      }
   }
   array24.refC--;
   if(array24.refC == 0) {
      free(array24.data);
   }
   return array23;
}

