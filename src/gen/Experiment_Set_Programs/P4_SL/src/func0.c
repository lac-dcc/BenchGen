#include "P4_SL.h" 
sortedlist_t* func0(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist25 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist25->n = 0;
   sortedlist25->root = NULL;
   unsigned int loop24 = 0;
   unsigned int loopLimit24 = (rand()%loopsFactor)/2 + 1;
   for(; loop24 < loopLimit24; loop24++) {
      if(sortedlist25 != NULL && sortedlist25->n > 0)
      {
          cell_t* cell53 = sortedlist25->root;
          if(cell53->val == 24)
          {
              cell53 = cell53->next;
              sortedlist25->n--;
          }else{
              while(cell53->next != NULL && cell53->next->val != 24) cell53 = cell53->next;
              if(cell53->next != NULL)
              {
                  cell53 = cell53->next->next;
                  sortedlist25->n--;
              }
           }
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist25;
   sortedlist_t* sortedlist26 = func8(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop26 = 0;
   unsigned int loopLimit26 = (rand()%loopsFactor)/2 + 1;
   for(; loop26 < loopLimit26; loop26++) {
      if(sortedlist26 != NULL && sortedlist26->n > 0)
      {
          cell_t* cell58 = sortedlist26->root;
          if(cell58->val == 8)
          {
              cell58 = cell58->next;
              sortedlist26->n--;
          }else{
              while(cell58->next != NULL && cell58->next->val != 8) cell58 = cell58->next;
              if(cell58->next != NULL)
              {
                  cell58 = cell58->next->next;
                  sortedlist26->n--;
              }
           }
      }
   }
   unsigned int loop27 = 0;
   unsigned int loopLimit27 = (rand()%loopsFactor)/2 + 1;
   for(; loop27 < loopLimit27; loop27++) {
      sortedlist_t* sortedlist28 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist28->n = 0;
      sortedlist28->root = NULL;
      sortedlist_t* sortedlist29 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist29->n = 0;
      sortedlist29->root = NULL;
      if(sortedlist25 != NULL && sortedlist25->n > 0){
           cell_t* cell59 = sortedlist25->root;
           while(cell59 != NULL && cell59->val != 78) cell59 = cell59->next;
           return cell59 != NULL ? sortedlist25 : NULL;
      }
      unsigned int loop28 = 0;
      unsigned int loopLimit28 = (rand()%loopsFactor)/3 + 1;
      for(; loop28 < loopLimit28; loop28++) {
         if(sortedlist25 != NULL && sortedlist25->n > 0){
              cell_t* cell60 = sortedlist25->root;
              while(cell60 != NULL && cell60->val != 84) cell60 = cell60->next;
              return cell60 != NULL ? sortedlist25 : NULL;
         }
      }
      if(sortedlist29 != NULL && sortedlist29->n > 0){
           cell_t* cell61 = sortedlist29->root;
           cell_t* tmp61  = NULL;
           while(cell61 != NULL) {
                tmp61 = cell61->next;
                free(cell61);
                cell61 = tmp61;
           }
           free(sortedlist29);
      }
      if(sortedlist28 != NULL && sortedlist28->n > 0){
           cell_t* cell62 = sortedlist28->root;
           cell_t* tmp62  = NULL;
           while(cell62 != NULL) {
                tmp62 = cell62->next;
                free(cell62);
                cell62 = tmp62;
           }
           free(sortedlist28);
      }
   }
   sortedlist_t* sortedlist30 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist30->n = 0;
   sortedlist30->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop29 = 0;
      unsigned int loopLimit29 = (rand()%loopsFactor)/2 + 1;
      for(; loop29 < loopLimit29; loop29++) {
         sortedlist_t* sortedlist31 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist31->n = 0;
         sortedlist31->root = NULL;
         if(sortedlist31 != NULL && sortedlist31->n > 0){
              cell_t* cell63 = sortedlist31->root;
              while(cell63 != NULL && cell63->val != 51) cell63 = cell63->next;
              return cell63 != NULL ? sortedlist31 : NULL;
         }
         unsigned int loop30 = 0;
         unsigned int loopLimit30 = (rand()%loopsFactor)/3 + 1;
         for(; loop30 < loopLimit30; loop30++) {
            if(sortedlist30 != NULL && sortedlist30->n > 0) {
                 cell_t* cell64 = sortedlist30->root;
                 if(sortedlist30->n == 0) {
                     sortedlist30->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist30->root->val  = 99;
                     sortedlist30->root->next = NULL;
                     sortedlist30->n++;
                 } else {
                     while(cell64 != NULL)
                     {
                         if(cell64->next == NULL && cell64->val < 99) {
                             cell64->next = (cell_t*)malloc(sizeof(cell_t));
                             cell64->next->next = NULL;
                             cell64->next->val  = 99;
                             sortedlist30->n++;
                             break;
                         } else if(99 < cell64->val) {
                             cell_t* tmp64 = cell64->next;
                             cell64->next = (cell_t*)malloc(sizeof(cell_t));
                             cell64->next->next = tmp64;
                             int tmp_val64 = cell64->val;
                             cell64->val = 99;
                             cell64->next->val = tmp_val64;
                             sortedlist30->n++;
                             break;
                         }
                         cell64 = cell64->next;
                     }
                 }
            }
         }
         if(sortedlist31 != NULL && sortedlist31->n > 0){
              cell_t* cell65 = sortedlist31->root;
              cell_t* tmp65  = NULL;
              while(cell65 != NULL) {
                   tmp65 = cell65->next;
                   free(cell65);
                   cell65 = tmp65;
              }
              free(sortedlist31);
         }
      }
   }
   else {
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist25;
      params1.data[1] = sortedlist26;
      params1.data[2] = sortedlist30;
      sortedlist_t* sortedlist32 = func6(&params1, loopsFactor);
      free(params1.data);
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
   unsigned int loop31 = 0;
   unsigned int loopLimit31 = (rand()%loopsFactor)/2 + 1;
   for(; loop31 < loopLimit31; loop31++) {
      if(sortedlist25 != NULL && sortedlist25->n > 0) {
           cell_t* cell67 = sortedlist25->root;
           if(sortedlist25->n == 0) {
               sortedlist25->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist25->root->val  = 60;
               sortedlist25->root->next = NULL;
               sortedlist25->n++;
           } else {
               while(cell67 != NULL)
               {
                   if(cell67->next == NULL && cell67->val < 60) {
                       cell67->next = (cell_t*)malloc(sizeof(cell_t));
                       cell67->next->next = NULL;
                       cell67->next->val  = 60;
                       sortedlist25->n++;
                       break;
                   } else if(60 < cell67->val) {
                       cell_t* tmp67 = cell67->next;
                       cell67->next = (cell_t*)malloc(sizeof(cell_t));
                       cell67->next->next = tmp67;
                       int tmp_val67 = cell67->val;
                       cell67->val = 60;
                       cell67->next->val = tmp_val67;
                       sortedlist25->n++;
                       break;
                   }
                   cell67 = cell67->next;
               }
           }
      }
      if(sortedlist30 != NULL && sortedlist30->n > 0)
      {
          cell_t* cell68 = sortedlist30->root;
          if(cell68->val == 68)
          {
              cell68 = cell68->next;
              sortedlist30->n--;
          }else{
              while(cell68->next != NULL && cell68->next->val != 68) cell68 = cell68->next;
              if(cell68->next != NULL)
              {
                  cell68 = cell68->next->next;
                  sortedlist30->n--;
              }
           }
      }
      if(sortedlist26 != NULL && sortedlist26->n > 0)
      {
          cell_t* cell69 = sortedlist26->root;
          if(cell69->val == 12)
          {
              cell69 = cell69->next;
              sortedlist26->n--;
          }else{
              while(cell69->next != NULL && cell69->next->val != 12) cell69 = cell69->next;
              if(cell69->next != NULL)
              {
                  cell69 = cell69->next->next;
                  sortedlist26->n--;
              }
           }
      }
   }
   sortedlist_t_param params1;
   params1.size = 3;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist25;
   params1.data[1] = sortedlist26;
   params1.data[2] = sortedlist30;
   sortedlist_t* sortedlist33 = func4(&params1, rng(), loopsFactor);
   free(params1.data);
   if(sortedlist33 != NULL && sortedlist33->n > 0){
        cell_t* cell93 = sortedlist33->root;
        while(cell93 != NULL && cell93->val != 81) cell93 = cell93->next;
        return cell93 != NULL ? sortedlist33 : NULL;
   }
   if(sortedlist30 != NULL && sortedlist30->n > 0){
        cell_t* cell94 = sortedlist30->root;
        cell_t* tmp94  = NULL;
        while(cell94 != NULL) {
             tmp94 = cell94->next;
             free(cell94);
             cell94 = tmp94;
        }
        free(sortedlist30);
   }
   if(sortedlist26 != NULL && sortedlist26->n > 0){
        cell_t* cell95 = sortedlist26->root;
        cell_t* tmp95  = NULL;
        while(cell95 != NULL) {
             tmp95 = cell95->next;
             free(cell95);
             cell95 = tmp95;
        }
        free(sortedlist26);
   }
   if(sortedlist25 != NULL && sortedlist25->n > 0){
        cell_t* cell96 = sortedlist25->root;
        cell_t* tmp96  = NULL;
        while(cell96 != NULL) {
             tmp96 = cell96->next;
             free(cell96);
             cell96 = tmp96;
        }
        free(sortedlist25);
   }
   return sortedlist33;
}

