#include "P1_SL.h" 
sortedlist_t* func0(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist2 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist2->n = 0;
   sortedlist2->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop1 = 0;
      unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         sortedlist_t* sortedlist3 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist3->n = 0;
         sortedlist3->root = NULL;
         if(sortedlist3 != NULL && sortedlist3->n > 0)
         {
             cell_t* cell2 = sortedlist3->root;
             if(cell2->val == 35)
             {
                 cell2 = cell2->next;
                 sortedlist3->n--;
             }else{
                 while(cell2->next != NULL && cell2->next->val != 35) cell2 = cell2->next;
                 if(cell2->next != NULL)
                 {
                     cell2 = cell2->next->next;
                     sortedlist3->n--;
                 }
              }
         }
         if(sortedlist2 != NULL && sortedlist2->n > 0){
              cell_t* cell3 = sortedlist2->root;
              while(cell3 != NULL && cell3->val != 92) cell3 = cell3->next;
              return cell3 != NULL ? sortedlist2 : NULL;
         }
         if(sortedlist3 != NULL && sortedlist3->n > 0){
              cell_t* cell4 = sortedlist3->root;
              cell_t* tmp4  = NULL;
              while(cell4 != NULL) {
                   tmp4 = cell4->next;
                   free(cell4);
                   cell4 = tmp4;
              }
              free(sortedlist3);
         }
      }
   }
   else {
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist2;
      sortedlist_t* sortedlist4 = func2(&params0, rng(), loopsFactor);
      free(params0.data);
      if(sortedlist4 != NULL && sortedlist4->n > 0){
           cell_t* cell197 = sortedlist4->root;
           cell_t* tmp197  = NULL;
           while(cell197 != NULL) {
                tmp197 = cell197->next;
                free(cell197);
                cell197 = tmp197;
           }
           free(sortedlist4);
      }
   }
   return sortedlist2;
}

