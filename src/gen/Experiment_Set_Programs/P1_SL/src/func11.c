#include "P1_SL.h" 
sortedlist_t* func11(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist9 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist9->n = 0;
   sortedlist9->root = NULL;
   unsigned int loop4 = 0;
   unsigned int loopLimit4 = (rand()%loopsFactor)/2 + 1;
   for(; loop4 < loopLimit4; loop4++) {
      if(sortedlist9 != NULL && sortedlist9->n > 0)
      {
          cell_t* cell9 = sortedlist9->root;
          if(cell9->val == 26)
          {
              cell9 = cell9->next;
              sortedlist9->n--;
          }else{
              while(cell9->next != NULL && cell9->next->val != 26) cell9 = cell9->next;
              if(cell9->next != NULL)
              {
                  cell9 = cell9->next->next;
                  sortedlist9->n--;
              }
           }
      }
   }
   sortedlist_t* sortedlist10 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist10->n = 0;
   sortedlist10->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/2 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         sortedlist_t* sortedlist11 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist11->n = 0;
         sortedlist11->root = NULL;
         if(sortedlist9 != NULL && sortedlist9->n > 0)
         {
             cell_t* cell10 = sortedlist9->root;
             if(cell10->val == 26)
             {
                 cell10 = cell10->next;
                 sortedlist9->n--;
             }else{
                 while(cell10->next != NULL && cell10->next->val != 26) cell10 = cell10->next;
                 if(cell10->next != NULL)
                 {
                     cell10 = cell10->next->next;
                     sortedlist9->n--;
                 }
              }
         }
         if(sortedlist10 != NULL && sortedlist10->n > 0){
              cell_t* cell11 = sortedlist10->root;
              while(cell11 != NULL && cell11->val != 36) cell11 = cell11->next;
              return cell11 != NULL ? sortedlist10 : NULL;
         }
         if(sortedlist11 != NULL && sortedlist11->n > 0){
              cell_t* cell12 = sortedlist11->root;
              cell_t* tmp12  = NULL;
              while(cell12 != NULL) {
                   tmp12 = cell12->next;
                   free(cell12);
                   cell12 = tmp12;
              }
              free(sortedlist11);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist9;
      params0.data[1] = sortedlist10;
      sortedlist_t* sortedlist12 = func20(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist12 != NULL && sortedlist12->n > 0){
           cell_t* cell17 = sortedlist12->root;
           cell_t* tmp17  = NULL;
           while(cell17 != NULL) {
                tmp17 = cell17->next;
                free(cell17);
                cell17 = tmp17;
           }
           free(sortedlist12);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist9;
   params0.data[1] = sortedlist10;
   sortedlist_t* sortedlist16 = func17(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop12 = 0;
   unsigned int loopLimit12 = (rand()%loopsFactor)/2 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      if(sortedlist16 != NULL && sortedlist16->n > 0) {
           cell_t* cell37 = sortedlist16->root;
           if(sortedlist16->n == 0) {
               sortedlist16->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist16->root->val  = 96;
               sortedlist16->root->next = NULL;
               sortedlist16->n++;
           } else {
               while(cell37 != NULL)
               {
                   if(cell37->next == NULL && cell37->val < 96) {
                       cell37->next = (cell_t*)malloc(sizeof(cell_t));
                       cell37->next->next = NULL;
                       cell37->next->val  = 96;
                       sortedlist16->n++;
                       break;
                   } else if(96 < cell37->val) {
                       cell_t* tmp37 = cell37->next;
                       cell37->next = (cell_t*)malloc(sizeof(cell_t));
                       cell37->next->next = tmp37;
                       int tmp_val37 = cell37->val;
                       cell37->val = 96;
                       cell37->next->val = tmp_val37;
                       sortedlist16->n++;
                       break;
                   }
                   cell37 = cell37->next;
               }
           }
      }
   }
   sortedlist_t_param params1;
   params1.size = 3;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist9;
   params1.data[1] = sortedlist10;
   params1.data[2] = sortedlist16;
   sortedlist_t* sortedlist26 = func14(&params1, rng(), loopsFactor);
   free(params1.data);
   if(sortedlist9 != NULL && sortedlist9->n > 0){
        cell_t* cell60 = sortedlist9->root;
        while(cell60 != NULL && cell60->val != 68) cell60 = cell60->next;
        return cell60 != NULL ? sortedlist9 : NULL;
   }
   if(sortedlist16 != NULL && sortedlist16->n > 0){
        cell_t* cell61 = sortedlist16->root;
        cell_t* tmp61  = NULL;
        while(cell61 != NULL) {
             tmp61 = cell61->next;
             free(cell61);
             cell61 = tmp61;
        }
        free(sortedlist16);
   }
   if(sortedlist10 != NULL && sortedlist10->n > 0){
        cell_t* cell62 = sortedlist10->root;
        cell_t* tmp62  = NULL;
        while(cell62 != NULL) {
             tmp62 = cell62->next;
             free(cell62);
             cell62 = tmp62;
        }
        free(sortedlist10);
   }
   if(sortedlist9 != NULL && sortedlist9->n > 0){
        cell_t* cell63 = sortedlist9->root;
        cell_t* tmp63  = NULL;
        while(cell63 != NULL) {
             tmp63 = cell63->next;
             free(cell63);
             cell63 = tmp63;
        }
        free(sortedlist9);
   }
   return sortedlist26;
}

