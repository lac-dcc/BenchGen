#include "P2_SL.h" 
sortedlist_t* func7(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist85 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist85->n = 0;
   sortedlist85->root = NULL;
   unsigned int loop75 = 0;
   unsigned int loopLimit75 = (rand()%loopsFactor)/3 + 1;
   for(; loop75 < loopLimit75; loop75++) {
      if(sortedlist85 != NULL && sortedlist85->n > 0)
      {
          cell_t* cell188 = sortedlist85->root;
          if(cell188->val == 22)
          {
              cell188 = cell188->next;
              sortedlist85->n--;
          }else{
              while(cell188->next != NULL && cell188->next->val != 22) cell188 = cell188->next;
              if(cell188->next != NULL)
              {
                  cell188 = cell188->next->next;
                  sortedlist85->n--;
              }
           }
      }
   }
   sortedlist_t* sortedlist86 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist86->n = 0;
   sortedlist86->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop76 = 0;
      unsigned int loopLimit76 = (rand()%loopsFactor)/3 + 1;
      for(; loop76 < loopLimit76; loop76++) {
         sortedlist_t* sortedlist87 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist87->n = 0;
         sortedlist87->root = NULL;
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell189 = sortedlist87->root;
             if(cell189->val == 8)
             {
                 cell189 = cell189->next;
                 sortedlist87->n--;
             }else{
                 while(cell189->next != NULL && cell189->next->val != 8) cell189 = cell189->next;
                 if(cell189->next != NULL)
                 {
                     cell189 = cell189->next->next;
                     sortedlist87->n--;
                 }
              }
         }
         if(sortedlist86 != NULL && sortedlist86->n > 0){
              cell_t* cell190 = sortedlist86->root;
              while(cell190 != NULL && cell190->val != 82) cell190 = cell190->next;
              return cell190 != NULL ? sortedlist86 : NULL;
         }
         unsigned int loop77 = 0;
         unsigned int loopLimit77 = (rand()%loopsFactor)/4 + 1;
         for(; loop77 < loopLimit77; loop77++) {
            if(sortedlist87 != NULL && sortedlist87->n > 0) {
                 cell_t* cell191 = sortedlist87->root;
                 if(sortedlist87->n == 0) {
                     sortedlist87->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist87->root->val  = 24;
                     sortedlist87->root->next = NULL;
                     sortedlist87->n++;
                 } else {
                     while(cell191 != NULL)
                     {
                         if(cell191->next == NULL && cell191->val < 24) {
                             cell191->next = (cell_t*)malloc(sizeof(cell_t));
                             cell191->next->next = NULL;
                             cell191->next->val  = 24;
                             sortedlist87->n++;
                             break;
                         } else if(24 < cell191->val) {
                             cell_t* tmp191 = cell191->next;
                             cell191->next = (cell_t*)malloc(sizeof(cell_t));
                             cell191->next->next = tmp191;
                             int tmp_val191 = cell191->val;
                             cell191->val = 24;
                             cell191->next->val = tmp_val191;
                             sortedlist87->n++;
                             break;
                         }
                         cell191 = cell191->next;
                     }
                 }
            }
         }
         if(sortedlist87 != NULL && sortedlist87->n > 0){
              cell_t* cell192 = sortedlist87->root;
              cell_t* tmp192  = NULL;
              while(cell192 != NULL) {
                   tmp192 = cell192->next;
                   free(cell192);
                   cell192 = tmp192;
              }
              free(sortedlist87);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist85;
      params0.data[1] = sortedlist86;
      sortedlist_t* sortedlist88 = func14(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist88 != NULL && sortedlist88->n > 0){
           cell_t* cell193 = sortedlist88->root;
           cell_t* tmp193  = NULL;
           while(cell193 != NULL) {
                tmp193 = cell193->next;
                free(cell193);
                cell193 = tmp193;
           }
           free(sortedlist88);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist85;
   params0.data[1] = sortedlist86;
   sortedlist_t* sortedlist89 = func11(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop78 = 0;
   unsigned int loopLimit78 = (rand()%loopsFactor)/3 + 1;
   for(; loop78 < loopLimit78; loop78++) {
      if(sortedlist85 != NULL && sortedlist85->n > 0)
      {
          cell_t* cell194 = sortedlist85->root;
          if(cell194->val == 62)
          {
              cell194 = cell194->next;
              sortedlist85->n--;
          }else{
              while(cell194->next != NULL && cell194->next->val != 62) cell194 = cell194->next;
              if(cell194->next != NULL)
              {
                  cell194 = cell194->next->next;
                  sortedlist85->n--;
              }
           }
      }
   }
   unsigned int loop79 = 0;
   unsigned int loopLimit79 = (rand()%loopsFactor)/3 + 1;
   for(; loop79 < loopLimit79; loop79++) {
      if(sortedlist89 != NULL && sortedlist89->n > 0) {
           cell_t* cell195 = sortedlist89->root;
           if(sortedlist89->n == 0) {
               sortedlist89->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist89->root->val  = 0;
               sortedlist89->root->next = NULL;
               sortedlist89->n++;
           } else {
               while(cell195 != NULL)
               {
                   if(cell195->next == NULL && cell195->val < 0) {
                       cell195->next = (cell_t*)malloc(sizeof(cell_t));
                       cell195->next->next = NULL;
                       cell195->next->val  = 0;
                       sortedlist89->n++;
                       break;
                   } else if(0 < cell195->val) {
                       cell_t* tmp195 = cell195->next;
                       cell195->next = (cell_t*)malloc(sizeof(cell_t));
                       cell195->next->next = tmp195;
                       int tmp_val195 = cell195->val;
                       cell195->val = 0;
                       cell195->next->val = tmp_val195;
                       sortedlist89->n++;
                       break;
                   }
                   cell195 = cell195->next;
               }
           }
      }
   }
   sortedlist_t_param params1;
   params1.size = 3;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist85;
   params1.data[1] = sortedlist86;
   params1.data[2] = sortedlist89;
   sortedlist_t* sortedlist90 = func9(&params1, loopsFactor);
   free(params1.data);
   if(sortedlist85 != NULL && sortedlist85->n > 0){
        cell_t* cell196 = sortedlist85->root;
        while(cell196 != NULL && cell196->val != 52) cell196 = cell196->next;
        return cell196 != NULL ? sortedlist85 : NULL;
   }
   if(sortedlist89 != NULL && sortedlist89->n > 0){
        cell_t* cell197 = sortedlist89->root;
        cell_t* tmp197  = NULL;
        while(cell197 != NULL) {
             tmp197 = cell197->next;
             free(cell197);
             cell197 = tmp197;
        }
        free(sortedlist89);
   }
   if(sortedlist86 != NULL && sortedlist86->n > 0){
        cell_t* cell198 = sortedlist86->root;
        cell_t* tmp198  = NULL;
        while(cell198 != NULL) {
             tmp198 = cell198->next;
             free(cell198);
             cell198 = tmp198;
        }
        free(sortedlist86);
   }
   if(sortedlist85 != NULL && sortedlist85->n > 0){
        cell_t* cell199 = sortedlist85->root;
        cell_t* tmp199  = NULL;
        while(cell199 != NULL) {
             tmp199 = cell199->next;
             free(cell199);
             cell199 = tmp199;
        }
        free(sortedlist85);
   }
   return sortedlist90;
}

