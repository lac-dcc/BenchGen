#include "P1_SL.h" 
sortedlist_t* func24(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist19 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist19->n = 0;
   sortedlist19->root = NULL;
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop9 = 0;
   unsigned int loopLimit9 = (rand()%loopsFactor)/2 + 1;
   for(; loop9 < loopLimit9; loop9++) {
      if(sortedlist19 != NULL && sortedlist19->n > 0) {
           cell_t* cell19 = sortedlist19->root;
           if(sortedlist19->n == 0) {
               sortedlist19->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist19->root->val  = 2;
               sortedlist19->root->next = NULL;
               sortedlist19->n++;
           } else {
               while(cell19 != NULL)
               {
                   if(cell19->next == NULL && cell19->val < 2) {
                       cell19->next = (cell_t*)malloc(sizeof(cell_t));
                       cell19->next->next = NULL;
                       cell19->next->val  = 2;
                       sortedlist19->n++;
                       break;
                   } else if(2 < cell19->val) {
                       cell_t* tmp19 = cell19->next;
                       cell19->next = (cell_t*)malloc(sizeof(cell_t));
                       cell19->next->next = tmp19;
                       int tmp_val19 = cell19->val;
                       cell19->val = 2;
                       cell19->next->val = tmp_val19;
                       sortedlist19->n++;
                       break;
                   }
                   cell19 = cell19->next;
               }
           }
      }
   }
   return sortedlist19;
}

