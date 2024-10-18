#include "P2_SL.h" 
sortedlist_t* func8(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist16 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist16->n = 0;
   sortedlist16->root = NULL;
   unsigned int loop12 = 0;
   unsigned int loopLimit12 = (rand()%loopsFactor)/3 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      if(sortedlist16 != NULL && sortedlist16->n > 0)
      {
          cell_t* cell30 = sortedlist16->root;
          if(cell30->val == 15)
          {
              cell30 = cell30->next;
              sortedlist16->n--;
          }else{
              while(cell30->next != NULL && cell30->next->val != 15) cell30 = cell30->next;
              if(cell30->next != NULL)
              {
                  cell30 = cell30->next->next;
                  sortedlist16->n--;
              }
           }
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist16;
   sortedlist_t* sortedlist17 = func16(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop14 = 0;
   unsigned int loopLimit14 = (rand()%loopsFactor)/3 + 1;
   for(; loop14 < loopLimit14; loop14++) {
      if(sortedlist17 != NULL && sortedlist17->n > 0)
      {
          cell_t* cell32 = sortedlist17->root;
          if(cell32->val == 80)
          {
              cell32 = cell32->next;
              sortedlist17->n--;
          }else{
              while(cell32->next != NULL && cell32->next->val != 80) cell32 = cell32->next;
              if(cell32->next != NULL)
              {
                  cell32 = cell32->next->next;
                  sortedlist17->n--;
              }
           }
      }
   }
   unsigned int loop15 = 0;
   unsigned int loopLimit15 = (rand()%loopsFactor)/3 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      if(sortedlist16 != NULL && sortedlist16->n > 0) {
           cell_t* cell33 = sortedlist16->root;
           if(sortedlist16->n == 0) {
               sortedlist16->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist16->root->val  = 73;
               sortedlist16->root->next = NULL;
               sortedlist16->n++;
           } else {
               while(cell33 != NULL)
               {
                   if(cell33->next == NULL && cell33->val < 73) {
                       cell33->next = (cell_t*)malloc(sizeof(cell_t));
                       cell33->next->next = NULL;
                       cell33->next->val  = 73;
                       sortedlist16->n++;
                       break;
                   } else if(73 < cell33->val) {
                       cell_t* tmp33 = cell33->next;
                       cell33->next = (cell_t*)malloc(sizeof(cell_t));
                       cell33->next->next = tmp33;
                       int tmp_val33 = cell33->val;
                       cell33->val = 73;
                       cell33->next->val = tmp_val33;
                       sortedlist16->n++;
                       break;
                   }
                   cell33 = cell33->next;
               }
           }
      }
   }
   sortedlist_t_param params1;
   params1.size = 2;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist16;
   params1.data[1] = sortedlist17;
   sortedlist_t* sortedlist19 = func12(&params1, loopsFactor);
   free(params1.data);
   if(sortedlist19 != NULL && sortedlist19->n > 0){
        cell_t* cell38 = sortedlist19->root;
        while(cell38 != NULL && cell38->val != 46) cell38 = cell38->next;
        return cell38 != NULL ? sortedlist19 : NULL;
   }
   if(sortedlist19 != NULL && sortedlist19->n > 0){
        cell_t* cell39 = sortedlist19->root;
        cell_t* tmp39  = NULL;
        while(cell39 != NULL) {
             tmp39 = cell39->next;
             free(cell39);
             cell39 = tmp39;
        }
        free(sortedlist19);
   }
   if(sortedlist17 != NULL && sortedlist17->n > 0){
        cell_t* cell40 = sortedlist17->root;
        cell_t* tmp40  = NULL;
        while(cell40 != NULL) {
             tmp40 = cell40->next;
             free(cell40);
             cell40 = tmp40;
        }
        free(sortedlist17);
   }
   return sortedlist16;
}

