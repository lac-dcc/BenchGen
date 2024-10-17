#include "P1_SL.h" 
sortedlist_t* func26(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist15 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist15->n = 0;
   sortedlist15->root = NULL;
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/2 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      if(sortedlist15 != NULL && sortedlist15->n > 0) {
           cell_t* cell14 = sortedlist15->root;
           if(sortedlist15->n == 0) {
               sortedlist15->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist15->root->val  = 29;
               sortedlist15->root->next = NULL;
               sortedlist15->n++;
           } else {
               while(cell14 != NULL)
               {
                   if(cell14->next == NULL && cell14->val < 29) {
                       cell14->next = (cell_t*)malloc(sizeof(cell_t));
                       cell14->next->next = NULL;
                       cell14->next->val  = 29;
                       sortedlist15->n++;
                       break;
                   } else if(29 < cell14->val) {
                       cell_t* tmp14 = cell14->next;
                       cell14->next = (cell_t*)malloc(sizeof(cell_t));
                       cell14->next->next = tmp14;
                       int tmp_val14 = cell14->val;
                       cell14->val = 29;
                       cell14->next->val = tmp_val14;
                       sortedlist15->n++;
                       break;
                   }
                   cell14 = cell14->next;
               }
           }
      }
   }
   return sortedlist15;
}

