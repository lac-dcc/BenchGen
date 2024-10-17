#include "P4_SL.h" 
sortedlist_t* func4(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist34 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist34->n = 0;
   sortedlist34->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop32 = 0;
      unsigned int loopLimit32 = (rand()%loopsFactor)/2 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         if(sortedlist34 != NULL && sortedlist34->n > 0)
         {
             cell_t* cell70 = sortedlist34->root;
             if(cell70->val == 86)
             {
                 cell70 = cell70->next;
                 sortedlist34->n--;
             }else{
                 while(cell70->next != NULL && cell70->next->val != 86) cell70 = cell70->next;
                 if(cell70->next != NULL)
                 {
                     cell70 = cell70->next->next;
                     sortedlist34->n--;
                 }
              }
         }
      }
      unsigned int loop33 = 0;
      unsigned int loopLimit33 = (rand()%loopsFactor)/2 + 1;
      for(; loop33 < loopLimit33; loop33++) {
         sortedlist_t* sortedlist35 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist35->n = 0;
         sortedlist35->root = NULL;
         sortedlist_t* sortedlist36 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist36->n = 0;
         sortedlist36->root = NULL;
         if(sortedlist34 != NULL && sortedlist34->n > 0){
              cell_t* cell71 = sortedlist34->root;
              while(cell71 != NULL && cell71->val != 39) cell71 = cell71->next;
              return cell71 != NULL ? sortedlist34 : NULL;
         }
         unsigned int loop34 = 0;
         unsigned int loopLimit34 = (rand()%loopsFactor)/3 + 1;
         for(; loop34 < loopLimit34; loop34++) {
            if(sortedlist34 != NULL && sortedlist34->n > 0){
                 cell_t* cell72 = sortedlist34->root;
                 while(cell72 != NULL && cell72->val != 70) cell72 = cell72->next;
                 return cell72 != NULL ? sortedlist34 : NULL;
            }
         }
         if(sortedlist36 != NULL && sortedlist36->n > 0){
              cell_t* cell73 = sortedlist36->root;
              cell_t* tmp73  = NULL;
              while(cell73 != NULL) {
                   tmp73 = cell73->next;
                   free(cell73);
                   cell73 = tmp73;
              }
              free(sortedlist36);
         }
         if(sortedlist35 != NULL && sortedlist35->n > 0){
              cell_t* cell74 = sortedlist35->root;
              cell_t* tmp74  = NULL;
              while(cell74 != NULL) {
                   tmp74 = cell74->next;
                   free(cell74);
                   cell74 = tmp74;
              }
              free(sortedlist35);
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist34;
      sortedlist_t* sortedlist37 = func7(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist37 != NULL && sortedlist37->n > 0){
           cell_t* cell75 = sortedlist37->root;
           cell_t* tmp75  = NULL;
           while(cell75 != NULL) {
                tmp75 = cell75->next;
                free(cell75);
                cell75 = tmp75;
           }
           free(sortedlist37);
      }
   }
   else {
      sortedlist_t* sortedlist38 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist38->n = 0;
      sortedlist38->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop35 = 0;
         unsigned int loopLimit35 = (rand()%loopsFactor)/2 + 1;
         for(; loop35 < loopLimit35; loop35++) {
            sortedlist_t* sortedlist39 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist39->n = 0;
            sortedlist39->root = NULL;
            if(sortedlist39 != NULL && sortedlist39->n > 0){
                 cell_t* cell76 = sortedlist39->root;
                 while(cell76 != NULL && cell76->val != 78) cell76 = cell76->next;
                 return cell76 != NULL ? sortedlist39 : NULL;
            }
            unsigned int loop36 = 0;
            unsigned int loopLimit36 = (rand()%loopsFactor)/3 + 1;
            for(; loop36 < loopLimit36; loop36++) {
               if(sortedlist39 != NULL && sortedlist39->n > 0) {
                    cell_t* cell77 = sortedlist39->root;
                    if(sortedlist39->n == 0) {
                        sortedlist39->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist39->root->val  = 1;
                        sortedlist39->root->next = NULL;
                        sortedlist39->n++;
                    } else {
                        while(cell77 != NULL)
                        {
                            if(cell77->next == NULL && cell77->val < 1) {
                                cell77->next = (cell_t*)malloc(sizeof(cell_t));
                                cell77->next->next = NULL;
                                cell77->next->val  = 1;
                                sortedlist39->n++;
                                break;
                            } else if(1 < cell77->val) {
                                cell_t* tmp77 = cell77->next;
                                cell77->next = (cell_t*)malloc(sizeof(cell_t));
                                cell77->next->next = tmp77;
                                int tmp_val77 = cell77->val;
                                cell77->val = 1;
                                cell77->next->val = tmp_val77;
                                sortedlist39->n++;
                                break;
                            }
                            cell77 = cell77->next;
                        }
                    }
               }
            }
            if(sortedlist39 != NULL && sortedlist39->n > 0){
                 cell_t* cell78 = sortedlist39->root;
                 cell_t* tmp78  = NULL;
                 while(cell78 != NULL) {
                      tmp78 = cell78->next;
                      free(cell78);
                      cell78 = tmp78;
                 }
                 free(sortedlist39);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist34;
         params0.data[1] = sortedlist38;
         sortedlist_t* sortedlist40 = func6(&params0, loopsFactor);
         free(params0.data);
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
      unsigned int loop37 = 0;
      unsigned int loopLimit37 = (rand()%loopsFactor)/2 + 1;
      for(; loop37 < loopLimit37; loop37++) {
         if(sortedlist38 != NULL && sortedlist38->n > 0) {
              cell_t* cell80 = sortedlist38->root;
              if(sortedlist38->n == 0) {
                  sortedlist38->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist38->root->val  = 2;
                  sortedlist38->root->next = NULL;
                  sortedlist38->n++;
              } else {
                  while(cell80 != NULL)
                  {
                      if(cell80->next == NULL && cell80->val < 2) {
                          cell80->next = (cell_t*)malloc(sizeof(cell_t));
                          cell80->next->next = NULL;
                          cell80->next->val  = 2;
                          sortedlist38->n++;
                          break;
                      } else if(2 < cell80->val) {
                          cell_t* tmp80 = cell80->next;
                          cell80->next = (cell_t*)malloc(sizeof(cell_t));
                          cell80->next->next = tmp80;
                          int tmp_val80 = cell80->val;
                          cell80->val = 2;
                          cell80->next->val = tmp_val80;
                          sortedlist38->n++;
                          break;
                      }
                      cell80 = cell80->next;
                  }
              }
         }
         if(sortedlist38 != NULL && sortedlist38->n > 0)
         {
             cell_t* cell81 = sortedlist38->root;
             if(cell81->val == 92)
             {
                 cell81 = cell81->next;
                 sortedlist38->n--;
             }else{
                 while(cell81->next != NULL && cell81->next->val != 92) cell81 = cell81->next;
                 if(cell81->next != NULL)
                 {
                     cell81 = cell81->next->next;
                     sortedlist38->n--;
                 }
              }
         }
         if(sortedlist34 != NULL && sortedlist34->n > 0)
         {
             cell_t* cell82 = sortedlist34->root;
             if(cell82->val == 56)
             {
                 cell82 = cell82->next;
                 sortedlist34->n--;
             }else{
                 while(cell82->next != NULL && cell82->next->val != 56) cell82 = cell82->next;
                 if(cell82->next != NULL)
                 {
                     cell82 = cell82->next->next;
                     sortedlist34->n--;
                 }
              }
         }
      }
      if(sortedlist38 != NULL && sortedlist38->n > 0){
           cell_t* cell83 = sortedlist38->root;
           cell_t* tmp83  = NULL;
           while(cell83 != NULL) {
                tmp83 = cell83->next;
                free(cell83);
                cell83 = tmp83;
           }
           free(sortedlist38);
      }
   }
   unsigned int loop38 = 0;
   unsigned int loopLimit38 = (rand()%loopsFactor)/2 + 1;
   for(; loop38 < loopLimit38; loop38++) {
      if(sortedlist34 != NULL && sortedlist34->n > 0) {
           cell_t* cell84 = sortedlist34->root;
           if(sortedlist34->n == 0) {
               sortedlist34->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist34->root->val  = 80;
               sortedlist34->root->next = NULL;
               sortedlist34->n++;
           } else {
               while(cell84 != NULL)
               {
                   if(cell84->next == NULL && cell84->val < 80) {
                       cell84->next = (cell_t*)malloc(sizeof(cell_t));
                       cell84->next->next = NULL;
                       cell84->next->val  = 80;
                       sortedlist34->n++;
                       break;
                   } else if(80 < cell84->val) {
                       cell_t* tmp84 = cell84->next;
                       cell84->next = (cell_t*)malloc(sizeof(cell_t));
                       cell84->next->next = tmp84;
                       int tmp_val84 = cell84->val;
                       cell84->val = 80;
                       cell84->next->val = tmp_val84;
                       sortedlist34->n++;
                       break;
                   }
                   cell84 = cell84->next;
               }
           }
      }
      sortedlist_t* sortedlist41 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist41->n = 0;
      sortedlist41->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop39 = 0;
         unsigned int loopLimit39 = (rand()%loopsFactor)/3 + 1;
         for(; loop39 < loopLimit39; loop39++) {
            sortedlist_t* sortedlist42 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist42->n = 0;
            sortedlist42->root = NULL;
            if(sortedlist42 != NULL && sortedlist42->n > 0){
                 cell_t* cell85 = sortedlist42->root;
                 while(cell85 != NULL && cell85->val != 41) cell85 = cell85->next;
                 return cell85 != NULL ? sortedlist42 : NULL;
            }
            unsigned int loop40 = 0;
            unsigned int loopLimit40 = (rand()%loopsFactor)/4 + 1;
            for(; loop40 < loopLimit40; loop40++) {
               if(sortedlist34 != NULL && sortedlist34->n > 0) {
                    cell_t* cell86 = sortedlist34->root;
                    if(sortedlist34->n == 0) {
                        sortedlist34->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist34->root->val  = 89;
                        sortedlist34->root->next = NULL;
                        sortedlist34->n++;
                    } else {
                        while(cell86 != NULL)
                        {
                            if(cell86->next == NULL && cell86->val < 89) {
                                cell86->next = (cell_t*)malloc(sizeof(cell_t));
                                cell86->next->next = NULL;
                                cell86->next->val  = 89;
                                sortedlist34->n++;
                                break;
                            } else if(89 < cell86->val) {
                                cell_t* tmp86 = cell86->next;
                                cell86->next = (cell_t*)malloc(sizeof(cell_t));
                                cell86->next->next = tmp86;
                                int tmp_val86 = cell86->val;
                                cell86->val = 89;
                                cell86->next->val = tmp_val86;
                                sortedlist34->n++;
                                break;
                            }
                            cell86 = cell86->next;
                        }
                    }
               }
            }
            if(sortedlist42 != NULL && sortedlist42->n > 0){
                 cell_t* cell87 = sortedlist42->root;
                 cell_t* tmp87  = NULL;
                 while(cell87 != NULL) {
                      tmp87 = cell87->next;
                      free(cell87);
                      cell87 = tmp87;
                 }
                 free(sortedlist42);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist34;
         params0.data[1] = sortedlist41;
         sortedlist_t* sortedlist43 = func6(&params0, loopsFactor);
         free(params0.data);
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
      unsigned int loop41 = 0;
      unsigned int loopLimit41 = (rand()%loopsFactor)/3 + 1;
      for(; loop41 < loopLimit41; loop41++) {
         if(sortedlist34 != NULL && sortedlist34->n > 0) {
              cell_t* cell89 = sortedlist34->root;
              if(sortedlist34->n == 0) {
                  sortedlist34->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist34->root->val  = 19;
                  sortedlist34->root->next = NULL;
                  sortedlist34->n++;
              } else {
                  while(cell89 != NULL)
                  {
                      if(cell89->next == NULL && cell89->val < 19) {
                          cell89->next = (cell_t*)malloc(sizeof(cell_t));
                          cell89->next->next = NULL;
                          cell89->next->val  = 19;
                          sortedlist34->n++;
                          break;
                      } else if(19 < cell89->val) {
                          cell_t* tmp89 = cell89->next;
                          cell89->next = (cell_t*)malloc(sizeof(cell_t));
                          cell89->next->next = tmp89;
                          int tmp_val89 = cell89->val;
                          cell89->val = 19;
                          cell89->next->val = tmp_val89;
                          sortedlist34->n++;
                          break;
                      }
                      cell89 = cell89->next;
                  }
              }
         }
         if(sortedlist34 != NULL && sortedlist34->n > 0)
         {
             cell_t* cell90 = sortedlist34->root;
             if(cell90->val == 29)
             {
                 cell90 = cell90->next;
                 sortedlist34->n--;
             }else{
                 while(cell90->next != NULL && cell90->next->val != 29) cell90 = cell90->next;
                 if(cell90->next != NULL)
                 {
                     cell90 = cell90->next->next;
                     sortedlist34->n--;
                 }
              }
         }
         if(sortedlist41 != NULL && sortedlist41->n > 0)
         {
             cell_t* cell91 = sortedlist41->root;
             if(cell91->val == 17)
             {
                 cell91 = cell91->next;
                 sortedlist41->n--;
             }else{
                 while(cell91->next != NULL && cell91->next->val != 17) cell91 = cell91->next;
                 if(cell91->next != NULL)
                 {
                     cell91 = cell91->next->next;
                     sortedlist41->n--;
                 }
              }
         }
      }
      if(sortedlist41 != NULL && sortedlist41->n > 0){
           cell_t* cell92 = sortedlist41->root;
           cell_t* tmp92  = NULL;
           while(cell92 != NULL) {
                tmp92 = cell92->next;
                free(cell92);
                cell92 = tmp92;
           }
           free(sortedlist41);
      }
   }
   return sortedlist34;
}

