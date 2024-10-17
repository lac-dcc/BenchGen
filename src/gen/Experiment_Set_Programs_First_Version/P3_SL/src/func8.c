#include "P3_SL.h" 
sortedlist_t* func8(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist10 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist10->n = 0;
   sortedlist10->root = NULL;
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/4 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      if(sortedlist10 != NULL && sortedlist10->n > 0) {
           cell_t* cell9 = sortedlist10->root;
           if(sortedlist10->n == 0) {
               sortedlist10->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist10->root->val  = 40;
               sortedlist10->root->next = NULL;
               sortedlist10->n++;
           } else {
               while(cell9 != NULL)
               {
                   if(cell9->next == NULL && cell9->val < 40) {
                       cell9->next = (cell_t*)malloc(sizeof(cell_t));
                       cell9->next->next = NULL;
                       cell9->next->val  = 40;
                       sortedlist10->n++;
                       break;
                   } else if(40 < cell9->val) {
                       cell_t* tmp9 = cell9->next;
                       cell9->next = (cell_t*)malloc(sizeof(cell_t));
                       cell9->next->next = tmp9;
                       int tmp_val9 = cell9->val;
                       cell9->val = 40;
                       cell9->next->val = tmp_val9;
                       sortedlist10->n++;
                       break;
                   }
                   cell9 = cell9->next;
               }
           }
      }
   }
   return sortedlist10;
}

