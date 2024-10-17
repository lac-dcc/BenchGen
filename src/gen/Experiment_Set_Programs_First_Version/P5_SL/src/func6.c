#include "P5_SL.h" 
sortedlist_t* func6(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist35 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist35->n = 0;
   sortedlist35->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop32 = 0;
      unsigned int loopLimit32 = (rand()%loopsFactor)/2 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         if(sortedlist35 != NULL && sortedlist35->n > 0)
         {
             cell_t* cell71 = sortedlist35->root;
             if(cell71->val == 39)
             {
                 cell71 = cell71->next;
                 sortedlist35->n--;
             }else{
                 while(cell71->next != NULL && cell71->next->val != 39) cell71 = cell71->next;
                 if(cell71->next != NULL)
                 {
                     cell71 = cell71->next->next;
                     sortedlist35->n--;
                 }
              }
         }
      }
      unsigned int loop33 = 0;
      unsigned int loopLimit33 = (rand()%loopsFactor)/2 + 1;
      for(; loop33 < loopLimit33; loop33++) {
         sortedlist_t* sortedlist36 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist36->n = 0;
         sortedlist36->root = NULL;
         sortedlist_t* sortedlist37 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist37->n = 0;
         sortedlist37->root = NULL;
         if(sortedlist35 != NULL && sortedlist35->n > 0){
              cell_t* cell72 = sortedlist35->root;
              while(cell72 != NULL && cell72->val != 70) cell72 = cell72->next;
              return cell72 != NULL ? sortedlist35 : NULL;
         }
         unsigned int loop34 = 0;
         unsigned int loopLimit34 = (rand()%loopsFactor)/3 + 1;
         for(; loop34 < loopLimit34; loop34++) {
            if(sortedlist37 != NULL && sortedlist37->n > 0){
                 cell_t* cell73 = sortedlist37->root;
                 while(cell73 != NULL && cell73->val != 78) cell73 = cell73->next;
                 return cell73 != NULL ? sortedlist37 : NULL;
            }
         }
         if(sortedlist37 != NULL && sortedlist37->n > 0){
              cell_t* cell74 = sortedlist37->root;
              cell_t* tmp74  = NULL;
              while(cell74 != NULL) {
                   tmp74 = cell74->next;
                   free(cell74);
                   cell74 = tmp74;
              }
              free(sortedlist37);
         }
         if(sortedlist36 != NULL && sortedlist36->n > 0){
              cell_t* cell75 = sortedlist36->root;
              cell_t* tmp75  = NULL;
              while(cell75 != NULL) {
                   tmp75 = cell75->next;
                   free(cell75);
                   cell75 = tmp75;
              }
              free(sortedlist36);
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist35;
      sortedlist_t* sortedlist38 = func9(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist38 != NULL && sortedlist38->n > 0){
           cell_t* cell76 = sortedlist38->root;
           cell_t* tmp76  = NULL;
           while(cell76 != NULL) {
                tmp76 = cell76->next;
                free(cell76);
                cell76 = tmp76;
           }
           free(sortedlist38);
      }
   }
   else {
      sortedlist_t* sortedlist39 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist39->n = 0;
      sortedlist39->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop35 = 0;
         unsigned int loopLimit35 = (rand()%loopsFactor)/2 + 1;
         for(; loop35 < loopLimit35; loop35++) {
            sortedlist_t* sortedlist40 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist40->n = 0;
            sortedlist40->root = NULL;
            if(sortedlist40 != NULL && sortedlist40->n > 0){
                 cell_t* cell77 = sortedlist40->root;
                 while(cell77 != NULL && cell77->val != 1) cell77 = cell77->next;
                 return cell77 != NULL ? sortedlist40 : NULL;
            }
            unsigned int loop36 = 0;
            unsigned int loopLimit36 = (rand()%loopsFactor)/3 + 1;
            for(; loop36 < loopLimit36; loop36++) {
               if(sortedlist40 != NULL && sortedlist40->n > 0) {
                    cell_t* cell78 = sortedlist40->root;
                    if(sortedlist40->n == 0) {
                        sortedlist40->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist40->root->val  = 2;
                        sortedlist40->root->next = NULL;
                        sortedlist40->n++;
                    } else {
                        while(cell78 != NULL)
                        {
                            if(cell78->next == NULL && cell78->val < 2) {
                                cell78->next = (cell_t*)malloc(sizeof(cell_t));
                                cell78->next->next = NULL;
                                cell78->next->val  = 2;
                                sortedlist40->n++;
                                break;
                            } else if(2 < cell78->val) {
                                cell_t* tmp78 = cell78->next;
                                cell78->next = (cell_t*)malloc(sizeof(cell_t));
                                cell78->next->next = tmp78;
                                int tmp_val78 = cell78->val;
                                cell78->val = 2;
                                cell78->next->val = tmp_val78;
                                sortedlist40->n++;
                                break;
                            }
                            cell78 = cell78->next;
                        }
                    }
               }
            }
            if(sortedlist40 != NULL && sortedlist40->n > 0){
                 cell_t* cell79 = sortedlist40->root;
                 cell_t* tmp79  = NULL;
                 while(cell79 != NULL) {
                      tmp79 = cell79->next;
                      free(cell79);
                      cell79 = tmp79;
                 }
                 free(sortedlist40);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist35;
         params0.data[1] = sortedlist39;
         sortedlist_t* sortedlist41 = func8(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist41 != NULL && sortedlist41->n > 0){
              cell_t* cell80 = sortedlist41->root;
              cell_t* tmp80  = NULL;
              while(cell80 != NULL) {
                   tmp80 = cell80->next;
                   free(cell80);
                   cell80 = tmp80;
              }
              free(sortedlist41);
         }
      }
      unsigned int loop37 = 0;
      unsigned int loopLimit37 = (rand()%loopsFactor)/2 + 1;
      for(; loop37 < loopLimit37; loop37++) {
         if(sortedlist39 != NULL && sortedlist39->n > 0) {
              cell_t* cell81 = sortedlist39->root;
              if(sortedlist39->n == 0) {
                  sortedlist39->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist39->root->val  = 92;
                  sortedlist39->root->next = NULL;
                  sortedlist39->n++;
              } else {
                  while(cell81 != NULL)
                  {
                      if(cell81->next == NULL && cell81->val < 92) {
                          cell81->next = (cell_t*)malloc(sizeof(cell_t));
                          cell81->next->next = NULL;
                          cell81->next->val  = 92;
                          sortedlist39->n++;
                          break;
                      } else if(92 < cell81->val) {
                          cell_t* tmp81 = cell81->next;
                          cell81->next = (cell_t*)malloc(sizeof(cell_t));
                          cell81->next->next = tmp81;
                          int tmp_val81 = cell81->val;
                          cell81->val = 92;
                          cell81->next->val = tmp_val81;
                          sortedlist39->n++;
                          break;
                      }
                      cell81 = cell81->next;
                  }
              }
         }
         if(sortedlist35 != NULL && sortedlist35->n > 0)
         {
             cell_t* cell82 = sortedlist35->root;
             if(cell82->val == 56)
             {
                 cell82 = cell82->next;
                 sortedlist35->n--;
             }else{
                 while(cell82->next != NULL && cell82->next->val != 56) cell82 = cell82->next;
                 if(cell82->next != NULL)
                 {
                     cell82 = cell82->next->next;
                     sortedlist35->n--;
                 }
              }
         }
         if(sortedlist39 != NULL && sortedlist39->n > 0)
         {
             cell_t* cell83 = sortedlist39->root;
             if(cell83->val == 80)
             {
                 cell83 = cell83->next;
                 sortedlist39->n--;
             }else{
                 while(cell83->next != NULL && cell83->next->val != 80) cell83 = cell83->next;
                 if(cell83->next != NULL)
                 {
                     cell83 = cell83->next->next;
                     sortedlist39->n--;
                 }
              }
         }
      }
      if(sortedlist39 != NULL && sortedlist39->n > 0){
           cell_t* cell84 = sortedlist39->root;
           cell_t* tmp84  = NULL;
           while(cell84 != NULL) {
                tmp84 = cell84->next;
                free(cell84);
                cell84 = tmp84;
           }
           free(sortedlist39);
      }
   }
   unsigned int loop38 = 0;
   unsigned int loopLimit38 = (rand()%loopsFactor)/2 + 1;
   for(; loop38 < loopLimit38; loop38++) {
      if(sortedlist35 != NULL && sortedlist35->n > 0) {
           cell_t* cell85 = sortedlist35->root;
           if(sortedlist35->n == 0) {
               sortedlist35->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist35->root->val  = 41;
               sortedlist35->root->next = NULL;
               sortedlist35->n++;
           } else {
               while(cell85 != NULL)
               {
                   if(cell85->next == NULL && cell85->val < 41) {
                       cell85->next = (cell_t*)malloc(sizeof(cell_t));
                       cell85->next->next = NULL;
                       cell85->next->val  = 41;
                       sortedlist35->n++;
                       break;
                   } else if(41 < cell85->val) {
                       cell_t* tmp85 = cell85->next;
                       cell85->next = (cell_t*)malloc(sizeof(cell_t));
                       cell85->next->next = tmp85;
                       int tmp_val85 = cell85->val;
                       cell85->val = 41;
                       cell85->next->val = tmp_val85;
                       sortedlist35->n++;
                       break;
                   }
                   cell85 = cell85->next;
               }
           }
      }
      sortedlist_t* sortedlist42 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist42->n = 0;
      sortedlist42->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop39 = 0;
         unsigned int loopLimit39 = (rand()%loopsFactor)/3 + 1;
         for(; loop39 < loopLimit39; loop39++) {
            sortedlist_t* sortedlist43 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist43->n = 0;
            sortedlist43->root = NULL;
            if(sortedlist35 != NULL && sortedlist35->n > 0){
                 cell_t* cell86 = sortedlist35->root;
                 while(cell86 != NULL && cell86->val != 89) cell86 = cell86->next;
                 return cell86 != NULL ? sortedlist35 : NULL;
            }
            unsigned int loop40 = 0;
            unsigned int loopLimit40 = (rand()%loopsFactor)/4 + 1;
            for(; loop40 < loopLimit40; loop40++) {
               if(sortedlist42 != NULL && sortedlist42->n > 0) {
                    cell_t* cell87 = sortedlist42->root;
                    if(sortedlist42->n == 0) {
                        sortedlist42->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist42->root->val  = 19;
                        sortedlist42->root->next = NULL;
                        sortedlist42->n++;
                    } else {
                        while(cell87 != NULL)
                        {
                            if(cell87->next == NULL && cell87->val < 19) {
                                cell87->next = (cell_t*)malloc(sizeof(cell_t));
                                cell87->next->next = NULL;
                                cell87->next->val  = 19;
                                sortedlist42->n++;
                                break;
                            } else if(19 < cell87->val) {
                                cell_t* tmp87 = cell87->next;
                                cell87->next = (cell_t*)malloc(sizeof(cell_t));
                                cell87->next->next = tmp87;
                                int tmp_val87 = cell87->val;
                                cell87->val = 19;
                                cell87->next->val = tmp_val87;
                                sortedlist42->n++;
                                break;
                            }
                            cell87 = cell87->next;
                        }
                    }
               }
            }
            if(sortedlist43 != NULL && sortedlist43->n > 0){
                 cell_t* cell88 = sortedlist43->root;
                 cell_t* tmp88  = NULL;
                 while(cell88 != NULL) {
                      tmp88 = cell88->next;
                      free(cell88);
                      cell88 = tmp88;
                 }
                 free(sortedlist43);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist35;
         params0.data[1] = sortedlist42;
         sortedlist_t* sortedlist44 = func8(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist44 != NULL && sortedlist44->n > 0){
              cell_t* cell89 = sortedlist44->root;
              cell_t* tmp89  = NULL;
              while(cell89 != NULL) {
                   tmp89 = cell89->next;
                   free(cell89);
                   cell89 = tmp89;
              }
              free(sortedlist44);
         }
      }
      unsigned int loop41 = 0;
      unsigned int loopLimit41 = (rand()%loopsFactor)/3 + 1;
      for(; loop41 < loopLimit41; loop41++) {
         if(sortedlist35 != NULL && sortedlist35->n > 0) {
              cell_t* cell90 = sortedlist35->root;
              if(sortedlist35->n == 0) {
                  sortedlist35->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist35->root->val  = 29;
                  sortedlist35->root->next = NULL;
                  sortedlist35->n++;
              } else {
                  while(cell90 != NULL)
                  {
                      if(cell90->next == NULL && cell90->val < 29) {
                          cell90->next = (cell_t*)malloc(sizeof(cell_t));
                          cell90->next->next = NULL;
                          cell90->next->val  = 29;
                          sortedlist35->n++;
                          break;
                      } else if(29 < cell90->val) {
                          cell_t* tmp90 = cell90->next;
                          cell90->next = (cell_t*)malloc(sizeof(cell_t));
                          cell90->next->next = tmp90;
                          int tmp_val90 = cell90->val;
                          cell90->val = 29;
                          cell90->next->val = tmp_val90;
                          sortedlist35->n++;
                          break;
                      }
                      cell90 = cell90->next;
                  }
              }
         }
         if(sortedlist42 != NULL && sortedlist42->n > 0)
         {
             cell_t* cell91 = sortedlist42->root;
             if(cell91->val == 17)
             {
                 cell91 = cell91->next;
                 sortedlist42->n--;
             }else{
                 while(cell91->next != NULL && cell91->next->val != 17) cell91 = cell91->next;
                 if(cell91->next != NULL)
                 {
                     cell91 = cell91->next->next;
                     sortedlist42->n--;
                 }
              }
         }
         if(sortedlist42 != NULL && sortedlist42->n > 0)
         {
             cell_t* cell92 = sortedlist42->root;
             if(cell92->val == 71)
             {
                 cell92 = cell92->next;
                 sortedlist42->n--;
             }else{
                 while(cell92->next != NULL && cell92->next->val != 71) cell92 = cell92->next;
                 if(cell92->next != NULL)
                 {
                     cell92 = cell92->next->next;
                     sortedlist42->n--;
                 }
              }
         }
      }
      if(sortedlist42 != NULL && sortedlist42->n > 0){
           cell_t* cell93 = sortedlist42->root;
           cell_t* tmp93  = NULL;
           while(cell93 != NULL) {
                tmp93 = cell93->next;
                free(cell93);
                cell93 = tmp93;
           }
           free(sortedlist42);
      }
   }
   return sortedlist35;
}

