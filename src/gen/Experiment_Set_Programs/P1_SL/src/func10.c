#include "P1_SL.h" 
sortedlist_t* func10(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist124 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist124->n = 0;
   sortedlist124->root = NULL;
   if(sortedlist124 != NULL && sortedlist124->n > 0) {
        cell_t* cell219 = sortedlist124->root;
        if(sortedlist124->n == 0) {
            sortedlist124->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist124->root->val  = 37;
            sortedlist124->root->next = NULL;
            sortedlist124->n++;
        } else {
            while(cell219 != NULL)
            {
                if(cell219->next == NULL && cell219->val < 37) {
                    cell219->next = (cell_t*)malloc(sizeof(cell_t));
                    cell219->next->next = NULL;
                    cell219->next->val  = 37;
                    sortedlist124->n++;
                    break;
                } else if(37 < cell219->val) {
                    cell_t* tmp219 = cell219->next;
                    cell219->next = (cell_t*)malloc(sizeof(cell_t));
                    cell219->next->next = tmp219;
                    int tmp_val219 = cell219->val;
                    cell219->val = 37;
                    cell219->next->val = tmp_val219;
                    sortedlist124->n++;
                    break;
                }
                cell219 = cell219->next;
            }
        }
   }
   if(sortedlist124 != NULL && sortedlist124->n > 0){
        cell_t* cell220 = sortedlist124->root;
        while(cell220 != NULL && cell220->val != 24) cell220 = cell220->next;
        return cell220 != NULL ? sortedlist124 : NULL;
   }
   if(sortedlist124 != NULL && sortedlist124->n > 0)
   {
       cell_t* cell221 = sortedlist124->root;
       if(cell221->val == 36)
       {
           cell221 = cell221->next;
           sortedlist124->n--;
       }else{
           while(cell221->next != NULL && cell221->next->val != 36) cell221 = cell221->next;
           if(cell221->next != NULL)
           {
               cell221 = cell221->next->next;
               sortedlist124->n--;
           }
        }
   }
   sortedlist_t* sortedlist125 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist125->n = 0;
   sortedlist125->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop51 = 0;
      unsigned int loopLimit51 = (rand()%loopsFactor)/2 + 1;
      for(; loop51 < loopLimit51; loop51++) {
         sortedlist_t* sortedlist126 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist126->n = 0;
         sortedlist126->root = NULL;
         if(sortedlist126 != NULL && sortedlist126->n > 0)
         {
             cell_t* cell222 = sortedlist126->root;
             if(cell222->val == 99)
             {
                 cell222 = cell222->next;
                 sortedlist126->n--;
             }else{
                 while(cell222->next != NULL && cell222->next->val != 99) cell222 = cell222->next;
                 if(cell222->next != NULL)
                 {
                     cell222 = cell222->next->next;
                     sortedlist126->n--;
                 }
              }
         }
         if(sortedlist124 != NULL && sortedlist124->n > 0){
              cell_t* cell223 = sortedlist124->root;
              while(cell223 != NULL && cell223->val != 50) cell223 = cell223->next;
              return cell223 != NULL ? sortedlist124 : NULL;
         }
         if(sortedlist126 != NULL && sortedlist126->n > 0){
              cell_t* cell224 = sortedlist126->root;
              cell_t* tmp224  = NULL;
              while(cell224 != NULL) {
                   tmp224 = cell224->next;
                   free(cell224);
                   cell224 = tmp224;
              }
              free(sortedlist126);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist124;
      params0.data[1] = sortedlist125;
      sortedlist_t* sortedlist127 = func18(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist127 != NULL && sortedlist127->n > 0){
           cell_t* cell225 = sortedlist127->root;
           cell_t* tmp225  = NULL;
           while(cell225 != NULL) {
                tmp225 = cell225->next;
                free(cell225);
                cell225 = tmp225;
           }
           free(sortedlist127);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist124;
   params0.data[1] = sortedlist125;
   sortedlist_t* sortedlist128 = func15(&params0, rng(), loopsFactor);
   free(params0.data);
   if(sortedlist125 != NULL && sortedlist125->n > 0){
        cell_t* cell226 = sortedlist125->root;
        cell_t* tmp226  = NULL;
        while(cell226 != NULL) {
             tmp226 = cell226->next;
             free(cell226);
             cell226 = tmp226;
        }
        free(sortedlist125);
   }
   if(sortedlist124 != NULL && sortedlist124->n > 0){
        cell_t* cell227 = sortedlist124->root;
        cell_t* tmp227  = NULL;
        while(cell227 != NULL) {
             tmp227 = cell227->next;
             free(cell227);
             cell227 = tmp227;
        }
        free(sortedlist124);
   }
   return sortedlist128;
}

