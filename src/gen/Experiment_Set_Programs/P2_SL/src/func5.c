#include "P2_SL.h" 
sortedlist_t* func5(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist22 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist22->n = 0;
   sortedlist22->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop17 = 0;
      unsigned int loopLimit17 = (rand()%loopsFactor)/3 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         if(sortedlist22 != NULL && sortedlist22->n > 0)
         {
             cell_t* cell42 = sortedlist22->root;
             if(cell42->val == 57)
             {
                 cell42 = cell42->next;
                 sortedlist22->n--;
             }else{
                 while(cell42->next != NULL && cell42->next->val != 57) cell42 = cell42->next;
                 if(cell42->next != NULL)
                 {
                     cell42 = cell42->next->next;
                     sortedlist22->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist23 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist23->n = 0;
      sortedlist23->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop18 = 0;
         unsigned int loopLimit18 = (rand()%loopsFactor)/3 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            sortedlist_t* sortedlist24 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist24->n = 0;
            sortedlist24->root = NULL;
            if(sortedlist22 != NULL && sortedlist22->n > 0)
            {
                cell_t* cell43 = sortedlist22->root;
                if(cell43->val == 95)
                {
                    cell43 = cell43->next;
                    sortedlist22->n--;
                }else{
                    while(cell43->next != NULL && cell43->next->val != 95) cell43 = cell43->next;
                    if(cell43->next != NULL)
                    {
                        cell43 = cell43->next->next;
                        sortedlist22->n--;
                    }
                 }
            }
            if(sortedlist22 != NULL && sortedlist22->n > 0){
                 cell_t* cell44 = sortedlist22->root;
                 while(cell44 != NULL && cell44->val != 45) cell44 = cell44->next;
                 return cell44 != NULL ? sortedlist22 : NULL;
            }
            unsigned int loop19 = 0;
            unsigned int loopLimit19 = (rand()%loopsFactor)/4 + 1;
            for(; loop19 < loopLimit19; loop19++) {
               if(sortedlist24 != NULL && sortedlist24->n > 0) {
                    cell_t* cell45 = sortedlist24->root;
                    if(sortedlist24->n == 0) {
                        sortedlist24->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist24->root->val  = 67;
                        sortedlist24->root->next = NULL;
                        sortedlist24->n++;
                    } else {
                        while(cell45 != NULL)
                        {
                            if(cell45->next == NULL && cell45->val < 67) {
                                cell45->next = (cell_t*)malloc(sizeof(cell_t));
                                cell45->next->next = NULL;
                                cell45->next->val  = 67;
                                sortedlist24->n++;
                                break;
                            } else if(67 < cell45->val) {
                                cell_t* tmp45 = cell45->next;
                                cell45->next = (cell_t*)malloc(sizeof(cell_t));
                                cell45->next->next = tmp45;
                                int tmp_val45 = cell45->val;
                                cell45->val = 67;
                                cell45->next->val = tmp_val45;
                                sortedlist24->n++;
                                break;
                            }
                            cell45 = cell45->next;
                        }
                    }
               }
            }
            if(sortedlist24 != NULL && sortedlist24->n > 0){
                 cell_t* cell46 = sortedlist24->root;
                 cell_t* tmp46  = NULL;
                 while(cell46 != NULL) {
                      tmp46 = cell46->next;
                      free(cell46);
                      cell46 = tmp46;
                 }
                 free(sortedlist24);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist22;
         params0.data[1] = sortedlist23;
         sortedlist_t* sortedlist25 = func14(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist25 != NULL && sortedlist25->n > 0){
              cell_t* cell47 = sortedlist25->root;
              cell_t* tmp47  = NULL;
              while(cell47 != NULL) {
                   tmp47 = cell47->next;
                   free(cell47);
                   cell47 = tmp47;
              }
              free(sortedlist25);
         }
      }
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist22;
      params0.data[1] = sortedlist23;
      sortedlist_t* sortedlist26 = func11(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop20 = 0;
      unsigned int loopLimit20 = (rand()%loopsFactor)/3 + 1;
      for(; loop20 < loopLimit20; loop20++) {
         if(sortedlist26 != NULL && sortedlist26->n > 0)
         {
             cell_t* cell48 = sortedlist26->root;
             if(cell48->val == 64)
             {
                 cell48 = cell48->next;
                 sortedlist26->n--;
             }else{
                 while(cell48->next != NULL && cell48->next->val != 64) cell48 = cell48->next;
                 if(cell48->next != NULL)
                 {
                     cell48 = cell48->next->next;
                     sortedlist26->n--;
                 }
              }
         }
      }
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (rand()%loopsFactor)/3 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         if(sortedlist22 != NULL && sortedlist22->n > 0) {
              cell_t* cell49 = sortedlist22->root;
              if(sortedlist22->n == 0) {
                  sortedlist22->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist22->root->val  = 50;
                  sortedlist22->root->next = NULL;
                  sortedlist22->n++;
              } else {
                  while(cell49 != NULL)
                  {
                      if(cell49->next == NULL && cell49->val < 50) {
                          cell49->next = (cell_t*)malloc(sizeof(cell_t));
                          cell49->next->next = NULL;
                          cell49->next->val  = 50;
                          sortedlist22->n++;
                          break;
                      } else if(50 < cell49->val) {
                          cell_t* tmp49 = cell49->next;
                          cell49->next = (cell_t*)malloc(sizeof(cell_t));
                          cell49->next->next = tmp49;
                          int tmp_val49 = cell49->val;
                          cell49->val = 50;
                          cell49->next->val = tmp_val49;
                          sortedlist22->n++;
                          break;
                      }
                      cell49 = cell49->next;
                  }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist22;
      params1.data[1] = sortedlist23;
      params1.data[2] = sortedlist26;
      sortedlist_t* sortedlist27 = func9(&params1, loopsFactor);
      free(params1.data);
      if(sortedlist27 != NULL && sortedlist27->n > 0){
           cell_t* cell56 = sortedlist27->root;
           cell_t* tmp56  = NULL;
           while(cell56 != NULL) {
                tmp56 = cell56->next;
                free(cell56);
                cell56 = tmp56;
           }
           free(sortedlist27);
      }
      if(sortedlist26 != NULL && sortedlist26->n > 0){
           cell_t* cell57 = sortedlist26->root;
           cell_t* tmp57  = NULL;
           while(cell57 != NULL) {
                tmp57 = cell57->next;
                free(cell57);
                cell57 = tmp57;
           }
           free(sortedlist26);
      }
      if(sortedlist23 != NULL && sortedlist23->n > 0){
           cell_t* cell58 = sortedlist23->root;
           cell_t* tmp58  = NULL;
           while(cell58 != NULL) {
                tmp58 = cell58->next;
                free(cell58);
                cell58 = tmp58;
           }
           free(sortedlist23);
      }
   }
   else {
      sortedlist_t* sortedlist30 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist30->n = 0;
      sortedlist30->root = NULL;
      unsigned int loop24 = 0;
      unsigned int loopLimit24 = (rand()%loopsFactor)/3 + 1;
      for(; loop24 < loopLimit24; loop24++) {
         if(sortedlist22 != NULL && sortedlist22->n > 0)
         {
             cell_t* cell59 = sortedlist22->root;
             if(cell59->val == 76)
             {
                 cell59 = cell59->next;
                 sortedlist22->n--;
             }else{
                 while(cell59->next != NULL && cell59->next->val != 76) cell59 = cell59->next;
                 if(cell59->next != NULL)
                 {
                     cell59 = cell59->next->next;
                     sortedlist22->n--;
                 }
              }
         }
      }
      if(sortedlist22 != NULL && sortedlist22->n > 0) {
           cell_t* cell60 = sortedlist22->root;
           if(sortedlist22->n == 0) {
               sortedlist22->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist22->root->val  = 39;
               sortedlist22->root->next = NULL;
               sortedlist22->n++;
           } else {
               while(cell60 != NULL)
               {
                   if(cell60->next == NULL && cell60->val < 39) {
                       cell60->next = (cell_t*)malloc(sizeof(cell_t));
                       cell60->next->next = NULL;
                       cell60->next->val  = 39;
                       sortedlist22->n++;
                       break;
                   } else if(39 < cell60->val) {
                       cell_t* tmp60 = cell60->next;
                       cell60->next = (cell_t*)malloc(sizeof(cell_t));
                       cell60->next->next = tmp60;
                       int tmp_val60 = cell60->val;
                       cell60->val = 39;
                       cell60->next->val = tmp_val60;
                       sortedlist22->n++;
                       break;
                   }
                   cell60 = cell60->next;
               }
           }
      }
      if(sortedlist22 != NULL && sortedlist22->n > 0){
           cell_t* cell61 = sortedlist22->root;
           while(cell61 != NULL && cell61->val != 26) cell61 = cell61->next;
           return cell61 != NULL ? sortedlist22 : NULL;
      }
      if(sortedlist22 != NULL && sortedlist22->n > 0)
      {
          cell_t* cell62 = sortedlist22->root;
          if(cell62->val == 94)
          {
              cell62 = cell62->next;
              sortedlist22->n--;
          }else{
              while(cell62->next != NULL && cell62->next->val != 94) cell62 = cell62->next;
              if(cell62->next != NULL)
              {
                  cell62 = cell62->next->next;
                  sortedlist22->n--;
              }
           }
      }
      sortedlist_t* sortedlist31 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist31->n = 0;
      sortedlist31->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop25 = 0;
         unsigned int loopLimit25 = (rand()%loopsFactor)/3 + 1;
         for(; loop25 < loopLimit25; loop25++) {
            sortedlist_t* sortedlist32 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist32->n = 0;
            sortedlist32->root = NULL;
            if(sortedlist32 != NULL && sortedlist32->n > 0)
            {
                cell_t* cell63 = sortedlist32->root;
                if(cell63->val == 95)
                {
                    cell63 = cell63->next;
                    sortedlist32->n--;
                }else{
                    while(cell63->next != NULL && cell63->next->val != 95) cell63 = cell63->next;
                    if(cell63->next != NULL)
                    {
                        cell63 = cell63->next->next;
                        sortedlist32->n--;
                    }
                 }
            }
            if(sortedlist31 != NULL && sortedlist31->n > 0){
                 cell_t* cell64 = sortedlist31->root;
                 while(cell64 != NULL && cell64->val != 34) cell64 = cell64->next;
                 return cell64 != NULL ? sortedlist31 : NULL;
            }
            unsigned int loop26 = 0;
            unsigned int loopLimit26 = (rand()%loopsFactor)/4 + 1;
            for(; loop26 < loopLimit26; loop26++) {
               if(sortedlist31 != NULL && sortedlist31->n > 0) {
                    cell_t* cell65 = sortedlist31->root;
                    if(sortedlist31->n == 0) {
                        sortedlist31->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist31->root->val  = 67;
                        sortedlist31->root->next = NULL;
                        sortedlist31->n++;
                    } else {
                        while(cell65 != NULL)
                        {
                            if(cell65->next == NULL && cell65->val < 67) {
                                cell65->next = (cell_t*)malloc(sizeof(cell_t));
                                cell65->next->next = NULL;
                                cell65->next->val  = 67;
                                sortedlist31->n++;
                                break;
                            } else if(67 < cell65->val) {
                                cell_t* tmp65 = cell65->next;
                                cell65->next = (cell_t*)malloc(sizeof(cell_t));
                                cell65->next->next = tmp65;
                                int tmp_val65 = cell65->val;
                                cell65->val = 67;
                                cell65->next->val = tmp_val65;
                                sortedlist31->n++;
                                break;
                            }
                            cell65 = cell65->next;
                        }
                    }
               }
            }
            if(sortedlist32 != NULL && sortedlist32->n > 0){
                 cell_t* cell66 = sortedlist32->root;
                 cell_t* tmp66  = NULL;
                 while(cell66 != NULL) {
                      tmp66 = cell66->next;
                      free(cell66);
                      cell66 = tmp66;
                 }
                 free(sortedlist32);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist22;
         params0.data[1] = sortedlist30;
         params0.data[2] = sortedlist31;
         sortedlist_t* sortedlist33 = func14(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist33 != NULL && sortedlist33->n > 0){
              cell_t* cell67 = sortedlist33->root;
              cell_t* tmp67  = NULL;
              while(cell67 != NULL) {
                   tmp67 = cell67->next;
                   free(cell67);
                   cell67 = tmp67;
              }
              free(sortedlist33);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist22;
      params0.data[1] = sortedlist30;
      params0.data[2] = sortedlist31;
      sortedlist_t* sortedlist34 = func11(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop27 = 0;
      unsigned int loopLimit27 = (rand()%loopsFactor)/3 + 1;
      for(; loop27 < loopLimit27; loop27++) {
         if(sortedlist30 != NULL && sortedlist30->n > 0)
         {
             cell_t* cell68 = sortedlist30->root;
             if(cell68->val == 97)
             {
                 cell68 = cell68->next;
                 sortedlist30->n--;
             }else{
                 while(cell68->next != NULL && cell68->next->val != 97) cell68 = cell68->next;
                 if(cell68->next != NULL)
                 {
                     cell68 = cell68->next->next;
                     sortedlist30->n--;
                 }
              }
         }
      }
      if(sortedlist34 != NULL && sortedlist34->n > 0){
           cell_t* cell69 = sortedlist34->root;
           cell_t* tmp69  = NULL;
           while(cell69 != NULL) {
                tmp69 = cell69->next;
                free(cell69);
                cell69 = tmp69;
           }
           free(sortedlist34);
      }
      if(sortedlist31 != NULL && sortedlist31->n > 0){
           cell_t* cell70 = sortedlist31->root;
           cell_t* tmp70  = NULL;
           while(cell70 != NULL) {
                tmp70 = cell70->next;
                free(cell70);
                cell70 = tmp70;
           }
           free(sortedlist31);
      }
      if(sortedlist30 != NULL && sortedlist30->n > 0){
           cell_t* cell71 = sortedlist30->root;
           cell_t* tmp71  = NULL;
           while(cell71 != NULL) {
                tmp71 = cell71->next;
                free(cell71);
                cell71 = tmp71;
           }
           free(sortedlist30);
      }
   }
   unsigned int loop28 = 0;
   unsigned int loopLimit28 = (rand()%loopsFactor)/3 + 1;
   for(; loop28 < loopLimit28; loop28++) {
      if(sortedlist22 != NULL && sortedlist22->n > 0) {
           cell_t* cell72 = sortedlist22->root;
           if(sortedlist22->n == 0) {
               sortedlist22->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist22->root->val  = 17;
               sortedlist22->root->next = NULL;
               sortedlist22->n++;
           } else {
               while(cell72 != NULL)
               {
                   if(cell72->next == NULL && cell72->val < 17) {
                       cell72->next = (cell_t*)malloc(sizeof(cell_t));
                       cell72->next->next = NULL;
                       cell72->next->val  = 17;
                       sortedlist22->n++;
                       break;
                   } else if(17 < cell72->val) {
                       cell_t* tmp72 = cell72->next;
                       cell72->next = (cell_t*)malloc(sizeof(cell_t));
                       cell72->next->next = tmp72;
                       int tmp_val72 = cell72->val;
                       cell72->val = 17;
                       cell72->next->val = tmp_val72;
                       sortedlist22->n++;
                       break;
                   }
                   cell72 = cell72->next;
               }
           }
      }
      sortedlist_t* sortedlist35 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist35->n = 0;
      sortedlist35->root = NULL;
      unsigned int loop29 = 0;
      unsigned int loopLimit29 = (rand()%loopsFactor)/4 + 1;
      for(; loop29 < loopLimit29; loop29++) {
         if(sortedlist22 != NULL && sortedlist22->n > 0)
         {
             cell_t* cell73 = sortedlist22->root;
             if(cell73->val == 52)
             {
                 cell73 = cell73->next;
                 sortedlist22->n--;
             }else{
                 while(cell73->next != NULL && cell73->next->val != 52) cell73 = cell73->next;
                 if(cell73->next != NULL)
                 {
                     cell73 = cell73->next->next;
                     sortedlist22->n--;
                 }
              }
         }
      }
      if(sortedlist22 != NULL && sortedlist22->n > 0) {
           cell_t* cell74 = sortedlist22->root;
           if(sortedlist22->n == 0) {
               sortedlist22->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist22->root->val  = 1;
               sortedlist22->root->next = NULL;
               sortedlist22->n++;
           } else {
               while(cell74 != NULL)
               {
                   if(cell74->next == NULL && cell74->val < 1) {
                       cell74->next = (cell_t*)malloc(sizeof(cell_t));
                       cell74->next->next = NULL;
                       cell74->next->val  = 1;
                       sortedlist22->n++;
                       break;
                   } else if(1 < cell74->val) {
                       cell_t* tmp74 = cell74->next;
                       cell74->next = (cell_t*)malloc(sizeof(cell_t));
                       cell74->next->next = tmp74;
                       int tmp_val74 = cell74->val;
                       cell74->val = 1;
                       cell74->next->val = tmp_val74;
                       sortedlist22->n++;
                       break;
                   }
                   cell74 = cell74->next;
               }
           }
      }
      if(sortedlist22 != NULL && sortedlist22->n > 0){
           cell_t* cell75 = sortedlist22->root;
           while(cell75 != NULL && cell75->val != 86) cell75 = cell75->next;
           return cell75 != NULL ? sortedlist22 : NULL;
      }
      if(sortedlist35 != NULL && sortedlist35->n > 0)
      {
          cell_t* cell76 = sortedlist35->root;
          if(cell76->val == 65)
          {
              cell76 = cell76->next;
              sortedlist35->n--;
          }else{
              while(cell76->next != NULL && cell76->next->val != 65) cell76 = cell76->next;
              if(cell76->next != NULL)
              {
                  cell76 = cell76->next->next;
                  sortedlist35->n--;
              }
           }
      }
      sortedlist_t* sortedlist36 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist36->n = 0;
      sortedlist36->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop30 = 0;
         unsigned int loopLimit30 = (rand()%loopsFactor)/4 + 1;
         for(; loop30 < loopLimit30; loop30++) {
            sortedlist_t* sortedlist37 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist37->n = 0;
            sortedlist37->root = NULL;
            if(sortedlist35 != NULL && sortedlist35->n > 0)
            {
                cell_t* cell77 = sortedlist35->root;
                if(cell77->val == 44)
                {
                    cell77 = cell77->next;
                    sortedlist35->n--;
                }else{
                    while(cell77->next != NULL && cell77->next->val != 44) cell77 = cell77->next;
                    if(cell77->next != NULL)
                    {
                        cell77 = cell77->next->next;
                        sortedlist35->n--;
                    }
                 }
            }
            if(sortedlist37 != NULL && sortedlist37->n > 0){
                 cell_t* cell78 = sortedlist37->root;
                 while(cell78 != NULL && cell78->val != 40) cell78 = cell78->next;
                 return cell78 != NULL ? sortedlist37 : NULL;
            }
            unsigned int loop31 = 0;
            unsigned int loopLimit31 = (rand()%loopsFactor)/5 + 1;
            for(; loop31 < loopLimit31; loop31++) {
               if(sortedlist35 != NULL && sortedlist35->n > 0) {
                    cell_t* cell79 = sortedlist35->root;
                    if(sortedlist35->n == 0) {
                        sortedlist35->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist35->root->val  = 31;
                        sortedlist35->root->next = NULL;
                        sortedlist35->n++;
                    } else {
                        while(cell79 != NULL)
                        {
                            if(cell79->next == NULL && cell79->val < 31) {
                                cell79->next = (cell_t*)malloc(sizeof(cell_t));
                                cell79->next->next = NULL;
                                cell79->next->val  = 31;
                                sortedlist35->n++;
                                break;
                            } else if(31 < cell79->val) {
                                cell_t* tmp79 = cell79->next;
                                cell79->next = (cell_t*)malloc(sizeof(cell_t));
                                cell79->next->next = tmp79;
                                int tmp_val79 = cell79->val;
                                cell79->val = 31;
                                cell79->next->val = tmp_val79;
                                sortedlist35->n++;
                                break;
                            }
                            cell79 = cell79->next;
                        }
                    }
               }
            }
            if(sortedlist37 != NULL && sortedlist37->n > 0){
                 cell_t* cell80 = sortedlist37->root;
                 cell_t* tmp80  = NULL;
                 while(cell80 != NULL) {
                      tmp80 = cell80->next;
                      free(cell80);
                      cell80 = tmp80;
                 }
                 free(sortedlist37);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist22;
         params0.data[1] = sortedlist35;
         params0.data[2] = sortedlist36;
         sortedlist_t* sortedlist38 = func14(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist38 != NULL && sortedlist38->n > 0){
              cell_t* cell81 = sortedlist38->root;
              cell_t* tmp81  = NULL;
              while(cell81 != NULL) {
                   tmp81 = cell81->next;
                   free(cell81);
                   cell81 = tmp81;
              }
              free(sortedlist38);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist22;
      params0.data[1] = sortedlist35;
      params0.data[2] = sortedlist36;
      sortedlist_t* sortedlist39 = func11(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop32 = 0;
      unsigned int loopLimit32 = (rand()%loopsFactor)/4 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         if(sortedlist35 != NULL && sortedlist35->n > 0)
         {
             cell_t* cell82 = sortedlist35->root;
             if(cell82->val == 97)
             {
                 cell82 = cell82->next;
                 sortedlist35->n--;
             }else{
                 while(cell82->next != NULL && cell82->next->val != 97) cell82 = cell82->next;
                 if(cell82->next != NULL)
                 {
                     cell82 = cell82->next->next;
                     sortedlist35->n--;
                 }
              }
         }
      }
      if(sortedlist39 != NULL && sortedlist39->n > 0){
           cell_t* cell83 = sortedlist39->root;
           cell_t* tmp83  = NULL;
           while(cell83 != NULL) {
                tmp83 = cell83->next;
                free(cell83);
                cell83 = tmp83;
           }
           free(sortedlist39);
      }
      if(sortedlist36 != NULL && sortedlist36->n > 0){
           cell_t* cell84 = sortedlist36->root;
           cell_t* tmp84  = NULL;
           while(cell84 != NULL) {
                tmp84 = cell84->next;
                free(cell84);
                cell84 = tmp84;
           }
           free(sortedlist36);
      }
      if(sortedlist35 != NULL && sortedlist35->n > 0){
           cell_t* cell85 = sortedlist35->root;
           cell_t* tmp85  = NULL;
           while(cell85 != NULL) {
                tmp85 = cell85->next;
                free(cell85);
                cell85 = tmp85;
           }
           free(sortedlist35);
      }
   }
   return sortedlist22;
}

