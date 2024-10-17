#include "P5_SL.h" 
sortedlist_t* func3(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist60 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist60->n = 0;
   sortedlist60->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop57 = 0;
      unsigned int loopLimit57 = (rand()%loopsFactor)/2 + 1;
      for(; loop57 < loopLimit57; loop57++) {
         if(sortedlist60 != NULL && sortedlist60->n > 0)
         {
             cell_t* cell132 = sortedlist60->root;
             if(cell132->val == 59)
             {
                 cell132 = cell132->next;
                 sortedlist60->n--;
             }else{
                 while(cell132->next != NULL && cell132->next->val != 59) cell132 = cell132->next;
                 if(cell132->next != NULL)
                 {
                     cell132 = cell132->next->next;
                     sortedlist60->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist60;
      sortedlist_t* sortedlist61 = func10(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop58 = 0;
      unsigned int loopLimit58 = (rand()%loopsFactor)/2 + 1;
      for(; loop58 < loopLimit58; loop58++) {
         if(sortedlist60 != NULL && sortedlist60->n > 0)
         {
             cell_t* cell133 = sortedlist60->root;
             if(cell133->val == 32)
             {
                 cell133 = cell133->next;
                 sortedlist60->n--;
             }else{
                 while(cell133->next != NULL && cell133->next->val != 32) cell133 = cell133->next;
                 if(cell133->next != NULL)
                 {
                     cell133 = cell133->next->next;
                     sortedlist60->n--;
                 }
              }
         }
      }
      unsigned int loop59 = 0;
      unsigned int loopLimit59 = (rand()%loopsFactor)/2 + 1;
      for(; loop59 < loopLimit59; loop59++) {
         sortedlist_t* sortedlist62 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist62->n = 0;
         sortedlist62->root = NULL;
         sortedlist_t* sortedlist63 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist63->n = 0;
         sortedlist63->root = NULL;
         if(sortedlist63 != NULL && sortedlist63->n > 0){
              cell_t* cell134 = sortedlist63->root;
              while(cell134 != NULL && cell134->val != 37) cell134 = cell134->next;
              return cell134 != NULL ? sortedlist63 : NULL;
         }
         unsigned int loop60 = 0;
         unsigned int loopLimit60 = (rand()%loopsFactor)/3 + 1;
         for(; loop60 < loopLimit60; loop60++) {
            if(sortedlist60 != NULL && sortedlist60->n > 0){
                 cell_t* cell135 = sortedlist60->root;
                 while(cell135 != NULL && cell135->val != 75) cell135 = cell135->next;
                 return cell135 != NULL ? sortedlist60 : NULL;
            }
         }
         if(sortedlist63 != NULL && sortedlist63->n > 0){
              cell_t* cell136 = sortedlist63->root;
              cell_t* tmp136  = NULL;
              while(cell136 != NULL) {
                   tmp136 = cell136->next;
                   free(cell136);
                   cell136 = tmp136;
              }
              free(sortedlist63);
         }
         if(sortedlist62 != NULL && sortedlist62->n > 0){
              cell_t* cell137 = sortedlist62->root;
              cell_t* tmp137  = NULL;
              while(cell137 != NULL) {
                   tmp137 = cell137->next;
                   free(cell137);
                   cell137 = tmp137;
              }
              free(sortedlist62);
         }
      }
      sortedlist_t* sortedlist64 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist64->n = 0;
      sortedlist64->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop61 = 0;
         unsigned int loopLimit61 = (rand()%loopsFactor)/2 + 1;
         for(; loop61 < loopLimit61; loop61++) {
            sortedlist_t* sortedlist65 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist65->n = 0;
            sortedlist65->root = NULL;
            if(sortedlist65 != NULL && sortedlist65->n > 0){
                 cell_t* cell138 = sortedlist65->root;
                 while(cell138 != NULL && cell138->val != 74) cell138 = cell138->next;
                 return cell138 != NULL ? sortedlist65 : NULL;
            }
            unsigned int loop62 = 0;
            unsigned int loopLimit62 = (rand()%loopsFactor)/3 + 1;
            for(; loop62 < loopLimit62; loop62++) {
               if(sortedlist61 != NULL && sortedlist61->n > 0) {
                    cell_t* cell139 = sortedlist61->root;
                    if(sortedlist61->n == 0) {
                        sortedlist61->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist61->root->val  = 58;
                        sortedlist61->root->next = NULL;
                        sortedlist61->n++;
                    } else {
                        while(cell139 != NULL)
                        {
                            if(cell139->next == NULL && cell139->val < 58) {
                                cell139->next = (cell_t*)malloc(sizeof(cell_t));
                                cell139->next->next = NULL;
                                cell139->next->val  = 58;
                                sortedlist61->n++;
                                break;
                            } else if(58 < cell139->val) {
                                cell_t* tmp139 = cell139->next;
                                cell139->next = (cell_t*)malloc(sizeof(cell_t));
                                cell139->next->next = tmp139;
                                int tmp_val139 = cell139->val;
                                cell139->val = 58;
                                cell139->next->val = tmp_val139;
                                sortedlist61->n++;
                                break;
                            }
                            cell139 = cell139->next;
                        }
                    }
               }
            }
            if(sortedlist65 != NULL && sortedlist65->n > 0){
                 cell_t* cell140 = sortedlist65->root;
                 cell_t* tmp140  = NULL;
                 while(cell140 != NULL) {
                      tmp140 = cell140->next;
                      free(cell140);
                      cell140 = tmp140;
                 }
                 free(sortedlist65);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist60;
         params1.data[1] = sortedlist61;
         params1.data[2] = sortedlist64;
         sortedlist_t* sortedlist66 = func8(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist66 != NULL && sortedlist66->n > 0){
              cell_t* cell141 = sortedlist66->root;
              cell_t* tmp141  = NULL;
              while(cell141 != NULL) {
                   tmp141 = cell141->next;
                   free(cell141);
                   cell141 = tmp141;
              }
              free(sortedlist66);
         }
      }
      unsigned int loop63 = 0;
      unsigned int loopLimit63 = (rand()%loopsFactor)/2 + 1;
      for(; loop63 < loopLimit63; loop63++) {
         if(sortedlist61 != NULL && sortedlist61->n > 0) {
              cell_t* cell142 = sortedlist61->root;
              if(sortedlist61->n == 0) {
                  sortedlist61->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist61->root->val  = 29;
                  sortedlist61->root->next = NULL;
                  sortedlist61->n++;
              } else {
                  while(cell142 != NULL)
                  {
                      if(cell142->next == NULL && cell142->val < 29) {
                          cell142->next = (cell_t*)malloc(sizeof(cell_t));
                          cell142->next->next = NULL;
                          cell142->next->val  = 29;
                          sortedlist61->n++;
                          break;
                      } else if(29 < cell142->val) {
                          cell_t* tmp142 = cell142->next;
                          cell142->next = (cell_t*)malloc(sizeof(cell_t));
                          cell142->next->next = tmp142;
                          int tmp_val142 = cell142->val;
                          cell142->val = 29;
                          cell142->next->val = tmp_val142;
                          sortedlist61->n++;
                          break;
                      }
                      cell142 = cell142->next;
                  }
              }
         }
         if(sortedlist61 != NULL && sortedlist61->n > 0)
         {
             cell_t* cell143 = sortedlist61->root;
             if(cell143->val == 35)
             {
                 cell143 = cell143->next;
                 sortedlist61->n--;
             }else{
                 while(cell143->next != NULL && cell143->next->val != 35) cell143 = cell143->next;
                 if(cell143->next != NULL)
                 {
                     cell143 = cell143->next->next;
                     sortedlist61->n--;
                 }
              }
         }
         if(sortedlist61 != NULL && sortedlist61->n > 0)
         {
             cell_t* cell144 = sortedlist61->root;
             if(cell144->val == 18)
             {
                 cell144 = cell144->next;
                 sortedlist61->n--;
             }else{
                 while(cell144->next != NULL && cell144->next->val != 18) cell144 = cell144->next;
                 if(cell144->next != NULL)
                 {
                     cell144 = cell144->next->next;
                     sortedlist61->n--;
                 }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist60;
      params1.data[1] = sortedlist61;
      params1.data[2] = sortedlist64;
      sortedlist_t* sortedlist67 = func6(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist67 != NULL && sortedlist67->n > 0){
           cell_t* cell145 = sortedlist67->root;
           cell_t* tmp145  = NULL;
           while(cell145 != NULL) {
                tmp145 = cell145->next;
                free(cell145);
                cell145 = tmp145;
           }
           free(sortedlist67);
      }
      if(sortedlist64 != NULL && sortedlist64->n > 0){
           cell_t* cell146 = sortedlist64->root;
           cell_t* tmp146  = NULL;
           while(cell146 != NULL) {
                tmp146 = cell146->next;
                free(cell146);
                cell146 = tmp146;
           }
           free(sortedlist64);
      }
      if(sortedlist61 != NULL && sortedlist61->n > 0){
           cell_t* cell147 = sortedlist61->root;
           cell_t* tmp147  = NULL;
           while(cell147 != NULL) {
                tmp147 = cell147->next;
                free(cell147);
                cell147 = tmp147;
           }
           free(sortedlist61);
      }
   }
   else {
      sortedlist_t* sortedlist68 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist68->n = 0;
      sortedlist68->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop64 = 0;
         unsigned int loopLimit64 = (rand()%loopsFactor)/2 + 1;
         for(; loop64 < loopLimit64; loop64++) {
            sortedlist_t* sortedlist69 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist69->n = 0;
            sortedlist69->root = NULL;
            if(sortedlist69 != NULL && sortedlist69->n > 0){
                 cell_t* cell148 = sortedlist69->root;
                 while(cell148 != NULL && cell148->val != 43) cell148 = cell148->next;
                 return cell148 != NULL ? sortedlist69 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist60;
            params0.data[1] = sortedlist68;
            params0.data[2] = sortedlist69;
            sortedlist_t* sortedlist70 = func10(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop65 = 0;
            unsigned int loopLimit65 = (rand()%loopsFactor)/3 + 1;
            for(; loop65 < loopLimit65; loop65++) {
               if(sortedlist70 != NULL && sortedlist70->n > 0)
               {
                   cell_t* cell149 = sortedlist70->root;
                   if(cell149->val == 28)
                   {
                       cell149 = cell149->next;
                       sortedlist70->n--;
                   }else{
                       while(cell149->next != NULL && cell149->next->val != 28) cell149 = cell149->next;
                       if(cell149->next != NULL)
                       {
                           cell149 = cell149->next->next;
                           sortedlist70->n--;
                       }
                    }
               }
            }
            unsigned int loop66 = 0;
            unsigned int loopLimit66 = (rand()%loopsFactor)/3 + 1;
            for(; loop66 < loopLimit66; loop66++) {
               if(sortedlist68 != NULL && sortedlist68->n > 0) {
                    cell_t* cell150 = sortedlist68->root;
                    if(sortedlist68->n == 0) {
                        sortedlist68->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist68->root->val  = 76;
                        sortedlist68->root->next = NULL;
                        sortedlist68->n++;
                    } else {
                        while(cell150 != NULL)
                        {
                            if(cell150->next == NULL && cell150->val < 76) {
                                cell150->next = (cell_t*)malloc(sizeof(cell_t));
                                cell150->next->next = NULL;
                                cell150->next->val  = 76;
                                sortedlist68->n++;
                                break;
                            } else if(76 < cell150->val) {
                                cell_t* tmp150 = cell150->next;
                                cell150->next = (cell_t*)malloc(sizeof(cell_t));
                                cell150->next->next = tmp150;
                                int tmp_val150 = cell150->val;
                                cell150->val = 76;
                                cell150->next->val = tmp_val150;
                                sortedlist68->n++;
                                break;
                            }
                            cell150 = cell150->next;
                        }
                    }
               }
            }
            if(sortedlist70 != NULL && sortedlist70->n > 0){
                 cell_t* cell151 = sortedlist70->root;
                 cell_t* tmp151  = NULL;
                 while(cell151 != NULL) {
                      tmp151 = cell151->next;
                      free(cell151);
                      cell151 = tmp151;
                 }
                 free(sortedlist70);
            }
            if(sortedlist69 != NULL && sortedlist69->n > 0){
                 cell_t* cell152 = sortedlist69->root;
                 cell_t* tmp152  = NULL;
                 while(cell152 != NULL) {
                      tmp152 = cell152->next;
                      free(cell152);
                      cell152 = tmp152;
                 }
                 free(sortedlist69);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist60;
         params0.data[1] = sortedlist68;
         sortedlist_t* sortedlist71 = func7(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist71 != NULL && sortedlist71->n > 0){
              cell_t* cell153 = sortedlist71->root;
              cell_t* tmp153  = NULL;
              while(cell153 != NULL) {
                   tmp153 = cell153->next;
                   free(cell153);
                   cell153 = tmp153;
              }
              free(sortedlist71);
         }
      }
      unsigned int loop67 = 0;
      unsigned int loopLimit67 = (rand()%loopsFactor)/2 + 1;
      for(; loop67 < loopLimit67; loop67++) {
         if(sortedlist60 != NULL && sortedlist60->n > 0) {
              cell_t* cell154 = sortedlist60->root;
              if(sortedlist60->n == 0) {
                  sortedlist60->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist60->root->val  = 43;
                  sortedlist60->root->next = NULL;
                  sortedlist60->n++;
              } else {
                  while(cell154 != NULL)
                  {
                      if(cell154->next == NULL && cell154->val < 43) {
                          cell154->next = (cell_t*)malloc(sizeof(cell_t));
                          cell154->next->next = NULL;
                          cell154->next->val  = 43;
                          sortedlist60->n++;
                          break;
                      } else if(43 < cell154->val) {
                          cell_t* tmp154 = cell154->next;
                          cell154->next = (cell_t*)malloc(sizeof(cell_t));
                          cell154->next->next = tmp154;
                          int tmp_val154 = cell154->val;
                          cell154->val = 43;
                          cell154->next->val = tmp_val154;
                          sortedlist60->n++;
                          break;
                      }
                      cell154 = cell154->next;
                  }
              }
         }
         if(sortedlist68 != NULL && sortedlist68->n > 0)
         {
             cell_t* cell155 = sortedlist68->root;
             if(cell155->val == 13)
             {
                 cell155 = cell155->next;
                 sortedlist68->n--;
             }else{
                 while(cell155->next != NULL && cell155->next->val != 13) cell155 = cell155->next;
                 if(cell155->next != NULL)
                 {
                     cell155 = cell155->next->next;
                     sortedlist68->n--;
                 }
              }
         }
         if(sortedlist60 != NULL && sortedlist60->n > 0)
         {
             cell_t* cell156 = sortedlist60->root;
             if(cell156->val == 6)
             {
                 cell156 = cell156->next;
                 sortedlist60->n--;
             }else{
                 while(cell156->next != NULL && cell156->next->val != 6) cell156 = cell156->next;
                 if(cell156->next != NULL)
                 {
                     cell156 = cell156->next->next;
                     sortedlist60->n--;
                 }
              }
         }
      }
      if(sortedlist68 != NULL && sortedlist68->n > 0){
           cell_t* cell157 = sortedlist68->root;
           cell_t* tmp157  = NULL;
           while(cell157 != NULL) {
                tmp157 = cell157->next;
                free(cell157);
                cell157 = tmp157;
           }
           free(sortedlist68);
      }
   }
   unsigned int loop68 = 0;
   unsigned int loopLimit68 = (rand()%loopsFactor)/2 + 1;
   for(; loop68 < loopLimit68; loop68++) {
      if(sortedlist60 != NULL && sortedlist60->n > 0) {
           cell_t* cell158 = sortedlist60->root;
           if(sortedlist60->n == 0) {
               sortedlist60->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist60->root->val  = 4;
               sortedlist60->root->next = NULL;
               sortedlist60->n++;
           } else {
               while(cell158 != NULL)
               {
                   if(cell158->next == NULL && cell158->val < 4) {
                       cell158->next = (cell_t*)malloc(sizeof(cell_t));
                       cell158->next->next = NULL;
                       cell158->next->val  = 4;
                       sortedlist60->n++;
                       break;
                   } else if(4 < cell158->val) {
                       cell_t* tmp158 = cell158->next;
                       cell158->next = (cell_t*)malloc(sizeof(cell_t));
                       cell158->next->next = tmp158;
                       int tmp_val158 = cell158->val;
                       cell158->val = 4;
                       cell158->next->val = tmp_val158;
                       sortedlist60->n++;
                       break;
                   }
                   cell158 = cell158->next;
               }
           }
      }
      sortedlist_t* sortedlist72 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist72->n = 0;
      sortedlist72->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop69 = 0;
         unsigned int loopLimit69 = (rand()%loopsFactor)/3 + 1;
         for(; loop69 < loopLimit69; loop69++) {
            sortedlist_t* sortedlist73 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist73->n = 0;
            sortedlist73->root = NULL;
            if(sortedlist72 != NULL && sortedlist72->n > 0){
                 cell_t* cell159 = sortedlist72->root;
                 while(cell159 != NULL && cell159->val != 28) cell159 = cell159->next;
                 return cell159 != NULL ? sortedlist72 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist60;
            params0.data[1] = sortedlist72;
            params0.data[2] = sortedlist73;
            sortedlist_t* sortedlist74 = func10(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop70 = 0;
            unsigned int loopLimit70 = (rand()%loopsFactor)/4 + 1;
            for(; loop70 < loopLimit70; loop70++) {
               if(sortedlist60 != NULL && sortedlist60->n > 0)
               {
                   cell_t* cell160 = sortedlist60->root;
                   if(cell160->val == 69)
                   {
                       cell160 = cell160->next;
                       sortedlist60->n--;
                   }else{
                       while(cell160->next != NULL && cell160->next->val != 69) cell160 = cell160->next;
                       if(cell160->next != NULL)
                       {
                           cell160 = cell160->next->next;
                           sortedlist60->n--;
                       }
                    }
               }
            }
            unsigned int loop71 = 0;
            unsigned int loopLimit71 = (rand()%loopsFactor)/4 + 1;
            for(; loop71 < loopLimit71; loop71++) {
               if(sortedlist72 != NULL && sortedlist72->n > 0) {
                    cell_t* cell161 = sortedlist72->root;
                    if(sortedlist72->n == 0) {
                        sortedlist72->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist72->root->val  = 17;
                        sortedlist72->root->next = NULL;
                        sortedlist72->n++;
                    } else {
                        while(cell161 != NULL)
                        {
                            if(cell161->next == NULL && cell161->val < 17) {
                                cell161->next = (cell_t*)malloc(sizeof(cell_t));
                                cell161->next->next = NULL;
                                cell161->next->val  = 17;
                                sortedlist72->n++;
                                break;
                            } else if(17 < cell161->val) {
                                cell_t* tmp161 = cell161->next;
                                cell161->next = (cell_t*)malloc(sizeof(cell_t));
                                cell161->next->next = tmp161;
                                int tmp_val161 = cell161->val;
                                cell161->val = 17;
                                cell161->next->val = tmp_val161;
                                sortedlist72->n++;
                                break;
                            }
                            cell161 = cell161->next;
                        }
                    }
               }
            }
            if(sortedlist74 != NULL && sortedlist74->n > 0){
                 cell_t* cell162 = sortedlist74->root;
                 cell_t* tmp162  = NULL;
                 while(cell162 != NULL) {
                      tmp162 = cell162->next;
                      free(cell162);
                      cell162 = tmp162;
                 }
                 free(sortedlist74);
            }
            if(sortedlist73 != NULL && sortedlist73->n > 0){
                 cell_t* cell163 = sortedlist73->root;
                 cell_t* tmp163  = NULL;
                 while(cell163 != NULL) {
                      tmp163 = cell163->next;
                      free(cell163);
                      cell163 = tmp163;
                 }
                 free(sortedlist73);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist60;
         params0.data[1] = sortedlist72;
         sortedlist_t* sortedlist75 = func7(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist75 != NULL && sortedlist75->n > 0){
              cell_t* cell164 = sortedlist75->root;
              cell_t* tmp164  = NULL;
              while(cell164 != NULL) {
                   tmp164 = cell164->next;
                   free(cell164);
                   cell164 = tmp164;
              }
              free(sortedlist75);
         }
      }
      unsigned int loop72 = 0;
      unsigned int loopLimit72 = (rand()%loopsFactor)/3 + 1;
      for(; loop72 < loopLimit72; loop72++) {
         if(sortedlist60 != NULL && sortedlist60->n > 0) {
              cell_t* cell165 = sortedlist60->root;
              if(sortedlist60->n == 0) {
                  sortedlist60->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist60->root->val  = 24;
                  sortedlist60->root->next = NULL;
                  sortedlist60->n++;
              } else {
                  while(cell165 != NULL)
                  {
                      if(cell165->next == NULL && cell165->val < 24) {
                          cell165->next = (cell_t*)malloc(sizeof(cell_t));
                          cell165->next->next = NULL;
                          cell165->next->val  = 24;
                          sortedlist60->n++;
                          break;
                      } else if(24 < cell165->val) {
                          cell_t* tmp165 = cell165->next;
                          cell165->next = (cell_t*)malloc(sizeof(cell_t));
                          cell165->next->next = tmp165;
                          int tmp_val165 = cell165->val;
                          cell165->val = 24;
                          cell165->next->val = tmp_val165;
                          sortedlist60->n++;
                          break;
                      }
                      cell165 = cell165->next;
                  }
              }
         }
         if(sortedlist72 != NULL && sortedlist72->n > 0)
         {
             cell_t* cell166 = sortedlist72->root;
             if(cell166->val == 70)
             {
                 cell166 = cell166->next;
                 sortedlist72->n--;
             }else{
                 while(cell166->next != NULL && cell166->next->val != 70) cell166 = cell166->next;
                 if(cell166->next != NULL)
                 {
                     cell166 = cell166->next->next;
                     sortedlist72->n--;
                 }
              }
         }
         if(sortedlist72 != NULL && sortedlist72->n > 0)
         {
             cell_t* cell167 = sortedlist72->root;
             if(cell167->val == 90)
             {
                 cell167 = cell167->next;
                 sortedlist72->n--;
             }else{
                 while(cell167->next != NULL && cell167->next->val != 90) cell167 = cell167->next;
                 if(cell167->next != NULL)
                 {
                     cell167 = cell167->next->next;
                     sortedlist72->n--;
                 }
              }
         }
      }
      if(sortedlist72 != NULL && sortedlist72->n > 0){
           cell_t* cell168 = sortedlist72->root;
           cell_t* tmp168  = NULL;
           while(cell168 != NULL) {
                tmp168 = cell168->next;
                free(cell168);
                cell168 = tmp168;
           }
           free(sortedlist72);
      }
   }
   return sortedlist60;
}

