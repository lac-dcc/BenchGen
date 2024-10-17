#include "P4_SL.h" 
sortedlist_t* func6(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist5 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist5->n = 0;
   sortedlist5->root = NULL;
   if(sortedlist5 != NULL && sortedlist5->n > 0){
        cell_t* cell4 = sortedlist5->root;
        while(cell4 != NULL && cell4->val != 92) cell4 = cell4->next;
        return cell4 != NULL ? sortedlist5 : NULL;
   }
   return sortedlist5;
}

