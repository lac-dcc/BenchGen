#include "P1_SL.h" 
sortedlist_t* func7(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist148 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist148->n = 0;
   sortedlist148->root = NULL;
   unsigned int loop58 = 0;
   unsigned int loopLimit58 = (rand()%loopsFactor)/2 + 1;
   for(; loop58 < loopLimit58; loop58++) {
      if(sortedlist148 != NULL && sortedlist148->n > 0)
      {
          cell_t* cell265 = sortedlist148->root;
          if(cell265->val == 42)
          {
              cell265 = cell265->next;
              sortedlist148->n--;
          }else{
              while(cell265->next != NULL && cell265->next->val != 42) cell265 = cell265->next;
              if(cell265->next != NULL)
              {
                  cell265 = cell265->next->next;
                  sortedlist148->n--;
              }
           }
      }
   }
   sortedlist_t* sortedlist149 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist149->n = 0;
   sortedlist149->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop59 = 0;
      unsigned int loopLimit59 = (rand()%loopsFactor)/2 + 1;
      for(; loop59 < loopLimit59; loop59++) {
         sortedlist_t* sortedlist150 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist150->n = 0;
         sortedlist150->root = NULL;
         if(sortedlist150 != NULL && sortedlist150->n > 0)
         {
             cell_t* cell266 = sortedlist150->root;
             if(cell266->val == 6)
             {
                 cell266 = cell266->next;
                 sortedlist150->n--;
             }else{
                 while(cell266->next != NULL && cell266->next->val != 6) cell266 = cell266->next;
                 if(cell266->next != NULL)
                 {
                     cell266 = cell266->next->next;
                     sortedlist150->n--;
                 }
              }
         }
         if(sortedlist148 != NULL && sortedlist148->n > 0){
              cell_t* cell267 = sortedlist148->root;
              while(cell267 != NULL && cell267->val != 13) cell267 = cell267->next;
              return cell267 != NULL ? sortedlist148 : NULL;
         }
         if(sortedlist150 != NULL && sortedlist150->n > 0){
              cell_t* cell268 = sortedlist150->root;
              cell_t* tmp268  = NULL;
              while(cell268 != NULL) {
                   tmp268 = cell268->next;
                   free(cell268);
                   cell268 = tmp268;
              }
              free(sortedlist150);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist148;
      params0.data[1] = sortedlist149;
      sortedlist_t* sortedlist151 = func16(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist151 != NULL && sortedlist151->n > 0){
           cell_t* cell269 = sortedlist151->root;
           cell_t* tmp269  = NULL;
           while(cell269 != NULL) {
                tmp269 = cell269->next;
                free(cell269);
                cell269 = tmp269;
           }
           free(sortedlist151);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist148;
   params0.data[1] = sortedlist149;
   sortedlist_t* sortedlist152 = func13(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop60 = 0;
   unsigned int loopLimit60 = (rand()%loopsFactor)/2 + 1;
   for(; loop60 < loopLimit60; loop60++) {
      if(sortedlist148 != NULL && sortedlist148->n > 0) {
           cell_t* cell270 = sortedlist148->root;
           if(sortedlist148->n == 0) {
               sortedlist148->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist148->root->val  = 21;
               sortedlist148->root->next = NULL;
               sortedlist148->n++;
           } else {
               while(cell270 != NULL)
               {
                   if(cell270->next == NULL && cell270->val < 21) {
                       cell270->next = (cell_t*)malloc(sizeof(cell_t));
                       cell270->next->next = NULL;
                       cell270->next->val  = 21;
                       sortedlist148->n++;
                       break;
                   } else if(21 < cell270->val) {
                       cell_t* tmp270 = cell270->next;
                       cell270->next = (cell_t*)malloc(sizeof(cell_t));
                       cell270->next->next = tmp270;
                       int tmp_val270 = cell270->val;
                       cell270->val = 21;
                       cell270->next->val = tmp_val270;
                       sortedlist148->n++;
                       break;
                   }
                   cell270 = cell270->next;
               }
           }
      }
   }
   sortedlist_t_param params1;
   params1.size = 3;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist148;
   params1.data[1] = sortedlist149;
   params1.data[2] = sortedlist152;
   sortedlist_t* sortedlist153 = func10(&params1, rng(), loopsFactor);
   free(params1.data);
   if(sortedlist153 != NULL && sortedlist153->n > 0){
        cell_t* cell271 = sortedlist153->root;
        while(cell271 != NULL && cell271->val != 19) cell271 = cell271->next;
        return cell271 != NULL ? sortedlist153 : NULL;
   }
   if(sortedlist152 != NULL && sortedlist152->n > 0){
        cell_t* cell272 = sortedlist152->root;
        cell_t* tmp272  = NULL;
        while(cell272 != NULL) {
             tmp272 = cell272->next;
             free(cell272);
             cell272 = tmp272;
        }
        free(sortedlist152);
   }
   if(sortedlist149 != NULL && sortedlist149->n > 0){
        cell_t* cell273 = sortedlist149->root;
        cell_t* tmp273  = NULL;
        while(cell273 != NULL) {
             tmp273 = cell273->next;
             free(cell273);
             cell273 = tmp273;
        }
        free(sortedlist149);
   }
   if(sortedlist148 != NULL && sortedlist148->n > 0){
        cell_t* cell274 = sortedlist148->root;
        cell_t* tmp274  = NULL;
        while(cell274 != NULL) {
             tmp274 = cell274->next;
             free(cell274);
             cell274 = tmp274;
        }
        free(sortedlist148);
   }
   return sortedlist153;
}

