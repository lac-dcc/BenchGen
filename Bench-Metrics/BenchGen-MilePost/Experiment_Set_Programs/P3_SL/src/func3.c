#include "P3_SL.h" 
sortedlist_t* func3(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist61 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist61->n = 0;
   sortedlist61->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop57 = 0;
      unsigned int loopLimit57 = (rand()%loopsFactor)/3 + 1;
      for(; loop57 < loopLimit57; loop57++) {
         if(sortedlist61 != NULL && sortedlist61->n > 0)
         {
             cell_t* cell108 = sortedlist61->root;
             if(cell108->val == 83)
             {
                 cell108 = cell108->next;
                 sortedlist61->n--;
             }else{
                 while(cell108->next != NULL && cell108->next->val != 83) cell108 = cell108->next;
                 if(cell108->next != NULL)
                 {
                     cell108 = cell108->next->next;
                     sortedlist61->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist61;
      sortedlist_t* sortedlist62 = func9(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop58 = 0;
      unsigned int loopLimit58 = (rand()%loopsFactor)/3 + 1;
      for(; loop58 < loopLimit58; loop58++) {
         if(sortedlist62 != NULL && sortedlist62->n > 0)
         {
             cell_t* cell109 = sortedlist62->root;
             if(cell109->val == 24)
             {
                 cell109 = cell109->next;
                 sortedlist62->n--;
             }else{
                 while(cell109->next != NULL && cell109->next->val != 24) cell109 = cell109->next;
                 if(cell109->next != NULL)
                 {
                     cell109 = cell109->next->next;
                     sortedlist62->n--;
                 }
              }
         }
      }
      unsigned int loop59 = 0;
      unsigned int loopLimit59 = (rand()%loopsFactor)/3 + 1;
      for(; loop59 < loopLimit59; loop59++) {
         if(sortedlist61 != NULL && sortedlist61->n > 0) {
              cell_t* cell110 = sortedlist61->root;
              if(sortedlist61->n == 0) {
                  sortedlist61->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist61->root->val  = 71;
                  sortedlist61->root->next = NULL;
                  sortedlist61->n++;
              } else {
                  while(cell110 != NULL)
                  {
                      if(cell110->next == NULL && cell110->val < 71) {
                          cell110->next = (cell_t*)malloc(sizeof(cell_t));
                          cell110->next->next = NULL;
                          cell110->next->val  = 71;
                          sortedlist61->n++;
                          break;
                      } else if(71 < cell110->val) {
                          cell_t* tmp110 = cell110->next;
                          cell110->next = (cell_t*)malloc(sizeof(cell_t));
                          cell110->next->next = tmp110;
                          int tmp_val110 = cell110->val;
                          cell110->val = 71;
                          cell110->next->val = tmp_val110;
                          sortedlist61->n++;
                          break;
                      }
                      cell110 = cell110->next;
                  }
              }
         }
      }
      sortedlist_t* sortedlist63 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist63->n = 0;
      sortedlist63->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop60 = 0;
         unsigned int loopLimit60 = (rand()%loopsFactor)/3 + 1;
         for(; loop60 < loopLimit60; loop60++) {
            sortedlist_t* sortedlist64 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist64->n = 0;
            sortedlist64->root = NULL;
            if(sortedlist61 != NULL && sortedlist61->n > 0){
                 cell_t* cell111 = sortedlist61->root;
                 while(cell111 != NULL && cell111->val != 29) cell111 = cell111->next;
                 return cell111 != NULL ? sortedlist61 : NULL;
            }
            unsigned int loop61 = 0;
            unsigned int loopLimit61 = (rand()%loopsFactor)/4 + 1;
            for(; loop61 < loopLimit61; loop61++) {
               if(sortedlist64 != NULL && sortedlist64->n > 0) {
                    cell_t* cell112 = sortedlist64->root;
                    if(sortedlist64->n == 0) {
                        sortedlist64->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist64->root->val  = 19;
                        sortedlist64->root->next = NULL;
                        sortedlist64->n++;
                    } else {
                        while(cell112 != NULL)
                        {
                            if(cell112->next == NULL && cell112->val < 19) {
                                cell112->next = (cell_t*)malloc(sizeof(cell_t));
                                cell112->next->next = NULL;
                                cell112->next->val  = 19;
                                sortedlist64->n++;
                                break;
                            } else if(19 < cell112->val) {
                                cell_t* tmp112 = cell112->next;
                                cell112->next = (cell_t*)malloc(sizeof(cell_t));
                                cell112->next->next = tmp112;
                                int tmp_val112 = cell112->val;
                                cell112->val = 19;
                                cell112->next->val = tmp_val112;
                                sortedlist64->n++;
                                break;
                            }
                            cell112 = cell112->next;
                        }
                    }
               }
            }
            if(sortedlist64 != NULL && sortedlist64->n > 0){
                 cell_t* cell113 = sortedlist64->root;
                 cell_t* tmp113  = NULL;
                 while(cell113 != NULL) {
                      tmp113 = cell113->next;
                      free(cell113);
                      cell113 = tmp113;
                 }
                 free(sortedlist64);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist61;
         params1.data[1] = sortedlist62;
         params1.data[2] = sortedlist63;
         sortedlist_t* sortedlist65 = func7(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist65 != NULL && sortedlist65->n > 0){
              cell_t* cell114 = sortedlist65->root;
              cell_t* tmp114  = NULL;
              while(cell114 != NULL) {
                   tmp114 = cell114->next;
                   free(cell114);
                   cell114 = tmp114;
              }
              free(sortedlist65);
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist61;
      params1.data[1] = sortedlist62;
      params1.data[2] = sortedlist63;
      sortedlist_t* sortedlist66 = func5(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist66 != NULL && sortedlist66->n > 0){
           cell_t* cell115 = sortedlist66->root;
           cell_t* tmp115  = NULL;
           while(cell115 != NULL) {
                tmp115 = cell115->next;
                free(cell115);
                cell115 = tmp115;
           }
           free(sortedlist66);
      }
      if(sortedlist63 != NULL && sortedlist63->n > 0){
           cell_t* cell116 = sortedlist63->root;
           cell_t* tmp116  = NULL;
           while(cell116 != NULL) {
                tmp116 = cell116->next;
                free(cell116);
                cell116 = tmp116;
           }
           free(sortedlist63);
      }
      if(sortedlist62 != NULL && sortedlist62->n > 0){
           cell_t* cell117 = sortedlist62->root;
           cell_t* tmp117  = NULL;
           while(cell117 != NULL) {
                tmp117 = cell117->next;
                free(cell117);
                cell117 = tmp117;
           }
           free(sortedlist62);
      }
   }
   else {
      unsigned int loop62 = 0;
      unsigned int loopLimit62 = (rand()%loopsFactor)/3 + 1;
      for(; loop62 < loopLimit62; loop62++) {
         if(sortedlist61 != NULL && sortedlist61->n > 0)
         {
             cell_t* cell118 = sortedlist61->root;
             if(cell118->val == 68)
             {
                 cell118 = cell118->next;
                 sortedlist61->n--;
             }else{
                 while(cell118->next != NULL && cell118->next->val != 68) cell118 = cell118->next;
                 if(cell118->next != NULL)
                 {
                     cell118 = cell118->next->next;
                     sortedlist61->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist61;
      sortedlist_t* sortedlist67 = func9(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop63 = 0;
      unsigned int loopLimit63 = (rand()%loopsFactor)/3 + 1;
      for(; loop63 < loopLimit63; loop63++) {
         if(sortedlist61 != NULL && sortedlist61->n > 0)
         {
             cell_t* cell119 = sortedlist61->root;
             if(cell119->val == 15)
             {
                 cell119 = cell119->next;
                 sortedlist61->n--;
             }else{
                 while(cell119->next != NULL && cell119->next->val != 15) cell119 = cell119->next;
                 if(cell119->next != NULL)
                 {
                     cell119 = cell119->next->next;
                     sortedlist61->n--;
                 }
              }
         }
      }
      unsigned int loop64 = 0;
      unsigned int loopLimit64 = (rand()%loopsFactor)/3 + 1;
      for(; loop64 < loopLimit64; loop64++) {
         if(sortedlist61 != NULL && sortedlist61->n > 0) {
              cell_t* cell120 = sortedlist61->root;
              if(sortedlist61->n == 0) {
                  sortedlist61->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist61->root->val  = 49;
                  sortedlist61->root->next = NULL;
                  sortedlist61->n++;
              } else {
                  while(cell120 != NULL)
                  {
                      if(cell120->next == NULL && cell120->val < 49) {
                          cell120->next = (cell_t*)malloc(sizeof(cell_t));
                          cell120->next->next = NULL;
                          cell120->next->val  = 49;
                          sortedlist61->n++;
                          break;
                      } else if(49 < cell120->val) {
                          cell_t* tmp120 = cell120->next;
                          cell120->next = (cell_t*)malloc(sizeof(cell_t));
                          cell120->next->next = tmp120;
                          int tmp_val120 = cell120->val;
                          cell120->val = 49;
                          cell120->next->val = tmp_val120;
                          sortedlist61->n++;
                          break;
                      }
                      cell120 = cell120->next;
                  }
              }
         }
      }
      sortedlist_t* sortedlist68 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist68->n = 0;
      sortedlist68->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop65 = 0;
         unsigned int loopLimit65 = (rand()%loopsFactor)/3 + 1;
         for(; loop65 < loopLimit65; loop65++) {
            sortedlist_t* sortedlist69 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist69->n = 0;
            sortedlist69->root = NULL;
            if(sortedlist61 != NULL && sortedlist61->n > 0){
                 cell_t* cell121 = sortedlist61->root;
                 while(cell121 != NULL && cell121->val != 23) cell121 = cell121->next;
                 return cell121 != NULL ? sortedlist61 : NULL;
            }
            unsigned int loop66 = 0;
            unsigned int loopLimit66 = (rand()%loopsFactor)/4 + 1;
            for(; loop66 < loopLimit66; loop66++) {
               if(sortedlist68 != NULL && sortedlist68->n > 0) {
                    cell_t* cell122 = sortedlist68->root;
                    if(sortedlist68->n == 0) {
                        sortedlist68->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist68->root->val  = 45;
                        sortedlist68->root->next = NULL;
                        sortedlist68->n++;
                    } else {
                        while(cell122 != NULL)
                        {
                            if(cell122->next == NULL && cell122->val < 45) {
                                cell122->next = (cell_t*)malloc(sizeof(cell_t));
                                cell122->next->next = NULL;
                                cell122->next->val  = 45;
                                sortedlist68->n++;
                                break;
                            } else if(45 < cell122->val) {
                                cell_t* tmp122 = cell122->next;
                                cell122->next = (cell_t*)malloc(sizeof(cell_t));
                                cell122->next->next = tmp122;
                                int tmp_val122 = cell122->val;
                                cell122->val = 45;
                                cell122->next->val = tmp_val122;
                                sortedlist68->n++;
                                break;
                            }
                            cell122 = cell122->next;
                        }
                    }
               }
            }
            if(sortedlist69 != NULL && sortedlist69->n > 0){
                 cell_t* cell123 = sortedlist69->root;
                 cell_t* tmp123  = NULL;
                 while(cell123 != NULL) {
                      tmp123 = cell123->next;
                      free(cell123);
                      cell123 = tmp123;
                 }
                 free(sortedlist69);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist61;
         params1.data[1] = sortedlist67;
         params1.data[2] = sortedlist68;
         sortedlist_t* sortedlist70 = func7(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist70 != NULL && sortedlist70->n > 0){
              cell_t* cell124 = sortedlist70->root;
              cell_t* tmp124  = NULL;
              while(cell124 != NULL) {
                   tmp124 = cell124->next;
                   free(cell124);
                   cell124 = tmp124;
              }
              free(sortedlist70);
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist61;
      params1.data[1] = sortedlist67;
      params1.data[2] = sortedlist68;
      sortedlist_t* sortedlist71 = func5(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist71 != NULL && sortedlist71->n > 0){
           cell_t* cell125 = sortedlist71->root;
           cell_t* tmp125  = NULL;
           while(cell125 != NULL) {
                tmp125 = cell125->next;
                free(cell125);
                cell125 = tmp125;
           }
           free(sortedlist71);
      }
      if(sortedlist68 != NULL && sortedlist68->n > 0){
           cell_t* cell126 = sortedlist68->root;
           cell_t* tmp126  = NULL;
           while(cell126 != NULL) {
                tmp126 = cell126->next;
                free(cell126);
                cell126 = tmp126;
           }
           free(sortedlist68);
      }
      if(sortedlist67 != NULL && sortedlist67->n > 0){
           cell_t* cell127 = sortedlist67->root;
           cell_t* tmp127  = NULL;
           while(cell127 != NULL) {
                tmp127 = cell127->next;
                free(cell127);
                cell127 = tmp127;
           }
           free(sortedlist67);
      }
   }
   unsigned int loop67 = 0;
   unsigned int loopLimit67 = (rand()%loopsFactor)/3 + 1;
   for(; loop67 < loopLimit67; loop67++) {
      if(sortedlist61 != NULL && sortedlist61->n > 0) {
           cell_t* cell128 = sortedlist61->root;
           if(sortedlist61->n == 0) {
               sortedlist61->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist61->root->val  = 51;
               sortedlist61->root->next = NULL;
               sortedlist61->n++;
           } else {
               while(cell128 != NULL)
               {
                   if(cell128->next == NULL && cell128->val < 51) {
                       cell128->next = (cell_t*)malloc(sizeof(cell_t));
                       cell128->next->next = NULL;
                       cell128->next->val  = 51;
                       sortedlist61->n++;
                       break;
                   } else if(51 < cell128->val) {
                       cell_t* tmp128 = cell128->next;
                       cell128->next = (cell_t*)malloc(sizeof(cell_t));
                       cell128->next->next = tmp128;
                       int tmp_val128 = cell128->val;
                       cell128->val = 51;
                       cell128->next->val = tmp_val128;
                       sortedlist61->n++;
                       break;
                   }
                   cell128 = cell128->next;
               }
           }
      }
      unsigned int loop68 = 0;
      unsigned int loopLimit68 = (rand()%loopsFactor)/4 + 1;
      for(; loop68 < loopLimit68; loop68++) {
         if(sortedlist61 != NULL && sortedlist61->n > 0)
         {
             cell_t* cell129 = sortedlist61->root;
             if(cell129->val == 55)
             {
                 cell129 = cell129->next;
                 sortedlist61->n--;
             }else{
                 while(cell129->next != NULL && cell129->next->val != 55) cell129 = cell129->next;
                 if(cell129->next != NULL)
                 {
                     cell129 = cell129->next->next;
                     sortedlist61->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist61;
      sortedlist_t* sortedlist72 = func9(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop69 = 0;
      unsigned int loopLimit69 = (rand()%loopsFactor)/4 + 1;
      for(; loop69 < loopLimit69; loop69++) {
         if(sortedlist72 != NULL && sortedlist72->n > 0)
         {
             cell_t* cell130 = sortedlist72->root;
             if(cell130->val == 88)
             {
                 cell130 = cell130->next;
                 sortedlist72->n--;
             }else{
                 while(cell130->next != NULL && cell130->next->val != 88) cell130 = cell130->next;
                 if(cell130->next != NULL)
                 {
                     cell130 = cell130->next->next;
                     sortedlist72->n--;
                 }
              }
         }
      }
      unsigned int loop70 = 0;
      unsigned int loopLimit70 = (rand()%loopsFactor)/4 + 1;
      for(; loop70 < loopLimit70; loop70++) {
         if(sortedlist61 != NULL && sortedlist61->n > 0) {
              cell_t* cell131 = sortedlist61->root;
              if(sortedlist61->n == 0) {
                  sortedlist61->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist61->root->val  = 28;
                  sortedlist61->root->next = NULL;
                  sortedlist61->n++;
              } else {
                  while(cell131 != NULL)
                  {
                      if(cell131->next == NULL && cell131->val < 28) {
                          cell131->next = (cell_t*)malloc(sizeof(cell_t));
                          cell131->next->next = NULL;
                          cell131->next->val  = 28;
                          sortedlist61->n++;
                          break;
                      } else if(28 < cell131->val) {
                          cell_t* tmp131 = cell131->next;
                          cell131->next = (cell_t*)malloc(sizeof(cell_t));
                          cell131->next->next = tmp131;
                          int tmp_val131 = cell131->val;
                          cell131->val = 28;
                          cell131->next->val = tmp_val131;
                          sortedlist61->n++;
                          break;
                      }
                      cell131 = cell131->next;
                  }
              }
         }
      }
      sortedlist_t* sortedlist73 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist73->n = 0;
      sortedlist73->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop71 = 0;
         unsigned int loopLimit71 = (rand()%loopsFactor)/4 + 1;
         for(; loop71 < loopLimit71; loop71++) {
            sortedlist_t* sortedlist74 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist74->n = 0;
            sortedlist74->root = NULL;
            if(sortedlist72 != NULL && sortedlist72->n > 0){
                 cell_t* cell132 = sortedlist72->root;
                 while(cell132 != NULL && cell132->val != 50) cell132 = cell132->next;
                 return cell132 != NULL ? sortedlist72 : NULL;
            }
            unsigned int loop72 = 0;
            unsigned int loopLimit72 = (rand()%loopsFactor)/5 + 1;
            for(; loop72 < loopLimit72; loop72++) {
               if(sortedlist72 != NULL && sortedlist72->n > 0) {
                    cell_t* cell133 = sortedlist72->root;
                    if(sortedlist72->n == 0) {
                        sortedlist72->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist72->root->val  = 0;
                        sortedlist72->root->next = NULL;
                        sortedlist72->n++;
                    } else {
                        while(cell133 != NULL)
                        {
                            if(cell133->next == NULL && cell133->val < 0) {
                                cell133->next = (cell_t*)malloc(sizeof(cell_t));
                                cell133->next->next = NULL;
                                cell133->next->val  = 0;
                                sortedlist72->n++;
                                break;
                            } else if(0 < cell133->val) {
                                cell_t* tmp133 = cell133->next;
                                cell133->next = (cell_t*)malloc(sizeof(cell_t));
                                cell133->next->next = tmp133;
                                int tmp_val133 = cell133->val;
                                cell133->val = 0;
                                cell133->next->val = tmp_val133;
                                sortedlist72->n++;
                                break;
                            }
                            cell133 = cell133->next;
                        }
                    }
               }
            }
            if(sortedlist74 != NULL && sortedlist74->n > 0){
                 cell_t* cell134 = sortedlist74->root;
                 cell_t* tmp134  = NULL;
                 while(cell134 != NULL) {
                      tmp134 = cell134->next;
                      free(cell134);
                      cell134 = tmp134;
                 }
                 free(sortedlist74);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist61;
         params1.data[1] = sortedlist72;
         params1.data[2] = sortedlist73;
         sortedlist_t* sortedlist75 = func7(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist75 != NULL && sortedlist75->n > 0){
              cell_t* cell135 = sortedlist75->root;
              cell_t* tmp135  = NULL;
              while(cell135 != NULL) {
                   tmp135 = cell135->next;
                   free(cell135);
                   cell135 = tmp135;
              }
              free(sortedlist75);
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist61;
      params1.data[1] = sortedlist72;
      params1.data[2] = sortedlist73;
      sortedlist_t* sortedlist76 = func5(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist76 != NULL && sortedlist76->n > 0){
           cell_t* cell136 = sortedlist76->root;
           cell_t* tmp136  = NULL;
           while(cell136 != NULL) {
                tmp136 = cell136->next;
                free(cell136);
                cell136 = tmp136;
           }
           free(sortedlist76);
      }
      if(sortedlist73 != NULL && sortedlist73->n > 0){
           cell_t* cell137 = sortedlist73->root;
           cell_t* tmp137  = NULL;
           while(cell137 != NULL) {
                tmp137 = cell137->next;
                free(cell137);
                cell137 = tmp137;
           }
           free(sortedlist73);
      }
      if(sortedlist72 != NULL && sortedlist72->n > 0){
           cell_t* cell138 = sortedlist72->root;
           cell_t* tmp138  = NULL;
           while(cell138 != NULL) {
                tmp138 = cell138->next;
                free(cell138);
                cell138 = tmp138;
           }
           free(sortedlist72);
      }
   }
   unsigned int loop73 = 0;
   unsigned int loopLimit73 = (rand()%loopsFactor)/3 + 1;
   for(; loop73 < loopLimit73; loop73++) {
      if(sortedlist61 != NULL && sortedlist61->n > 0) {
           cell_t* cell139 = sortedlist61->root;
           if(sortedlist61->n == 0) {
               sortedlist61->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist61->root->val  = 64;
               sortedlist61->root->next = NULL;
               sortedlist61->n++;
           } else {
               while(cell139 != NULL)
               {
                   if(cell139->next == NULL && cell139->val < 64) {
                       cell139->next = (cell_t*)malloc(sizeof(cell_t));
                       cell139->next->next = NULL;
                       cell139->next->val  = 64;
                       sortedlist61->n++;
                       break;
                   } else if(64 < cell139->val) {
                       cell_t* tmp139 = cell139->next;
                       cell139->next = (cell_t*)malloc(sizeof(cell_t));
                       cell139->next->next = tmp139;
                       int tmp_val139 = cell139->val;
                       cell139->val = 64;
                       cell139->next->val = tmp_val139;
                       sortedlist61->n++;
                       break;
                   }
                   cell139 = cell139->next;
               }
           }
      }
      unsigned int loop74 = 0;
      unsigned int loopLimit74 = (rand()%loopsFactor)/4 + 1;
      for(; loop74 < loopLimit74; loop74++) {
         if(sortedlist61 != NULL && sortedlist61->n > 0)
         {
             cell_t* cell140 = sortedlist61->root;
             if(cell140->val == 14)
             {
                 cell140 = cell140->next;
                 sortedlist61->n--;
             }else{
                 while(cell140->next != NULL && cell140->next->val != 14) cell140 = cell140->next;
                 if(cell140->next != NULL)
                 {
                     cell140 = cell140->next->next;
                     sortedlist61->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist61;
      sortedlist_t* sortedlist77 = func9(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop75 = 0;
      unsigned int loopLimit75 = (rand()%loopsFactor)/4 + 1;
      for(; loop75 < loopLimit75; loop75++) {
         if(sortedlist77 != NULL && sortedlist77->n > 0)
         {
             cell_t* cell141 = sortedlist77->root;
             if(cell141->val == 56)
             {
                 cell141 = cell141->next;
                 sortedlist77->n--;
             }else{
                 while(cell141->next != NULL && cell141->next->val != 56) cell141 = cell141->next;
                 if(cell141->next != NULL)
                 {
                     cell141 = cell141->next->next;
                     sortedlist77->n--;
                 }
              }
         }
      }
      unsigned int loop76 = 0;
      unsigned int loopLimit76 = (rand()%loopsFactor)/4 + 1;
      for(; loop76 < loopLimit76; loop76++) {
         if(sortedlist77 != NULL && sortedlist77->n > 0) {
              cell_t* cell142 = sortedlist77->root;
              if(sortedlist77->n == 0) {
                  sortedlist77->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist77->root->val  = 91;
                  sortedlist77->root->next = NULL;
                  sortedlist77->n++;
              } else {
                  while(cell142 != NULL)
                  {
                      if(cell142->next == NULL && cell142->val < 91) {
                          cell142->next = (cell_t*)malloc(sizeof(cell_t));
                          cell142->next->next = NULL;
                          cell142->next->val  = 91;
                          sortedlist77->n++;
                          break;
                      } else if(91 < cell142->val) {
                          cell_t* tmp142 = cell142->next;
                          cell142->next = (cell_t*)malloc(sizeof(cell_t));
                          cell142->next->next = tmp142;
                          int tmp_val142 = cell142->val;
                          cell142->val = 91;
                          cell142->next->val = tmp_val142;
                          sortedlist77->n++;
                          break;
                      }
                      cell142 = cell142->next;
                  }
              }
         }
      }
      sortedlist_t* sortedlist78 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist78->n = 0;
      sortedlist78->root = NULL;
      if(PATH0 & 16) {
         unsigned int loop77 = 0;
         unsigned int loopLimit77 = (rand()%loopsFactor)/4 + 1;
         for(; loop77 < loopLimit77; loop77++) {
            sortedlist_t* sortedlist79 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist79->n = 0;
            sortedlist79->root = NULL;
            if(sortedlist79 != NULL && sortedlist79->n > 0){
                 cell_t* cell143 = sortedlist79->root;
                 while(cell143 != NULL && cell143->val != 65) cell143 = cell143->next;
                 return cell143 != NULL ? sortedlist79 : NULL;
            }
            unsigned int loop78 = 0;
            unsigned int loopLimit78 = (rand()%loopsFactor)/5 + 1;
            for(; loop78 < loopLimit78; loop78++) {
               if(sortedlist79 != NULL && sortedlist79->n > 0) {
                    cell_t* cell144 = sortedlist79->root;
                    if(sortedlist79->n == 0) {
                        sortedlist79->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist79->root->val  = 36;
                        sortedlist79->root->next = NULL;
                        sortedlist79->n++;
                    } else {
                        while(cell144 != NULL)
                        {
                            if(cell144->next == NULL && cell144->val < 36) {
                                cell144->next = (cell_t*)malloc(sizeof(cell_t));
                                cell144->next->next = NULL;
                                cell144->next->val  = 36;
                                sortedlist79->n++;
                                break;
                            } else if(36 < cell144->val) {
                                cell_t* tmp144 = cell144->next;
                                cell144->next = (cell_t*)malloc(sizeof(cell_t));
                                cell144->next->next = tmp144;
                                int tmp_val144 = cell144->val;
                                cell144->val = 36;
                                cell144->next->val = tmp_val144;
                                sortedlist79->n++;
                                break;
                            }
                            cell144 = cell144->next;
                        }
                    }
               }
            }
            if(sortedlist79 != NULL && sortedlist79->n > 0){
                 cell_t* cell145 = sortedlist79->root;
                 cell_t* tmp145  = NULL;
                 while(cell145 != NULL) {
                      tmp145 = cell145->next;
                      free(cell145);
                      cell145 = tmp145;
                 }
                 free(sortedlist79);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist61;
         params1.data[1] = sortedlist77;
         params1.data[2] = sortedlist78;
         sortedlist_t* sortedlist80 = func7(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist80 != NULL && sortedlist80->n > 0){
              cell_t* cell146 = sortedlist80->root;
              cell_t* tmp146  = NULL;
              while(cell146 != NULL) {
                   tmp146 = cell146->next;
                   free(cell146);
                   cell146 = tmp146;
              }
              free(sortedlist80);
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist61;
      params1.data[1] = sortedlist77;
      params1.data[2] = sortedlist78;
      sortedlist_t* sortedlist81 = func5(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist81 != NULL && sortedlist81->n > 0){
           cell_t* cell147 = sortedlist81->root;
           cell_t* tmp147  = NULL;
           while(cell147 != NULL) {
                tmp147 = cell147->next;
                free(cell147);
                cell147 = tmp147;
           }
           free(sortedlist81);
      }
      if(sortedlist78 != NULL && sortedlist78->n > 0){
           cell_t* cell148 = sortedlist78->root;
           cell_t* tmp148  = NULL;
           while(cell148 != NULL) {
                tmp148 = cell148->next;
                free(cell148);
                cell148 = tmp148;
           }
           free(sortedlist78);
      }
      if(sortedlist77 != NULL && sortedlist77->n > 0){
           cell_t* cell149 = sortedlist77->root;
           cell_t* tmp149  = NULL;
           while(cell149 != NULL) {
                tmp149 = cell149->next;
                free(cell149);
                cell149 = tmp149;
           }
           free(sortedlist77);
      }
   }
   return sortedlist61;
}

