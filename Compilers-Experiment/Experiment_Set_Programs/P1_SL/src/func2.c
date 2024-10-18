#include "P1_SL.h" 
sortedlist_t* func2(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist5 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist5->n = 0;
   sortedlist5->root = NULL;
   unsigned int loop2 = 0;
   unsigned int loopLimit2 = (rand()%loopsFactor)/2 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      if(sortedlist5 != NULL && sortedlist5->n > 0)
      {
          cell_t* cell5 = sortedlist5->root;
          if(cell5->val == 21)
          {
              cell5 = cell5->next;
              sortedlist5->n--;
          }else{
              while(cell5->next != NULL && cell5->next->val != 21) cell5 = cell5->next;
              if(cell5->next != NULL)
              {
                  cell5 = cell5->next->next;
                  sortedlist5->n--;
              }
           }
      }
   }
   sortedlist_t* sortedlist6 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist6->n = 0;
   sortedlist6->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop3 = 0;
      unsigned int loopLimit3 = (rand()%loopsFactor)/2 + 1;
      for(; loop3 < loopLimit3; loop3++) {
         sortedlist_t* sortedlist7 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist7->n = 0;
         sortedlist7->root = NULL;
         if(sortedlist7 != NULL && sortedlist7->n > 0)
         {
             cell_t* cell6 = sortedlist7->root;
             if(cell6->val == 27)
             {
                 cell6 = cell6->next;
                 sortedlist7->n--;
             }else{
                 while(cell6->next != NULL && cell6->next->val != 27) cell6 = cell6->next;
                 if(cell6->next != NULL)
                 {
                     cell6 = cell6->next->next;
                     sortedlist7->n--;
                 }
              }
         }
         if(sortedlist7 != NULL && sortedlist7->n > 0){
              cell_t* cell7 = sortedlist7->root;
              while(cell7 != NULL && cell7->val != 59) cell7 = cell7->next;
              return cell7 != NULL ? sortedlist7 : NULL;
         }
         if(sortedlist7 != NULL && sortedlist7->n > 0){
              cell_t* cell8 = sortedlist7->root;
              cell_t* tmp8  = NULL;
              while(cell8 != NULL) {
                   tmp8 = cell8->next;
                   free(cell8);
                   cell8 = tmp8;
              }
              free(sortedlist7);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist5;
      params0.data[1] = sortedlist6;
      sortedlist_t* sortedlist8 = func11(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist8 != NULL && sortedlist8->n > 0){
           cell_t* cell64 = sortedlist8->root;
           cell_t* tmp64  = NULL;
           while(cell64 != NULL) {
                tmp64 = cell64->next;
                free(cell64);
                cell64 = tmp64;
           }
           free(sortedlist8);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist5;
   params0.data[1] = sortedlist6;
   sortedlist_t* sortedlist37 = func8(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop32 = 0;
   unsigned int loopLimit32 = (rand()%loopsFactor)/2 + 1;
   for(; loop32 < loopLimit32; loop32++) {
      if(sortedlist37 != NULL && sortedlist37->n > 0) {
           cell_t* cell143 = sortedlist37->root;
           if(sortedlist37->n == 0) {
               sortedlist37->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist37->root->val  = 28;
               sortedlist37->root->next = NULL;
               sortedlist37->n++;
           } else {
               while(cell143 != NULL)
               {
                   if(cell143->next == NULL && cell143->val < 28) {
                       cell143->next = (cell_t*)malloc(sizeof(cell_t));
                       cell143->next->next = NULL;
                       cell143->next->val  = 28;
                       sortedlist37->n++;
                       break;
                   } else if(28 < cell143->val) {
                       cell_t* tmp143 = cell143->next;
                       cell143->next = (cell_t*)malloc(sizeof(cell_t));
                       cell143->next->next = tmp143;
                       int tmp_val143 = cell143->val;
                       cell143->val = 28;
                       cell143->next->val = tmp_val143;
                       sortedlist37->n++;
                       break;
                   }
                   cell143 = cell143->next;
               }
           }
      }
   }
   sortedlist_t_param params1;
   params1.size = 3;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist5;
   params1.data[1] = sortedlist6;
   params1.data[2] = sortedlist37;
   sortedlist_t* sortedlist80 = func5(&params1, rng(), loopsFactor);
   free(params1.data);
   if(sortedlist5 != NULL && sortedlist5->n > 0){
        cell_t* cell193 = sortedlist5->root;
        while(cell193 != NULL && cell193->val != 48) cell193 = cell193->next;
        return cell193 != NULL ? sortedlist5 : NULL;
   }
   if(sortedlist37 != NULL && sortedlist37->n > 0){
        cell_t* cell194 = sortedlist37->root;
        cell_t* tmp194  = NULL;
        while(cell194 != NULL) {
             tmp194 = cell194->next;
             free(cell194);
             cell194 = tmp194;
        }
        free(sortedlist37);
   }
   if(sortedlist6 != NULL && sortedlist6->n > 0){
        cell_t* cell195 = sortedlist6->root;
        cell_t* tmp195  = NULL;
        while(cell195 != NULL) {
             tmp195 = cell195->next;
             free(cell195);
             cell195 = tmp195;
        }
        free(sortedlist6);
   }
   if(sortedlist5 != NULL && sortedlist5->n > 0){
        cell_t* cell196 = sortedlist5->root;
        cell_t* tmp196  = NULL;
        while(cell196 != NULL) {
             tmp196 = cell196->next;
             free(cell196);
             cell196 = tmp196;
        }
        free(sortedlist5);
   }
   return sortedlist80;
}

