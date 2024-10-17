#include "P4_SL.h" 
sortedlist_t* func3(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist7 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist7->n = 0;
   sortedlist7->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/3 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         if(sortedlist7 != NULL && sortedlist7->n > 0)
         {
             cell_t* cell9 = sortedlist7->root;
             if(cell9->val == 40)
             {
                 cell9 = cell9->next;
                 sortedlist7->n--;
             }else{
                 while(cell9->next != NULL && cell9->next->val != 40) cell9 = cell9->next;
                 if(cell9->next != NULL)
                 {
                     cell9 = cell9->next->next;
                     sortedlist7->n--;
                 }
              }
         }
      }
      unsigned int loop6 = 0;
      unsigned int loopLimit6 = (rand()%loopsFactor)/3 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         sortedlist_t* sortedlist8 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist8->n = 0;
         sortedlist8->root = NULL;
         sortedlist_t* sortedlist9 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist9->n = 0;
         sortedlist9->root = NULL;
         if(sortedlist7 != NULL && sortedlist7->n > 0){
              cell_t* cell10 = sortedlist7->root;
              while(cell10 != NULL && cell10->val != 72) cell10 = cell10->next;
              return cell10 != NULL ? sortedlist7 : NULL;
         }
         unsigned int loop7 = 0;
         unsigned int loopLimit7 = (rand()%loopsFactor)/4 + 1;
         for(; loop7 < loopLimit7; loop7++) {
            if(sortedlist8 != NULL && sortedlist8->n > 0){
                 cell_t* cell11 = sortedlist8->root;
                 while(cell11 != NULL && cell11->val != 11) cell11 = cell11->next;
                 return cell11 != NULL ? sortedlist8 : NULL;
            }
         }
         if(sortedlist9 != NULL && sortedlist9->n > 0){
              cell_t* cell12 = sortedlist9->root;
              cell_t* tmp12  = NULL;
              while(cell12 != NULL) {
                   tmp12 = cell12->next;
                   free(cell12);
                   cell12 = tmp12;
              }
              free(sortedlist9);
         }
         if(sortedlist8 != NULL && sortedlist8->n > 0){
              cell_t* cell13 = sortedlist8->root;
              cell_t* tmp13  = NULL;
              while(cell13 != NULL) {
                   tmp13 = cell13->next;
                   free(cell13);
                   cell13 = tmp13;
              }
              free(sortedlist8);
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist7;
      sortedlist_t* sortedlist10 = func7(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist10 != NULL && sortedlist10->n > 0){
           cell_t* cell15 = sortedlist10->root;
           cell_t* tmp15  = NULL;
           while(cell15 != NULL) {
                tmp15 = cell15->next;
                free(cell15);
                cell15 = tmp15;
           }
           free(sortedlist10);
      }
   }
   else {
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/3 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         if(sortedlist7 != NULL && sortedlist7->n > 0)
         {
             cell_t* cell16 = sortedlist7->root;
             if(cell16->val == 30)
             {
                 cell16 = cell16->next;
                 sortedlist7->n--;
             }else{
                 while(cell16->next != NULL && cell16->next->val != 30) cell16 = cell16->next;
                 if(cell16->next != NULL)
                 {
                     cell16 = cell16->next->next;
                     sortedlist7->n--;
                 }
              }
         }
      }
      unsigned int loop10 = 0;
      unsigned int loopLimit10 = (rand()%loopsFactor)/3 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         sortedlist_t* sortedlist12 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist12->n = 0;
         sortedlist12->root = NULL;
         sortedlist_t* sortedlist13 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist13->n = 0;
         sortedlist13->root = NULL;
         if(sortedlist13 != NULL && sortedlist13->n > 0){
              cell_t* cell17 = sortedlist13->root;
              while(cell17 != NULL && cell17->val != 23) cell17 = cell17->next;
              return cell17 != NULL ? sortedlist13 : NULL;
         }
         unsigned int loop11 = 0;
         unsigned int loopLimit11 = (rand()%loopsFactor)/4 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            if(sortedlist12 != NULL && sortedlist12->n > 0){
                 cell_t* cell18 = sortedlist12->root;
                 while(cell18 != NULL && cell18->val != 35) cell18 = cell18->next;
                 return cell18 != NULL ? sortedlist12 : NULL;
            }
         }
         if(sortedlist13 != NULL && sortedlist13->n > 0){
              cell_t* cell19 = sortedlist13->root;
              cell_t* tmp19  = NULL;
              while(cell19 != NULL) {
                   tmp19 = cell19->next;
                   free(cell19);
                   cell19 = tmp19;
              }
              free(sortedlist13);
         }
         if(sortedlist12 != NULL && sortedlist12->n > 0){
              cell_t* cell20 = sortedlist12->root;
              cell_t* tmp20  = NULL;
              while(cell20 != NULL) {
                   tmp20 = cell20->next;
                   free(cell20);
                   cell20 = tmp20;
              }
              free(sortedlist12);
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist7;
      sortedlist_t* sortedlist14 = func7(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist14 != NULL && sortedlist14->n > 0){
           cell_t* cell21 = sortedlist14->root;
           cell_t* tmp21  = NULL;
           while(cell21 != NULL) {
                tmp21 = cell21->next;
                free(cell21);
                cell21 = tmp21;
           }
           free(sortedlist14);
      }
   }
   unsigned int loop12 = 0;
   unsigned int loopLimit12 = (rand()%loopsFactor)/3 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      if(sortedlist7 != NULL && sortedlist7->n > 0) {
           cell_t* cell22 = sortedlist7->root;
           if(sortedlist7->n == 0) {
               sortedlist7->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist7->root->val  = 2;
               sortedlist7->root->next = NULL;
               sortedlist7->n++;
           } else {
               while(cell22 != NULL)
               {
                   if(cell22->next == NULL && cell22->val < 2) {
                       cell22->next = (cell_t*)malloc(sizeof(cell_t));
                       cell22->next->next = NULL;
                       cell22->next->val  = 2;
                       sortedlist7->n++;
                       break;
                   } else if(2 < cell22->val) {
                       cell_t* tmp22 = cell22->next;
                       cell22->next = (cell_t*)malloc(sizeof(cell_t));
                       cell22->next->next = tmp22;
                       int tmp_val22 = cell22->val;
                       cell22->val = 2;
                       cell22->next->val = tmp_val22;
                       sortedlist7->n++;
                       break;
                   }
                   cell22 = cell22->next;
               }
           }
      }
      unsigned int loop13 = 0;
      unsigned int loopLimit13 = (rand()%loopsFactor)/4 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if(sortedlist7 != NULL && sortedlist7->n > 0)
         {
             cell_t* cell23 = sortedlist7->root;
             if(cell23->val == 58)
             {
                 cell23 = cell23->next;
                 sortedlist7->n--;
             }else{
                 while(cell23->next != NULL && cell23->next->val != 58) cell23 = cell23->next;
                 if(cell23->next != NULL)
                 {
                     cell23 = cell23->next->next;
                     sortedlist7->n--;
                 }
              }
         }
      }
      unsigned int loop14 = 0;
      unsigned int loopLimit14 = (rand()%loopsFactor)/4 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         sortedlist_t* sortedlist15 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist15->n = 0;
         sortedlist15->root = NULL;
         sortedlist_t* sortedlist16 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist16->n = 0;
         sortedlist16->root = NULL;
         if(sortedlist16 != NULL && sortedlist16->n > 0){
              cell_t* cell24 = sortedlist16->root;
              while(cell24 != NULL && cell24->val != 67) cell24 = cell24->next;
              return cell24 != NULL ? sortedlist16 : NULL;
         }
         unsigned int loop15 = 0;
         unsigned int loopLimit15 = (rand()%loopsFactor)/5 + 1;
         for(; loop15 < loopLimit15; loop15++) {
            if(sortedlist15 != NULL && sortedlist15->n > 0){
                 cell_t* cell25 = sortedlist15->root;
                 while(cell25 != NULL && cell25->val != 56) cell25 = cell25->next;
                 return cell25 != NULL ? sortedlist15 : NULL;
            }
         }
         if(sortedlist16 != NULL && sortedlist16->n > 0){
              cell_t* cell26 = sortedlist16->root;
              cell_t* tmp26  = NULL;
              while(cell26 != NULL) {
                   tmp26 = cell26->next;
                   free(cell26);
                   cell26 = tmp26;
              }
              free(sortedlist16);
         }
         if(sortedlist15 != NULL && sortedlist15->n > 0){
              cell_t* cell27 = sortedlist15->root;
              cell_t* tmp27  = NULL;
              while(cell27 != NULL) {
                   tmp27 = cell27->next;
                   free(cell27);
                   cell27 = tmp27;
              }
              free(sortedlist15);
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist7;
      sortedlist_t* sortedlist17 = func7(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist17 != NULL && sortedlist17->n > 0){
           cell_t* cell28 = sortedlist17->root;
           cell_t* tmp28  = NULL;
           while(cell28 != NULL) {
                tmp28 = cell28->next;
                free(cell28);
                cell28 = tmp28;
           }
           free(sortedlist17);
      }
   }
   if(sortedlist7 != NULL && sortedlist7->n > 0){
        cell_t* cell29 = sortedlist7->root;
        while(cell29 != NULL && cell29->val != 42) cell29 = cell29->next;
        return cell29 != NULL ? sortedlist7 : NULL;
   }
   if(PATH0 & 2) {
      sortedlist_t* sortedlist18 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist18->n = 0;
      sortedlist18->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop16 = 0;
         unsigned int loopLimit16 = (rand()%loopsFactor)/3 + 1;
         for(; loop16 < loopLimit16; loop16++) {
            sortedlist_t* sortedlist19 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist19->n = 0;
            sortedlist19->root = NULL;
            if(sortedlist7 != NULL && sortedlist7->n > 0){
                 cell_t* cell30 = sortedlist7->root;
                 while(cell30 != NULL && cell30->val != 73) cell30 = cell30->next;
                 return cell30 != NULL ? sortedlist7 : NULL;
            }
            unsigned int loop17 = 0;
            unsigned int loopLimit17 = (rand()%loopsFactor)/4 + 1;
            for(; loop17 < loopLimit17; loop17++) {
               if(sortedlist7 != NULL && sortedlist7->n > 0) {
                    cell_t* cell31 = sortedlist7->root;
                    if(sortedlist7->n == 0) {
                        sortedlist7->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist7->root->val  = 19;
                        sortedlist7->root->next = NULL;
                        sortedlist7->n++;
                    } else {
                        while(cell31 != NULL)
                        {
                            if(cell31->next == NULL && cell31->val < 19) {
                                cell31->next = (cell_t*)malloc(sizeof(cell_t));
                                cell31->next->next = NULL;
                                cell31->next->val  = 19;
                                sortedlist7->n++;
                                break;
                            } else if(19 < cell31->val) {
                                cell_t* tmp31 = cell31->next;
                                cell31->next = (cell_t*)malloc(sizeof(cell_t));
                                cell31->next->next = tmp31;
                                int tmp_val31 = cell31->val;
                                cell31->val = 19;
                                cell31->next->val = tmp_val31;
                                sortedlist7->n++;
                                break;
                            }
                            cell31 = cell31->next;
                        }
                    }
               }
            }
            if(sortedlist19 != NULL && sortedlist19->n > 0){
                 cell_t* cell32 = sortedlist19->root;
                 cell_t* tmp32  = NULL;
                 while(cell32 != NULL) {
                      tmp32 = cell32->next;
                      free(cell32);
                      cell32 = tmp32;
                 }
                 free(sortedlist19);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist7;
         params0.data[1] = sortedlist18;
         sortedlist_t* sortedlist20 = func6(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist20 != NULL && sortedlist20->n > 0){
              cell_t* cell33 = sortedlist20->root;
              cell_t* tmp33  = NULL;
              while(cell33 != NULL) {
                   tmp33 = cell33->next;
                   free(cell33);
                   cell33 = tmp33;
              }
              free(sortedlist20);
         }
      }
      unsigned int loop18 = 0;
      unsigned int loopLimit18 = (rand()%loopsFactor)/3 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         if(sortedlist7 != NULL && sortedlist7->n > 0) {
              cell_t* cell34 = sortedlist7->root;
              if(sortedlist7->n == 0) {
                  sortedlist7->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist7->root->val  = 37;
                  sortedlist7->root->next = NULL;
                  sortedlist7->n++;
              } else {
                  while(cell34 != NULL)
                  {
                      if(cell34->next == NULL && cell34->val < 37) {
                          cell34->next = (cell_t*)malloc(sizeof(cell_t));
                          cell34->next->next = NULL;
                          cell34->next->val  = 37;
                          sortedlist7->n++;
                          break;
                      } else if(37 < cell34->val) {
                          cell_t* tmp34 = cell34->next;
                          cell34->next = (cell_t*)malloc(sizeof(cell_t));
                          cell34->next->next = tmp34;
                          int tmp_val34 = cell34->val;
                          cell34->val = 37;
                          cell34->next->val = tmp_val34;
                          sortedlist7->n++;
                          break;
                      }
                      cell34 = cell34->next;
                  }
              }
         }
         if(sortedlist7 != NULL && sortedlist7->n > 0)
         {
             cell_t* cell35 = sortedlist7->root;
             if(cell35->val == 24)
             {
                 cell35 = cell35->next;
                 sortedlist7->n--;
             }else{
                 while(cell35->next != NULL && cell35->next->val != 24) cell35 = cell35->next;
                 if(cell35->next != NULL)
                 {
                     cell35 = cell35->next->next;
                     sortedlist7->n--;
                 }
              }
         }
         if(sortedlist18 != NULL && sortedlist18->n > 0)
         {
             cell_t* cell36 = sortedlist18->root;
             if(cell36->val == 70)
             {
                 cell36 = cell36->next;
                 sortedlist18->n--;
             }else{
                 while(cell36->next != NULL && cell36->next->val != 70) cell36 = cell36->next;
                 if(cell36->next != NULL)
                 {
                     cell36 = cell36->next->next;
                     sortedlist18->n--;
                 }
              }
         }
      }
      if(sortedlist18 != NULL && sortedlist18->n > 0){
           cell_t* cell37 = sortedlist18->root;
           cell_t* tmp37  = NULL;
           while(cell37 != NULL) {
                tmp37 = cell37->next;
                free(cell37);
                cell37 = tmp37;
           }
           free(sortedlist18);
      }
   }
   else {
      sortedlist_t* sortedlist21 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist21->n = 0;
      sortedlist21->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop19 = 0;
         unsigned int loopLimit19 = (rand()%loopsFactor)/3 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            sortedlist_t* sortedlist22 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist22->n = 0;
            sortedlist22->root = NULL;
            if(sortedlist22 != NULL && sortedlist22->n > 0){
                 cell_t* cell38 = sortedlist22->root;
                 while(cell38 != NULL && cell38->val != 26) cell38 = cell38->next;
                 return cell38 != NULL ? sortedlist22 : NULL;
            }
            unsigned int loop20 = 0;
            unsigned int loopLimit20 = (rand()%loopsFactor)/4 + 1;
            for(; loop20 < loopLimit20; loop20++) {
               if(sortedlist21 != NULL && sortedlist21->n > 0) {
                    cell_t* cell39 = sortedlist21->root;
                    if(sortedlist21->n == 0) {
                        sortedlist21->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist21->root->val  = 80;
                        sortedlist21->root->next = NULL;
                        sortedlist21->n++;
                    } else {
                        while(cell39 != NULL)
                        {
                            if(cell39->next == NULL && cell39->val < 80) {
                                cell39->next = (cell_t*)malloc(sizeof(cell_t));
                                cell39->next->next = NULL;
                                cell39->next->val  = 80;
                                sortedlist21->n++;
                                break;
                            } else if(80 < cell39->val) {
                                cell_t* tmp39 = cell39->next;
                                cell39->next = (cell_t*)malloc(sizeof(cell_t));
                                cell39->next->next = tmp39;
                                int tmp_val39 = cell39->val;
                                cell39->val = 80;
                                cell39->next->val = tmp_val39;
                                sortedlist21->n++;
                                break;
                            }
                            cell39 = cell39->next;
                        }
                    }
               }
            }
            if(sortedlist22 != NULL && sortedlist22->n > 0){
                 cell_t* cell40 = sortedlist22->root;
                 cell_t* tmp40  = NULL;
                 while(cell40 != NULL) {
                      tmp40 = cell40->next;
                      free(cell40);
                      cell40 = tmp40;
                 }
                 free(sortedlist22);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist7;
         params0.data[1] = sortedlist21;
         sortedlist_t* sortedlist23 = func6(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist23 != NULL && sortedlist23->n > 0){
              cell_t* cell41 = sortedlist23->root;
              cell_t* tmp41  = NULL;
              while(cell41 != NULL) {
                   tmp41 = cell41->next;
                   free(cell41);
                   cell41 = tmp41;
              }
              free(sortedlist23);
         }
      }
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (rand()%loopsFactor)/3 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         if(sortedlist7 != NULL && sortedlist7->n > 0) {
              cell_t* cell42 = sortedlist7->root;
              if(sortedlist7->n == 0) {
                  sortedlist7->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist7->root->val  = 73;
                  sortedlist7->root->next = NULL;
                  sortedlist7->n++;
              } else {
                  while(cell42 != NULL)
                  {
                      if(cell42->next == NULL && cell42->val < 73) {
                          cell42->next = (cell_t*)malloc(sizeof(cell_t));
                          cell42->next->next = NULL;
                          cell42->next->val  = 73;
                          sortedlist7->n++;
                          break;
                      } else if(73 < cell42->val) {
                          cell_t* tmp42 = cell42->next;
                          cell42->next = (cell_t*)malloc(sizeof(cell_t));
                          cell42->next->next = tmp42;
                          int tmp_val42 = cell42->val;
                          cell42->val = 73;
                          cell42->next->val = tmp_val42;
                          sortedlist7->n++;
                          break;
                      }
                      cell42 = cell42->next;
                  }
              }
         }
         if(sortedlist7 != NULL && sortedlist7->n > 0)
         {
             cell_t* cell43 = sortedlist7->root;
             if(cell43->val == 70)
             {
                 cell43 = cell43->next;
                 sortedlist7->n--;
             }else{
                 while(cell43->next != NULL && cell43->next->val != 70) cell43 = cell43->next;
                 if(cell43->next != NULL)
                 {
                     cell43 = cell43->next->next;
                     sortedlist7->n--;
                 }
              }
         }
         if(sortedlist7 != NULL && sortedlist7->n > 0)
         {
             cell_t* cell44 = sortedlist7->root;
             if(cell44->val == 81)
             {
                 cell44 = cell44->next;
                 sortedlist7->n--;
             }else{
                 while(cell44->next != NULL && cell44->next->val != 81) cell44 = cell44->next;
                 if(cell44->next != NULL)
                 {
                     cell44 = cell44->next->next;
                     sortedlist7->n--;
                 }
              }
         }
      }
      if(sortedlist21 != NULL && sortedlist21->n > 0){
           cell_t* cell45 = sortedlist21->root;
           cell_t* tmp45  = NULL;
           while(cell45 != NULL) {
                tmp45 = cell45->next;
                free(cell45);
                cell45 = tmp45;
           }
           free(sortedlist21);
      }
   }
   if(sortedlist7 != NULL && sortedlist7->n > 0)
   {
       cell_t* cell46 = sortedlist7->root;
       if(cell46->val == 25)
       {
           cell46 = cell46->next;
           sortedlist7->n--;
       }else{
           while(cell46->next != NULL && cell46->next->val != 25) cell46 = cell46->next;
           if(cell46->next != NULL)
           {
               cell46 = cell46->next->next;
               sortedlist7->n--;
           }
        }
   }
   if(sortedlist7 != NULL && sortedlist7->n > 0){
        cell_t* cell47 = sortedlist7->root;
        while(cell47 != NULL && cell47->val != 27) cell47 = cell47->next;
        return cell47 != NULL ? sortedlist7 : NULL;
   }
   return sortedlist7;
}

