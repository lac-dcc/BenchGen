#include "P2_SL.h" 
sortedlist_t* func9(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist28 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist28->n = 0;
   sortedlist28->root = NULL;
   unsigned int loop22 = 0;
   unsigned int loopLimit22 = (rand()%loopsFactor)/3 + 1;
   for(; loop22 < loopLimit22; loop22++) {
      if(sortedlist28 != NULL && sortedlist28->n > 0)
      {
          cell_t* cell50 = sortedlist28->root;
          if(cell50->val == 8)
          {
              cell50 = cell50->next;
              sortedlist28->n--;
          }else{
              while(cell50->next != NULL && cell50->next->val != 8) cell50 = cell50->next;
              if(cell50->next != NULL)
              {
                  cell50 = cell50->next->next;
                  sortedlist28->n--;
              }
           }
      }
   }
   if(sortedlist28 != NULL && sortedlist28->n > 0) {
        cell_t* cell51 = sortedlist28->root;
        if(sortedlist28->n == 0) {
            sortedlist28->root = (cell_t*)malloc(sizeof(cell_t));
            sortedlist28->root->val  = 78;
            sortedlist28->root->next = NULL;
            sortedlist28->n++;
        } else {
            while(cell51 != NULL)
            {
                if(cell51->next == NULL && cell51->val < 78) {
                    cell51->next = (cell_t*)malloc(sizeof(cell_t));
                    cell51->next->next = NULL;
                    cell51->next->val  = 78;
                    sortedlist28->n++;
                    break;
                } else if(78 < cell51->val) {
                    cell_t* tmp51 = cell51->next;
                    cell51->next = (cell_t*)malloc(sizeof(cell_t));
                    cell51->next->next = tmp51;
                    int tmp_val51 = cell51->val;
                    cell51->val = 78;
                    cell51->next->val = tmp_val51;
                    sortedlist28->n++;
                    break;
                }
                cell51 = cell51->next;
            }
        }
   }
   if(sortedlist28 != NULL && sortedlist28->n > 0){
        cell_t* cell52 = sortedlist28->root;
        while(cell52 != NULL && cell52->val != 84) cell52 = cell52->next;
        return cell52 != NULL ? sortedlist28 : NULL;
   }
   if(sortedlist28 != NULL && sortedlist28->n > 0)
   {
       cell_t* cell53 = sortedlist28->root;
       if(cell53->val == 51)
       {
           cell53 = cell53->next;
           sortedlist28->n--;
       }else{
           while(cell53->next != NULL && cell53->next->val != 51) cell53 = cell53->next;
           if(cell53->next != NULL)
           {
               cell53 = cell53->next->next;
               sortedlist28->n--;
           }
        }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist28;
   sortedlist_t* sortedlist29 = func16(&params0, rng(), loopsFactor);
   free(params0.data);
   unsigned int loop23 = 0;
   unsigned int loopLimit23 = (rand()%loopsFactor)/3 + 1;
   for(; loop23 < loopLimit23; loop23++) {
      if(sortedlist28 != NULL && sortedlist28->n > 0)
      {
          cell_t* cell54 = sortedlist28->root;
          if(cell54->val == 99)
          {
              cell54 = cell54->next;
              sortedlist28->n--;
          }else{
              while(cell54->next != NULL && cell54->next->val != 99) cell54 = cell54->next;
              if(cell54->next != NULL)
              {
                  cell54 = cell54->next->next;
                  sortedlist28->n--;
              }
           }
      }
   }
   if(sortedlist29 != NULL && sortedlist29->n > 0){
        cell_t* cell55 = sortedlist29->root;
        cell_t* tmp55  = NULL;
        while(cell55 != NULL) {
             tmp55 = cell55->next;
             free(cell55);
             cell55 = tmp55;
        }
        free(sortedlist29);
   }
   return sortedlist28;
}

