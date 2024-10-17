#include "P2_SL.h" 
sortedlist_t* func16(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist18 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist18->n = 0;
   sortedlist18->root = NULL;
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop13 = 0;
   unsigned int loopLimit13 = (rand()%loopsFactor)/3 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      if(sortedlist18 != NULL && sortedlist18->n > 0) {
           cell_t* cell31 = sortedlist18->root;
           if(sortedlist18->n == 0) {
               sortedlist18->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist18->root->val  = 13;
               sortedlist18->root->next = NULL;
               sortedlist18->n++;
           } else {
               while(cell31 != NULL)
               {
                   if(cell31->next == NULL && cell31->val < 13) {
                       cell31->next = (cell_t*)malloc(sizeof(cell_t));
                       cell31->next->next = NULL;
                       cell31->next->val  = 13;
                       sortedlist18->n++;
                       break;
                   } else if(13 < cell31->val) {
                       cell_t* tmp31 = cell31->next;
                       cell31->next = (cell_t*)malloc(sizeof(cell_t));
                       cell31->next->next = tmp31;
                       int tmp_val31 = cell31->val;
                       cell31->val = 13;
                       cell31->next->val = tmp_val31;
                       sortedlist18->n++;
                       break;
                   }
                   cell31 = cell31->next;
               }
           }
      }
   }
   return sortedlist18;
}

