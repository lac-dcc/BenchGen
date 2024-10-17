#include "P1_SL.h" 
sortedlist_t* func1(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist173 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist173->n = 0;
   sortedlist173->root = NULL;
   if(sortedlist173 != NULL && sortedlist173->n > 0){
        cell_t* cell315 = sortedlist173->root;
        while(cell315 != NULL && cell315->val != 9) cell315 = cell315->next;
        return cell315 != NULL ? sortedlist173 : NULL;
   }
   return sortedlist173;
}

