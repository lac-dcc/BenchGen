#include "P3_SL.h" 
sortedlist_t* func4(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist8 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist8->n = 0;
   sortedlist8->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/4 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0)
         {
             cell_t* cell7 = sortedlist8->root;
             if(cell7->val == 90)
             {
                 cell7 = cell7->next;
                 sortedlist8->n--;
             }else{
                 while(cell7->next != NULL && cell7->next->val != 90) cell7 = cell7->next;
                 if(cell7->next != NULL)
                 {
                     cell7 = cell7->next->next;
                     sortedlist8->n--;
                 }
              }
         }
      }
      unsigned int loop6 = 0;
      unsigned int loopLimit6 = (rand()%loopsFactor)/4 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0) {
              cell_t* cell8 = sortedlist8->root;
              if(sortedlist8->n == 0) {
                  sortedlist8->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist8->root->val  = 63;
                  sortedlist8->root->next = NULL;
                  sortedlist8->n++;
              } else {
                  while(cell8 != NULL)
                  {
                      if(cell8->next == NULL && cell8->val < 63) {
                          cell8->next = (cell_t*)malloc(sizeof(cell_t));
                          cell8->next->next = NULL;
                          cell8->next->val  = 63;
                          sortedlist8->n++;
                          break;
                      } else if(63 < cell8->val) {
                          cell_t* tmp8 = cell8->next;
                          cell8->next = (cell_t*)malloc(sizeof(cell_t));
                          cell8->next->next = tmp8;
                          int tmp_val8 = cell8->val;
                          cell8->val = 63;
                          cell8->next->val = tmp_val8;
                          sortedlist8->n++;
                          break;
                      }
                      cell8 = cell8->next;
                  }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist8;
      sortedlist_t* sortedlist9 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist9 != NULL && sortedlist9->n > 0){
           cell_t* cell10 = sortedlist9->root;
           cell_t* tmp10  = NULL;
           while(cell10 != NULL) {
                tmp10 = cell10->next;
                free(cell10);
                cell10 = tmp10;
           }
           free(sortedlist9);
      }
   }
   else {
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/4 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0)
         {
             cell_t* cell11 = sortedlist8->root;
             if(cell11->val == 36)
             {
                 cell11 = cell11->next;
                 sortedlist8->n--;
             }else{
                 while(cell11->next != NULL && cell11->next->val != 36) cell11 = cell11->next;
                 if(cell11->next != NULL)
                 {
                     cell11 = cell11->next->next;
                     sortedlist8->n--;
                 }
              }
         }
      }
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/4 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0) {
              cell_t* cell12 = sortedlist8->root;
              if(sortedlist8->n == 0) {
                  sortedlist8->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist8->root->val  = 68;
                  sortedlist8->root->next = NULL;
                  sortedlist8->n++;
              } else {
                  while(cell12 != NULL)
                  {
                      if(cell12->next == NULL && cell12->val < 68) {
                          cell12->next = (cell_t*)malloc(sizeof(cell_t));
                          cell12->next->next = NULL;
                          cell12->next->val  = 68;
                          sortedlist8->n++;
                          break;
                      } else if(68 < cell12->val) {
                          cell_t* tmp12 = cell12->next;
                          cell12->next = (cell_t*)malloc(sizeof(cell_t));
                          cell12->next->next = tmp12;
                          int tmp_val12 = cell12->val;
                          cell12->val = 68;
                          cell12->next->val = tmp_val12;
                          sortedlist8->n++;
                          break;
                      }
                      cell12 = cell12->next;
                  }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist8;
      sortedlist_t* sortedlist11 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist11 != NULL && sortedlist11->n > 0){
           cell_t* cell13 = sortedlist11->root;
           cell_t* tmp13  = NULL;
           while(cell13 != NULL) {
                tmp13 = cell13->next;
                free(cell13);
                cell13 = tmp13;
           }
           free(sortedlist11);
      }
   }
   unsigned int loop10 = 0;
   unsigned int loopLimit10 = (rand()%loopsFactor)/4 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      if(sortedlist8 != NULL && sortedlist8->n > 0) {
           cell_t* cell14 = sortedlist8->root;
           if(sortedlist8->n == 0) {
               sortedlist8->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist8->root->val  = 29;
               sortedlist8->root->next = NULL;
               sortedlist8->n++;
           } else {
               while(cell14 != NULL)
               {
                   if(cell14->next == NULL && cell14->val < 29) {
                       cell14->next = (cell_t*)malloc(sizeof(cell_t));
                       cell14->next->next = NULL;
                       cell14->next->val  = 29;
                       sortedlist8->n++;
                       break;
                   } else if(29 < cell14->val) {
                       cell_t* tmp14 = cell14->next;
                       cell14->next = (cell_t*)malloc(sizeof(cell_t));
                       cell14->next->next = tmp14;
                       int tmp_val14 = cell14->val;
                       cell14->val = 29;
                       cell14->next->val = tmp_val14;
                       sortedlist8->n++;
                       break;
                   }
                   cell14 = cell14->next;
               }
           }
      }
      unsigned int loop11 = 0;
      unsigned int loopLimit11 = (rand()%loopsFactor)/5 + 1;
      for(; loop11 < loopLimit11; loop11++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0)
         {
             cell_t* cell15 = sortedlist8->root;
             if(cell15->val == 30)
             {
                 cell15 = cell15->next;
                 sortedlist8->n--;
             }else{
                 while(cell15->next != NULL && cell15->next->val != 30) cell15 = cell15->next;
                 if(cell15->next != NULL)
                 {
                     cell15 = cell15->next->next;
                     sortedlist8->n--;
                 }
              }
         }
      }
      unsigned int loop12 = 0;
      unsigned int loopLimit12 = (rand()%loopsFactor)/5 + 1;
      for(; loop12 < loopLimit12; loop12++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0) {
              cell_t* cell16 = sortedlist8->root;
              if(sortedlist8->n == 0) {
                  sortedlist8->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist8->root->val  = 23;
                  sortedlist8->root->next = NULL;
                  sortedlist8->n++;
              } else {
                  while(cell16 != NULL)
                  {
                      if(cell16->next == NULL && cell16->val < 23) {
                          cell16->next = (cell_t*)malloc(sizeof(cell_t));
                          cell16->next->next = NULL;
                          cell16->next->val  = 23;
                          sortedlist8->n++;
                          break;
                      } else if(23 < cell16->val) {
                          cell_t* tmp16 = cell16->next;
                          cell16->next = (cell_t*)malloc(sizeof(cell_t));
                          cell16->next->next = tmp16;
                          int tmp_val16 = cell16->val;
                          cell16->val = 23;
                          cell16->next->val = tmp_val16;
                          sortedlist8->n++;
                          break;
                      }
                      cell16 = cell16->next;
                  }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist8;
      sortedlist_t* sortedlist12 = func8(&params0, rng(), loopsFactor);
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
   unsigned int loop13 = 0;
   unsigned int loopLimit13 = (rand()%loopsFactor)/4 + 1;
   for(; loop13 < loopLimit13; loop13++) {
      if(sortedlist8 != NULL && sortedlist8->n > 0) {
           cell_t* cell18 = sortedlist8->root;
           if(sortedlist8->n == 0) {
               sortedlist8->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist8->root->val  = 35;
               sortedlist8->root->next = NULL;
               sortedlist8->n++;
           } else {
               while(cell18 != NULL)
               {
                   if(cell18->next == NULL && cell18->val < 35) {
                       cell18->next = (cell_t*)malloc(sizeof(cell_t));
                       cell18->next->next = NULL;
                       cell18->next->val  = 35;
                       sortedlist8->n++;
                       break;
                   } else if(35 < cell18->val) {
                       cell_t* tmp18 = cell18->next;
                       cell18->next = (cell_t*)malloc(sizeof(cell_t));
                       cell18->next->next = tmp18;
                       int tmp_val18 = cell18->val;
                       cell18->val = 35;
                       cell18->next->val = tmp_val18;
                       sortedlist8->n++;
                       break;
                   }
                   cell18 = cell18->next;
               }
           }
      }
      unsigned int loop14 = 0;
      unsigned int loopLimit14 = (rand()%loopsFactor)/5 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0)
         {
             cell_t* cell19 = sortedlist8->root;
             if(cell19->val == 2)
             {
                 cell19 = cell19->next;
                 sortedlist8->n--;
             }else{
                 while(cell19->next != NULL && cell19->next->val != 2) cell19 = cell19->next;
                 if(cell19->next != NULL)
                 {
                     cell19 = cell19->next->next;
                     sortedlist8->n--;
                 }
              }
         }
      }
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/5 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0) {
              cell_t* cell20 = sortedlist8->root;
              if(sortedlist8->n == 0) {
                  sortedlist8->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist8->root->val  = 58;
                  sortedlist8->root->next = NULL;
                  sortedlist8->n++;
              } else {
                  while(cell20 != NULL)
                  {
                      if(cell20->next == NULL && cell20->val < 58) {
                          cell20->next = (cell_t*)malloc(sizeof(cell_t));
                          cell20->next->next = NULL;
                          cell20->next->val  = 58;
                          sortedlist8->n++;
                          break;
                      } else if(58 < cell20->val) {
                          cell_t* tmp20 = cell20->next;
                          cell20->next = (cell_t*)malloc(sizeof(cell_t));
                          cell20->next->next = tmp20;
                          int tmp_val20 = cell20->val;
                          cell20->val = 58;
                          cell20->next->val = tmp_val20;
                          sortedlist8->n++;
                          break;
                      }
                      cell20 = cell20->next;
                  }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist8;
      sortedlist_t* sortedlist13 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist13 != NULL && sortedlist13->n > 0){
           cell_t* cell21 = sortedlist13->root;
           cell_t* tmp21  = NULL;
           while(cell21 != NULL) {
                tmp21 = cell21->next;
                free(cell21);
                cell21 = tmp21;
           }
           free(sortedlist13);
      }
   }
   return sortedlist8;
}

