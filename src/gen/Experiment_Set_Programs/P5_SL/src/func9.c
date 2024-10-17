#include "P5_SL.h" 
sortedlist_t* func9(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist12 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist12->n = 0;
   sortedlist12->root = NULL;
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/3 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      if(sortedlist12 != NULL && sortedlist12->n > 0) {
           cell_t* cell15 = sortedlist12->root;
           if(sortedlist12->n == 0) {
               sortedlist12->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist12->root->val  = 82;
               sortedlist12->root->next = NULL;
               sortedlist12->n++;
           } else {
               while(cell15 != NULL)
               {
                   if(cell15->next == NULL && cell15->val < 82) {
                       cell15->next = (cell_t*)malloc(sizeof(cell_t));
                       cell15->next->next = NULL;
                       cell15->next->val  = 82;
                       sortedlist12->n++;
                       break;
                   } else if(82 < cell15->val) {
                       cell_t* tmp15 = cell15->next;
                       cell15->next = (cell_t*)malloc(sizeof(cell_t));
                       cell15->next->next = tmp15;
                       int tmp_val15 = cell15->val;
                       cell15->val = 82;
                       cell15->next->val = tmp_val15;
                       sortedlist12->n++;
                       break;
                   }
                   cell15 = cell15->next;
               }
           }
      }
   }
   return sortedlist12;
}

