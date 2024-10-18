#include "P2_SL.h" 
sortedlist_t* func12(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist20 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist20->n = 0;
   sortedlist20->root = NULL;
   unsigned int loop16 = 0;
   unsigned int loopLimit16 = (rand()%loopsFactor)/3 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      if(sortedlist20 != NULL && sortedlist20->n > 0)
      {
          cell_t* cell34 = sortedlist20->root;
          if(cell34->val == 70)
          {
              cell34 = cell34->next;
              sortedlist20->n--;
          }else{
              while(cell34->next != NULL && cell34->next->val != 70) cell34 = cell34->next;
              if(cell34->next != NULL)
              {
                  cell34 = cell34->next->next;
                  sortedlist20->n--;
              }
           }
      }
   }
   if(sortedlist20 != NULL && sortedlist20->n > 0) {
        cell_t* cell35 = sortedlist20->root;
        if(sortedlist20->n == 0) {
            sortedlist20->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist20->root->val  = 81;
            sortedlist20->root->next = NULL;
            sortedlist20->n++;
        } else {
            while(cell35 != NULL)
            {
                if(cell35->next == NULL && cell35->val < 81) {
                    cell35->next = (cell_t*)malloc(sizeof(cell_t));
                    cell35->next->next = NULL;
                    cell35->next->val  = 81;
                    sortedlist20->n++;
                    break;
                } else if(81 < cell35->val) {
                    cell_t* tmp35 = cell35->next;
                    cell35->next = (cell_t*)malloc(sizeof(cell_t));
                    cell35->next->next = tmp35;
                    int tmp_val35 = cell35->val;
                    cell35->val = 81;
                    cell35->next->val = tmp_val35;
                    sortedlist20->n++;
                    break;
                }
                cell35 = cell35->next;
            }
        }
   }
   if(sortedlist20 != NULL && sortedlist20->n > 0){
        cell_t* cell36 = sortedlist20->root;
        while(cell36 != NULL && cell36->val != 25) cell36 = cell36->next;
        return cell36 != NULL ? sortedlist20 : NULL;
   }
   if(sortedlist20 != NULL && sortedlist20->n > 0)
   {
       cell_t* cell37 = sortedlist20->root;
       if(cell37->val == 27)
       {
           cell37 = cell37->next;
           sortedlist20->n--;
       }else{
           while(cell37->next != NULL && cell37->next->val != 27) cell37 = cell37->next;
           if(cell37->next != NULL)
           {
               cell37 = cell37->next->next;
               sortedlist20->n--;
           }
        }
   }
   return sortedlist20;
}

