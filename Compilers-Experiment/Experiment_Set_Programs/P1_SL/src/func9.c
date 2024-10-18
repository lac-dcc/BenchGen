#include "P1_SL.h" 
sortedlist_t* func9(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist111 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist111->n = 0;
   sortedlist111->root = NULL;
   unsigned int loop45 = 0;
   unsigned int loopLimit45 = (rand()%loopsFactor)/2 + 1;
   for(; loop45 < loopLimit45; loop45++) {
      if(sortedlist111 != NULL && sortedlist111->n > 0)
      {
          cell_t* cell202 = sortedlist111->root;
          if(cell202->val == 11)
          {
              cell202 = cell202->next;
              sortedlist111->n--;
          }else{
              while(cell202->next != NULL && cell202->next->val != 11) cell202 = cell202->next;
              if(cell202->next != NULL)
              {
                  cell202 = cell202->next->next;
                  sortedlist111->n--;
              }
           }
      }
   }
   sortedlist_t* sortedlist112 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist112->n = 0;
   sortedlist112->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop46 = 0;
      unsigned int loopLimit46 = (rand()%loopsFactor)/2 + 1;
      for(; loop46 < loopLimit46; loop46++) {
         sortedlist_t* sortedlist113 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist113->n = 0;
         sortedlist113->root = NULL;
         if(sortedlist112 != NULL && sortedlist112->n > 0)
         {
             cell_t* cell203 = sortedlist112->root;
             if(cell203->val == 5)
             {
                 cell203 = cell203->next;
                 sortedlist112->n--;
             }else{
                 while(cell203->next != NULL && cell203->next->val != 5) cell203 = cell203->next;
                 if(cell203->next != NULL)
                 {
                     cell203 = cell203->next->next;
                     sortedlist112->n--;
                 }
              }
         }
         if(sortedlist112 != NULL && sortedlist112->n > 0){
              cell_t* cell204 = sortedlist112->root;
              while(cell204 != NULL && cell204->val != 61) cell204 = cell204->next;
              return cell204 != NULL ? sortedlist112 : NULL;
         }
         if(sortedlist113 != NULL && sortedlist113->n > 0){
              cell_t* cell205 = sortedlist113->root;
              cell_t* tmp205  = NULL;
              while(cell205 != NULL) {
                   tmp205 = cell205->next;
                   free(cell205);
                   cell205 = tmp205;
              }
              free(sortedlist113);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist111;
      params0.data[1] = sortedlist112;
      sortedlist_t* sortedlist114 = func18(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist114 != NULL && sortedlist114->n > 0){
           cell_t* cell206 = sortedlist114->root;
           cell_t* tmp206  = NULL;
           while(cell206 != NULL) {
                tmp206 = cell206->next;
                free(cell206);
                cell206 = tmp206;
           }
           free(sortedlist114);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist111;
   params0.data[1] = sortedlist112;
   sortedlist_t* sortedlist115 = func15(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop47 = 0;
   unsigned int loopLimit47 = (rand()%loopsFactor)/2 + 1;
   for(; loop47 < loopLimit47; loop47++) {
      if(sortedlist111 != NULL && sortedlist111->n > 0) {
           cell_t* cell207 = sortedlist111->root;
           if(sortedlist111->n == 0) {
               sortedlist111->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist111->root->val  = 78;
               sortedlist111->root->next = NULL;
               sortedlist111->n++;
           } else {
               while(cell207 != NULL)
               {
                   if(cell207->next == NULL && cell207->val < 78) {
                       cell207->next = (cell_t*)malloc(sizeof(cell_t));
                       cell207->next->next = NULL;
                       cell207->next->val  = 78;
                       sortedlist111->n++;
                       break;
                   } else if(78 < cell207->val) {
                       cell_t* tmp207 = cell207->next;
                       cell207->next = (cell_t*)malloc(sizeof(cell_t));
                       cell207->next->next = tmp207;
                       int tmp_val207 = cell207->val;
                       cell207->val = 78;
                       cell207->next->val = tmp_val207;
                       sortedlist111->n++;
                       break;
                   }
                   cell207 = cell207->next;
               }
           }
      }
   }
   sortedlist_t_param params1;
   params1.size = 3;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist111;
   params1.data[1] = sortedlist112;
   params1.data[2] = sortedlist115;
   sortedlist_t* sortedlist116 = func12(&params1, rng(), loopsFactor);
   free(params1.data);
   if(sortedlist112 != NULL && sortedlist112->n > 0){
        cell_t* cell208 = sortedlist112->root;
        while(cell208 != NULL && cell208->val != 20) cell208 = cell208->next;
        return cell208 != NULL ? sortedlist112 : NULL;
   }
   if(sortedlist116 != NULL && sortedlist116->n > 0){
        cell_t* cell209 = sortedlist116->root;
        cell_t* tmp209  = NULL;
        while(cell209 != NULL) {
             tmp209 = cell209->next;
             free(cell209);
             cell209 = tmp209;
        }
        free(sortedlist116);
   }
   if(sortedlist115 != NULL && sortedlist115->n > 0){
        cell_t* cell210 = sortedlist115->root;
        cell_t* tmp210  = NULL;
        while(cell210 != NULL) {
             tmp210 = cell210->next;
             free(cell210);
             cell210 = tmp210;
        }
        free(sortedlist115);
   }
   if(sortedlist112 != NULL && sortedlist112->n > 0){
        cell_t* cell211 = sortedlist112->root;
        cell_t* tmp211  = NULL;
        while(cell211 != NULL) {
             tmp211 = cell211->next;
             free(cell211);
             cell211 = tmp211;
        }
        free(sortedlist112);
   }
   return sortedlist111;
}

