#include "P2_SL.h" 
sortedlist_t* func0(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist113 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist113->n = 0;
   sortedlist113->root = NULL;
   unsigned int loop98 = 0;
   unsigned int loopLimit98 = (rand()%loopsFactor)/3 + 1;
   for(; loop98 < loopLimit98; loop98++) {
      if(sortedlist113 != NULL && sortedlist113->n > 0)
      {
          cell_t* cell248 = sortedlist113->root;
          if(cell248->val == 40)
          {
              cell248 = cell248->next;
              sortedlist113->n--;
          }else{
              while(cell248->next != NULL && cell248->next->val != 40) cell248 = cell248->next;
              if(cell248->next != NULL)
              {
                  cell248 = cell248->next->next;
                  sortedlist113->n--;
              }
           }
      }
   }
   if(sortedlist113 != NULL && sortedlist113->n > 0) {
        cell_t* cell249 = sortedlist113->root;
        if(sortedlist113->n == 0) {
            sortedlist113->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist113->root->val  = 5;
            sortedlist113->root->next = NULL;
            sortedlist113->n++;
        } else {
            while(cell249 != NULL)
            {
                if(cell249->next == NULL && cell249->val < 5) {
                    cell249->next = (cell_t*)malloc(sizeof(cell_t));
                    cell249->next->next = NULL;
                    cell249->next->val  = 5;
                    sortedlist113->n++;
                    break;
                } else if(5 < cell249->val) {
                    cell_t* tmp249 = cell249->next;
                    cell249->next = (cell_t*)malloc(sizeof(cell_t));
                    cell249->next->next = tmp249;
                    int tmp_val249 = cell249->val;
                    cell249->val = 5;
                    cell249->next->val = tmp_val249;
                    sortedlist113->n++;
                    break;
                }
                cell249 = cell249->next;
            }
        }
   }
   if(sortedlist113 != NULL && sortedlist113->n > 0){
        cell_t* cell250 = sortedlist113->root;
        while(cell250 != NULL && cell250->val != 27) cell250 = cell250->next;
        return cell250 != NULL ? sortedlist113 : NULL;
   }
   if(sortedlist113 != NULL && sortedlist113->n > 0)
   {
       cell_t* cell251 = sortedlist113->root;
       if(cell251->val == 84)
       {
           cell251 = cell251->next;
           sortedlist113->n--;
       }else{
           while(cell251->next != NULL && cell251->next->val != 84) cell251 = cell251->next;
           if(cell251->next != NULL)
           {
               cell251 = cell251->next->next;
               sortedlist113->n--;
           }
        }
   }
   sortedlist_t* sortedlist114 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist114->n = 0;
   sortedlist114->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop99 = 0;
      unsigned int loopLimit99 = (rand()%loopsFactor)/3 + 1;
      for(; loop99 < loopLimit99; loop99++) {
         sortedlist_t* sortedlist115 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist115->n = 0;
         sortedlist115->root = NULL;
         if(sortedlist114 != NULL && sortedlist114->n > 0)
         {
             cell_t* cell252 = sortedlist114->root;
             if(cell252->val == 20)
             {
                 cell252 = cell252->next;
                 sortedlist114->n--;
             }else{
                 while(cell252->next != NULL && cell252->next->val != 20) cell252 = cell252->next;
                 if(cell252->next != NULL)
                 {
                     cell252 = cell252->next->next;
                     sortedlist114->n--;
                 }
              }
         }
         if(sortedlist114 != NULL && sortedlist114->n > 0){
              cell_t* cell253 = sortedlist114->root;
              while(cell253 != NULL && cell253->val != 22) cell253 = cell253->next;
              return cell253 != NULL ? sortedlist114 : NULL;
         }
         sortedlist_t* sortedlist116 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist116->n = 0;
         sortedlist116->root = NULL;
         if(PATH0 & 2) {
            unsigned int loop100 = 0;
            unsigned int loopLimit100 = (rand()%loopsFactor)/4 + 1;
            for(; loop100 < loopLimit100; loop100++) {
               sortedlist_t* sortedlist117 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
               sortedlist117->n = 0;
               sortedlist117->root = NULL;
               if(sortedlist117 != NULL && sortedlist117->n > 0)
               {
                   cell_t* cell254 = sortedlist117->root;
                   if(cell254->val == 96)
                   {
                       cell254 = cell254->next;
                       sortedlist117->n--;
                   }else{
                       while(cell254->next != NULL && cell254->next->val != 96) cell254 = cell254->next;
                       if(cell254->next != NULL)
                       {
                           cell254 = cell254->next->next;
                           sortedlist117->n--;
                       }
                    }
               }
               if(sortedlist114 != NULL && sortedlist114->n > 0){
                    cell_t* cell255 = sortedlist114->root;
                    while(cell255 != NULL && cell255->val != 30) cell255 = cell255->next;
                    return cell255 != NULL ? sortedlist114 : NULL;
               }
               unsigned int loop101 = 0;
               unsigned int loopLimit101 = (rand()%loopsFactor)/5 + 1;
               for(; loop101 < loopLimit101; loop101++) {
                  if(sortedlist117 != NULL && sortedlist117->n > 0) {
                       cell_t* cell256 = sortedlist117->root;
                       if(sortedlist117->n == 0) {
                           sortedlist117->root = (cell_t*)malloc(sizeof(cell_t));
                           sortedlist117->root->val  = 92;
                           sortedlist117->root->next = NULL;
                           sortedlist117->n++;
                       } else {
                           while(cell256 != NULL)
                           {
                               if(cell256->next == NULL && cell256->val < 92) {
                                   cell256->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell256->next->next = NULL;
                                   cell256->next->val  = 92;
                                   sortedlist117->n++;
                                   break;
                               } else if(92 < cell256->val) {
                                   cell_t* tmp256 = cell256->next;
                                   cell256->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell256->next->next = tmp256;
                                   int tmp_val256 = cell256->val;
                                   cell256->val = 92;
                                   cell256->next->val = tmp_val256;
                                   sortedlist117->n++;
                                   break;
                               }
                               cell256 = cell256->next;
                           }
                       }
                  }
               }
               if(sortedlist117 != NULL && sortedlist117->n > 0){
                    cell_t* cell257 = sortedlist117->root;
                    cell_t* tmp257  = NULL;
                    while(cell257 != NULL) {
                         tmp257 = cell257->next;
                         free(cell257);
                         cell257 = tmp257;
                    }
                    free(sortedlist117);
               }
            }
         }
         else {
            sortedlist_t_param params0;
            params0.size = 4;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist113;
            params0.data[1] = sortedlist114;
            params0.data[2] = sortedlist115;
            params0.data[3] = sortedlist116;
            sortedlist_t* sortedlist118 = func14(&params0, loopsFactor);
            free(params0.data);
            if(sortedlist118 != NULL && sortedlist118->n > 0){
                 cell_t* cell258 = sortedlist118->root;
                 cell_t* tmp258  = NULL;
                 while(cell258 != NULL) {
                      tmp258 = cell258->next;
                      free(cell258);
                      cell258 = tmp258;
                 }
                 free(sortedlist118);
            }
         }
         sortedlist_t_param params0;
         params0.size = 4;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist113;
         params0.data[1] = sortedlist114;
         params0.data[2] = sortedlist115;
         params0.data[3] = sortedlist116;
         sortedlist_t* sortedlist119 = func11(&params0, rng(), loopsFactor);
         free(params0.data);
         unsigned int loop102 = 0;
         unsigned int loopLimit102 = (rand()%loopsFactor)/4 + 1;
         for(; loop102 < loopLimit102; loop102++) {
            if(sortedlist115 != NULL && sortedlist115->n > 0)
            {
                cell_t* cell259 = sortedlist115->root;
                if(cell259->val == 72)
                {
                    cell259 = cell259->next;
                    sortedlist115->n--;
                }else{
                    while(cell259->next != NULL && cell259->next->val != 72) cell259 = cell259->next;
                    if(cell259->next != NULL)
                    {
                        cell259 = cell259->next->next;
                        sortedlist115->n--;
                    }
                 }
            }
         }
         unsigned int loop103 = 0;
         unsigned int loopLimit103 = (rand()%loopsFactor)/4 + 1;
         for(; loop103 < loopLimit103; loop103++) {
            if(sortedlist113 != NULL && sortedlist113->n > 0) {
                 cell_t* cell260 = sortedlist113->root;
                 if(sortedlist113->n == 0) {
                     sortedlist113->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist113->root->val  = 25;
                     sortedlist113->root->next = NULL;
                     sortedlist113->n++;
                 } else {
                     while(cell260 != NULL)
                     {
                         if(cell260->next == NULL && cell260->val < 25) {
                             cell260->next = (cell_t*)malloc(sizeof(cell_t));
                             cell260->next->next = NULL;
                             cell260->next->val  = 25;
                             sortedlist113->n++;
                             break;
                         } else if(25 < cell260->val) {
                             cell_t* tmp260 = cell260->next;
                             cell260->next = (cell_t*)malloc(sizeof(cell_t));
                             cell260->next->next = tmp260;
                             int tmp_val260 = cell260->val;
                             cell260->val = 25;
                             cell260->next->val = tmp_val260;
                             sortedlist113->n++;
                             break;
                         }
                         cell260 = cell260->next;
                     }
                 }
            }
         }
         if(sortedlist119 != NULL && sortedlist119->n > 0){
              cell_t* cell261 = sortedlist119->root;
              cell_t* tmp261  = NULL;
              while(cell261 != NULL) {
                   tmp261 = cell261->next;
                   free(cell261);
                   cell261 = tmp261;
              }
              free(sortedlist119);
         }
         if(sortedlist116 != NULL && sortedlist116->n > 0){
              cell_t* cell262 = sortedlist116->root;
              cell_t* tmp262  = NULL;
              while(cell262 != NULL) {
                   tmp262 = cell262->next;
                   free(cell262);
                   cell262 = tmp262;
              }
              free(sortedlist116);
         }
         if(sortedlist115 != NULL && sortedlist115->n > 0){
              cell_t* cell263 = sortedlist115->root;
              cell_t* tmp263  = NULL;
              while(cell263 != NULL) {
                   tmp263 = cell263->next;
                   free(cell263);
                   cell263 = tmp263;
              }
              free(sortedlist115);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist113;
      params0.data[1] = sortedlist114;
      sortedlist_t* sortedlist120 = func8(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist120 != NULL && sortedlist120->n > 0){
           cell_t* cell264 = sortedlist120->root;
           cell_t* tmp264  = NULL;
           while(cell264 != NULL) {
                tmp264 = cell264->next;
                free(cell264);
                cell264 = tmp264;
           }
           free(sortedlist120);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist113;
   params0.data[1] = sortedlist114;
   sortedlist_t* sortedlist121 = func5(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop104 = 0;
   unsigned int loopLimit104 = (rand()%loopsFactor)/3 + 1;
   for(; loop104 < loopLimit104; loop104++) {
      if(sortedlist113 != NULL && sortedlist113->n > 0)
      {
          cell_t* cell265 = sortedlist113->root;
          if(cell265->val == 22)
          {
              cell265 = cell265->next;
              sortedlist113->n--;
          }else{
              while(cell265->next != NULL && cell265->next->val != 22) cell265 = cell265->next;
              if(cell265->next != NULL)
              {
                  cell265 = cell265->next->next;
                  sortedlist113->n--;
              }
           }
      }
   }
   if(sortedlist114 != NULL && sortedlist114->n > 0)
   {
       cell_t* cell266 = sortedlist114->root;
       if(cell266->val == 40)
       {
           cell266 = cell266->next;
           sortedlist114->n--;
       }else{
           while(cell266->next != NULL && cell266->next->val != 40) cell266 = cell266->next;
           if(cell266->next != NULL)
           {
               cell266 = cell266->next->next;
               sortedlist114->n--;
           }
        }
   }
   sortedlist_t_param params1;
   params1.size = 3;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist113;
   params1.data[1] = sortedlist114;
   params1.data[2] = sortedlist121;
   sortedlist_t* sortedlist122 = func1(&params1, loopsFactor);
   free(params1.data);
   if(sortedlist122 != NULL && sortedlist122->n > 0){
        cell_t* cell267 = sortedlist122->root;
        cell_t* tmp267  = NULL;
        while(cell267 != NULL) {
             tmp267 = cell267->next;
             free(cell267);
             cell267 = tmp267;
        }
        free(sortedlist122);
   }
   if(sortedlist114 != NULL && sortedlist114->n > 0){
        cell_t* cell268 = sortedlist114->root;
        cell_t* tmp268  = NULL;
        while(cell268 != NULL) {
             tmp268 = cell268->next;
             free(cell268);
             cell268 = tmp268;
        }
        free(sortedlist114);
   }
   if(sortedlist113 != NULL && sortedlist113->n > 0){
        cell_t* cell269 = sortedlist113->root;
        cell_t* tmp269  = NULL;
        while(cell269 != NULL) {
             tmp269 = cell269->next;
             free(cell269);
             cell269 = tmp269;
        }
        free(sortedlist113);
   }
   return sortedlist121;
}

