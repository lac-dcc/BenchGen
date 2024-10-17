#include "P2_SL.h" 
sortedlist_t* func13(sortedlist_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist46 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist46->n = 0;
   sortedlist46->root = NULL;
   unsigned int loop39 = 0;
   unsigned int loopLimit39 = (rand()%loopsFactor)/2 + 1;
   for(; loop39 < loopLimit39; loop39++) {
      if(sortedlist46 != NULL && sortedlist46->n > 0)
      {
          cell_t* cell98 = sortedlist46->root;
          if(cell98->val == 71)
          {
              cell98 = cell98->next;
              sortedlist46->n--;
          }else{
              while(cell98->next != NULL && cell98->next->val != 71) cell98 = cell98->next;
              if(cell98->next != NULL)
              {
                  cell98 = cell98->next->next;
                  sortedlist46->n--;
              }
           }
      }
   }
   unsigned int loop40 = 0;
   unsigned int loopLimit40 = (rand()%loopsFactor)/2 + 1;
   for(; loop40 < loopLimit40; loop40++) {
      if(sortedlist46 != NULL && sortedlist46->n > 0) {
           cell_t* cell99 = sortedlist46->root;
           if(sortedlist46->n == 0) {
               sortedlist46->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist46->root->val  = 29;
               sortedlist46->root->next = NULL;
               sortedlist46->n++;
           } else {
               while(cell99 != NULL)
               {
                   if(cell99->next == NULL && cell99->val < 29) {
                       cell99->next = (cell_t*)malloc(sizeof(cell_t));
                       cell99->next->next = NULL;
                       cell99->next->val  = 29;
                       sortedlist46->n++;
                       break;
                   } else if(29 < cell99->val) {
                       cell_t* tmp99 = cell99->next;
                       cell99->next = (cell_t*)malloc(sizeof(cell_t));
                       cell99->next->next = tmp99;
                       int tmp_val99 = cell99->val;
                       cell99->val = 29;
                       cell99->next->val = tmp_val99;
                       sortedlist46->n++;
                       break;
                   }
                   cell99 = cell99->next;
               }
           }
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist46;
   sortedlist_t* sortedlist47 = func15(&params0, loopsFactor);
   free(params0.data);
   if(sortedlist47 != NULL && sortedlist47->n > 0){
        cell_t* cell100 = sortedlist47->root;
        while(cell100 != NULL && cell100->val != 19) cell100 = cell100->next;
        return cell100 != NULL ? sortedlist47 : NULL;
   }
   if(sortedlist47 != NULL && sortedlist47->n > 0){
        cell_t* cell101 = sortedlist47->root;
        cell_t* tmp101  = NULL;
        while(cell101 != NULL) {
             tmp101 = cell101->next;
             free(cell101);
             cell101 = tmp101;
        }
        free(sortedlist47);
   }
   return sortedlist46;
}

