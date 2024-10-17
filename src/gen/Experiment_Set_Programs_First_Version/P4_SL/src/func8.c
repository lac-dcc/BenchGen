#include "P4_SL.h" 
sortedlist_t* func8(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist27 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist27->n = 0;
   sortedlist27->root = NULL;
   if(PATH0 & 1) {
   }
   else {
   }
   unsigned int loop25 = 0;
   unsigned int loopLimit25 = (rand()%loopsFactor)/2 + 1;
   for(; loop25 < loopLimit25; loop25++) {
      if(sortedlist27 != NULL && sortedlist27->n > 0) {
           cell_t* cell54 = sortedlist27->root;
           if(sortedlist27->n == 0) {
               sortedlist27->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist27->root->val  = 82;
               sortedlist27->root->next = NULL;
               sortedlist27->n++;
           } else {
               while(cell54 != NULL)
               {
                   if(cell54->next == NULL && cell54->val < 82) {
                       cell54->next = (cell_t*)malloc(sizeof(cell_t));
                       cell54->next->next = NULL;
                       cell54->next->val  = 82;
                       sortedlist27->n++;
                       break;
                   } else if(82 < cell54->val) {
                       cell_t* tmp54 = cell54->next;
                       cell54->next = (cell_t*)malloc(sizeof(cell_t));
                       cell54->next->next = tmp54;
                       int tmp_val54 = cell54->val;
                       cell54->val = 82;
                       cell54->next->val = tmp_val54;
                       sortedlist27->n++;
                       break;
                   }
                   cell54 = cell54->next;
               }
           }
      }
   }
   if(sortedlist27 != NULL && sortedlist27->n > 0){
        cell_t* cell55 = sortedlist27->root;
        while(cell55 != NULL && cell55->val != 14) cell55 = cell55->next;
        return cell55 != NULL ? sortedlist27 : NULL;
   }
   if(PATH0 & 2) {
   }
   else {
   }
   if(sortedlist27 != NULL && sortedlist27->n > 0)
   {
       cell_t* cell56 = sortedlist27->root;
       if(cell56->val == 34)
       {
           cell56 = cell56->next;
           sortedlist27->n--;
       }else{
           while(cell56->next != NULL && cell56->next->val != 34) cell56 = cell56->next;
           if(cell56->next != NULL)
           {
               cell56 = cell56->next->next;
               sortedlist27->n--;
           }
        }
   }
   if(sortedlist27 != NULL && sortedlist27->n > 0){
        cell_t* cell57 = sortedlist27->root;
        while(cell57 != NULL && cell57->val != 43) cell57 = cell57->next;
        return cell57 != NULL ? sortedlist27 : NULL;
   }
   return sortedlist27;
}

