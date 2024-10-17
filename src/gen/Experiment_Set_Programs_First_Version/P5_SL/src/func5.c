#include "P5_SL.h" 
sortedlist_t* func5(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist8 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist8->n = 0;
   sortedlist8->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/3 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0)
         {
             cell_t* cell10 = sortedlist8->root;
             if(cell10->val == 72)
             {
                 cell10 = cell10->next;
                 sortedlist8->n--;
             }else{
                 while(cell10->next != NULL && cell10->next->val != 72) cell10 = cell10->next;
                 if(cell10->next != NULL)
                 {
                     cell10 = cell10->next->next;
                     sortedlist8->n--;
                 }
              }
         }
      }
      unsigned int loop6 = 0;
      unsigned int loopLimit6 = (rand()%loopsFactor)/3 + 1;
      for(; loop6 < loopLimit6; loop6++) {
         sortedlist_t* sortedlist9 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist9->n = 0;
         sortedlist9->root = NULL;
         sortedlist_t* sortedlist10 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist10->n = 0;
         sortedlist10->root = NULL;
         if(sortedlist9 != NULL && sortedlist9->n > 0){
              cell_t* cell11 = sortedlist9->root;
              while(cell11 != NULL && cell11->val != 11) cell11 = cell11->next;
              return cell11 != NULL ? sortedlist9 : NULL;
         }
         unsigned int loop7 = 0;
         unsigned int loopLimit7 = (rand()%loopsFactor)/4 + 1;
         for(; loop7 < loopLimit7; loop7++) {
            if(sortedlist10 != NULL && sortedlist10->n > 0){
                 cell_t* cell12 = sortedlist10->root;
                 while(cell12 != NULL && cell12->val != 67) cell12 = cell12->next;
                 return cell12 != NULL ? sortedlist10 : NULL;
            }
         }
         if(sortedlist10 != NULL && sortedlist10->n > 0){
              cell_t* cell13 = sortedlist10->root;
              cell_t* tmp13  = NULL;
              while(cell13 != NULL) {
                   tmp13 = cell13->next;
                   free(cell13);
                   cell13 = tmp13;
              }
              free(sortedlist10);
         }
         if(sortedlist9 != NULL && sortedlist9->n > 0){
              cell_t* cell14 = sortedlist9->root;
              cell_t* tmp14  = NULL;
              while(cell14 != NULL) {
                   tmp14 = cell14->next;
                   free(cell14);
                   cell14 = tmp14;
              }
              free(sortedlist9);
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist8;
      sortedlist_t* sortedlist11 = func9(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist11 != NULL && sortedlist11->n > 0){
           cell_t* cell16 = sortedlist11->root;
           cell_t* tmp16  = NULL;
           while(cell16 != NULL) {
                tmp16 = cell16->next;
                free(cell16);
                cell16 = tmp16;
           }
           free(sortedlist11);
      }
   }
   else {
      unsigned int loop9 = 0;
      unsigned int loopLimit9 = (rand()%loopsFactor)/3 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0)
         {
             cell_t* cell17 = sortedlist8->root;
             if(cell17->val == 23)
             {
                 cell17 = cell17->next;
                 sortedlist8->n--;
             }else{
                 while(cell17->next != NULL && cell17->next->val != 23) cell17 = cell17->next;
                 if(cell17->next != NULL)
                 {
                     cell17 = cell17->next->next;
                     sortedlist8->n--;
                 }
              }
         }
      }
      unsigned int loop10 = 0;
      unsigned int loopLimit10 = (rand()%loopsFactor)/3 + 1;
      for(; loop10 < loopLimit10; loop10++) {
         sortedlist_t* sortedlist13 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist13->n = 0;
         sortedlist13->root = NULL;
         sortedlist_t* sortedlist14 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist14->n = 0;
         sortedlist14->root = NULL;
         if(sortedlist13 != NULL && sortedlist13->n > 0){
              cell_t* cell18 = sortedlist13->root;
              while(cell18 != NULL && cell18->val != 35) cell18 = cell18->next;
              return cell18 != NULL ? sortedlist13 : NULL;
         }
         unsigned int loop11 = 0;
         unsigned int loopLimit11 = (rand()%loopsFactor)/4 + 1;
         for(; loop11 < loopLimit11; loop11++) {
            if(sortedlist14 != NULL && sortedlist14->n > 0){
                 cell_t* cell19 = sortedlist14->root;
                 while(cell19 != NULL && cell19->val != 2) cell19 = cell19->next;
                 return cell19 != NULL ? sortedlist14 : NULL;
            }
         }
         if(sortedlist14 != NULL && sortedlist14->n > 0){
              cell_t* cell20 = sortedlist14->root;
              cell_t* tmp20  = NULL;
              while(cell20 != NULL) {
                   tmp20 = cell20->next;
                   free(cell20);
                   cell20 = tmp20;
              }
              free(sortedlist14);
         }
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
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist8;
      sortedlist_t* sortedlist15 = func9(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist15 != NULL && sortedlist15->n > 0){
           cell_t* cell22 = sortedlist15->root;
           cell_t* tmp22  = NULL;
           while(cell22 != NULL) {
                tmp22 = cell22->next;
                free(cell22);
                cell22 = tmp22;
           }
           free(sortedlist15);
      }
   }
   unsigned int loop12 = 0;
   unsigned int loopLimit12 = (rand()%loopsFactor)/3 + 1;
   for(; loop12 < loopLimit12; loop12++) {
      if(sortedlist8 != NULL && sortedlist8->n > 0) {
           cell_t* cell23 = sortedlist8->root;
           if(sortedlist8->n == 0) {
               sortedlist8->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist8->root->val  = 58;
               sortedlist8->root->next = NULL;
               sortedlist8->n++;
           } else {
               while(cell23 != NULL)
               {
                   if(cell23->next == NULL && cell23->val < 58) {
                       cell23->next = (cell_t*)malloc(sizeof(cell_t));
                       cell23->next->next = NULL;
                       cell23->next->val  = 58;
                       sortedlist8->n++;
                       break;
                   } else if(58 < cell23->val) {
                       cell_t* tmp23 = cell23->next;
                       cell23->next = (cell_t*)malloc(sizeof(cell_t));
                       cell23->next->next = tmp23;
                       int tmp_val23 = cell23->val;
                       cell23->val = 58;
                       cell23->next->val = tmp_val23;
                       sortedlist8->n++;
                       break;
                   }
                   cell23 = cell23->next;
               }
           }
      }
      unsigned int loop13 = 0;
      unsigned int loopLimit13 = (rand()%loopsFactor)/4 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0)
         {
             cell_t* cell24 = sortedlist8->root;
             if(cell24->val == 67)
             {
                 cell24 = cell24->next;
                 sortedlist8->n--;
             }else{
                 while(cell24->next != NULL && cell24->next->val != 67) cell24 = cell24->next;
                 if(cell24->next != NULL)
                 {
                     cell24 = cell24->next->next;
                     sortedlist8->n--;
                 }
              }
         }
      }
      unsigned int loop14 = 0;
      unsigned int loopLimit14 = (rand()%loopsFactor)/4 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         sortedlist_t* sortedlist16 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist16->n = 0;
         sortedlist16->root = NULL;
         sortedlist_t* sortedlist17 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist17->n = 0;
         sortedlist17->root = NULL;
         if(sortedlist16 != NULL && sortedlist16->n > 0){
              cell_t* cell25 = sortedlist16->root;
              while(cell25 != NULL && cell25->val != 56) cell25 = cell25->next;
              return cell25 != NULL ? sortedlist16 : NULL;
         }
         unsigned int loop15 = 0;
         unsigned int loopLimit15 = (rand()%loopsFactor)/5 + 1;
         for(; loop15 < loopLimit15; loop15++) {
            if(sortedlist16 != NULL && sortedlist16->n > 0){
                 cell_t* cell26 = sortedlist16->root;
                 while(cell26 != NULL && cell26->val != 42) cell26 = cell26->next;
                 return cell26 != NULL ? sortedlist16 : NULL;
            }
         }
         if(sortedlist17 != NULL && sortedlist17->n > 0){
              cell_t* cell27 = sortedlist17->root;
              cell_t* tmp27  = NULL;
              while(cell27 != NULL) {
                   tmp27 = cell27->next;
                   free(cell27);
                   cell27 = tmp27;
              }
              free(sortedlist17);
         }
         if(sortedlist16 != NULL && sortedlist16->n > 0){
              cell_t* cell28 = sortedlist16->root;
              cell_t* tmp28  = NULL;
              while(cell28 != NULL) {
                   tmp28 = cell28->next;
                   free(cell28);
                   cell28 = tmp28;
              }
              free(sortedlist16);
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist8;
      sortedlist_t* sortedlist18 = func9(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist18 != NULL && sortedlist18->n > 0){
           cell_t* cell29 = sortedlist18->root;
           cell_t* tmp29  = NULL;
           while(cell29 != NULL) {
                tmp29 = cell29->next;
                free(cell29);
                cell29 = tmp29;
           }
           free(sortedlist18);
      }
   }
   if(sortedlist8 != NULL && sortedlist8->n > 0){
        cell_t* cell30 = sortedlist8->root;
        while(cell30 != NULL && cell30->val != 73) cell30 = cell30->next;
        return cell30 != NULL ? sortedlist8 : NULL;
   }
   if(PATH0 & 2) {
      sortedlist_t* sortedlist19 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist19->n = 0;
      sortedlist19->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop16 = 0;
         unsigned int loopLimit16 = (rand()%loopsFactor)/3 + 1;
         for(; loop16 < loopLimit16; loop16++) {
            sortedlist_t* sortedlist20 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist20->n = 0;
            sortedlist20->root = NULL;
            if(sortedlist8 != NULL && sortedlist8->n > 0){
                 cell_t* cell31 = sortedlist8->root;
                 while(cell31 != NULL && cell31->val != 19) cell31 = cell31->next;
                 return cell31 != NULL ? sortedlist8 : NULL;
            }
            unsigned int loop17 = 0;
            unsigned int loopLimit17 = (rand()%loopsFactor)/4 + 1;
            for(; loop17 < loopLimit17; loop17++) {
               if(sortedlist20 != NULL && sortedlist20->n > 0) {
                    cell_t* cell32 = sortedlist20->root;
                    if(sortedlist20->n == 0) {
                        sortedlist20->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist20->root->val  = 37;
                        sortedlist20->root->next = NULL;
                        sortedlist20->n++;
                    } else {
                        while(cell32 != NULL)
                        {
                            if(cell32->next == NULL && cell32->val < 37) {
                                cell32->next = (cell_t*)malloc(sizeof(cell_t));
                                cell32->next->next = NULL;
                                cell32->next->val  = 37;
                                sortedlist20->n++;
                                break;
                            } else if(37 < cell32->val) {
                                cell_t* tmp32 = cell32->next;
                                cell32->next = (cell_t*)malloc(sizeof(cell_t));
                                cell32->next->next = tmp32;
                                int tmp_val32 = cell32->val;
                                cell32->val = 37;
                                cell32->next->val = tmp_val32;
                                sortedlist20->n++;
                                break;
                            }
                            cell32 = cell32->next;
                        }
                    }
               }
            }
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
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist8;
         params0.data[1] = sortedlist19;
         sortedlist_t* sortedlist21 = func8(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist21 != NULL && sortedlist21->n > 0){
              cell_t* cell34 = sortedlist21->root;
              cell_t* tmp34  = NULL;
              while(cell34 != NULL) {
                   tmp34 = cell34->next;
                   free(cell34);
                   cell34 = tmp34;
              }
              free(sortedlist21);
         }
      }
      unsigned int loop18 = 0;
      unsigned int loopLimit18 = (rand()%loopsFactor)/3 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0) {
              cell_t* cell35 = sortedlist8->root;
              if(sortedlist8->n == 0) {
                  sortedlist8->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist8->root->val  = 24;
                  sortedlist8->root->next = NULL;
                  sortedlist8->n++;
              } else {
                  while(cell35 != NULL)
                  {
                      if(cell35->next == NULL && cell35->val < 24) {
                          cell35->next = (cell_t*)malloc(sizeof(cell_t));
                          cell35->next->next = NULL;
                          cell35->next->val  = 24;
                          sortedlist8->n++;
                          break;
                      } else if(24 < cell35->val) {
                          cell_t* tmp35 = cell35->next;
                          cell35->next = (cell_t*)malloc(sizeof(cell_t));
                          cell35->next->next = tmp35;
                          int tmp_val35 = cell35->val;
                          cell35->val = 24;
                          cell35->next->val = tmp_val35;
                          sortedlist8->n++;
                          break;
                      }
                      cell35 = cell35->next;
                  }
              }
         }
         if(sortedlist19 != NULL && sortedlist19->n > 0)
         {
             cell_t* cell36 = sortedlist19->root;
             if(cell36->val == 70)
             {
                 cell36 = cell36->next;
                 sortedlist19->n--;
             }else{
                 while(cell36->next != NULL && cell36->next->val != 70) cell36 = cell36->next;
                 if(cell36->next != NULL)
                 {
                     cell36 = cell36->next->next;
                     sortedlist19->n--;
                 }
              }
         }
         if(sortedlist19 != NULL && sortedlist19->n > 0)
         {
             cell_t* cell37 = sortedlist19->root;
             if(cell37->val == 26)
             {
                 cell37 = cell37->next;
                 sortedlist19->n--;
             }else{
                 while(cell37->next != NULL && cell37->next->val != 26) cell37 = cell37->next;
                 if(cell37->next != NULL)
                 {
                     cell37 = cell37->next->next;
                     sortedlist19->n--;
                 }
              }
         }
      }
      if(sortedlist19 != NULL && sortedlist19->n > 0){
           cell_t* cell38 = sortedlist19->root;
           cell_t* tmp38  = NULL;
           while(cell38 != NULL) {
                tmp38 = cell38->next;
                free(cell38);
                cell38 = tmp38;
           }
           free(sortedlist19);
      }
   }
   else {
      sortedlist_t* sortedlist22 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist22->n = 0;
      sortedlist22->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop19 = 0;
         unsigned int loopLimit19 = (rand()%loopsFactor)/3 + 1;
         for(; loop19 < loopLimit19; loop19++) {
            sortedlist_t* sortedlist23 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist23->n = 0;
            sortedlist23->root = NULL;
            if(sortedlist22 != NULL && sortedlist22->n > 0){
                 cell_t* cell39 = sortedlist22->root;
                 while(cell39 != NULL && cell39->val != 80) cell39 = cell39->next;
                 return cell39 != NULL ? sortedlist22 : NULL;
            }
            unsigned int loop20 = 0;
            unsigned int loopLimit20 = (rand()%loopsFactor)/4 + 1;
            for(; loop20 < loopLimit20; loop20++) {
               if(sortedlist23 != NULL && sortedlist23->n > 0) {
                    cell_t* cell40 = sortedlist23->root;
                    if(sortedlist23->n == 0) {
                        sortedlist23->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist23->root->val  = 73;
                        sortedlist23->root->next = NULL;
                        sortedlist23->n++;
                    } else {
                        while(cell40 != NULL)
                        {
                            if(cell40->next == NULL && cell40->val < 73) {
                                cell40->next = (cell_t*)malloc(sizeof(cell_t));
                                cell40->next->next = NULL;
                                cell40->next->val  = 73;
                                sortedlist23->n++;
                                break;
                            } else if(73 < cell40->val) {
                                cell_t* tmp40 = cell40->next;
                                cell40->next = (cell_t*)malloc(sizeof(cell_t));
                                cell40->next->next = tmp40;
                                int tmp_val40 = cell40->val;
                                cell40->val = 73;
                                cell40->next->val = tmp_val40;
                                sortedlist23->n++;
                                break;
                            }
                            cell40 = cell40->next;
                        }
                    }
               }
            }
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
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist8;
         params0.data[1] = sortedlist22;
         sortedlist_t* sortedlist24 = func8(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist24 != NULL && sortedlist24->n > 0){
              cell_t* cell42 = sortedlist24->root;
              cell_t* tmp42  = NULL;
              while(cell42 != NULL) {
                   tmp42 = cell42->next;
                   free(cell42);
                   cell42 = tmp42;
              }
              free(sortedlist24);
         }
      }
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (rand()%loopsFactor)/3 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         if(sortedlist8 != NULL && sortedlist8->n > 0) {
              cell_t* cell43 = sortedlist8->root;
              if(sortedlist8->n == 0) {
                  sortedlist8->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist8->root->val  = 70;
                  sortedlist8->root->next = NULL;
                  sortedlist8->n++;
              } else {
                  while(cell43 != NULL)
                  {
                      if(cell43->next == NULL && cell43->val < 70) {
                          cell43->next = (cell_t*)malloc(sizeof(cell_t));
                          cell43->next->next = NULL;
                          cell43->next->val  = 70;
                          sortedlist8->n++;
                          break;
                      } else if(70 < cell43->val) {
                          cell_t* tmp43 = cell43->next;
                          cell43->next = (cell_t*)malloc(sizeof(cell_t));
                          cell43->next->next = tmp43;
                          int tmp_val43 = cell43->val;
                          cell43->val = 70;
                          cell43->next->val = tmp_val43;
                          sortedlist8->n++;
                          break;
                      }
                      cell43 = cell43->next;
                  }
              }
         }
         if(sortedlist8 != NULL && sortedlist8->n > 0)
         {
             cell_t* cell44 = sortedlist8->root;
             if(cell44->val == 81)
             {
                 cell44 = cell44->next;
                 sortedlist8->n--;
             }else{
                 while(cell44->next != NULL && cell44->next->val != 81) cell44 = cell44->next;
                 if(cell44->next != NULL)
                 {
                     cell44 = cell44->next->next;
                     sortedlist8->n--;
                 }
              }
         }
         if(sortedlist22 != NULL && sortedlist22->n > 0)
         {
             cell_t* cell45 = sortedlist22->root;
             if(cell45->val == 25)
             {
                 cell45 = cell45->next;
                 sortedlist22->n--;
             }else{
                 while(cell45->next != NULL && cell45->next->val != 25) cell45 = cell45->next;
                 if(cell45->next != NULL)
                 {
                     cell45 = cell45->next->next;
                     sortedlist22->n--;
                 }
              }
         }
      }
      if(sortedlist22 != NULL && sortedlist22->n > 0){
           cell_t* cell46 = sortedlist22->root;
           cell_t* tmp46  = NULL;
           while(cell46 != NULL) {
                tmp46 = cell46->next;
                free(cell46);
                cell46 = tmp46;
           }
           free(sortedlist22);
      }
   }
   if(sortedlist8 != NULL && sortedlist8->n > 0)
   {
       cell_t* cell47 = sortedlist8->root;
       if(cell47->val == 27)
       {
           cell47 = cell47->next;
           sortedlist8->n--;
       }else{
           while(cell47->next != NULL && cell47->next->val != 27) cell47 = cell47->next;
           if(cell47->next != NULL)
           {
               cell47 = cell47->next->next;
               sortedlist8->n--;
           }
        }
   }
   if(sortedlist8 != NULL && sortedlist8->n > 0){
        cell_t* cell48 = sortedlist8->root;
        while(cell48 != NULL && cell48->val != 5) cell48 = cell48->next;
        return cell48 != NULL ? sortedlist8 : NULL;
   }
   return sortedlist8;
}

