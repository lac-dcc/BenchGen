#include "P2_SL.h" 
sortedlist_t* func14(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist8 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist8->n = 0;
   sortedlist8->root = NULL;
   if(sortedlist8 != NULL && sortedlist8->n > 0){
        cell_t* cell9 = sortedlist8->root;
        while(cell9 != NULL && cell9->val != 26) cell9 = cell9->next;
        return cell9 != NULL ? sortedlist8 : NULL;
   }
   return sortedlist8;
}

