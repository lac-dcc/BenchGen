#include "P1_SL.h" 
sortedlist_t* func14(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist27 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist27->n = 0;
   sortedlist27->root = NULL;
   if(sortedlist27 != NULL && sortedlist27->n > 0) {
        cell_t* cell38 = sortedlist27->root;
        if(sortedlist27->n == 0) {
            sortedlist27->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist27->root->val  = 5;
            sortedlist27->root->next = NULL;
            sortedlist27->n++;
        } else {
            while(cell38 != NULL)
            {
                if(cell38->next == NULL && cell38->val < 5) {
                    cell38->next = (cell_t*)malloc(sizeof(cell_t));
                    cell38->next->next = NULL;
                    cell38->next->val  = 5;
                    sortedlist27->n++;
                    break;
                } else if(5 < cell38->val) {
                    cell_t* tmp38 = cell38->next;
                    cell38->next = (cell_t*)malloc(sizeof(cell_t));
                    cell38->next->next = tmp38;
                    int tmp_val38 = cell38->val;
                    cell38->val = 5;
                    cell38->next->val = tmp_val38;
                    sortedlist27->n++;
                    break;
                }
                cell38 = cell38->next;
            }
        }
   }
   if(sortedlist27 != NULL && sortedlist27->n > 0){
        cell_t* cell39 = sortedlist27->root;
        while(cell39 != NULL && cell39->val != 84) cell39 = cell39->next;
        return cell39 != NULL ? sortedlist27 : NULL;
   }
   if(sortedlist27 != NULL && sortedlist27->n > 0)
   {
       cell_t* cell40 = sortedlist27->root;
       if(cell40->val == 36)
       {
           cell40 = cell40->next;
           sortedlist27->n--;
       }else{
           while(cell40->next != NULL && cell40->next->val != 36) cell40 = cell40->next;
           if(cell40->next != NULL)
           {
               cell40 = cell40->next->next;
               sortedlist27->n--;
           }
        }
   }
   sortedlist_t* sortedlist28 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist28->n = 0;
   sortedlist28->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop13 = 0;
      unsigned int loopLimit13 = (rand()%loopsFactor)/2 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         sortedlist_t* sortedlist29 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist29->n = 0;
         sortedlist29->root = NULL;
         if(sortedlist29 != NULL && sortedlist29->n > 0)
         {
             cell_t* cell41 = sortedlist29->root;
             if(cell41->val == 46)
             {
                 cell41 = cell41->next;
                 sortedlist29->n--;
             }else{
                 while(cell41->next != NULL && cell41->next->val != 46) cell41 = cell41->next;
                 if(cell41->next != NULL)
                 {
                     cell41 = cell41->next->next;
                     sortedlist29->n--;
                 }
              }
         }
         if(sortedlist27 != NULL && sortedlist27->n > 0){
              cell_t* cell42 = sortedlist27->root;
              while(cell42 != NULL && cell42->val != 13) cell42 = cell42->next;
              return cell42 != NULL ? sortedlist27 : NULL;
         }
         if(sortedlist29 != NULL && sortedlist29->n > 0){
              cell_t* cell43 = sortedlist29->root;
              cell_t* tmp43  = NULL;
              while(cell43 != NULL) {
                   tmp43 = cell43->next;
                   free(cell43);
                   cell43 = tmp43;
              }
              free(sortedlist29);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist27;
      params0.data[1] = sortedlist28;
      sortedlist_t* sortedlist30 = func25(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist30 != NULL && sortedlist30->n > 0){
           cell_t* cell45 = sortedlist30->root;
           cell_t* tmp45  = NULL;
           while(cell45 != NULL) {
                tmp45 = cell45->next;
                free(cell45);
                cell45 = tmp45;
           }
           free(sortedlist30);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist27;
   params0.data[1] = sortedlist28;
   sortedlist_t* sortedlist32 = func22(&params0, rng(), loopsFactor);
   free(params0.data);
   if(sortedlist32 != NULL && sortedlist32->n > 0){
        cell_t* cell58 = sortedlist32->root;
        cell_t* tmp58  = NULL;
        while(cell58 != NULL) {
             tmp58 = cell58->next;
             free(cell58);
             cell58 = tmp58;
        }
        free(sortedlist32);
   }
   if(sortedlist28 != NULL && sortedlist28->n > 0){
        cell_t* cell59 = sortedlist28->root;
        cell_t* tmp59  = NULL;
        while(cell59 != NULL) {
             tmp59 = cell59->next;
             free(cell59);
             cell59 = tmp59;
        }
        free(sortedlist28);
   }
   return sortedlist27;
}

