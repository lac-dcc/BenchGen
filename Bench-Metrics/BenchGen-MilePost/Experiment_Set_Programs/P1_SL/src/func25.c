#include "P1_SL.h" 
sortedlist_t* func25(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist31 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist31->n = 0;
   sortedlist31->root = NULL;
   if(sortedlist31 != NULL && sortedlist31->n > 0){
        cell_t* cell44 = sortedlist31->root;
        while(cell44 != NULL && cell44->val != 24) cell44 = cell44->next;
        return cell44 != NULL ? sortedlist31 : NULL;
   }
   return sortedlist31;
}

