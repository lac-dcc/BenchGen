#include "P1_SL.h" 
sortedlist_t* func8(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist38 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist38->n = 0;
   sortedlist38->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop17 = 0;
      unsigned int loopLimit17 = (rand()%loopsFactor)/2 + 1;
      for(; loop17 < loopLimit17; loop17++) {
         if(sortedlist38 != NULL && sortedlist38->n > 0)
         {
             cell_t* cell65 = sortedlist38->root;
             if(cell65->val == 26)
             {
                 cell65 = cell65->next;
                 sortedlist38->n--;
             }else{
                 while(cell65->next != NULL && cell65->next->val != 26) cell65 = cell65->next;
                 if(cell65->next != NULL)
                 {
                     cell65 = cell65->next->next;
                     sortedlist38->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist39 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist39->n = 0;
      sortedlist39->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop18 = 0;
         unsigned int loopLimit18 = (rand()%loopsFactor)/2 + 1;
         for(; loop18 < loopLimit18; loop18++) {
            sortedlist_t* sortedlist40 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist40->n = 0;
            sortedlist40->root = NULL;
            if(sortedlist38 != NULL && sortedlist38->n > 0)
            {
                cell_t* cell66 = sortedlist38->root;
                if(cell66->val == 94)
                {
                    cell66 = cell66->next;
                    sortedlist38->n--;
                }else{
                    while(cell66->next != NULL && cell66->next->val != 94) cell66 = cell66->next;
                    if(cell66->next != NULL)
                    {
                        cell66 = cell66->next->next;
                        sortedlist38->n--;
                    }
                 }
            }
            if(sortedlist40 != NULL && sortedlist40->n > 0){
                 cell_t* cell67 = sortedlist40->root;
                 while(cell67 != NULL && cell67->val != 95) cell67 = cell67->next;
                 return cell67 != NULL ? sortedlist40 : NULL;
            }
            if(sortedlist40 != NULL && sortedlist40->n > 0){
                 cell_t* cell68 = sortedlist40->root;
                 cell_t* tmp68  = NULL;
                 while(cell68 != NULL) {
                      tmp68 = cell68->next;
                      free(cell68);
                      cell68 = tmp68;
                 }
                 free(sortedlist40);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist38;
         params0.data[1] = sortedlist39;
         sortedlist_t* sortedlist41 = func18(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist41 != NULL && sortedlist41->n > 0){
              cell_t* cell74 = sortedlist41->root;
              cell_t* tmp74  = NULL;
              while(cell74 != NULL) {
                   tmp74 = cell74->next;
                   free(cell74);
                   cell74 = tmp74;
              }
              free(sortedlist41);
         }
      }
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist38;
      params0.data[1] = sortedlist39;
      sortedlist_t* sortedlist45 = func15(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop27 = 0;
      unsigned int loopLimit27 = (rand()%loopsFactor)/2 + 1;
      for(; loop27 < loopLimit27; loop27++) {
         if(sortedlist38 != NULL && sortedlist38->n > 0) {
              cell_t* cell109 = sortedlist38->root;
              if(sortedlist38->n == 0) {
                  sortedlist38->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist38->root->val  = 68;
                  sortedlist38->root->next = NULL;
                  sortedlist38->n++;
              } else {
                  while(cell109 != NULL)
                  {
                      if(cell109->next == NULL && cell109->val < 68) {
                          cell109->next = (cell_t*)malloc(sizeof(cell_t));
                          cell109->next->next = NULL;
                          cell109->next->val  = 68;
                          sortedlist38->n++;
                          break;
                      } else if(68 < cell109->val) {
                          cell_t* tmp109 = cell109->next;
                          cell109->next = (cell_t*)malloc(sizeof(cell_t));
                          cell109->next->next = tmp109;
                          int tmp_val109 = cell109->val;
                          cell109->val = 68;
                          cell109->next->val = tmp_val109;
                          sortedlist38->n++;
                          break;
                      }
                      cell109 = cell109->next;
                  }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist38;
      params1.data[1] = sortedlist39;
      params1.data[2] = sortedlist45;
      sortedlist_t* sortedlist64 = func12(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist64 != NULL && sortedlist64->n > 0){
           cell_t* cell119 = sortedlist64->root;
           cell_t* tmp119  = NULL;
           while(cell119 != NULL) {
                tmp119 = cell119->next;
                free(cell119);
                cell119 = tmp119;
           }
           free(sortedlist64);
      }
      if(sortedlist45 != NULL && sortedlist45->n > 0){
           cell_t* cell120 = sortedlist45->root;
           cell_t* tmp120  = NULL;
           while(cell120 != NULL) {
                tmp120 = cell120->next;
                free(cell120);
                cell120 = tmp120;
           }
           free(sortedlist45);
      }
      if(sortedlist39 != NULL && sortedlist39->n > 0){
           cell_t* cell121 = sortedlist39->root;
           cell_t* tmp121  = NULL;
           while(cell121 != NULL) {
                tmp121 = cell121->next;
                free(cell121);
                cell121 = tmp121;
           }
           free(sortedlist39);
      }
   }
   else {
      sortedlist_t* sortedlist70 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist70->n = 0;
      sortedlist70->root = NULL;
      if(sortedlist70 != NULL && sortedlist70->n > 0) {
           cell_t* cell122 = sortedlist70->root;
           if(sortedlist70->n == 0) {
               sortedlist70->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist70->root->val  = 79;
               sortedlist70->root->next = NULL;
               sortedlist70->n++;
           } else {
               while(cell122 != NULL)
               {
                   if(cell122->next == NULL && cell122->val < 79) {
                       cell122->next = (cell_t*)malloc(sizeof(cell_t));
                       cell122->next->next = NULL;
                       cell122->next->val  = 79;
                       sortedlist70->n++;
                       break;
                   } else if(79 < cell122->val) {
                       cell_t* tmp122 = cell122->next;
                       cell122->next = (cell_t*)malloc(sizeof(cell_t));
                       cell122->next->next = tmp122;
                       int tmp_val122 = cell122->val;
                       cell122->val = 79;
                       cell122->next->val = tmp_val122;
                       sortedlist70->n++;
                       break;
                   }
                   cell122 = cell122->next;
               }
           }
      }
      if(sortedlist38 != NULL && sortedlist38->n > 0){
           cell_t* cell123 = sortedlist38->root;
           while(cell123 != NULL && cell123->val != 64) cell123 = cell123->next;
           return cell123 != NULL ? sortedlist38 : NULL;
      }
      if(sortedlist38 != NULL && sortedlist38->n > 0)
      {
          cell_t* cell124 = sortedlist38->root;
          if(cell124->val == 41)
          {
              cell124 = cell124->next;
              sortedlist38->n--;
          }else{
              while(cell124->next != NULL && cell124->next->val != 41) cell124 = cell124->next;
              if(cell124->next != NULL)
              {
                  cell124 = cell124->next->next;
                  sortedlist38->n--;
              }
           }
      }
      sortedlist_t* sortedlist71 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist71->n = 0;
      sortedlist71->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop29 = 0;
         unsigned int loopLimit29 = (rand()%loopsFactor)/2 + 1;
         for(; loop29 < loopLimit29; loop29++) {
            sortedlist_t* sortedlist72 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist72->n = 0;
            sortedlist72->root = NULL;
            if(sortedlist71 != NULL && sortedlist71->n > 0)
            {
                cell_t* cell125 = sortedlist71->root;
                if(cell125->val == 93)
                {
                    cell125 = cell125->next;
                    sortedlist71->n--;
                }else{
                    while(cell125->next != NULL && cell125->next->val != 93) cell125 = cell125->next;
                    if(cell125->next != NULL)
                    {
                        cell125 = cell125->next->next;
                        sortedlist71->n--;
                    }
                 }
            }
            if(sortedlist38 != NULL && sortedlist38->n > 0){
                 cell_t* cell126 = sortedlist38->root;
                 while(cell126 != NULL && cell126->val != 34) cell126 = cell126->next;
                 return cell126 != NULL ? sortedlist38 : NULL;
            }
            if(sortedlist72 != NULL && sortedlist72->n > 0){
                 cell_t* cell127 = sortedlist72->root;
                 cell_t* tmp127  = NULL;
                 while(cell127 != NULL) {
                      tmp127 = cell127->next;
                      free(cell127);
                      cell127 = tmp127;
                 }
                 free(sortedlist72);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist38;
         params0.data[1] = sortedlist70;
         params0.data[2] = sortedlist71;
         sortedlist_t* sortedlist73 = func18(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist73 != NULL && sortedlist73->n > 0){
              cell_t* cell128 = sortedlist73->root;
              cell_t* tmp128  = NULL;
              while(cell128 != NULL) {
                   tmp128 = cell128->next;
                   free(cell128);
                   cell128 = tmp128;
              }
              free(sortedlist73);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist38;
      params0.data[1] = sortedlist70;
      params0.data[2] = sortedlist71;
      sortedlist_t* sortedlist74 = func15(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist74 != NULL && sortedlist74->n > 0){
           cell_t* cell129 = sortedlist74->root;
           cell_t* tmp129  = NULL;
           while(cell129 != NULL) {
                tmp129 = cell129->next;
                free(cell129);
                cell129 = tmp129;
           }
           free(sortedlist74);
      }
      if(sortedlist71 != NULL && sortedlist71->n > 0){
           cell_t* cell130 = sortedlist71->root;
           cell_t* tmp130  = NULL;
           while(cell130 != NULL) {
                tmp130 = cell130->next;
                free(cell130);
                cell130 = tmp130;
           }
           free(sortedlist71);
      }
      if(sortedlist70 != NULL && sortedlist70->n > 0){
           cell_t* cell131 = sortedlist70->root;
           cell_t* tmp131  = NULL;
           while(cell131 != NULL) {
                tmp131 = cell131->next;
                free(cell131);
                cell131 = tmp131;
           }
           free(sortedlist70);
      }
   }
   unsigned int loop30 = 0;
   unsigned int loopLimit30 = (rand()%loopsFactor)/2 + 1;
   for(; loop30 < loopLimit30; loop30++) {
      if(sortedlist38 != NULL && sortedlist38->n > 0) {
           cell_t* cell132 = sortedlist38->root;
           if(sortedlist38->n == 0) {
               sortedlist38->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist38->root->val  = 24;
               sortedlist38->root->next = NULL;
               sortedlist38->n++;
           } else {
               while(cell132 != NULL)
               {
                   if(cell132->next == NULL && cell132->val < 24) {
                       cell132->next = (cell_t*)malloc(sizeof(cell_t));
                       cell132->next->next = NULL;
                       cell132->next->val  = 24;
                       sortedlist38->n++;
                       break;
                   } else if(24 < cell132->val) {
                       cell_t* tmp132 = cell132->next;
                       cell132->next = (cell_t*)malloc(sizeof(cell_t));
                       cell132->next->next = tmp132;
                       int tmp_val132 = cell132->val;
                       cell132->val = 24;
                       cell132->next->val = tmp_val132;
                       sortedlist38->n++;
                       break;
                   }
                   cell132 = cell132->next;
               }
           }
      }
      sortedlist_t* sortedlist75 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist75->n = 0;
      sortedlist75->root = NULL;
      if(sortedlist38 != NULL && sortedlist38->n > 0) {
           cell_t* cell133 = sortedlist38->root;
           if(sortedlist38->n == 0) {
               sortedlist38->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist38->root->val  = 87;
               sortedlist38->root->next = NULL;
               sortedlist38->n++;
           } else {
               while(cell133 != NULL)
               {
                   if(cell133->next == NULL && cell133->val < 87) {
                       cell133->next = (cell_t*)malloc(sizeof(cell_t));
                       cell133->next->next = NULL;
                       cell133->next->val  = 87;
                       sortedlist38->n++;
                       break;
                   } else if(87 < cell133->val) {
                       cell_t* tmp133 = cell133->next;
                       cell133->next = (cell_t*)malloc(sizeof(cell_t));
                       cell133->next->next = tmp133;
                       int tmp_val133 = cell133->val;
                       cell133->val = 87;
                       cell133->next->val = tmp_val133;
                       sortedlist38->n++;
                       break;
                   }
                   cell133 = cell133->next;
               }
           }
      }
      if(sortedlist38 != NULL && sortedlist38->n > 0){
           cell_t* cell134 = sortedlist38->root;
           while(cell134 != NULL && cell134->val != 43) cell134 = cell134->next;
           return cell134 != NULL ? sortedlist38 : NULL;
      }
      if(sortedlist75 != NULL && sortedlist75->n > 0)
      {
          cell_t* cell135 = sortedlist75->root;
          if(cell135->val == 27)
          {
              cell135 = cell135->next;
              sortedlist75->n--;
          }else{
              while(cell135->next != NULL && cell135->next->val != 27) cell135 = cell135->next;
              if(cell135->next != NULL)
              {
                  cell135 = cell135->next->next;
                  sortedlist75->n--;
              }
           }
      }
      sortedlist_t* sortedlist76 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist76->n = 0;
      sortedlist76->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop31 = 0;
         unsigned int loopLimit31 = (rand()%loopsFactor)/3 + 1;
         for(; loop31 < loopLimit31; loop31++) {
            sortedlist_t* sortedlist77 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist77->n = 0;
            sortedlist77->root = NULL;
            if(sortedlist75 != NULL && sortedlist75->n > 0)
            {
                cell_t* cell136 = sortedlist75->root;
                if(cell136->val == 59)
                {
                    cell136 = cell136->next;
                    sortedlist75->n--;
                }else{
                    while(cell136->next != NULL && cell136->next->val != 59) cell136 = cell136->next;
                    if(cell136->next != NULL)
                    {
                        cell136 = cell136->next->next;
                        sortedlist75->n--;
                    }
                 }
            }
            if(sortedlist38 != NULL && sortedlist38->n > 0){
                 cell_t* cell137 = sortedlist38->root;
                 while(cell137 != NULL && cell137->val != 32) cell137 = cell137->next;
                 return cell137 != NULL ? sortedlist38 : NULL;
            }
            if(sortedlist77 != NULL && sortedlist77->n > 0){
                 cell_t* cell138 = sortedlist77->root;
                 cell_t* tmp138  = NULL;
                 while(cell138 != NULL) {
                      tmp138 = cell138->next;
                      free(cell138);
                      cell138 = tmp138;
                 }
                 free(sortedlist77);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist38;
         params0.data[1] = sortedlist75;
         params0.data[2] = sortedlist76;
         sortedlist_t* sortedlist78 = func18(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist78 != NULL && sortedlist78->n > 0){
              cell_t* cell139 = sortedlist78->root;
              cell_t* tmp139  = NULL;
              while(cell139 != NULL) {
                   tmp139 = cell139->next;
                   free(cell139);
                   cell139 = tmp139;
              }
              free(sortedlist78);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist38;
      params0.data[1] = sortedlist75;
      params0.data[2] = sortedlist76;
      sortedlist_t* sortedlist79 = func15(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist79 != NULL && sortedlist79->n > 0){
           cell_t* cell140 = sortedlist79->root;
           cell_t* tmp140  = NULL;
           while(cell140 != NULL) {
                tmp140 = cell140->next;
                free(cell140);
                cell140 = tmp140;
           }
           free(sortedlist79);
      }
      if(sortedlist76 != NULL && sortedlist76->n > 0){
           cell_t* cell141 = sortedlist76->root;
           cell_t* tmp141  = NULL;
           while(cell141 != NULL) {
                tmp141 = cell141->next;
                free(cell141);
                cell141 = tmp141;
           }
           free(sortedlist76);
      }
      if(sortedlist75 != NULL && sortedlist75->n > 0){
           cell_t* cell142 = sortedlist75->root;
           cell_t* tmp142  = NULL;
           while(cell142 != NULL) {
                tmp142 = cell142->next;
                free(cell142);
                cell142 = tmp142;
           }
           free(sortedlist75);
      }
   }
   return sortedlist38;
}

