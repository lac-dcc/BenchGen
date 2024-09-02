#include "ex7_5.h" 
Array func1(ArrayParam* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array111;
   if (pCounter > 0) {
      array111 = vars->data[--pCounter];
      array111.refC++;
   } else {
      array111.size = 465;
      array111.refC = 1;
      array111.data = (unsigned int*)malloc(array111.size*sizeof(unsigned int));
      memset(array111.data, 0, array111.size*sizeof(unsigned int));
   }
   Array array112;
   if (pCounter > 0) {
      array112 = vars->data[--pCounter];
      array112.refC++;
   } else {
      array112.size = 708;
      array112.refC = 1;
      array112.data = (unsigned int*)malloc(array112.size*sizeof(unsigned int));
      memset(array112.data, 0, array112.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array111.size; i++) {
      array111.data[i]++;
   }
   unsigned int loop27 = 0;
   unsigned int loopLimit27 = (rand()%loopsFactor)/1 + 1;
   for(; loop27 < loopLimit27; loop27++) {
      for (int i = 0; i < array111.size; i++) {
         array111.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array111;
   params0.data[1] = array112;
   Array array113 = func3(&params0, rng(), loopsFactor);
   free(params0.data);
   array113.refC--;
   if(array113.refC == 0) {
      free(array113.data);
   }
   array111.refC--;
   if(array111.refC == 0) {
      free(array111.data);
   }
   return array112;
}

