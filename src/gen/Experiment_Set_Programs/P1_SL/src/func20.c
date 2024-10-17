#include "P1_SL.h" 
sortedlist_t* func20(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist13 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist13->n = 0;
   sortedlist13->root = NULL;
   unsigned int loop6 = 0;
   unsigned int loopLimit6 = (rand()%loopsFactor)/2 + 1;
   for(; loop6 < loopLimit6; loop6++) {
      if(sortedlist13 != NULL && sortedlist13->n > 0)
      {
          cell_t* cell13 = sortedlist13->root;
          if(cell13->val == 68)
          {
              cell13 = cell13->next;
              sortedlist13->n--;
          }else{
              while(cell13->next != NULL && cell13->next->val != 68) cell13 = cell13->next;
              if(cell13->next != NULL)
              {
                  cell13 = cell13->next->next;
                  sortedlist13->n--;
              }
           }
      }
   }
   unsigned int loop7 = 0;
   unsigned int loopLimit7 = (rand()%loopsFactor)/2 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      if(sortedlist13 != NULL && sortedlist13->n > 0) {
           cell_t* cell14 = sortedlist13->root;
           if(sortedlist13->n == 0) {
               sortedlist13->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist13->root->val  = 29;
               sortedlist13->root->next = NULL;
               sortedlist13->n++;
           } else {
               while(cell14 != NULL)
               {
                   if(cell14->next == NULL && cell14->val < 29) {
                       cell14->next = (cell_t*)malloc(sizeof(cell_t));
                       cell14->next->next = NULL;
                       cell14->next->val  = 29;
                       sortedlist13->n++;
                       break;
                   } else if(29 < cell14->val) {
                       cell_t* tmp14 = cell14->next;
                       cell14->next = (cell_t*)malloc(sizeof(cell_t));
                       cell14->next->next = tmp14;
                       int tmp_val14 = cell14->val;
                       cell14->val = 29;
                       cell14->next->val = tmp_val14;
                       sortedlist13->n++;
                       break;
                   }
                   cell14 = cell14->next;
               }
           }
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist13;
   sortedlist_t* sortedlist14 = func23(&params0, loopsFactor);
   free(params0.data);
   if(sortedlist13 != NULL && sortedlist13->n > 0){
        cell_t* cell15 = sortedlist13->root;
        while(cell15 != NULL && cell15->val != 62) cell15 = cell15->next;
        return cell15 != NULL ? sortedlist13 : NULL;
   }
   if(sortedlist13 != NULL && sortedlist13->n > 0){
        cell_t* cell16 = sortedlist13->root;
        cell_t* tmp16  = NULL;
        while(cell16 != NULL) {
             tmp16 = cell16->next;
             free(cell16);
             cell16 = tmp16;
        }
        free(sortedlist13);
   }
   return sortedlist14;
}

