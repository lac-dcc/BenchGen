#include "P1_SL.h" 
sortedlist_t* func13(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist92 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist92->n = 0;
   sortedlist92->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop37 = 0;
      unsigned int loopLimit37 = (rand()%loopsFactor)/2 + 1;
      for(; loop37 < loopLimit37; loop37++) {
         if(sortedlist92 != NULL && sortedlist92->n > 0)
         {
             cell_t* cell161 = sortedlist92->root;
             if(cell161->val == 6)
             {
                 cell161 = cell161->next;
                 sortedlist92->n--;
             }else{
                 while(cell161->next != NULL && cell161->next->val != 6) cell161 = cell161->next;
                 if(cell161->next != NULL)
                 {
                     cell161 = cell161->next->next;
                     sortedlist92->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist93 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist93->n = 0;
      sortedlist93->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop38 = 0;
         unsigned int loopLimit38 = (rand()%loopsFactor)/2 + 1;
         for(; loop38 < loopLimit38; loop38++) {
            sortedlist_t* sortedlist94 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist94->n = 0;
            sortedlist94->root = NULL;
            if(sortedlist93 != NULL && sortedlist93->n > 0)
            {
                cell_t* cell162 = sortedlist93->root;
                if(cell162->val == 4)
                {
                    cell162 = cell162->next;
                    sortedlist93->n--;
                }else{
                    while(cell162->next != NULL && cell162->next->val != 4) cell162 = cell162->next;
                    if(cell162->next != NULL)
                    {
                        cell162 = cell162->next->next;
                        sortedlist93->n--;
                    }
                 }
            }
            if(sortedlist93 != NULL && sortedlist93->n > 0){
                 cell_t* cell163 = sortedlist93->root;
                 while(cell163 != NULL && cell163->val != 28) cell163 = cell163->next;
                 return cell163 != NULL ? sortedlist93 : NULL;
            }
            if(sortedlist94 != NULL && sortedlist94->n > 0){
                 cell_t* cell164 = sortedlist94->root;
                 cell_t* tmp164  = NULL;
                 while(cell164 != NULL) {
                      tmp164 = cell164->next;
                      free(cell164);
                      cell164 = tmp164;
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
         sortedlist_t* sortedlist95 = func20(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist95 != NULL && sortedlist95->n > 0){
              cell_t* cell165 = sortedlist95->root;
              cell_t* tmp165  = NULL;
              while(cell165 != NULL) {
                   tmp165 = cell165->next;
                   free(cell165);
                   cell165 = tmp165;
              }
              free(sortedlist95);
         }
      }
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist92;
      params0.data[1] = sortedlist93;
      sortedlist_t* sortedlist96 = func17(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop39 = 0;
      unsigned int loopLimit39 = (rand()%loopsFactor)/2 + 1;
      for(; loop39 < loopLimit39; loop39++) {
         if(sortedlist92 != NULL && sortedlist92->n > 0) {
              cell_t* cell166 = sortedlist92->root;
              if(sortedlist92->n == 0) {
                  sortedlist92->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist92->root->val  = 69;
                  sortedlist92->root->next = NULL;
                  sortedlist92->n++;
              } else {
                  while(cell166 != NULL)
                  {
                      if(cell166->next == NULL && cell166->val < 69) {
                          cell166->next = (cell_t*)malloc(sizeof(cell_t));
                          cell166->next->next = NULL;
                          cell166->next->val  = 69;
                          sortedlist92->n++;
                          break;
                      } else if(69 < cell166->val) {
                          cell_t* tmp166 = cell166->next;
                          cell166->next = (cell_t*)malloc(sizeof(cell_t));
                          cell166->next->next = tmp166;
                          int tmp_val166 = cell166->val;
                          cell166->val = 69;
                          cell166->next->val = tmp_val166;
                          sortedlist92->n++;
                          break;
                      }
                      cell166 = cell166->next;
                  }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist92;
      params1.data[1] = sortedlist93;
      params1.data[2] = sortedlist96;
      sortedlist_t* sortedlist97 = func14(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist97 != NULL && sortedlist97->n > 0){
           cell_t* cell167 = sortedlist97->root;
           cell_t* tmp167  = NULL;
           while(cell167 != NULL) {
                tmp167 = cell167->next;
                free(cell167);
                cell167 = tmp167;
           }
           free(sortedlist97);
      }
      if(sortedlist96 != NULL && sortedlist96->n > 0){
           cell_t* cell168 = sortedlist96->root;
           cell_t* tmp168  = NULL;
           while(cell168 != NULL) {
                tmp168 = cell168->next;
                free(cell168);
                cell168 = tmp168;
           }
           free(sortedlist96);
      }
      if(sortedlist93 != NULL && sortedlist93->n > 0){
           cell_t* cell169 = sortedlist93->root;
           cell_t* tmp169  = NULL;
           while(cell169 != NULL) {
                tmp169 = cell169->next;
                free(cell169);
                cell169 = tmp169;
           }
           free(sortedlist93);
      }
   }
   else {
      sortedlist_t* sortedlist98 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist98->n = 0;
      sortedlist98->root = NULL;
      if(sortedlist98 != NULL && sortedlist98->n > 0) {
           cell_t* cell170 = sortedlist98->root;
           if(sortedlist98->n == 0) {
               sortedlist98->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist98->root->val  = 17;
               sortedlist98->root->next = NULL;
               sortedlist98->n++;
           } else {
               while(cell170 != NULL)
               {
                   if(cell170->next == NULL && cell170->val < 17) {
                       cell170->next = (cell_t*)malloc(sizeof(cell_t));
                       cell170->next->next = NULL;
                       cell170->next->val  = 17;
                       sortedlist98->n++;
                       break;
                   } else if(17 < cell170->val) {
                       cell_t* tmp170 = cell170->next;
                       cell170->next = (cell_t*)malloc(sizeof(cell_t));
                       cell170->next->next = tmp170;
                       int tmp_val170 = cell170->val;
                       cell170->val = 17;
                       cell170->next->val = tmp_val170;
                       sortedlist98->n++;
                       break;
                   }
                   cell170 = cell170->next;
               }
           }
      }
      if(sortedlist92 != NULL && sortedlist92->n > 0){
           cell_t* cell171 = sortedlist92->root;
           while(cell171 != NULL && cell171->val != 24) cell171 = cell171->next;
           return cell171 != NULL ? sortedlist92 : NULL;
      }
      if(sortedlist98 != NULL && sortedlist98->n > 0)
      {
          cell_t* cell172 = sortedlist98->root;
          if(cell172->val == 70)
          {
              cell172 = cell172->next;
              sortedlist98->n--;
          }else{
              while(cell172->next != NULL && cell172->next->val != 70) cell172 = cell172->next;
              if(cell172->next != NULL)
              {
                  cell172 = cell172->next->next;
                  sortedlist98->n--;
              }
           }
      }
      sortedlist_t* sortedlist99 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist99->n = 0;
      sortedlist99->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop40 = 0;
         unsigned int loopLimit40 = (rand()%loopsFactor)/2 + 1;
         for(; loop40 < loopLimit40; loop40++) {
            sortedlist_t* sortedlist100 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist100->n = 0;
            sortedlist100->root = NULL;
            if(sortedlist100 != NULL && sortedlist100->n > 0)
            {
                cell_t* cell173 = sortedlist100->root;
                if(cell173->val == 90)
                {
                    cell173 = cell173->next;
                    sortedlist100->n--;
                }else{
                    while(cell173->next != NULL && cell173->next->val != 90) cell173 = cell173->next;
                    if(cell173->next != NULL)
                    {
                        cell173 = cell173->next->next;
                        sortedlist100->n--;
                    }
                 }
            }
            if(sortedlist100 != NULL && sortedlist100->n > 0){
                 cell_t* cell174 = sortedlist100->root;
                 while(cell174 != NULL && cell174->val != 72) cell174 = cell174->next;
                 return cell174 != NULL ? sortedlist100 : NULL;
            }
            if(sortedlist100 != NULL && sortedlist100->n > 0){
                 cell_t* cell175 = sortedlist100->root;
                 cell_t* tmp175  = NULL;
                 while(cell175 != NULL) {
                      tmp175 = cell175->next;
                      free(cell175);
                      cell175 = tmp175;
                 }
                 free(sortedlist100);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist92;
         params0.data[1] = sortedlist98;
         params0.data[2] = sortedlist99;
         sortedlist_t* sortedlist101 = func20(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist101 != NULL && sortedlist101->n > 0){
              cell_t* cell176 = sortedlist101->root;
              cell_t* tmp176  = NULL;
              while(cell176 != NULL) {
                   tmp176 = cell176->next;
                   free(cell176);
                   cell176 = tmp176;
              }
              free(sortedlist101);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist92;
      params0.data[1] = sortedlist98;
      params0.data[2] = sortedlist99;
      sortedlist_t* sortedlist102 = func17(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist102 != NULL && sortedlist102->n > 0){
           cell_t* cell177 = sortedlist102->root;
           cell_t* tmp177  = NULL;
           while(cell177 != NULL) {
                tmp177 = cell177->next;
                free(cell177);
                cell177 = tmp177;
           }
           free(sortedlist102);
      }
      if(sortedlist99 != NULL && sortedlist99->n > 0){
           cell_t* cell178 = sortedlist99->root;
           cell_t* tmp178  = NULL;
           while(cell178 != NULL) {
                tmp178 = cell178->next;
                free(cell178);
                cell178 = tmp178;
           }
           free(sortedlist99);
      }
      if(sortedlist98 != NULL && sortedlist98->n > 0){
           cell_t* cell179 = sortedlist98->root;
           cell_t* tmp179  = NULL;
           while(cell179 != NULL) {
                tmp179 = cell179->next;
                free(cell179);
                cell179 = tmp179;
           }
           free(sortedlist98);
      }
   }
   unsigned int loop41 = 0;
   unsigned int loopLimit41 = (rand()%loopsFactor)/2 + 1;
   for(; loop41 < loopLimit41; loop41++) {
      if(sortedlist92 != NULL && sortedlist92->n > 0) {
           cell_t* cell180 = sortedlist92->root;
           if(sortedlist92->n == 0) {
               sortedlist92->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist92->root->val  = 44;
               sortedlist92->root->next = NULL;
               sortedlist92->n++;
           } else {
               while(cell180 != NULL)
               {
                   if(cell180->next == NULL && cell180->val < 44) {
                       cell180->next = (cell_t*)malloc(sizeof(cell_t));
                       cell180->next->next = NULL;
                       cell180->next->val  = 44;
                       sortedlist92->n++;
                       break;
                   } else if(44 < cell180->val) {
                       cell_t* tmp180 = cell180->next;
                       cell180->next = (cell_t*)malloc(sizeof(cell_t));
                       cell180->next->next = tmp180;
                       int tmp_val180 = cell180->val;
                       cell180->val = 44;
                       cell180->next->val = tmp_val180;
                       sortedlist92->n++;
                       break;
                   }
                   cell180 = cell180->next;
               }
           }
      }
      sortedlist_t* sortedlist103 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist103->n = 0;
      sortedlist103->root = NULL;
      if(sortedlist92 != NULL && sortedlist92->n > 0) {
           cell_t* cell181 = sortedlist92->root;
           if(sortedlist92->n == 0) {
               sortedlist92->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist92->root->val  = 5;
               sortedlist92->root->next = NULL;
               sortedlist92->n++;
           } else {
               while(cell181 != NULL)
               {
                   if(cell181->next == NULL && cell181->val < 5) {
                       cell181->next = (cell_t*)malloc(sizeof(cell_t));
                       cell181->next->next = NULL;
                       cell181->next->val  = 5;
                       sortedlist92->n++;
                       break;
                   } else if(5 < cell181->val) {
                       cell_t* tmp181 = cell181->next;
                       cell181->next = (cell_t*)malloc(sizeof(cell_t));
                       cell181->next->next = tmp181;
                       int tmp_val181 = cell181->val;
                       cell181->val = 5;
                       cell181->next->val = tmp_val181;
                       sortedlist92->n++;
                       break;
                   }
                   cell181 = cell181->next;
               }
           }
      }
      if(sortedlist103 != NULL && sortedlist103->n > 0){
           cell_t* cell182 = sortedlist103->root;
           while(cell182 != NULL && cell182->val != 54) cell182 = cell182->next;
           return cell182 != NULL ? sortedlist103 : NULL;
      }
      if(sortedlist92 != NULL && sortedlist92->n > 0)
      {
          cell_t* cell183 = sortedlist92->root;
          if(cell183->val == 69)
          {
              cell183 = cell183->next;
              sortedlist92->n--;
          }else{
              while(cell183->next != NULL && cell183->next->val != 69) cell183 = cell183->next;
              if(cell183->next != NULL)
              {
                  cell183 = cell183->next->next;
                  sortedlist92->n--;
              }
           }
      }
      sortedlist_t* sortedlist104 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist104->n = 0;
      sortedlist104->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop42 = 0;
         unsigned int loopLimit42 = (rand()%loopsFactor)/3 + 1;
         for(; loop42 < loopLimit42; loop42++) {
            sortedlist_t* sortedlist105 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist105->n = 0;
            sortedlist105->root = NULL;
            if(sortedlist104 != NULL && sortedlist104->n > 0)
            {
                cell_t* cell184 = sortedlist104->root;
                if(cell184->val == 42)
                {
                    cell184 = cell184->next;
                    sortedlist104->n--;
                }else{
                    while(cell184->next != NULL && cell184->next->val != 42) cell184 = cell184->next;
                    if(cell184->next != NULL)
                    {
                        cell184 = cell184->next->next;
                        sortedlist104->n--;
                    }
                 }
            }
            if(sortedlist92 != NULL && sortedlist92->n > 0){
                 cell_t* cell185 = sortedlist92->root;
                 while(cell185 != NULL && cell185->val != 97) cell185 = cell185->next;
                 return cell185 != NULL ? sortedlist92 : NULL;
            }
            if(sortedlist105 != NULL && sortedlist105->n > 0){
                 cell_t* cell186 = sortedlist105->root;
                 cell_t* tmp186  = NULL;
                 while(cell186 != NULL) {
                      tmp186 = cell186->next;
                      free(cell186);
                      cell186 = tmp186;
                 }
                 free(sortedlist105);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist92;
         params0.data[1] = sortedlist103;
         params0.data[2] = sortedlist104;
         sortedlist_t* sortedlist106 = func20(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist106 != NULL && sortedlist106->n > 0){
              cell_t* cell187 = sortedlist106->root;
              cell_t* tmp187  = NULL;
              while(cell187 != NULL) {
                   tmp187 = cell187->next;
                   free(cell187);
                   cell187 = tmp187;
              }
              free(sortedlist106);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist92;
      params0.data[1] = sortedlist103;
      params0.data[2] = sortedlist104;
      sortedlist_t* sortedlist107 = func17(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist107 != NULL && sortedlist107->n > 0){
           cell_t* cell188 = sortedlist107->root;
           cell_t* tmp188  = NULL;
           while(cell188 != NULL) {
                tmp188 = cell188->next;
                free(cell188);
                cell188 = tmp188;
           }
           free(sortedlist107);
      }
      if(sortedlist104 != NULL && sortedlist104->n > 0){
           cell_t* cell189 = sortedlist104->root;
           cell_t* tmp189  = NULL;
           while(cell189 != NULL) {
                tmp189 = cell189->next;
                free(cell189);
                cell189 = tmp189;
           }
           free(sortedlist104);
      }
      if(sortedlist103 != NULL && sortedlist103->n > 0){
           cell_t* cell190 = sortedlist103->root;
           cell_t* tmp190  = NULL;
           while(cell190 != NULL) {
                tmp190 = cell190->next;
                free(cell190);
                cell190 = tmp190;
           }
           free(sortedlist103);
      }
   }
   return sortedlist92;
}

