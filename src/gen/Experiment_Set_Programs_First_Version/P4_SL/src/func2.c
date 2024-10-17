#include "P4_SL.h" 
sortedlist_t* func2(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist87 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist87->n = 0;
   sortedlist87->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop85 = 0;
      unsigned int loopLimit85 = (rand()%loopsFactor)/3 + 1;
      for(; loop85 < loopLimit85; loop85++) {
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell193 = sortedlist87->root;
             if(cell193->val == 30)
             {
                 cell193 = cell193->next;
                 sortedlist87->n--;
             }else{
                 while(cell193->next != NULL && cell193->next->val != 30) cell193 = cell193->next;
                 if(cell193->next != NULL)
                 {
                     cell193 = cell193->next->next;
                     sortedlist87->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist87;
      sortedlist_t* sortedlist88 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop86 = 0;
      unsigned int loopLimit86 = (rand()%loopsFactor)/3 + 1;
      for(; loop86 < loopLimit86; loop86++) {
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell194 = sortedlist87->root;
             if(cell194->val == 5)
             {
                 cell194 = cell194->next;
                 sortedlist87->n--;
             }else{
                 while(cell194->next != NULL && cell194->next->val != 5) cell194 = cell194->next;
                 if(cell194->next != NULL)
                 {
                     cell194 = cell194->next->next;
                     sortedlist87->n--;
                 }
              }
         }
      }
      unsigned int loop87 = 0;
      unsigned int loopLimit87 = (rand()%loopsFactor)/3 + 1;
      for(; loop87 < loopLimit87; loop87++) {
         sortedlist_t* sortedlist89 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist89->n = 0;
         sortedlist89->root = NULL;
         sortedlist_t* sortedlist90 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist90->n = 0;
         sortedlist90->root = NULL;
         if(sortedlist87 != NULL && sortedlist87->n > 0){
              cell_t* cell195 = sortedlist87->root;
              while(cell195 != NULL && cell195->val != 36) cell195 = cell195->next;
              return cell195 != NULL ? sortedlist87 : NULL;
         }
         unsigned int loop88 = 0;
         unsigned int loopLimit88 = (rand()%loopsFactor)/4 + 1;
         for(; loop88 < loopLimit88; loop88++) {
            if(sortedlist87 != NULL && sortedlist87->n > 0){
                 cell_t* cell196 = sortedlist87->root;
                 while(cell196 != NULL && cell196->val != 26) cell196 = cell196->next;
                 return cell196 != NULL ? sortedlist87 : NULL;
            }
         }
         if(sortedlist90 != NULL && sortedlist90->n > 0){
              cell_t* cell197 = sortedlist90->root;
              cell_t* tmp197  = NULL;
              while(cell197 != NULL) {
                   tmp197 = cell197->next;
                   free(cell197);
                   cell197 = tmp197;
              }
              free(sortedlist90);
         }
         if(sortedlist89 != NULL && sortedlist89->n > 0){
              cell_t* cell198 = sortedlist89->root;
              cell_t* tmp198  = NULL;
              while(cell198 != NULL) {
                   tmp198 = cell198->next;
                   free(cell198);
                   cell198 = tmp198;
              }
              free(sortedlist89);
         }
      }
      sortedlist_t* sortedlist91 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist91->n = 0;
      sortedlist91->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop89 = 0;
         unsigned int loopLimit89 = (rand()%loopsFactor)/3 + 1;
         for(; loop89 < loopLimit89; loop89++) {
            sortedlist_t* sortedlist92 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist92->n = 0;
            sortedlist92->root = NULL;
            if(sortedlist91 != NULL && sortedlist91->n > 0){
                 cell_t* cell199 = sortedlist91->root;
                 while(cell199 != NULL && cell199->val != 65) cell199 = cell199->next;
                 return cell199 != NULL ? sortedlist91 : NULL;
            }
            unsigned int loop90 = 0;
            unsigned int loopLimit90 = (rand()%loopsFactor)/4 + 1;
            for(; loop90 < loopLimit90; loop90++) {
               if(sortedlist87 != NULL && sortedlist87->n > 0) {
                    cell_t* cell200 = sortedlist87->root;
                    if(sortedlist87->n == 0) {
                        sortedlist87->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist87->root->val  = 16;
                        sortedlist87->root->next = NULL;
                        sortedlist87->n++;
                    } else {
                        while(cell200 != NULL)
                        {
                            if(cell200->next == NULL && cell200->val < 16) {
                                cell200->next = (cell_t*)malloc(sizeof(cell_t));
                                cell200->next->next = NULL;
                                cell200->next->val  = 16;
                                sortedlist87->n++;
                                break;
                            } else if(16 < cell200->val) {
                                cell_t* tmp200 = cell200->next;
                                cell200->next = (cell_t*)malloc(sizeof(cell_t));
                                cell200->next->next = tmp200;
                                int tmp_val200 = cell200->val;
                                cell200->val = 16;
                                cell200->next->val = tmp_val200;
                                sortedlist87->n++;
                                break;
                            }
                            cell200 = cell200->next;
                        }
                    }
               }
            }
            if(sortedlist92 != NULL && sortedlist92->n > 0){
                 cell_t* cell201 = sortedlist92->root;
                 cell_t* tmp201  = NULL;
                 while(cell201 != NULL) {
                      tmp201 = cell201->next;
                      free(cell201);
                      cell201 = tmp201;
                 }
                 free(sortedlist92);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist87;
         params1.data[1] = sortedlist88;
         params1.data[2] = sortedlist91;
         sortedlist_t* sortedlist93 = func6(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist93 != NULL && sortedlist93->n > 0){
              cell_t* cell202 = sortedlist93->root;
              cell_t* tmp202  = NULL;
              while(cell202 != NULL) {
                   tmp202 = cell202->next;
                   free(cell202);
                   cell202 = tmp202;
              }
              free(sortedlist93);
         }
      }
      unsigned int loop91 = 0;
      unsigned int loopLimit91 = (rand()%loopsFactor)/3 + 1;
      for(; loop91 < loopLimit91; loop91++) {
         if(sortedlist87 != NULL && sortedlist87->n > 0) {
              cell_t* cell203 = sortedlist87->root;
              if(sortedlist87->n == 0) {
                  sortedlist87->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist87->root->val  = 58;
                  sortedlist87->root->next = NULL;
                  sortedlist87->n++;
              } else {
                  while(cell203 != NULL)
                  {
                      if(cell203->next == NULL && cell203->val < 58) {
                          cell203->next = (cell_t*)malloc(sizeof(cell_t));
                          cell203->next->next = NULL;
                          cell203->next->val  = 58;
                          sortedlist87->n++;
                          break;
                      } else if(58 < cell203->val) {
                          cell_t* tmp203 = cell203->next;
                          cell203->next = (cell_t*)malloc(sizeof(cell_t));
                          cell203->next->next = tmp203;
                          int tmp_val203 = cell203->val;
                          cell203->val = 58;
                          cell203->next->val = tmp_val203;
                          sortedlist87->n++;
                          break;
                      }
                      cell203 = cell203->next;
                  }
              }
         }
         if(sortedlist91 != NULL && sortedlist91->n > 0)
         {
             cell_t* cell204 = sortedlist91->root;
             if(cell204->val == 37)
             {
                 cell204 = cell204->next;
                 sortedlist91->n--;
             }else{
                 while(cell204->next != NULL && cell204->next->val != 37) cell204 = cell204->next;
                 if(cell204->next != NULL)
                 {
                     cell204 = cell204->next->next;
                     sortedlist91->n--;
                 }
              }
         }
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell205 = sortedlist87->root;
             if(cell205->val == 24)
             {
                 cell205 = cell205->next;
                 sortedlist87->n--;
             }else{
                 while(cell205->next != NULL && cell205->next->val != 24) cell205 = cell205->next;
                 if(cell205->next != NULL)
                 {
                     cell205 = cell205->next->next;
                     sortedlist87->n--;
                 }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist87;
      params1.data[1] = sortedlist88;
      params1.data[2] = sortedlist91;
      sortedlist_t* sortedlist94 = func4(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist94 != NULL && sortedlist94->n > 0){
           cell_t* cell206 = sortedlist94->root;
           cell_t* tmp206  = NULL;
           while(cell206 != NULL) {
                tmp206 = cell206->next;
                free(cell206);
                cell206 = tmp206;
           }
           free(sortedlist94);
      }
      if(sortedlist91 != NULL && sortedlist91->n > 0){
           cell_t* cell207 = sortedlist91->root;
           cell_t* tmp207  = NULL;
           while(cell207 != NULL) {
                tmp207 = cell207->next;
                free(cell207);
                cell207 = tmp207;
           }
           free(sortedlist91);
      }
      if(sortedlist88 != NULL && sortedlist88->n > 0){
           cell_t* cell208 = sortedlist88->root;
           cell_t* tmp208  = NULL;
           while(cell208 != NULL) {
                tmp208 = cell208->next;
                free(cell208);
                cell208 = tmp208;
           }
           free(sortedlist88);
      }
   }
   else {
      unsigned int loop92 = 0;
      unsigned int loopLimit92 = (rand()%loopsFactor)/3 + 1;
      for(; loop92 < loopLimit92; loop92++) {
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell209 = sortedlist87->root;
             if(cell209->val == 36)
             {
                 cell209 = cell209->next;
                 sortedlist87->n--;
             }else{
                 while(cell209->next != NULL && cell209->next->val != 36) cell209 = cell209->next;
                 if(cell209->next != NULL)
                 {
                     cell209 = cell209->next->next;
                     sortedlist87->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist87;
      sortedlist_t* sortedlist95 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop93 = 0;
      unsigned int loopLimit93 = (rand()%loopsFactor)/3 + 1;
      for(; loop93 < loopLimit93; loop93++) {
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell210 = sortedlist87->root;
             if(cell210->val == 99)
             {
                 cell210 = cell210->next;
                 sortedlist87->n--;
             }else{
                 while(cell210->next != NULL && cell210->next->val != 99) cell210 = cell210->next;
                 if(cell210->next != NULL)
                 {
                     cell210 = cell210->next->next;
                     sortedlist87->n--;
                 }
              }
         }
      }
      unsigned int loop94 = 0;
      unsigned int loopLimit94 = (rand()%loopsFactor)/3 + 1;
      for(; loop94 < loopLimit94; loop94++) {
         sortedlist_t* sortedlist96 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist96->n = 0;
         sortedlist96->root = NULL;
         sortedlist_t* sortedlist97 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist97->n = 0;
         sortedlist97->root = NULL;
         if(sortedlist97 != NULL && sortedlist97->n > 0){
              cell_t* cell211 = sortedlist97->root;
              while(cell211 != NULL && cell211->val != 50) cell211 = cell211->next;
              return cell211 != NULL ? sortedlist97 : NULL;
         }
         unsigned int loop95 = 0;
         unsigned int loopLimit95 = (rand()%loopsFactor)/4 + 1;
         for(; loop95 < loopLimit95; loop95++) {
            if(sortedlist87 != NULL && sortedlist87->n > 0){
                 cell_t* cell212 = sortedlist87->root;
                 while(cell212 != NULL && cell212->val != 71) cell212 = cell212->next;
                 return cell212 != NULL ? sortedlist87 : NULL;
            }
         }
         if(sortedlist97 != NULL && sortedlist97->n > 0){
              cell_t* cell213 = sortedlist97->root;
              cell_t* tmp213  = NULL;
              while(cell213 != NULL) {
                   tmp213 = cell213->next;
                   free(cell213);
                   cell213 = tmp213;
              }
              free(sortedlist97);
         }
         if(sortedlist96 != NULL && sortedlist96->n > 0){
              cell_t* cell214 = sortedlist96->root;
              cell_t* tmp214  = NULL;
              while(cell214 != NULL) {
                   tmp214 = cell214->next;
                   free(cell214);
                   cell214 = tmp214;
              }
              free(sortedlist96);
         }
      }
      sortedlist_t* sortedlist98 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist98->n = 0;
      sortedlist98->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop96 = 0;
         unsigned int loopLimit96 = (rand()%loopsFactor)/3 + 1;
         for(; loop96 < loopLimit96; loop96++) {
            sortedlist_t* sortedlist99 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist99->n = 0;
            sortedlist99->root = NULL;
            if(sortedlist95 != NULL && sortedlist95->n > 0){
                 cell_t* cell215 = sortedlist95->root;
                 while(cell215 != NULL && cell215->val != 31) cell215 = cell215->next;
                 return cell215 != NULL ? sortedlist95 : NULL;
            }
            unsigned int loop97 = 0;
            unsigned int loopLimit97 = (rand()%loopsFactor)/4 + 1;
            for(; loop97 < loopLimit97; loop97++) {
               if(sortedlist95 != NULL && sortedlist95->n > 0) {
                    cell_t* cell216 = sortedlist95->root;
                    if(sortedlist95->n == 0) {
                        sortedlist95->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist95->root->val  = 30;
                        sortedlist95->root->next = NULL;
                        sortedlist95->n++;
                    } else {
                        while(cell216 != NULL)
                        {
                            if(cell216->next == NULL && cell216->val < 30) {
                                cell216->next = (cell_t*)malloc(sizeof(cell_t));
                                cell216->next->next = NULL;
                                cell216->next->val  = 30;
                                sortedlist95->n++;
                                break;
                            } else if(30 < cell216->val) {
                                cell_t* tmp216 = cell216->next;
                                cell216->next = (cell_t*)malloc(sizeof(cell_t));
                                cell216->next->next = tmp216;
                                int tmp_val216 = cell216->val;
                                cell216->val = 30;
                                cell216->next->val = tmp_val216;
                                sortedlist95->n++;
                                break;
                            }
                            cell216 = cell216->next;
                        }
                    }
               }
            }
            if(sortedlist99 != NULL && sortedlist99->n > 0){
                 cell_t* cell217 = sortedlist99->root;
                 cell_t* tmp217  = NULL;
                 while(cell217 != NULL) {
                      tmp217 = cell217->next;
                      free(cell217);
                      cell217 = tmp217;
                 }
                 free(sortedlist99);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist87;
         params1.data[1] = sortedlist95;
         params1.data[2] = sortedlist98;
         sortedlist_t* sortedlist100 = func6(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist100 != NULL && sortedlist100->n > 0){
              cell_t* cell218 = sortedlist100->root;
              cell_t* tmp218  = NULL;
              while(cell218 != NULL) {
                   tmp218 = cell218->next;
                   free(cell218);
                   cell218 = tmp218;
              }
              free(sortedlist100);
         }
      }
      unsigned int loop98 = 0;
      unsigned int loopLimit98 = (rand()%loopsFactor)/3 + 1;
      for(; loop98 < loopLimit98; loop98++) {
         if(sortedlist95 != NULL && sortedlist95->n > 0) {
              cell_t* cell219 = sortedlist95->root;
              if(sortedlist95->n == 0) {
                  sortedlist95->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist95->root->val  = 94;
                  sortedlist95->root->next = NULL;
                  sortedlist95->n++;
              } else {
                  while(cell219 != NULL)
                  {
                      if(cell219->next == NULL && cell219->val < 94) {
                          cell219->next = (cell_t*)malloc(sizeof(cell_t));
                          cell219->next->next = NULL;
                          cell219->next->val  = 94;
                          sortedlist95->n++;
                          break;
                      } else if(94 < cell219->val) {
                          cell_t* tmp219 = cell219->next;
                          cell219->next = (cell_t*)malloc(sizeof(cell_t));
                          cell219->next->next = tmp219;
                          int tmp_val219 = cell219->val;
                          cell219->val = 94;
                          cell219->next->val = tmp_val219;
                          sortedlist95->n++;
                          break;
                      }
                      cell219 = cell219->next;
                  }
              }
         }
         if(sortedlist95 != NULL && sortedlist95->n > 0)
         {
             cell_t* cell220 = sortedlist95->root;
             if(cell220->val == 63)
             {
                 cell220 = cell220->next;
                 sortedlist95->n--;
             }else{
                 while(cell220->next != NULL && cell220->next->val != 63) cell220 = cell220->next;
                 if(cell220->next != NULL)
                 {
                     cell220 = cell220->next->next;
                     sortedlist95->n--;
                 }
              }
         }
         if(sortedlist95 != NULL && sortedlist95->n > 0)
         {
             cell_t* cell221 = sortedlist95->root;
             if(cell221->val == 81)
             {
                 cell221 = cell221->next;
                 sortedlist95->n--;
             }else{
                 while(cell221->next != NULL && cell221->next->val != 81) cell221 = cell221->next;
                 if(cell221->next != NULL)
                 {
                     cell221 = cell221->next->next;
                     sortedlist95->n--;
                 }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist87;
      params1.data[1] = sortedlist95;
      params1.data[2] = sortedlist98;
      sortedlist_t* sortedlist101 = func4(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist101 != NULL && sortedlist101->n > 0){
           cell_t* cell222 = sortedlist101->root;
           cell_t* tmp222  = NULL;
           while(cell222 != NULL) {
                tmp222 = cell222->next;
                free(cell222);
                cell222 = tmp222;
           }
           free(sortedlist101);
      }
      if(sortedlist98 != NULL && sortedlist98->n > 0){
           cell_t* cell223 = sortedlist98->root;
           cell_t* tmp223  = NULL;
           while(cell223 != NULL) {
                tmp223 = cell223->next;
                free(cell223);
                cell223 = tmp223;
           }
           free(sortedlist98);
      }
      if(sortedlist95 != NULL && sortedlist95->n > 0){
           cell_t* cell224 = sortedlist95->root;
           cell_t* tmp224  = NULL;
           while(cell224 != NULL) {
                tmp224 = cell224->next;
                free(cell224);
                cell224 = tmp224;
           }
           free(sortedlist95);
      }
   }
   unsigned int loop99 = 0;
   unsigned int loopLimit99 = (rand()%loopsFactor)/3 + 1;
   for(; loop99 < loopLimit99; loop99++) {
      if(sortedlist87 != NULL && sortedlist87->n > 0) {
           cell_t* cell225 = sortedlist87->root;
           if(sortedlist87->n == 0) {
               sortedlist87->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist87->root->val  = 96;
               sortedlist87->root->next = NULL;
               sortedlist87->n++;
           } else {
               while(cell225 != NULL)
               {
                   if(cell225->next == NULL && cell225->val < 96) {
                       cell225->next = (cell_t*)malloc(sizeof(cell_t));
                       cell225->next->next = NULL;
                       cell225->next->val  = 96;
                       sortedlist87->n++;
                       break;
                   } else if(96 < cell225->val) {
                       cell_t* tmp225 = cell225->next;
                       cell225->next = (cell_t*)malloc(sizeof(cell_t));
                       cell225->next->next = tmp225;
                       int tmp_val225 = cell225->val;
                       cell225->val = 96;
                       cell225->next->val = tmp_val225;
                       sortedlist87->n++;
                       break;
                   }
                   cell225 = cell225->next;
               }
           }
      }
      unsigned int loop100 = 0;
      unsigned int loopLimit100 = (rand()%loopsFactor)/4 + 1;
      for(; loop100 < loopLimit100; loop100++) {
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell226 = sortedlist87->root;
             if(cell226->val == 73)
             {
                 cell226 = cell226->next;
                 sortedlist87->n--;
             }else{
                 while(cell226->next != NULL && cell226->next->val != 73) cell226 = cell226->next;
                 if(cell226->next != NULL)
                 {
                     cell226 = cell226->next->next;
                     sortedlist87->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist87;
      sortedlist_t* sortedlist102 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop101 = 0;
      unsigned int loopLimit101 = (rand()%loopsFactor)/4 + 1;
      for(; loop101 < loopLimit101; loop101++) {
         if(sortedlist102 != NULL && sortedlist102->n > 0)
         {
             cell_t* cell227 = sortedlist102->root;
             if(cell227->val == 68)
             {
                 cell227 = cell227->next;
                 sortedlist102->n--;
             }else{
                 while(cell227->next != NULL && cell227->next->val != 68) cell227 = cell227->next;
                 if(cell227->next != NULL)
                 {
                     cell227 = cell227->next->next;
                     sortedlist102->n--;
                 }
              }
         }
      }
      unsigned int loop102 = 0;
      unsigned int loopLimit102 = (rand()%loopsFactor)/4 + 1;
      for(; loop102 < loopLimit102; loop102++) {
         sortedlist_t* sortedlist103 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist103->n = 0;
         sortedlist103->root = NULL;
         sortedlist_t* sortedlist104 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist104->n = 0;
         sortedlist104->root = NULL;
         if(sortedlist103 != NULL && sortedlist103->n > 0){
              cell_t* cell228 = sortedlist103->root;
              while(cell228 != NULL && cell228->val != 95) cell228 = cell228->next;
              return cell228 != NULL ? sortedlist103 : NULL;
         }
         unsigned int loop103 = 0;
         unsigned int loopLimit103 = (rand()%loopsFactor)/5 + 1;
         for(; loop103 < loopLimit103; loop103++) {
            if(sortedlist103 != NULL && sortedlist103->n > 0){
                 cell_t* cell229 = sortedlist103->root;
                 while(cell229 != NULL && cell229->val != 66) cell229 = cell229->next;
                 return cell229 != NULL ? sortedlist103 : NULL;
            }
         }
         if(sortedlist104 != NULL && sortedlist104->n > 0){
              cell_t* cell230 = sortedlist104->root;
              cell_t* tmp230  = NULL;
              while(cell230 != NULL) {
                   tmp230 = cell230->next;
                   free(cell230);
                   cell230 = tmp230;
              }
              free(sortedlist104);
         }
         if(sortedlist103 != NULL && sortedlist103->n > 0){
              cell_t* cell231 = sortedlist103->root;
              cell_t* tmp231  = NULL;
              while(cell231 != NULL) {
                   tmp231 = cell231->next;
                   free(cell231);
                   cell231 = tmp231;
              }
              free(sortedlist103);
         }
      }
      sortedlist_t* sortedlist105 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist105->n = 0;
      sortedlist105->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop104 = 0;
         unsigned int loopLimit104 = (rand()%loopsFactor)/4 + 1;
         for(; loop104 < loopLimit104; loop104++) {
            sortedlist_t* sortedlist106 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist106->n = 0;
            sortedlist106->root = NULL;
            if(sortedlist87 != NULL && sortedlist87->n > 0){
                 cell_t* cell232 = sortedlist87->root;
                 while(cell232 != NULL && cell232->val != 40) cell232 = cell232->next;
                 return cell232 != NULL ? sortedlist87 : NULL;
            }
            unsigned int loop105 = 0;
            unsigned int loopLimit105 = (rand()%loopsFactor)/5 + 1;
            for(; loop105 < loopLimit105; loop105++) {
               if(sortedlist105 != NULL && sortedlist105->n > 0) {
                    cell_t* cell233 = sortedlist105->root;
                    if(sortedlist105->n == 0) {
                        sortedlist105->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist105->root->val  = 84;
                        sortedlist105->root->next = NULL;
                        sortedlist105->n++;
                    } else {
                        while(cell233 != NULL)
                        {
                            if(cell233->next == NULL && cell233->val < 84) {
                                cell233->next = (cell_t*)malloc(sizeof(cell_t));
                                cell233->next->next = NULL;
                                cell233->next->val  = 84;
                                sortedlist105->n++;
                                break;
                            } else if(84 < cell233->val) {
                                cell_t* tmp233 = cell233->next;
                                cell233->next = (cell_t*)malloc(sizeof(cell_t));
                                cell233->next->next = tmp233;
                                int tmp_val233 = cell233->val;
                                cell233->val = 84;
                                cell233->next->val = tmp_val233;
                                sortedlist105->n++;
                                break;
                            }
                            cell233 = cell233->next;
                        }
                    }
               }
            }
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
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist87;
         params1.data[1] = sortedlist102;
         params1.data[2] = sortedlist105;
         sortedlist_t* sortedlist107 = func6(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist107 != NULL && sortedlist107->n > 0){
              cell_t* cell235 = sortedlist107->root;
              cell_t* tmp235  = NULL;
              while(cell235 != NULL) {
                   tmp235 = cell235->next;
                   free(cell235);
                   cell235 = tmp235;
              }
              free(sortedlist107);
         }
      }
      unsigned int loop106 = 0;
      unsigned int loopLimit106 = (rand()%loopsFactor)/4 + 1;
      for(; loop106 < loopLimit106; loop106++) {
         if(sortedlist87 != NULL && sortedlist87->n > 0) {
              cell_t* cell236 = sortedlist87->root;
              if(sortedlist87->n == 0) {
                  sortedlist87->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist87->root->val  = 42;
                  sortedlist87->root->next = NULL;
                  sortedlist87->n++;
              } else {
                  while(cell236 != NULL)
                  {
                      if(cell236->next == NULL && cell236->val < 42) {
                          cell236->next = (cell_t*)malloc(sizeof(cell_t));
                          cell236->next->next = NULL;
                          cell236->next->val  = 42;
                          sortedlist87->n++;
                          break;
                      } else if(42 < cell236->val) {
                          cell_t* tmp236 = cell236->next;
                          cell236->next = (cell_t*)malloc(sizeof(cell_t));
                          cell236->next->next = tmp236;
                          int tmp_val236 = cell236->val;
                          cell236->val = 42;
                          cell236->next->val = tmp_val236;
                          sortedlist87->n++;
                          break;
                      }
                      cell236 = cell236->next;
                  }
              }
         }
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell237 = sortedlist87->root;
             if(cell237->val == 7)
             {
                 cell237 = cell237->next;
                 sortedlist87->n--;
             }else{
                 while(cell237->next != NULL && cell237->next->val != 7) cell237 = cell237->next;
                 if(cell237->next != NULL)
                 {
                     cell237 = cell237->next->next;
                     sortedlist87->n--;
                 }
              }
         }
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell238 = sortedlist87->root;
             if(cell238->val == 56)
             {
                 cell238 = cell238->next;
                 sortedlist87->n--;
             }else{
                 while(cell238->next != NULL && cell238->next->val != 56) cell238 = cell238->next;
                 if(cell238->next != NULL)
                 {
                     cell238 = cell238->next->next;
                     sortedlist87->n--;
                 }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist87;
      params1.data[1] = sortedlist102;
      params1.data[2] = sortedlist105;
      sortedlist_t* sortedlist108 = func4(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist108 != NULL && sortedlist108->n > 0){
           cell_t* cell239 = sortedlist108->root;
           cell_t* tmp239  = NULL;
           while(cell239 != NULL) {
                tmp239 = cell239->next;
                free(cell239);
                cell239 = tmp239;
           }
           free(sortedlist108);
      }
      if(sortedlist105 != NULL && sortedlist105->n > 0){
           cell_t* cell240 = sortedlist105->root;
           cell_t* tmp240  = NULL;
           while(cell240 != NULL) {
                tmp240 = cell240->next;
                free(cell240);
                cell240 = tmp240;
           }
           free(sortedlist105);
      }
      if(sortedlist102 != NULL && sortedlist102->n > 0){
           cell_t* cell241 = sortedlist102->root;
           cell_t* tmp241  = NULL;
           while(cell241 != NULL) {
                tmp241 = cell241->next;
                free(cell241);
                cell241 = tmp241;
           }
           free(sortedlist102);
      }
   }
   if(sortedlist87 != NULL && sortedlist87->n > 0){
        cell_t* cell242 = sortedlist87->root;
        while(cell242 != NULL && cell242->val != 18) cell242 = cell242->next;
        return cell242 != NULL ? sortedlist87 : NULL;
   }
   if(PATH0 & 16) {
      sortedlist_t* sortedlist109 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist109->n = 0;
      sortedlist109->root = NULL;
      if(PATH0 & 32) {
         unsigned int loop107 = 0;
         unsigned int loopLimit107 = (rand()%loopsFactor)/3 + 1;
         for(; loop107 < loopLimit107; loop107++) {
            sortedlist_t* sortedlist110 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist110->n = 0;
            sortedlist110->root = NULL;
            if(sortedlist110 != NULL && sortedlist110->n > 0){
                 cell_t* cell243 = sortedlist110->root;
                 while(cell243 != NULL && cell243->val != 12) cell243 = cell243->next;
                 return cell243 != NULL ? sortedlist110 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist87;
            params0.data[1] = sortedlist109;
            params0.data[2] = sortedlist110;
            sortedlist_t* sortedlist111 = func8(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop108 = 0;
            unsigned int loopLimit108 = (rand()%loopsFactor)/4 + 1;
            for(; loop108 < loopLimit108; loop108++) {
               if(sortedlist87 != NULL && sortedlist87->n > 0)
               {
                   cell_t* cell244 = sortedlist87->root;
                   if(cell244->val == 72)
                   {
                       cell244 = cell244->next;
                       sortedlist87->n--;
                   }else{
                       while(cell244->next != NULL && cell244->next->val != 72) cell244 = cell244->next;
                       if(cell244->next != NULL)
                       {
                           cell244 = cell244->next->next;
                           sortedlist87->n--;
                       }
                    }
               }
            }
            unsigned int loop109 = 0;
            unsigned int loopLimit109 = (rand()%loopsFactor)/4 + 1;
            for(; loop109 < loopLimit109; loop109++) {
               if(sortedlist111 != NULL && sortedlist111->n > 0) {
                    cell_t* cell245 = sortedlist111->root;
                    if(sortedlist111->n == 0) {
                        sortedlist111->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist111->root->val  = 9;
                        sortedlist111->root->next = NULL;
                        sortedlist111->n++;
                    } else {
                        while(cell245 != NULL)
                        {
                            if(cell245->next == NULL && cell245->val < 9) {
                                cell245->next = (cell_t*)malloc(sizeof(cell_t));
                                cell245->next->next = NULL;
                                cell245->next->val  = 9;
                                sortedlist111->n++;
                                break;
                            } else if(9 < cell245->val) {
                                cell_t* tmp245 = cell245->next;
                                cell245->next = (cell_t*)malloc(sizeof(cell_t));
                                cell245->next->next = tmp245;
                                int tmp_val245 = cell245->val;
                                cell245->val = 9;
                                cell245->next->val = tmp_val245;
                                sortedlist111->n++;
                                break;
                            }
                            cell245 = cell245->next;
                        }
                    }
               }
            }
            if(sortedlist111 != NULL && sortedlist111->n > 0){
                 cell_t* cell246 = sortedlist111->root;
                 cell_t* tmp246  = NULL;
                 while(cell246 != NULL) {
                      tmp246 = cell246->next;
                      free(cell246);
                      cell246 = tmp246;
                 }
                 free(sortedlist111);
            }
            if(sortedlist110 != NULL && sortedlist110->n > 0){
                 cell_t* cell247 = sortedlist110->root;
                 cell_t* tmp247  = NULL;
                 while(cell247 != NULL) {
                      tmp247 = cell247->next;
                      free(cell247);
                      cell247 = tmp247;
                 }
                 free(sortedlist110);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist87;
         params0.data[1] = sortedlist109;
         sortedlist_t* sortedlist112 = func5(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist112 != NULL && sortedlist112->n > 0){
              cell_t* cell248 = sortedlist112->root;
              cell_t* tmp248  = NULL;
              while(cell248 != NULL) {
                   tmp248 = cell248->next;
                   free(cell248);
                   cell248 = tmp248;
              }
              free(sortedlist112);
         }
      }
      unsigned int loop110 = 0;
      unsigned int loopLimit110 = (rand()%loopsFactor)/3 + 1;
      for(; loop110 < loopLimit110; loop110++) {
         if(sortedlist87 != NULL && sortedlist87->n > 0) {
              cell_t* cell249 = sortedlist87->root;
              if(sortedlist87->n == 0) {
                  sortedlist87->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist87->root->val  = 10;
                  sortedlist87->root->next = NULL;
                  sortedlist87->n++;
              } else {
                  while(cell249 != NULL)
                  {
                      if(cell249->next == NULL && cell249->val < 10) {
                          cell249->next = (cell_t*)malloc(sizeof(cell_t));
                          cell249->next->next = NULL;
                          cell249->next->val  = 10;
                          sortedlist87->n++;
                          break;
                      } else if(10 < cell249->val) {
                          cell_t* tmp249 = cell249->next;
                          cell249->next = (cell_t*)malloc(sizeof(cell_t));
                          cell249->next->next = tmp249;
                          int tmp_val249 = cell249->val;
                          cell249->val = 10;
                          cell249->next->val = tmp_val249;
                          sortedlist87->n++;
                          break;
                      }
                      cell249 = cell249->next;
                  }
              }
         }
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell250 = sortedlist87->root;
             if(cell250->val == 87)
             {
                 cell250 = cell250->next;
                 sortedlist87->n--;
             }else{
                 while(cell250->next != NULL && cell250->next->val != 87) cell250 = cell250->next;
                 if(cell250->next != NULL)
                 {
                     cell250 = cell250->next->next;
                     sortedlist87->n--;
                 }
              }
         }
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell251 = sortedlist87->root;
             if(cell251->val == 1)
             {
                 cell251 = cell251->next;
                 sortedlist87->n--;
             }else{
                 while(cell251->next != NULL && cell251->next->val != 1) cell251 = cell251->next;
                 if(cell251->next != NULL)
                 {
                     cell251 = cell251->next->next;
                     sortedlist87->n--;
                 }
              }
         }
      }
      if(sortedlist109 != NULL && sortedlist109->n > 0){
           cell_t* cell252 = sortedlist109->root;
           cell_t* tmp252  = NULL;
           while(cell252 != NULL) {
                tmp252 = cell252->next;
                free(cell252);
                cell252 = tmp252;
           }
           free(sortedlist109);
      }
   }
   else {
      sortedlist_t* sortedlist113 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist113->n = 0;
      sortedlist113->root = NULL;
      if(PATH0 & 64) {
         unsigned int loop111 = 0;
         unsigned int loopLimit111 = (rand()%loopsFactor)/3 + 1;
         for(; loop111 < loopLimit111; loop111++) {
            sortedlist_t* sortedlist114 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist114->n = 0;
            sortedlist114->root = NULL;
            if(sortedlist113 != NULL && sortedlist113->n > 0){
                 cell_t* cell253 = sortedlist113->root;
                 while(cell253 != NULL && cell253->val != 72) cell253 = cell253->next;
                 return cell253 != NULL ? sortedlist113 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist87;
            params0.data[1] = sortedlist113;
            params0.data[2] = sortedlist114;
            sortedlist_t* sortedlist115 = func8(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop112 = 0;
            unsigned int loopLimit112 = (rand()%loopsFactor)/4 + 1;
            for(; loop112 < loopLimit112; loop112++) {
               if(sortedlist113 != NULL && sortedlist113->n > 0)
               {
                   cell_t* cell254 = sortedlist113->root;
                   if(cell254->val == 55)
                   {
                       cell254 = cell254->next;
                       sortedlist113->n--;
                   }else{
                       while(cell254->next != NULL && cell254->next->val != 55) cell254 = cell254->next;
                       if(cell254->next != NULL)
                       {
                           cell254 = cell254->next->next;
                           sortedlist113->n--;
                       }
                    }
               }
            }
            unsigned int loop113 = 0;
            unsigned int loopLimit113 = (rand()%loopsFactor)/4 + 1;
            for(; loop113 < loopLimit113; loop113++) {
               if(sortedlist115 != NULL && sortedlist115->n > 0) {
                    cell_t* cell255 = sortedlist115->root;
                    if(sortedlist115->n == 0) {
                        sortedlist115->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist115->root->val  = 99;
                        sortedlist115->root->next = NULL;
                        sortedlist115->n++;
                    } else {
                        while(cell255 != NULL)
                        {
                            if(cell255->next == NULL && cell255->val < 99) {
                                cell255->next = (cell_t*)malloc(sizeof(cell_t));
                                cell255->next->next = NULL;
                                cell255->next->val  = 99;
                                sortedlist115->n++;
                                break;
                            } else if(99 < cell255->val) {
                                cell_t* tmp255 = cell255->next;
                                cell255->next = (cell_t*)malloc(sizeof(cell_t));
                                cell255->next->next = tmp255;
                                int tmp_val255 = cell255->val;
                                cell255->val = 99;
                                cell255->next->val = tmp_val255;
                                sortedlist115->n++;
                                break;
                            }
                            cell255 = cell255->next;
                        }
                    }
               }
            }
            if(sortedlist115 != NULL && sortedlist115->n > 0){
                 cell_t* cell256 = sortedlist115->root;
                 cell_t* tmp256  = NULL;
                 while(cell256 != NULL) {
                      tmp256 = cell256->next;
                      free(cell256);
                      cell256 = tmp256;
                 }
                 free(sortedlist115);
            }
            if(sortedlist114 != NULL && sortedlist114->n > 0){
                 cell_t* cell257 = sortedlist114->root;
                 cell_t* tmp257  = NULL;
                 while(cell257 != NULL) {
                      tmp257 = cell257->next;
                      free(cell257);
                      cell257 = tmp257;
                 }
                 free(sortedlist114);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist87;
         params0.data[1] = sortedlist113;
         sortedlist_t* sortedlist116 = func5(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist116 != NULL && sortedlist116->n > 0){
              cell_t* cell258 = sortedlist116->root;
              cell_t* tmp258  = NULL;
              while(cell258 != NULL) {
                   tmp258 = cell258->next;
                   free(cell258);
                   cell258 = tmp258;
              }
              free(sortedlist116);
         }
      }
      unsigned int loop114 = 0;
      unsigned int loopLimit114 = (rand()%loopsFactor)/3 + 1;
      for(; loop114 < loopLimit114; loop114++) {
         if(sortedlist113 != NULL && sortedlist113->n > 0) {
              cell_t* cell259 = sortedlist113->root;
              if(sortedlist113->n == 0) {
                  sortedlist113->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist113->root->val  = 4;
                  sortedlist113->root->next = NULL;
                  sortedlist113->n++;
              } else {
                  while(cell259 != NULL)
                  {
                      if(cell259->next == NULL && cell259->val < 4) {
                          cell259->next = (cell_t*)malloc(sizeof(cell_t));
                          cell259->next->next = NULL;
                          cell259->next->val  = 4;
                          sortedlist113->n++;
                          break;
                      } else if(4 < cell259->val) {
                          cell_t* tmp259 = cell259->next;
                          cell259->next = (cell_t*)malloc(sizeof(cell_t));
                          cell259->next->next = tmp259;
                          int tmp_val259 = cell259->val;
                          cell259->val = 4;
                          cell259->next->val = tmp_val259;
                          sortedlist113->n++;
                          break;
                      }
                      cell259 = cell259->next;
                  }
              }
         }
         if(sortedlist113 != NULL && sortedlist113->n > 0)
         {
             cell_t* cell260 = sortedlist113->root;
             if(cell260->val == 11)
             {
                 cell260 = cell260->next;
                 sortedlist113->n--;
             }else{
                 while(cell260->next != NULL && cell260->next->val != 11) cell260 = cell260->next;
                 if(cell260->next != NULL)
                 {
                     cell260 = cell260->next->next;
                     sortedlist113->n--;
                 }
              }
         }
         if(sortedlist87 != NULL && sortedlist87->n > 0)
         {
             cell_t* cell261 = sortedlist87->root;
             if(cell261->val == 67)
             {
                 cell261 = cell261->next;
                 sortedlist87->n--;
             }else{
                 while(cell261->next != NULL && cell261->next->val != 67) cell261 = cell261->next;
                 if(cell261->next != NULL)
                 {
                     cell261 = cell261->next->next;
                     sortedlist87->n--;
                 }
              }
         }
      }
      if(sortedlist113 != NULL && sortedlist113->n > 0){
           cell_t* cell262 = sortedlist113->root;
           cell_t* tmp262  = NULL;
           while(cell262 != NULL) {
                tmp262 = cell262->next;
                free(cell262);
                cell262 = tmp262;
           }
           free(sortedlist113);
      }
   }
   if(sortedlist87 != NULL && sortedlist87->n > 0)
   {
       cell_t* cell263 = sortedlist87->root;
       if(cell263->val == 28)
       {
           cell263 = cell263->next;
           sortedlist87->n--;
       }else{
           while(cell263->next != NULL && cell263->next->val != 28) cell263 = cell263->next;
           if(cell263->next != NULL)
           {
               cell263 = cell263->next->next;
               sortedlist87->n--;
           }
        }
   }
   if(sortedlist87 != NULL && sortedlist87->n > 0){
        cell_t* cell264 = sortedlist87->root;
        while(cell264 != NULL && cell264->val != 50) cell264 = cell264->next;
        return cell264 != NULL ? sortedlist87 : NULL;
   }
   return sortedlist87;
}

