#include "P3_SL.h" 
sortedlist_t* func2(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist41 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist41->n = 0;
   sortedlist41->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop42 = 0;
      unsigned int loopLimit42 = (rand()%loopsFactor)/3 + 1;
      for(; loop42 < loopLimit42; loop42++) {
         if(sortedlist41 != NULL && sortedlist41->n > 0)
         {
             cell_t* cell77 = sortedlist41->root;
             if(cell77->val == 97)
             {
                 cell77 = cell77->next;
                 sortedlist41->n--;
             }else{
                 while(cell77->next != NULL && cell77->next->val != 97) cell77 = cell77->next;
                 if(cell77->next != NULL)
                 {
                     cell77 = cell77->next->next;
                     sortedlist41->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist41;
      sortedlist_t* sortedlist42 = func9(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop43 = 0;
      unsigned int loopLimit43 = (rand()%loopsFactor)/3 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         if(sortedlist41 != NULL && sortedlist41->n > 0)
         {
             cell_t* cell78 = sortedlist41->root;
             if(cell78->val == 17)
             {
                 cell78 = cell78->next;
                 sortedlist41->n--;
             }else{
                 while(cell78->next != NULL && cell78->next->val != 17) cell78 = cell78->next;
                 if(cell78->next != NULL)
                 {
                     cell78 = cell78->next->next;
                     sortedlist41->n--;
                 }
              }
         }
      }
      unsigned int loop44 = 0;
      unsigned int loopLimit44 = (rand()%loopsFactor)/3 + 1;
      for(; loop44 < loopLimit44; loop44++) {
         if(sortedlist41 != NULL && sortedlist41->n > 0) {
              cell_t* cell79 = sortedlist41->root;
              if(sortedlist41->n == 0) {
                  sortedlist41->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist41->root->val  = 52;
                  sortedlist41->root->next = NULL;
                  sortedlist41->n++;
              } else {
                  while(cell79 != NULL)
                  {
                      if(cell79->next == NULL && cell79->val < 52) {
                          cell79->next = (cell_t*)malloc(sizeof(cell_t));
                          cell79->next->next = NULL;
                          cell79->next->val  = 52;
                          sortedlist41->n++;
                          break;
                      } else if(52 < cell79->val) {
                          cell_t* tmp79 = cell79->next;
                          cell79->next = (cell_t*)malloc(sizeof(cell_t));
                          cell79->next->next = tmp79;
                          int tmp_val79 = cell79->val;
                          cell79->val = 52;
                          cell79->next->val = tmp_val79;
                          sortedlist41->n++;
                          break;
                      }
                      cell79 = cell79->next;
                  }
              }
         }
      }
      sortedlist_t* sortedlist43 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist43->n = 0;
      sortedlist43->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop45 = 0;
         unsigned int loopLimit45 = (rand()%loopsFactor)/3 + 1;
         for(; loop45 < loopLimit45; loop45++) {
            sortedlist_t* sortedlist44 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist44->n = 0;
            sortedlist44->root = NULL;
            if(sortedlist41 != NULL && sortedlist41->n > 0){
                 cell_t* cell80 = sortedlist41->root;
                 while(cell80 != NULL && cell80->val != 1) cell80 = cell80->next;
                 return cell80 != NULL ? sortedlist41 : NULL;
            }
            unsigned int loop46 = 0;
            unsigned int loopLimit46 = (rand()%loopsFactor)/4 + 1;
            for(; loop46 < loopLimit46; loop46++) {
               if(sortedlist41 != NULL && sortedlist41->n > 0) {
                    cell_t* cell81 = sortedlist41->root;
                    if(sortedlist41->n == 0) {
                        sortedlist41->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist41->root->val  = 86;
                        sortedlist41->root->next = NULL;
                        sortedlist41->n++;
                    } else {
                        while(cell81 != NULL)
                        {
                            if(cell81->next == NULL && cell81->val < 86) {
                                cell81->next = (cell_t*)malloc(sizeof(cell_t));
                                cell81->next->next = NULL;
                                cell81->next->val  = 86;
                                sortedlist41->n++;
                                break;
                            } else if(86 < cell81->val) {
                                cell_t* tmp81 = cell81->next;
                                cell81->next = (cell_t*)malloc(sizeof(cell_t));
                                cell81->next->next = tmp81;
                                int tmp_val81 = cell81->val;
                                cell81->val = 86;
                                cell81->next->val = tmp_val81;
                                sortedlist41->n++;
                                break;
                            }
                            cell81 = cell81->next;
                        }
                    }
               }
            }
            if(sortedlist44 != NULL && sortedlist44->n > 0){
                 cell_t* cell82 = sortedlist44->root;
                 cell_t* tmp82  = NULL;
                 while(cell82 != NULL) {
                      tmp82 = cell82->next;
                      free(cell82);
                      cell82 = tmp82;
                 }
                 free(sortedlist44);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist41;
         params1.data[1] = sortedlist42;
         params1.data[2] = sortedlist43;
         sortedlist_t* sortedlist45 = func7(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist45 != NULL && sortedlist45->n > 0){
              cell_t* cell83 = sortedlist45->root;
              cell_t* tmp83  = NULL;
              while(cell83 != NULL) {
                   tmp83 = cell83->next;
                   free(cell83);
                   cell83 = tmp83;
              }
              free(sortedlist45);
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist41;
      params1.data[1] = sortedlist42;
      params1.data[2] = sortedlist43;
      sortedlist_t* sortedlist46 = func5(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist46 != NULL && sortedlist46->n > 0){
           cell_t* cell84 = sortedlist46->root;
           cell_t* tmp84  = NULL;
           while(cell84 != NULL) {
                tmp84 = cell84->next;
                free(cell84);
                cell84 = tmp84;
           }
           free(sortedlist46);
      }
      if(sortedlist43 != NULL && sortedlist43->n > 0){
           cell_t* cell85 = sortedlist43->root;
           cell_t* tmp85  = NULL;
           while(cell85 != NULL) {
                tmp85 = cell85->next;
                free(cell85);
                cell85 = tmp85;
           }
           free(sortedlist43);
      }
      if(sortedlist42 != NULL && sortedlist42->n > 0){
           cell_t* cell86 = sortedlist42->root;
           cell_t* tmp86  = NULL;
           while(cell86 != NULL) {
                tmp86 = cell86->next;
                free(cell86);
                cell86 = tmp86;
           }
           free(sortedlist42);
      }
   }
   else {
      sortedlist_t* sortedlist47 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist47->n = 0;
      sortedlist47->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop47 = 0;
         unsigned int loopLimit47 = (rand()%loopsFactor)/3 + 1;
         for(; loop47 < loopLimit47; loop47++) {
            sortedlist_t* sortedlist48 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist48->n = 0;
            sortedlist48->root = NULL;
            if(sortedlist47 != NULL && sortedlist47->n > 0){
                 cell_t* cell87 = sortedlist47->root;
                 while(cell87 != NULL && cell87->val != 65) cell87 = cell87->next;
                 return cell87 != NULL ? sortedlist47 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist41;
            params0.data[1] = sortedlist47;
            params0.data[2] = sortedlist48;
            sortedlist_t* sortedlist49 = func9(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop48 = 0;
            unsigned int loopLimit48 = (rand()%loopsFactor)/4 + 1;
            for(; loop48 < loopLimit48; loop48++) {
               if(sortedlist47 != NULL && sortedlist47->n > 0)
               {
                   cell_t* cell88 = sortedlist47->root;
                   if(cell88->val == 44)
                   {
                       cell88 = cell88->next;
                       sortedlist47->n--;
                   }else{
                       while(cell88->next != NULL && cell88->next->val != 44) cell88 = cell88->next;
                       if(cell88->next != NULL)
                       {
                           cell88 = cell88->next->next;
                           sortedlist47->n--;
                       }
                    }
               }
            }
            unsigned int loop49 = 0;
            unsigned int loopLimit49 = (rand()%loopsFactor)/4 + 1;
            for(; loop49 < loopLimit49; loop49++) {
               if(sortedlist49 != NULL && sortedlist49->n > 0) {
                    cell_t* cell89 = sortedlist49->root;
                    if(sortedlist49->n == 0) {
                        sortedlist49->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist49->root->val  = 40;
                        sortedlist49->root->next = NULL;
                        sortedlist49->n++;
                    } else {
                        while(cell89 != NULL)
                        {
                            if(cell89->next == NULL && cell89->val < 40) {
                                cell89->next = (cell_t*)malloc(sizeof(cell_t));
                                cell89->next->next = NULL;
                                cell89->next->val  = 40;
                                sortedlist49->n++;
                                break;
                            } else if(40 < cell89->val) {
                                cell_t* tmp89 = cell89->next;
                                cell89->next = (cell_t*)malloc(sizeof(cell_t));
                                cell89->next->next = tmp89;
                                int tmp_val89 = cell89->val;
                                cell89->val = 40;
                                cell89->next->val = tmp_val89;
                                sortedlist49->n++;
                                break;
                            }
                            cell89 = cell89->next;
                        }
                    }
               }
            }
            if(sortedlist49 != NULL && sortedlist49->n > 0){
                 cell_t* cell90 = sortedlist49->root;
                 cell_t* tmp90  = NULL;
                 while(cell90 != NULL) {
                      tmp90 = cell90->next;
                      free(cell90);
                      cell90 = tmp90;
                 }
                 free(sortedlist49);
            }
            if(sortedlist48 != NULL && sortedlist48->n > 0){
                 cell_t* cell91 = sortedlist48->root;
                 cell_t* tmp91  = NULL;
                 while(cell91 != NULL) {
                      tmp91 = cell91->next;
                      free(cell91);
                      cell91 = tmp91;
                 }
                 free(sortedlist48);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist41;
         params0.data[1] = sortedlist47;
         sortedlist_t* sortedlist50 = func6(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist50 != NULL && sortedlist50->n > 0){
              cell_t* cell92 = sortedlist50->root;
              cell_t* tmp92  = NULL;
              while(cell92 != NULL) {
                   tmp92 = cell92->next;
                   free(cell92);
                   cell92 = tmp92;
              }
              free(sortedlist50);
         }
      }
      if(sortedlist47 != NULL && sortedlist47->n > 0){
           cell_t* cell93 = sortedlist47->root;
           cell_t* tmp93  = NULL;
           while(cell93 != NULL) {
                tmp93 = cell93->next;
                free(cell93);
                cell93 = tmp93;
           }
           free(sortedlist47);
      }
   }
   unsigned int loop50 = 0;
   unsigned int loopLimit50 = (rand()%loopsFactor)/3 + 1;
   for(; loop50 < loopLimit50; loop50++) {
      if(sortedlist41 != NULL && sortedlist41->n > 0) {
           cell_t* cell94 = sortedlist41->root;
           if(sortedlist41->n == 0) {
               sortedlist41->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist41->root->val  = 31;
               sortedlist41->root->next = NULL;
               sortedlist41->n++;
           } else {
               while(cell94 != NULL)
               {
                   if(cell94->next == NULL && cell94->val < 31) {
                       cell94->next = (cell_t*)malloc(sizeof(cell_t));
                       cell94->next->next = NULL;
                       cell94->next->val  = 31;
                       sortedlist41->n++;
                       break;
                   } else if(31 < cell94->val) {
                       cell_t* tmp94 = cell94->next;
                       cell94->next = (cell_t*)malloc(sizeof(cell_t));
                       cell94->next->next = tmp94;
                       int tmp_val94 = cell94->val;
                       cell94->val = 31;
                       cell94->next->val = tmp_val94;
                       sortedlist41->n++;
                       break;
                   }
                   cell94 = cell94->next;
               }
           }
      }
      sortedlist_t* sortedlist51 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist51->n = 0;
      sortedlist51->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop51 = 0;
         unsigned int loopLimit51 = (rand()%loopsFactor)/4 + 1;
         for(; loop51 < loopLimit51; loop51++) {
            sortedlist_t* sortedlist52 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist52->n = 0;
            sortedlist52->root = NULL;
            if(sortedlist51 != NULL && sortedlist51->n > 0){
                 cell_t* cell95 = sortedlist51->root;
                 while(cell95 != NULL && cell95->val != 97) cell95 = cell95->next;
                 return cell95 != NULL ? sortedlist51 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist41;
            params0.data[1] = sortedlist51;
            params0.data[2] = sortedlist52;
            sortedlist_t* sortedlist53 = func9(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop52 = 0;
            unsigned int loopLimit52 = (rand()%loopsFactor)/5 + 1;
            for(; loop52 < loopLimit52; loop52++) {
               if(sortedlist53 != NULL && sortedlist53->n > 0)
               {
                   cell_t* cell96 = sortedlist53->root;
                   if(cell96->val == 81)
                   {
                       cell96 = cell96->next;
                       sortedlist53->n--;
                   }else{
                       while(cell96->next != NULL && cell96->next->val != 81) cell96 = cell96->next;
                       if(cell96->next != NULL)
                       {
                           cell96 = cell96->next->next;
                           sortedlist53->n--;
                       }
                    }
               }
            }
            unsigned int loop53 = 0;
            unsigned int loopLimit53 = (rand()%loopsFactor)/5 + 1;
            for(; loop53 < loopLimit53; loop53++) {
               if(sortedlist53 != NULL && sortedlist53->n > 0) {
                    cell_t* cell97 = sortedlist53->root;
                    if(sortedlist53->n == 0) {
                        sortedlist53->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist53->root->val  = 9;
                        sortedlist53->root->next = NULL;
                        sortedlist53->n++;
                    } else {
                        while(cell97 != NULL)
                        {
                            if(cell97->next == NULL && cell97->val < 9) {
                                cell97->next = (cell_t*)malloc(sizeof(cell_t));
                                cell97->next->next = NULL;
                                cell97->next->val  = 9;
                                sortedlist53->n++;
                                break;
                            } else if(9 < cell97->val) {
                                cell_t* tmp97 = cell97->next;
                                cell97->next = (cell_t*)malloc(sizeof(cell_t));
                                cell97->next->next = tmp97;
                                int tmp_val97 = cell97->val;
                                cell97->val = 9;
                                cell97->next->val = tmp_val97;
                                sortedlist53->n++;
                                break;
                            }
                            cell97 = cell97->next;
                        }
                    }
               }
            }
            if(sortedlist53 != NULL && sortedlist53->n > 0){
                 cell_t* cell98 = sortedlist53->root;
                 cell_t* tmp98  = NULL;
                 while(cell98 != NULL) {
                      tmp98 = cell98->next;
                      free(cell98);
                      cell98 = tmp98;
                 }
                 free(sortedlist53);
            }
            if(sortedlist52 != NULL && sortedlist52->n > 0){
                 cell_t* cell99 = sortedlist52->root;
                 cell_t* tmp99  = NULL;
                 while(cell99 != NULL) {
                      tmp99 = cell99->next;
                      free(cell99);
                      cell99 = tmp99;
                 }
                 free(sortedlist52);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist41;
         params0.data[1] = sortedlist51;
         sortedlist_t* sortedlist54 = func6(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist54 != NULL && sortedlist54->n > 0){
              cell_t* cell100 = sortedlist54->root;
              cell_t* tmp100  = NULL;
              while(cell100 != NULL) {
                   tmp100 = cell100->next;
                   free(cell100);
                   cell100 = tmp100;
              }
              free(sortedlist54);
         }
      }
      if(sortedlist51 != NULL && sortedlist51->n > 0){
           cell_t* cell101 = sortedlist51->root;
           cell_t* tmp101  = NULL;
           while(cell101 != NULL) {
                tmp101 = cell101->next;
                free(cell101);
                cell101 = tmp101;
           }
           free(sortedlist51);
      }
   }
   return sortedlist41;
}

