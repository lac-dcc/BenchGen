#include "P5_SL.h"

int main(int argc, char** argv) {
   if (argc < 2 || argc > 3) {
      printf("Usage: %s <paths seed> <loops factor (optional)>\n", argv[0]);
      return 1;
   }
   int loopsFactor = 100;
   if (argc == 3) {
      loopsFactor = atoi(argv[2]);
   }
   srand(atol(argv[1]));
   sortedlist_t* sortedlist0 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
   sortedlist0->n = 0;
   sortedlist0->root = NULL;
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      if(sortedlist0 != NULL && sortedlist0->n > 0){
           cell_t* cell0 = sortedlist0->root;
           while(cell0 != NULL && cell0->val != 86) cell0 = cell0->next;
      }
      sortedlist_t* sortedlist1 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist1->n = 0;
      sortedlist1->root = NULL;
      if(rng() & 1) {
         unsigned int loop1 = 0;
         unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
         for(; loop1 < loopLimit1; loop1++) {
            sortedlist_t* sortedlist2 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist2->n = 0;
            sortedlist2->root = NULL;
            if(sortedlist0 != NULL && sortedlist0->n > 0){
                 cell_t* cell1 = sortedlist0->root;
                 while(cell1 != NULL && cell1->val != 15) cell1 = cell1->next;
            }
            sortedlist_t* sortedlist3 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist3->n = 0;
            sortedlist3->root = NULL;
            if(rng() & 1) {
               unsigned int loop2 = 0;
               unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
               for(; loop2 < loopLimit2; loop2++) {
                  sortedlist_t* sortedlist4 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
                  sortedlist4->n = 0;
                  sortedlist4->root = NULL;
                  if(sortedlist3 != NULL && sortedlist3->n > 0){
                       cell_t* cell2 = sortedlist3->root;
                       while(cell2 != NULL && cell2->val != 35) cell2 = cell2->next;
                  }
                  unsigned int loop3 = 0;
                  unsigned int loopLimit3 = (rand()%loopsFactor)/4 + 1;
                  for(; loop3 < loopLimit3; loop3++) {
                     if(sortedlist1 != NULL && sortedlist1->n > 0) {
                          cell_t* cell3 = sortedlist1->root;
                          if(sortedlist1->n == 0) {
                              sortedlist1->root = (cell_t*)malloc(sizeof(cell_t));
                              sortedlist1->root->val  = 92;
                              sortedlist1->root->next = NULL;
                              sortedlist1->n++;
                          } else {
                              while(cell3 != NULL)
                              {
                                  if(cell3->next == NULL && cell3->val < 92) {
                                      cell3->next = (cell_t*)malloc(sizeof(cell_t));
                                      cell3->next->next = NULL;
                                      cell3->next->val  = 92;
                                      sortedlist1->n++;
                                      break;
                                  } else if(92 < cell3->val) {
                                      cell_t* tmp3 = cell3->next;
                                      cell3->next = (cell_t*)malloc(sizeof(cell_t));
                                      cell3->next->next = tmp3;
                                      int tmp_val3 = cell3->val;
                                      cell3->val = 92;
                                      cell3->next->val = tmp_val3;
                                      sortedlist1->n++;
                                      break;
                                  }
                                  cell3 = cell3->next;
                              }
                          }
                     }
                  }
                  if(sortedlist4 != NULL && sortedlist4->n > 0){
                       cell_t* cell4 = sortedlist4->root;
                       cell_t* tmp4  = NULL;
                       while(cell4 != NULL) {
                            tmp4 = cell4->next;
                            free(cell4);
                            cell4 = tmp4;
                       }
                       free(sortedlist4);
                  }
               }
            }
            else {
               sortedlist_t_param params0;
               params0.size = 4;
               params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
               params0.data[0] = sortedlist0;
               params0.data[1] = sortedlist1;
               params0.data[2] = sortedlist2;
               params0.data[3] = sortedlist3;
               sortedlist_t* sortedlist5 = func8(&params0, loopsFactor);
               free(params0.data);
               if(sortedlist5 != NULL && sortedlist5->n > 0){
                    cell_t* cell6 = sortedlist5->root;
                    cell_t* tmp6  = NULL;
                    while(cell6 != NULL) {
                         tmp6 = cell6->next;
                         free(cell6);
                         cell6 = tmp6;
                    }
                    free(sortedlist5);
               }
            }
            unsigned int loop4 = 0;
            unsigned int loopLimit4 = (rand()%loopsFactor)/3 + 1;
            for(; loop4 < loopLimit4; loop4++) {
               if(sortedlist3 != NULL && sortedlist3->n > 0) {
                    cell_t* cell7 = sortedlist3->root;
                    if(sortedlist3->n == 0) {
                        sortedlist3->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist3->root->val  = 90;
                        sortedlist3->root->next = NULL;
                        sortedlist3->n++;
                    } else {
                        while(cell7 != NULL)
                        {
                            if(cell7->next == NULL && cell7->val < 90) {
                                cell7->next = (cell_t*)malloc(sizeof(cell_t));
                                cell7->next->next = NULL;
                                cell7->next->val  = 90;
                                sortedlist3->n++;
                                break;
                            } else if(90 < cell7->val) {
                                cell_t* tmp7 = cell7->next;
                                cell7->next = (cell_t*)malloc(sizeof(cell_t));
                                cell7->next->next = tmp7;
                                int tmp_val7 = cell7->val;
                                cell7->val = 90;
                                cell7->next->val = tmp_val7;
                                sortedlist3->n++;
                                break;
                            }
                            cell7 = cell7->next;
                        }
                    }
               }
               if(sortedlist3 != NULL && sortedlist3->n > 0)
               {
                   cell_t* cell8 = sortedlist3->root;
                   if(cell8->val == 63)
                   {
                       cell8 = cell8->next;
                       sortedlist3->n--;
                   }else{
                       while(cell8->next != NULL && cell8->next->val != 63) cell8 = cell8->next;
                       if(cell8->next != NULL)
                       {
                           cell8 = cell8->next->next;
                           sortedlist3->n--;
                       }
                    }
               }
               if(sortedlist2 != NULL && sortedlist2->n > 0)
               {
                   cell_t* cell9 = sortedlist2->root;
                   if(cell9->val == 40)
                   {
                       cell9 = cell9->next;
                       sortedlist2->n--;
                   }else{
                       while(cell9->next != NULL && cell9->next->val != 40) cell9 = cell9->next;
                       if(cell9->next != NULL)
                       {
                           cell9 = cell9->next->next;
                           sortedlist2->n--;
                       }
                    }
               }
            }
            sortedlist_t_param params0;
            params0.size = 4;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist0;
            params0.data[1] = sortedlist1;
            params0.data[2] = sortedlist2;
            params0.data[3] = sortedlist3;
            sortedlist_t* sortedlist7 = func5(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop22 = 0;
            unsigned int loopLimit22 = (rand()%loopsFactor)/3 + 1;
            for(; loop22 < loopLimit22; loop22++) {
               if(sortedlist7 != NULL && sortedlist7->n > 0)
               {
                   cell_t* cell49 = sortedlist7->root;
                   if(cell49->val == 13)
                   {
                       cell49 = cell49->next;
                       sortedlist7->n--;
                   }else{
                       while(cell49->next != NULL && cell49->next->val != 13) cell49 = cell49->next;
                       if(cell49->next != NULL)
                       {
                           cell49 = cell49->next->next;
                           sortedlist7->n--;
                       }
                    }
               }
            }
            unsigned int loop23 = 0;
            unsigned int loopLimit23 = (rand()%loopsFactor)/3 + 1;
            for(; loop23 < loopLimit23; loop23++) {
               if(sortedlist2 != NULL && sortedlist2->n > 0) {
                    cell_t* cell50 = sortedlist2->root;
                    if(sortedlist2->n == 0) {
                        sortedlist2->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist2->root->val  = 24;
                        sortedlist2->root->next = NULL;
                        sortedlist2->n++;
                    } else {
                        while(cell50 != NULL)
                        {
                            if(cell50->next == NULL && cell50->val < 24) {
                                cell50->next = (cell_t*)malloc(sizeof(cell_t));
                                cell50->next->next = NULL;
                                cell50->next->val  = 24;
                                sortedlist2->n++;
                                break;
                            } else if(24 < cell50->val) {
                                cell_t* tmp50 = cell50->next;
                                cell50->next = (cell_t*)malloc(sizeof(cell_t));
                                cell50->next->next = tmp50;
                                int tmp_val50 = cell50->val;
                                cell50->val = 24;
                                cell50->next->val = tmp_val50;
                                sortedlist2->n++;
                                break;
                            }
                            cell50 = cell50->next;
                        }
                    }
               }
            }
            if(sortedlist7 != NULL && sortedlist7->n > 0){
                 cell_t* cell51 = sortedlist7->root;
                 cell_t* tmp51  = NULL;
                 while(cell51 != NULL) {
                      tmp51 = cell51->next;
                      free(cell51);
                      cell51 = tmp51;
                 }
                 free(sortedlist7);
            }
            if(sortedlist3 != NULL && sortedlist3->n > 0){
                 cell_t* cell52 = sortedlist3->root;
                 cell_t* tmp52  = NULL;
                 while(cell52 != NULL) {
                      tmp52 = cell52->next;
                      free(cell52);
                      cell52 = tmp52;
                 }
                 free(sortedlist3);
            }
            if(sortedlist2 != NULL && sortedlist2->n > 0){
                 cell_t* cell53 = sortedlist2->root;
                 cell_t* tmp53  = NULL;
                 while(cell53 != NULL) {
                      tmp53 = cell53->next;
                      free(cell53);
                      cell53 = tmp53;
                 }
                 free(sortedlist2);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist0;
         params0.data[1] = sortedlist1;
         sortedlist_t* sortedlist25 = func2(&params0, rng(), loopsFactor);
         free(params0.data);
         if(sortedlist25 != NULL && sortedlist25->n > 0){
              cell_t* cell98 = sortedlist25->root;
              cell_t* tmp98  = NULL;
              while(cell98 != NULL) {
                   tmp98 = cell98->next;
                   free(cell98);
                   cell98 = tmp98;
              }
              free(sortedlist25);
         }
      }
      unsigned int loop42 = 0;
      unsigned int loopLimit42 = (rand()%loopsFactor)/2 + 1;
      for(; loop42 < loopLimit42; loop42++) {
         if(sortedlist1 != NULL && sortedlist1->n > 0) {
              cell_t* cell99 = sortedlist1->root;
              if(sortedlist1->n == 0) {
                  sortedlist1->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist1->root->val  = 56;
                  sortedlist1->root->next = NULL;
                  sortedlist1->n++;
              } else {
                  while(cell99 != NULL)
                  {
                      if(cell99->next == NULL && cell99->val < 56) {
                          cell99->next = (cell_t*)malloc(sizeof(cell_t));
                          cell99->next->next = NULL;
                          cell99->next->val  = 56;
                          sortedlist1->n++;
                          break;
                      } else if(56 < cell99->val) {
                          cell_t* tmp99 = cell99->next;
                          cell99->next = (cell_t*)malloc(sizeof(cell_t));
                          cell99->next->next = tmp99;
                          int tmp_val99 = cell99->val;
                          cell99->val = 56;
                          cell99->next->val = tmp_val99;
                          sortedlist1->n++;
                          break;
                      }
                      cell99 = cell99->next;
                  }
              }
         }
         if(sortedlist1 != NULL && sortedlist1->n > 0)
         {
             cell_t* cell100 = sortedlist1->root;
             if(cell100->val == 53)
             {
                 cell100 = cell100->next;
                 sortedlist1->n--;
             }else{
                 while(cell100->next != NULL && cell100->next->val != 53) cell100 = cell100->next;
                 if(cell100->next != NULL)
                 {
                     cell100 = cell100->next->next;
                     sortedlist1->n--;
                 }
              }
         }
         if(sortedlist0 != NULL && sortedlist0->n > 0)
         {
             cell_t* cell101 = sortedlist0->root;
             if(cell101->val == 65)
             {
                 cell101 = cell101->next;
                 sortedlist0->n--;
             }else{
                 while(cell101->next != NULL && cell101->next->val != 65) cell101 = cell101->next;
                 if(cell101->next != NULL)
                 {
                     cell101 = cell101->next->next;
                     sortedlist0->n--;
                 }
              }
         }
      }
      if(sortedlist0 != NULL && sortedlist0->n > 0)
      {
          cell_t* cell102 = sortedlist0->root;
          if(cell102->val == 83)
          {
              cell102 = cell102->next;
              sortedlist0->n--;
          }else{
              while(cell102->next != NULL && cell102->next->val != 83) cell102 = cell102->next;
              if(cell102->next != NULL)
              {
                  cell102 = cell102->next->next;
                  sortedlist0->n--;
              }
           }
      }
      unsigned int loop43 = 0;
      unsigned int loopLimit43 = (rand()%loopsFactor)/2 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         if(sortedlist1 != NULL && sortedlist1->n > 0)
         {
             cell_t* cell103 = sortedlist1->root;
             if(cell103->val == 24)
             {
                 cell103 = cell103->next;
                 sortedlist1->n--;
             }else{
                 while(cell103->next != NULL && cell103->next->val != 24) cell103 = cell103->next;
                 if(cell103->next != NULL)
                 {
                     cell103 = cell103->next->next;
                     sortedlist1->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist45 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist45->n = 0;
      sortedlist45->root = NULL;
      if(rng() & 1) {
         unsigned int loop44 = 0;
         unsigned int loopLimit44 = (rand()%loopsFactor)/2 + 1;
         for(; loop44 < loopLimit44; loop44++) {
            sortedlist_t* sortedlist46 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist46->n = 0;
            sortedlist46->root = NULL;
            if(sortedlist0 != NULL && sortedlist0->n > 0){
                 cell_t* cell104 = sortedlist0->root;
                 while(cell104 != NULL && cell104->val != 71) cell104 = cell104->next;
            }
            unsigned int loop45 = 0;
            unsigned int loopLimit45 = (rand()%loopsFactor)/3 + 1;
            for(; loop45 < loopLimit45; loop45++) {
               if(sortedlist0 != NULL && sortedlist0->n > 0) {
                    cell_t* cell105 = sortedlist0->root;
                    if(sortedlist0->n == 0) {
                        sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist0->root->val  = 29;
                        sortedlist0->root->next = NULL;
                        sortedlist0->n++;
                    } else {
                        while(cell105 != NULL)
                        {
                            if(cell105->next == NULL && cell105->val < 29) {
                                cell105->next = (cell_t*)malloc(sizeof(cell_t));
                                cell105->next->next = NULL;
                                cell105->next->val  = 29;
                                sortedlist0->n++;
                                break;
                            } else if(29 < cell105->val) {
                                cell_t* tmp105 = cell105->next;
                                cell105->next = (cell_t*)malloc(sizeof(cell_t));
                                cell105->next->next = tmp105;
                                int tmp_val105 = cell105->val;
                                cell105->val = 29;
                                cell105->next->val = tmp_val105;
                                sortedlist0->n++;
                                break;
                            }
                            cell105 = cell105->next;
                        }
                    }
               }
            }
            if(sortedlist46 != NULL && sortedlist46->n > 0){
                 cell_t* cell106 = sortedlist46->root;
                 cell_t* tmp106  = NULL;
                 while(cell106 != NULL) {
                      tmp106 = cell106->next;
                      free(cell106);
                      cell106 = tmp106;
                 }
                 free(sortedlist46);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist0;
         params0.data[1] = sortedlist1;
         params0.data[2] = sortedlist45;
         sortedlist_t* sortedlist47 = func8(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist47 != NULL && sortedlist47->n > 0){
              cell_t* cell107 = sortedlist47->root;
              cell_t* tmp107  = NULL;
              while(cell107 != NULL) {
                   tmp107 = cell107->next;
                   free(cell107);
                   cell107 = tmp107;
              }
              free(sortedlist47);
         }
      }
      unsigned int loop46 = 0;
      unsigned int loopLimit46 = (rand()%loopsFactor)/2 + 1;
      for(; loop46 < loopLimit46; loop46++) {
         if(sortedlist0 != NULL && sortedlist0->n > 0) {
              cell_t* cell108 = sortedlist0->root;
              if(sortedlist0->n == 0) {
                  sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist0->root->val  = 19;
                  sortedlist0->root->next = NULL;
                  sortedlist0->n++;
              } else {
                  while(cell108 != NULL)
                  {
                      if(cell108->next == NULL && cell108->val < 19) {
                          cell108->next = (cell_t*)malloc(sizeof(cell_t));
                          cell108->next->next = NULL;
                          cell108->next->val  = 19;
                          sortedlist0->n++;
                          break;
                      } else if(19 < cell108->val) {
                          cell_t* tmp108 = cell108->next;
                          cell108->next = (cell_t*)malloc(sizeof(cell_t));
                          cell108->next->next = tmp108;
                          int tmp_val108 = cell108->val;
                          cell108->val = 19;
                          cell108->next->val = tmp_val108;
                          sortedlist0->n++;
                          break;
                      }
                      cell108 = cell108->next;
                  }
              }
         }
         if(sortedlist0 != NULL && sortedlist0->n > 0)
         {
             cell_t* cell109 = sortedlist0->root;
             if(cell109->val == 68)
             {
                 cell109 = cell109->next;
                 sortedlist0->n--;
             }else{
                 while(cell109->next != NULL && cell109->next->val != 68) cell109 = cell109->next;
                 if(cell109->next != NULL)
                 {
                     cell109 = cell109->next->next;
                     sortedlist0->n--;
                 }
              }
         }
         if(sortedlist1 != NULL && sortedlist1->n > 0)
         {
             cell_t* cell110 = sortedlist1->root;
             if(cell110->val == 15)
             {
                 cell110 = cell110->next;
                 sortedlist1->n--;
             }else{
                 while(cell110->next != NULL && cell110->next->val != 15) cell110 = cell110->next;
                 if(cell110->next != NULL)
                 {
                     cell110 = cell110->next->next;
                     sortedlist1->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist0;
      params0.data[1] = sortedlist1;
      params0.data[2] = sortedlist45;
      sortedlist_t* sortedlist48 = func5(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop47 = 0;
      unsigned int loopLimit47 = (rand()%loopsFactor)/2 + 1;
      for(; loop47 < loopLimit47; loop47++) {
         if(sortedlist0 != NULL && sortedlist0->n > 0)
         {
             cell_t* cell111 = sortedlist0->root;
             if(cell111->val == 49)
             {
                 cell111 = cell111->next;
                 sortedlist0->n--;
             }else{
                 while(cell111->next != NULL && cell111->next->val != 49) cell111 = cell111->next;
                 if(cell111->next != NULL)
                 {
                     cell111 = cell111->next->next;
                     sortedlist0->n--;
                 }
              }
         }
      }
      unsigned int loop48 = 0;
      unsigned int loopLimit48 = (rand()%loopsFactor)/2 + 1;
      for(; loop48 < loopLimit48; loop48++) {
         sortedlist_t* sortedlist49 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist49->n = 0;
         sortedlist49->root = NULL;
         sortedlist_t* sortedlist50 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist50->n = 0;
         sortedlist50->root = NULL;
         if(sortedlist0 != NULL && sortedlist0->n > 0){
              cell_t* cell112 = sortedlist0->root;
              while(cell112 != NULL && cell112->val != 23) cell112 = cell112->next;
         }
         unsigned int loop49 = 0;
         unsigned int loopLimit49 = (rand()%loopsFactor)/3 + 1;
         for(; loop49 < loopLimit49; loop49++) {
            if(sortedlist45 != NULL && sortedlist45->n > 0){
                 cell_t* cell113 = sortedlist45->root;
                 while(cell113 != NULL && cell113->val != 45) cell113 = cell113->next;
            }
         }
         if(sortedlist50 != NULL && sortedlist50->n > 0){
              cell_t* cell114 = sortedlist50->root;
              cell_t* tmp114  = NULL;
              while(cell114 != NULL) {
                   tmp114 = cell114->next;
                   free(cell114);
                   cell114 = tmp114;
              }
              free(sortedlist50);
         }
         if(sortedlist49 != NULL && sortedlist49->n > 0){
              cell_t* cell115 = sortedlist49->root;
              cell_t* tmp115  = NULL;
              while(cell115 != NULL) {
                   tmp115 = cell115->next;
                   free(cell115);
                   cell115 = tmp115;
              }
              free(sortedlist49);
         }
      }
      sortedlist_t* sortedlist51 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist51->n = 0;
      sortedlist51->root = NULL;
      if(rng() & 1) {
         unsigned int loop50 = 0;
         unsigned int loopLimit50 = (rand()%loopsFactor)/2 + 1;
         for(; loop50 < loopLimit50; loop50++) {
            sortedlist_t* sortedlist52 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist52->n = 0;
            sortedlist52->root = NULL;
            if(sortedlist45 != NULL && sortedlist45->n > 0){
                 cell_t* cell116 = sortedlist45->root;
                 while(cell116 != NULL && cell116->val != 51) cell116 = cell116->next;
            }
            sortedlist_t_param params1;
            params1.size = 6;
            params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
            params1.data[0] = sortedlist0;
            params1.data[1] = sortedlist1;
            params1.data[2] = sortedlist45;
            params1.data[3] = sortedlist48;
            params1.data[4] = sortedlist51;
            params1.data[5] = sortedlist52;
            sortedlist_t* sortedlist53 = func10(&params1, rng(), loopsFactor);
            free(params1.data);
            unsigned int loop51 = 0;
            unsigned int loopLimit51 = (rand()%loopsFactor)/3 + 1;
            for(; loop51 < loopLimit51; loop51++) {
               if(sortedlist51 != NULL && sortedlist51->n > 0)
               {
                   cell_t* cell117 = sortedlist51->root;
                   if(cell117->val == 55)
                   {
                       cell117 = cell117->next;
                       sortedlist51->n--;
                   }else{
                       while(cell117->next != NULL && cell117->next->val != 55) cell117 = cell117->next;
                       if(cell117->next != NULL)
                       {
                           cell117 = cell117->next->next;
                           sortedlist51->n--;
                       }
                    }
               }
            }
            unsigned int loop52 = 0;
            unsigned int loopLimit52 = (rand()%loopsFactor)/3 + 1;
            for(; loop52 < loopLimit52; loop52++) {
               if(sortedlist51 != NULL && sortedlist51->n > 0) {
                    cell_t* cell118 = sortedlist51->root;
                    if(sortedlist51->n == 0) {
                        sortedlist51->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist51->root->val  = 88;
                        sortedlist51->root->next = NULL;
                        sortedlist51->n++;
                    } else {
                        while(cell118 != NULL)
                        {
                            if(cell118->next == NULL && cell118->val < 88) {
                                cell118->next = (cell_t*)malloc(sizeof(cell_t));
                                cell118->next->next = NULL;
                                cell118->next->val  = 88;
                                sortedlist51->n++;
                                break;
                            } else if(88 < cell118->val) {
                                cell_t* tmp118 = cell118->next;
                                cell118->next = (cell_t*)malloc(sizeof(cell_t));
                                cell118->next->next = tmp118;
                                int tmp_val118 = cell118->val;
                                cell118->val = 88;
                                cell118->next->val = tmp_val118;
                                sortedlist51->n++;
                                break;
                            }
                            cell118 = cell118->next;
                        }
                    }
               }
            }
            if(sortedlist53 != NULL && sortedlist53->n > 0){
                 cell_t* cell119 = sortedlist53->root;
                 cell_t* tmp119  = NULL;
                 while(cell119 != NULL) {
                      tmp119 = cell119->next;
                      free(cell119);
                      cell119 = tmp119;
                 }
                 free(sortedlist53);
            }
            if(sortedlist52 != NULL && sortedlist52->n > 0){
                 cell_t* cell120 = sortedlist52->root;
                 cell_t* tmp120  = NULL;
                 while(cell120 != NULL) {
                      tmp120 = cell120->next;
                      free(cell120);
                      cell120 = tmp120;
                 }
                 free(sortedlist52);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 5;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist0;
         params1.data[1] = sortedlist1;
         params1.data[2] = sortedlist45;
         params1.data[3] = sortedlist48;
         params1.data[4] = sortedlist51;
         sortedlist_t* sortedlist54 = func7(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist54 != NULL && sortedlist54->n > 0){
              cell_t* cell128 = sortedlist54->root;
              cell_t* tmp128  = NULL;
              while(cell128 != NULL) {
                   tmp128 = cell128->next;
                   free(cell128);
                   cell128 = tmp128;
              }
              free(sortedlist54);
         }
      }
      unsigned int loop56 = 0;
      unsigned int loopLimit56 = (rand()%loopsFactor)/2 + 1;
      for(; loop56 < loopLimit56; loop56++) {
         if(sortedlist51 != NULL && sortedlist51->n > 0) {
              cell_t* cell129 = sortedlist51->root;
              if(sortedlist51->n == 0) {
                  sortedlist51->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist51->root->val  = 87;
                  sortedlist51->root->next = NULL;
                  sortedlist51->n++;
              } else {
                  while(cell129 != NULL)
                  {
                      if(cell129->next == NULL && cell129->val < 87) {
                          cell129->next = (cell_t*)malloc(sizeof(cell_t));
                          cell129->next->next = NULL;
                          cell129->next->val  = 87;
                          sortedlist51->n++;
                          break;
                      } else if(87 < cell129->val) {
                          cell_t* tmp129 = cell129->next;
                          cell129->next = (cell_t*)malloc(sizeof(cell_t));
                          cell129->next->next = tmp129;
                          int tmp_val129 = cell129->val;
                          cell129->val = 87;
                          cell129->next->val = tmp_val129;
                          sortedlist51->n++;
                          break;
                      }
                      cell129 = cell129->next;
                  }
              }
         }
         if(sortedlist1 != NULL && sortedlist1->n > 0)
         {
             cell_t* cell130 = sortedlist1->root;
             if(cell130->val == 43)
             {
                 cell130 = cell130->next;
                 sortedlist1->n--;
             }else{
                 while(cell130->next != NULL && cell130->next->val != 43) cell130 = cell130->next;
                 if(cell130->next != NULL)
                 {
                     cell130 = cell130->next->next;
                     sortedlist1->n--;
                 }
              }
         }
         if(sortedlist1 != NULL && sortedlist1->n > 0)
         {
             cell_t* cell131 = sortedlist1->root;
             if(cell131->val == 27)
             {
                 cell131 = cell131->next;
                 sortedlist1->n--;
             }else{
                 while(cell131->next != NULL && cell131->next->val != 27) cell131 = cell131->next;
                 if(cell131->next != NULL)
                 {
                     cell131 = cell131->next->next;
                     sortedlist1->n--;
                 }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 5;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist0;
      params1.data[1] = sortedlist1;
      params1.data[2] = sortedlist45;
      params1.data[3] = sortedlist48;
      params1.data[4] = sortedlist51;
      sortedlist_t* sortedlist59 = func3(&params1, rng(), loopsFactor);
      free(params1.data);
      unsigned int loop73 = 0;
      unsigned int loopLimit73 = (rand()%loopsFactor)/2 + 1;
      for(; loop73 < loopLimit73; loop73++) {
         if(sortedlist51 != NULL && sortedlist51->n > 0) {
              cell_t* cell169 = sortedlist51->root;
              if(sortedlist51->n == 0) {
                  sortedlist51->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist51->root->val  = 25;
                  sortedlist51->root->next = NULL;
                  sortedlist51->n++;
              } else {
                  while(cell169 != NULL)
                  {
                      if(cell169->next == NULL && cell169->val < 25) {
                          cell169->next = (cell_t*)malloc(sizeof(cell_t));
                          cell169->next->next = NULL;
                          cell169->next->val  = 25;
                          sortedlist51->n++;
                          break;
                      } else if(25 < cell169->val) {
                          cell_t* tmp169 = cell169->next;
                          cell169->next = (cell_t*)malloc(sizeof(cell_t));
                          cell169->next->next = tmp169;
                          int tmp_val169 = cell169->val;
                          cell169->val = 25;
                          cell169->next->val = tmp_val169;
                          sortedlist51->n++;
                          break;
                      }
                      cell169 = cell169->next;
                  }
              }
         }
         sortedlist_t* sortedlist76 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist76->n = 0;
         sortedlist76->root = NULL;
         if(rng() & 1) {
            unsigned int loop74 = 0;
            unsigned int loopLimit74 = (rand()%loopsFactor)/3 + 1;
            for(; loop74 < loopLimit74; loop74++) {
               sortedlist_t* sortedlist77 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
               sortedlist77->n = 0;
               sortedlist77->root = NULL;
               if(sortedlist51 != NULL && sortedlist51->n > 0){
                    cell_t* cell170 = sortedlist51->root;
                    while(cell170 != NULL && cell170->val != 90) cell170 = cell170->next;
               }
               sortedlist_t_param params2;
               params2.size = 8;
               params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
               params2.data[0] = sortedlist0;
               params2.data[1] = sortedlist1;
               params2.data[2] = sortedlist45;
               params2.data[3] = sortedlist48;
               params2.data[4] = sortedlist51;
               params2.data[5] = sortedlist59;
               params2.data[6] = sortedlist76;
               params2.data[7] = sortedlist77;
               sortedlist_t* sortedlist78 = func10(&params2, rng(), loopsFactor);
               free(params2.data);
               unsigned int loop75 = 0;
               unsigned int loopLimit75 = (rand()%loopsFactor)/4 + 1;
               for(; loop75 < loopLimit75; loop75++) {
                  if(sortedlist45 != NULL && sortedlist45->n > 0)
                  {
                      cell_t* cell171 = sortedlist45->root;
                      if(cell171->val == 39)
                      {
                          cell171 = cell171->next;
                          sortedlist45->n--;
                      }else{
                          while(cell171->next != NULL && cell171->next->val != 39) cell171 = cell171->next;
                          if(cell171->next != NULL)
                          {
                              cell171 = cell171->next->next;
                              sortedlist45->n--;
                          }
                       }
                  }
               }
               unsigned int loop76 = 0;
               unsigned int loopLimit76 = (rand()%loopsFactor)/4 + 1;
               for(; loop76 < loopLimit76; loop76++) {
                  if(sortedlist45 != NULL && sortedlist45->n > 0) {
                       cell_t* cell172 = sortedlist45->root;
                       if(sortedlist45->n == 0) {
                           sortedlist45->root = (cell_t*)malloc(sizeof(cell_t));
                           sortedlist45->root->val  = 86;
                           sortedlist45->root->next = NULL;
                           sortedlist45->n++;
                       } else {
                           while(cell172 != NULL)
                           {
                               if(cell172->next == NULL && cell172->val < 86) {
                                   cell172->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell172->next->next = NULL;
                                   cell172->next->val  = 86;
                                   sortedlist45->n++;
                                   break;
                               } else if(86 < cell172->val) {
                                   cell_t* tmp172 = cell172->next;
                                   cell172->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell172->next->next = tmp172;
                                   int tmp_val172 = cell172->val;
                                   cell172->val = 86;
                                   cell172->next->val = tmp_val172;
                                   sortedlist45->n++;
                                   break;
                               }
                               cell172 = cell172->next;
                           }
                       }
                  }
               }
               if(sortedlist78 != NULL && sortedlist78->n > 0){
                    cell_t* cell173 = sortedlist78->root;
                    cell_t* tmp173  = NULL;
                    while(cell173 != NULL) {
                         tmp173 = cell173->next;
                         free(cell173);
                         cell173 = tmp173;
                    }
                    free(sortedlist78);
               }
               if(sortedlist77 != NULL && sortedlist77->n > 0){
                    cell_t* cell174 = sortedlist77->root;
                    cell_t* tmp174  = NULL;
                    while(cell174 != NULL) {
                         tmp174 = cell174->next;
                         free(cell174);
                         cell174 = tmp174;
                    }
                    free(sortedlist77);
               }
            }
         }
         else {
            sortedlist_t_param params2;
            params2.size = 7;
            params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
            params2.data[0] = sortedlist0;
            params2.data[1] = sortedlist1;
            params2.data[2] = sortedlist45;
            params2.data[3] = sortedlist48;
            params2.data[4] = sortedlist51;
            params2.data[5] = sortedlist59;
            params2.data[6] = sortedlist76;
            sortedlist_t* sortedlist79 = func7(&params2, loopsFactor);
            free(params2.data);
            if(sortedlist79 != NULL && sortedlist79->n > 0){
                 cell_t* cell175 = sortedlist79->root;
                 cell_t* tmp175  = NULL;
                 while(cell175 != NULL) {
                      tmp175 = cell175->next;
                      free(cell175);
                      cell175 = tmp175;
                 }
                 free(sortedlist79);
            }
         }
         unsigned int loop77 = 0;
         unsigned int loopLimit77 = (rand()%loopsFactor)/3 + 1;
         for(; loop77 < loopLimit77; loop77++) {
            if(sortedlist51 != NULL && sortedlist51->n > 0) {
                 cell_t* cell176 = sortedlist51->root;
                 if(sortedlist51->n == 0) {
                     sortedlist51->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist51->root->val  = 82;
                     sortedlist51->root->next = NULL;
                     sortedlist51->n++;
                 } else {
                     while(cell176 != NULL)
                     {
                         if(cell176->next == NULL && cell176->val < 82) {
                             cell176->next = (cell_t*)malloc(sizeof(cell_t));
                             cell176->next->next = NULL;
                             cell176->next->val  = 82;
                             sortedlist51->n++;
                             break;
                         } else if(82 < cell176->val) {
                             cell_t* tmp176 = cell176->next;
                             cell176->next = (cell_t*)malloc(sizeof(cell_t));
                             cell176->next->next = tmp176;
                             int tmp_val176 = cell176->val;
                             cell176->val = 82;
                             cell176->next->val = tmp_val176;
                             sortedlist51->n++;
                             break;
                         }
                         cell176 = cell176->next;
                     }
                 }
            }
            if(sortedlist51 != NULL && sortedlist51->n > 0)
            {
                cell_t* cell177 = sortedlist51->root;
                if(cell177->val == 64)
                {
                    cell177 = cell177->next;
                    sortedlist51->n--;
                }else{
                    while(cell177->next != NULL && cell177->next->val != 64) cell177 = cell177->next;
                    if(cell177->next != NULL)
                    {
                        cell177 = cell177->next->next;
                        sortedlist51->n--;
                    }
                 }
            }
            if(sortedlist59 != NULL && sortedlist59->n > 0)
            {
                cell_t* cell178 = sortedlist59->root;
                if(cell178->val == 7)
                {
                    cell178 = cell178->next;
                    sortedlist59->n--;
                }else{
                    while(cell178->next != NULL && cell178->next->val != 7) cell178 = cell178->next;
                    if(cell178->next != NULL)
                    {
                        cell178 = cell178->next->next;
                        sortedlist59->n--;
                    }
                 }
            }
         }
         sortedlist_t_param params2;
         params2.size = 7;
         params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
         params2.data[0] = sortedlist0;
         params2.data[1] = sortedlist1;
         params2.data[2] = sortedlist45;
         params2.data[3] = sortedlist48;
         params2.data[4] = sortedlist51;
         params2.data[5] = sortedlist59;
         params2.data[6] = sortedlist76;
         sortedlist_t* sortedlist80 = func4(&params2, rng(), loopsFactor);
         free(params2.data);
         unsigned int loop108 = 0;
         unsigned int loopLimit108 = (rand()%loopsFactor)/3 + 1;
         for(; loop108 < loopLimit108; loop108++) {
            if(sortedlist51 != NULL && sortedlist51->n > 0)
            {
                cell_t* cell251 = sortedlist51->root;
                if(cell251->val == 21)
                {
                    cell251 = cell251->next;
                    sortedlist51->n--;
                }else{
                    while(cell251->next != NULL && cell251->next->val != 21) cell251 = cell251->next;
                    if(cell251->next != NULL)
                    {
                        cell251 = cell251->next->next;
                        sortedlist51->n--;
                    }
                 }
            }
         }
         if(rng() & 1) {
            if(sortedlist80 != NULL && sortedlist80->n > 0){
                 cell_t* cell252 = sortedlist80->root;
                 while(cell252 != NULL && cell252->val != 19) cell252 = cell252->next;
            }
         }
         else {
            sortedlist_t* sortedlist111 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist111->n = 0;
            sortedlist111->root = NULL;
            if(sortedlist111 != NULL && sortedlist111->n > 0){
                 cell_t* cell253 = sortedlist111->root;
                 cell_t* tmp253  = NULL;
                 while(cell253 != NULL) {
                      tmp253 = cell253->next;
                      free(cell253);
                      cell253 = tmp253;
                 }
                 free(sortedlist111);
            }
         }
         sortedlist_t_param params3;
         params3.size = 8;
         params3.data = (sortedlist_t**)malloc(params3.size*sizeof(sortedlist_t*));
         params3.data[0] = sortedlist0;
         params3.data[1] = sortedlist1;
         params3.data[2] = sortedlist45;
         params3.data[3] = sortedlist48;
         params3.data[4] = sortedlist51;
         params3.data[5] = sortedlist59;
         params3.data[6] = sortedlist76;
         params3.data[7] = sortedlist80;
         sortedlist_t* sortedlist112 = func0(&params3, rng(), loopsFactor);
         free(params3.data);
         if(sortedlist112 != NULL && sortedlist112->n > 0){
              cell_t* cell267 = sortedlist112->root;
              cell_t* tmp267  = NULL;
              while(cell267 != NULL) {
                   tmp267 = cell267->next;
                   free(cell267);
                   cell267 = tmp267;
              }
              free(sortedlist112);
         }
         if(sortedlist80 != NULL && sortedlist80->n > 0){
              cell_t* cell268 = sortedlist80->root;
              cell_t* tmp268  = NULL;
              while(cell268 != NULL) {
                   tmp268 = cell268->next;
                   free(cell268);
                   cell268 = tmp268;
              }
              free(sortedlist80);
         }
         if(sortedlist76 != NULL && sortedlist76->n > 0){
              cell_t* cell269 = sortedlist76->root;
              cell_t* tmp269  = NULL;
              while(cell269 != NULL) {
                   tmp269 = cell269->next;
                   free(cell269);
                   cell269 = tmp269;
              }
              free(sortedlist76);
         }
      }
      if(sortedlist59 != NULL && sortedlist59->n > 0){
           cell_t* cell270 = sortedlist59->root;
           cell_t* tmp270  = NULL;
           while(cell270 != NULL) {
                tmp270 = cell270->next;
                free(cell270);
                cell270 = tmp270;
           }
           free(sortedlist59);
      }
      if(sortedlist51 != NULL && sortedlist51->n > 0){
           cell_t* cell271 = sortedlist51->root;
           cell_t* tmp271  = NULL;
           while(cell271 != NULL) {
                tmp271 = cell271->next;
                free(cell271);
                cell271 = tmp271;
           }
           free(sortedlist51);
      }
      if(sortedlist48 != NULL && sortedlist48->n > 0){
           cell_t* cell272 = sortedlist48->root;
           cell_t* tmp272  = NULL;
           while(cell272 != NULL) {
                tmp272 = cell272->next;
                free(cell272);
                cell272 = tmp272;
           }
           free(sortedlist48);
      }
      if(sortedlist45 != NULL && sortedlist45->n > 0){
           cell_t* cell273 = sortedlist45->root;
           cell_t* tmp273  = NULL;
           while(cell273 != NULL) {
                tmp273 = cell273->next;
                free(cell273);
                cell273 = tmp273;
           }
           free(sortedlist45);
      }
      if(sortedlist1 != NULL && sortedlist1->n > 0){
           cell_t* cell274 = sortedlist1->root;
           cell_t* tmp274  = NULL;
           while(cell274 != NULL) {
                tmp274 = cell274->next;
                free(cell274);
                cell274 = tmp274;
           }
           free(sortedlist1);
      }
   }
   if(sortedlist0 != NULL && sortedlist0->n > 0){
        cell_t* cell275 = sortedlist0->root;
        cell_t* tmp275  = NULL;
        while(cell275 != NULL) {
             tmp275 = cell275->next;
             free(cell275);
             cell275 = tmp275;
        }
        free(sortedlist0);
   }
   return 0;
}

