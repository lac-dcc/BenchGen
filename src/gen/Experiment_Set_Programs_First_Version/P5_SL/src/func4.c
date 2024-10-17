#include "P5_SL.h" 
sortedlist_t* func4(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist81 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist81->n = 0;
   sortedlist81->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop78 = 0;
      unsigned int loopLimit78 = (rand()%loopsFactor)/3 + 1;
      for(; loop78 < loopLimit78; loop78++) {
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell179 = sortedlist81->root;
             if(cell179->val == 4)
             {
                 cell179 = cell179->next;
                 sortedlist81->n--;
             }else{
                 while(cell179->next != NULL && cell179->next->val != 4) cell179 = cell179->next;
                 if(cell179->next != NULL)
                 {
                     cell179 = cell179->next->next;
                     sortedlist81->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist81;
      sortedlist_t* sortedlist82 = func10(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop79 = 0;
      unsigned int loopLimit79 = (rand()%loopsFactor)/3 + 1;
      for(; loop79 < loopLimit79; loop79++) {
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell180 = sortedlist81->root;
             if(cell180->val == 11)
             {
                 cell180 = cell180->next;
                 sortedlist81->n--;
             }else{
                 while(cell180->next != NULL && cell180->next->val != 11) cell180 = cell180->next;
                 if(cell180->next != NULL)
                 {
                     cell180 = cell180->next->next;
                     sortedlist81->n--;
                 }
              }
         }
      }
      unsigned int loop80 = 0;
      unsigned int loopLimit80 = (rand()%loopsFactor)/3 + 1;
      for(; loop80 < loopLimit80; loop80++) {
         sortedlist_t* sortedlist83 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist83->n = 0;
         sortedlist83->root = NULL;
         sortedlist_t* sortedlist84 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist84->n = 0;
         sortedlist84->root = NULL;
         if(sortedlist83 != NULL && sortedlist83->n > 0){
              cell_t* cell181 = sortedlist83->root;
              while(cell181 != NULL && cell181->val != 28) cell181 = cell181->next;
              return cell181 != NULL ? sortedlist83 : NULL;
         }
         unsigned int loop81 = 0;
         unsigned int loopLimit81 = (rand()%loopsFactor)/4 + 1;
         for(; loop81 < loopLimit81; loop81++) {
            if(sortedlist84 != NULL && sortedlist84->n > 0){
                 cell_t* cell182 = sortedlist84->root;
                 while(cell182 != NULL && cell182->val != 43) cell182 = cell182->next;
                 return cell182 != NULL ? sortedlist84 : NULL;
            }
         }
         if(sortedlist84 != NULL && sortedlist84->n > 0){
              cell_t* cell183 = sortedlist84->root;
              cell_t* tmp183  = NULL;
              while(cell183 != NULL) {
                   tmp183 = cell183->next;
                   free(cell183);
                   cell183 = tmp183;
              }
              free(sortedlist84);
         }
         if(sortedlist83 != NULL && sortedlist83->n > 0){
              cell_t* cell184 = sortedlist83->root;
              cell_t* tmp184  = NULL;
              while(cell184 != NULL) {
                   tmp184 = cell184->next;
                   free(cell184);
                   cell184 = tmp184;
              }
              free(sortedlist83);
         }
      }
      sortedlist_t* sortedlist85 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist85->n = 0;
      sortedlist85->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop82 = 0;
         unsigned int loopLimit82 = (rand()%loopsFactor)/3 + 1;
         for(; loop82 < loopLimit82; loop82++) {
            sortedlist_t* sortedlist86 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist86->n = 0;
            sortedlist86->root = NULL;
            if(sortedlist85 != NULL && sortedlist85->n > 0){
                 cell_t* cell185 = sortedlist85->root;
                 while(cell185 != NULL && cell185->val != 68) cell185 = cell185->next;
                 return cell185 != NULL ? sortedlist85 : NULL;
            }
            unsigned int loop83 = 0;
            unsigned int loopLimit83 = (rand()%loopsFactor)/4 + 1;
            for(; loop83 < loopLimit83; loop83++) {
               if(sortedlist81 != NULL && sortedlist81->n > 0) {
                    cell_t* cell186 = sortedlist81->root;
                    if(sortedlist81->n == 0) {
                        sortedlist81->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist81->root->val  = 22;
                        sortedlist81->root->next = NULL;
                        sortedlist81->n++;
                    } else {
                        while(cell186 != NULL)
                        {
                            if(cell186->next == NULL && cell186->val < 22) {
                                cell186->next = (cell_t*)malloc(sizeof(cell_t));
                                cell186->next->next = NULL;
                                cell186->next->val  = 22;
                                sortedlist81->n++;
                                break;
                            } else if(22 < cell186->val) {
                                cell_t* tmp186 = cell186->next;
                                cell186->next = (cell_t*)malloc(sizeof(cell_t));
                                cell186->next->next = tmp186;
                                int tmp_val186 = cell186->val;
                                cell186->val = 22;
                                cell186->next->val = tmp_val186;
                                sortedlist81->n++;
                                break;
                            }
                            cell186 = cell186->next;
                        }
                    }
               }
            }
            if(sortedlist86 != NULL && sortedlist86->n > 0){
                 cell_t* cell187 = sortedlist86->root;
                 cell_t* tmp187  = NULL;
                 while(cell187 != NULL) {
                      tmp187 = cell187->next;
                      free(cell187);
                      cell187 = tmp187;
                 }
                 free(sortedlist86);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist81;
         params1.data[1] = sortedlist82;
         params1.data[2] = sortedlist85;
         sortedlist_t* sortedlist87 = func8(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist87 != NULL && sortedlist87->n > 0){
              cell_t* cell188 = sortedlist87->root;
              cell_t* tmp188  = NULL;
              while(cell188 != NULL) {
                   tmp188 = cell188->next;
                   free(cell188);
                   cell188 = tmp188;
              }
              free(sortedlist87);
         }
      }
      unsigned int loop84 = 0;
      unsigned int loopLimit84 = (rand()%loopsFactor)/3 + 1;
      for(; loop84 < loopLimit84; loop84++) {
         if(sortedlist85 != NULL && sortedlist85->n > 0) {
              cell_t* cell189 = sortedlist85->root;
              if(sortedlist85->n == 0) {
                  sortedlist85->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist85->root->val  = 10;
                  sortedlist85->root->next = NULL;
                  sortedlist85->n++;
              } else {
                  while(cell189 != NULL)
                  {
                      if(cell189->next == NULL && cell189->val < 10) {
                          cell189->next = (cell_t*)malloc(sizeof(cell_t));
                          cell189->next->next = NULL;
                          cell189->next->val  = 10;
                          sortedlist85->n++;
                          break;
                      } else if(10 < cell189->val) {
                          cell_t* tmp189 = cell189->next;
                          cell189->next = (cell_t*)malloc(sizeof(cell_t));
                          cell189->next->next = tmp189;
                          int tmp_val189 = cell189->val;
                          cell189->val = 10;
                          cell189->next->val = tmp_val189;
                          sortedlist85->n++;
                          break;
                      }
                      cell189 = cell189->next;
                  }
              }
         }
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell190 = sortedlist81->root;
             if(cell190->val == 1)
             {
                 cell190 = cell190->next;
                 sortedlist81->n--;
             }else{
                 while(cell190->next != NULL && cell190->next->val != 1) cell190 = cell190->next;
                 if(cell190->next != NULL)
                 {
                     cell190 = cell190->next->next;
                     sortedlist81->n--;
                 }
              }
         }
         if(sortedlist82 != NULL && sortedlist82->n > 0)
         {
             cell_t* cell191 = sortedlist82->root;
             if(cell191->val == 30)
             {
                 cell191 = cell191->next;
                 sortedlist82->n--;
             }else{
                 while(cell191->next != NULL && cell191->next->val != 30) cell191 = cell191->next;
                 if(cell191->next != NULL)
                 {
                     cell191 = cell191->next->next;
                     sortedlist82->n--;
                 }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist81;
      params1.data[1] = sortedlist82;
      params1.data[2] = sortedlist85;
      sortedlist_t* sortedlist88 = func6(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist88 != NULL && sortedlist88->n > 0){
           cell_t* cell192 = sortedlist88->root;
           cell_t* tmp192  = NULL;
           while(cell192 != NULL) {
                tmp192 = cell192->next;
                free(cell192);
                cell192 = tmp192;
           }
           free(sortedlist88);
      }
      if(sortedlist85 != NULL && sortedlist85->n > 0){
           cell_t* cell193 = sortedlist85->root;
           cell_t* tmp193  = NULL;
           while(cell193 != NULL) {
                tmp193 = cell193->next;
                free(cell193);
                cell193 = tmp193;
           }
           free(sortedlist85);
      }
      if(sortedlist82 != NULL && sortedlist82->n > 0){
           cell_t* cell194 = sortedlist82->root;
           cell_t* tmp194  = NULL;
           while(cell194 != NULL) {
                tmp194 = cell194->next;
                free(cell194);
                cell194 = tmp194;
           }
           free(sortedlist82);
      }
   }
   else {
      unsigned int loop85 = 0;
      unsigned int loopLimit85 = (rand()%loopsFactor)/3 + 1;
      for(; loop85 < loopLimit85; loop85++) {
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell195 = sortedlist81->root;
             if(cell195->val == 5)
             {
                 cell195 = cell195->next;
                 sortedlist81->n--;
             }else{
                 while(cell195->next != NULL && cell195->next->val != 5) cell195 = cell195->next;
                 if(cell195->next != NULL)
                 {
                     cell195 = cell195->next->next;
                     sortedlist81->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist81;
      sortedlist_t* sortedlist89 = func10(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop86 = 0;
      unsigned int loopLimit86 = (rand()%loopsFactor)/3 + 1;
      for(; loop86 < loopLimit86; loop86++) {
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell196 = sortedlist81->root;
             if(cell196->val == 36)
             {
                 cell196 = cell196->next;
                 sortedlist81->n--;
             }else{
                 while(cell196->next != NULL && cell196->next->val != 36) cell196 = cell196->next;
                 if(cell196->next != NULL)
                 {
                     cell196 = cell196->next->next;
                     sortedlist81->n--;
                 }
              }
         }
      }
      unsigned int loop87 = 0;
      unsigned int loopLimit87 = (rand()%loopsFactor)/3 + 1;
      for(; loop87 < loopLimit87; loop87++) {
         sortedlist_t* sortedlist90 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist90->n = 0;
         sortedlist90->root = NULL;
         sortedlist_t* sortedlist91 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist91->n = 0;
         sortedlist91->root = NULL;
         if(sortedlist81 != NULL && sortedlist81->n > 0){
              cell_t* cell197 = sortedlist81->root;
              while(cell197 != NULL && cell197->val != 26) cell197 = cell197->next;
              return cell197 != NULL ? sortedlist81 : NULL;
         }
         unsigned int loop88 = 0;
         unsigned int loopLimit88 = (rand()%loopsFactor)/4 + 1;
         for(; loop88 < loopLimit88; loop88++) {
            if(sortedlist90 != NULL && sortedlist90->n > 0){
                 cell_t* cell198 = sortedlist90->root;
                 while(cell198 != NULL && cell198->val != 65) cell198 = cell198->next;
                 return cell198 != NULL ? sortedlist90 : NULL;
            }
         }
         if(sortedlist91 != NULL && sortedlist91->n > 0){
              cell_t* cell199 = sortedlist91->root;
              cell_t* tmp199  = NULL;
              while(cell199 != NULL) {
                   tmp199 = cell199->next;
                   free(cell199);
                   cell199 = tmp199;
              }
              free(sortedlist91);
         }
         if(sortedlist90 != NULL && sortedlist90->n > 0){
              cell_t* cell200 = sortedlist90->root;
              cell_t* tmp200  = NULL;
              while(cell200 != NULL) {
                   tmp200 = cell200->next;
                   free(cell200);
                   cell200 = tmp200;
              }
              free(sortedlist90);
         }
      }
      sortedlist_t* sortedlist92 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist92->n = 0;
      sortedlist92->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop89 = 0;
         unsigned int loopLimit89 = (rand()%loopsFactor)/3 + 1;
         for(; loop89 < loopLimit89; loop89++) {
            sortedlist_t* sortedlist93 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist93->n = 0;
            sortedlist93->root = NULL;
            if(sortedlist81 != NULL && sortedlist81->n > 0){
                 cell_t* cell201 = sortedlist81->root;
                 while(cell201 != NULL && cell201->val != 16) cell201 = cell201->next;
                 return cell201 != NULL ? sortedlist81 : NULL;
            }
            unsigned int loop90 = 0;
            unsigned int loopLimit90 = (rand()%loopsFactor)/4 + 1;
            for(; loop90 < loopLimit90; loop90++) {
               if(sortedlist92 != NULL && sortedlist92->n > 0) {
                    cell_t* cell202 = sortedlist92->root;
                    if(sortedlist92->n == 0) {
                        sortedlist92->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist92->root->val  = 58;
                        sortedlist92->root->next = NULL;
                        sortedlist92->n++;
                    } else {
                        while(cell202 != NULL)
                        {
                            if(cell202->next == NULL && cell202->val < 58) {
                                cell202->next = (cell_t*)malloc(sizeof(cell_t));
                                cell202->next->next = NULL;
                                cell202->next->val  = 58;
                                sortedlist92->n++;
                                break;
                            } else if(58 < cell202->val) {
                                cell_t* tmp202 = cell202->next;
                                cell202->next = (cell_t*)malloc(sizeof(cell_t));
                                cell202->next->next = tmp202;
                                int tmp_val202 = cell202->val;
                                cell202->val = 58;
                                cell202->next->val = tmp_val202;
                                sortedlist92->n++;
                                break;
                            }
                            cell202 = cell202->next;
                        }
                    }
               }
            }
            if(sortedlist93 != NULL && sortedlist93->n > 0){
                 cell_t* cell203 = sortedlist93->root;
                 cell_t* tmp203  = NULL;
                 while(cell203 != NULL) {
                      tmp203 = cell203->next;
                      free(cell203);
                      cell203 = tmp203;
                 }
                 free(sortedlist93);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist81;
         params1.data[1] = sortedlist89;
         params1.data[2] = sortedlist92;
         sortedlist_t* sortedlist94 = func8(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist94 != NULL && sortedlist94->n > 0){
              cell_t* cell204 = sortedlist94->root;
              cell_t* tmp204  = NULL;
              while(cell204 != NULL) {
                   tmp204 = cell204->next;
                   free(cell204);
                   cell204 = tmp204;
              }
              free(sortedlist94);
         }
      }
      unsigned int loop91 = 0;
      unsigned int loopLimit91 = (rand()%loopsFactor)/3 + 1;
      for(; loop91 < loopLimit91; loop91++) {
         if(sortedlist92 != NULL && sortedlist92->n > 0) {
              cell_t* cell205 = sortedlist92->root;
              if(sortedlist92->n == 0) {
                  sortedlist92->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist92->root->val  = 37;
                  sortedlist92->root->next = NULL;
                  sortedlist92->n++;
              } else {
                  while(cell205 != NULL)
                  {
                      if(cell205->next == NULL && cell205->val < 37) {
                          cell205->next = (cell_t*)malloc(sizeof(cell_t));
                          cell205->next->next = NULL;
                          cell205->next->val  = 37;
                          sortedlist92->n++;
                          break;
                      } else if(37 < cell205->val) {
                          cell_t* tmp205 = cell205->next;
                          cell205->next = (cell_t*)malloc(sizeof(cell_t));
                          cell205->next->next = tmp205;
                          int tmp_val205 = cell205->val;
                          cell205->val = 37;
                          cell205->next->val = tmp_val205;
                          sortedlist92->n++;
                          break;
                      }
                      cell205 = cell205->next;
                  }
              }
         }
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell206 = sortedlist81->root;
             if(cell206->val == 24)
             {
                 cell206 = cell206->next;
                 sortedlist81->n--;
             }else{
                 while(cell206->next != NULL && cell206->next->val != 24) cell206 = cell206->next;
                 if(cell206->next != NULL)
                 {
                     cell206 = cell206->next->next;
                     sortedlist81->n--;
                 }
              }
         }
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell207 = sortedlist81->root;
             if(cell207->val == 36)
             {
                 cell207 = cell207->next;
                 sortedlist81->n--;
             }else{
                 while(cell207->next != NULL && cell207->next->val != 36) cell207 = cell207->next;
                 if(cell207->next != NULL)
                 {
                     cell207 = cell207->next->next;
                     sortedlist81->n--;
                 }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist81;
      params1.data[1] = sortedlist89;
      params1.data[2] = sortedlist92;
      sortedlist_t* sortedlist95 = func6(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist95 != NULL && sortedlist95->n > 0){
           cell_t* cell208 = sortedlist95->root;
           cell_t* tmp208  = NULL;
           while(cell208 != NULL) {
                tmp208 = cell208->next;
                free(cell208);
                cell208 = tmp208;
           }
           free(sortedlist95);
      }
      if(sortedlist92 != NULL && sortedlist92->n > 0){
           cell_t* cell209 = sortedlist92->root;
           cell_t* tmp209  = NULL;
           while(cell209 != NULL) {
                tmp209 = cell209->next;
                free(cell209);
                cell209 = tmp209;
           }
           free(sortedlist92);
      }
      if(sortedlist89 != NULL && sortedlist89->n > 0){
           cell_t* cell210 = sortedlist89->root;
           cell_t* tmp210  = NULL;
           while(cell210 != NULL) {
                tmp210 = cell210->next;
                free(cell210);
                cell210 = tmp210;
           }
           free(sortedlist89);
      }
   }
   unsigned int loop92 = 0;
   unsigned int loopLimit92 = (rand()%loopsFactor)/3 + 1;
   for(; loop92 < loopLimit92; loop92++) {
      if(sortedlist81 != NULL && sortedlist81->n > 0) {
           cell_t* cell211 = sortedlist81->root;
           if(sortedlist81->n == 0) {
               sortedlist81->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist81->root->val  = 99;
               sortedlist81->root->next = NULL;
               sortedlist81->n++;
           } else {
               while(cell211 != NULL)
               {
                   if(cell211->next == NULL && cell211->val < 99) {
                       cell211->next = (cell_t*)malloc(sizeof(cell_t));
                       cell211->next->next = NULL;
                       cell211->next->val  = 99;
                       sortedlist81->n++;
                       break;
                   } else if(99 < cell211->val) {
                       cell_t* tmp211 = cell211->next;
                       cell211->next = (cell_t*)malloc(sizeof(cell_t));
                       cell211->next->next = tmp211;
                       int tmp_val211 = cell211->val;
                       cell211->val = 99;
                       cell211->next->val = tmp_val211;
                       sortedlist81->n++;
                       break;
                   }
                   cell211 = cell211->next;
               }
           }
      }
      unsigned int loop93 = 0;
      unsigned int loopLimit93 = (rand()%loopsFactor)/4 + 1;
      for(; loop93 < loopLimit93; loop93++) {
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell212 = sortedlist81->root;
             if(cell212->val == 50)
             {
                 cell212 = cell212->next;
                 sortedlist81->n--;
             }else{
                 while(cell212->next != NULL && cell212->next->val != 50) cell212 = cell212->next;
                 if(cell212->next != NULL)
                 {
                     cell212 = cell212->next->next;
                     sortedlist81->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist81;
      sortedlist_t* sortedlist96 = func10(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop94 = 0;
      unsigned int loopLimit94 = (rand()%loopsFactor)/4 + 1;
      for(; loop94 < loopLimit94; loop94++) {
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell213 = sortedlist81->root;
             if(cell213->val == 71)
             {
                 cell213 = cell213->next;
                 sortedlist81->n--;
             }else{
                 while(cell213->next != NULL && cell213->next->val != 71) cell213 = cell213->next;
                 if(cell213->next != NULL)
                 {
                     cell213 = cell213->next->next;
                     sortedlist81->n--;
                 }
              }
         }
      }
      unsigned int loop95 = 0;
      unsigned int loopLimit95 = (rand()%loopsFactor)/4 + 1;
      for(; loop95 < loopLimit95; loop95++) {
         sortedlist_t* sortedlist97 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist97->n = 0;
         sortedlist97->root = NULL;
         sortedlist_t* sortedlist98 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist98->n = 0;
         sortedlist98->root = NULL;
         if(sortedlist96 != NULL && sortedlist96->n > 0){
              cell_t* cell214 = sortedlist96->root;
              while(cell214 != NULL && cell214->val != 31) cell214 = cell214->next;
              return cell214 != NULL ? sortedlist96 : NULL;
         }
         unsigned int loop96 = 0;
         unsigned int loopLimit96 = (rand()%loopsFactor)/5 + 1;
         for(; loop96 < loopLimit96; loop96++) {
            if(sortedlist96 != NULL && sortedlist96->n > 0){
                 cell_t* cell215 = sortedlist96->root;
                 while(cell215 != NULL && cell215->val != 30) cell215 = cell215->next;
                 return cell215 != NULL ? sortedlist96 : NULL;
            }
         }
         if(sortedlist98 != NULL && sortedlist98->n > 0){
              cell_t* cell216 = sortedlist98->root;
              cell_t* tmp216  = NULL;
              while(cell216 != NULL) {
                   tmp216 = cell216->next;
                   free(cell216);
                   cell216 = tmp216;
              }
              free(sortedlist98);
         }
         if(sortedlist97 != NULL && sortedlist97->n > 0){
              cell_t* cell217 = sortedlist97->root;
              cell_t* tmp217  = NULL;
              while(cell217 != NULL) {
                   tmp217 = cell217->next;
                   free(cell217);
                   cell217 = tmp217;
              }
              free(sortedlist97);
         }
      }
      sortedlist_t* sortedlist99 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist99->n = 0;
      sortedlist99->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop97 = 0;
         unsigned int loopLimit97 = (rand()%loopsFactor)/4 + 1;
         for(; loop97 < loopLimit97; loop97++) {
            sortedlist_t* sortedlist100 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist100->n = 0;
            sortedlist100->root = NULL;
            if(sortedlist96 != NULL && sortedlist96->n > 0){
                 cell_t* cell218 = sortedlist96->root;
                 while(cell218 != NULL && cell218->val != 94) cell218 = cell218->next;
                 return cell218 != NULL ? sortedlist96 : NULL;
            }
            unsigned int loop98 = 0;
            unsigned int loopLimit98 = (rand()%loopsFactor)/5 + 1;
            for(; loop98 < loopLimit98; loop98++) {
               if(sortedlist81 != NULL && sortedlist81->n > 0) {
                    cell_t* cell219 = sortedlist81->root;
                    if(sortedlist81->n == 0) {
                        sortedlist81->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist81->root->val  = 63;
                        sortedlist81->root->next = NULL;
                        sortedlist81->n++;
                    } else {
                        while(cell219 != NULL)
                        {
                            if(cell219->next == NULL && cell219->val < 63) {
                                cell219->next = (cell_t*)malloc(sizeof(cell_t));
                                cell219->next->next = NULL;
                                cell219->next->val  = 63;
                                sortedlist81->n++;
                                break;
                            } else if(63 < cell219->val) {
                                cell_t* tmp219 = cell219->next;
                                cell219->next = (cell_t*)malloc(sizeof(cell_t));
                                cell219->next->next = tmp219;
                                int tmp_val219 = cell219->val;
                                cell219->val = 63;
                                cell219->next->val = tmp_val219;
                                sortedlist81->n++;
                                break;
                            }
                            cell219 = cell219->next;
                        }
                    }
               }
            }
            if(sortedlist100 != NULL && sortedlist100->n > 0){
                 cell_t* cell220 = sortedlist100->root;
                 cell_t* tmp220  = NULL;
                 while(cell220 != NULL) {
                      tmp220 = cell220->next;
                      free(cell220);
                      cell220 = tmp220;
                 }
                 free(sortedlist100);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist81;
         params1.data[1] = sortedlist96;
         params1.data[2] = sortedlist99;
         sortedlist_t* sortedlist101 = func8(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist101 != NULL && sortedlist101->n > 0){
              cell_t* cell221 = sortedlist101->root;
              cell_t* tmp221  = NULL;
              while(cell221 != NULL) {
                   tmp221 = cell221->next;
                   free(cell221);
                   cell221 = tmp221;
              }
              free(sortedlist101);
         }
      }
      unsigned int loop99 = 0;
      unsigned int loopLimit99 = (rand()%loopsFactor)/4 + 1;
      for(; loop99 < loopLimit99; loop99++) {
         if(sortedlist96 != NULL && sortedlist96->n > 0) {
              cell_t* cell222 = sortedlist96->root;
              if(sortedlist96->n == 0) {
                  sortedlist96->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist96->root->val  = 81;
                  sortedlist96->root->next = NULL;
                  sortedlist96->n++;
              } else {
                  while(cell222 != NULL)
                  {
                      if(cell222->next == NULL && cell222->val < 81) {
                          cell222->next = (cell_t*)malloc(sizeof(cell_t));
                          cell222->next->next = NULL;
                          cell222->next->val  = 81;
                          sortedlist96->n++;
                          break;
                      } else if(81 < cell222->val) {
                          cell_t* tmp222 = cell222->next;
                          cell222->next = (cell_t*)malloc(sizeof(cell_t));
                          cell222->next->next = tmp222;
                          int tmp_val222 = cell222->val;
                          cell222->val = 81;
                          cell222->next->val = tmp_val222;
                          sortedlist96->n++;
                          break;
                      }
                      cell222 = cell222->next;
                  }
              }
         }
         if(sortedlist99 != NULL && sortedlist99->n > 0)
         {
             cell_t* cell223 = sortedlist99->root;
             if(cell223->val == 96)
             {
                 cell223 = cell223->next;
                 sortedlist99->n--;
             }else{
                 while(cell223->next != NULL && cell223->next->val != 96) cell223 = cell223->next;
                 if(cell223->next != NULL)
                 {
                     cell223 = cell223->next->next;
                     sortedlist99->n--;
                 }
              }
         }
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell224 = sortedlist81->root;
             if(cell224->val == 73)
             {
                 cell224 = cell224->next;
                 sortedlist81->n--;
             }else{
                 while(cell224->next != NULL && cell224->next->val != 73) cell224 = cell224->next;
                 if(cell224->next != NULL)
                 {
                     cell224 = cell224->next->next;
                     sortedlist81->n--;
                 }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist81;
      params1.data[1] = sortedlist96;
      params1.data[2] = sortedlist99;
      sortedlist_t* sortedlist102 = func6(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist102 != NULL && sortedlist102->n > 0){
           cell_t* cell225 = sortedlist102->root;
           cell_t* tmp225  = NULL;
           while(cell225 != NULL) {
                tmp225 = cell225->next;
                free(cell225);
                cell225 = tmp225;
           }
           free(sortedlist102);
      }
      if(sortedlist99 != NULL && sortedlist99->n > 0){
           cell_t* cell226 = sortedlist99->root;
           cell_t* tmp226  = NULL;
           while(cell226 != NULL) {
                tmp226 = cell226->next;
                free(cell226);
                cell226 = tmp226;
           }
           free(sortedlist99);
      }
      if(sortedlist96 != NULL && sortedlist96->n > 0){
           cell_t* cell227 = sortedlist96->root;
           cell_t* tmp227  = NULL;
           while(cell227 != NULL) {
                tmp227 = cell227->next;
                free(cell227);
                cell227 = tmp227;
           }
           free(sortedlist96);
      }
   }
   if(sortedlist81 != NULL && sortedlist81->n > 0){
        cell_t* cell228 = sortedlist81->root;
        while(cell228 != NULL && cell228->val != 68) cell228 = cell228->next;
        return cell228 != NULL ? sortedlist81 : NULL;
   }
   if(PATH0 & 16) {
      sortedlist_t* sortedlist103 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist103->n = 0;
      sortedlist103->root = NULL;
      if(PATH0 & 32) {
         unsigned int loop100 = 0;
         unsigned int loopLimit100 = (rand()%loopsFactor)/3 + 1;
         for(; loop100 < loopLimit100; loop100++) {
            sortedlist_t* sortedlist104 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist104->n = 0;
            sortedlist104->root = NULL;
            if(sortedlist104 != NULL && sortedlist104->n > 0){
                 cell_t* cell229 = sortedlist104->root;
                 while(cell229 != NULL && cell229->val != 95) cell229 = cell229->next;
                 return cell229 != NULL ? sortedlist104 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist81;
            params0.data[1] = sortedlist103;
            params0.data[2] = sortedlist104;
            sortedlist_t* sortedlist105 = func10(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop101 = 0;
            unsigned int loopLimit101 = (rand()%loopsFactor)/4 + 1;
            for(; loop101 < loopLimit101; loop101++) {
               if(sortedlist104 != NULL && sortedlist104->n > 0)
               {
                   cell_t* cell230 = sortedlist104->root;
                   if(cell230->val == 66)
                   {
                       cell230 = cell230->next;
                       sortedlist104->n--;
                   }else{
                       while(cell230->next != NULL && cell230->next->val != 66) cell230 = cell230->next;
                       if(cell230->next != NULL)
                       {
                           cell230 = cell230->next->next;
                           sortedlist104->n--;
                       }
                    }
               }
            }
            unsigned int loop102 = 0;
            unsigned int loopLimit102 = (rand()%loopsFactor)/4 + 1;
            for(; loop102 < loopLimit102; loop102++) {
               if(sortedlist81 != NULL && sortedlist81->n > 0) {
                    cell_t* cell231 = sortedlist81->root;
                    if(sortedlist81->n == 0) {
                        sortedlist81->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist81->root->val  = 40;
                        sortedlist81->root->next = NULL;
                        sortedlist81->n++;
                    } else {
                        while(cell231 != NULL)
                        {
                            if(cell231->next == NULL && cell231->val < 40) {
                                cell231->next = (cell_t*)malloc(sizeof(cell_t));
                                cell231->next->next = NULL;
                                cell231->next->val  = 40;
                                sortedlist81->n++;
                                break;
                            } else if(40 < cell231->val) {
                                cell_t* tmp231 = cell231->next;
                                cell231->next = (cell_t*)malloc(sizeof(cell_t));
                                cell231->next->next = tmp231;
                                int tmp_val231 = cell231->val;
                                cell231->val = 40;
                                cell231->next->val = tmp_val231;
                                sortedlist81->n++;
                                break;
                            }
                            cell231 = cell231->next;
                        }
                    }
               }
            }
            if(sortedlist105 != NULL && sortedlist105->n > 0){
                 cell_t* cell232 = sortedlist105->root;
                 cell_t* tmp232  = NULL;
                 while(cell232 != NULL) {
                      tmp232 = cell232->next;
                      free(cell232);
                      cell232 = tmp232;
                 }
                 free(sortedlist105);
            }
            if(sortedlist104 != NULL && sortedlist104->n > 0){
                 cell_t* cell233 = sortedlist104->root;
                 cell_t* tmp233  = NULL;
                 while(cell233 != NULL) {
                      tmp233 = cell233->next;
                      free(cell233);
                      cell233 = tmp233;
                 }
                 free(sortedlist104);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist81;
         params0.data[1] = sortedlist103;
         sortedlist_t* sortedlist106 = func7(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist106 != NULL && sortedlist106->n > 0){
              cell_t* cell234 = sortedlist106->root;
              cell_t* tmp234  = NULL;
              while(cell234 != NULL) {
                   tmp234 = cell234->next;
                   free(cell234);
                   cell234 = tmp234;
              }
              free(sortedlist106);
         }
      }
      unsigned int loop103 = 0;
      unsigned int loopLimit103 = (rand()%loopsFactor)/3 + 1;
      for(; loop103 < loopLimit103; loop103++) {
         if(sortedlist81 != NULL && sortedlist81->n > 0) {
              cell_t* cell235 = sortedlist81->root;
              if(sortedlist81->n == 0) {
                  sortedlist81->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist81->root->val  = 84;
                  sortedlist81->root->next = NULL;
                  sortedlist81->n++;
              } else {
                  while(cell235 != NULL)
                  {
                      if(cell235->next == NULL && cell235->val < 84) {
                          cell235->next = (cell_t*)malloc(sizeof(cell_t));
                          cell235->next->next = NULL;
                          cell235->next->val  = 84;
                          sortedlist81->n++;
                          break;
                      } else if(84 < cell235->val) {
                          cell_t* tmp235 = cell235->next;
                          cell235->next = (cell_t*)malloc(sizeof(cell_t));
                          cell235->next->next = tmp235;
                          int tmp_val235 = cell235->val;
                          cell235->val = 84;
                          cell235->next->val = tmp_val235;
                          sortedlist81->n++;
                          break;
                      }
                      cell235 = cell235->next;
                  }
              }
         }
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell236 = sortedlist81->root;
             if(cell236->val == 42)
             {
                 cell236 = cell236->next;
                 sortedlist81->n--;
             }else{
                 while(cell236->next != NULL && cell236->next->val != 42) cell236 = cell236->next;
                 if(cell236->next != NULL)
                 {
                     cell236 = cell236->next->next;
                     sortedlist81->n--;
                 }
              }
         }
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell237 = sortedlist81->root;
             if(cell237->val == 7)
             {
                 cell237 = cell237->next;
                 sortedlist81->n--;
             }else{
                 while(cell237->next != NULL && cell237->next->val != 7) cell237 = cell237->next;
                 if(cell237->next != NULL)
                 {
                     cell237 = cell237->next->next;
                     sortedlist81->n--;
                 }
              }
         }
      }
      if(sortedlist103 != NULL && sortedlist103->n > 0){
           cell_t* cell238 = sortedlist103->root;
           cell_t* tmp238  = NULL;
           while(cell238 != NULL) {
                tmp238 = cell238->next;
                free(cell238);
                cell238 = tmp238;
           }
           free(sortedlist103);
      }
   }
   else {
      sortedlist_t* sortedlist107 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist107->n = 0;
      sortedlist107->root = NULL;
      if(PATH0 & 64) {
         unsigned int loop104 = 0;
         unsigned int loopLimit104 = (rand()%loopsFactor)/3 + 1;
         for(; loop104 < loopLimit104; loop104++) {
            sortedlist_t* sortedlist108 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist108->n = 0;
            sortedlist108->root = NULL;
            if(sortedlist81 != NULL && sortedlist81->n > 0){
                 cell_t* cell239 = sortedlist81->root;
                 while(cell239 != NULL && cell239->val != 56) cell239 = cell239->next;
                 return cell239 != NULL ? sortedlist81 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist81;
            params0.data[1] = sortedlist107;
            params0.data[2] = sortedlist108;
            sortedlist_t* sortedlist109 = func10(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop105 = 0;
            unsigned int loopLimit105 = (rand()%loopsFactor)/4 + 1;
            for(; loop105 < loopLimit105; loop105++) {
               if(sortedlist109 != NULL && sortedlist109->n > 0)
               {
                   cell_t* cell240 = sortedlist109->root;
                   if(cell240->val == 18)
                   {
                       cell240 = cell240->next;
                       sortedlist109->n--;
                   }else{
                       while(cell240->next != NULL && cell240->next->val != 18) cell240 = cell240->next;
                       if(cell240->next != NULL)
                       {
                           cell240 = cell240->next->next;
                           sortedlist109->n--;
                       }
                    }
               }
            }
            unsigned int loop106 = 0;
            unsigned int loopLimit106 = (rand()%loopsFactor)/4 + 1;
            for(; loop106 < loopLimit106; loop106++) {
               if(sortedlist109 != NULL && sortedlist109->n > 0) {
                    cell_t* cell241 = sortedlist109->root;
                    if(sortedlist109->n == 0) {
                        sortedlist109->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist109->root->val  = 12;
                        sortedlist109->root->next = NULL;
                        sortedlist109->n++;
                    } else {
                        while(cell241 != NULL)
                        {
                            if(cell241->next == NULL && cell241->val < 12) {
                                cell241->next = (cell_t*)malloc(sizeof(cell_t));
                                cell241->next->next = NULL;
                                cell241->next->val  = 12;
                                sortedlist109->n++;
                                break;
                            } else if(12 < cell241->val) {
                                cell_t* tmp241 = cell241->next;
                                cell241->next = (cell_t*)malloc(sizeof(cell_t));
                                cell241->next->next = tmp241;
                                int tmp_val241 = cell241->val;
                                cell241->val = 12;
                                cell241->next->val = tmp_val241;
                                sortedlist109->n++;
                                break;
                            }
                            cell241 = cell241->next;
                        }
                    }
               }
            }
            if(sortedlist109 != NULL && sortedlist109->n > 0){
                 cell_t* cell242 = sortedlist109->root;
                 cell_t* tmp242  = NULL;
                 while(cell242 != NULL) {
                      tmp242 = cell242->next;
                      free(cell242);
                      cell242 = tmp242;
                 }
                 free(sortedlist109);
            }
            if(sortedlist108 != NULL && sortedlist108->n > 0){
                 cell_t* cell243 = sortedlist108->root;
                 cell_t* tmp243  = NULL;
                 while(cell243 != NULL) {
                      tmp243 = cell243->next;
                      free(cell243);
                      cell243 = tmp243;
                 }
                 free(sortedlist108);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist81;
         params0.data[1] = sortedlist107;
         sortedlist_t* sortedlist110 = func7(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist110 != NULL && sortedlist110->n > 0){
              cell_t* cell244 = sortedlist110->root;
              cell_t* tmp244  = NULL;
              while(cell244 != NULL) {
                   tmp244 = cell244->next;
                   free(cell244);
                   cell244 = tmp244;
              }
              free(sortedlist110);
         }
      }
      unsigned int loop107 = 0;
      unsigned int loopLimit107 = (rand()%loopsFactor)/3 + 1;
      for(; loop107 < loopLimit107; loop107++) {
         if(sortedlist81 != NULL && sortedlist81->n > 0) {
              cell_t* cell245 = sortedlist81->root;
              if(sortedlist81->n == 0) {
                  sortedlist81->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist81->root->val  = 72;
                  sortedlist81->root->next = NULL;
                  sortedlist81->n++;
              } else {
                  while(cell245 != NULL)
                  {
                      if(cell245->next == NULL && cell245->val < 72) {
                          cell245->next = (cell_t*)malloc(sizeof(cell_t));
                          cell245->next->next = NULL;
                          cell245->next->val  = 72;
                          sortedlist81->n++;
                          break;
                      } else if(72 < cell245->val) {
                          cell_t* tmp245 = cell245->next;
                          cell245->next = (cell_t*)malloc(sizeof(cell_t));
                          cell245->next->next = tmp245;
                          int tmp_val245 = cell245->val;
                          cell245->val = 72;
                          cell245->next->val = tmp_val245;
                          sortedlist81->n++;
                          break;
                      }
                      cell245 = cell245->next;
                  }
              }
         }
         if(sortedlist107 != NULL && sortedlist107->n > 0)
         {
             cell_t* cell246 = sortedlist107->root;
             if(cell246->val == 9)
             {
                 cell246 = cell246->next;
                 sortedlist107->n--;
             }else{
                 while(cell246->next != NULL && cell246->next->val != 9) cell246 = cell246->next;
                 if(cell246->next != NULL)
                 {
                     cell246 = cell246->next->next;
                     sortedlist107->n--;
                 }
              }
         }
         if(sortedlist81 != NULL && sortedlist81->n > 0)
         {
             cell_t* cell247 = sortedlist81->root;
             if(cell247->val == 10)
             {
                 cell247 = cell247->next;
                 sortedlist81->n--;
             }else{
                 while(cell247->next != NULL && cell247->next->val != 10) cell247 = cell247->next;
                 if(cell247->next != NULL)
                 {
                     cell247 = cell247->next->next;
                     sortedlist81->n--;
                 }
              }
         }
      }
      if(sortedlist107 != NULL && sortedlist107->n > 0){
           cell_t* cell248 = sortedlist107->root;
           cell_t* tmp248  = NULL;
           while(cell248 != NULL) {
                tmp248 = cell248->next;
                free(cell248);
                cell248 = tmp248;
           }
           free(sortedlist107);
      }
   }
   if(sortedlist81 != NULL && sortedlist81->n > 0)
   {
       cell_t* cell249 = sortedlist81->root;
       if(cell249->val == 87)
       {
           cell249 = cell249->next;
           sortedlist81->n--;
       }else{
           while(cell249->next != NULL && cell249->next->val != 87) cell249 = cell249->next;
           if(cell249->next != NULL)
           {
               cell249 = cell249->next->next;
               sortedlist81->n--;
           }
        }
   }
   if(sortedlist81 != NULL && sortedlist81->n > 0){
        cell_t* cell250 = sortedlist81->root;
        while(cell250 != NULL && cell250->val != 1) cell250 = cell250->next;
        return cell250 != NULL ? sortedlist81 : NULL;
   }
   return sortedlist81;
}

