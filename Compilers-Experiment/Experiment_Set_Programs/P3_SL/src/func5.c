#include "P3_SL.h" 
sortedlist_t* func5(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist22 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist22->n = 0;
   sortedlist22->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop25 = 0;
      unsigned int loopLimit25 = (rand()%loopsFactor)/3 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         if(sortedlist22 != NULL && sortedlist22->n > 0)
         {
             cell_t* cell36 = sortedlist22->root;
             if(cell36->val == 73)
             {
                 cell36 = cell36->next;
                 sortedlist22->n--;
             }else{
                 while(cell36->next != NULL && cell36->next->val != 73) cell36 = cell36->next;
                 if(cell36->next != NULL)
                 {
                     cell36 = cell36->next->next;
                     sortedlist22->n--;
                 }
              }
         }
      }
      unsigned int loop26 = 0;
      unsigned int loopLimit26 = (rand()%loopsFactor)/3 + 1;
      for(; loop26 < loopLimit26; loop26++) {
         if(sortedlist22 != NULL && sortedlist22->n > 0) {
              cell_t* cell37 = sortedlist22->root;
              if(sortedlist22->n == 0) {
                  sortedlist22->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist22->root->val  = 70;
                  sortedlist22->root->next = NULL;
                  sortedlist22->n++;
              } else {
                  while(cell37 != NULL)
                  {
                      if(cell37->next == NULL && cell37->val < 70) {
                          cell37->next = (cell_t*)malloc(sizeof(cell_t));
                          cell37->next->next = NULL;
                          cell37->next->val  = 70;
                          sortedlist22->n++;
                          break;
                      } else if(70 < cell37->val) {
                          cell_t* tmp37 = cell37->next;
                          cell37->next = (cell_t*)malloc(sizeof(cell_t));
                          cell37->next->next = tmp37;
                          int tmp_val37 = cell37->val;
                          cell37->val = 70;
                          cell37->next->val = tmp_val37;
                          sortedlist22->n++;
                          break;
                      }
                      cell37 = cell37->next;
                  }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist22;
      sortedlist_t* sortedlist23 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist23 != NULL && sortedlist23->n > 0){
           cell_t* cell38 = sortedlist23->root;
           cell_t* tmp38  = NULL;
           while(cell38 != NULL) {
                tmp38 = cell38->next;
                free(cell38);
                cell38 = tmp38;
           }
           free(sortedlist23);
      }
   }
   else {
      sortedlist_t* sortedlist24 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist24->n = 0;
      sortedlist24->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop27 = 0;
         unsigned int loopLimit27 = (rand()%loopsFactor)/3 + 1;
         for(; loop27 < loopLimit27; loop27++) {
            sortedlist_t* sortedlist25 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist25->n = 0;
            sortedlist25->root = NULL;
            if(sortedlist24 != NULL && sortedlist24->n > 0){
                 cell_t* cell39 = sortedlist24->root;
                 while(cell39 != NULL && cell39->val != 81) cell39 = cell39->next;
                 return cell39 != NULL ? sortedlist24 : NULL;
            }
            unsigned int loop28 = 0;
            unsigned int loopLimit28 = (rand()%loopsFactor)/4 + 1;
            for(; loop28 < loopLimit28; loop28++) {
               if(sortedlist22 != NULL && sortedlist22->n > 0) {
                    cell_t* cell40 = sortedlist22->root;
                    if(sortedlist22->n == 0) {
                        sortedlist22->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist22->root->val  = 25;
                        sortedlist22->root->next = NULL;
                        sortedlist22->n++;
                    } else {
                        while(cell40 != NULL)
                        {
                            if(cell40->next == NULL && cell40->val < 25) {
                                cell40->next = (cell_t*)malloc(sizeof(cell_t));
                                cell40->next->next = NULL;
                                cell40->next->val  = 25;
                                sortedlist22->n++;
                                break;
                            } else if(25 < cell40->val) {
                                cell_t* tmp40 = cell40->next;
                                cell40->next = (cell_t*)malloc(sizeof(cell_t));
                                cell40->next->next = tmp40;
                                int tmp_val40 = cell40->val;
                                cell40->val = 25;
                                cell40->next->val = tmp_val40;
                                sortedlist22->n++;
                                break;
                            }
                            cell40 = cell40->next;
                        }
                    }
               }
            }
            if(sortedlist25 != NULL && sortedlist25->n > 0){
                 cell_t* cell41 = sortedlist25->root;
                 cell_t* tmp41  = NULL;
                 while(cell41 != NULL) {
                      tmp41 = cell41->next;
                      free(cell41);
                      cell41 = tmp41;
                 }
                 free(sortedlist25);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist22;
         params0.data[1] = sortedlist24;
         sortedlist_t* sortedlist26 = func7(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist26 != NULL && sortedlist26->n > 0){
              cell_t* cell42 = sortedlist26->root;
              cell_t* tmp42  = NULL;
              while(cell42 != NULL) {
                   tmp42 = cell42->next;
                   free(cell42);
                   cell42 = tmp42;
              }
              free(sortedlist26);
         }
      }
      if(sortedlist24 != NULL && sortedlist24->n > 0){
           cell_t* cell43 = sortedlist24->root;
           cell_t* tmp43  = NULL;
           while(cell43 != NULL) {
                tmp43 = cell43->next;
                free(cell43);
                cell43 = tmp43;
           }
           free(sortedlist24);
      }
   }
   unsigned int loop29 = 0;
   unsigned int loopLimit29 = (rand()%loopsFactor)/3 + 1;
   for(; loop29 < loopLimit29; loop29++) {
      if(sortedlist22 != NULL && sortedlist22->n > 0) {
           cell_t* cell44 = sortedlist22->root;
           if(sortedlist22->n == 0) {
               sortedlist22->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist22->root->val  = 27;
               sortedlist22->root->next = NULL;
               sortedlist22->n++;
           } else {
               while(cell44 != NULL)
               {
                   if(cell44->next == NULL && cell44->val < 27) {
                       cell44->next = (cell_t*)malloc(sizeof(cell_t));
                       cell44->next->next = NULL;
                       cell44->next->val  = 27;
                       sortedlist22->n++;
                       break;
                   } else if(27 < cell44->val) {
                       cell_t* tmp44 = cell44->next;
                       cell44->next = (cell_t*)malloc(sizeof(cell_t));
                       cell44->next->next = tmp44;
                       int tmp_val44 = cell44->val;
                       cell44->val = 27;
                       cell44->next->val = tmp_val44;
                       sortedlist22->n++;
                       break;
                   }
                   cell44 = cell44->next;
               }
           }
      }
      sortedlist_t* sortedlist27 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist27->n = 0;
      sortedlist27->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop30 = 0;
         unsigned int loopLimit30 = (rand()%loopsFactor)/4 + 1;
         for(; loop30 < loopLimit30; loop30++) {
            sortedlist_t* sortedlist28 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist28->n = 0;
            sortedlist28->root = NULL;
            if(sortedlist28 != NULL && sortedlist28->n > 0){
                 cell_t* cell45 = sortedlist28->root;
                 while(cell45 != NULL && cell45->val != 5) cell45 = cell45->next;
                 return cell45 != NULL ? sortedlist28 : NULL;
            }
            unsigned int loop31 = 0;
            unsigned int loopLimit31 = (rand()%loopsFactor)/5 + 1;
            for(; loop31 < loopLimit31; loop31++) {
               if(sortedlist27 != NULL && sortedlist27->n > 0) {
                    cell_t* cell46 = sortedlist27->root;
                    if(sortedlist27->n == 0) {
                        sortedlist27->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist27->root->val  = 29;
                        sortedlist27->root->next = NULL;
                        sortedlist27->n++;
                    } else {
                        while(cell46 != NULL)
                        {
                            if(cell46->next == NULL && cell46->val < 29) {
                                cell46->next = (cell_t*)malloc(sizeof(cell_t));
                                cell46->next->next = NULL;
                                cell46->next->val  = 29;
                                sortedlist27->n++;
                                break;
                            } else if(29 < cell46->val) {
                                cell_t* tmp46 = cell46->next;
                                cell46->next = (cell_t*)malloc(sizeof(cell_t));
                                cell46->next->next = tmp46;
                                int tmp_val46 = cell46->val;
                                cell46->val = 29;
                                cell46->next->val = tmp_val46;
                                sortedlist27->n++;
                                break;
                            }
                            cell46 = cell46->next;
                        }
                    }
               }
            }
            if(sortedlist28 != NULL && sortedlist28->n > 0){
                 cell_t* cell47 = sortedlist28->root;
                 cell_t* tmp47  = NULL;
                 while(cell47 != NULL) {
                      tmp47 = cell47->next;
                      free(cell47);
                      cell47 = tmp47;
                 }
                 free(sortedlist28);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist22;
         params0.data[1] = sortedlist27;
         sortedlist_t* sortedlist29 = func7(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist29 != NULL && sortedlist29->n > 0){
              cell_t* cell48 = sortedlist29->root;
              cell_t* tmp48  = NULL;
              while(cell48 != NULL) {
                   tmp48 = cell48->next;
                   free(cell48);
                   cell48 = tmp48;
              }
              free(sortedlist29);
         }
      }
      if(sortedlist27 != NULL && sortedlist27->n > 0){
           cell_t* cell49 = sortedlist27->root;
           cell_t* tmp49  = NULL;
           while(cell49 != NULL) {
                tmp49 = cell49->next;
                free(cell49);
                cell49 = tmp49;
           }
           free(sortedlist27);
      }
   }
   return sortedlist22;
}

