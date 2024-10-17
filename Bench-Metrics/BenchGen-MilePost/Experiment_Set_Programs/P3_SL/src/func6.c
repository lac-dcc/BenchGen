#include "P3_SL.h" 
sortedlist_t* func6(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist38 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist38->n = 0;
   sortedlist38->root = NULL;
   unsigned int loop40 = 0;
   unsigned int loopLimit40 = (rand()%loopsFactor)/3 + 1;
   for(; loop40 < loopLimit40; loop40++) {
      if(sortedlist38 != NULL && sortedlist38->n > 0)
      {
          cell_t* cell72 = sortedlist38->root;
          if(cell72->val == 39)
          {
              cell72 = cell72->next;
              sortedlist38->n--;
          }else{
              while(cell72->next != NULL && cell72->next->val != 39) cell72 = cell72->next;
              if(cell72->next != NULL)
              {
                  cell72 = cell72->next->next;
                  sortedlist38->n--;
              }
           }
      }
   }
   unsigned int loop41 = 0;
   unsigned int loopLimit41 = (rand()%loopsFactor)/3 + 1;
   for(; loop41 < loopLimit41; loop41++) {
      if(sortedlist38 != NULL && sortedlist38->n > 0) {
           cell_t* cell73 = sortedlist38->root;
           if(sortedlist38->n == 0) {
               sortedlist38->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist38->root->val  = 70;
               sortedlist38->root->next = NULL;
               sortedlist38->n++;
           } else {
               while(cell73 != NULL)
               {
                   if(cell73->next == NULL && cell73->val < 70) {
                       cell73->next = (cell_t*)malloc(sizeof(cell_t));
                       cell73->next->next = NULL;
                       cell73->next->val  = 70;
                       sortedlist38->n++;
                       break;
                   } else if(70 < cell73->val) {
                       cell_t* tmp73 = cell73->next;
                       cell73->next = (cell_t*)malloc(sizeof(cell_t));
                       cell73->next->next = tmp73;
                       int tmp_val73 = cell73->val;
                       cell73->val = 70;
                       cell73->next->val = tmp_val73;
                       sortedlist38->n++;
                       break;
                   }
                   cell73 = cell73->next;
               }
           }
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist38;
   sortedlist_t* sortedlist39 = func8(&params0, rng(), loopsFactor);
   free(params0.data);
   if(sortedlist38 != NULL && sortedlist38->n > 0){
        cell_t* cell74 = sortedlist38->root;
        while(cell74 != NULL && cell74->val != 78) cell74 = cell74->next;
        return cell74 != NULL ? sortedlist38 : NULL;
   }
   if(sortedlist38 != NULL && sortedlist38->n > 0){
        cell_t* cell75 = sortedlist38->root;
        cell_t* tmp75  = NULL;
        while(cell75 != NULL) {
             tmp75 = cell75->next;
             free(cell75);
             cell75 = tmp75;
        }
        free(sortedlist38);
   }
   return sortedlist39;
}

