#include "P4_A.h" 
array_t* func3(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array3;
   if (pCounter > 0) {
      array3 = vars->data[--pCounter];
      array3->refC++;
   } else {
      array3 = (array_t*)malloc(sizeof(array_t));
      array3->size = 362;
      array3->refC = 1;
      array3->data = (unsigned int*)malloc(array3->size*sizeof(unsigned int));
      memset(array3->data, 0, array3->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop2 = 0;
   unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      for (int i = 0; i < array3->size; i++) {
         array3->data[i]++;
      }
   }
   for (int i = 0; i < array3->size; i++) {
      if (array3->data[i] == 59) { 
         return array3;
      }
   }
   if(PATH0 & 2) {
   }
   else {
   }
   for (int i = 0; i < array3->size; i++) {
      array3->data[i]--;
   }
   for (int i = 0; i < array3->size; i++) {
      if (array3->data[i] == 40) { 
         return array3;
      }
   }
   return array3;
}

