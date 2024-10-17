#include "P1_SL.h" 
sortedlist_t* func12(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist65 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist65->n = 0;
   sortedlist65->root = NULL;
   if(sortedlist65 != NULL && sortedlist65->n > 0) {
        cell_t* cell110 = sortedlist65->root;
        if(sortedlist65->n == 0) {
            sortedlist65->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist65->root->val  = 15;
            sortedlist65->root->next = NULL;
            sortedlist65->n++;
        } else {
            while(cell110 != NULL)
            {
                if(cell110->next == NULL && cell110->val < 15) {
                    cell110->next = (cell_t*)malloc(sizeof(cell_t));
                    cell110->next->next = NULL;
                    cell110->next->val  = 15;
                    sortedlist65->n++;
                    break;
                } else if(15 < cell110->val) {
                    cell_t* tmp110 = cell110->next;
                    cell110->next = (cell_t*)malloc(sizeof(cell_t));
                    cell110->next->next = tmp110;
                    int tmp_val110 = cell110->val;
                    cell110->val = 15;
                    cell110->next->val = tmp_val110;
                    sortedlist65->n++;
                    break;
                }
                cell110 = cell110->next;
            }
        }
   }
   if(sortedlist65 != NULL && sortedlist65->n > 0){
        cell_t* cell111 = sortedlist65->root;
        while(cell111 != NULL && cell111->val != 49) cell111 = cell111->next;
        return cell111 != NULL ? sortedlist65 : NULL;
   }
   if(sortedlist65 != NULL && sortedlist65->n > 0)
   {
       cell_t* cell112 = sortedlist65->root;
       if(cell112->val == 23)
       {
           cell112 = cell112->next;
           sortedlist65->n--;
       }else{
           while(cell112->next != NULL && cell112->next->val != 23) cell112 = cell112->next;
           if(cell112->next != NULL)
           {
               cell112 = cell112->next->next;
               sortedlist65->n--;
           }
        }
   }
   sortedlist_t* sortedlist66 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist66->n = 0;
   sortedlist66->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop28 = 0;
      unsigned int loopLimit28 = (rand()%loopsFactor)/2 + 1;
      for(; loop28 < loopLimit28; loop28++) {
         sortedlist_t* sortedlist67 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist67->n = 0;
         sortedlist67->root = NULL;
         if(sortedlist67 != NULL && sortedlist67->n > 0)
         {
             cell_t* cell113 = sortedlist67->root;
             if(cell113->val == 45)
             {
                 cell113 = cell113->next;
                 sortedlist67->n--;
             }else{
                 while(cell113->next != NULL && cell113->next->val != 45) cell113 = cell113->next;
                 if(cell113->next != NULL)
                 {
                     cell113 = cell113->next->next;
                     sortedlist67->n--;
                 }
              }
         }
         if(sortedlist67 != NULL && sortedlist67->n > 0){
              cell_t* cell114 = sortedlist67->root;
              while(cell114 != NULL && cell114->val != 51) cell114 = cell114->next;
              return cell114 != NULL ? sortedlist67 : NULL;
         }
         if(sortedlist67 != NULL && sortedlist67->n > 0){
              cell_t* cell115 = sortedlist67->root;
              cell_t* tmp115  = NULL;
              while(cell115 != NULL) {
                   tmp115 = cell115->next;
                   free(cell115);
                   cell115 = tmp115;
              }
              free(sortedlist67);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist65;
      params0.data[1] = sortedlist66;
      sortedlist_t* sortedlist68 = func20(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist68 != NULL && sortedlist68->n > 0){
           cell_t* cell116 = sortedlist68->root;
           cell_t* tmp116  = NULL;
           while(cell116 != NULL) {
                tmp116 = cell116->next;
                free(cell116);
                cell116 = tmp116;
           }
           free(sortedlist68);
      }
   }
   sortedlist_t_param params0;
   params0.size = 2;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist65;
   params0.data[1] = sortedlist66;
   sortedlist_t* sortedlist69 = func17(&params0, rng(), loopsFactor);
   free(params0.data);
   if(sortedlist69 != NULL && sortedlist69->n > 0){
        cell_t* cell117 = sortedlist69->root;
        cell_t* tmp117  = NULL;
        while(cell117 != NULL) {
             tmp117 = cell117->next;
             free(cell117);
             cell117 = tmp117;
        }
        free(sortedlist69);
   }
   if(sortedlist65 != NULL && sortedlist65->n > 0){
        cell_t* cell118 = sortedlist65->root;
        cell_t* tmp118  = NULL;
        while(cell118 != NULL) {
             tmp118 = cell118->next;
             free(cell118);
             cell118 = tmp118;
        }
        free(sortedlist65);
   }
   return sortedlist66;
}

