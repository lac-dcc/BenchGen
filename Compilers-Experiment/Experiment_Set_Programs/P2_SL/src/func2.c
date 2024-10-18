#include "P2_SL.h" 
sortedlist_t* func2(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist41 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist41->n = 0;
   sortedlist41->root = NULL;
   unsigned int loop35 = 0;
   unsigned int loopLimit35 = (rand()%loopsFactor)/2 + 1;
   for(; loop35 < loopLimit35; loop35++) {
      if(sortedlist41 != NULL && sortedlist41->n > 0)
      {
          cell_t* cell91 = sortedlist41->root;
          if(cell91->val == 56)
          {
              cell91 = cell91->next;
              sortedlist41->n--;
          }else{
              while(cell91->next != NULL && cell91->next->val != 56) cell91 = cell91->next;
              if(cell91->next != NULL)
              {
                  cell91 = cell91->next->next;
                  sortedlist41->n--;
              }
           }
      }
   }
   sortedlist_t* sortedlist42 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist42->n = 0;
   sortedlist42->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop36 = 0;
      unsigned int loopLimit36 = (rand()%loopsFactor)/2 + 1;
      for(; loop36 < loopLimit36; loop36++) {
         sortedlist_t* sortedlist43 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist43->n = 0;
         sortedlist43->root = NULL;
         if(sortedlist43 != NULL && sortedlist43->n > 0)
         {
             cell_t* cell92 = sortedlist43->root;
             if(cell92->val == 53)
             {
                 cell92 = cell92->next;
                 sortedlist43->n--;
             }else{
                 while(cell92->next != NULL && cell92->next->val != 53) cell92 = cell92->next;
                 if(cell92->next != NULL)
                 {
                     cell92 = cell92->next->next;
                     sortedlist43->n--;
                 }
              }
         }
         if(sortedlist41 != NULL && sortedlist41->n > 0){
              cell_t* cell93 = sortedlist41->root;
              while(cell93 != NULL && cell93->val != 65) cell93 = cell93->next;
              return cell93 != NULL ? sortedlist41 : NULL;
         }
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist41;
         params0.data[1] = sortedlist42;
         params0.data[2] = sortedlist43;
         sortedlist_t* sortedlist44 = func16(&params0, rng(), loopsFactor);
         free(params0.data);
         unsigned int loop37 = 0;
         unsigned int loopLimit37 = (rand()%loopsFactor)/3 + 1;
         for(; loop37 < loopLimit37; loop37++) {
            if(sortedlist43 != NULL && sortedlist43->n > 0)
            {
                cell_t* cell94 = sortedlist43->root;
                if(cell94->val == 83)
                {
                    cell94 = cell94->next;
                    sortedlist43->n--;
                }else{
                    while(cell94->next != NULL && cell94->next->val != 83) cell94 = cell94->next;
                    if(cell94->next != NULL)
                    {
                        cell94 = cell94->next->next;
                        sortedlist43->n--;
                    }
                 }
            }
         }
         unsigned int loop38 = 0;
         unsigned int loopLimit38 = (rand()%loopsFactor)/3 + 1;
         for(; loop38 < loopLimit38; loop38++) {
            if(sortedlist44 != NULL && sortedlist44->n > 0) {
                 cell_t* cell95 = sortedlist44->root;
                 if(sortedlist44->n == 0) {
                     sortedlist44->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist44->root->val  = 24;
                     sortedlist44->root->next = NULL;
                     sortedlist44->n++;
                 } else {
                     while(cell95 != NULL)
                     {
                         if(cell95->next == NULL && cell95->val < 24) {
                             cell95->next = (cell_t*)malloc(sizeof(cell_t));
                             cell95->next->next = NULL;
                             cell95->next->val  = 24;
                             sortedlist44->n++;
                             break;
                         } else if(24 < cell95->val) {
                             cell_t* tmp95 = cell95->next;
                             cell95->next = (cell_t*)malloc(sizeof(cell_t));
                             cell95->next->next = tmp95;
                             int tmp_val95 = cell95->val;
                             cell95->val = 24;
                             cell95->next->val = tmp_val95;
                             sortedlist44->n++;
                             break;
                         }
                         cell95 = cell95->next;
                     }
                 }
            }
         }
         if(sortedlist44 != NULL && sortedlist44->n > 0){
              cell_t* cell96 = sortedlist44->root;
              cell_t* tmp96  = NULL;
              while(cell96 != NULL) {
                   tmp96 = cell96->next;
                   free(cell96);
                   cell96 = tmp96;
              }
              free(sortedlist44);
         }
         if(sortedlist43 != NULL && sortedlist43->n > 0){
              cell_t* cell97 = sortedlist43->root;
              cell_t* tmp97  = NULL;
              while(cell97 != NULL) {
                   tmp97 = cell97->next;
                   free(cell97);
                   cell97 = tmp97;
              }
              free(sortedlist43);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist41;
      params0.data[1] = sortedlist42;
      sortedlist_t* sortedlist45 = func13(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist45 != NULL && sortedlist45->n > 0){
           cell_t* cell102 = sortedlist45->root;
           cell_t* tmp102  = NULL;
           while(cell102 != NULL) {
                tmp102 = cell102->next;
                free(cell102);
                cell102 = tmp102;
           }
           free(sortedlist45);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist41;
   params0.data[1] = sortedlist42;
   sortedlist_t* sortedlist48 = func10(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop49 = 0;
   unsigned int loopLimit49 = (rand()%loopsFactor)/2 + 1;
   for(; loop49 < loopLimit49; loop49++) {
      if(sortedlist48 != NULL && sortedlist48->n > 0)
      {
          cell_t* cell123 = sortedlist48->root;
          if(cell123->val == 65)
          {
              cell123 = cell123->next;
              sortedlist48->n--;
          }else{
              while(cell123->next != NULL && cell123->next->val != 65) cell123 = cell123->next;
              if(cell123->next != NULL)
              {
                  cell123 = cell123->next->next;
                  sortedlist48->n--;
              }
           }
      }
   }
   unsigned int loop50 = 0;
   unsigned int loopLimit50 = (rand()%loopsFactor)/2 + 1;
   for(; loop50 < loopLimit50; loop50++) {
      if(sortedlist41 != NULL && sortedlist41->n > 0) {
           cell_t* cell124 = sortedlist41->root;
           if(sortedlist41->n == 0) {
               sortedlist41->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist41->root->val  = 36;
               sortedlist41->root->next = NULL;
               sortedlist41->n++;
           } else {
               while(cell124 != NULL)
               {
                   if(cell124->next == NULL && cell124->val < 36) {
                       cell124->next = (cell_t*)malloc(sizeof(cell_t));
                       cell124->next->next = NULL;
                       cell124->next->val  = 36;
                       sortedlist41->n++;
                       break;
                   } else if(36 < cell124->val) {
                       cell_t* tmp124 = cell124->next;
                       cell124->next = (cell_t*)malloc(sizeof(cell_t));
                       cell124->next->next = tmp124;
                       int tmp_val124 = cell124->val;
                       cell124->val = 36;
                       cell124->next->val = tmp_val124;
                       sortedlist41->n++;
                       break;
                   }
                   cell124 = cell124->next;
               }
           }
      }
   }
   sortedlist_t_param params1;
   params1.size = 3;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist41;
   params1.data[1] = sortedlist42;
   params1.data[2] = sortedlist48;
   sortedlist_t* sortedlist56 = func6(&params1, rng(), loopsFactor);
   free(params1.data);
   if(sortedlist56 != NULL && sortedlist56->n > 0){
        cell_t* cell137 = sortedlist56->root;
        while(cell137 != NULL && cell137->val != 28) cell137 = cell137->next;
        return cell137 != NULL ? sortedlist56 : NULL;
   }
   if(sortedlist56 != NULL && sortedlist56->n > 0){
        cell_t* cell138 = sortedlist56->root;
        cell_t* tmp138  = NULL;
        while(cell138 != NULL) {
             tmp138 = cell138->next;
             free(cell138);
             cell138 = tmp138;
        }
        free(sortedlist56);
   }
   if(sortedlist48 != NULL && sortedlist48->n > 0){
        cell_t* cell139 = sortedlist48->root;
        cell_t* tmp139  = NULL;
        while(cell139 != NULL) {
             tmp139 = cell139->next;
             free(cell139);
             cell139 = tmp139;
        }
        free(sortedlist48);
   }
   if(sortedlist41 != NULL && sortedlist41->n > 0){
        cell_t* cell140 = sortedlist41->root;
        cell_t* tmp140  = NULL;
        while(cell140 != NULL) {
             tmp140 = cell140->next;
             free(cell140);
             cell140 = tmp140;
        }
        free(sortedlist41);
   }
   return sortedlist42;
}

