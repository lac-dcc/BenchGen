#include "P3_SL.h" 
sortedlist_t* func9(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist17 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist17->n = 0;
   sortedlist17->root = NULL;
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop19 = 0;
   unsigned int loopLimit19 = (rand()%loopsFactor)/3 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      if(sortedlist17 != NULL && sortedlist17->n > 0) {
           cell_t* cell28 = sortedlist17->root;
           if(sortedlist17->n == 0) {
               sortedlist17->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist17->root->val  = 21;
               sortedlist17->root->next = NULL;
               sortedlist17->n++;
           } else {
               while(cell28 != NULL)
               {
                   if(cell28->next == NULL && cell28->val < 21) {
                       cell28->next = (cell_t*)malloc(sizeof(cell_t));
                       cell28->next->next = NULL;
                       cell28->next->val  = 21;
                       sortedlist17->n++;
                       break;
                   } else if(21 < cell28->val) {
                       cell_t* tmp28 = cell28->next;
                       cell28->next = (cell_t*)malloc(sizeof(cell_t));
                       cell28->next->next = tmp28;
                       int tmp_val28 = cell28->val;
                       cell28->val = 21;
                       cell28->next->val = tmp_val28;
                       sortedlist17->n++;
                       break;
                   }
                   cell28 = cell28->next;
               }
           }
      }
   }
   unsigned int loop20 = 0;
   unsigned int loopLimit20 = (rand()%loopsFactor)/3 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      if(sortedlist17 != NULL && sortedlist17->n > 0) {
           cell_t* cell29 = sortedlist17->root;
           if(sortedlist17->n == 0) {
               sortedlist17->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist17->root->val  = 84;
               sortedlist17->root->next = NULL;
               sortedlist17->n++;
           } else {
               while(cell29 != NULL)
               {
                   if(cell29->next == NULL && cell29->val < 84) {
                       cell29->next = (cell_t*)malloc(sizeof(cell_t));
                       cell29->next->next = NULL;
                       cell29->next->val  = 84;
                       sortedlist17->n++;
                       break;
                   } else if(84 < cell29->val) {
                       cell_t* tmp29 = cell29->next;
                       cell29->next = (cell_t*)malloc(sizeof(cell_t));
                       cell29->next->next = tmp29;
                       int tmp_val29 = cell29->val;
                       cell29->val = 84;
                       cell29->next->val = tmp_val29;
                       sortedlist17->n++;
                       break;
                   }
                   cell29 = cell29->next;
               }
           }
      }
   }
   return sortedlist17;
}

