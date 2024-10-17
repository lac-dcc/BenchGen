#include "P1_SL.h" 
sortedlist_t* func16(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist85 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist85->n = 0;
   sortedlist85->root = NULL;
   unsigned int loop34 = 0;
   unsigned int loopLimit34 = (rand()%loopsFactor)/2 + 1;
   for(; loop34 < loopLimit34; loop34++) {
      if(sortedlist85 != NULL && sortedlist85->n > 0)
      {
          cell_t* cell150 = sortedlist85->root;
          if(cell150->val == 28)
          {
              cell150 = cell150->next;
              sortedlist85->n--;
          }else{
              while(cell150->next != NULL && cell150->next->val != 28) cell150 = cell150->next;
              if(cell150->next != NULL)
              {
                  cell150 = cell150->next->next;
                  sortedlist85->n--;
              }
           }
      }
   }
   sortedlist_t* sortedlist86 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist86->n = 0;
   sortedlist86->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop35 = 0;
      unsigned int loopLimit35 = (rand()%loopsFactor)/2 + 1;
      for(; loop35 < loopLimit35; loop35++) {
         sortedlist_t* sortedlist87 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist87->n = 0;
         sortedlist87->root = NULL;
         if(sortedlist85 != NULL && sortedlist85->n > 0)
         {
             cell_t* cell151 = sortedlist85->root;
             if(cell151->val == 11)
             {
                 cell151 = cell151->next;
                 sortedlist85->n--;
             }else{
                 while(cell151->next != NULL && cell151->next->val != 11) cell151 = cell151->next;
                 if(cell151->next != NULL)
                 {
                     cell151 = cell151->next->next;
                     sortedlist85->n--;
                 }
              }
         }
         if(sortedlist85 != NULL && sortedlist85->n > 0){
              cell_t* cell152 = sortedlist85->root;
              while(cell152 != NULL && cell152->val != 29) cell152 = cell152->next;
              return cell152 != NULL ? sortedlist85 : NULL;
         }
         if(sortedlist87 != NULL && sortedlist87->n > 0){
              cell_t* cell153 = sortedlist87->root;
              cell_t* tmp153  = NULL;
              while(cell153 != NULL) {
                   tmp153 = cell153->next;
                   free(cell153);
                   cell153 = tmp153;
              }
              free(sortedlist87);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist85;
      params0.data[1] = sortedlist86;
      sortedlist_t* sortedlist88 = func25(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist88 != NULL && sortedlist88->n > 0){
           cell_t* cell154 = sortedlist88->root;
           cell_t* tmp154  = NULL;
           while(cell154 != NULL) {
                tmp154 = cell154->next;
                free(cell154);
                cell154 = tmp154;
           }
           free(sortedlist88);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist85;
   params0.data[1] = sortedlist86;
   sortedlist_t* sortedlist89 = func22(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop36 = 0;
   unsigned int loopLimit36 = (rand()%loopsFactor)/2 + 1;
   for(; loop36 < loopLimit36; loop36++) {
      if(sortedlist89 != NULL && sortedlist89->n > 0) {
           cell_t* cell155 = sortedlist89->root;
           if(sortedlist89->n == 0) {
               sortedlist89->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist89->root->val  = 4;
               sortedlist89->root->next = NULL;
               sortedlist89->n++;
           } else {
               while(cell155 != NULL)
               {
                   if(cell155->next == NULL && cell155->val < 4) {
                       cell155->next = (cell_t*)malloc(sizeof(cell_t));
                       cell155->next->next = NULL;
                       cell155->next->val  = 4;
                       sortedlist89->n++;
                       break;
                   } else if(4 < cell155->val) {
                       cell_t* tmp155 = cell155->next;
                       cell155->next = (cell_t*)malloc(sizeof(cell_t));
                       cell155->next->next = tmp155;
                       int tmp_val155 = cell155->val;
                       cell155->val = 4;
                       cell155->next->val = tmp_val155;
                       sortedlist89->n++;
                       break;
                   }
                   cell155 = cell155->next;
               }
           }
      }
   }
   sortedlist_t_param params1;
   params1.size = 3;
   params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
   params1.data[0] = sortedlist85;
   params1.data[1] = sortedlist86;
   params1.data[2] = sortedlist89;
   sortedlist_t* sortedlist90 = func19(&params1, loopsFactor);
   free(params1.data);
   if(sortedlist90 != NULL && sortedlist90->n > 0){
        cell_t* cell156 = sortedlist90->root;
        while(cell156 != NULL && cell156->val != 63) cell156 = cell156->next;
        return cell156 != NULL ? sortedlist90 : NULL;
   }
   if(sortedlist90 != NULL && sortedlist90->n > 0){
        cell_t* cell157 = sortedlist90->root;
        cell_t* tmp157  = NULL;
        while(cell157 != NULL) {
             tmp157 = cell157->next;
             free(cell157);
             cell157 = tmp157;
        }
        free(sortedlist90);
   }
   if(sortedlist89 != NULL && sortedlist89->n > 0){
        cell_t* cell158 = sortedlist89->root;
        cell_t* tmp158  = NULL;
        while(cell158 != NULL) {
             tmp158 = cell158->next;
             free(cell158);
             cell158 = tmp158;
        }
        free(sortedlist89);
   }
   if(sortedlist85 != NULL && sortedlist85->n > 0){
        cell_t* cell159 = sortedlist85->root;
        cell_t* tmp159  = NULL;
        while(cell159 != NULL) {
             tmp159 = cell159->next;
             free(cell159);
             cell159 = tmp159;
        }
        free(sortedlist85);
   }
   return sortedlist86;
}

