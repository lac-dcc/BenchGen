#include "P5_SL.h" 
sortedlist_t* func2(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist26 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist26->n = 0;
   sortedlist26->root = NULL;
   unsigned int loop24 = 0;
   unsigned int loopLimit24 = (rand()%loopsFactor)/2 + 1;
   for(; loop24 < loopLimit24; loop24++) {
      if(sortedlist26 != NULL && sortedlist26->n > 0)
      {
          cell_t* cell54 = sortedlist26->root;
          if(cell54->val == 82)
          {
              cell54 = cell54->next;
              sortedlist26->n--;
          }else{
              while(cell54->next != NULL && cell54->next->val != 82) cell54 = cell54->next;
              if(cell54->next != NULL)
              {
                  cell54 = cell54->next->next;
                  sortedlist26->n--;
              }
           }
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist26;
   sortedlist_t* sortedlist27 = func10(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop26 = 0;
   unsigned int loopLimit26 = (rand()%loopsFactor)/2 + 1;
   for(; loop26 < loopLimit26; loop26++) {
      if(sortedlist26 != NULL && sortedlist26->n > 0)
      {
          cell_t* cell59 = sortedlist26->root;
          if(cell59->val == 78)
          {
              cell59 = cell59->next;
              sortedlist26->n--;
          }else{
              while(cell59->next != NULL && cell59->next->val != 78) cell59 = cell59->next;
              if(cell59->next != NULL)
              {
                  cell59 = cell59->next->next;
                  sortedlist26->n--;
              }
           }
      }
   }
   unsigned int loop27 = 0;
   unsigned int loopLimit27 = (rand()%loopsFactor)/2 + 1;
   for(; loop27 < loopLimit27; loop27++) {
      sortedlist_t* sortedlist29 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist29->n = 0;
      sortedlist29->root = NULL;
      sortedlist_t* sortedlist30 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist30->n = 0;
      sortedlist30->root = NULL;
      if(sortedlist26 != NULL && sortedlist26->n > 0){
           cell_t* cell60 = sortedlist26->root;
           while(cell60 != NULL && cell60->val != 84) cell60 = cell60->next;
           return cell60 != NULL ? sortedlist26 : NULL;
      }
      unsigned int loop28 = 0;
      unsigned int loopLimit28 = (rand()%loopsFactor)/3 + 1;
      for(; loop28 < loopLimit28; loop28++) {
         if(sortedlist30 != NULL && sortedlist30->n > 0){
              cell_t* cell61 = sortedlist30->root;
              while(cell61 != NULL && cell61->val != 51) cell61 = cell61->next;
              return cell61 != NULL ? sortedlist30 : NULL;
         }
      }
      if(sortedlist30 != NULL && sortedlist30->n > 0){
           cell_t* cell62 = sortedlist30->root;
           cell_t* tmp62  = NULL;
           while(cell62 != NULL) {
                tmp62 = cell62->next;
                free(cell62);
                cell62 = tmp62;
           }
           free(sortedlist30);
      }
      if(sortedlist29 != NULL && sortedlist29->n > 0){
           cell_t* cell63 = sortedlist29->root;
           cell_t* tmp63  = NULL;
           while(cell63 != NULL) {
                tmp63 = cell63->next;
                free(cell63);
                cell63 = tmp63;
           }
           free(sortedlist29);
      }
   }
   sortedlist_t* sortedlist31 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist31->n = 0;
   sortedlist31->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop29 = 0;
      unsigned int loopLimit29 = (rand()%loopsFactor)/2 + 1;
      for(; loop29 < loopLimit29; loop29++) {
         sortedlist_t* sortedlist32 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist32->n = 0;
         sortedlist32->root = NULL;
         if(sortedlist31 != NULL && sortedlist31->n > 0){
              cell_t* cell64 = sortedlist31->root;
              while(cell64 != NULL && cell64->val != 99) cell64 = cell64->next;
              return cell64 != NULL ? sortedlist31 : NULL;
         }
         unsigned int loop30 = 0;
         unsigned int loopLimit30 = (rand()%loopsFactor)/3 + 1;
         for(; loop30 < loopLimit30; loop30++) {
            if(sortedlist26 != NULL && sortedlist26->n > 0) {
                 cell_t* cell65 = sortedlist26->root;
                 if(sortedlist26->n == 0) {
                     sortedlist26->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist26->root->val  = 60;
                     sortedlist26->root->next = NULL;
                     sortedlist26->n++;
                 } else {
                     while(cell65 != NULL)
                     {
                         if(cell65->next == NULL && cell65->val < 60) {
                             cell65->next = (cell_t*)malloc(sizeof(cell_t));
                             cell65->next->next = NULL;
                             cell65->next->val  = 60;
                             sortedlist26->n++;
                             break;
                         } else if(60 < cell65->val) {
                             cell_t* tmp65 = cell65->next;
                             cell65->next = (cell_t*)malloc(sizeof(cell_t));
                             cell65->next->next = tmp65;
                             int tmp_val65 = cell65->val;
                             cell65->val = 60;
                             cell65->next->val = tmp_val65;
                             sortedlist26->n++;
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
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist26;
      params1.data[1] = sortedlist27;
      params1.data[2] = sortedlist31;
      sortedlist_t* sortedlist33 = func8(&params1, loopsFactor);
      free(params1.data);
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
   unsigned int loop31 = 0;
   unsigned int loopLimit31 = (rand()%loopsFactor)/2 + 1;
   for(; loop31 < loopLimit31; loop31++) {
      if(sortedlist31 != NULL && sortedlist31->n > 0) {
           cell_t* cell68 = sortedlist31->root;
           if(sortedlist31->n == 0) {
               sortedlist31->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist31->root->val  = 68;
               sortedlist31->root->next = NULL;
               sortedlist31->n++;
           } else {
               while(cell68 != NULL)
               {
                   if(cell68->next == NULL && cell68->val < 68) {
                       cell68->next = (cell_t*)malloc(sizeof(cell_t));
                       cell68->next->next = NULL;
                       cell68->next->val  = 68;
                       sortedlist31->n++;
                       break;
                   } else if(68 < cell68->val) {
                       cell_t* tmp68 = cell68->next;
                       cell68->next = (cell_t*)malloc(sizeof(cell_t));
                       cell68->next->next = tmp68;
                       int tmp_val68 = cell68->val;
                       cell68->val = 68;
                       cell68->next->val = tmp_val68;
                       sortedlist31->n++;
                       break;
                   }
                   cell68 = cell68->next;
               }
           }
      }
      if(sortedlist27 != NULL && sortedlist27->n > 0)
      {
          cell_t* cell69 = sortedlist27->root;
          if(cell69->val == 12)
          {
              cell69 = cell69->next;
              sortedlist27->n--;
          }else{
              while(cell69->next != NULL && cell69->next->val != 12) cell69 = cell69->next;
              if(cell69->next != NULL)
              {
                  cell69 = cell69->next->next;
                  sortedlist27->n--;
              }
           }
      }
      if(sortedlist27 != NULL && sortedlist27->n > 0)
      {
          cell_t* cell70 = sortedlist27->root;
          if(cell70->val == 86)
          {
              cell70 = cell70->next;
              sortedlist27->n--;
          }else{
              while(cell70->next != NULL && cell70->next->val != 86) cell70 = cell70->next;
              if(cell70->next != NULL)
              {
                  cell70 = cell70->next->next;
                  sortedlist27->n--;
              }
           }
      }
   }
   sortedlist_t_param params1;
   params1.size = 3;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist26;
   params1.data[1] = sortedlist27;
   params1.data[2] = sortedlist31;
   sortedlist_t* sortedlist34 = func6(&params1, rng(), loopsFactor);
   free(params1.data);
   if(sortedlist34 != NULL && sortedlist34->n > 0){
        cell_t* cell94 = sortedlist34->root;
        while(cell94 != NULL && cell94->val != 9) cell94 = cell94->next;
        return cell94 != NULL ? sortedlist34 : NULL;
   }
   if(sortedlist31 != NULL && sortedlist31->n > 0){
        cell_t* cell95 = sortedlist31->root;
        cell_t* tmp95  = NULL;
        while(cell95 != NULL) {
             tmp95 = cell95->next;
             free(cell95);
             cell95 = tmp95;
        }
        free(sortedlist31);
   }
   if(sortedlist27 != NULL && sortedlist27->n > 0){
        cell_t* cell96 = sortedlist27->root;
        cell_t* tmp96  = NULL;
        while(cell96 != NULL) {
             tmp96 = cell96->next;
             free(cell96);
             cell96 = tmp96;
        }
        free(sortedlist27);
   }
   if(sortedlist26 != NULL && sortedlist26->n > 0){
        cell_t* cell97 = sortedlist26->root;
        cell_t* tmp97  = NULL;
        while(cell97 != NULL) {
             tmp97 = cell97->next;
             free(cell97);
             cell97 = tmp97;
        }
        free(sortedlist26);
   }
   return sortedlist34;
}

