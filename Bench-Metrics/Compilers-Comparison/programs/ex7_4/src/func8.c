#include "ex7_4.h" 
Array func8(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array25;
   if (pCounter > 0) {
      array25 = vars->data[--pCounter];
      array25.refC++;
   } else {
      array25.size = 846;
      array25.refC = 1;
      array25.data = (unsigned int*)malloc(array25.size*sizeof(unsigned int));
      memset(array25.data, 0, array25.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array25.size; i++) {
      if (array25.data[i] == 13) { 
         return array25;
      }
   }
   for (int i = 0; i < array25.size; i++) {
      if (array25.data[i] == 24) { 
         return array25;
      }
   }
   return array25;
}

