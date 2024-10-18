#include "P1_SL.h" 
sortedlist_t* func19(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist52 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist52->n = 0;
   sortedlist52->root = NULL;
   if(sortedlist52 != NULL && sortedlist52->n > 0) {
        cell_t* cell81 = sortedlist52->root;
        if(sortedlist52->n == 0) {
            sortedlist52->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist52->root->val  = 89;
            sortedlist52->root->next = NULL;
            sortedlist52->n++;
        } else {
            while(cell81 != NULL)
            {
                if(cell81->next == NULL && cell81->val < 89) {
                    cell81->next = (cell_t*)malloc(sizeof(cell_t));
                    cell81->next->next = NULL;
                    cell81->next->val  = 89;
                    sortedlist52->n++;
                    break;
                } else if(89 < cell81->val) {
                    cell_t* tmp81 = cell81->next;
                    cell81->next = (cell_t*)malloc(sizeof(cell_t));
                    cell81->next->next = tmp81;
                    int tmp_val81 = cell81->val;
                    cell81->val = 89;
                    cell81->next->val = tmp_val81;
                    sortedlist52->n++;
                    break;
                }
                cell81 = cell81->next;
            }
        }
   }
   if(sortedlist52 != NULL && sortedlist52->n > 0){
        cell_t* cell82 = sortedlist52->root;
        while(cell82 != NULL && cell82->val != 19) cell82 = cell82->next;
        return cell82 != NULL ? sortedlist52 : NULL;
   }
   if(sortedlist52 != NULL && sortedlist52->n > 0)
   {
       cell_t* cell83 = sortedlist52->root;
       if(cell83->val == 29)
       {
           cell83 = cell83->next;
           sortedlist52->n--;
       }else{
           while(cell83->next != NULL && cell83->next->val != 29) cell83 = cell83->next;
           if(cell83->next != NULL)
           {
               cell83 = cell83->next->next;
               sortedlist52->n--;
           }
        }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist52;
   sortedlist_t* sortedlist53 = func24(&params0, rng(), loopsFactor);
   free(params0.data);
   if(sortedlist52 != NULL && sortedlist52->n > 0){
        cell_t* cell84 = sortedlist52->root;
        cell_t* tmp84  = NULL;
        while(cell84 != NULL) {
             tmp84 = cell84->next;
             free(cell84);
             cell84 = tmp84;
        }
        free(sortedlist52);
   }
   return sortedlist53;
}

