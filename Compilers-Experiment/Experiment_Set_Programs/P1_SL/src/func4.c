#include "P1_SL.h" 
sortedlist_t* func4(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist155 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist155->n = 0;
   sortedlist155->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop61 = 0;
      unsigned int loopLimit61 = (rand()%loopsFactor)/2 + 1;
      for(; loop61 < loopLimit61; loop61++) {
         if(sortedlist155 != NULL && sortedlist155->n > 0)
         {
             cell_t* cell276 = sortedlist155->root;
             if(cell276->val == 4)
             {
                 cell276 = cell276->next;
                 sortedlist155->n--;
             }else{
                 while(cell276->next != NULL && cell276->next->val != 4) cell276 = cell276->next;
                 if(cell276->next != NULL)
                 {
                     cell276 = cell276->next->next;
                     sortedlist155->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist156 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist156->n = 0;
      sortedlist156->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop62 = 0;
         unsigned int loopLimit62 = (rand()%loopsFactor)/2 + 1;
         for(; loop62 < loopLimit62; loop62++) {
            sortedlist_t* sortedlist157 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist157->n = 0;
            sortedlist157->root = NULL;
            if(sortedlist156 != NULL && sortedlist156->n > 0)
            {
                cell_t* cell277 = sortedlist156->root;
                if(cell277->val == 11)
                {
                    cell277 = cell277->next;
                    sortedlist156->n--;
                }else{
                    while(cell277->next != NULL && cell277->next->val != 11) cell277 = cell277->next;
                    if(cell277->next != NULL)
                    {
                        cell277 = cell277->next->next;
                        sortedlist156->n--;
                    }
                 }
            }
            if(sortedlist157 != NULL && sortedlist157->n > 0){
                 cell_t* cell278 = sortedlist157->root;
                 while(cell278 != NULL && cell278->val != 67) cell278 = cell278->next;
                 return cell278 != NULL ? sortedlist157 : NULL;
            }
            if(sortedlist157 != NULL && sortedlist157->n > 0){
                 cell_t* cell279 = sortedlist157->root;
                 cell_t* tmp279  = NULL;
                 while(cell279 != NULL) {
                      tmp279 = cell279->next;
                      free(cell279);
                      cell279 = tmp279;
                 }
                 free(sortedlist157);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist155;
         params0.data[1] = sortedlist156;
         sortedlist_t* sortedlist158 = func11(&params0, rng(), loopsFactor);
         free(params0.data);
         if(sortedlist158 != NULL && sortedlist158->n > 0){
              cell_t* cell280 = sortedlist158->root;
              cell_t* tmp280  = NULL;
              while(cell280 != NULL) {
                   tmp280 = cell280->next;
                   free(cell280);
                   cell280 = tmp280;
              }
              free(sortedlist158);
         }
      }
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist155;
      params0.data[1] = sortedlist156;
      sortedlist_t* sortedlist159 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop63 = 0;
      unsigned int loopLimit63 = (rand()%loopsFactor)/2 + 1;
      for(; loop63 < loopLimit63; loop63++) {
         if(sortedlist159 != NULL && sortedlist159->n > 0) {
              cell_t* cell281 = sortedlist159->root;
              if(sortedlist159->n == 0) {
                  sortedlist159->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist159->root->val  = 28;
                  sortedlist159->root->next = NULL;
                  sortedlist159->n++;
              } else {
                  while(cell281 != NULL)
                  {
                      if(cell281->next == NULL && cell281->val < 28) {
                          cell281->next = (cell_t*)malloc(sizeof(cell_t));
                          cell281->next->next = NULL;
                          cell281->next->val  = 28;
                          sortedlist159->n++;
                          break;
                      } else if(28 < cell281->val) {
                          cell_t* tmp281 = cell281->next;
                          cell281->next = (cell_t*)malloc(sizeof(cell_t));
                          cell281->next->next = tmp281;
                          int tmp_val281 = cell281->val;
                          cell281->val = 28;
                          cell281->next->val = tmp_val281;
                          sortedlist159->n++;
                          break;
                      }
                      cell281 = cell281->next;
                  }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist155;
      params1.data[1] = sortedlist156;
      params1.data[2] = sortedlist159;
      sortedlist_t* sortedlist160 = func5(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist160 != NULL && sortedlist160->n > 0){
           cell_t* cell282 = sortedlist160->root;
           cell_t* tmp282  = NULL;
           while(cell282 != NULL) {
                tmp282 = cell282->next;
                free(cell282);
                cell282 = tmp282;
           }
           free(sortedlist160);
      }
      if(sortedlist159 != NULL && sortedlist159->n > 0){
           cell_t* cell283 = sortedlist159->root;
           cell_t* tmp283  = NULL;
           while(cell283 != NULL) {
                tmp283 = cell283->next;
                free(cell283);
                cell283 = tmp283;
           }
           free(sortedlist159);
      }
      if(sortedlist156 != NULL && sortedlist156->n > 0){
           cell_t* cell284 = sortedlist156->root;
           cell_t* tmp284  = NULL;
           while(cell284 != NULL) {
                tmp284 = cell284->next;
                free(cell284);
                cell284 = tmp284;
           }
           free(sortedlist156);
      }
   }
   else {
      sortedlist_t* sortedlist161 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist161->n = 0;
      sortedlist161->root = NULL;
      if(sortedlist161 != NULL && sortedlist161->n > 0) {
           cell_t* cell285 = sortedlist161->root;
           if(sortedlist161->n == 0) {
               sortedlist161->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist161->root->val  = 50;
               sortedlist161->root->next = NULL;
               sortedlist161->n++;
           } else {
               while(cell285 != NULL)
               {
                   if(cell285->next == NULL && cell285->val < 50) {
                       cell285->next = (cell_t*)malloc(sizeof(cell_t));
                       cell285->next->next = NULL;
                       cell285->next->val  = 50;
                       sortedlist161->n++;
                       break;
                   } else if(50 < cell285->val) {
                       cell_t* tmp285 = cell285->next;
                       cell285->next = (cell_t*)malloc(sizeof(cell_t));
                       cell285->next->next = tmp285;
                       int tmp_val285 = cell285->val;
                       cell285->val = 50;
                       cell285->next->val = tmp_val285;
                       sortedlist161->n++;
                       break;
                   }
                   cell285 = cell285->next;
               }
           }
      }
      if(sortedlist155 != NULL && sortedlist155->n > 0){
           cell_t* cell286 = sortedlist155->root;
           while(cell286 != NULL && cell286->val != 58) cell286 = cell286->next;
           return cell286 != NULL ? sortedlist155 : NULL;
      }
      if(sortedlist155 != NULL && sortedlist155->n > 0)
      {
          cell_t* cell287 = sortedlist155->root;
          if(cell287->val == 24)
          {
              cell287 = cell287->next;
              sortedlist155->n--;
          }else{
              while(cell287->next != NULL && cell287->next->val != 24) cell287 = cell287->next;
              if(cell287->next != NULL)
              {
                  cell287 = cell287->next->next;
                  sortedlist155->n--;
              }
           }
      }
      sortedlist_t* sortedlist162 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist162->n = 0;
      sortedlist162->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop64 = 0;
         unsigned int loopLimit64 = (rand()%loopsFactor)/2 + 1;
         for(; loop64 < loopLimit64; loop64++) {
            sortedlist_t* sortedlist163 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist163->n = 0;
            sortedlist163->root = NULL;
            if(sortedlist162 != NULL && sortedlist162->n > 0)
            {
                cell_t* cell288 = sortedlist162->root;
                if(cell288->val == 69)
                {
                    cell288 = cell288->next;
                    sortedlist162->n--;
                }else{
                    while(cell288->next != NULL && cell288->next->val != 69) cell288 = cell288->next;
                    if(cell288->next != NULL)
                    {
                        cell288 = cell288->next->next;
                        sortedlist162->n--;
                    }
                 }
            }
            if(sortedlist155 != NULL && sortedlist155->n > 0){
                 cell_t* cell289 = sortedlist155->root;
                 while(cell289 != NULL && cell289->val != 81) cell289 = cell289->next;
                 return cell289 != NULL ? sortedlist155 : NULL;
            }
            if(sortedlist163 != NULL && sortedlist163->n > 0){
                 cell_t* cell290 = sortedlist163->root;
                 cell_t* tmp290  = NULL;
                 while(cell290 != NULL) {
                      tmp290 = cell290->next;
                      free(cell290);
                      cell290 = tmp290;
                 }
                 free(sortedlist163);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist155;
         params0.data[1] = sortedlist161;
         params0.data[2] = sortedlist162;
         sortedlist_t* sortedlist164 = func11(&params0, rng(), loopsFactor);
         free(params0.data);
         if(sortedlist164 != NULL && sortedlist164->n > 0){
              cell_t* cell291 = sortedlist164->root;
              cell_t* tmp291  = NULL;
              while(cell291 != NULL) {
                   tmp291 = cell291->next;
                   free(cell291);
                   cell291 = tmp291;
              }
              free(sortedlist164);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist155;
      params0.data[1] = sortedlist161;
      params0.data[2] = sortedlist162;
      sortedlist_t* sortedlist165 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist165 != NULL && sortedlist165->n > 0){
           cell_t* cell292 = sortedlist165->root;
           cell_t* tmp292  = NULL;
           while(cell292 != NULL) {
                tmp292 = cell292->next;
                free(cell292);
                cell292 = tmp292;
           }
           free(sortedlist165);
      }
      if(sortedlist162 != NULL && sortedlist162->n > 0){
           cell_t* cell293 = sortedlist162->root;
           cell_t* tmp293  = NULL;
           while(cell293 != NULL) {
                tmp293 = cell293->next;
                free(cell293);
                cell293 = tmp293;
           }
           free(sortedlist162);
      }
      if(sortedlist161 != NULL && sortedlist161->n > 0){
           cell_t* cell294 = sortedlist161->root;
           cell_t* tmp294  = NULL;
           while(cell294 != NULL) {
                tmp294 = cell294->next;
                free(cell294);
                cell294 = tmp294;
           }
           free(sortedlist161);
      }
   }
   unsigned int loop65 = 0;
   unsigned int loopLimit65 = (rand()%loopsFactor)/2 + 1;
   for(; loop65 < loopLimit65; loop65++) {
      if(sortedlist155 != NULL && sortedlist155->n > 0) {
           cell_t* cell295 = sortedlist155->root;
           if(sortedlist155->n == 0) {
               sortedlist155->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist155->root->val  = 84;
               sortedlist155->root->next = NULL;
               sortedlist155->n++;
           } else {
               while(cell295 != NULL)
               {
                   if(cell295->next == NULL && cell295->val < 84) {
                       cell295->next = (cell_t*)malloc(sizeof(cell_t));
                       cell295->next->next = NULL;
                       cell295->next->val  = 84;
                       sortedlist155->n++;
                       break;
                   } else if(84 < cell295->val) {
                       cell_t* tmp295 = cell295->next;
                       cell295->next = (cell_t*)malloc(sizeof(cell_t));
                       cell295->next->next = tmp295;
                       int tmp_val295 = cell295->val;
                       cell295->val = 84;
                       cell295->next->val = tmp_val295;
                       sortedlist155->n++;
                       break;
                   }
                   cell295 = cell295->next;
               }
           }
      }
      sortedlist_t* sortedlist166 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist166->n = 0;
      sortedlist166->root = NULL;
      if(sortedlist155 != NULL && sortedlist155->n > 0) {
           cell_t* cell296 = sortedlist155->root;
           if(sortedlist155->n == 0) {
               sortedlist155->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist155->root->val  = 72;
               sortedlist155->root->next = NULL;
               sortedlist155->n++;
           } else {
               while(cell296 != NULL)
               {
                   if(cell296->next == NULL && cell296->val < 72) {
                       cell296->next = (cell_t*)malloc(sizeof(cell_t));
                       cell296->next->next = NULL;
                       cell296->next->val  = 72;
                       sortedlist155->n++;
                       break;
                   } else if(72 < cell296->val) {
                       cell_t* tmp296 = cell296->next;
                       cell296->next = (cell_t*)malloc(sizeof(cell_t));
                       cell296->next->next = tmp296;
                       int tmp_val296 = cell296->val;
                       cell296->val = 72;
                       cell296->next->val = tmp_val296;
                       sortedlist155->n++;
                       break;
                   }
                   cell296 = cell296->next;
               }
           }
      }
      if(sortedlist155 != NULL && sortedlist155->n > 0){
           cell_t* cell297 = sortedlist155->root;
           while(cell297 != NULL && cell297->val != 50) cell297 = cell297->next;
           return cell297 != NULL ? sortedlist155 : NULL;
      }
      if(sortedlist166 != NULL && sortedlist166->n > 0)
      {
          cell_t* cell298 = sortedlist166->root;
          if(cell298->val == 85)
          {
              cell298 = cell298->next;
              sortedlist166->n--;
          }else{
              while(cell298->next != NULL && cell298->next->val != 85) cell298 = cell298->next;
              if(cell298->next != NULL)
              {
                  cell298 = cell298->next->next;
                  sortedlist166->n--;
              }
           }
      }
      sortedlist_t* sortedlist167 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist167->n = 0;
      sortedlist167->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop66 = 0;
         unsigned int loopLimit66 = (rand()%loopsFactor)/3 + 1;
         for(; loop66 < loopLimit66; loop66++) {
            sortedlist_t* sortedlist168 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist168->n = 0;
            sortedlist168->root = NULL;
            if(sortedlist167 != NULL && sortedlist167->n > 0)
            {
                cell_t* cell299 = sortedlist167->root;
                if(cell299->val == 99)
                {
                    cell299 = cell299->next;
                    sortedlist167->n--;
                }else{
                    while(cell299->next != NULL && cell299->next->val != 99) cell299 = cell299->next;
                    if(cell299->next != NULL)
                    {
                        cell299 = cell299->next->next;
                        sortedlist167->n--;
                    }
                 }
            }
            if(sortedlist155 != NULL && sortedlist155->n > 0){
                 cell_t* cell300 = sortedlist155->root;
                 while(cell300 != NULL && cell300->val != 42) cell300 = cell300->next;
                 return cell300 != NULL ? sortedlist155 : NULL;
            }
            if(sortedlist168 != NULL && sortedlist168->n > 0){
                 cell_t* cell301 = sortedlist168->root;
                 cell_t* tmp301  = NULL;
                 while(cell301 != NULL) {
                      tmp301 = cell301->next;
                      free(cell301);
                      cell301 = tmp301;
                 }
                 free(sortedlist168);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist155;
         params0.data[1] = sortedlist166;
         params0.data[2] = sortedlist167;
         sortedlist_t* sortedlist169 = func11(&params0, rng(), loopsFactor);
         free(params0.data);
         if(sortedlist169 != NULL && sortedlist169->n > 0){
              cell_t* cell302 = sortedlist169->root;
              cell_t* tmp302  = NULL;
              while(cell302 != NULL) {
                   tmp302 = cell302->next;
                   free(cell302);
                   cell302 = tmp302;
              }
              free(sortedlist169);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist155;
      params0.data[1] = sortedlist166;
      params0.data[2] = sortedlist167;
      sortedlist_t* sortedlist170 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist170 != NULL && sortedlist170->n > 0){
           cell_t* cell303 = sortedlist170->root;
           cell_t* tmp303  = NULL;
           while(cell303 != NULL) {
                tmp303 = cell303->next;
                free(cell303);
                cell303 = tmp303;
           }
           free(sortedlist170);
      }
      if(sortedlist167 != NULL && sortedlist167->n > 0){
           cell_t* cell304 = sortedlist167->root;
           cell_t* tmp304  = NULL;
           while(cell304 != NULL) {
                tmp304 = cell304->next;
                free(cell304);
                cell304 = tmp304;
           }
           free(sortedlist167);
      }
      if(sortedlist166 != NULL && sortedlist166->n > 0){
           cell_t* cell305 = sortedlist166->root;
           cell_t* tmp305  = NULL;
           while(cell305 != NULL) {
                tmp305 = cell305->next;
                free(cell305);
                cell305 = tmp305;
           }
           free(sortedlist166);
      }
   }
   return sortedlist155;
}

