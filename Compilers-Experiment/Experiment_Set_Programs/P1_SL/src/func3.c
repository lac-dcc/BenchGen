#include "P1_SL.h" 
sortedlist_t* func3(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist140 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist140->n = 0;
   sortedlist140->root = NULL;
   if(sortedlist140 != NULL && sortedlist140->n > 0) {
        cell_t* cell253 = sortedlist140->root;
        if(sortedlist140->n == 0) {
            sortedlist140->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist140->root->val  = 42;
            sortedlist140->root->next = NULL;
            sortedlist140->n++;
        } else {
            while(cell253 != NULL)
            {
                if(cell253->next == NULL && cell253->val < 42) {
                    cell253->next = (cell_t*)malloc(sizeof(cell_t));
                    cell253->next->next = NULL;
                    cell253->next->val  = 42;
                    sortedlist140->n++;
                    break;
                } else if(42 < cell253->val) {
                    cell_t* tmp253 = cell253->next;
                    cell253->next = (cell_t*)malloc(sizeof(cell_t));
                    cell253->next->next = tmp253;
                    int tmp_val253 = cell253->val;
                    cell253->val = 42;
                    cell253->next->val = tmp_val253;
                    sortedlist140->n++;
                    break;
                }
                cell253 = cell253->next;
            }
        }
   }
   if(sortedlist140 != NULL && sortedlist140->n > 0){
        cell_t* cell254 = sortedlist140->root;
        while(cell254 != NULL && cell254->val != 7) cell254 = cell254->next;
        return cell254 != NULL ? sortedlist140 : NULL;
   }
   if(sortedlist140 != NULL && sortedlist140->n > 0)
   {
       cell_t* cell255 = sortedlist140->root;
       if(cell255->val == 56)
       {
           cell255 = cell255->next;
           sortedlist140->n--;
       }else{
           while(cell255->next != NULL && cell255->next->val != 56) cell255 = cell255->next;
           if(cell255->next != NULL)
           {
               cell255 = cell255->next->next;
               sortedlist140->n--;
           }
        }
   }
   sortedlist_t* sortedlist141 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist141->n = 0;
   sortedlist141->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop56 = 0;
      unsigned int loopLimit56 = (rand()%loopsFactor)/2 + 1;
      for(; loop56 < loopLimit56; loop56++) {
         sortedlist_t* sortedlist142 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist142->n = 0;
         sortedlist142->root = NULL;
         if(sortedlist141 != NULL && sortedlist141->n > 0)
         {
             cell_t* cell256 = sortedlist141->root;
             if(cell256->val == 18)
             {
                 cell256 = cell256->next;
                 sortedlist141->n--;
             }else{
                 while(cell256->next != NULL && cell256->next->val != 18) cell256 = cell256->next;
                 if(cell256->next != NULL)
                 {
                     cell256 = cell256->next->next;
                     sortedlist141->n--;
                 }
              }
         }
         if(sortedlist142 != NULL && sortedlist142->n > 0){
              cell_t* cell257 = sortedlist142->root;
              while(cell257 != NULL && cell257->val != 12) cell257 = cell257->next;
              return cell257 != NULL ? sortedlist142 : NULL;
         }
         if(sortedlist142 != NULL && sortedlist142->n > 0){
              cell_t* cell258 = sortedlist142->root;
              cell_t* tmp258  = NULL;
              while(cell258 != NULL) {
                   tmp258 = cell258->next;
                   free(cell258);
                   cell258 = tmp258;
              }
              free(sortedlist142);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist140;
      params0.data[1] = sortedlist141;
      sortedlist_t* sortedlist143 = func11(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist143 != NULL && sortedlist143->n > 0){
           cell_t* cell259 = sortedlist143->root;
           cell_t* tmp259  = NULL;
           while(cell259 != NULL) {
                tmp259 = cell259->next;
                free(cell259);
                cell259 = tmp259;
           }
           free(sortedlist143);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist140;
   params0.data[1] = sortedlist141;
   sortedlist_t* sortedlist144 = func8(&params0, rng(), loopsFactor);
   free(params0.data);
   if(sortedlist144 != NULL && sortedlist144->n > 0){
        cell_t* cell260 = sortedlist144->root;
        cell_t* tmp260  = NULL;
        while(cell260 != NULL) {
             tmp260 = cell260->next;
             free(cell260);
             cell260 = tmp260;
        }
        free(sortedlist144);
   }
   if(sortedlist140 != NULL && sortedlist140->n > 0){
        cell_t* cell261 = sortedlist140->root;
        cell_t* tmp261  = NULL;
        while(cell261 != NULL) {
             tmp261 = cell261->next;
             free(cell261);
             cell261 = tmp261;
        }
        free(sortedlist140);
   }
   return sortedlist141;
}

