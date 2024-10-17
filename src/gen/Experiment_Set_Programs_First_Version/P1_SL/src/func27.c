#include "P1_SL.h" 
sortedlist_t* func27(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist23 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist23->n = 0;
   sortedlist23->root = NULL;
   if(sortedlist23 != NULL && sortedlist23->n > 0){
        cell_t* cell27 = sortedlist23->root;
        while(cell27 != NULL && cell27->val != 84) cell27 = cell27->next;
        return cell27 != NULL ? sortedlist23 : NULL;
   }
   return sortedlist23;
}

