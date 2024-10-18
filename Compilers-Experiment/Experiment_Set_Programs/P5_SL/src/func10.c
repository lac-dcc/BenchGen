#include "P5_SL.h" 
sortedlist_t* func10(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist28 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist28->n = 0;
   sortedlist28->root = NULL;
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop25 = 0;
   unsigned int loopLimit25 = (rand()%loopsFactor)/2 + 1;
   for(; loop25 < loopLimit25; loop25++) {
      if(sortedlist28 != NULL && sortedlist28->n > 0) {
           cell_t* cell55 = sortedlist28->root;
           if(sortedlist28->n == 0) {
               sortedlist28->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist28->root->val  = 14;
               sortedlist28->root->next = NULL;
               sortedlist28->n++;
           } else {
               while(cell55 != NULL)
               {
                   if(cell55->next == NULL && cell55->val < 14) {
                       cell55->next = (cell_t*)malloc(sizeof(cell_t));
                       cell55->next->next = NULL;
                       cell55->next->val  = 14;
                       sortedlist28->n++;
                       break;
                   } else if(14 < cell55->val) {
                       cell_t* tmp55 = cell55->next;
                       cell55->next = (cell_t*)malloc(sizeof(cell_t));
                       cell55->next->next = tmp55;
                       int tmp_val55 = cell55->val;
                       cell55->val = 14;
                       cell55->next->val = tmp_val55;
                       sortedlist28->n++;
                       break;
                   }
                   cell55 = cell55->next;
               }
           }
      }
   }
   if(sortedlist28 != NULL && sortedlist28->n > 0){
        cell_t* cell56 = sortedlist28->root;
        while(cell56 != NULL && cell56->val != 34) cell56 = cell56->next;
        return cell56 != NULL ? sortedlist28 : NULL;
   }
   if(PATH0 & 2) {
   }
   else {
   }
   if(sortedlist28 != NULL && sortedlist28->n > 0)
   {
       cell_t* cell57 = sortedlist28->root;
       if(cell57->val == 43)
       {
           cell57 = cell57->next;
           sortedlist28->n--;
       }else{
           while(cell57->next != NULL && cell57->next->val != 43) cell57 = cell57->next;
           if(cell57->next != NULL)
           {
               cell57 = cell57->next->next;
               sortedlist28->n--;
           }
        }
   }
   if(sortedlist28 != NULL && sortedlist28->n > 0){
        cell_t* cell58 = sortedlist28->root;
        while(cell58 != NULL && cell58->val != 87) cell58 = cell58->next;
        return cell58 != NULL ? sortedlist28 : NULL;
   }
   return sortedlist28;
}

