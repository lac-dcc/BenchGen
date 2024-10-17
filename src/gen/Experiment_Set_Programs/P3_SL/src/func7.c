#include "Experiment_Set_Programs/P3_SL.h" 
sortedlist_t* func7(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist6;
   if (pCounter > 0) {
      sortedlist6 = vars->data[--pCounter];
      sortedlist6->refC++;
   } else {
        sortedlist6 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
        sortedlist6->refC = 1;
        sortedlist6->n = 0;
        sortedlist6->root = NULL;
   }
   if(sortedlist6 != NULL && sortedlist6->n > 0){
        cell_t* cell5 = sortedlist6->root;
        while(cell5 != NULL && cell5->val != 21) cell5 = cell5->next;
        return cell5 != NULL ? sortedlist6 : NULL;
   }
   return sortedlist6;
}
