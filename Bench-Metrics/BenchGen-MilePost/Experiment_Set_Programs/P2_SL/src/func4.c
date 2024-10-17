#include "P2_SL.h" 
sortedlist_t* func4(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist92 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist92->n = 0;
   sortedlist92->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop80 = 0;
      unsigned int loopLimit80 = (rand()%loopsFactor)/3 + 1;
      for(; loop80 < loopLimit80; loop80++) {
         if(sortedlist92 != NULL && sortedlist92->n > 0)
         {
             cell_t* cell201 = sortedlist92->root;
             if(cell201->val == 50)
             {
                 cell201 = cell201->next;
                 sortedlist92->n--;
             }else{
                 while(cell201->next != NULL && cell201->next->val != 50) cell201 = cell201->next;
                 if(cell201->next != NULL)
                 {
                     cell201 = cell201->next->next;
                     sortedlist92->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist93 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist93->n = 0;
      sortedlist93->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop81 = 0;
         unsigned int loopLimit81 = (rand()%loopsFactor)/3 + 1;
         for(; loop81 < loopLimit81; loop81++) {
            sortedlist_t* sortedlist94 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist94->n = 0;
            sortedlist94->root = NULL;
            if(sortedlist94 != NULL && sortedlist94->n > 0)
            {
                cell_t* cell202 = sortedlist94->root;
                if(cell202->val == 71)
                {
                    cell202 = cell202->next;
                    sortedlist94->n--;
                }else{
                    while(cell202->next != NULL && cell202->next->val != 71) cell202 = cell202->next;
                    if(cell202->next != NULL)
                    {
                        cell202 = cell202->next->next;
                        sortedlist94->n--;
                    }
                 }
            }
            if(sortedlist92 != NULL && sortedlist92->n > 0){
                 cell_t* cell203 = sortedlist92->root;
                 while(cell203 != NULL && cell203->val != 31) cell203 = cell203->next;
                 return cell203 != NULL ? sortedlist92 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist92;
            params0.data[1] = sortedlist93;
            params0.data[2] = sortedlist94;
            sortedlist_t* sortedlist95 = func16(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop82 = 0;
            unsigned int loopLimit82 = (rand()%loopsFactor)/4 + 1;
            for(; loop82 < loopLimit82; loop82++) {
               if(sortedlist93 != NULL && sortedlist93->n > 0)
               {
                   cell_t* cell204 = sortedlist93->root;
                   if(cell204->val == 30)
                   {
                       cell204 = cell204->next;
                       sortedlist93->n--;
                   }else{
                       while(cell204->next != NULL && cell204->next->val != 30) cell204 = cell204->next;
                       if(cell204->next != NULL)
                       {
                           cell204 = cell204->next->next;
                           sortedlist93->n--;
                       }
                    }
               }
            }
            unsigned int loop83 = 0;
            unsigned int loopLimit83 = (rand()%loopsFactor)/4 + 1;
            for(; loop83 < loopLimit83; loop83++) {
               if(sortedlist93 != NULL && sortedlist93->n > 0) {
                    cell_t* cell205 = sortedlist93->root;
                    if(sortedlist93->n == 0) {
                        sortedlist93->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist93->root->val  = 94;
                        sortedlist93->root->next = NULL;
                        sortedlist93->n++;
                    } else {
                        while(cell205 != NULL)
                        {
                            if(cell205->next == NULL && cell205->val < 94) {
                                cell205->next = (cell_t*)malloc(sizeof(cell_t));
                                cell205->next->next = NULL;
                                cell205->next->val  = 94;
                                sortedlist93->n++;
                                break;
                            } else if(94 < cell205->val) {
                                cell_t* tmp205 = cell205->next;
                                cell205->next = (cell_t*)malloc(sizeof(cell_t));
                                cell205->next->next = tmp205;
                                int tmp_val205 = cell205->val;
                                cell205->val = 94;
                                cell205->next->val = tmp_val205;
                                sortedlist93->n++;
                                break;
                            }
                            cell205 = cell205->next;
                        }
                    }
               }
            }
            if(sortedlist95 != NULL && sortedlist95->n > 0){
                 cell_t* cell206 = sortedlist95->root;
                 cell_t* tmp206  = NULL;
                 while(cell206 != NULL) {
                      tmp206 = cell206->next;
                      free(cell206);
                      cell206 = tmp206;
                 }
                 free(sortedlist95);
            }
            if(sortedlist94 != NULL && sortedlist94->n > 0){
                 cell_t* cell207 = sortedlist94->root;
                 cell_t* tmp207  = NULL;
                 while(cell207 != NULL) {
                      tmp207 = cell207->next;
                      free(cell207);
                      cell207 = tmp207;
                 }
                 free(sortedlist94);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist92;
         params0.data[1] = sortedlist93;
         sortedlist_t* sortedlist96 = func13(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist96 != NULL && sortedlist96->n > 0){
              cell_t* cell208 = sortedlist96->root;
              cell_t* tmp208  = NULL;
              while(cell208 != NULL) {
                   tmp208 = cell208->next;
                   free(cell208);
                   cell208 = tmp208;
              }
              free(sortedlist96);
         }
      }
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist92;
      params0.data[1] = sortedlist93;
      sortedlist_t* sortedlist97 = func10(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop84 = 0;
      unsigned int loopLimit84 = (rand()%loopsFactor)/3 + 1;
      for(; loop84 < loopLimit84; loop84++) {
         if(sortedlist93 != NULL && sortedlist93->n > 0)
         {
             cell_t* cell209 = sortedlist93->root;
             if(cell209->val == 63)
             {
                 cell209 = cell209->next;
                 sortedlist93->n--;
             }else{
                 while(cell209->next != NULL && cell209->next->val != 63) cell209 = cell209->next;
                 if(cell209->next != NULL)
                 {
                     cell209 = cell209->next->next;
                     sortedlist93->n--;
                 }
              }
         }
      }
      unsigned int loop85 = 0;
      unsigned int loopLimit85 = (rand()%loopsFactor)/3 + 1;
      for(; loop85 < loopLimit85; loop85++) {
         if(sortedlist93 != NULL && sortedlist93->n > 0) {
              cell_t* cell210 = sortedlist93->root;
              if(sortedlist93->n == 0) {
                  sortedlist93->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist93->root->val  = 81;
                  sortedlist93->root->next = NULL;
                  sortedlist93->n++;
              } else {
                  while(cell210 != NULL)
                  {
                      if(cell210->next == NULL && cell210->val < 81) {
                          cell210->next = (cell_t*)malloc(sizeof(cell_t));
                          cell210->next->next = NULL;
                          cell210->next->val  = 81;
                          sortedlist93->n++;
                          break;
                      } else if(81 < cell210->val) {
                          cell_t* tmp210 = cell210->next;
                          cell210->next = (cell_t*)malloc(sizeof(cell_t));
                          cell210->next->next = tmp210;
                          int tmp_val210 = cell210->val;
                          cell210->val = 81;
                          cell210->next->val = tmp_val210;
                          sortedlist93->n++;
                          break;
                      }
                      cell210 = cell210->next;
                  }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist92;
      params1.data[1] = sortedlist93;
      params1.data[2] = sortedlist97;
      sortedlist_t* sortedlist98 = func6(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist98 != NULL && sortedlist98->n > 0){
           cell_t* cell211 = sortedlist98->root;
           cell_t* tmp211  = NULL;
           while(cell211 != NULL) {
                tmp211 = cell211->next;
                free(cell211);
                cell211 = tmp211;
           }
           free(sortedlist98);
      }
      if(sortedlist97 != NULL && sortedlist97->n > 0){
           cell_t* cell212 = sortedlist97->root;
           cell_t* tmp212  = NULL;
           while(cell212 != NULL) {
                tmp212 = cell212->next;
                free(cell212);
                cell212 = tmp212;
           }
           free(sortedlist97);
      }
      if(sortedlist93 != NULL && sortedlist93->n > 0){
           cell_t* cell213 = sortedlist93->root;
           cell_t* tmp213  = NULL;
           while(cell213 != NULL) {
                tmp213 = cell213->next;
                free(cell213);
                cell213 = tmp213;
           }
           free(sortedlist93);
      }
   }
   else {
      sortedlist_t* sortedlist99 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist99->n = 0;
      sortedlist99->root = NULL;
      unsigned int loop86 = 0;
      unsigned int loopLimit86 = (rand()%loopsFactor)/3 + 1;
      for(; loop86 < loopLimit86; loop86++) {
         if(sortedlist99 != NULL && sortedlist99->n > 0)
         {
             cell_t* cell214 = sortedlist99->root;
             if(cell214->val == 96)
             {
                 cell214 = cell214->next;
                 sortedlist99->n--;
             }else{
                 while(cell214->next != NULL && cell214->next->val != 96) cell214 = cell214->next;
                 if(cell214->next != NULL)
                 {
                     cell214 = cell214->next->next;
                     sortedlist99->n--;
                 }
              }
         }
      }
      if(sortedlist99 != NULL && sortedlist99->n > 0) {
           cell_t* cell215 = sortedlist99->root;
           if(sortedlist99->n == 0) {
               sortedlist99->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist99->root->val  = 73;
               sortedlist99->root->next = NULL;
               sortedlist99->n++;
           } else {
               while(cell215 != NULL)
               {
                   if(cell215->next == NULL && cell215->val < 73) {
                       cell215->next = (cell_t*)malloc(sizeof(cell_t));
                       cell215->next->next = NULL;
                       cell215->next->val  = 73;
                       sortedlist99->n++;
                       break;
                   } else if(73 < cell215->val) {
                       cell_t* tmp215 = cell215->next;
                       cell215->next = (cell_t*)malloc(sizeof(cell_t));
                       cell215->next->next = tmp215;
                       int tmp_val215 = cell215->val;
                       cell215->val = 73;
                       cell215->next->val = tmp_val215;
                       sortedlist99->n++;
                       break;
                   }
                   cell215 = cell215->next;
               }
           }
      }
      if(sortedlist99 != NULL && sortedlist99->n > 0){
           cell_t* cell216 = sortedlist99->root;
           while(cell216 != NULL && cell216->val != 68) cell216 = cell216->next;
           return cell216 != NULL ? sortedlist99 : NULL;
      }
      if(sortedlist92 != NULL && sortedlist92->n > 0)
      {
          cell_t* cell217 = sortedlist92->root;
          if(cell217->val == 95)
          {
              cell217 = cell217->next;
              sortedlist92->n--;
          }else{
              while(cell217->next != NULL && cell217->next->val != 95) cell217 = cell217->next;
              if(cell217->next != NULL)
              {
                  cell217 = cell217->next->next;
                  sortedlist92->n--;
              }
           }
      }
      sortedlist_t* sortedlist100 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist100->n = 0;
      sortedlist100->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop87 = 0;
         unsigned int loopLimit87 = (rand()%loopsFactor)/3 + 1;
         for(; loop87 < loopLimit87; loop87++) {
            sortedlist_t* sortedlist101 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist101->n = 0;
            sortedlist101->root = NULL;
            if(sortedlist100 != NULL && sortedlist100->n > 0)
            {
                cell_t* cell218 = sortedlist100->root;
                if(cell218->val == 66)
                {
                    cell218 = cell218->next;
                    sortedlist100->n--;
                }else{
                    while(cell218->next != NULL && cell218->next->val != 66) cell218 = cell218->next;
                    if(cell218->next != NULL)
                    {
                        cell218 = cell218->next->next;
                        sortedlist100->n--;
                    }
                 }
            }
            if(sortedlist92 != NULL && sortedlist92->n > 0){
                 cell_t* cell219 = sortedlist92->root;
                 while(cell219 != NULL && cell219->val != 40) cell219 = cell219->next;
                 return cell219 != NULL ? sortedlist92 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 4;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist92;
            params0.data[1] = sortedlist99;
            params0.data[2] = sortedlist100;
            params0.data[3] = sortedlist101;
            sortedlist_t* sortedlist102 = func16(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop88 = 0;
            unsigned int loopLimit88 = (rand()%loopsFactor)/4 + 1;
            for(; loop88 < loopLimit88; loop88++) {
               if(sortedlist92 != NULL && sortedlist92->n > 0)
               {
                   cell_t* cell220 = sortedlist92->root;
                   if(cell220->val == 84)
                   {
                       cell220 = cell220->next;
                       sortedlist92->n--;
                   }else{
                       while(cell220->next != NULL && cell220->next->val != 84) cell220 = cell220->next;
                       if(cell220->next != NULL)
                       {
                           cell220 = cell220->next->next;
                           sortedlist92->n--;
                       }
                    }
               }
            }
            unsigned int loop89 = 0;
            unsigned int loopLimit89 = (rand()%loopsFactor)/4 + 1;
            for(; loop89 < loopLimit89; loop89++) {
               if(sortedlist99 != NULL && sortedlist99->n > 0) {
                    cell_t* cell221 = sortedlist99->root;
                    if(sortedlist99->n == 0) {
                        sortedlist99->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist99->root->val  = 42;
                        sortedlist99->root->next = NULL;
                        sortedlist99->n++;
                    } else {
                        while(cell221 != NULL)
                        {
                            if(cell221->next == NULL && cell221->val < 42) {
                                cell221->next = (cell_t*)malloc(sizeof(cell_t));
                                cell221->next->next = NULL;
                                cell221->next->val  = 42;
                                sortedlist99->n++;
                                break;
                            } else if(42 < cell221->val) {
                                cell_t* tmp221 = cell221->next;
                                cell221->next = (cell_t*)malloc(sizeof(cell_t));
                                cell221->next->next = tmp221;
                                int tmp_val221 = cell221->val;
                                cell221->val = 42;
                                cell221->next->val = tmp_val221;
                                sortedlist99->n++;
                                break;
                            }
                            cell221 = cell221->next;
                        }
                    }
               }
            }
            if(sortedlist102 != NULL && sortedlist102->n > 0){
                 cell_t* cell222 = sortedlist102->root;
                 cell_t* tmp222  = NULL;
                 while(cell222 != NULL) {
                      tmp222 = cell222->next;
                      free(cell222);
                      cell222 = tmp222;
                 }
                 free(sortedlist102);
            }
            if(sortedlist101 != NULL && sortedlist101->n > 0){
                 cell_t* cell223 = sortedlist101->root;
                 cell_t* tmp223  = NULL;
                 while(cell223 != NULL) {
                      tmp223 = cell223->next;
                      free(cell223);
                      cell223 = tmp223;
                 }
                 free(sortedlist101);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist92;
         params0.data[1] = sortedlist99;
         params0.data[2] = sortedlist100;
         sortedlist_t* sortedlist103 = func13(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist103 != NULL && sortedlist103->n > 0){
              cell_t* cell224 = sortedlist103->root;
              cell_t* tmp224  = NULL;
              while(cell224 != NULL) {
                   tmp224 = cell224->next;
                   free(cell224);
                   cell224 = tmp224;
              }
              free(sortedlist103);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist92;
      params0.data[1] = sortedlist99;
      params0.data[2] = sortedlist100;
      sortedlist_t* sortedlist104 = func10(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop90 = 0;
      unsigned int loopLimit90 = (rand()%loopsFactor)/3 + 1;
      for(; loop90 < loopLimit90; loop90++) {
         if(sortedlist92 != NULL && sortedlist92->n > 0)
         {
             cell_t* cell225 = sortedlist92->root;
             if(cell225->val == 7)
             {
                 cell225 = cell225->next;
                 sortedlist92->n--;
             }else{
                 while(cell225->next != NULL && cell225->next->val != 7) cell225 = cell225->next;
                 if(cell225->next != NULL)
                 {
                     cell225 = cell225->next->next;
                     sortedlist92->n--;
                 }
              }
         }
      }
      if(sortedlist104 != NULL && sortedlist104->n > 0){
           cell_t* cell226 = sortedlist104->root;
           cell_t* tmp226  = NULL;
           while(cell226 != NULL) {
                tmp226 = cell226->next;
                free(cell226);
                cell226 = tmp226;
           }
           free(sortedlist104);
      }
      if(sortedlist100 != NULL && sortedlist100->n > 0){
           cell_t* cell227 = sortedlist100->root;
           cell_t* tmp227  = NULL;
           while(cell227 != NULL) {
                tmp227 = cell227->next;
                free(cell227);
                cell227 = tmp227;
           }
           free(sortedlist100);
      }
      if(sortedlist99 != NULL && sortedlist99->n > 0){
           cell_t* cell228 = sortedlist99->root;
           cell_t* tmp228  = NULL;
           while(cell228 != NULL) {
                tmp228 = cell228->next;
                free(cell228);
                cell228 = tmp228;
           }
           free(sortedlist99);
      }
   }
   unsigned int loop91 = 0;
   unsigned int loopLimit91 = (rand()%loopsFactor)/3 + 1;
   for(; loop91 < loopLimit91; loop91++) {
      if(sortedlist92 != NULL && sortedlist92->n > 0) {
           cell_t* cell229 = sortedlist92->root;
           if(sortedlist92->n == 0) {
               sortedlist92->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist92->root->val  = 56;
               sortedlist92->root->next = NULL;
               sortedlist92->n++;
           } else {
               while(cell229 != NULL)
               {
                   if(cell229->next == NULL && cell229->val < 56) {
                       cell229->next = (cell_t*)malloc(sizeof(cell_t));
                       cell229->next->next = NULL;
                       cell229->next->val  = 56;
                       sortedlist92->n++;
                       break;
                   } else if(56 < cell229->val) {
                       cell_t* tmp229 = cell229->next;
                       cell229->next = (cell_t*)malloc(sizeof(cell_t));
                       cell229->next->next = tmp229;
                       int tmp_val229 = cell229->val;
                       cell229->val = 56;
                       cell229->next->val = tmp_val229;
                       sortedlist92->n++;
                       break;
                   }
                   cell229 = cell229->next;
               }
           }
      }
      sortedlist_t* sortedlist105 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist105->n = 0;
      sortedlist105->root = NULL;
      unsigned int loop92 = 0;
      unsigned int loopLimit92 = (rand()%loopsFactor)/4 + 1;
      for(; loop92 < loopLimit92; loop92++) {
         if(sortedlist105 != NULL && sortedlist105->n > 0)
         {
             cell_t* cell230 = sortedlist105->root;
             if(cell230->val == 18)
             {
                 cell230 = cell230->next;
                 sortedlist105->n--;
             }else{
                 while(cell230->next != NULL && cell230->next->val != 18) cell230 = cell230->next;
                 if(cell230->next != NULL)
                 {
                     cell230 = cell230->next->next;
                     sortedlist105->n--;
                 }
              }
         }
      }
      if(sortedlist105 != NULL && sortedlist105->n > 0) {
           cell_t* cell231 = sortedlist105->root;
           if(sortedlist105->n == 0) {
               sortedlist105->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist105->root->val  = 12;
               sortedlist105->root->next = NULL;
               sortedlist105->n++;
           } else {
               while(cell231 != NULL)
               {
                   if(cell231->next == NULL && cell231->val < 12) {
                       cell231->next = (cell_t*)malloc(sizeof(cell_t));
                       cell231->next->next = NULL;
                       cell231->next->val  = 12;
                       sortedlist105->n++;
                       break;
                   } else if(12 < cell231->val) {
                       cell_t* tmp231 = cell231->next;
                       cell231->next = (cell_t*)malloc(sizeof(cell_t));
                       cell231->next->next = tmp231;
                       int tmp_val231 = cell231->val;
                       cell231->val = 12;
                       cell231->next->val = tmp_val231;
                       sortedlist105->n++;
                       break;
                   }
                   cell231 = cell231->next;
               }
           }
      }
      if(sortedlist92 != NULL && sortedlist92->n > 0){
           cell_t* cell232 = sortedlist92->root;
           while(cell232 != NULL && cell232->val != 72) cell232 = cell232->next;
           return cell232 != NULL ? sortedlist92 : NULL;
      }
      if(sortedlist105 != NULL && sortedlist105->n > 0)
      {
          cell_t* cell233 = sortedlist105->root;
          if(cell233->val == 9)
          {
              cell233 = cell233->next;
              sortedlist105->n--;
          }else{
              while(cell233->next != NULL && cell233->next->val != 9) cell233 = cell233->next;
              if(cell233->next != NULL)
              {
                  cell233 = cell233->next->next;
                  sortedlist105->n--;
              }
           }
      }
      sortedlist_t* sortedlist106 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist106->n = 0;
      sortedlist106->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop93 = 0;
         unsigned int loopLimit93 = (rand()%loopsFactor)/4 + 1;
         for(; loop93 < loopLimit93; loop93++) {
            sortedlist_t* sortedlist107 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist107->n = 0;
            sortedlist107->root = NULL;
            if(sortedlist92 != NULL && sortedlist92->n > 0)
            {
                cell_t* cell234 = sortedlist92->root;
                if(cell234->val == 10)
                {
                    cell234 = cell234->next;
                    sortedlist92->n--;
                }else{
                    while(cell234->next != NULL && cell234->next->val != 10) cell234 = cell234->next;
                    if(cell234->next != NULL)
                    {
                        cell234 = cell234->next->next;
                        sortedlist92->n--;
                    }
                 }
            }
            if(sortedlist106 != NULL && sortedlist106->n > 0){
                 cell_t* cell235 = sortedlist106->root;
                 while(cell235 != NULL && cell235->val != 87) cell235 = cell235->next;
                 return cell235 != NULL ? sortedlist106 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 4;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist92;
            params0.data[1] = sortedlist105;
            params0.data[2] = sortedlist106;
            params0.data[3] = sortedlist107;
            sortedlist_t* sortedlist108 = func16(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop94 = 0;
            unsigned int loopLimit94 = (rand()%loopsFactor)/5 + 1;
            for(; loop94 < loopLimit94; loop94++) {
               if(sortedlist105 != NULL && sortedlist105->n > 0)
               {
                   cell_t* cell236 = sortedlist105->root;
                   if(cell236->val == 1)
                   {
                       cell236 = cell236->next;
                       sortedlist105->n--;
                   }else{
                       while(cell236->next != NULL && cell236->next->val != 1) cell236 = cell236->next;
                       if(cell236->next != NULL)
                       {
                           cell236 = cell236->next->next;
                           sortedlist105->n--;
                       }
                    }
               }
            }
            unsigned int loop95 = 0;
            unsigned int loopLimit95 = (rand()%loopsFactor)/5 + 1;
            for(; loop95 < loopLimit95; loop95++) {
               if(sortedlist107 != NULL && sortedlist107->n > 0) {
                    cell_t* cell237 = sortedlist107->root;
                    if(sortedlist107->n == 0) {
                        sortedlist107->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist107->root->val  = 72;
                        sortedlist107->root->next = NULL;
                        sortedlist107->n++;
                    } else {
                        while(cell237 != NULL)
                        {
                            if(cell237->next == NULL && cell237->val < 72) {
                                cell237->next = (cell_t*)malloc(sizeof(cell_t));
                                cell237->next->next = NULL;
                                cell237->next->val  = 72;
                                sortedlist107->n++;
                                break;
                            } else if(72 < cell237->val) {
                                cell_t* tmp237 = cell237->next;
                                cell237->next = (cell_t*)malloc(sizeof(cell_t));
                                cell237->next->next = tmp237;
                                int tmp_val237 = cell237->val;
                                cell237->val = 72;
                                cell237->next->val = tmp_val237;
                                sortedlist107->n++;
                                break;
                            }
                            cell237 = cell237->next;
                        }
                    }
               }
            }
            if(sortedlist108 != NULL && sortedlist108->n > 0){
                 cell_t* cell238 = sortedlist108->root;
                 cell_t* tmp238  = NULL;
                 while(cell238 != NULL) {
                      tmp238 = cell238->next;
                      free(cell238);
                      cell238 = tmp238;
                 }
                 free(sortedlist108);
            }
            if(sortedlist107 != NULL && sortedlist107->n > 0){
                 cell_t* cell239 = sortedlist107->root;
                 cell_t* tmp239  = NULL;
                 while(cell239 != NULL) {
                      tmp239 = cell239->next;
                      free(cell239);
                      cell239 = tmp239;
                 }
                 free(sortedlist107);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist92;
         params0.data[1] = sortedlist105;
         params0.data[2] = sortedlist106;
         sortedlist_t* sortedlist109 = func13(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist109 != NULL && sortedlist109->n > 0){
              cell_t* cell240 = sortedlist109->root;
              cell_t* tmp240  = NULL;
              while(cell240 != NULL) {
                   tmp240 = cell240->next;
                   free(cell240);
                   cell240 = tmp240;
              }
              free(sortedlist109);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist92;
      params0.data[1] = sortedlist105;
      params0.data[2] = sortedlist106;
      sortedlist_t* sortedlist110 = func10(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop96 = 0;
      unsigned int loopLimit96 = (rand()%loopsFactor)/4 + 1;
      for(; loop96 < loopLimit96; loop96++) {
         if(sortedlist105 != NULL && sortedlist105->n > 0)
         {
             cell_t* cell241 = sortedlist105->root;
             if(cell241->val == 55)
             {
                 cell241 = cell241->next;
                 sortedlist105->n--;
             }else{
                 while(cell241->next != NULL && cell241->next->val != 55) cell241 = cell241->next;
                 if(cell241->next != NULL)
                 {
                     cell241 = cell241->next->next;
                     sortedlist105->n--;
                 }
              }
         }
      }
      if(sortedlist110 != NULL && sortedlist110->n > 0){
           cell_t* cell242 = sortedlist110->root;
           cell_t* tmp242  = NULL;
           while(cell242 != NULL) {
                tmp242 = cell242->next;
                free(cell242);
                cell242 = tmp242;
           }
           free(sortedlist110);
      }
      if(sortedlist106 != NULL && sortedlist106->n > 0){
           cell_t* cell243 = sortedlist106->root;
           cell_t* tmp243  = NULL;
           while(cell243 != NULL) {
                tmp243 = cell243->next;
                free(cell243);
                cell243 = tmp243;
           }
           free(sortedlist106);
      }
      if(sortedlist105 != NULL && sortedlist105->n > 0){
           cell_t* cell244 = sortedlist105->root;
           cell_t* tmp244  = NULL;
           while(cell244 != NULL) {
                tmp244 = cell244->next;
                free(cell244);
                cell244 = tmp244;
           }
           free(sortedlist105);
      }
   }
   return sortedlist92;
}

