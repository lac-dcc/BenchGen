#include "P3_SL.h" 
sortedlist_t* func0(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist56 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist56->n = 0;
   sortedlist56->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop54 = 0;
      unsigned int loopLimit54 = (rand()%loopsFactor)/3 + 1;
      for(; loop54 < loopLimit54; loop54++) {
         sortedlist_t* sortedlist57 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist57->n = 0;
         sortedlist57->root = NULL;
         if(sortedlist57 != NULL && sortedlist57->n > 0){
              cell_t* cell102 = sortedlist57->root;
              while(cell102 != NULL && cell102->val != 56) cell102 = cell102->next;
              return cell102 != NULL ? sortedlist57 : NULL;
         }
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist56;
         params0.data[1] = sortedlist57;
         sortedlist_t* sortedlist58 = func9(&params0, rng(), loopsFactor);
         free(params0.data);
         unsigned int loop55 = 0;
         unsigned int loopLimit55 = (rand()%loopsFactor)/4 + 1;
         for(; loop55 < loopLimit55; loop55++) {
            if(sortedlist58 != NULL && sortedlist58->n > 0)
            {
                cell_t* cell103 = sortedlist58->root;
                if(cell103->val == 53)
                {
                    cell103 = cell103->next;
                    sortedlist58->n--;
                }else{
                    while(cell103->next != NULL && cell103->next->val != 53) cell103 = cell103->next;
                    if(cell103->next != NULL)
                    {
                        cell103 = cell103->next->next;
                        sortedlist58->n--;
                    }
                 }
            }
         }
         unsigned int loop56 = 0;
         unsigned int loopLimit56 = (rand()%loopsFactor)/4 + 1;
         for(; loop56 < loopLimit56; loop56++) {
            if(sortedlist56 != NULL && sortedlist56->n > 0) {
                 cell_t* cell104 = sortedlist56->root;
                 if(sortedlist56->n == 0) {
                     sortedlist56->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist56->root->val  = 65;
                     sortedlist56->root->next = NULL;
                     sortedlist56->n++;
                 } else {
                     while(cell104 != NULL)
                     {
                         if(cell104->next == NULL && cell104->val < 65) {
                             cell104->next = (cell_t*)malloc(sizeof(cell_t));
                             cell104->next->next = NULL;
                             cell104->next->val  = 65;
                             sortedlist56->n++;
                             break;
                         } else if(65 < cell104->val) {
                             cell_t* tmp104 = cell104->next;
                             cell104->next = (cell_t*)malloc(sizeof(cell_t));
                             cell104->next->next = tmp104;
                             int tmp_val104 = cell104->val;
                             cell104->val = 65;
                             cell104->next->val = tmp_val104;
                             sortedlist56->n++;
                             break;
                         }
                         cell104 = cell104->next;
                     }
                 }
            }
         }
         if(sortedlist58 != NULL && sortedlist58->n > 0){
              cell_t* cell105 = sortedlist58->root;
              cell_t* tmp105  = NULL;
              while(cell105 != NULL) {
                   tmp105 = cell105->next;
                   free(cell105);
                   cell105 = tmp105;
              }
              free(sortedlist58);
         }
         if(sortedlist57 != NULL && sortedlist57->n > 0){
              cell_t* cell106 = sortedlist57->root;
              cell_t* tmp106  = NULL;
              while(cell106 != NULL) {
                   tmp106 = cell106->next;
                   free(cell106);
                   cell106 = tmp106;
              }
              free(sortedlist57);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist56;
      sortedlist_t* sortedlist59 = func6(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist59 != NULL && sortedlist59->n > 0){
           cell_t* cell107 = sortedlist59->root;
           cell_t* tmp107  = NULL;
           while(cell107 != NULL) {
                tmp107 = cell107->next;
                free(cell107);
                cell107 = tmp107;
           }
           free(sortedlist59);
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist56;
   sortedlist_t* sortedlist60 = func3(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop79 = 0;
   unsigned int loopLimit79 = (rand()%loopsFactor)/3 + 1;
   for(; loop79 < loopLimit79; loop79++) {
      if(sortedlist60 != NULL && sortedlist60->n > 0)
      {
          cell_t* cell150 = sortedlist60->root;
          if(cell150->val == 37)
          {
              cell150 = cell150->next;
              sortedlist60->n--;
          }else{
              while(cell150->next != NULL && cell150->next->val != 37) cell150 = cell150->next;
              if(cell150->next != NULL)
              {
                  cell150 = cell150->next->next;
                  sortedlist60->n--;
              }
           }
      }
   }
   if(sortedlist60 != NULL && sortedlist60->n > 0){
        cell_t* cell151 = sortedlist60->root;
        cell_t* tmp151  = NULL;
        while(cell151 != NULL) {
             tmp151 = cell151->next;
             free(cell151);
             cell151 = tmp151;
        }
        free(sortedlist60);
   }
   return sortedlist56;
}

