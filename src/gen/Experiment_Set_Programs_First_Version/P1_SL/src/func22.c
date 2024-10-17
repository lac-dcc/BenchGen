#include "P1_SL.h" 
sortedlist_t* func22(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist33 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist33->n = 0;
   sortedlist33->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop14 = 0;
      unsigned int loopLimit14 = (rand()%loopsFactor)/2 + 1;
      for(; loop14 < loopLimit14; loop14++) {
         if(sortedlist33 != NULL && sortedlist33->n > 0)
         {
             cell_t* cell46 = sortedlist33->root;
             if(cell46->val == 45)
             {
                 cell46 = cell46->next;
                 sortedlist33->n--;
             }else{
                 while(cell46->next != NULL && cell46->next->val != 45) cell46 = cell46->next;
                 if(cell46->next != NULL)
                 {
                     cell46 = cell46->next->next;
                     sortedlist33->n--;
                 }
              }
         }
      }
      unsigned int loop15 = 0;
      unsigned int loopLimit15 = (rand()%loopsFactor)/2 + 1;
      for(; loop15 < loopLimit15; loop15++) {
         if(sortedlist33 != NULL && sortedlist33->n > 0) {
              cell_t* cell47 = sortedlist33->root;
              if(sortedlist33->n == 0) {
                  sortedlist33->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist33->root->val  = 67;
                  sortedlist33->root->next = NULL;
                  sortedlist33->n++;
              } else {
                  while(cell47 != NULL)
                  {
                      if(cell47->next == NULL && cell47->val < 67) {
                          cell47->next = (cell_t*)malloc(sizeof(cell_t));
                          cell47->next->next = NULL;
                          cell47->next->val  = 67;
                          sortedlist33->n++;
                          break;
                      } else if(67 < cell47->val) {
                          cell_t* tmp47 = cell47->next;
                          cell47->next = (cell_t*)malloc(sizeof(cell_t));
                          cell47->next->next = tmp47;
                          int tmp_val47 = cell47->val;
                          cell47->val = 67;
                          cell47->next->val = tmp_val47;
                          sortedlist33->n++;
                          break;
                      }
                      cell47 = cell47->next;
                  }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist33;
      sortedlist_t* sortedlist34 = func23(&params0, loopsFactor);
      free(params0.data);
      if(sortedlist34 != NULL && sortedlist34->n > 0){
           cell_t* cell48 = sortedlist34->root;
           cell_t* tmp48  = NULL;
           while(cell48 != NULL) {
                tmp48 = cell48->next;
                free(cell48);
                cell48 = tmp48;
           }
           free(sortedlist34);
      }
   }
   else {
      sortedlist_t* sortedlist35 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist35->n = 0;
      sortedlist35->root = NULL;
      if(sortedlist33 != NULL && sortedlist33->n > 0) {
           cell_t* cell49 = sortedlist33->root;
           if(sortedlist33->n == 0) {
               sortedlist33->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist33->root->val  = 64;
               sortedlist33->root->next = NULL;
               sortedlist33->n++;
           } else {
               while(cell49 != NULL)
               {
                   if(cell49->next == NULL && cell49->val < 64) {
                       cell49->next = (cell_t*)malloc(sizeof(cell_t));
                       cell49->next->next = NULL;
                       cell49->next->val  = 64;
                       sortedlist33->n++;
                       break;
                   } else if(64 < cell49->val) {
                       cell_t* tmp49 = cell49->next;
                       cell49->next = (cell_t*)malloc(sizeof(cell_t));
                       cell49->next->next = tmp49;
                       int tmp_val49 = cell49->val;
                       cell49->val = 64;
                       cell49->next->val = tmp_val49;
                       sortedlist33->n++;
                       break;
                   }
                   cell49 = cell49->next;
               }
           }
      }
      if(sortedlist35 != NULL && sortedlist35->n > 0){
           cell_t* cell50 = sortedlist35->root;
           while(cell50 != NULL && cell50->val != 50) cell50 = cell50->next;
           return cell50 != NULL ? sortedlist35 : NULL;
      }
      if(sortedlist35 != NULL && sortedlist35->n > 0)
      {
          cell_t* cell51 = sortedlist35->root;
          if(cell51->val == 8)
          {
              cell51 = cell51->next;
              sortedlist35->n--;
          }else{
              while(cell51->next != NULL && cell51->next->val != 8) cell51 = cell51->next;
              if(cell51->next != NULL)
              {
                  cell51 = cell51->next->next;
                  sortedlist35->n--;
              }
           }
      }
      if(sortedlist35 != NULL && sortedlist35->n > 0){
           cell_t* cell52 = sortedlist35->root;
           cell_t* tmp52  = NULL;
           while(cell52 != NULL) {
                tmp52 = cell52->next;
                free(cell52);
                cell52 = tmp52;
           }
           free(sortedlist35);
      }
   }
   unsigned int loop16 = 0;
   unsigned int loopLimit16 = (rand()%loopsFactor)/2 + 1;
   for(; loop16 < loopLimit16; loop16++) {
      if(sortedlist33 != NULL && sortedlist33->n > 0) {
           cell_t* cell53 = sortedlist33->root;
           if(sortedlist33->n == 0) {
               sortedlist33->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist33->root->val  = 78;
               sortedlist33->root->next = NULL;
               sortedlist33->n++;
           } else {
               while(cell53 != NULL)
               {
                   if(cell53->next == NULL && cell53->val < 78) {
                       cell53->next = (cell_t*)malloc(sizeof(cell_t));
                       cell53->next->next = NULL;
                       cell53->next->val  = 78;
                       sortedlist33->n++;
                       break;
                   } else if(78 < cell53->val) {
                       cell_t* tmp53 = cell53->next;
                       cell53->next = (cell_t*)malloc(sizeof(cell_t));
                       cell53->next->next = tmp53;
                       int tmp_val53 = cell53->val;
                       cell53->val = 78;
                       cell53->next->val = tmp_val53;
                       sortedlist33->n++;
                       break;
                   }
                   cell53 = cell53->next;
               }
           }
      }
      sortedlist_t* sortedlist36 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist36->n = 0;
      sortedlist36->root = NULL;
      if(sortedlist33 != NULL && sortedlist33->n > 0) {
           cell_t* cell54 = sortedlist33->root;
           if(sortedlist33->n == 0) {
               sortedlist33->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist33->root->val  = 84;
               sortedlist33->root->next = NULL;
               sortedlist33->n++;
           } else {
               while(cell54 != NULL)
               {
                   if(cell54->next == NULL && cell54->val < 84) {
                       cell54->next = (cell_t*)malloc(sizeof(cell_t));
                       cell54->next->next = NULL;
                       cell54->next->val  = 84;
                       sortedlist33->n++;
                       break;
                   } else if(84 < cell54->val) {
                       cell_t* tmp54 = cell54->next;
                       cell54->next = (cell_t*)malloc(sizeof(cell_t));
                       cell54->next->next = tmp54;
                       int tmp_val54 = cell54->val;
                       cell54->val = 84;
                       cell54->next->val = tmp_val54;
                       sortedlist33->n++;
                       break;
                   }
                   cell54 = cell54->next;
               }
           }
      }
      if(sortedlist36 != NULL && sortedlist36->n > 0){
           cell_t* cell55 = sortedlist36->root;
           while(cell55 != NULL && cell55->val != 51) cell55 = cell55->next;
           return cell55 != NULL ? sortedlist36 : NULL;
      }
      if(sortedlist33 != NULL && sortedlist33->n > 0)
      {
          cell_t* cell56 = sortedlist33->root;
          if(cell56->val == 99)
          {
              cell56 = cell56->next;
              sortedlist33->n--;
          }else{
              while(cell56->next != NULL && cell56->next->val != 99) cell56 = cell56->next;
              if(cell56->next != NULL)
              {
                  cell56 = cell56->next->next;
                  sortedlist33->n--;
              }
           }
      }
      if(sortedlist36 != NULL && sortedlist36->n > 0){
           cell_t* cell57 = sortedlist36->root;
           cell_t* tmp57  = NULL;
           while(cell57 != NULL) {
                tmp57 = cell57->next;
                free(cell57);
                cell57 = tmp57;
           }
           free(sortedlist36);
      }
   }
   return sortedlist33;
}

