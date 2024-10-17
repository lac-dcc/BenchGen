#include "P5_SL.h" 
sortedlist_t* func0(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist113 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist113->n = 0;
   sortedlist113->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop109 = 0;
      unsigned int loopLimit109 = (rand()%loopsFactor)/3 + 1;
      for(; loop109 < loopLimit109; loop109++) {
         sortedlist_t* sortedlist114 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist114->n = 0;
         sortedlist114->root = NULL;
         if(sortedlist114 != NULL && sortedlist114->n > 0){
              cell_t* cell254 = sortedlist114->root;
              while(cell254 != NULL && cell254->val != 21) cell254 = cell254->next;
              return cell254 != NULL ? sortedlist114 : NULL;
         }
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist113;
         params0.data[1] = sortedlist114;
         sortedlist_t* sortedlist115 = func10(&params0, rng(), loopsFactor);
         free(params0.data);
         unsigned int loop110 = 0;
         unsigned int loopLimit110 = (rand()%loopsFactor)/4 + 1;
         for(; loop110 < loopLimit110; loop110++) {
            if(sortedlist115 != NULL && sortedlist115->n > 0)
            {
                cell_t* cell255 = sortedlist115->root;
                if(cell255->val == 39)
                {
                    cell255 = cell255->next;
                    sortedlist115->n--;
                }else{
                    while(cell255->next != NULL && cell255->next->val != 39) cell255 = cell255->next;
                    if(cell255->next != NULL)
                    {
                        cell255 = cell255->next->next;
                        sortedlist115->n--;
                    }
                 }
            }
         }
         unsigned int loop111 = 0;
         unsigned int loopLimit111 = (rand()%loopsFactor)/4 + 1;
         for(; loop111 < loopLimit111; loop111++) {
            if(sortedlist114 != NULL && sortedlist114->n > 0) {
                 cell_t* cell256 = sortedlist114->root;
                 if(sortedlist114->n == 0) {
                     sortedlist114->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist114->root->val  = 40;
                     sortedlist114->root->next = NULL;
                     sortedlist114->n++;
                 } else {
                     while(cell256 != NULL)
                     {
                         if(cell256->next == NULL && cell256->val < 40) {
                             cell256->next = (cell_t*)malloc(sizeof(cell_t));
                             cell256->next->next = NULL;
                             cell256->next->val  = 40;
                             sortedlist114->n++;
                             break;
                         } else if(40 < cell256->val) {
                             cell_t* tmp256 = cell256->next;
                             cell256->next = (cell_t*)malloc(sizeof(cell_t));
                             cell256->next->next = tmp256;
                             int tmp_val256 = cell256->val;
                             cell256->val = 40;
                             cell256->next->val = tmp_val256;
                             sortedlist114->n++;
                             break;
                         }
                         cell256 = cell256->next;
                     }
                 }
            }
         }
         if(sortedlist115 != NULL && sortedlist115->n > 0){
              cell_t* cell257 = sortedlist115->root;
              cell_t* tmp257  = NULL;
              while(cell257 != NULL) {
                   tmp257 = cell257->next;
                   free(cell257);
                   cell257 = tmp257;
              }
              free(sortedlist115);
         }
         if(sortedlist114 != NULL && sortedlist114->n > 0){
              cell_t* cell258 = sortedlist114->root;
              cell_t* tmp258  = NULL;
              while(cell258 != NULL) {
                   tmp258 = cell258->next;
                   free(cell258);
                   cell258 = tmp258;
              }
              free(sortedlist114);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist113;
      sortedlist_t* sortedlist116 = func7(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist116 != NULL && sortedlist116->n > 0){
           cell_t* cell259 = sortedlist116->root;
           cell_t* tmp259  = NULL;
           while(cell259 != NULL) {
                tmp259 = cell259->next;
                free(cell259);
                cell259 = tmp259;
           }
           free(sortedlist116);
      }
   }
   unsigned int loop112 = 0;
   unsigned int loopLimit112 = (rand()%loopsFactor)/3 + 1;
   for(; loop112 < loopLimit112; loop112++) {
      if(sortedlist113 != NULL && sortedlist113->n > 0) {
           cell_t* cell260 = sortedlist113->root;
           if(sortedlist113->n == 0) {
               sortedlist113->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist113->root->val  = 5;
               sortedlist113->root->next = NULL;
               sortedlist113->n++;
           } else {
               while(cell260 != NULL)
               {
                   if(cell260->next == NULL && cell260->val < 5) {
                       cell260->next = (cell_t*)malloc(sizeof(cell_t));
                       cell260->next->next = NULL;
                       cell260->next->val  = 5;
                       sortedlist113->n++;
                       break;
                   } else if(5 < cell260->val) {
                       cell_t* tmp260 = cell260->next;
                       cell260->next = (cell_t*)malloc(sizeof(cell_t));
                       cell260->next->next = tmp260;
                       int tmp_val260 = cell260->val;
                       cell260->val = 5;
                       cell260->next->val = tmp_val260;
                       sortedlist113->n++;
                       break;
                   }
                   cell260 = cell260->next;
               }
           }
      }
      if(sortedlist113 != NULL && sortedlist113->n > 0)
      {
          cell_t* cell261 = sortedlist113->root;
          if(cell261->val == 27)
          {
              cell261 = cell261->next;
              sortedlist113->n--;
          }else{
              while(cell261->next != NULL && cell261->next->val != 27) cell261 = cell261->next;
              if(cell261->next != NULL)
              {
                  cell261 = cell261->next->next;
                  sortedlist113->n--;
              }
           }
      }
      if(sortedlist113 != NULL && sortedlist113->n > 0)
      {
          cell_t* cell262 = sortedlist113->root;
          if(cell262->val == 84)
          {
              cell262 = cell262->next;
              sortedlist113->n--;
          }else{
              while(cell262->next != NULL && cell262->next->val != 84) cell262 = cell262->next;
              if(cell262->next != NULL)
              {
                  cell262 = cell262->next->next;
                  sortedlist113->n--;
              }
           }
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist113;
   sortedlist_t* sortedlist117 = func4(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop113 = 0;
   unsigned int loopLimit113 = (rand()%loopsFactor)/3 + 1;
   for(; loop113 < loopLimit113; loop113++) {
      if(sortedlist113 != NULL && sortedlist113->n > 0)
      {
          cell_t* cell263 = sortedlist113->root;
          if(cell263->val == 20)
          {
              cell263 = cell263->next;
              sortedlist113->n--;
          }else{
              while(cell263->next != NULL && cell263->next->val != 20) cell263 = cell263->next;
              if(cell263->next != NULL)
              {
                  cell263 = cell263->next->next;
                  sortedlist113->n--;
              }
           }
      }
   }
   if(sortedlist113 != NULL && sortedlist113->n > 0)
   {
       cell_t* cell264 = sortedlist113->root;
       if(cell264->val == 22)
       {
           cell264 = cell264->next;
           sortedlist113->n--;
       }else{
           while(cell264->next != NULL && cell264->next->val != 22) cell264 = cell264->next;
           if(cell264->next != NULL)
           {
               cell264 = cell264->next->next;
               sortedlist113->n--;
           }
        }
   }
   sortedlist_t_param params1;
   params1.size = 2;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist113;
   params1.data[1] = sortedlist117;
   sortedlist_t* sortedlist118 = func1(&params1, loopsFactor);
   free(params1.data);
   if(sortedlist117 != NULL && sortedlist117->n > 0){
        cell_t* cell265 = sortedlist117->root;
        cell_t* tmp265  = NULL;
        while(cell265 != NULL) {
             tmp265 = cell265->next;
             free(cell265);
             cell265 = tmp265;
        }
        free(sortedlist117);
   }
   if(sortedlist113 != NULL && sortedlist113->n > 0){
        cell_t* cell266 = sortedlist113->root;
        cell_t* tmp266  = NULL;
        while(cell266 != NULL) {
             tmp266 = cell266->next;
             free(cell266);
             cell266 = tmp266;
        }
        free(sortedlist113);
   }
   return sortedlist118;
}

