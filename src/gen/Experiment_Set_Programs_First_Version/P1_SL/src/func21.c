#include "P1_SL.h" 
sortedlist_t* func21(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist21 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist21->n = 0;
   sortedlist21->root = NULL;
   if(sortedlist21 != NULL && sortedlist21->n > 0) {
        cell_t* cell21 = sortedlist21->root;
        if(sortedlist21->n == 0) {
            sortedlist21->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist21->root->val  = 93;
            sortedlist21->root->next = NULL;
            sortedlist21->n++;
        } else {
            while(cell21 != NULL)
            {
                if(cell21->next == NULL && cell21->val < 93) {
                    cell21->next = (cell_t*)malloc(sizeof(cell_t));
                    cell21->next->next = NULL;
                    cell21->next->val  = 93;
                    sortedlist21->n++;
                    break;
                } else if(93 < cell21->val) {
                    cell_t* tmp21 = cell21->next;
                    cell21->next = (cell_t*)malloc(sizeof(cell_t));
                    cell21->next->next = tmp21;
                    int tmp_val21 = cell21->val;
                    cell21->val = 93;
                    cell21->next->val = tmp_val21;
                    sortedlist21->n++;
                    break;
                }
                cell21 = cell21->next;
            }
        }
   }
   if(sortedlist21 != NULL && sortedlist21->n > 0){
        cell_t* cell22 = sortedlist21->root;
        while(cell22 != NULL && cell22->val != 11) cell22 = cell22->next;
        return cell22 != NULL ? sortedlist21 : NULL;
   }
   if(sortedlist21 != NULL && sortedlist21->n > 0)
   {
       cell_t* cell23 = sortedlist21->root;
       if(cell23->val == 29)
       {
           cell23 = cell23->next;
           sortedlist21->n--;
       }else{
           while(cell23->next != NULL && cell23->next->val != 29) cell23 = cell23->next;
           if(cell23->next != NULL)
           {
               cell23 = cell23->next->next;
               sortedlist21->n--;
           }
        }
   }
   return sortedlist21;
}

