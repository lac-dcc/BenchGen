#include "P5_SL.h" 
sortedlist_t* func7(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist55 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist55->n = 0;
   sortedlist55->root = NULL;
   unsigned int loop53 = 0;
   unsigned int loopLimit53 = (rand()%loopsFactor)/2 + 1;
   for(; loop53 < loopLimit53; loop53++) {
      if(sortedlist55 != NULL && sortedlist55->n > 0)
      {
          cell_t* cell121 = sortedlist55->root;
          if(cell121->val == 28)
          {
              cell121 = cell121->next;
              sortedlist55->n--;
          }else{
              while(cell121->next != NULL && cell121->next->val != 28) cell121 = cell121->next;
              if(cell121->next != NULL)
              {
                  cell121 = cell121->next->next;
                  sortedlist55->n--;
              }
           }
      }
   }
   unsigned int loop54 = 0;
   unsigned int loopLimit54 = (rand()%loopsFactor)/2 + 1;
   for(; loop54 < loopLimit54; loop54++) {
      sortedlist_t* sortedlist56 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist56->n = 0;
      sortedlist56->root = NULL;
      sortedlist_t* sortedlist57 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist57->n = 0;
      sortedlist57->root = NULL;
      if(sortedlist56 != NULL && sortedlist56->n > 0){
           cell_t* cell122 = sortedlist56->root;
           while(cell122 != NULL && cell122->val != 50) cell122 = cell122->next;
           return cell122 != NULL ? sortedlist56 : NULL;
      }
      unsigned int loop55 = 0;
      unsigned int loopLimit55 = (rand()%loopsFactor)/3 + 1;
      for(; loop55 < loopLimit55; loop55++) {
         if(sortedlist56 != NULL && sortedlist56->n > 0){
              cell_t* cell123 = sortedlist56->root;
              while(cell123 != NULL && cell123->val != 0) cell123 = cell123->next;
              return cell123 != NULL ? sortedlist56 : NULL;
         }
      }
      if(sortedlist57 != NULL && sortedlist57->n > 0){
           cell_t* cell124 = sortedlist57->root;
           cell_t* tmp124  = NULL;
           while(cell124 != NULL) {
                tmp124 = cell124->next;
                free(cell124);
                cell124 = tmp124;
           }
           free(sortedlist57);
      }
      if(sortedlist56 != NULL && sortedlist56->n > 0){
           cell_t* cell125 = sortedlist56->root;
           cell_t* tmp125  = NULL;
           while(cell125 != NULL) {
                tmp125 = cell125->next;
                free(cell125);
                cell125 = tmp125;
           }
           free(sortedlist56);
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist55;
   sortedlist_t* sortedlist58 = func9(&params0, rng(), loopsFactor);
   free(params0.data);
   if(sortedlist55 != NULL && sortedlist55->n > 0){
        cell_t* cell126 = sortedlist55->root;
        while(cell126 != NULL && cell126->val != 64) cell126 = cell126->next;
        return cell126 != NULL ? sortedlist55 : NULL;
   }
   if(sortedlist58 != NULL && sortedlist58->n > 0){
        cell_t* cell127 = sortedlist58->root;
        cell_t* tmp127  = NULL;
        while(cell127 != NULL) {
             tmp127 = cell127->next;
             free(cell127);
             cell127 = tmp127;
        }
        free(sortedlist58);
   }
   return sortedlist55;
}

