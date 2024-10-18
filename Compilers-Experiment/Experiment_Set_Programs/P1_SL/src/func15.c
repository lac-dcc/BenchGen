#include "P1_SL.h" 
sortedlist_t* func15(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist46 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist46->n = 0;
   sortedlist46->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop21 = 0;
      unsigned int loopLimit21 = (rand()%loopsFactor)/2 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         if(sortedlist46 != NULL && sortedlist46->n > 0)
         {
             cell_t* cell75 = sortedlist46->root;
             if(cell75->val == 92)
             {
                 cell75 = cell75->next;
                 sortedlist46->n--;
             }else{
                 while(cell75->next != NULL && cell75->next->val != 92) cell75 = cell75->next;
                 if(cell75->next != NULL)
                 {
                     cell75 = cell75->next->next;
                     sortedlist46->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist47 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist47->n = 0;
      sortedlist47->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop22 = 0;
         unsigned int loopLimit22 = (rand()%loopsFactor)/2 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            sortedlist_t* sortedlist48 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist48->n = 0;
            sortedlist48->root = NULL;
            if(sortedlist47 != NULL && sortedlist47->n > 0)
            {
                cell_t* cell76 = sortedlist47->root;
                if(cell76->val == 56)
                {
                    cell76 = cell76->next;
                    sortedlist47->n--;
                }else{
                    while(cell76->next != NULL && cell76->next->val != 56) cell76 = cell76->next;
                    if(cell76->next != NULL)
                    {
                        cell76 = cell76->next->next;
                        sortedlist47->n--;
                    }
                 }
            }
            if(sortedlist47 != NULL && sortedlist47->n > 0){
                 cell_t* cell77 = sortedlist47->root;
                 while(cell77 != NULL && cell77->val != 80) cell77 = cell77->next;
                 return cell77 != NULL ? sortedlist47 : NULL;
            }
            if(sortedlist48 != NULL && sortedlist48->n > 0){
                 cell_t* cell78 = sortedlist48->root;
                 cell_t* tmp78  = NULL;
                 while(cell78 != NULL) {
                      tmp78 = cell78->next;
                      free(cell78);
                      cell78 = tmp78;
                 }
                 free(sortedlist48);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist46;
         params0.data[1] = sortedlist47;
         sortedlist_t* sortedlist49 = func25(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist49 != NULL && sortedlist49->n > 0){
              cell_t* cell79 = sortedlist49->root;
              cell_t* tmp79  = NULL;
              while(cell79 != NULL) {
                   tmp79 = cell79->next;
                   free(cell79);
                   cell79 = tmp79;
              }
              free(sortedlist49);
         }
      }
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist46;
      params0.data[1] = sortedlist47;
      sortedlist_t* sortedlist50 = func22(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop23 = 0;
      unsigned int loopLimit23 = (rand()%loopsFactor)/2 + 1;
      for(; loop23 < loopLimit23; loop23++) {
         if(sortedlist50 != NULL && sortedlist50->n > 0) {
              cell_t* cell80 = sortedlist50->root;
              if(sortedlist50->n == 0) {
                  sortedlist50->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist50->root->val  = 41;
                  sortedlist50->root->next = NULL;
                  sortedlist50->n++;
              } else {
                  while(cell80 != NULL)
                  {
                      if(cell80->next == NULL && cell80->val < 41) {
                          cell80->next = (cell_t*)malloc(sizeof(cell_t));
                          cell80->next->next = NULL;
                          cell80->next->val  = 41;
                          sortedlist50->n++;
                          break;
                      } else if(41 < cell80->val) {
                          cell_t* tmp80 = cell80->next;
                          cell80->next = (cell_t*)malloc(sizeof(cell_t));
                          cell80->next->next = tmp80;
                          int tmp_val80 = cell80->val;
                          cell80->val = 41;
                          cell80->next->val = tmp_val80;
                          sortedlist50->n++;
                          break;
                      }
                      cell80 = cell80->next;
                  }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist46;
      params1.data[1] = sortedlist47;
      params1.data[2] = sortedlist50;
      sortedlist_t* sortedlist51 = func19(&params1, loopsFactor);
      free(params1.data);
      if(sortedlist51 != NULL && sortedlist51->n > 0){
           cell_t* cell85 = sortedlist51->root;
           cell_t* tmp85  = NULL;
           while(cell85 != NULL) {
                tmp85 = cell85->next;
                free(cell85);
                cell85 = tmp85;
           }
           free(sortedlist51);
      }
      if(sortedlist50 != NULL && sortedlist50->n > 0){
           cell_t* cell86 = sortedlist50->root;
           cell_t* tmp86  = NULL;
           while(cell86 != NULL) {
                tmp86 = cell86->next;
                free(cell86);
                cell86 = tmp86;
           }
           free(sortedlist50);
      }
      if(sortedlist47 != NULL && sortedlist47->n > 0){
           cell_t* cell87 = sortedlist47->root;
           cell_t* tmp87  = NULL;
           while(cell87 != NULL) {
                tmp87 = cell87->next;
                free(cell87);
                cell87 = tmp87;
           }
           free(sortedlist47);
      }
   }
   else {
      sortedlist_t* sortedlist54 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist54->n = 0;
      sortedlist54->root = NULL;
      if(sortedlist54 != NULL && sortedlist54->n > 0) {
           cell_t* cell88 = sortedlist54->root;
           if(sortedlist54->n == 0) {
               sortedlist54->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist54->root->val  = 97;
               sortedlist54->root->next = NULL;
               sortedlist54->n++;
           } else {
               while(cell88 != NULL)
               {
                   if(cell88->next == NULL && cell88->val < 97) {
                       cell88->next = (cell_t*)malloc(sizeof(cell_t));
                       cell88->next->next = NULL;
                       cell88->next->val  = 97;
                       sortedlist54->n++;
                       break;
                   } else if(97 < cell88->val) {
                       cell_t* tmp88 = cell88->next;
                       cell88->next = (cell_t*)malloc(sizeof(cell_t));
                       cell88->next->next = tmp88;
                       int tmp_val88 = cell88->val;
                       cell88->val = 97;
                       cell88->next->val = tmp_val88;
                       sortedlist54->n++;
                       break;
                   }
                   cell88 = cell88->next;
               }
           }
      }
      if(sortedlist54 != NULL && sortedlist54->n > 0){
           cell_t* cell89 = sortedlist54->root;
           while(cell89 != NULL && cell89->val != 81) cell89 = cell89->next;
           return cell89 != NULL ? sortedlist54 : NULL;
      }
      if(sortedlist54 != NULL && sortedlist54->n > 0)
      {
          cell_t* cell90 = sortedlist54->root;
          if(cell90->val == 9)
          {
              cell90 = cell90->next;
              sortedlist54->n--;
          }else{
              while(cell90->next != NULL && cell90->next->val != 9) cell90 = cell90->next;
              if(cell90->next != NULL)
              {
                  cell90 = cell90->next->next;
                  sortedlist54->n--;
              }
           }
      }
      sortedlist_t* sortedlist55 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist55->n = 0;
      sortedlist55->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (rand()%loopsFactor)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            sortedlist_t* sortedlist56 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist56->n = 0;
            sortedlist56->root = NULL;
            if(sortedlist56 != NULL && sortedlist56->n > 0)
            {
                cell_t* cell91 = sortedlist56->root;
                if(cell91->val == 67)
                {
                    cell91 = cell91->next;
                    sortedlist56->n--;
                }else{
                    while(cell91->next != NULL && cell91->next->val != 67) cell91 = cell91->next;
                    if(cell91->next != NULL)
                    {
                        cell91 = cell91->next->next;
                        sortedlist56->n--;
                    }
                 }
            }
            if(sortedlist46 != NULL && sortedlist46->n > 0){
                 cell_t* cell92 = sortedlist46->root;
                 while(cell92 != NULL && cell92->val != 97) cell92 = cell92->next;
                 return cell92 != NULL ? sortedlist46 : NULL;
            }
            if(sortedlist56 != NULL && sortedlist56->n > 0){
                 cell_t* cell93 = sortedlist56->root;
                 cell_t* tmp93  = NULL;
                 while(cell93 != NULL) {
                      tmp93 = cell93->next;
                      free(cell93);
                      cell93 = tmp93;
                 }
                 free(sortedlist56);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist46;
         params0.data[1] = sortedlist54;
         params0.data[2] = sortedlist55;
         sortedlist_t* sortedlist57 = func25(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist57 != NULL && sortedlist57->n > 0){
              cell_t* cell94 = sortedlist57->root;
              cell_t* tmp94  = NULL;
              while(cell94 != NULL) {
                   tmp94 = cell94->next;
                   free(cell94);
                   cell94 = tmp94;
              }
              free(sortedlist57);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist46;
      params0.data[1] = sortedlist54;
      params0.data[2] = sortedlist55;
      sortedlist_t* sortedlist58 = func22(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist58 != NULL && sortedlist58->n > 0){
           cell_t* cell95 = sortedlist58->root;
           cell_t* tmp95  = NULL;
           while(cell95 != NULL) {
                tmp95 = cell95->next;
                free(cell95);
                cell95 = tmp95;
           }
           free(sortedlist58);
      }
      if(sortedlist55 != NULL && sortedlist55->n > 0){
           cell_t* cell96 = sortedlist55->root;
           cell_t* tmp96  = NULL;
           while(cell96 != NULL) {
                tmp96 = cell96->next;
                free(cell96);
                cell96 = tmp96;
           }
           free(sortedlist55);
      }
      if(sortedlist54 != NULL && sortedlist54->n > 0){
           cell_t* cell97 = sortedlist54->root;
           cell_t* tmp97  = NULL;
           while(cell97 != NULL) {
                tmp97 = cell97->next;
                free(cell97);
                cell97 = tmp97;
           }
           free(sortedlist54);
      }
   }
   unsigned int loop25 = 0;
   unsigned int loopLimit25 = (rand()%loopsFactor)/2 + 1;
   for(; loop25 < loopLimit25; loop25++) {
      if(sortedlist46 != NULL && sortedlist46->n > 0) {
           cell_t* cell98 = sortedlist46->root;
           if(sortedlist46->n == 0) {
               sortedlist46->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist46->root->val  = 86;
               sortedlist46->root->next = NULL;
               sortedlist46->n++;
           } else {
               while(cell98 != NULL)
               {
                   if(cell98->next == NULL && cell98->val < 86) {
                       cell98->next = (cell_t*)malloc(sizeof(cell_t));
                       cell98->next->next = NULL;
                       cell98->next->val  = 86;
                       sortedlist46->n++;
                       break;
                   } else if(86 < cell98->val) {
                       cell_t* tmp98 = cell98->next;
                       cell98->next = (cell_t*)malloc(sizeof(cell_t));
                       cell98->next->next = tmp98;
                       int tmp_val98 = cell98->val;
                       cell98->val = 86;
                       cell98->next->val = tmp_val98;
                       sortedlist46->n++;
                       break;
                   }
                   cell98 = cell98->next;
               }
           }
      }
      sortedlist_t* sortedlist59 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist59->n = 0;
      sortedlist59->root = NULL;
      if(sortedlist59 != NULL && sortedlist59->n > 0) {
           cell_t* cell99 = sortedlist59->root;
           if(sortedlist59->n == 0) {
               sortedlist59->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist59->root->val  = 6;
               sortedlist59->root->next = NULL;
               sortedlist59->n++;
           } else {
               while(cell99 != NULL)
               {
                   if(cell99->next == NULL && cell99->val < 6) {
                       cell99->next = (cell_t*)malloc(sizeof(cell_t));
                       cell99->next->next = NULL;
                       cell99->next->val  = 6;
                       sortedlist59->n++;
                       break;
                   } else if(6 < cell99->val) {
                       cell_t* tmp99 = cell99->next;
                       cell99->next = (cell_t*)malloc(sizeof(cell_t));
                       cell99->next->next = tmp99;
                       int tmp_val99 = cell99->val;
                       cell99->val = 6;
                       cell99->next->val = tmp_val99;
                       sortedlist59->n++;
                       break;
                   }
                   cell99 = cell99->next;
               }
           }
      }
      if(sortedlist59 != NULL && sortedlist59->n > 0){
           cell_t* cell100 = sortedlist59->root;
           while(cell100 != NULL && cell100->val != 19) cell100 = cell100->next;
           return cell100 != NULL ? sortedlist59 : NULL;
      }
      if(sortedlist46 != NULL && sortedlist46->n > 0)
      {
          cell_t* cell101 = sortedlist46->root;
          if(cell101->val == 28)
          {
              cell101 = cell101->next;
              sortedlist46->n--;
          }else{
              while(cell101->next != NULL && cell101->next->val != 28) cell101 = cell101->next;
              if(cell101->next != NULL)
              {
                  cell101 = cell101->next->next;
                  sortedlist46->n--;
              }
           }
      }
      sortedlist_t* sortedlist60 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist60->n = 0;
      sortedlist60->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop26 = 0;
         unsigned int loopLimit26 = (rand()%loopsFactor)/3 + 1;
         for(; loop26 < loopLimit26; loop26++) {
            sortedlist_t* sortedlist61 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist61->n = 0;
            sortedlist61->root = NULL;
            if(sortedlist61 != NULL && sortedlist61->n > 0)
            {
                cell_t* cell102 = sortedlist61->root;
                if(cell102->val == 32)
                {
                    cell102 = cell102->next;
                    sortedlist61->n--;
                }else{
                    while(cell102->next != NULL && cell102->next->val != 32) cell102 = cell102->next;
                    if(cell102->next != NULL)
                    {
                        cell102 = cell102->next->next;
                        sortedlist61->n--;
                    }
                 }
            }
            if(sortedlist59 != NULL && sortedlist59->n > 0){
                 cell_t* cell103 = sortedlist59->root;
                 while(cell103 != NULL && cell103->val != 3) cell103 = cell103->next;
                 return cell103 != NULL ? sortedlist59 : NULL;
            }
            if(sortedlist61 != NULL && sortedlist61->n > 0){
                 cell_t* cell104 = sortedlist61->root;
                 cell_t* tmp104  = NULL;
                 while(cell104 != NULL) {
                      tmp104 = cell104->next;
                      free(cell104);
                      cell104 = tmp104;
                 }
                 free(sortedlist61);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist46;
         params0.data[1] = sortedlist59;
         params0.data[2] = sortedlist60;
         sortedlist_t* sortedlist62 = func25(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist62 != NULL && sortedlist62->n > 0){
              cell_t* cell105 = sortedlist62->root;
              cell_t* tmp105  = NULL;
              while(cell105 != NULL) {
                   tmp105 = cell105->next;
                   free(cell105);
                   cell105 = tmp105;
              }
              free(sortedlist62);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist46;
      params0.data[1] = sortedlist59;
      params0.data[2] = sortedlist60;
      sortedlist_t* sortedlist63 = func22(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist63 != NULL && sortedlist63->n > 0){
           cell_t* cell106 = sortedlist63->root;
           cell_t* tmp106  = NULL;
           while(cell106 != NULL) {
                tmp106 = cell106->next;
                free(cell106);
                cell106 = tmp106;
           }
           free(sortedlist63);
      }
      if(sortedlist60 != NULL && sortedlist60->n > 0){
           cell_t* cell107 = sortedlist60->root;
           cell_t* tmp107  = NULL;
           while(cell107 != NULL) {
                tmp107 = cell107->next;
                free(cell107);
                cell107 = tmp107;
           }
           free(sortedlist60);
      }
      if(sortedlist59 != NULL && sortedlist59->n > 0){
           cell_t* cell108 = sortedlist59->root;
           cell_t* tmp108  = NULL;
           while(cell108 != NULL) {
                tmp108 = cell108->next;
                free(cell108);
                cell108 = tmp108;
           }
           free(sortedlist59);
      }
   }
   return sortedlist46;
}

