#include "P1_SL.h" 
sortedlist_t* func5(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist81 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist81->n = 0;
   sortedlist81->root = NULL;
   if(sortedlist81 != NULL && sortedlist81->n > 0) {
        cell_t* cell144 = sortedlist81->root;
        if(sortedlist81->n == 0) {
            sortedlist81->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist81->root->val  = 7;
            sortedlist81->root->next = NULL;
            sortedlist81->n++;
        } else {
            while(cell144 != NULL)
            {
                if(cell144->next == NULL && cell144->val < 7) {
                    cell144->next = (cell_t*)malloc(sizeof(cell_t));
                    cell144->next->next = NULL;
                    cell144->next->val  = 7;
                    sortedlist81->n++;
                    break;
                } else if(7 < cell144->val) {
                    cell_t* tmp144 = cell144->next;
                    cell144->next = (cell_t*)malloc(sizeof(cell_t));
                    cell144->next->next = tmp144;
                    int tmp_val144 = cell144->val;
                    cell144->val = 7;
                    cell144->next->val = tmp_val144;
                    sortedlist81->n++;
                    break;
                }
                cell144 = cell144->next;
            }
        }
   }
   if(sortedlist81 != NULL && sortedlist81->n > 0){
        cell_t* cell145 = sortedlist81->root;
        while(cell145 != NULL && cell145->val != 21) cell145 = cell145->next;
        return cell145 != NULL ? sortedlist81 : NULL;
   }
   if(sortedlist81 != NULL && sortedlist81->n > 0)
   {
       cell_t* cell146 = sortedlist81->root;
       if(cell146->val == 95)
       {
           cell146 = cell146->next;
           sortedlist81->n--;
       }else{
           while(cell146->next != NULL && cell146->next->val != 95) cell146 = cell146->next;
           if(cell146->next != NULL)
           {
               cell146 = cell146->next->next;
               sortedlist81->n--;
           }
        }
   }
   sortedlist_t* sortedlist82 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist82->n = 0;
   sortedlist82->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop33 = 0;
      unsigned int loopLimit33 = (rand()%loopsFactor)/2 + 1;
      for(; loop33 < loopLimit33; loop33++) {
         sortedlist_t* sortedlist83 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist83->n = 0;
         sortedlist83->root = NULL;
         if(sortedlist83 != NULL && sortedlist83->n > 0)
         {
             cell_t* cell147 = sortedlist83->root;
             if(cell147->val == 37)
             {
                 cell147 = cell147->next;
                 sortedlist83->n--;
             }else{
                 while(cell147->next != NULL && cell147->next->val != 37) cell147 = cell147->next;
                 if(cell147->next != NULL)
                 {
                     cell147 = cell147->next->next;
                     sortedlist83->n--;
                 }
              }
         }
         if(sortedlist81 != NULL && sortedlist81->n > 0){
              cell_t* cell148 = sortedlist81->root;
              while(cell148 != NULL && cell148->val != 93) cell148 = cell148->next;
              return cell148 != NULL ? sortedlist81 : NULL;
         }
         if(sortedlist83 != NULL && sortedlist83->n > 0){
              cell_t* cell149 = sortedlist83->root;
              cell_t* tmp149  = NULL;
              while(cell149 != NULL) {
                   tmp149 = cell149->next;
                   free(cell149);
                   cell149 = tmp149;
              }
              free(sortedlist83);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist81;
      params0.data[1] = sortedlist82;
      sortedlist_t* sortedlist84 = func16(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist84 != NULL && sortedlist84->n > 0){
           cell_t* cell160 = sortedlist84->root;
           cell_t* tmp160  = NULL;
           while(cell160 != NULL) {
                tmp160 = cell160->next;
                free(cell160);
                cell160 = tmp160;
           }
           free(sortedlist84);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist81;
   params0.data[1] = sortedlist82;
   sortedlist_t* sortedlist91 = func13(&params0, rng(), loopsFactor);
   free(params0.data);
   if(sortedlist91 != NULL && sortedlist91->n > 0){
        cell_t* cell191 = sortedlist91->root;
        cell_t* tmp191  = NULL;
        while(cell191 != NULL) {
             tmp191 = cell191->next;
             free(cell191);
             cell191 = tmp191;
        }
        free(sortedlist91);
   }
   if(sortedlist82 != NULL && sortedlist82->n > 0){
        cell_t* cell192 = sortedlist82->root;
        cell_t* tmp192  = NULL;
        while(cell192 != NULL) {
             tmp192 = cell192->next;
             free(cell192);
             cell192 = tmp192;
        }
        free(sortedlist82);
   }
   return sortedlist81;
}

