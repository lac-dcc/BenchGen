#include "P4_SL.h" 
sortedlist_t* func1(sortedlist_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   sortedlist_t* sortedlist66 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist66->n = 0;
   sortedlist66->root = NULL;
   if(PATH0 & 1) {
      unsigned int loop64 = 0;
      unsigned int loopLimit64 = (rand()%loopsFactor)/2 + 1;
      for(; loop64 < loopLimit64; loop64++) {
         if(sortedlist66 != NULL && sortedlist66->n > 0)
         {
             cell_t* cell147 = sortedlist66->root;
             if(cell147->val == 43)
             {
                 cell147 = cell147->next;
                 sortedlist66->n--;
             }else{
                 while(cell147->next != NULL && cell147->next->val != 43) cell147 = cell147->next;
                 if(cell147->next != NULL)
                 {
                     cell147 = cell147->next->next;
                     sortedlist66->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist66;
      sortedlist_t* sortedlist67 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop65 = 0;
      unsigned int loopLimit65 = (rand()%loopsFactor)/2 + 1;
      for(; loop65 < loopLimit65; loop65++) {
         if(sortedlist67 != NULL && sortedlist67->n > 0)
         {
             cell_t* cell148 = sortedlist67->root;
             if(cell148->val == 28)
             {
                 cell148 = cell148->next;
                 sortedlist67->n--;
             }else{
                 while(cell148->next != NULL && cell148->next->val != 28) cell148 = cell148->next;
                 if(cell148->next != NULL)
                 {
                     cell148 = cell148->next->next;
                     sortedlist67->n--;
                 }
              }
         }
      }
      unsigned int loop66 = 0;
      unsigned int loopLimit66 = (rand()%loopsFactor)/2 + 1;
      for(; loop66 < loopLimit66; loop66++) {
         sortedlist_t* sortedlist68 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist68->n = 0;
         sortedlist68->root = NULL;
         sortedlist_t* sortedlist69 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist69->n = 0;
         sortedlist69->root = NULL;
         if(sortedlist67 != NULL && sortedlist67->n > 0){
              cell_t* cell149 = sortedlist67->root;
              while(cell149 != NULL && cell149->val != 76) cell149 = cell149->next;
              return cell149 != NULL ? sortedlist67 : NULL;
         }
         unsigned int loop67 = 0;
         unsigned int loopLimit67 = (rand()%loopsFactor)/3 + 1;
         for(; loop67 < loopLimit67; loop67++) {
            if(sortedlist66 != NULL && sortedlist66->n > 0){
                 cell_t* cell150 = sortedlist66->root;
                 while(cell150 != NULL && cell150->val != 43) cell150 = cell150->next;
                 return cell150 != NULL ? sortedlist66 : NULL;
            }
         }
         if(sortedlist69 != NULL && sortedlist69->n > 0){
              cell_t* cell151 = sortedlist69->root;
              cell_t* tmp151  = NULL;
              while(cell151 != NULL) {
                   tmp151 = cell151->next;
                   free(cell151);
                   cell151 = tmp151;
              }
              free(sortedlist69);
         }
         if(sortedlist68 != NULL && sortedlist68->n > 0){
              cell_t* cell152 = sortedlist68->root;
              cell_t* tmp152  = NULL;
              while(cell152 != NULL) {
                   tmp152 = cell152->next;
                   free(cell152);
                   cell152 = tmp152;
              }
              free(sortedlist68);
         }
      }
      sortedlist_t* sortedlist70 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist70->n = 0;
      sortedlist70->root = NULL;
      if(PATH0 & 2) {
         unsigned int loop68 = 0;
         unsigned int loopLimit68 = (rand()%loopsFactor)/2 + 1;
         for(; loop68 < loopLimit68; loop68++) {
            sortedlist_t* sortedlist71 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist71->n = 0;
            sortedlist71->root = NULL;
            if(sortedlist71 != NULL && sortedlist71->n > 0){
                 cell_t* cell153 = sortedlist71->root;
                 while(cell153 != NULL && cell153->val != 13) cell153 = cell153->next;
                 return cell153 != NULL ? sortedlist71 : NULL;
            }
            unsigned int loop69 = 0;
            unsigned int loopLimit69 = (rand()%loopsFactor)/3 + 1;
            for(; loop69 < loopLimit69; loop69++) {
               if(sortedlist70 != NULL && sortedlist70->n > 0) {
                    cell_t* cell154 = sortedlist70->root;
                    if(sortedlist70->n == 0) {
                        sortedlist70->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist70->root->val  = 6;
                        sortedlist70->root->next = NULL;
                        sortedlist70->n++;
                    } else {
                        while(cell154 != NULL)
                        {
                            if(cell154->next == NULL && cell154->val < 6) {
                                cell154->next = (cell_t*)malloc(sizeof(cell_t));
                                cell154->next->next = NULL;
                                cell154->next->val  = 6;
                                sortedlist70->n++;
                                break;
                            } else if(6 < cell154->val) {
                                cell_t* tmp154 = cell154->next;
                                cell154->next = (cell_t*)malloc(sizeof(cell_t));
                                cell154->next->next = tmp154;
                                int tmp_val154 = cell154->val;
                                cell154->val = 6;
                                cell154->next->val = tmp_val154;
                                sortedlist70->n++;
                                break;
                            }
                            cell154 = cell154->next;
                        }
                    }
               }
            }
            if(sortedlist71 != NULL && sortedlist71->n > 0){
                 cell_t* cell155 = sortedlist71->root;
                 cell_t* tmp155  = NULL;
                 while(cell155 != NULL) {
                      tmp155 = cell155->next;
                      free(cell155);
                      cell155 = tmp155;
                 }
                 free(sortedlist71);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist66;
         params1.data[1] = sortedlist67;
         params1.data[2] = sortedlist70;
         sortedlist_t* sortedlist72 = func6(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist72 != NULL && sortedlist72->n > 0){
              cell_t* cell156 = sortedlist72->root;
              cell_t* tmp156  = NULL;
              while(cell156 != NULL) {
                   tmp156 = cell156->next;
                   free(cell156);
                   cell156 = tmp156;
              }
              free(sortedlist72);
         }
      }
      unsigned int loop70 = 0;
      unsigned int loopLimit70 = (rand()%loopsFactor)/2 + 1;
      for(; loop70 < loopLimit70; loop70++) {
         if(sortedlist67 != NULL && sortedlist67->n > 0) {
              cell_t* cell157 = sortedlist67->root;
              if(sortedlist67->n == 0) {
                  sortedlist67->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist67->root->val  = 4;
                  sortedlist67->root->next = NULL;
                  sortedlist67->n++;
              } else {
                  while(cell157 != NULL)
                  {
                      if(cell157->next == NULL && cell157->val < 4) {
                          cell157->next = (cell_t*)malloc(sizeof(cell_t));
                          cell157->next->next = NULL;
                          cell157->next->val  = 4;
                          sortedlist67->n++;
                          break;
                      } else if(4 < cell157->val) {
                          cell_t* tmp157 = cell157->next;
                          cell157->next = (cell_t*)malloc(sizeof(cell_t));
                          cell157->next->next = tmp157;
                          int tmp_val157 = cell157->val;
                          cell157->val = 4;
                          cell157->next->val = tmp_val157;
                          sortedlist67->n++;
                          break;
                      }
                      cell157 = cell157->next;
                  }
              }
         }
         if(sortedlist67 != NULL && sortedlist67->n > 0)
         {
             cell_t* cell158 = sortedlist67->root;
             if(cell158->val == 28)
             {
                 cell158 = cell158->next;
                 sortedlist67->n--;
             }else{
                 while(cell158->next != NULL && cell158->next->val != 28) cell158 = cell158->next;
                 if(cell158->next != NULL)
                 {
                     cell158 = cell158->next->next;
                     sortedlist67->n--;
                 }
              }
         }
         if(sortedlist66 != NULL && sortedlist66->n > 0)
         {
             cell_t* cell159 = sortedlist66->root;
             if(cell159->val == 69)
             {
                 cell159 = cell159->next;
                 sortedlist66->n--;
             }else{
                 while(cell159->next != NULL && cell159->next->val != 69) cell159 = cell159->next;
                 if(cell159->next != NULL)
                 {
                     cell159 = cell159->next->next;
                     sortedlist66->n--;
                 }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist66;
      params1.data[1] = sortedlist67;
      params1.data[2] = sortedlist70;
      sortedlist_t* sortedlist73 = func4(&params1, rng(), loopsFactor);
      free(params1.data);
      if(sortedlist73 != NULL && sortedlist73->n > 0){
           cell_t* cell160 = sortedlist73->root;
           cell_t* tmp160  = NULL;
           while(cell160 != NULL) {
                tmp160 = cell160->next;
                free(cell160);
                cell160 = tmp160;
           }
           free(sortedlist73);
      }
      if(sortedlist70 != NULL && sortedlist70->n > 0){
           cell_t* cell161 = sortedlist70->root;
           cell_t* tmp161  = NULL;
           while(cell161 != NULL) {
                tmp161 = cell161->next;
                free(cell161);
                cell161 = tmp161;
           }
           free(sortedlist70);
      }
      if(sortedlist67 != NULL && sortedlist67->n > 0){
           cell_t* cell162 = sortedlist67->root;
           cell_t* tmp162  = NULL;
           while(cell162 != NULL) {
                tmp162 = cell162->next;
                free(cell162);
                cell162 = tmp162;
           }
           free(sortedlist67);
      }
   }
   else {
      sortedlist_t* sortedlist74 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist74->n = 0;
      sortedlist74->root = NULL;
      if(PATH0 & 4) {
         unsigned int loop71 = 0;
         unsigned int loopLimit71 = (rand()%loopsFactor)/2 + 1;
         for(; loop71 < loopLimit71; loop71++) {
            sortedlist_t* sortedlist75 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist75->n = 0;
            sortedlist75->root = NULL;
            if(sortedlist66 != NULL && sortedlist66->n > 0){
                 cell_t* cell163 = sortedlist66->root;
                 while(cell163 != NULL && cell163->val != 17) cell163 = cell163->next;
                 return cell163 != NULL ? sortedlist66 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist66;
            params0.data[1] = sortedlist74;
            params0.data[2] = sortedlist75;
            sortedlist_t* sortedlist76 = func8(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop72 = 0;
            unsigned int loopLimit72 = (rand()%loopsFactor)/3 + 1;
            for(; loop72 < loopLimit72; loop72++) {
               if(sortedlist66 != NULL && sortedlist66->n > 0)
               {
                   cell_t* cell164 = sortedlist66->root;
                   if(cell164->val == 24)
                   {
                       cell164 = cell164->next;
                       sortedlist66->n--;
                   }else{
                       while(cell164->next != NULL && cell164->next->val != 24) cell164 = cell164->next;
                       if(cell164->next != NULL)
                       {
                           cell164 = cell164->next->next;
                           sortedlist66->n--;
                       }
                    }
               }
            }
            unsigned int loop73 = 0;
            unsigned int loopLimit73 = (rand()%loopsFactor)/3 + 1;
            for(; loop73 < loopLimit73; loop73++) {
               if(sortedlist76 != NULL && sortedlist76->n > 0) {
                    cell_t* cell165 = sortedlist76->root;
                    if(sortedlist76->n == 0) {
                        sortedlist76->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist76->root->val  = 70;
                        sortedlist76->root->next = NULL;
                        sortedlist76->n++;
                    } else {
                        while(cell165 != NULL)
                        {
                            if(cell165->next == NULL && cell165->val < 70) {
                                cell165->next = (cell_t*)malloc(sizeof(cell_t));
                                cell165->next->next = NULL;
                                cell165->next->val  = 70;
                                sortedlist76->n++;
                                break;
                            } else if(70 < cell165->val) {
                                cell_t* tmp165 = cell165->next;
                                cell165->next = (cell_t*)malloc(sizeof(cell_t));
                                cell165->next->next = tmp165;
                                int tmp_val165 = cell165->val;
                                cell165->val = 70;
                                cell165->next->val = tmp_val165;
                                sortedlist76->n++;
                                break;
                            }
                            cell165 = cell165->next;
                        }
                    }
               }
            }
            if(sortedlist76 != NULL && sortedlist76->n > 0){
                 cell_t* cell166 = sortedlist76->root;
                 cell_t* tmp166  = NULL;
                 while(cell166 != NULL) {
                      tmp166 = cell166->next;
                      free(cell166);
                      cell166 = tmp166;
                 }
                 free(sortedlist76);
            }
            if(sortedlist75 != NULL && sortedlist75->n > 0){
                 cell_t* cell167 = sortedlist75->root;
                 cell_t* tmp167  = NULL;
                 while(cell167 != NULL) {
                      tmp167 = cell167->next;
                      free(cell167);
                      cell167 = tmp167;
                 }
                 free(sortedlist75);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist66;
         params0.data[1] = sortedlist74;
         sortedlist_t* sortedlist77 = func5(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist77 != NULL && sortedlist77->n > 0){
              cell_t* cell168 = sortedlist77->root;
              cell_t* tmp168  = NULL;
              while(cell168 != NULL) {
                   tmp168 = cell168->next;
                   free(cell168);
                   cell168 = tmp168;
              }
              free(sortedlist77);
         }
      }
      unsigned int loop74 = 0;
      unsigned int loopLimit74 = (rand()%loopsFactor)/2 + 1;
      for(; loop74 < loopLimit74; loop74++) {
         if(sortedlist74 != NULL && sortedlist74->n > 0) {
              cell_t* cell169 = sortedlist74->root;
              if(sortedlist74->n == 0) {
                  sortedlist74->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist74->root->val  = 90;
                  sortedlist74->root->next = NULL;
                  sortedlist74->n++;
              } else {
                  while(cell169 != NULL)
                  {
                      if(cell169->next == NULL && cell169->val < 90) {
                          cell169->next = (cell_t*)malloc(sizeof(cell_t));
                          cell169->next->next = NULL;
                          cell169->next->val  = 90;
                          sortedlist74->n++;
                          break;
                      } else if(90 < cell169->val) {
                          cell_t* tmp169 = cell169->next;
                          cell169->next = (cell_t*)malloc(sizeof(cell_t));
                          cell169->next->next = tmp169;
                          int tmp_val169 = cell169->val;
                          cell169->val = 90;
                          cell169->next->val = tmp_val169;
                          sortedlist74->n++;
                          break;
                      }
                      cell169 = cell169->next;
                  }
              }
         }
         if(sortedlist74 != NULL && sortedlist74->n > 0)
         {
             cell_t* cell170 = sortedlist74->root;
             if(cell170->val == 72)
             {
                 cell170 = cell170->next;
                 sortedlist74->n--;
             }else{
                 while(cell170->next != NULL && cell170->next->val != 72) cell170 = cell170->next;
                 if(cell170->next != NULL)
                 {
                     cell170 = cell170->next->next;
                     sortedlist74->n--;
                 }
              }
         }
         if(sortedlist74 != NULL && sortedlist74->n > 0)
         {
             cell_t* cell171 = sortedlist74->root;
             if(cell171->val == 44)
             {
                 cell171 = cell171->next;
                 sortedlist74->n--;
             }else{
                 while(cell171->next != NULL && cell171->next->val != 44) cell171 = cell171->next;
                 if(cell171->next != NULL)
                 {
                     cell171 = cell171->next->next;
                     sortedlist74->n--;
                 }
              }
         }
      }
      if(sortedlist74 != NULL && sortedlist74->n > 0){
           cell_t* cell172 = sortedlist74->root;
           cell_t* tmp172  = NULL;
           while(cell172 != NULL) {
                tmp172 = cell172->next;
                free(cell172);
                cell172 = tmp172;
           }
           free(sortedlist74);
      }
   }
   unsigned int loop75 = 0;
   unsigned int loopLimit75 = (rand()%loopsFactor)/2 + 1;
   for(; loop75 < loopLimit75; loop75++) {
      if(sortedlist66 != NULL && sortedlist66->n > 0) {
           cell_t* cell173 = sortedlist66->root;
           if(sortedlist66->n == 0) {
               sortedlist66->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist66->root->val  = 5;
               sortedlist66->root->next = NULL;
               sortedlist66->n++;
           } else {
               while(cell173 != NULL)
               {
                   if(cell173->next == NULL && cell173->val < 5) {
                       cell173->next = (cell_t*)malloc(sizeof(cell_t));
                       cell173->next->next = NULL;
                       cell173->next->val  = 5;
                       sortedlist66->n++;
                       break;
                   } else if(5 < cell173->val) {
                       cell_t* tmp173 = cell173->next;
                       cell173->next = (cell_t*)malloc(sizeof(cell_t));
                       cell173->next->next = tmp173;
                       int tmp_val173 = cell173->val;
                       cell173->val = 5;
                       cell173->next->val = tmp_val173;
                       sortedlist66->n++;
                       break;
                   }
                   cell173 = cell173->next;
               }
           }
      }
      sortedlist_t* sortedlist78 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist78->n = 0;
      sortedlist78->root = NULL;
      if(PATH0 & 8) {
         unsigned int loop76 = 0;
         unsigned int loopLimit76 = (rand()%loopsFactor)/3 + 1;
         for(; loop76 < loopLimit76; loop76++) {
            sortedlist_t* sortedlist79 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist79->n = 0;
            sortedlist79->root = NULL;
            if(sortedlist79 != NULL && sortedlist79->n > 0){
                 cell_t* cell174 = sortedlist79->root;
                 while(cell174 != NULL && cell174->val != 54) cell174 = cell174->next;
                 return cell174 != NULL ? sortedlist79 : NULL;
            }
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist66;
            params0.data[1] = sortedlist78;
            params0.data[2] = sortedlist79;
            sortedlist_t* sortedlist80 = func8(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop77 = 0;
            unsigned int loopLimit77 = (rand()%loopsFactor)/4 + 1;
            for(; loop77 < loopLimit77; loop77++) {
               if(sortedlist79 != NULL && sortedlist79->n > 0)
               {
                   cell_t* cell175 = sortedlist79->root;
                   if(cell175->val == 69)
                   {
                       cell175 = cell175->next;
                       sortedlist79->n--;
                   }else{
                       while(cell175->next != NULL && cell175->next->val != 69) cell175 = cell175->next;
                       if(cell175->next != NULL)
                       {
                           cell175 = cell175->next->next;
                           sortedlist79->n--;
                       }
                    }
               }
            }
            unsigned int loop78 = 0;
            unsigned int loopLimit78 = (rand()%loopsFactor)/4 + 1;
            for(; loop78 < loopLimit78; loop78++) {
               if(sortedlist79 != NULL && sortedlist79->n > 0) {
                    cell_t* cell176 = sortedlist79->root;
                    if(sortedlist79->n == 0) {
                        sortedlist79->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist79->root->val  = 42;
                        sortedlist79->root->next = NULL;
                        sortedlist79->n++;
                    } else {
                        while(cell176 != NULL)
                        {
                            if(cell176->next == NULL && cell176->val < 42) {
                                cell176->next = (cell_t*)malloc(sizeof(cell_t));
                                cell176->next->next = NULL;
                                cell176->next->val  = 42;
                                sortedlist79->n++;
                                break;
                            } else if(42 < cell176->val) {
                                cell_t* tmp176 = cell176->next;
                                cell176->next = (cell_t*)malloc(sizeof(cell_t));
                                cell176->next->next = tmp176;
                                int tmp_val176 = cell176->val;
                                cell176->val = 42;
                                cell176->next->val = tmp_val176;
                                sortedlist79->n++;
                                break;
                            }
                            cell176 = cell176->next;
                        }
                    }
               }
            }
            if(sortedlist80 != NULL && sortedlist80->n > 0){
                 cell_t* cell177 = sortedlist80->root;
                 cell_t* tmp177  = NULL;
                 while(cell177 != NULL) {
                      tmp177 = cell177->next;
                      free(cell177);
                      cell177 = tmp177;
                 }
                 free(sortedlist80);
            }
            if(sortedlist79 != NULL && sortedlist79->n > 0){
                 cell_t* cell178 = sortedlist79->root;
                 cell_t* tmp178  = NULL;
                 while(cell178 != NULL) {
                      tmp178 = cell178->next;
                      free(cell178);
                      cell178 = tmp178;
                 }
                 free(sortedlist79);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist66;
         params0.data[1] = sortedlist78;
         sortedlist_t* sortedlist81 = func5(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist81 != NULL && sortedlist81->n > 0){
              cell_t* cell179 = sortedlist81->root;
              cell_t* tmp179  = NULL;
              while(cell179 != NULL) {
                   tmp179 = cell179->next;
                   free(cell179);
                   cell179 = tmp179;
              }
              free(sortedlist81);
         }
      }
      unsigned int loop79 = 0;
      unsigned int loopLimit79 = (rand()%loopsFactor)/3 + 1;
      for(; loop79 < loopLimit79; loop79++) {
         if(sortedlist66 != NULL && sortedlist66->n > 0) {
              cell_t* cell180 = sortedlist66->root;
              if(sortedlist66->n == 0) {
                  sortedlist66->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist66->root->val  = 97;
                  sortedlist66->root->next = NULL;
                  sortedlist66->n++;
              } else {
                  while(cell180 != NULL)
                  {
                      if(cell180->next == NULL && cell180->val < 97) {
                          cell180->next = (cell_t*)malloc(sizeof(cell_t));
                          cell180->next->next = NULL;
                          cell180->next->val  = 97;
                          sortedlist66->n++;
                          break;
                      } else if(97 < cell180->val) {
                          cell_t* tmp180 = cell180->next;
                          cell180->next = (cell_t*)malloc(sizeof(cell_t));
                          cell180->next->next = tmp180;
                          int tmp_val180 = cell180->val;
                          cell180->val = 97;
                          cell180->next->val = tmp_val180;
                          sortedlist66->n++;
                          break;
                      }
                      cell180 = cell180->next;
                  }
              }
         }
         if(sortedlist78 != NULL && sortedlist78->n > 0)
         {
             cell_t* cell181 = sortedlist78->root;
             if(cell181->val == 55)
             {
                 cell181 = cell181->next;
                 sortedlist78->n--;
             }else{
                 while(cell181->next != NULL && cell181->next->val != 55) cell181 = cell181->next;
                 if(cell181->next != NULL)
                 {
                     cell181 = cell181->next->next;
                     sortedlist78->n--;
                 }
              }
         }
         if(sortedlist66 != NULL && sortedlist66->n > 0)
         {
             cell_t* cell182 = sortedlist66->root;
             if(cell182->val == 48)
             {
                 cell182 = cell182->next;
                 sortedlist66->n--;
             }else{
                 while(cell182->next != NULL && cell182->next->val != 48) cell182 = cell182->next;
                 if(cell182->next != NULL)
                 {
                     cell182 = cell182->next->next;
                     sortedlist66->n--;
                 }
              }
         }
      }
      if(sortedlist78 != NULL && sortedlist78->n > 0){
           cell_t* cell183 = sortedlist78->root;
           cell_t* tmp183  = NULL;
           while(cell183 != NULL) {
                tmp183 = cell183->next;
                free(cell183);
                cell183 = tmp183;
           }
           free(sortedlist78);
      }
   }
   return sortedlist66;
}

