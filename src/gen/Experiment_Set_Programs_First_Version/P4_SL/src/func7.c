#include "P4_SL.h" 
sortedlist_t* func7(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist11 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist11->n = 0;
   sortedlist11->root = NULL;
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/3 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      if(sortedlist11 != NULL && sortedlist11->n > 0) {
           cell_t* cell14 = sortedlist11->root;
           if(sortedlist11->n == 0) {
               sortedlist11->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist11->root->val  = 67;
               sortedlist11->root->next = NULL;
               sortedlist11->n++;
           } else {
               while(cell14 != NULL)
               {
                   if(cell14->next == NULL && cell14->val < 67) {
                       cell14->next = (cell_t*)malloc(sizeof(cell_t));
                       cell14->next->next = NULL;
                       cell14->next->val  = 67;
                       sortedlist11->n++;
                       break;
                   } else if(67 < cell14->val) {
                       cell_t* tmp14 = cell14->next;
                       cell14->next = (cell_t*)malloc(sizeof(cell_t));
                       cell14->next->next = tmp14;
                       int tmp_val14 = cell14->val;
                       cell14->val = 67;
                       cell14->next->val = tmp_val14;
                       sortedlist11->n++;
                       break;
                   }
                   cell14 = cell14->next;
               }
           }
      }
   }
   return sortedlist11;
}

