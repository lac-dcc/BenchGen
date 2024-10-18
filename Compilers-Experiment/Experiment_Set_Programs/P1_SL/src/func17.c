#include "P1_SL.h" 
sortedlist_t* func17(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist17 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist17->n = 0;
   sortedlist17->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop8 = 0;
      unsigned int loopLimit8 = (rand()%loopsFactor)/2 + 1;
      for(; loop8 < loopLimit8; loop8++) {
         if(sortedlist17 != NULL && sortedlist17->n > 0)
         {
             cell_t* cell18 = sortedlist17->root;
             if(cell18->val == 35)
             {
                 cell18 = cell18->next;
                 sortedlist17->n--;
             }else{
                 while(cell18->next != NULL && cell18->next->val != 35) cell18 = cell18->next;
                 if(cell18->next != NULL)
                 {
                     cell18 = cell18->next->next;
                     sortedlist17->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist17;
      sortedlist_t* sortedlist18 = func24(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop10 = 0;
      unsigned int loopLimit10 = (rand()%loopsFactor)/2 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         if(sortedlist17 != NULL && sortedlist17->n > 0) {
              cell_t* cell20 = sortedlist17->root;
              if(sortedlist17->n == 0) {
                  sortedlist17->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist17->root->val  = 69;
                  sortedlist17->root->next = NULL;
                  sortedlist17->n++;
              } else {
                  while(cell20 != NULL)
                  {
                      if(cell20->next == NULL && cell20->val < 69) {
                          cell20->next = (cell_t*)malloc(sizeof(cell_t));
                          cell20->next->next = NULL;
                          cell20->next->val  = 69;
                          sortedlist17->n++;
                          break;
                      } else if(69 < cell20->val) {
                          cell_t* tmp20 = cell20->next;
                          cell20->next = (cell_t*)malloc(sizeof(cell_t));
                          cell20->next->next = tmp20;
                          int tmp_val20 = cell20->val;
                          cell20->val = 69;
                          cell20->next->val = tmp_val20;
                          sortedlist17->n++;
                          break;
                      }
                      cell20 = cell20->next;
                  }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 2;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist17;
      params1.data[1] = sortedlist18;
      sortedlist_t* sortedlist20 = func21(&params1, loopsFactor);
      free(params1.data);
      if(sortedlist20 != NULL && sortedlist20->n > 0){
           cell_t* cell24 = sortedlist20->root;
           cell_t* tmp24  = NULL;
           while(cell24 != NULL) {
                tmp24 = cell24->next;
                free(cell24);
                cell24 = tmp24;
           }
           free(sortedlist20);
      }
      if(sortedlist18 != NULL && sortedlist18->n > 0){
           cell_t* cell25 = sortedlist18->root;
           cell_t* tmp25  = NULL;
           while(cell25 != NULL) {
                tmp25 = cell25->next;
                free(cell25);
                cell25 = tmp25;
           }
           free(sortedlist18);
      }
   }
   else {
      sortedlist_t* sortedlist22 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist22->n = 0;
      sortedlist22->root = NULL;
      if(sortedlist22 != NULL && sortedlist22->n > 0) {
           cell_t* cell26 = sortedlist22->root;
           if(sortedlist22->n == 0) {
               sortedlist22->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist22->root->val  = 19;
               sortedlist22->root->next = NULL;
               sortedlist22->n++;
           } else {
               while(cell26 != NULL)
               {
                   if(cell26->next == NULL && cell26->val < 19) {
                       cell26->next = (cell_t*)malloc(sizeof(cell_t));
                       cell26->next->next = NULL;
                       cell26->next->val  = 19;
                       sortedlist22->n++;
                       break;
                   } else if(19 < cell26->val) {
                       cell_t* tmp26 = cell26->next;
                       cell26->next = (cell_t*)malloc(sizeof(cell_t));
                       cell26->next->next = tmp26;
                       int tmp_val26 = cell26->val;
                       cell26->val = 19;
                       cell26->next->val = tmp_val26;
                       sortedlist22->n++;
                       break;
                   }
                   cell26 = cell26->next;
               }
           }
      }
      if(sortedlist17 != NULL && sortedlist17->n > 0){
           cell_t* cell27 = sortedlist17->root;
           while(cell27 != NULL && cell27->val != 37) cell27 = cell27->next;
           return cell27 != NULL ? sortedlist17 : NULL;
      }
      if(sortedlist17 != NULL && sortedlist17->n > 0)
      {
          cell_t* cell28 = sortedlist17->root;
          if(cell28->val == 24)
          {
              cell28 = cell28->next;
              sortedlist17->n--;
          }else{
              while(cell28->next != NULL && cell28->next->val != 24) cell28 = cell28->next;
              if(cell28->next != NULL)
              {
                  cell28 = cell28->next->next;
                  sortedlist17->n--;
              }
           }
      }
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist17;
      params0.data[1] = sortedlist22;
      sortedlist_t* sortedlist23 = func24(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist23 != NULL && sortedlist23->n > 0){
           cell_t* cell29 = sortedlist23->root;
           cell_t* tmp29  = NULL;
           while(cell29 != NULL) {
                tmp29 = cell29->next;
                free(cell29);
                cell29 = tmp29;
           }
           free(sortedlist23);
      }
      if(sortedlist22 != NULL && sortedlist22->n > 0){
           cell_t* cell30 = sortedlist22->root;
           cell_t* tmp30  = NULL;
           while(cell30 != NULL) {
                tmp30 = cell30->next;
                free(cell30);
                cell30 = tmp30;
           }
           free(sortedlist22);
      }
   }
   unsigned int loop11 = 0;
   unsigned int loopLimit11 = (rand()%loopsFactor)/2 + 1;
   for(; loop11 < loopLimit11; loop11++) {
      if(sortedlist17 != NULL && sortedlist17->n > 0) {
           cell_t* cell31 = sortedlist17->root;
           if(sortedlist17->n == 0) {
               sortedlist17->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist17->root->val  = 70;
               sortedlist17->root->next = NULL;
               sortedlist17->n++;
           } else {
               while(cell31 != NULL)
               {
                   if(cell31->next == NULL && cell31->val < 70) {
                       cell31->next = (cell_t*)malloc(sizeof(cell_t));
                       cell31->next->next = NULL;
                       cell31->next->val  = 70;
                       sortedlist17->n++;
                       break;
                   } else if(70 < cell31->val) {
                       cell_t* tmp31 = cell31->next;
                       cell31->next = (cell_t*)malloc(sizeof(cell_t));
                       cell31->next->next = tmp31;
                       int tmp_val31 = cell31->val;
                       cell31->val = 70;
                       cell31->next->val = tmp_val31;
                       sortedlist17->n++;
                       break;
                   }
                   cell31 = cell31->next;
               }
           }
      }
      sortedlist_t* sortedlist24 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist24->n = 0;
      sortedlist24->root = NULL;
      if(sortedlist24 != NULL && sortedlist24->n > 0) {
           cell_t* cell32 = sortedlist24->root;
           if(sortedlist24->n == 0) {
               sortedlist24->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist24->root->val  = 26;
               sortedlist24->root->next = NULL;
               sortedlist24->n++;
           } else {
               while(cell32 != NULL)
               {
                   if(cell32->next == NULL && cell32->val < 26) {
                       cell32->next = (cell_t*)malloc(sizeof(cell_t));
                       cell32->next->next = NULL;
                       cell32->next->val  = 26;
                       sortedlist24->n++;
                       break;
                   } else if(26 < cell32->val) {
                       cell_t* tmp32 = cell32->next;
                       cell32->next = (cell_t*)malloc(sizeof(cell_t));
                       cell32->next->next = tmp32;
                       int tmp_val32 = cell32->val;
                       cell32->val = 26;
                       cell32->next->val = tmp_val32;
                       sortedlist24->n++;
                       break;
                   }
                   cell32 = cell32->next;
               }
           }
      }
      if(sortedlist24 != NULL && sortedlist24->n > 0){
           cell_t* cell33 = sortedlist24->root;
           while(cell33 != NULL && cell33->val != 80) cell33 = cell33->next;
           return cell33 != NULL ? sortedlist24 : NULL;
      }
      if(sortedlist17 != NULL && sortedlist17->n > 0)
      {
          cell_t* cell34 = sortedlist17->root;
          if(cell34->val == 73)
          {
              cell34 = cell34->next;
              sortedlist17->n--;
          }else{
              while(cell34->next != NULL && cell34->next->val != 73) cell34 = cell34->next;
              if(cell34->next != NULL)
              {
                  cell34 = cell34->next->next;
                  sortedlist17->n--;
              }
           }
      }
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist17;
      params0.data[1] = sortedlist24;
      sortedlist_t* sortedlist25 = func24(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist25 != NULL && sortedlist25->n > 0){
           cell_t* cell35 = sortedlist25->root;
           cell_t* tmp35  = NULL;
           while(cell35 != NULL) {
                tmp35 = cell35->next;
                free(cell35);
                cell35 = tmp35;
           }
           free(sortedlist25);
      }
      if(sortedlist24 != NULL && sortedlist24->n > 0){
           cell_t* cell36 = sortedlist24->root;
           cell_t* tmp36  = NULL;
           while(cell36 != NULL) {
                tmp36 = cell36->next;
                free(cell36);
                cell36 = tmp36;
           }
           free(sortedlist24);
      }
   }
   return sortedlist17;
}

