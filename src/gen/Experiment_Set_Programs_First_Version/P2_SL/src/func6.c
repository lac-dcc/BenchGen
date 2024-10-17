#include "P2_SL.h" 
sortedlist_t* func6(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist57 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist57->n = 0;
   sortedlist57->root = NULL;
   unsigned int loop51 = 0;
   unsigned int loopLimit51 = (rand()%loopsFactor)/2 + 1;
   for(; loop51 < loopLimit51; loop51++) {
      if(sortedlist57 != NULL && sortedlist57->n > 0)
      {
          cell_t* cell125 = sortedlist57->root;
          if(cell125->val == 51)
          {
              cell125 = cell125->next;
              sortedlist57->n--;
          }else{
              while(cell125->next != NULL && cell125->next->val != 51) cell125 = cell125->next;
              if(cell125->next != NULL)
              {
                  cell125 = cell125->next->next;
                  sortedlist57->n--;
              }
           }
      }
   }
   if(sortedlist57 != NULL && sortedlist57->n > 0) {
        cell_t* cell126 = sortedlist57->root;
        if(sortedlist57->n == 0) {
            sortedlist57->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist57->root->val  = 28;
            sortedlist57->root->next = NULL;
            sortedlist57->n++;
        } else {
            while(cell126 != NULL)
            {
                if(cell126->next == NULL && cell126->val < 28) {
                    cell126->next = (cell_t*)malloc(sizeof(cell_t));
                    cell126->next->next = NULL;
                    cell126->next->val  = 28;
                    sortedlist57->n++;
                    break;
                } else if(28 < cell126->val) {
                    cell_t* tmp126 = cell126->next;
                    cell126->next = (cell_t*)malloc(sizeof(cell_t));
                    cell126->next->next = tmp126;
                    int tmp_val126 = cell126->val;
                    cell126->val = 28;
                    cell126->next->val = tmp_val126;
                    sortedlist57->n++;
                    break;
                }
                cell126 = cell126->next;
            }
        }
   }
   if(sortedlist57 != NULL && sortedlist57->n > 0){
        cell_t* cell127 = sortedlist57->root;
        while(cell127 != NULL && cell127->val != 7) cell127 = cell127->next;
        return cell127 != NULL ? sortedlist57 : NULL;
   }
   if(sortedlist57 != NULL && sortedlist57->n > 0)
   {
       cell_t* cell128 = sortedlist57->root;
       if(cell128->val == 21)
       {
           cell128 = cell128->next;
           sortedlist57->n--;
       }else{
           while(cell128->next != NULL && cell128->next->val != 21) cell128 = cell128->next;
           if(cell128->next != NULL)
           {
               cell128 = cell128->next->next;
               sortedlist57->n--;
           }
        }
   }
   sortedlist_t* sortedlist58 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist58->n = 0;
   sortedlist58->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop52 = 0;
      unsigned int loopLimit52 = (rand()%loopsFactor)/2 + 1;
      for(; loop52 < loopLimit52; loop52++) {
         sortedlist_t* sortedlist59 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist59->n = 0;
         sortedlist59->root = NULL;
         if(sortedlist59 != NULL && sortedlist59->n > 0)
         {
             cell_t* cell129 = sortedlist59->root;
             if(cell129->val == 95)
             {
                 cell129 = cell129->next;
                 sortedlist59->n--;
             }else{
                 while(cell129->next != NULL && cell129->next->val != 95) cell129 = cell129->next;
                 if(cell129->next != NULL)
                 {
                     cell129 = cell129->next->next;
                     sortedlist59->n--;
                 }
              }
         }
         if(sortedlist59 != NULL && sortedlist59->n > 0){
              cell_t* cell130 = sortedlist59->root;
              while(cell130 != NULL && cell130->val != 37) cell130 = cell130->next;
              return cell130 != NULL ? sortedlist59 : NULL;
         }
         unsigned int loop53 = 0;
         unsigned int loopLimit53 = (rand()%loopsFactor)/3 + 1;
         for(; loop53 < loopLimit53; loop53++) {
            if(sortedlist57 != NULL && sortedlist57->n > 0) {
                 cell_t* cell131 = sortedlist57->root;
                 if(sortedlist57->n == 0) {
                     sortedlist57->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist57->root->val  = 93;
                     sortedlist57->root->next = NULL;
                     sortedlist57->n++;
                 } else {
                     while(cell131 != NULL)
                     {
                         if(cell131->next == NULL && cell131->val < 93) {
                             cell131->next = (cell_t*)malloc(sizeof(cell_t));
                             cell131->next->next = NULL;
                             cell131->next->val  = 93;
                             sortedlist57->n++;
                             break;
                         } else if(93 < cell131->val) {
                             cell_t* tmp131 = cell131->next;
                             cell131->next = (cell_t*)malloc(sizeof(cell_t));
                             cell131->next->next = tmp131;
                             int tmp_val131 = cell131->val;
                             cell131->val = 93;
                             cell131->next->val = tmp_val131;
                             sortedlist57->n++;
                             break;
                         }
                         cell131 = cell131->next;
                     }
                 }
            }
         }
         if(sortedlist59 != NULL && sortedlist59->n > 0){
              cell_t* cell132 = sortedlist59->root;
              cell_t* tmp132  = NULL;
              while(cell132 != NULL) {
                   tmp132 = cell132->next;
                   free(cell132);
                   cell132 = tmp132;
              }
              free(sortedlist59);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist57;
      params0.data[1] = sortedlist58;
      sortedlist_t* sortedlist60 = func14(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist60 != NULL && sortedlist60->n > 0){
           cell_t* cell133 = sortedlist60->root;
           cell_t* tmp133  = NULL;
           while(cell133 != NULL) {
                tmp133 = cell133->next;
                free(cell133);
                cell133 = tmp133;
           }
           free(sortedlist60);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist57;
   params0.data[1] = sortedlist58;
   sortedlist_t* sortedlist61 = func11(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop54 = 0;
   unsigned int loopLimit54 = (rand()%loopsFactor)/2 + 1;
   for(; loop54 < loopLimit54; loop54++) {
      if(sortedlist61 != NULL && sortedlist61->n > 0)
      {
          cell_t* cell134 = sortedlist61->root;
          if(cell134->val == 28)
          {
              cell134 = cell134->next;
              sortedlist61->n--;
          }else{
              while(cell134->next != NULL && cell134->next->val != 28) cell134 = cell134->next;
              if(cell134->next != NULL)
              {
                  cell134 = cell134->next->next;
                  sortedlist61->n--;
              }
           }
      }
   }
   if(sortedlist61 != NULL && sortedlist61->n > 0){
        cell_t* cell135 = sortedlist61->root;
        cell_t* tmp135  = NULL;
        while(cell135 != NULL) {
             tmp135 = cell135->next;
             free(cell135);
             cell135 = tmp135;
        }
        free(sortedlist61);
   }
   if(sortedlist58 != NULL && sortedlist58->n > 0){
        cell_t* cell136 = sortedlist58->root;
        cell_t* tmp136  = NULL;
        while(cell136 != NULL) {
             tmp136 = cell136->next;
             free(cell136);
             cell136 = tmp136;
        }
        free(sortedlist58);
   }
   return sortedlist57;
}

