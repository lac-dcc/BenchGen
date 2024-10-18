#include "P1_SL.h" 
sortedlist_t* func6(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist118 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist118->n = 0;
   sortedlist118->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop48 = 0;
      unsigned int loopLimit48 = (rand()%loopsFactor)/2 + 1;
      for(; loop48 < loopLimit48; loop48++) {
         if(sortedlist118 != NULL && sortedlist118->n > 0)
         {
             cell_t* cell213 = sortedlist118->root;
             if(cell213->val == 26)
             {
                 cell213 = cell213->next;
                 sortedlist118->n--;
             }else{
                 while(cell213->next != NULL && cell213->next->val != 26) cell213 = cell213->next;
                 if(cell213->next != NULL)
                 {
                     cell213 = cell213->next->next;
                     sortedlist118->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist119 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist119->n = 0;
      sortedlist119->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop49 = 0;
         unsigned int loopLimit49 = (rand()%loopsFactor)/2 + 1;
         for(; loop49 < loopLimit49; loop49++) {
            sortedlist_t* sortedlist120 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist120->n = 0;
            sortedlist120->root = NULL;
            if(sortedlist118 != NULL && sortedlist118->n > 0)
            {
                cell_t* cell214 = sortedlist118->root;
                if(cell214->val == 65)
                {
                    cell214 = cell214->next;
                    sortedlist118->n--;
                }else{
                    while(cell214->next != NULL && cell214->next->val != 65) cell214 = cell214->next;
                    if(cell214->next != NULL)
                    {
                        cell214 = cell214->next->next;
                        sortedlist118->n--;
                    }
                 }
            }
            if(sortedlist120 != NULL && sortedlist120->n > 0){
                 cell_t* cell215 = sortedlist120->root;
                 while(cell215 != NULL && cell215->val != 16) cell215 = cell215->next;
                 return cell215 != NULL ? sortedlist120 : NULL;
            }
            if(sortedlist120 != NULL && sortedlist120->n > 0){
                 cell_t* cell216 = sortedlist120->root;
                 cell_t* tmp216  = NULL;
                 while(cell216 != NULL) {
                      tmp216 = cell216->next;
                      free(cell216);
                      cell216 = tmp216;
                 }
                 free(sortedlist120);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist118;
         params0.data[1] = sortedlist119;
         sortedlist_t* sortedlist121 = func16(&params0, rng(), loopsFactor);
         free(params0.data);
         if(sortedlist121 != NULL && sortedlist121->n > 0){
              cell_t* cell217 = sortedlist121->root;
              cell_t* tmp217  = NULL;
              while(cell217 != NULL) {
                   tmp217 = cell217->next;
                   free(cell217);
                   cell217 = tmp217;
              }
              free(sortedlist121);
         }
      }
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist118;
      params0.data[1] = sortedlist119;
      sortedlist_t* sortedlist122 = func13(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop50 = 0;
      unsigned int loopLimit50 = (rand()%loopsFactor)/2 + 1;
      for(; loop50 < loopLimit50; loop50++) {
         if(sortedlist118 != NULL && sortedlist118->n > 0) {
              cell_t* cell218 = sortedlist118->root;
              if(sortedlist118->n == 0) {
                  sortedlist118->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist118->root->val  = 58;
                  sortedlist118->root->next = NULL;
                  sortedlist118->n++;
              } else {
                  while(cell218 != NULL)
                  {
                      if(cell218->next == NULL && cell218->val < 58) {
                          cell218->next = (cell_t*)malloc(sizeof(cell_t));
                          cell218->next->next = NULL;
                          cell218->next->val  = 58;
                          sortedlist118->n++;
                          break;
                      } else if(58 < cell218->val) {
                          cell_t* tmp218 = cell218->next;
                          cell218->next = (cell_t*)malloc(sizeof(cell_t));
                          cell218->next->next = tmp218;
                          int tmp_val218 = cell218->val;
                          cell218->val = 58;
                          cell218->next->val = tmp_val218;
                          sortedlist118->n++;
                          break;
                      }
                      cell218 = cell218->next;
                  }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist118;
      params1.data[1] = sortedlist119;
      params1.data[2] = sortedlist122;
      sortedlist_t* sortedlist123 = func10(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist123 != NULL && sortedlist123->n > 0){
           cell_t* cell228 = sortedlist123->root;
           cell_t* tmp228  = NULL;
           while(cell228 != NULL) {
                tmp228 = cell228->next;
                free(cell228);
                cell228 = tmp228;
           }
           free(sortedlist123);
      }
      if(sortedlist122 != NULL && sortedlist122->n > 0){
           cell_t* cell229 = sortedlist122->root;
           cell_t* tmp229  = NULL;
           while(cell229 != NULL) {
                tmp229 = cell229->next;
                free(cell229);
                cell229 = tmp229;
           }
           free(sortedlist122);
      }
      if(sortedlist119 != NULL && sortedlist119->n > 0){
           cell_t* cell230 = sortedlist119->root;
           cell_t* tmp230  = NULL;
           while(cell230 != NULL) {
                tmp230 = cell230->next;
                free(cell230);
                cell230 = tmp230;
           }
           free(sortedlist119);
      }
   }
   else {
      sortedlist_t* sortedlist129 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist129->n = 0;
      sortedlist129->root = NULL;
      if(sortedlist129 != NULL && sortedlist129->n > 0) {
           cell_t* cell231 = sortedlist129->root;
           if(sortedlist129->n == 0) {
               sortedlist129->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist129->root->val  = 73;
               sortedlist129->root->next = NULL;
               sortedlist129->n++;
           } else {
               while(cell231 != NULL)
               {
                   if(cell231->next == NULL && cell231->val < 73) {
                       cell231->next = (cell_t*)malloc(sizeof(cell_t));
                       cell231->next->next = NULL;
                       cell231->next->val  = 73;
                       sortedlist129->n++;
                       break;
                   } else if(73 < cell231->val) {
                       cell_t* tmp231 = cell231->next;
                       cell231->next = (cell_t*)malloc(sizeof(cell_t));
                       cell231->next->next = tmp231;
                       int tmp_val231 = cell231->val;
                       cell231->val = 73;
                       cell231->next->val = tmp_val231;
                       sortedlist129->n++;
                       break;
                   }
                   cell231 = cell231->next;
               }
           }
      }
      if(sortedlist129 != NULL && sortedlist129->n > 0){
           cell_t* cell232 = sortedlist129->root;
           while(cell232 != NULL && cell232->val != 81) cell232 = cell232->next;
           return cell232 != NULL ? sortedlist129 : NULL;
      }
      if(sortedlist118 != NULL && sortedlist118->n > 0)
      {
          cell_t* cell233 = sortedlist118->root;
          if(cell233->val == 33)
          {
              cell233 = cell233->next;
              sortedlist118->n--;
          }else{
              while(cell233->next != NULL && cell233->next->val != 33) cell233 = cell233->next;
              if(cell233->next != NULL)
              {
                  cell233 = cell233->next->next;
                  sortedlist118->n--;
              }
           }
      }
      sortedlist_t* sortedlist130 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist130->n = 0;
      sortedlist130->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop52 = 0;
         unsigned int loopLimit52 = (rand()%loopsFactor)/2 + 1;
         for(; loop52 < loopLimit52; loop52++) {
            sortedlist_t* sortedlist131 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist131->n = 0;
            sortedlist131->root = NULL;
            if(sortedlist130 != NULL && sortedlist130->n > 0)
            {
                cell_t* cell234 = sortedlist130->root;
                if(cell234->val == 60)
                {
                    cell234 = cell234->next;
                    sortedlist130->n--;
                }else{
                    while(cell234->next != NULL && cell234->next->val != 60) cell234 = cell234->next;
                    if(cell234->next != NULL)
                    {
                        cell234 = cell234->next->next;
                        sortedlist130->n--;
                    }
                 }
            }
            if(sortedlist131 != NULL && sortedlist131->n > 0){
                 cell_t* cell235 = sortedlist131->root;
                 while(cell235 != NULL && cell235->val != 99) cell235 = cell235->next;
                 return cell235 != NULL ? sortedlist131 : NULL;
            }
            if(sortedlist131 != NULL && sortedlist131->n > 0){
                 cell_t* cell236 = sortedlist131->root;
                 cell_t* tmp236  = NULL;
                 while(cell236 != NULL) {
                      tmp236 = cell236->next;
                      free(cell236);
                      cell236 = tmp236;
                 }
                 free(sortedlist131);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist118;
         params0.data[1] = sortedlist129;
         params0.data[2] = sortedlist130;
         sortedlist_t* sortedlist132 = func16(&params0, rng(), loopsFactor);
         free(params0.data);
         if(sortedlist132 != NULL && sortedlist132->n > 0){
              cell_t* cell237 = sortedlist132->root;
              cell_t* tmp237  = NULL;
              while(cell237 != NULL) {
                   tmp237 = cell237->next;
                   free(cell237);
                   cell237 = tmp237;
              }
              free(sortedlist132);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist118;
      params0.data[1] = sortedlist129;
      params0.data[2] = sortedlist130;
      sortedlist_t* sortedlist133 = func13(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist133 != NULL && sortedlist133->n > 0){
           cell_t* cell238 = sortedlist133->root;
           cell_t* tmp238  = NULL;
           while(cell238 != NULL) {
                tmp238 = cell238->next;
                free(cell238);
                cell238 = tmp238;
           }
           free(sortedlist133);
      }
      if(sortedlist130 != NULL && sortedlist130->n > 0){
           cell_t* cell239 = sortedlist130->root;
           cell_t* tmp239  = NULL;
           while(cell239 != NULL) {
                tmp239 = cell239->next;
                free(cell239);
                cell239 = tmp239;
           }
           free(sortedlist130);
      }
      if(sortedlist129 != NULL && sortedlist129->n > 0){
           cell_t* cell240 = sortedlist129->root;
           cell_t* tmp240  = NULL;
           while(cell240 != NULL) {
                tmp240 = cell240->next;
                free(cell240);
                cell240 = tmp240;
           }
           free(sortedlist129);
      }
   }
   unsigned int loop53 = 0;
   unsigned int loopLimit53 = (rand()%loopsFactor)/2 + 1;
   for(; loop53 < loopLimit53; loop53++) {
      if(sortedlist118 != NULL && sortedlist118->n > 0) {
           cell_t* cell241 = sortedlist118->root;
           if(sortedlist118->n == 0) {
               sortedlist118->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist118->root->val  = 99;
               sortedlist118->root->next = NULL;
               sortedlist118->n++;
           } else {
               while(cell241 != NULL)
               {
                   if(cell241->next == NULL && cell241->val < 99) {
                       cell241->next = (cell_t*)malloc(sizeof(cell_t));
                       cell241->next->next = NULL;
                       cell241->next->val  = 99;
                       sortedlist118->n++;
                       break;
                   } else if(99 < cell241->val) {
                       cell_t* tmp241 = cell241->next;
                       cell241->next = (cell_t*)malloc(sizeof(cell_t));
                       cell241->next->next = tmp241;
                       int tmp_val241 = cell241->val;
                       cell241->val = 99;
                       cell241->next->val = tmp_val241;
                       sortedlist118->n++;
                       break;
                   }
                   cell241 = cell241->next;
               }
           }
      }
      sortedlist_t* sortedlist134 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist134->n = 0;
      sortedlist134->root = NULL;
      if(sortedlist118 != NULL && sortedlist118->n > 0) {
           cell_t* cell242 = sortedlist118->root;
           if(sortedlist118->n == 0) {
               sortedlist118->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist118->root->val  = 59;
               sortedlist118->root->next = NULL;
               sortedlist118->n++;
           } else {
               while(cell242 != NULL)
               {
                   if(cell242->next == NULL && cell242->val < 59) {
                       cell242->next = (cell_t*)malloc(sizeof(cell_t));
                       cell242->next->next = NULL;
                       cell242->next->val  = 59;
                       sortedlist118->n++;
                       break;
                   } else if(59 < cell242->val) {
                       cell_t* tmp242 = cell242->next;
                       cell242->next = (cell_t*)malloc(sizeof(cell_t));
                       cell242->next->next = tmp242;
                       int tmp_val242 = cell242->val;
                       cell242->val = 59;
                       cell242->next->val = tmp_val242;
                       sortedlist118->n++;
                       break;
                   }
                   cell242 = cell242->next;
               }
           }
      }
      if(sortedlist134 != NULL && sortedlist134->n > 0){
           cell_t* cell243 = sortedlist134->root;
           while(cell243 != NULL && cell243->val != 13) cell243 = cell243->next;
           return cell243 != NULL ? sortedlist134 : NULL;
      }
      if(sortedlist118 != NULL && sortedlist118->n > 0)
      {
          cell_t* cell244 = sortedlist118->root;
          if(cell244->val == 90)
          {
              cell244 = cell244->next;
              sortedlist118->n--;
          }else{
              while(cell244->next != NULL && cell244->next->val != 90) cell244 = cell244->next;
              if(cell244->next != NULL)
              {
                  cell244 = cell244->next->next;
                  sortedlist118->n--;
              }
           }
      }
      sortedlist_t* sortedlist135 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist135->n = 0;
      sortedlist135->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop54 = 0;
         unsigned int loopLimit54 = (rand()%loopsFactor)/3 + 1;
         for(; loop54 < loopLimit54; loop54++) {
            sortedlist_t* sortedlist136 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist136->n = 0;
            sortedlist136->root = NULL;
            if(sortedlist136 != NULL && sortedlist136->n > 0)
            {
                cell_t* cell245 = sortedlist136->root;
                if(cell245->val == 26)
                {
                    cell245 = cell245->next;
                    sortedlist136->n--;
                }else{
                    while(cell245->next != NULL && cell245->next->val != 26) cell245 = cell245->next;
                    if(cell245->next != NULL)
                    {
                        cell245 = cell245->next->next;
                        sortedlist136->n--;
                    }
                 }
            }
            if(sortedlist135 != NULL && sortedlist135->n > 0){
                 cell_t* cell246 = sortedlist135->root;
                 while(cell246 != NULL && cell246->val != 84) cell246 = cell246->next;
                 return cell246 != NULL ? sortedlist135 : NULL;
            }
            if(sortedlist136 != NULL && sortedlist136->n > 0){
                 cell_t* cell247 = sortedlist136->root;
                 cell_t* tmp247  = NULL;
                 while(cell247 != NULL) {
                      tmp247 = cell247->next;
                      free(cell247);
                      cell247 = tmp247;
                 }
                 free(sortedlist136);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist118;
         params0.data[1] = sortedlist134;
         params0.data[2] = sortedlist135;
         sortedlist_t* sortedlist137 = func16(&params0, rng(), loopsFactor);
         free(params0.data);
         if(sortedlist137 != NULL && sortedlist137->n > 0){
              cell_t* cell248 = sortedlist137->root;
              cell_t* tmp248  = NULL;
              while(cell248 != NULL) {
                   tmp248 = cell248->next;
                   free(cell248);
                   cell248 = tmp248;
              }
              free(sortedlist137);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist118;
      params0.data[1] = sortedlist134;
      params0.data[2] = sortedlist135;
      sortedlist_t* sortedlist138 = func13(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist138 != NULL && sortedlist138->n > 0){
           cell_t* cell249 = sortedlist138->root;
           cell_t* tmp249  = NULL;
           while(cell249 != NULL) {
                tmp249 = cell249->next;
                free(cell249);
                cell249 = tmp249;
           }
           free(sortedlist138);
      }
      if(sortedlist135 != NULL && sortedlist135->n > 0){
           cell_t* cell250 = sortedlist135->root;
           cell_t* tmp250  = NULL;
           while(cell250 != NULL) {
                tmp250 = cell250->next;
                free(cell250);
                cell250 = tmp250;
           }
           free(sortedlist135);
      }
      if(sortedlist134 != NULL && sortedlist134->n > 0){
           cell_t* cell251 = sortedlist134->root;
           cell_t* tmp251  = NULL;
           while(cell251 != NULL) {
                tmp251 = cell251->next;
                free(cell251);
                cell251 = tmp251;
           }
           free(sortedlist134);
      }
   }
   return sortedlist118;
}

