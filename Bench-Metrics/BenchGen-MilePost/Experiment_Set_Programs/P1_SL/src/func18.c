#include "P1_SL.h" 
sortedlist_t* func18(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist42 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist42->n = 0;
   sortedlist42->root = NULL;
   unsigned int loop19 = 0;
   unsigned int loopLimit19 = (rand()%loopsFactor)/2 + 1;
   for(; loop19 < loopLimit19; loop19++) {
      if(sortedlist42 != NULL && sortedlist42->n > 0)
      {
          cell_t* cell69 = sortedlist42->root;
          if(cell69->val == 34)
          {
              cell69 = cell69->next;
              sortedlist42->n--;
          }else{
              while(cell69->next != NULL && cell69->next->val != 34) cell69 = cell69->next;
              if(cell69->next != NULL)
              {
                  cell69 = cell69->next->next;
                  sortedlist42->n--;
              }
           }
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist42;
   sortedlist_t* sortedlist43 = func24(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop20 = 0;
   unsigned int loopLimit20 = (rand()%loopsFactor)/2 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      if(sortedlist42 != NULL && sortedlist42->n > 0) {
           cell_t* cell70 = sortedlist42->root;
           if(sortedlist42->n == 0) {
               sortedlist42->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist42->root->val  = 67;
               sortedlist42->root->next = NULL;
               sortedlist42->n++;
           } else {
               while(cell70 != NULL)
               {
                   if(cell70->next == NULL && cell70->val < 67) {
                       cell70->next = (cell_t*)malloc(sizeof(cell_t));
                       cell70->next->next = NULL;
                       cell70->next->val  = 67;
                       sortedlist42->n++;
                       break;
                   } else if(67 < cell70->val) {
                       cell_t* tmp70 = cell70->next;
                       cell70->next = (cell_t*)malloc(sizeof(cell_t));
                       cell70->next->next = tmp70;
                       int tmp_val70 = cell70->val;
                       cell70->val = 67;
                       cell70->next->val = tmp_val70;
                       sortedlist42->n++;
                       break;
                   }
                   cell70 = cell70->next;
               }
           }
      }
   }
   sortedlist_t_param params1;
   params1.size = 2;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist42;
   params1.data[1] = sortedlist43;
   sortedlist_t* sortedlist44 = func21(&params1, loopsFactor);
   free(params1.data);
   if(sortedlist42 != NULL && sortedlist42->n > 0){
        cell_t* cell71 = sortedlist42->root;
        while(cell71 != NULL && cell71->val != 97) cell71 = cell71->next;
        return cell71 != NULL ? sortedlist42 : NULL;
   }
   if(sortedlist43 != NULL && sortedlist43->n > 0){
        cell_t* cell72 = sortedlist43->root;
        cell_t* tmp72  = NULL;
        while(cell72 != NULL) {
             tmp72 = cell72->next;
             free(cell72);
             cell72 = tmp72;
        }
        free(sortedlist43);
   }
   if(sortedlist42 != NULL && sortedlist42->n > 0){
        cell_t* cell73 = sortedlist42->root;
        cell_t* tmp73  = NULL;
        while(cell73 != NULL) {
             tmp73 = cell73->next;
             free(cell73);
             cell73 = tmp73;
        }
        free(sortedlist42);
   }
   return sortedlist44;
}

