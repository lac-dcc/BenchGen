#include "P2_SL.h" 
sortedlist_t* func11(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist10 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist10->n = 0;
   sortedlist10->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/4 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         if(sortedlist10 != NULL && sortedlist10->n > 0)
         {
             cell_t* cell11 = sortedlist10->root;
             if(cell11->val == 11)
             {
                 cell11 = cell11->next;
                 sortedlist10->n--;
             }else{
                 while(cell11->next != NULL && cell11->next->val != 11) cell11 = cell11->next;
                 if(cell11->next != NULL)
                 {
                     cell11 = cell11->next->next;
                     sortedlist10->n--;
                 }
              }
         }
      }
      unsigned int loop6 = 0;
      unsigned int loopLimit6 = (rand()%loopsFactor)/4 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         if(sortedlist10 != NULL && sortedlist10->n > 0) {
              cell_t* cell12 = sortedlist10->root;
              if(sortedlist10->n == 0) {
                  sortedlist10->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist10->root->val  = 67;
                  sortedlist10->root->next = NULL;
                  sortedlist10->n++;
              } else {
                  while(cell12 != NULL)
                  {
                      if(cell12->next == NULL && cell12->val < 67) {
                          cell12->next = (cell_t*)malloc(sizeof(cell_t));
                          cell12->next->next = NULL;
                          cell12->next->val  = 67;
                          sortedlist10->n++;
                          break;
                      } else if(67 < cell12->val) {
                          cell_t* tmp12 = cell12->next;
                          cell12->next = (cell_t*)malloc(sizeof(cell_t));
                          cell12->next->next = tmp12;
                          int tmp_val12 = cell12->val;
                          cell12->val = 67;
                          cell12->next->val = tmp_val12;
                          sortedlist10->n++;
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
      params0.data[0] = sortedlist10;
      sortedlist_t* sortedlist11 = func15(&params0, loopsFactor);
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
   else {
      sortedlist_t* sortedlist13 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist13->n = 0;
      sortedlist13->root = NULL;
      unsigned int loop7 = 0;
      unsigned int loopLimit7 = (rand()%loopsFactor)/4 + 1;
      for(; loop7 < loopLimit7; loop7++) {
         if(sortedlist10 != NULL && sortedlist10->n > 0)
         {
             cell_t* cell14 = sortedlist10->root;
             if(cell14->val == 30)
             {
                 cell14 = cell14->next;
                 sortedlist10->n--;
             }else{
                 while(cell14->next != NULL && cell14->next->val != 30) cell14 = cell14->next;
                 if(cell14->next != NULL)
                 {
                     cell14 = cell14->next->next;
                     sortedlist10->n--;
                 }
              }
         }
      }
      if(sortedlist10 != NULL && sortedlist10->n > 0) {
           cell_t* cell15 = sortedlist10->root;
           if(sortedlist10->n == 0) {
               sortedlist10->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist10->root->val  = 23;
               sortedlist10->root->next = NULL;
               sortedlist10->n++;
           } else {
               while(cell15 != NULL)
               {
                   if(cell15->next == NULL && cell15->val < 23) {
                       cell15->next = (cell_t*)malloc(sizeof(cell_t));
                       cell15->next->next = NULL;
                       cell15->next->val  = 23;
                       sortedlist10->n++;
                       break;
                   } else if(23 < cell15->val) {
                       cell_t* tmp15 = cell15->next;
                       cell15->next = (cell_t*)malloc(sizeof(cell_t));
                       cell15->next->next = tmp15;
                       int tmp_val15 = cell15->val;
                       cell15->val = 23;
                       cell15->next->val = tmp_val15;
                       sortedlist10->n++;
                       break;
                   }
                   cell15 = cell15->next;
               }
           }
      }
      if(sortedlist13 != NULL && sortedlist13->n > 0){
           cell_t* cell16 = sortedlist13->root;
           while(cell16 != NULL && cell16->val != 35) cell16 = cell16->next;
           return cell16 != NULL ? sortedlist13 : NULL;
      }
      if(sortedlist13 != NULL && sortedlist13->n > 0)
      {
          cell_t* cell17 = sortedlist13->root;
          if(cell17->val == 2)
          {
              cell17 = cell17->next;
              sortedlist13->n--;
          }else{
              while(cell17->next != NULL && cell17->next->val != 2) cell17 = cell17->next;
              if(cell17->next != NULL)
              {
                  cell17 = cell17->next->next;
                  sortedlist13->n--;
              }
           }
      }
      if(sortedlist13 != NULL && sortedlist13->n > 0){
           cell_t* cell18 = sortedlist13->root;
           cell_t* tmp18  = NULL;
           while(cell18 != NULL) {
                tmp18 = cell18->next;
                free(cell18);
                cell18 = tmp18;
           }
           free(sortedlist13);
      }
   }
   unsigned int loop8 = 0;
   unsigned int loopLimit8 = (rand()%loopsFactor)/4 + 1;
   for(; loop8 < loopLimit8; loop8++) {
      if(sortedlist10 != NULL && sortedlist10->n > 0) {
           cell_t* cell19 = sortedlist10->root;
           if(sortedlist10->n == 0) {
               sortedlist10->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist10->root->val  = 58;
               sortedlist10->root->next = NULL;
               sortedlist10->n++;
           } else {
               while(cell19 != NULL)
               {
                   if(cell19->next == NULL && cell19->val < 58) {
                       cell19->next = (cell_t*)malloc(sizeof(cell_t));
                       cell19->next->next = NULL;
                       cell19->next->val  = 58;
                       sortedlist10->n++;
                       break;
                   } else if(58 < cell19->val) {
                       cell_t* tmp19 = cell19->next;
                       cell19->next = (cell_t*)malloc(sizeof(cell_t));
                       cell19->next->next = tmp19;
                       int tmp_val19 = cell19->val;
                       cell19->val = 58;
                       cell19->next->val = tmp_val19;
                       sortedlist10->n++;
                       break;
                   }
                   cell19 = cell19->next;
               }
           }
      }
      sortedlist_t* sortedlist14 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist14->n = 0;
      sortedlist14->root = NULL;
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/5 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         if(sortedlist14 != NULL && sortedlist14->n > 0)
         {
             cell_t* cell20 = sortedlist14->root;
             if(cell20->val == 67)
             {
                 cell20 = cell20->next;
                 sortedlist14->n--;
             }else{
                 while(cell20->next != NULL && cell20->next->val != 67) cell20 = cell20->next;
                 if(cell20->next != NULL)
                 {
                     cell20 = cell20->next->next;
                     sortedlist14->n--;
                 }
              }
         }
      }
      if(sortedlist14 != NULL && sortedlist14->n > 0) {
           cell_t* cell21 = sortedlist14->root;
           if(sortedlist14->n == 0) {
               sortedlist14->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist14->root->val  = 56;
               sortedlist14->root->next = NULL;
               sortedlist14->n++;
           } else {
               while(cell21 != NULL)
               {
                   if(cell21->next == NULL && cell21->val < 56) {
                       cell21->next = (cell_t*)malloc(sizeof(cell_t));
                       cell21->next->next = NULL;
                       cell21->next->val  = 56;
                       sortedlist14->n++;
                       break;
                   } else if(56 < cell21->val) {
                       cell_t* tmp21 = cell21->next;
                       cell21->next = (cell_t*)malloc(sizeof(cell_t));
                       cell21->next->next = tmp21;
                       int tmp_val21 = cell21->val;
                       cell21->val = 56;
                       cell21->next->val = tmp_val21;
                       sortedlist14->n++;
                       break;
                   }
                   cell21 = cell21->next;
               }
           }
      }
      if(sortedlist14 != NULL && sortedlist14->n > 0){
           cell_t* cell22 = sortedlist14->root;
           while(cell22 != NULL && cell22->val != 42) cell22 = cell22->next;
           return cell22 != NULL ? sortedlist14 : NULL;
      }
      if(sortedlist14 != NULL && sortedlist14->n > 0)
      {
          cell_t* cell23 = sortedlist14->root;
          if(cell23->val == 73)
          {
              cell23 = cell23->next;
              sortedlist14->n--;
          }else{
              while(cell23->next != NULL && cell23->next->val != 73) cell23 = cell23->next;
              if(cell23->next != NULL)
              {
                  cell23 = cell23->next->next;
                  sortedlist14->n--;
              }
           }
      }
      if(sortedlist14 != NULL && sortedlist14->n > 0){
           cell_t* cell24 = sortedlist14->root;
           cell_t* tmp24  = NULL;
           while(cell24 != NULL) {
                tmp24 = cell24->next;
                free(cell24);
                cell24 = tmp24;
           }
           free(sortedlist14);
      }
   }
   return sortedlist10;
}

