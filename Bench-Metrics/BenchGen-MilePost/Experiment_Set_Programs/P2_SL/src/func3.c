#include "P2_SL.h" 
sortedlist_t* func3(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist71 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist71->n = 0;
   sortedlist71->root = NULL;
   unsigned int loop63 = 0;
   unsigned int loopLimit63 = (rand()%loopsFactor)/2 + 1;
   for(; loop63 < loopLimit63; loop63++) {
      if(sortedlist71 != NULL && sortedlist71->n > 0)
      {
          cell_t* cell159 = sortedlist71->root;
          if(cell159->val == 25)
          {
              cell159 = cell159->next;
              sortedlist71->n--;
          }else{
              while(cell159->next != NULL && cell159->next->val != 25) cell159 = cell159->next;
              if(cell159->next != NULL)
              {
                  cell159 = cell159->next->next;
                  sortedlist71->n--;
              }
           }
      }
   }
   if(sortedlist71 != NULL && sortedlist71->n > 0) {
        cell_t* cell160 = sortedlist71->root;
        if(sortedlist71->n == 0) {
            sortedlist71->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist71->root->val  = 90;
            sortedlist71->root->next = NULL;
            sortedlist71->n++;
        } else {
            while(cell160 != NULL)
            {
                if(cell160->next == NULL && cell160->val < 90) {
                    cell160->next = (cell_t*)malloc(sizeof(cell_t));
                    cell160->next->next = NULL;
                    cell160->next->val  = 90;
                    sortedlist71->n++;
                    break;
                } else if(90 < cell160->val) {
                    cell_t* tmp160 = cell160->next;
                    cell160->next = (cell_t*)malloc(sizeof(cell_t));
                    cell160->next->next = tmp160;
                    int tmp_val160 = cell160->val;
                    cell160->val = 90;
                    cell160->next->val = tmp_val160;
                    sortedlist71->n++;
                    break;
                }
                cell160 = cell160->next;
            }
        }
   }
   if(sortedlist71 != NULL && sortedlist71->n > 0){
        cell_t* cell161 = sortedlist71->root;
        while(cell161 != NULL && cell161->val != 39) cell161 = cell161->next;
        return cell161 != NULL ? sortedlist71 : NULL;
   }
   if(sortedlist71 != NULL && sortedlist71->n > 0)
   {
       cell_t* cell162 = sortedlist71->root;
       if(cell162->val == 86)
       {
           cell162 = cell162->next;
           sortedlist71->n--;
       }else{
           while(cell162->next != NULL && cell162->next->val != 86) cell162 = cell162->next;
           if(cell162->next != NULL)
           {
               cell162 = cell162->next->next;
               sortedlist71->n--;
           }
        }
   }
   sortedlist_t* sortedlist72 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist72->n = 0;
   sortedlist72->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop64 = 0;
      unsigned int loopLimit64 = (rand()%loopsFactor)/2 + 1;
      for(; loop64 < loopLimit64; loop64++) {
         sortedlist_t* sortedlist73 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist73->n = 0;
         sortedlist73->root = NULL;
         if(sortedlist71 != NULL && sortedlist71->n > 0)
         {
             cell_t* cell163 = sortedlist71->root;
             if(cell163->val == 82)
             {
                 cell163 = cell163->next;
                 sortedlist71->n--;
             }else{
                 while(cell163->next != NULL && cell163->next->val != 82) cell163 = cell163->next;
                 if(cell163->next != NULL)
                 {
                     cell163 = cell163->next->next;
                     sortedlist71->n--;
                 }
              }
         }
         if(sortedlist71 != NULL && sortedlist71->n > 0){
              cell_t* cell164 = sortedlist71->root;
              while(cell164 != NULL && cell164->val != 64) cell164 = cell164->next;
              return cell164 != NULL ? sortedlist71 : NULL;
         }
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist71;
         params0.data[1] = sortedlist72;
         params0.data[2] = sortedlist73;
         sortedlist_t* sortedlist74 = func16(&params0, rng(), loopsFactor);
         free(params0.data);
         unsigned int loop65 = 0;
         unsigned int loopLimit65 = (rand()%loopsFactor)/3 + 1;
         for(; loop65 < loopLimit65; loop65++) {
            if(sortedlist72 != NULL && sortedlist72->n > 0)
            {
                cell_t* cell165 = sortedlist72->root;
                if(cell165->val == 7)
                {
                    cell165 = cell165->next;
                    sortedlist72->n--;
                }else{
                    while(cell165->next != NULL && cell165->next->val != 7) cell165 = cell165->next;
                    if(cell165->next != NULL)
                    {
                        cell165 = cell165->next->next;
                        sortedlist72->n--;
                    }
                 }
            }
         }
         unsigned int loop66 = 0;
         unsigned int loopLimit66 = (rand()%loopsFactor)/3 + 1;
         for(; loop66 < loopLimit66; loop66++) {
            if(sortedlist74 != NULL && sortedlist74->n > 0) {
                 cell_t* cell166 = sortedlist74->root;
                 if(sortedlist74->n == 0) {
                     sortedlist74->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist74->root->val  = 4;
                     sortedlist74->root->next = NULL;
                     sortedlist74->n++;
                 } else {
                     while(cell166 != NULL)
                     {
                         if(cell166->next == NULL && cell166->val < 4) {
                             cell166->next = (cell_t*)malloc(sizeof(cell_t));
                             cell166->next->next = NULL;
                             cell166->next->val  = 4;
                             sortedlist74->n++;
                             break;
                         } else if(4 < cell166->val) {
                             cell_t* tmp166 = cell166->next;
                             cell166->next = (cell_t*)malloc(sizeof(cell_t));
                             cell166->next->next = tmp166;
                             int tmp_val166 = cell166->val;
                             cell166->val = 4;
                             cell166->next->val = tmp_val166;
                             sortedlist74->n++;
                             break;
                         }
                         cell166 = cell166->next;
                     }
                 }
            }
         }
         if(sortedlist74 != NULL && sortedlist74->n > 0){
              cell_t* cell167 = sortedlist74->root;
              cell_t* tmp167  = NULL;
              while(cell167 != NULL) {
                   tmp167 = cell167->next;
                   free(cell167);
                   cell167 = tmp167;
              }
              free(sortedlist74);
         }
         if(sortedlist73 != NULL && sortedlist73->n > 0){
              cell_t* cell168 = sortedlist73->root;
              cell_t* tmp168  = NULL;
              while(cell168 != NULL) {
                   tmp168 = cell168->next;
                   free(cell168);
                   cell168 = tmp168;
              }
              free(sortedlist73);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist71;
      params0.data[1] = sortedlist72;
      sortedlist_t* sortedlist75 = func13(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist75 != NULL && sortedlist75->n > 0){
           cell_t* cell169 = sortedlist75->root;
           cell_t* tmp169  = NULL;
           while(cell169 != NULL) {
                tmp169 = cell169->next;
                free(cell169);
                cell169 = tmp169;
           }
           free(sortedlist75);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist71;
   params0.data[1] = sortedlist72;
   sortedlist_t* sortedlist76 = func10(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop67 = 0;
   unsigned int loopLimit67 = (rand()%loopsFactor)/2 + 1;
   for(; loop67 < loopLimit67; loop67++) {
      if(sortedlist76 != NULL && sortedlist76->n > 0)
      {
          cell_t* cell170 = sortedlist76->root;
          if(cell170->val == 11)
          {
              cell170 = cell170->next;
              sortedlist76->n--;
          }else{
              while(cell170->next != NULL && cell170->next->val != 11) cell170 = cell170->next;
              if(cell170->next != NULL)
              {
                  cell170 = cell170->next->next;
                  sortedlist76->n--;
              }
           }
      }
   }
   if(sortedlist72 != NULL && sortedlist72->n > 0){
        cell_t* cell171 = sortedlist72->root;
        cell_t* tmp171  = NULL;
        while(cell171 != NULL) {
             tmp171 = cell171->next;
             free(cell171);
             cell171 = tmp171;
        }
        free(sortedlist72);
   }
   if(sortedlist71 != NULL && sortedlist71->n > 0){
        cell_t* cell172 = sortedlist71->root;
        cell_t* tmp172  = NULL;
        while(cell172 != NULL) {
             tmp172 = cell172->next;
             free(cell172);
             cell172 = tmp172;
        }
        free(sortedlist71);
   }
   return sortedlist76;
}

