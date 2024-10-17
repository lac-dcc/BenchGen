#include "P3_SL.h" 
sortedlist_t* func1(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist15 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist15->n = 0;
   sortedlist15->root = NULL;
   unsigned int loop18 = 0;
   unsigned int loopLimit18 = (rand()%loopsFactor)/3 + 1;
   for(; loop18 < loopLimit18; loop18++) {
      if(sortedlist15 != NULL && sortedlist15->n > 0)
      {
          cell_t* cell27 = sortedlist15->root;
          if(cell27->val == 29)
          {
              cell27 = cell27->next;
              sortedlist15->n--;
          }else{
              while(cell27->next != NULL && cell27->next->val != 29) cell27 = cell27->next;
              if(cell27->next != NULL)
              {
                  cell27 = cell27->next->next;
                  sortedlist15->n--;
              }
           }
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist15;
   sortedlist_t* sortedlist16 = func9(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop21 = 0;
   unsigned int loopLimit21 = (rand()%loopsFactor)/3 + 1;
   for(; loop21 < loopLimit21; loop21++) {
      if(sortedlist15 != NULL && sortedlist15->n > 0)
      {
          cell_t* cell30 = sortedlist15->root;
          if(cell30->val == 24)
          {
              cell30 = cell30->next;
              sortedlist15->n--;
          }else{
              while(cell30->next != NULL && cell30->next->val != 24) cell30 = cell30->next;
              if(cell30->next != NULL)
              {
                  cell30 = cell30->next->next;
                  sortedlist15->n--;
              }
           }
      }
   }
   unsigned int loop22 = 0;
   unsigned int loopLimit22 = (rand()%loopsFactor)/3 + 1;
   for(; loop22 < loopLimit22; loop22++) {
      if(sortedlist16 != NULL && sortedlist16->n > 0) {
           cell_t* cell31 = sortedlist16->root;
           if(sortedlist16->n == 0) {
               sortedlist16->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist16->root->val  = 70;
               sortedlist16->root->next = NULL;
               sortedlist16->n++;
           } else {
               while(cell31 != NULL)
               {
                   if(cell31->next == NULL && cell31->val < 70) {
                       cell31->next = (cell_t*)malloc(sizeof(cell_t));
                       cell31->next->next = NULL;
                       cell31->next->val  = 70;
                       sortedlist16->n++;
                       break;
                   } else if(70 < cell31->val) {
                       cell_t* tmp31 = cell31->next;
                       cell31->next = (cell_t*)malloc(sizeof(cell_t));
                       cell31->next->next = tmp31;
                       int tmp_val31 = cell31->val;
                       cell31->val = 70;
                       cell31->next->val = tmp_val31;
                       sortedlist16->n++;
                       break;
                   }
                   cell31 = cell31->next;
               }
           }
      }
   }
   sortedlist_t* sortedlist18 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist18->n = 0;
   sortedlist18->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop23 = 0;
      unsigned int loopLimit23 = (rand()%loopsFactor)/3 + 1;
      for(; loop23 < loopLimit23; loop23++) {
         sortedlist_t* sortedlist19 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist19->n = 0;
         sortedlist19->root = NULL;
         if(sortedlist16 != NULL && sortedlist16->n > 0){
              cell_t* cell32 = sortedlist16->root;
              while(cell32 != NULL && cell32->val != 26) cell32 = cell32->next;
              return cell32 != NULL ? sortedlist16 : NULL;
         }
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (rand()%loopsFactor)/4 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            if(sortedlist19 != NULL && sortedlist19->n > 0) {
                 cell_t* cell33 = sortedlist19->root;
                 if(sortedlist19->n == 0) {
                     sortedlist19->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist19->root->val  = 80;
                     sortedlist19->root->next = NULL;
                     sortedlist19->n++;
                 } else {
                     while(cell33 != NULL)
                     {
                         if(cell33->next == NULL && cell33->val < 80) {
                             cell33->next = (cell_t*)malloc(sizeof(cell_t));
                             cell33->next->next = NULL;
                             cell33->next->val  = 80;
                             sortedlist19->n++;
                             break;
                         } else if(80 < cell33->val) {
                             cell_t* tmp33 = cell33->next;
                             cell33->next = (cell_t*)malloc(sizeof(cell_t));
                             cell33->next->next = tmp33;
                             int tmp_val33 = cell33->val;
                             cell33->val = 80;
                             cell33->next->val = tmp_val33;
                             sortedlist19->n++;
                             break;
                         }
                         cell33 = cell33->next;
                     }
                 }
            }
         }
         if(sortedlist19 != NULL && sortedlist19->n > 0){
              cell_t* cell34 = sortedlist19->root;
              cell_t* tmp34  = NULL;
              while(cell34 != NULL) {
                   tmp34 = cell34->next;
                   free(cell34);
                   cell34 = tmp34;
              }
              free(sortedlist19);
         }
      }
   }
   else {
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist15;
      params1.data[1] = sortedlist16;
      params1.data[2] = sortedlist18;
      sortedlist_t* sortedlist20 = func7(&params1, loopsFactor);
      free(params1.data);
      if(sortedlist20 != NULL && sortedlist20->n > 0){
           cell_t* cell35 = sortedlist20->root;
           cell_t* tmp35  = NULL;
           while(cell35 != NULL) {
                tmp35 = cell35->next;
                free(cell35);
                cell35 = tmp35;
           }
           free(sortedlist20);
      }
   }
   sortedlist_t_param params1;
   params1.size = 3;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist15;
   params1.data[1] = sortedlist16;
   params1.data[2] = sortedlist18;
   sortedlist_t* sortedlist21 = func5(&params1, rng(), loopsFactor);
   free(params1.data);
   if(sortedlist16 != NULL && sortedlist16->n > 0){
        cell_t* cell50 = sortedlist16->root;
        while(cell50 != NULL && cell50->val != 24) cell50 = cell50->next;
        return cell50 != NULL ? sortedlist16 : NULL;
   }
   if(sortedlist18 != NULL && sortedlist18->n > 0){
        cell_t* cell51 = sortedlist18->root;
        cell_t* tmp51  = NULL;
        while(cell51 != NULL) {
             tmp51 = cell51->next;
             free(cell51);
             cell51 = tmp51;
        }
        free(sortedlist18);
   }
   if(sortedlist16 != NULL && sortedlist16->n > 0){
        cell_t* cell52 = sortedlist16->root;
        cell_t* tmp52  = NULL;
        while(cell52 != NULL) {
             tmp52 = cell52->next;
             free(cell52);
             cell52 = tmp52;
        }
        free(sortedlist16);
   }
   if(sortedlist15 != NULL && sortedlist15->n > 0){
        cell_t* cell53 = sortedlist15->root;
        cell_t* tmp53  = NULL;
        while(cell53 != NULL) {
             tmp53 = cell53->next;
             free(cell53);
             cell53 = tmp53;
        }
        free(sortedlist15);
   }
   return sortedlist21;
}

