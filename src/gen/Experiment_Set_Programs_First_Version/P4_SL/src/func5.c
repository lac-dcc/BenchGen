#include "P4_SL.h" 
sortedlist_t* func5(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist61 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist61->n = 0;
   sortedlist61->root = NULL;
   unsigned int loop60 = 0;
   unsigned int loopLimit60 = (rand()%loopsFactor)/2 + 1;
   for(; loop60 < loopLimit60; loop60++) {
      if(sortedlist61 != NULL && sortedlist61->n > 0)
      {
          cell_t* cell136 = sortedlist61->root;
          if(cell136->val == 51)
          {
              cell136 = cell136->next;
              sortedlist61->n--;
          }else{
              while(cell136->next != NULL && cell136->next->val != 51) cell136 = cell136->next;
              if(cell136->next != NULL)
              {
                  cell136 = cell136->next->next;
                  sortedlist61->n--;
              }
           }
      }
   }
   unsigned int loop61 = 0;
   unsigned int loopLimit61 = (rand()%loopsFactor)/2 + 1;
   for(; loop61 < loopLimit61; loop61++) {
      sortedlist_t* sortedlist62 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist62->n = 0;
      sortedlist62->root = NULL;
      sortedlist_t* sortedlist63 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist63->n = 0;
      sortedlist63->root = NULL;
      if(sortedlist63 != NULL && sortedlist63->n > 0){
           cell_t* cell137 = sortedlist63->root;
           while(cell137 != NULL && cell137->val != 28) cell137 = cell137->next;
           return cell137 != NULL ? sortedlist63 : NULL;
      }
      unsigned int loop62 = 0;
      unsigned int loopLimit62 = (rand()%loopsFactor)/3 + 1;
      for(; loop62 < loopLimit62; loop62++) {
         if(sortedlist63 != NULL && sortedlist63->n > 0){
              cell_t* cell138 = sortedlist63->root;
              while(cell138 != NULL && cell138->val != 7) cell138 = cell138->next;
              return cell138 != NULL ? sortedlist63 : NULL;
         }
      }
      if(sortedlist63 != NULL && sortedlist63->n > 0){
           cell_t* cell139 = sortedlist63->root;
           cell_t* tmp139  = NULL;
           while(cell139 != NULL) {
                tmp139 = cell139->next;
                free(cell139);
                cell139 = tmp139;
           }
           free(sortedlist63);
      }
      if(sortedlist62 != NULL && sortedlist62->n > 0){
           cell_t* cell140 = sortedlist62->root;
           cell_t* tmp140  = NULL;
           while(cell140 != NULL) {
                tmp140 = cell140->next;
                free(cell140);
                cell140 = tmp140;
           }
           free(sortedlist62);
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist61;
   sortedlist_t* sortedlist64 = func7(&params0, rng(), loopsFactor);
   free(params0.data);
   if(sortedlist61 != NULL && sortedlist61->n > 0){
        cell_t* cell141 = sortedlist61->root;
        while(cell141 != NULL && cell141->val != 21) cell141 = cell141->next;
        return cell141 != NULL ? sortedlist61 : NULL;
   }
   if(sortedlist64 != NULL && sortedlist64->n > 0){
        cell_t* cell142 = sortedlist64->root;
        cell_t* tmp142  = NULL;
        while(cell142 != NULL) {
             tmp142 = cell142->next;
             free(cell142);
             cell142 = tmp142;
        }
        free(sortedlist64);
   }
   return sortedlist61;
}

