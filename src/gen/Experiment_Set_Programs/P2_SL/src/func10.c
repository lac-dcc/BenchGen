#include "P2_SL.h" 
sortedlist_t* func10(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist49 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist49->n = 0;
   sortedlist49->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop41 = 0;
      unsigned int loopLimit41 = (rand()%loopsFactor)/2 + 1;
      for(; loop41 < loopLimit41; loop41++) {
         if(sortedlist49 != NULL && sortedlist49->n > 0)
         {
             cell_t* cell103 = sortedlist49->root;
             if(cell103->val == 8)
             {
                 cell103 = cell103->next;
                 sortedlist49->n--;
             }else{
                 while(cell103->next != NULL && cell103->next->val != 8) cell103 = cell103->next;
                 if(cell103->next != NULL)
                 {
                     cell103 = cell103->next->next;
                     sortedlist49->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist49;
      sortedlist_t* sortedlist50 = func16(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop42 = 0;
      unsigned int loopLimit42 = (rand()%loopsFactor)/2 + 1;
      for(; loop42 < loopLimit42; loop42++) {
         if(sortedlist50 != NULL && sortedlist50->n > 0)
         {
             cell_t* cell104 = sortedlist50->root;
             if(cell104->val == 40)
             {
                 cell104 = cell104->next;
                 sortedlist50->n--;
             }else{
                 while(cell104->next != NULL && cell104->next->val != 40) cell104 = cell104->next;
                 if(cell104->next != NULL)
                 {
                     cell104 = cell104->next->next;
                     sortedlist50->n--;
                 }
              }
         }
      }
      unsigned int loop43 = 0;
      unsigned int loopLimit43 = (rand()%loopsFactor)/2 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         if(sortedlist50 != NULL && sortedlist50->n > 0) {
              cell_t* cell105 = sortedlist50->root;
              if(sortedlist50->n == 0) {
                  sortedlist50->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist50->root->val  = 96;
                  sortedlist50->root->next = NULL;
                  sortedlist50->n++;
              } else {
                  while(cell105 != NULL)
                  {
                      if(cell105->next == NULL && cell105->val < 96) {
                          cell105->next = (cell_t*)malloc(sizeof(cell_t));
                          cell105->next->next = NULL;
                          cell105->next->val  = 96;
                          sortedlist50->n++;
                          break;
                      } else if(96 < cell105->val) {
                          cell_t* tmp105 = cell105->next;
                          cell105->next = (cell_t*)malloc(sizeof(cell_t));
                          cell105->next->next = tmp105;
                          int tmp_val105 = cell105->val;
                          cell105->val = 96;
                          cell105->next->val = tmp_val105;
                          sortedlist50->n++;
                          break;
                      }
                      cell105 = cell105->next;
                  }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 2;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist49;
      params1.data[1] = sortedlist50;
      sortedlist_t* sortedlist51 = func12(&params1, loopsFactor);
      free(params1.data);
      if(sortedlist51 != NULL && sortedlist51->n > 0){
           cell_t* cell106 = sortedlist51->root;
           cell_t* tmp106  = NULL;
           while(cell106 != NULL) {
                tmp106 = cell106->next;
                free(cell106);
                cell106 = tmp106;
           }
           free(sortedlist51);
      }
      if(sortedlist50 != NULL && sortedlist50->n > 0){
           cell_t* cell107 = sortedlist50->root;
           cell_t* tmp107  = NULL;
           while(cell107 != NULL) {
                tmp107 = cell107->next;
                free(cell107);
                cell107 = tmp107;
           }
           free(sortedlist50);
      }
   }
   else {
      sortedlist_t* sortedlist52 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist52->n = 0;
      sortedlist52->root = NULL;
      unsigned int loop44 = 0;
      unsigned int loopLimit44 = (rand()%loopsFactor)/2 + 1;
      for(; loop44 < loopLimit44; loop44++) {
         if(sortedlist52 != NULL && sortedlist52->n > 0)
         {
             cell_t* cell108 = sortedlist52->root;
             if(cell108->val == 18)
             {
                 cell108 = cell108->next;
                 sortedlist52->n--;
             }else{
                 while(cell108->next != NULL && cell108->next->val != 18) cell108 = cell108->next;
                 if(cell108->next != NULL)
                 {
                     cell108 = cell108->next->next;
                     sortedlist52->n--;
                 }
              }
         }
      }
      if(sortedlist52 != NULL && sortedlist52->n > 0) {
           cell_t* cell109 = sortedlist52->root;
           if(sortedlist52->n == 0) {
               sortedlist52->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist52->root->val  = 46;
               sortedlist52->root->next = NULL;
               sortedlist52->n++;
           } else {
               while(cell109 != NULL)
               {
                   if(cell109->next == NULL && cell109->val < 46) {
                       cell109->next = (cell_t*)malloc(sizeof(cell_t));
                       cell109->next->next = NULL;
                       cell109->next->val  = 46;
                       sortedlist52->n++;
                       break;
                   } else if(46 < cell109->val) {
                       cell_t* tmp109 = cell109->next;
                       cell109->next = (cell_t*)malloc(sizeof(cell_t));
                       cell109->next->next = tmp109;
                       int tmp_val109 = cell109->val;
                       cell109->val = 46;
                       cell109->next->val = tmp_val109;
                       sortedlist52->n++;
                       break;
                   }
                   cell109 = cell109->next;
               }
           }
      }
      if(sortedlist52 != NULL && sortedlist52->n > 0){
           cell_t* cell110 = sortedlist52->root;
           while(cell110 != NULL && cell110->val != 21) cell110 = cell110->next;
           return cell110 != NULL ? sortedlist52 : NULL;
      }
      if(sortedlist52 != NULL && sortedlist52->n > 0)
      {
          cell_t* cell111 = sortedlist52->root;
          if(cell111->val == 79)
          {
              cell111 = cell111->next;
              sortedlist52->n--;
          }else{
              while(cell111->next != NULL && cell111->next->val != 79) cell111 = cell111->next;
              if(cell111->next != NULL)
              {
                  cell111 = cell111->next->next;
                  sortedlist52->n--;
              }
           }
      }
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist49;
      params0.data[1] = sortedlist52;
      sortedlist_t* sortedlist53 = func16(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop45 = 0;
      unsigned int loopLimit45 = (rand()%loopsFactor)/2 + 1;
      for(; loop45 < loopLimit45; loop45++) {
         if(sortedlist52 != NULL && sortedlist52->n > 0)
         {
             cell_t* cell112 = sortedlist52->root;
             if(cell112->val == 64)
             {
                 cell112 = cell112->next;
                 sortedlist52->n--;
             }else{
                 while(cell112->next != NULL && cell112->next->val != 64) cell112 = cell112->next;
                 if(cell112->next != NULL)
                 {
                     cell112 = cell112->next->next;
                     sortedlist52->n--;
                 }
              }
         }
      }
      if(sortedlist53 != NULL && sortedlist53->n > 0){
           cell_t* cell113 = sortedlist53->root;
           cell_t* tmp113  = NULL;
           while(cell113 != NULL) {
                tmp113 = cell113->next;
                free(cell113);
                cell113 = tmp113;
           }
           free(sortedlist53);
      }
      if(sortedlist52 != NULL && sortedlist52->n > 0){
           cell_t* cell114 = sortedlist52->root;
           cell_t* tmp114  = NULL;
           while(cell114 != NULL) {
                tmp114 = cell114->next;
                free(cell114);
                cell114 = tmp114;
           }
           free(sortedlist52);
      }
   }
   unsigned int loop46 = 0;
   unsigned int loopLimit46 = (rand()%loopsFactor)/2 + 1;
   for(; loop46 < loopLimit46; loop46++) {
      if(sortedlist49 != NULL && sortedlist49->n > 0) {
           cell_t* cell115 = sortedlist49->root;
           if(sortedlist49->n == 0) {
               sortedlist49->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist49->root->val  = 41;
               sortedlist49->root->next = NULL;
               sortedlist49->n++;
           } else {
               while(cell115 != NULL)
               {
                   if(cell115->next == NULL && cell115->val < 41) {
                       cell115->next = (cell_t*)malloc(sizeof(cell_t));
                       cell115->next->next = NULL;
                       cell115->next->val  = 41;
                       sortedlist49->n++;
                       break;
                   } else if(41 < cell115->val) {
                       cell_t* tmp115 = cell115->next;
                       cell115->next = (cell_t*)malloc(sizeof(cell_t));
                       cell115->next->next = tmp115;
                       int tmp_val115 = cell115->val;
                       cell115->val = 41;
                       cell115->next->val = tmp_val115;
                       sortedlist49->n++;
                       break;
                   }
                   cell115 = cell115->next;
               }
           }
      }
      sortedlist_t* sortedlist54 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist54->n = 0;
      sortedlist54->root = NULL;
      unsigned int loop47 = 0;
      unsigned int loopLimit47 = (rand()%loopsFactor)/3 + 1;
      for(; loop47 < loopLimit47; loop47++) {
         if(sortedlist49 != NULL && sortedlist49->n > 0)
         {
             cell_t* cell116 = sortedlist49->root;
             if(cell116->val == 93)
             {
                 cell116 = cell116->next;
                 sortedlist49->n--;
             }else{
                 while(cell116->next != NULL && cell116->next->val != 93) cell116 = cell116->next;
                 if(cell116->next != NULL)
                 {
                     cell116 = cell116->next->next;
                     sortedlist49->n--;
                 }
              }
         }
      }
      if(sortedlist49 != NULL && sortedlist49->n > 0) {
           cell_t* cell117 = sortedlist49->root;
           if(sortedlist49->n == 0) {
               sortedlist49->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist49->root->val  = 34;
               sortedlist49->root->next = NULL;
               sortedlist49->n++;
           } else {
               while(cell117 != NULL)
               {
                   if(cell117->next == NULL && cell117->val < 34) {
                       cell117->next = (cell_t*)malloc(sizeof(cell_t));
                       cell117->next->next = NULL;
                       cell117->next->val  = 34;
                       sortedlist49->n++;
                       break;
                   } else if(34 < cell117->val) {
                       cell_t* tmp117 = cell117->next;
                       cell117->next = (cell_t*)malloc(sizeof(cell_t));
                       cell117->next->next = tmp117;
                       int tmp_val117 = cell117->val;
                       cell117->val = 34;
                       cell117->next->val = tmp_val117;
                       sortedlist49->n++;
                       break;
                   }
                   cell117 = cell117->next;
               }
           }
      }
      if(sortedlist49 != NULL && sortedlist49->n > 0){
           cell_t* cell118 = sortedlist49->root;
           while(cell118 != NULL && cell118->val != 24) cell118 = cell118->next;
           return cell118 != NULL ? sortedlist49 : NULL;
      }
      if(sortedlist49 != NULL && sortedlist49->n > 0)
      {
          cell_t* cell119 = sortedlist49->root;
          if(cell119->val == 87)
          {
              cell119 = cell119->next;
              sortedlist49->n--;
          }else{
              while(cell119->next != NULL && cell119->next->val != 87) cell119 = cell119->next;
              if(cell119->next != NULL)
              {
                  cell119 = cell119->next->next;
                  sortedlist49->n--;
              }
           }
      }
      sortedlist_t_param params0;
      params0.size = 2;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist49;
      params0.data[1] = sortedlist54;
      sortedlist_t* sortedlist55 = func16(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop48 = 0;
      unsigned int loopLimit48 = (rand()%loopsFactor)/3 + 1;
      for(; loop48 < loopLimit48; loop48++) {
         if(sortedlist55 != NULL && sortedlist55->n > 0)
         {
             cell_t* cell120 = sortedlist55->root;
             if(cell120->val == 43)
             {
                 cell120 = cell120->next;
                 sortedlist55->n--;
             }else{
                 while(cell120->next != NULL && cell120->next->val != 43) cell120 = cell120->next;
                 if(cell120->next != NULL)
                 {
                     cell120 = cell120->next->next;
                     sortedlist55->n--;
                 }
              }
         }
      }
      if(sortedlist55 != NULL && sortedlist55->n > 0){
           cell_t* cell121 = sortedlist55->root;
           cell_t* tmp121  = NULL;
           while(cell121 != NULL) {
                tmp121 = cell121->next;
                free(cell121);
                cell121 = tmp121;
           }
           free(sortedlist55);
      }
      if(sortedlist54 != NULL && sortedlist54->n > 0){
           cell_t* cell122 = sortedlist54->root;
           cell_t* tmp122  = NULL;
           while(cell122 != NULL) {
                tmp122 = cell122->next;
                free(cell122);
                cell122 = tmp122;
           }
           free(sortedlist54);
      }
   }
   return sortedlist49;
}

