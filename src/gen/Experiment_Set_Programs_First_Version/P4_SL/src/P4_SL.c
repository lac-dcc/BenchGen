#include "P4_SL.h"

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
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      sortedlist_t* sortedlist0 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist0->n = 0;
      sortedlist0->root = NULL;
      if(rng() & 1) {
         unsigned int loop1 = 0;
         unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
         for(; loop1 < loopLimit1; loop1++) {
            sortedlist_t* sortedlist1 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist1->n = 0;
            sortedlist1->root = NULL;
            if(sortedlist1 != NULL && sortedlist1->n > 0){
                 cell_t* cell0 = sortedlist1->root;
                 while(cell0 != NULL && cell0->val != 86) cell0 = cell0->next;
            }
            sortedlist_t* sortedlist2 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist2->n = 0;
            sortedlist2->root = NULL;
            if(rng() & 1) {
               unsigned int loop2 = 0;
               unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
               for(; loop2 < loopLimit2; loop2++) {
                  sortedlist_t* sortedlist3 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
                  sortedlist3->n = 0;
                  sortedlist3->root = NULL;
                  if(sortedlist1 != NULL && sortedlist1->n > 0){
                       cell_t* cell1 = sortedlist1->root;
                       while(cell1 != NULL && cell1->val != 15) cell1 = cell1->next;
                  }
                  unsigned int loop3 = 0;
                  unsigned int loopLimit3 = (rand()%loopsFactor)/4 + 1;
                  for(; loop3 < loopLimit3; loop3++) {
                     if(sortedlist1 != NULL && sortedlist1->n > 0) {
                          cell_t* cell2 = sortedlist1->root;
                          if(sortedlist1->n == 0) {
                              sortedlist1->root = (cell_t*)malloc(sizeof(cell_t));
                              sortedlist1->root->val  = 35;
                              sortedlist1->root->next = NULL;
                              sortedlist1->n++;
                          } else {
                              while(cell2 != NULL)
                              {
                                  if(cell2->next == NULL && cell2->val < 35) {
                                      cell2->next = (cell_t*)malloc(sizeof(cell_t));
                                      cell2->next->next = NULL;
                                      cell2->next->val  = 35;
                                      sortedlist1->n++;
                                      break;
                                  } else if(35 < cell2->val) {
                                      cell_t* tmp2 = cell2->next;
                                      cell2->next = (cell_t*)malloc(sizeof(cell_t));
                                      cell2->next->next = tmp2;
                                      int tmp_val2 = cell2->val;
                                      cell2->val = 35;
                                      cell2->next->val = tmp_val2;
                                      sortedlist1->n++;
                                      break;
                                  }
                                  cell2 = cell2->next;
                              }
                          }
                     }
                  }
                  if(sortedlist3 != NULL && sortedlist3->n > 0){
                       cell_t* cell3 = sortedlist3->root;
                       cell_t* tmp3  = NULL;
                       while(cell3 != NULL) {
                            tmp3 = cell3->next;
                            free(cell3);
                            cell3 = tmp3;
                       }
                       free(sortedlist3);
                  }
               }
            }
            else {
               sortedlist_t_param params0;
               params0.size = 3;
               params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
               params0.data[0] = sortedlist0;
               params0.data[1] = sortedlist1;
               params0.data[2] = sortedlist2;
               sortedlist_t* sortedlist4 = func6(&params0, loopsFactor);
               free(params0.data);
               if(sortedlist4 != NULL && sortedlist4->n > 0){
                    cell_t* cell5 = sortedlist4->root;
                    cell_t* tmp5  = NULL;
                    while(cell5 != NULL) {
                         tmp5 = cell5->next;
                         free(cell5);
                         cell5 = tmp5;
                    }
                    free(sortedlist4);
               }
            }
            unsigned int loop4 = 0;
            unsigned int loopLimit4 = (rand()%loopsFactor)/3 + 1;
            for(; loop4 < loopLimit4; loop4++) {
               if(sortedlist1 != NULL && sortedlist1->n > 0) {
                    cell_t* cell6 = sortedlist1->root;
                    if(sortedlist1->n == 0) {
                        sortedlist1->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist1->root->val  = 62;
                        sortedlist1->root->next = NULL;
                        sortedlist1->n++;
                    } else {
                        while(cell6 != NULL)
                        {
                            if(cell6->next == NULL && cell6->val < 62) {
                                cell6->next = (cell_t*)malloc(sizeof(cell_t));
                                cell6->next->next = NULL;
                                cell6->next->val  = 62;
                                sortedlist1->n++;
                                break;
                            } else if(62 < cell6->val) {
                                cell_t* tmp6 = cell6->next;
                                cell6->next = (cell_t*)malloc(sizeof(cell_t));
                                cell6->next->next = tmp6;
                                int tmp_val6 = cell6->val;
                                cell6->val = 62;
                                cell6->next->val = tmp_val6;
                                sortedlist1->n++;
                                break;
                            }
                            cell6 = cell6->next;
                        }
                    }
               }
               if(sortedlist1 != NULL && sortedlist1->n > 0)
               {
                   cell_t* cell7 = sortedlist1->root;
                   if(cell7->val == 90)
                   {
                       cell7 = cell7->next;
                       sortedlist1->n--;
                   }else{
                       while(cell7->next != NULL && cell7->next->val != 90) cell7 = cell7->next;
                       if(cell7->next != NULL)
                       {
                           cell7 = cell7->next->next;
                           sortedlist1->n--;
                       }
                    }
               }
               if(sortedlist1 != NULL && sortedlist1->n > 0)
               {
                   cell_t* cell8 = sortedlist1->root;
                   if(cell8->val == 63)
                   {
                       cell8 = cell8->next;
                       sortedlist1->n--;
                   }else{
                       while(cell8->next != NULL && cell8->next->val != 63) cell8 = cell8->next;
                       if(cell8->next != NULL)
                       {
                           cell8 = cell8->next->next;
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
            params0.data[2] = sortedlist2;
            sortedlist_t* sortedlist6 = func3(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop22 = 0;
            unsigned int loopLimit22 = (rand()%loopsFactor)/3 + 1;
            for(; loop22 < loopLimit22; loop22++) {
               if(sortedlist1 != NULL && sortedlist1->n > 0)
               {
                   cell_t* cell48 = sortedlist1->root;
                   if(cell48->val == 46)
                   {
                       cell48 = cell48->next;
                       sortedlist1->n--;
                   }else{
                       while(cell48->next != NULL && cell48->next->val != 46) cell48 = cell48->next;
                       if(cell48->next != NULL)
                       {
                           cell48 = cell48->next->next;
                           sortedlist1->n--;
                       }
                    }
               }
            }
            unsigned int loop23 = 0;
            unsigned int loopLimit23 = (rand()%loopsFactor)/3 + 1;
            for(; loop23 < loopLimit23; loop23++) {
               if(sortedlist1 != NULL && sortedlist1->n > 0) {
                    cell_t* cell49 = sortedlist1->root;
                    if(sortedlist1->n == 0) {
                        sortedlist1->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist1->root->val  = 13;
                        sortedlist1->root->next = NULL;
                        sortedlist1->n++;
                    } else {
                        while(cell49 != NULL)
                        {
                            if(cell49->next == NULL && cell49->val < 13) {
                                cell49->next = (cell_t*)malloc(sizeof(cell_t));
                                cell49->next->next = NULL;
                                cell49->next->val  = 13;
                                sortedlist1->n++;
                                break;
                            } else if(13 < cell49->val) {
                                cell_t* tmp49 = cell49->next;
                                cell49->next = (cell_t*)malloc(sizeof(cell_t));
                                cell49->next->next = tmp49;
                                int tmp_val49 = cell49->val;
                                cell49->val = 13;
                                cell49->next->val = tmp_val49;
                                sortedlist1->n++;
                                break;
                            }
                            cell49 = cell49->next;
                        }
                    }
               }
            }
            if(sortedlist6 != NULL && sortedlist6->n > 0){
                 cell_t* cell50 = sortedlist6->root;
                 cell_t* tmp50  = NULL;
                 while(cell50 != NULL) {
                      tmp50 = cell50->next;
                      free(cell50);
                      cell50 = tmp50;
                 }
                 free(sortedlist6);
            }
            if(sortedlist2 != NULL && sortedlist2->n > 0){
                 cell_t* cell51 = sortedlist2->root;
                 cell_t* tmp51  = NULL;
                 while(cell51 != NULL) {
                      tmp51 = cell51->next;
                      free(cell51);
                      cell51 = tmp51;
                 }
                 free(sortedlist2);
            }
            if(sortedlist1 != NULL && sortedlist1->n > 0){
                 cell_t* cell52 = sortedlist1->root;
                 cell_t* tmp52  = NULL;
                 while(cell52 != NULL) {
                      tmp52 = cell52->next;
                      free(cell52);
                      cell52 = tmp52;
                 }
                 free(sortedlist1);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 1;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist0;
         sortedlist_t* sortedlist24 = func0(&params0, rng(), loopsFactor);
         free(params0.data);
         if(sortedlist24 != NULL && sortedlist24->n > 0){
              cell_t* cell97 = sortedlist24->root;
              cell_t* tmp97  = NULL;
              while(cell97 != NULL) {
                   tmp97 = cell97->next;
                   free(cell97);
                   cell97 = tmp97;
              }
              free(sortedlist24);
         }
      }
      unsigned int loop42 = 0;
      unsigned int loopLimit42 = (rand()%loopsFactor)/2 + 1;
      for(; loop42 < loopLimit42; loop42++) {
         if(sortedlist0 != NULL && sortedlist0->n > 0) {
              cell_t* cell98 = sortedlist0->root;
              if(sortedlist0->n == 0) {
                  sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist0->root->val  = 27;
                  sortedlist0->root->next = NULL;
                  sortedlist0->n++;
              } else {
                  while(cell98 != NULL)
                  {
                      if(cell98->next == NULL && cell98->val < 27) {
                          cell98->next = (cell_t*)malloc(sizeof(cell_t));
                          cell98->next->next = NULL;
                          cell98->next->val  = 27;
                          sortedlist0->n++;
                          break;
                      } else if(27 < cell98->val) {
                          cell_t* tmp98 = cell98->next;
                          cell98->next = (cell_t*)malloc(sizeof(cell_t));
                          cell98->next->next = tmp98;
                          int tmp_val98 = cell98->val;
                          cell98->val = 27;
                          cell98->next->val = tmp_val98;
                          sortedlist0->n++;
                          break;
                      }
                      cell98 = cell98->next;
                  }
              }
         }
         if(sortedlist0 != NULL && sortedlist0->n > 0)
         {
             cell_t* cell99 = sortedlist0->root;
             if(cell99->val == 56)
             {
                 cell99 = cell99->next;
                 sortedlist0->n--;
             }else{
                 while(cell99->next != NULL && cell99->next->val != 56) cell99 = cell99->next;
                 if(cell99->next != NULL)
                 {
                     cell99 = cell99->next->next;
                     sortedlist0->n--;
                 }
              }
         }
         if(sortedlist0 != NULL && sortedlist0->n > 0)
         {
             cell_t* cell100 = sortedlist0->root;
             if(cell100->val == 53)
             {
                 cell100 = cell100->next;
                 sortedlist0->n--;
             }else{
                 while(cell100->next != NULL && cell100->next->val != 53) cell100 = cell100->next;
                 if(cell100->next != NULL)
                 {
                     cell100 = cell100->next->next;
                     sortedlist0->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist44 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist44->n = 0;
      sortedlist44->root = NULL;
      if(rng() & 1) {
         unsigned int loop43 = 0;
         unsigned int loopLimit43 = (rand()%loopsFactor)/2 + 1;
         for(; loop43 < loopLimit43; loop43++) {
            sortedlist_t* sortedlist45 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist45->n = 0;
            sortedlist45->root = NULL;
            if(sortedlist0 != NULL && sortedlist0->n > 0){
                 cell_t* cell101 = sortedlist0->root;
                 while(cell101 != NULL && cell101->val != 65) cell101 = cell101->next;
            }
            sortedlist_t* sortedlist46 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist46->n = 0;
            sortedlist46->root = NULL;
            if(rng() & 1) {
               unsigned int loop44 = 0;
               unsigned int loopLimit44 = (rand()%loopsFactor)/3 + 1;
               for(; loop44 < loopLimit44; loop44++) {
                  sortedlist_t* sortedlist47 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
                  sortedlist47->n = 0;
                  sortedlist47->root = NULL;
                  if(sortedlist44 != NULL && sortedlist44->n > 0){
                       cell_t* cell102 = sortedlist44->root;
                       while(cell102 != NULL && cell102->val != 83) cell102 = cell102->next;
                  }
                  unsigned int loop45 = 0;
                  unsigned int loopLimit45 = (rand()%loopsFactor)/4 + 1;
                  for(; loop45 < loopLimit45; loop45++) {
                     if(sortedlist47 != NULL && sortedlist47->n > 0) {
                          cell_t* cell103 = sortedlist47->root;
                          if(sortedlist47->n == 0) {
                              sortedlist47->root = (cell_t*)malloc(sizeof(cell_t));
                              sortedlist47->root->val  = 24;
                              sortedlist47->root->next = NULL;
                              sortedlist47->n++;
                          } else {
                              while(cell103 != NULL)
                              {
                                  if(cell103->next == NULL && cell103->val < 24) {
                                      cell103->next = (cell_t*)malloc(sizeof(cell_t));
                                      cell103->next->next = NULL;
                                      cell103->next->val  = 24;
                                      sortedlist47->n++;
                                      break;
                                  } else if(24 < cell103->val) {
                                      cell_t* tmp103 = cell103->next;
                                      cell103->next = (cell_t*)malloc(sizeof(cell_t));
                                      cell103->next->next = tmp103;
                                      int tmp_val103 = cell103->val;
                                      cell103->val = 24;
                                      cell103->next->val = tmp_val103;
                                      sortedlist47->n++;
                                      break;
                                  }
                                  cell103 = cell103->next;
                              }
                          }
                     }
                  }
                  if(sortedlist47 != NULL && sortedlist47->n > 0){
                       cell_t* cell104 = sortedlist47->root;
                       cell_t* tmp104  = NULL;
                       while(cell104 != NULL) {
                            tmp104 = cell104->next;
                            free(cell104);
                            cell104 = tmp104;
                       }
                       free(sortedlist47);
                  }
               }
            }
            else {
               sortedlist_t_param params0;
               params0.size = 4;
               params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
               params0.data[0] = sortedlist0;
               params0.data[1] = sortedlist44;
               params0.data[2] = sortedlist45;
               params0.data[3] = sortedlist46;
               sortedlist_t* sortedlist48 = func6(&params0, loopsFactor);
               free(params0.data);
               if(sortedlist48 != NULL && sortedlist48->n > 0){
                    cell_t* cell105 = sortedlist48->root;
                    cell_t* tmp105  = NULL;
                    while(cell105 != NULL) {
                         tmp105 = cell105->next;
                         free(cell105);
                         cell105 = tmp105;
                    }
                    free(sortedlist48);
               }
            }
            unsigned int loop46 = 0;
            unsigned int loopLimit46 = (rand()%loopsFactor)/3 + 1;
            for(; loop46 < loopLimit46; loop46++) {
               if(sortedlist0 != NULL && sortedlist0->n > 0) {
                    cell_t* cell106 = sortedlist0->root;
                    if(sortedlist0->n == 0) {
                        sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist0->root->val  = 71;
                        sortedlist0->root->next = NULL;
                        sortedlist0->n++;
                    } else {
                        while(cell106 != NULL)
                        {
                            if(cell106->next == NULL && cell106->val < 71) {
                                cell106->next = (cell_t*)malloc(sizeof(cell_t));
                                cell106->next->next = NULL;
                                cell106->next->val  = 71;
                                sortedlist0->n++;
                                break;
                            } else if(71 < cell106->val) {
                                cell_t* tmp106 = cell106->next;
                                cell106->next = (cell_t*)malloc(sizeof(cell_t));
                                cell106->next->next = tmp106;
                                int tmp_val106 = cell106->val;
                                cell106->val = 71;
                                cell106->next->val = tmp_val106;
                                sortedlist0->n++;
                                break;
                            }
                            cell106 = cell106->next;
                        }
                    }
               }
               if(sortedlist0 != NULL && sortedlist0->n > 0)
               {
                   cell_t* cell107 = sortedlist0->root;
                   if(cell107->val == 29)
                   {
                       cell107 = cell107->next;
                       sortedlist0->n--;
                   }else{
                       while(cell107->next != NULL && cell107->next->val != 29) cell107 = cell107->next;
                       if(cell107->next != NULL)
                       {
                           cell107 = cell107->next->next;
                           sortedlist0->n--;
                       }
                    }
               }
               if(sortedlist46 != NULL && sortedlist46->n > 0)
               {
                   cell_t* cell108 = sortedlist46->root;
                   if(cell108->val == 19)
                   {
                       cell108 = cell108->next;
                       sortedlist46->n--;
                   }else{
                       while(cell108->next != NULL && cell108->next->val != 19) cell108 = cell108->next;
                       if(cell108->next != NULL)
                       {
                           cell108 = cell108->next->next;
                           sortedlist46->n--;
                       }
                    }
               }
            }
            sortedlist_t_param params0;
            params0.size = 4;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist0;
            params0.data[1] = sortedlist44;
            params0.data[2] = sortedlist45;
            params0.data[3] = sortedlist46;
            sortedlist_t* sortedlist49 = func3(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop47 = 0;
            unsigned int loopLimit47 = (rand()%loopsFactor)/3 + 1;
            for(; loop47 < loopLimit47; loop47++) {
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
            }
            unsigned int loop48 = 0;
            unsigned int loopLimit48 = (rand()%loopsFactor)/3 + 1;
            for(; loop48 < loopLimit48; loop48++) {
               if(sortedlist46 != NULL && sortedlist46->n > 0) {
                    cell_t* cell110 = sortedlist46->root;
                    if(sortedlist46->n == 0) {
                        sortedlist46->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist46->root->val  = 15;
                        sortedlist46->root->next = NULL;
                        sortedlist46->n++;
                    } else {
                        while(cell110 != NULL)
                        {
                            if(cell110->next == NULL && cell110->val < 15) {
                                cell110->next = (cell_t*)malloc(sizeof(cell_t));
                                cell110->next->next = NULL;
                                cell110->next->val  = 15;
                                sortedlist46->n++;
                                break;
                            } else if(15 < cell110->val) {
                                cell_t* tmp110 = cell110->next;
                                cell110->next = (cell_t*)malloc(sizeof(cell_t));
                                cell110->next->next = tmp110;
                                int tmp_val110 = cell110->val;
                                cell110->val = 15;
                                cell110->next->val = tmp_val110;
                                sortedlist46->n++;
                                break;
                            }
                            cell110 = cell110->next;
                        }
                    }
               }
            }
            if(sortedlist49 != NULL && sortedlist49->n > 0){
                 cell_t* cell111 = sortedlist49->root;
                 cell_t* tmp111  = NULL;
                 while(cell111 != NULL) {
                      tmp111 = cell111->next;
                      free(cell111);
                      cell111 = tmp111;
                 }
                 free(sortedlist49);
            }
            if(sortedlist46 != NULL && sortedlist46->n > 0){
                 cell_t* cell112 = sortedlist46->root;
                 cell_t* tmp112  = NULL;
                 while(cell112 != NULL) {
                      tmp112 = cell112->next;
                      free(cell112);
                      cell112 = tmp112;
                 }
                 free(sortedlist46);
            }
            if(sortedlist45 != NULL && sortedlist45->n > 0){
                 cell_t* cell113 = sortedlist45->root;
                 cell_t* tmp113  = NULL;
                 while(cell113 != NULL) {
                      tmp113 = cell113->next;
                      free(cell113);
                      cell113 = tmp113;
                 }
                 free(sortedlist45);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 2;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist0;
         params0.data[1] = sortedlist44;
         sortedlist_t* sortedlist50 = func0(&params0, rng(), loopsFactor);
         free(params0.data);
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
      }
      unsigned int loop49 = 0;
      unsigned int loopLimit49 = (rand()%loopsFactor)/2 + 1;
      for(; loop49 < loopLimit49; loop49++) {
         if(sortedlist0 != NULL && sortedlist0->n > 0) {
              cell_t* cell115 = sortedlist0->root;
              if(sortedlist0->n == 0) {
                  sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist0->root->val  = 49;
                  sortedlist0->root->next = NULL;
                  sortedlist0->n++;
              } else {
                  while(cell115 != NULL)
                  {
                      if(cell115->next == NULL && cell115->val < 49) {
                          cell115->next = (cell_t*)malloc(sizeof(cell_t));
                          cell115->next->next = NULL;
                          cell115->next->val  = 49;
                          sortedlist0->n++;
                          break;
                      } else if(49 < cell115->val) {
                          cell_t* tmp115 = cell115->next;
                          cell115->next = (cell_t*)malloc(sizeof(cell_t));
                          cell115->next->next = tmp115;
                          int tmp_val115 = cell115->val;
                          cell115->val = 49;
                          cell115->next->val = tmp_val115;
                          sortedlist0->n++;
                          break;
                      }
                      cell115 = cell115->next;
                  }
              }
         }
         if(sortedlist0 != NULL && sortedlist0->n > 0)
         {
             cell_t* cell116 = sortedlist0->root;
             if(cell116->val == 23)
             {
                 cell116 = cell116->next;
                 sortedlist0->n--;
             }else{
                 while(cell116->next != NULL && cell116->next->val != 23) cell116 = cell116->next;
                 if(cell116->next != NULL)
                 {
                     cell116 = cell116->next->next;
                     sortedlist0->n--;
                 }
              }
         }
         if(sortedlist0 != NULL && sortedlist0->n > 0)
         {
             cell_t* cell117 = sortedlist0->root;
             if(cell117->val == 45)
             {
                 cell117 = cell117->next;
                 sortedlist0->n--;
             }else{
                 while(cell117->next != NULL && cell117->next->val != 45) cell117 = cell117->next;
                 if(cell117->next != NULL)
                 {
                     cell117 = cell117->next->next;
                     sortedlist0->n--;
                 }
              }
         }
      }
      unsigned int loop50 = 0;
      unsigned int loopLimit50 = (rand()%loopsFactor)/2 + 1;
      for(; loop50 < loopLimit50; loop50++) {
         if(sortedlist0 != NULL && sortedlist0->n > 0)
         {
             cell_t* cell118 = sortedlist0->root;
             if(cell118->val == 51)
             {
                 cell118 = cell118->next;
                 sortedlist0->n--;
             }else{
                 while(cell118->next != NULL && cell118->next->val != 51) cell118 = cell118->next;
                 if(cell118->next != NULL)
                 {
                     cell118 = cell118->next->next;
                     sortedlist0->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist51 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist51->n = 0;
      sortedlist51->root = NULL;
      if(rng() & 1) {
         unsigned int loop51 = 0;
         unsigned int loopLimit51 = (rand()%loopsFactor)/2 + 1;
         for(; loop51 < loopLimit51; loop51++) {
            sortedlist_t* sortedlist52 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist52->n = 0;
            sortedlist52->root = NULL;
            if(sortedlist44 != NULL && sortedlist44->n > 0){
                 cell_t* cell119 = sortedlist44->root;
                 while(cell119 != NULL && cell119->val != 55) cell119 = cell119->next;
            }
            unsigned int loop52 = 0;
            unsigned int loopLimit52 = (rand()%loopsFactor)/3 + 1;
            for(; loop52 < loopLimit52; loop52++) {
               if(sortedlist52 != NULL && sortedlist52->n > 0) {
                    cell_t* cell120 = sortedlist52->root;
                    if(sortedlist52->n == 0) {
                        sortedlist52->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist52->root->val  = 88;
                        sortedlist52->root->next = NULL;
                        sortedlist52->n++;
                    } else {
                        while(cell120 != NULL)
                        {
                            if(cell120->next == NULL && cell120->val < 88) {
                                cell120->next = (cell_t*)malloc(sizeof(cell_t));
                                cell120->next->next = NULL;
                                cell120->next->val  = 88;
                                sortedlist52->n++;
                                break;
                            } else if(88 < cell120->val) {
                                cell_t* tmp120 = cell120->next;
                                cell120->next = (cell_t*)malloc(sizeof(cell_t));
                                cell120->next->next = tmp120;
                                int tmp_val120 = cell120->val;
                                cell120->val = 88;
                                cell120->next->val = tmp_val120;
                                sortedlist52->n++;
                                break;
                            }
                            cell120 = cell120->next;
                        }
                    }
               }
            }
            if(sortedlist52 != NULL && sortedlist52->n > 0){
                 cell_t* cell121 = sortedlist52->root;
                 cell_t* tmp121  = NULL;
                 while(cell121 != NULL) {
                      tmp121 = cell121->next;
                      free(cell121);
                      cell121 = tmp121;
                 }
                 free(sortedlist52);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist0;
         params0.data[1] = sortedlist44;
         params0.data[2] = sortedlist51;
         sortedlist_t* sortedlist53 = func6(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist53 != NULL && sortedlist53->n > 0){
              cell_t* cell122 = sortedlist53->root;
              cell_t* tmp122  = NULL;
              while(cell122 != NULL) {
                   tmp122 = cell122->next;
                   free(cell122);
                   cell122 = tmp122;
              }
              free(sortedlist53);
         }
      }
      unsigned int loop53 = 0;
      unsigned int loopLimit53 = (rand()%loopsFactor)/2 + 1;
      for(; loop53 < loopLimit53; loop53++) {
         if(sortedlist51 != NULL && sortedlist51->n > 0) {
              cell_t* cell123 = sortedlist51->root;
              if(sortedlist51->n == 0) {
                  sortedlist51->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist51->root->val  = 28;
                  sortedlist51->root->next = NULL;
                  sortedlist51->n++;
              } else {
                  while(cell123 != NULL)
                  {
                      if(cell123->next == NULL && cell123->val < 28) {
                          cell123->next = (cell_t*)malloc(sizeof(cell_t));
                          cell123->next->next = NULL;
                          cell123->next->val  = 28;
                          sortedlist51->n++;
                          break;
                      } else if(28 < cell123->val) {
                          cell_t* tmp123 = cell123->next;
                          cell123->next = (cell_t*)malloc(sizeof(cell_t));
                          cell123->next->next = tmp123;
                          int tmp_val123 = cell123->val;
                          cell123->val = 28;
                          cell123->next->val = tmp_val123;
                          sortedlist51->n++;
                          break;
                      }
                      cell123 = cell123->next;
                  }
              }
         }
         if(sortedlist44 != NULL && sortedlist44->n > 0)
         {
             cell_t* cell124 = sortedlist44->root;
             if(cell124->val == 50)
             {
                 cell124 = cell124->next;
                 sortedlist44->n--;
             }else{
                 while(cell124->next != NULL && cell124->next->val != 50) cell124 = cell124->next;
                 if(cell124->next != NULL)
                 {
                     cell124 = cell124->next->next;
                     sortedlist44->n--;
                 }
              }
         }
         if(sortedlist44 != NULL && sortedlist44->n > 0)
         {
             cell_t* cell125 = sortedlist44->root;
             if(cell125->val == 0)
             {
                 cell125 = cell125->next;
                 sortedlist44->n--;
             }else{
                 while(cell125->next != NULL && cell125->next->val != 0) cell125 = cell125->next;
                 if(cell125->next != NULL)
                 {
                     cell125 = cell125->next->next;
                     sortedlist44->n--;
                 }
              }
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist0;
      params0.data[1] = sortedlist44;
      params0.data[2] = sortedlist51;
      sortedlist_t* sortedlist54 = func3(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop54 = 0;
      unsigned int loopLimit54 = (rand()%loopsFactor)/2 + 1;
      for(; loop54 < loopLimit54; loop54++) {
         if(sortedlist51 != NULL && sortedlist51->n > 0)
         {
             cell_t* cell126 = sortedlist51->root;
             if(cell126->val == 64)
             {
                 cell126 = cell126->next;
                 sortedlist51->n--;
             }else{
                 while(cell126->next != NULL && cell126->next->val != 64) cell126 = cell126->next;
                 if(cell126->next != NULL)
                 {
                     cell126 = cell126->next->next;
                     sortedlist51->n--;
                 }
              }
         }
      }
      unsigned int loop55 = 0;
      unsigned int loopLimit55 = (rand()%loopsFactor)/2 + 1;
      for(; loop55 < loopLimit55; loop55++) {
         sortedlist_t* sortedlist55 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist55->n = 0;
         sortedlist55->root = NULL;
         sortedlist_t* sortedlist56 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist56->n = 0;
         sortedlist56->root = NULL;
         if(sortedlist0 != NULL && sortedlist0->n > 0){
              cell_t* cell127 = sortedlist0->root;
              while(cell127 != NULL && cell127->val != 14) cell127 = cell127->next;
         }
         unsigned int loop56 = 0;
         unsigned int loopLimit56 = (rand()%loopsFactor)/3 + 1;
         for(; loop56 < loopLimit56; loop56++) {
            if(sortedlist56 != NULL && sortedlist56->n > 0){
                 cell_t* cell128 = sortedlist56->root;
                 while(cell128 != NULL && cell128->val != 56) cell128 = cell128->next;
            }
         }
         if(sortedlist56 != NULL && sortedlist56->n > 0){
              cell_t* cell129 = sortedlist56->root;
              cell_t* tmp129  = NULL;
              while(cell129 != NULL) {
                   tmp129 = cell129->next;
                   free(cell129);
                   cell129 = tmp129;
              }
              free(sortedlist56);
         }
         if(sortedlist55 != NULL && sortedlist55->n > 0){
              cell_t* cell130 = sortedlist55->root;
              cell_t* tmp130  = NULL;
              while(cell130 != NULL) {
                   tmp130 = cell130->next;
                   free(cell130);
                   cell130 = tmp130;
              }
              free(sortedlist55);
         }
      }
      sortedlist_t* sortedlist57 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist57->n = 0;
      sortedlist57->root = NULL;
      if(rng() & 1) {
         unsigned int loop57 = 0;
         unsigned int loopLimit57 = (rand()%loopsFactor)/2 + 1;
         for(; loop57 < loopLimit57; loop57++) {
            sortedlist_t* sortedlist58 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist58->n = 0;
            sortedlist58->root = NULL;
            if(sortedlist54 != NULL && sortedlist54->n > 0){
                 cell_t* cell131 = sortedlist54->root;
                 while(cell131 != NULL && cell131->val != 91) cell131 = cell131->next;
            }
            sortedlist_t_param params1;
            params1.size = 6;
            params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
            params1.data[0] = sortedlist0;
            params1.data[1] = sortedlist44;
            params1.data[2] = sortedlist51;
            params1.data[3] = sortedlist54;
            params1.data[4] = sortedlist57;
            params1.data[5] = sortedlist58;
            sortedlist_t* sortedlist59 = func8(&params1, rng(), loopsFactor);
            free(params1.data);
            unsigned int loop58 = 0;
            unsigned int loopLimit58 = (rand()%loopsFactor)/3 + 1;
            for(; loop58 < loopLimit58; loop58++) {
               if(sortedlist54 != NULL && sortedlist54->n > 0)
               {
                   cell_t* cell132 = sortedlist54->root;
                   if(cell132->val == 65)
                   {
                       cell132 = cell132->next;
                       sortedlist54->n--;
                   }else{
                       while(cell132->next != NULL && cell132->next->val != 65) cell132 = cell132->next;
                       if(cell132->next != NULL)
                       {
                           cell132 = cell132->next->next;
                           sortedlist54->n--;
                       }
                    }
               }
            }
            unsigned int loop59 = 0;
            unsigned int loopLimit59 = (rand()%loopsFactor)/3 + 1;
            for(; loop59 < loopLimit59; loop59++) {
               if(sortedlist54 != NULL && sortedlist54->n > 0) {
                    cell_t* cell133 = sortedlist54->root;
                    if(sortedlist54->n == 0) {
                        sortedlist54->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist54->root->val  = 36;
                        sortedlist54->root->next = NULL;
                        sortedlist54->n++;
                    } else {
                        while(cell133 != NULL)
                        {
                            if(cell133->next == NULL && cell133->val < 36) {
                                cell133->next = (cell_t*)malloc(sizeof(cell_t));
                                cell133->next->next = NULL;
                                cell133->next->val  = 36;
                                sortedlist54->n++;
                                break;
                            } else if(36 < cell133->val) {
                                cell_t* tmp133 = cell133->next;
                                cell133->next = (cell_t*)malloc(sizeof(cell_t));
                                cell133->next->next = tmp133;
                                int tmp_val133 = cell133->val;
                                cell133->val = 36;
                                cell133->next->val = tmp_val133;
                                sortedlist54->n++;
                                break;
                            }
                            cell133 = cell133->next;
                        }
                    }
               }
            }
            if(sortedlist59 != NULL && sortedlist59->n > 0){
                 cell_t* cell134 = sortedlist59->root;
                 cell_t* tmp134  = NULL;
                 while(cell134 != NULL) {
                      tmp134 = cell134->next;
                      free(cell134);
                      cell134 = tmp134;
                 }
                 free(sortedlist59);
            }
            if(sortedlist58 != NULL && sortedlist58->n > 0){
                 cell_t* cell135 = sortedlist58->root;
                 cell_t* tmp135  = NULL;
                 while(cell135 != NULL) {
                      tmp135 = cell135->next;
                      free(cell135);
                      cell135 = tmp135;
                 }
                 free(sortedlist58);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 5;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist0;
         params1.data[1] = sortedlist44;
         params1.data[2] = sortedlist51;
         params1.data[3] = sortedlist54;
         params1.data[4] = sortedlist57;
         sortedlist_t* sortedlist60 = func5(&params1, loopsFactor);
         free(params1.data);
         if(sortedlist60 != NULL && sortedlist60->n > 0){
              cell_t* cell143 = sortedlist60->root;
              cell_t* tmp143  = NULL;
              while(cell143 != NULL) {
                   tmp143 = cell143->next;
                   free(cell143);
                   cell143 = tmp143;
              }
              free(sortedlist60);
         }
      }
      unsigned int loop63 = 0;
      unsigned int loopLimit63 = (rand()%loopsFactor)/2 + 1;
      for(; loop63 < loopLimit63; loop63++) {
         if(sortedlist0 != NULL && sortedlist0->n > 0) {
              cell_t* cell144 = sortedlist0->root;
              if(sortedlist0->n == 0) {
                  sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist0->root->val  = 29;
                  sortedlist0->root->next = NULL;
                  sortedlist0->n++;
              } else {
                  while(cell144 != NULL)
                  {
                      if(cell144->next == NULL && cell144->val < 29) {
                          cell144->next = (cell_t*)malloc(sizeof(cell_t));
                          cell144->next->next = NULL;
                          cell144->next->val  = 29;
                          sortedlist0->n++;
                          break;
                      } else if(29 < cell144->val) {
                          cell_t* tmp144 = cell144->next;
                          cell144->next = (cell_t*)malloc(sizeof(cell_t));
                          cell144->next->next = tmp144;
                          int tmp_val144 = cell144->val;
                          cell144->val = 29;
                          cell144->next->val = tmp_val144;
                          sortedlist0->n++;
                          break;
                      }
                      cell144 = cell144->next;
                  }
              }
         }
         if(sortedlist51 != NULL && sortedlist51->n > 0)
         {
             cell_t* cell145 = sortedlist51->root;
             if(cell145->val == 35)
             {
                 cell145 = cell145->next;
                 sortedlist51->n--;
             }else{
                 while(cell145->next != NULL && cell145->next->val != 35) cell145 = cell145->next;
                 if(cell145->next != NULL)
                 {
                     cell145 = cell145->next->next;
                     sortedlist51->n--;
                 }
              }
         }
         if(sortedlist54 != NULL && sortedlist54->n > 0)
         {
             cell_t* cell146 = sortedlist54->root;
             if(cell146->val == 18)
             {
                 cell146 = cell146->next;
                 sortedlist54->n--;
             }else{
                 while(cell146->next != NULL && cell146->next->val != 18) cell146 = cell146->next;
                 if(cell146->next != NULL)
                 {
                     cell146 = cell146->next->next;
                     sortedlist54->n--;
                 }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 5;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist0;
      params1.data[1] = sortedlist44;
      params1.data[2] = sortedlist51;
      params1.data[3] = sortedlist54;
      params1.data[4] = sortedlist57;
      sortedlist_t* sortedlist65 = func1(&params1, rng(), loopsFactor);
      free(params1.data);
      unsigned int loop80 = 0;
      unsigned int loopLimit80 = (rand()%loopsFactor)/2 + 1;
      for(; loop80 < loopLimit80; loop80++) {
         sortedlist_t* sortedlist82 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist82->n = 0;
         sortedlist82->root = NULL;
         if(rng() & 1) {
            unsigned int loop81 = 0;
            unsigned int loopLimit81 = (rand()%loopsFactor)/3 + 1;
            for(; loop81 < loopLimit81; loop81++) {
               sortedlist_t* sortedlist83 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
               sortedlist83->n = 0;
               sortedlist83->root = NULL;
               if(sortedlist82 != NULL && sortedlist82->n > 0){
                    cell_t* cell184 = sortedlist82->root;
                    while(cell184 != NULL && cell184->val != 28) cell184 = cell184->next;
               }
               sortedlist_t_param params2;
               params2.size = 8;
               params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
               params2.data[0] = sortedlist0;
               params2.data[1] = sortedlist44;
               params2.data[2] = sortedlist51;
               params2.data[3] = sortedlist54;
               params2.data[4] = sortedlist57;
               params2.data[5] = sortedlist65;
               params2.data[6] = sortedlist82;
               params2.data[7] = sortedlist83;
               sortedlist_t* sortedlist84 = func8(&params2, rng(), loopsFactor);
               free(params2.data);
               unsigned int loop82 = 0;
               unsigned int loopLimit82 = (rand()%loopsFactor)/4 + 1;
               for(; loop82 < loopLimit82; loop82++) {
                  if(sortedlist65 != NULL && sortedlist65->n > 0)
                  {
                      cell_t* cell185 = sortedlist65->root;
                      if(cell185->val == 43)
                      {
                          cell185 = cell185->next;
                          sortedlist65->n--;
                      }else{
                          while(cell185->next != NULL && cell185->next->val != 43) cell185 = cell185->next;
                          if(cell185->next != NULL)
                          {
                              cell185 = cell185->next->next;
                              sortedlist65->n--;
                          }
                       }
                  }
               }
               unsigned int loop83 = 0;
               unsigned int loopLimit83 = (rand()%loopsFactor)/4 + 1;
               for(; loop83 < loopLimit83; loop83++) {
                  if(sortedlist57 != NULL && sortedlist57->n > 0) {
                       cell_t* cell186 = sortedlist57->root;
                       if(sortedlist57->n == 0) {
                           sortedlist57->root = (cell_t*)malloc(sizeof(cell_t));
                           sortedlist57->root->val  = 68;
                           sortedlist57->root->next = NULL;
                           sortedlist57->n++;
                       } else {
                           while(cell186 != NULL)
                           {
                               if(cell186->next == NULL && cell186->val < 68) {
                                   cell186->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell186->next->next = NULL;
                                   cell186->next->val  = 68;
                                   sortedlist57->n++;
                                   break;
                               } else if(68 < cell186->val) {
                                   cell_t* tmp186 = cell186->next;
                                   cell186->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell186->next->next = tmp186;
                                   int tmp_val186 = cell186->val;
                                   cell186->val = 68;
                                   cell186->next->val = tmp_val186;
                                   sortedlist57->n++;
                                   break;
                               }
                               cell186 = cell186->next;
                           }
                       }
                  }
               }
               if(sortedlist84 != NULL && sortedlist84->n > 0){
                    cell_t* cell187 = sortedlist84->root;
                    cell_t* tmp187  = NULL;
                    while(cell187 != NULL) {
                         tmp187 = cell187->next;
                         free(cell187);
                         cell187 = tmp187;
                    }
                    free(sortedlist84);
               }
               if(sortedlist83 != NULL && sortedlist83->n > 0){
                    cell_t* cell188 = sortedlist83->root;
                    cell_t* tmp188  = NULL;
                    while(cell188 != NULL) {
                         tmp188 = cell188->next;
                         free(cell188);
                         cell188 = tmp188;
                    }
                    free(sortedlist83);
               }
            }
         }
         else {
            sortedlist_t_param params2;
            params2.size = 7;
            params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
            params2.data[0] = sortedlist0;
            params2.data[1] = sortedlist44;
            params2.data[2] = sortedlist51;
            params2.data[3] = sortedlist54;
            params2.data[4] = sortedlist57;
            params2.data[5] = sortedlist65;
            params2.data[6] = sortedlist82;
            sortedlist_t* sortedlist85 = func5(&params2, loopsFactor);
            free(params2.data);
            if(sortedlist85 != NULL && sortedlist85->n > 0){
                 cell_t* cell189 = sortedlist85->root;
                 cell_t* tmp189  = NULL;
                 while(cell189 != NULL) {
                      tmp189 = cell189->next;
                      free(cell189);
                      cell189 = tmp189;
                 }
                 free(sortedlist85);
            }
         }
         unsigned int loop84 = 0;
         unsigned int loopLimit84 = (rand()%loopsFactor)/3 + 1;
         for(; loop84 < loopLimit84; loop84++) {
            if(sortedlist65 != NULL && sortedlist65->n > 0) {
                 cell_t* cell190 = sortedlist65->root;
                 if(sortedlist65->n == 0) {
                     sortedlist65->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist65->root->val  = 22;
                     sortedlist65->root->next = NULL;
                     sortedlist65->n++;
                 } else {
                     while(cell190 != NULL)
                     {
                         if(cell190->next == NULL && cell190->val < 22) {
                             cell190->next = (cell_t*)malloc(sizeof(cell_t));
                             cell190->next->next = NULL;
                             cell190->next->val  = 22;
                             sortedlist65->n++;
                             break;
                         } else if(22 < cell190->val) {
                             cell_t* tmp190 = cell190->next;
                             cell190->next = (cell_t*)malloc(sizeof(cell_t));
                             cell190->next->next = tmp190;
                             int tmp_val190 = cell190->val;
                             cell190->val = 22;
                             cell190->next->val = tmp_val190;
                             sortedlist65->n++;
                             break;
                         }
                         cell190 = cell190->next;
                     }
                 }
            }
            if(sortedlist44 != NULL && sortedlist44->n > 0)
            {
                cell_t* cell191 = sortedlist44->root;
                if(cell191->val == 10)
                {
                    cell191 = cell191->next;
                    sortedlist44->n--;
                }else{
                    while(cell191->next != NULL && cell191->next->val != 10) cell191 = cell191->next;
                    if(cell191->next != NULL)
                    {
                        cell191 = cell191->next->next;
                        sortedlist44->n--;
                    }
                 }
            }
            if(sortedlist0 != NULL && sortedlist0->n > 0)
            {
                cell_t* cell192 = sortedlist0->root;
                if(cell192->val == 1)
                {
                    cell192 = cell192->next;
                    sortedlist0->n--;
                }else{
                    while(cell192->next != NULL && cell192->next->val != 1) cell192 = cell192->next;
                    if(cell192->next != NULL)
                    {
                        cell192 = cell192->next->next;
                        sortedlist0->n--;
                    }
                 }
            }
         }
         sortedlist_t_param params2;
         params2.size = 7;
         params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
         params2.data[0] = sortedlist0;
         params2.data[1] = sortedlist44;
         params2.data[2] = sortedlist51;
         params2.data[3] = sortedlist54;
         params2.data[4] = sortedlist57;
         params2.data[5] = sortedlist65;
         params2.data[6] = sortedlist82;
         sortedlist_t* sortedlist86 = func2(&params2, rng(), loopsFactor);
         free(params2.data);
         unsigned int loop115 = 0;
         unsigned int loopLimit115 = (rand()%loopsFactor)/3 + 1;
         for(; loop115 < loopLimit115; loop115++) {
            if(sortedlist51 != NULL && sortedlist51->n > 0)
            {
                cell_t* cell265 = sortedlist51->root;
                if(cell265->val == 20)
                {
                    cell265 = cell265->next;
                    sortedlist51->n--;
                }else{
                    while(cell265->next != NULL && cell265->next->val != 20) cell265 = cell265->next;
                    if(cell265->next != NULL)
                    {
                        cell265 = cell265->next->next;
                        sortedlist51->n--;
                    }
                 }
            }
         }
         sortedlist_t* sortedlist117 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist117->n = 0;
         sortedlist117->root = NULL;
         if(rng() & 1) {
            unsigned int loop116 = 0;
            unsigned int loopLimit116 = (rand()%loopsFactor)/3 + 1;
            for(; loop116 < loopLimit116; loop116++) {
               sortedlist_t* sortedlist118 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
               sortedlist118->n = 0;
               sortedlist118->root = NULL;
               if(sortedlist57 != NULL && sortedlist57->n > 0){
                    cell_t* cell266 = sortedlist57->root;
                    while(cell266 != NULL && cell266->val != 22) cell266 = cell266->next;
               }
               sortedlist_t* sortedlist119 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
               sortedlist119->n = 0;
               sortedlist119->root = NULL;
               if(rng() & 1) {
                  unsigned int loop117 = 0;
                  unsigned int loopLimit117 = (rand()%loopsFactor)/4 + 1;
                  for(; loop117 < loopLimit117; loop117++) {
                     sortedlist_t* sortedlist120 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
                     sortedlist120->n = 0;
                     sortedlist120->root = NULL;
                     if(sortedlist65 != NULL && sortedlist65->n > 0){
                          cell_t* cell267 = sortedlist65->root;
                          while(cell267 != NULL && cell267->val != 96) cell267 = cell267->next;
                     }
                     unsigned int loop118 = 0;
                     unsigned int loopLimit118 = (rand()%loopsFactor)/5 + 1;
                     for(; loop118 < loopLimit118; loop118++) {
                        if(sortedlist44 != NULL && sortedlist44->n > 0) {
                             cell_t* cell268 = sortedlist44->root;
                             if(sortedlist44->n == 0) {
                                 sortedlist44->root = (cell_t*)malloc(sizeof(cell_t));
                                 sortedlist44->root->val  = 30;
                                 sortedlist44->root->next = NULL;
                                 sortedlist44->n++;
                             } else {
                                 while(cell268 != NULL)
                                 {
                                     if(cell268->next == NULL && cell268->val < 30) {
                                         cell268->next = (cell_t*)malloc(sizeof(cell_t));
                                         cell268->next->next = NULL;
                                         cell268->next->val  = 30;
                                         sortedlist44->n++;
                                         break;
                                     } else if(30 < cell268->val) {
                                         cell_t* tmp268 = cell268->next;
                                         cell268->next = (cell_t*)malloc(sizeof(cell_t));
                                         cell268->next->next = tmp268;
                                         int tmp_val268 = cell268->val;
                                         cell268->val = 30;
                                         cell268->next->val = tmp_val268;
                                         sortedlist44->n++;
                                         break;
                                     }
                                     cell268 = cell268->next;
                                 }
                             }
                        }
                     }
                     if(sortedlist120 != NULL && sortedlist120->n > 0){
                          cell_t* cell269 = sortedlist120->root;
                          cell_t* tmp269  = NULL;
                          while(cell269 != NULL) {
                               tmp269 = cell269->next;
                               free(cell269);
                               cell269 = tmp269;
                          }
                          free(sortedlist120);
                     }
                  }
               }
               else {
                  sortedlist_t_param params3;
                  params3.size = 11;
                  params3.data = (sortedlist_t**)malloc(params3.size*sizeof(sortedlist_t*));
                  params3.data[0] = sortedlist0;
                  params3.data[1] = sortedlist44;
                  params3.data[2] = sortedlist51;
                  params3.data[3] = sortedlist54;
                  params3.data[4] = sortedlist57;
                  params3.data[5] = sortedlist65;
                  params3.data[6] = sortedlist82;
                  params3.data[7] = sortedlist86;
                  params3.data[8] = sortedlist117;
                  params3.data[9] = sortedlist118;
                  params3.data[10] = sortedlist119;
                  sortedlist_t* sortedlist121 = func6(&params3, loopsFactor);
                  free(params3.data);
                  if(sortedlist121 != NULL && sortedlist121->n > 0){
                       cell_t* cell270 = sortedlist121->root;
                       cell_t* tmp270  = NULL;
                       while(cell270 != NULL) {
                            tmp270 = cell270->next;
                            free(cell270);
                            cell270 = tmp270;
                       }
                       free(sortedlist121);
                  }
               }
               unsigned int loop119 = 0;
               unsigned int loopLimit119 = (rand()%loopsFactor)/4 + 1;
               for(; loop119 < loopLimit119; loop119++) {
                  if(sortedlist44 != NULL && sortedlist44->n > 0) {
                       cell_t* cell271 = sortedlist44->root;
                       if(sortedlist44->n == 0) {
                           sortedlist44->root = (cell_t*)malloc(sizeof(cell_t));
                           sortedlist44->root->val  = 92;
                           sortedlist44->root->next = NULL;
                           sortedlist44->n++;
                       } else {
                           while(cell271 != NULL)
                           {
                               if(cell271->next == NULL && cell271->val < 92) {
                                   cell271->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell271->next->next = NULL;
                                   cell271->next->val  = 92;
                                   sortedlist44->n++;
                                   break;
                               } else if(92 < cell271->val) {
                                   cell_t* tmp271 = cell271->next;
                                   cell271->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell271->next->next = tmp271;
                                   int tmp_val271 = cell271->val;
                                   cell271->val = 92;
                                   cell271->next->val = tmp_val271;
                                   sortedlist44->n++;
                                   break;
                               }
                               cell271 = cell271->next;
                           }
                       }
                  }
                  if(sortedlist0 != NULL && sortedlist0->n > 0)
                  {
                      cell_t* cell272 = sortedlist0->root;
                      if(cell272->val == 72)
                      {
                          cell272 = cell272->next;
                          sortedlist0->n--;
                      }else{
                          while(cell272->next != NULL && cell272->next->val != 72) cell272 = cell272->next;
                          if(cell272->next != NULL)
                          {
                              cell272 = cell272->next->next;
                              sortedlist0->n--;
                          }
                       }
                  }
                  if(sortedlist65 != NULL && sortedlist65->n > 0)
                  {
                      cell_t* cell273 = sortedlist65->root;
                      if(cell273->val == 25)
                      {
                          cell273 = cell273->next;
                          sortedlist65->n--;
                      }else{
                          while(cell273->next != NULL && cell273->next->val != 25) cell273 = cell273->next;
                          if(cell273->next != NULL)
                          {
                              cell273 = cell273->next->next;
                              sortedlist65->n--;
                          }
                       }
                  }
               }
               sortedlist_t_param params3;
               params3.size = 11;
               params3.data = (sortedlist_t**)malloc(params3.size*sizeof(sortedlist_t*));
               params3.data[0] = sortedlist0;
               params3.data[1] = sortedlist44;
               params3.data[2] = sortedlist51;
               params3.data[3] = sortedlist54;
               params3.data[4] = sortedlist57;
               params3.data[5] = sortedlist65;
               params3.data[6] = sortedlist82;
               params3.data[7] = sortedlist86;
               params3.data[8] = sortedlist117;
               params3.data[9] = sortedlist118;
               params3.data[10] = sortedlist119;
               sortedlist_t* sortedlist122 = func3(&params3, rng(), loopsFactor);
               free(params3.data);
               unsigned int loop120 = 0;
               unsigned int loopLimit120 = (rand()%loopsFactor)/4 + 1;
               for(; loop120 < loopLimit120; loop120++) {
                  if(sortedlist118 != NULL && sortedlist118->n > 0)
                  {
                      cell_t* cell274 = sortedlist118->root;
                      if(cell274->val == 22)
                      {
                          cell274 = cell274->next;
                          sortedlist118->n--;
                      }else{
                          while(cell274->next != NULL && cell274->next->val != 22) cell274 = cell274->next;
                          if(cell274->next != NULL)
                          {
                              cell274 = cell274->next->next;
                              sortedlist118->n--;
                          }
                       }
                  }
               }
               unsigned int loop121 = 0;
               unsigned int loopLimit121 = (rand()%loopsFactor)/4 + 1;
               for(; loop121 < loopLimit121; loop121++) {
                  if(sortedlist86 != NULL && sortedlist86->n > 0) {
                       cell_t* cell275 = sortedlist86->root;
                       if(sortedlist86->n == 0) {
                           sortedlist86->root = (cell_t*)malloc(sizeof(cell_t));
                           sortedlist86->root->val  = 40;
                           sortedlist86->root->next = NULL;
                           sortedlist86->n++;
                       } else {
                           while(cell275 != NULL)
                           {
                               if(cell275->next == NULL && cell275->val < 40) {
                                   cell275->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell275->next->next = NULL;
                                   cell275->next->val  = 40;
                                   sortedlist86->n++;
                                   break;
                               } else if(40 < cell275->val) {
                                   cell_t* tmp275 = cell275->next;
                                   cell275->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell275->next->next = tmp275;
                                   int tmp_val275 = cell275->val;
                                   cell275->val = 40;
                                   cell275->next->val = tmp_val275;
                                   sortedlist86->n++;
                                   break;
                               }
                               cell275 = cell275->next;
                           }
                       }
                  }
               }
               if(sortedlist122 != NULL && sortedlist122->n > 0){
                    cell_t* cell276 = sortedlist122->root;
                    cell_t* tmp276  = NULL;
                    while(cell276 != NULL) {
                         tmp276 = cell276->next;
                         free(cell276);
                         cell276 = tmp276;
                    }
                    free(sortedlist122);
               }
               if(sortedlist119 != NULL && sortedlist119->n > 0){
                    cell_t* cell277 = sortedlist119->root;
                    cell_t* tmp277  = NULL;
                    while(cell277 != NULL) {
                         tmp277 = cell277->next;
                         free(cell277);
                         cell277 = tmp277;
                    }
                    free(sortedlist119);
               }
               if(sortedlist118 != NULL && sortedlist118->n > 0){
                    cell_t* cell278 = sortedlist118->root;
                    cell_t* tmp278  = NULL;
                    while(cell278 != NULL) {
                         tmp278 = cell278->next;
                         free(cell278);
                         cell278 = tmp278;
                    }
                    free(sortedlist118);
               }
            }
         }
         else {
            sortedlist_t_param params3;
            params3.size = 9;
            params3.data = (sortedlist_t**)malloc(params3.size*sizeof(sortedlist_t*));
            params3.data[0] = sortedlist0;
            params3.data[1] = sortedlist44;
            params3.data[2] = sortedlist51;
            params3.data[3] = sortedlist54;
            params3.data[4] = sortedlist57;
            params3.data[5] = sortedlist65;
            params3.data[6] = sortedlist82;
            params3.data[7] = sortedlist86;
            params3.data[8] = sortedlist117;
            sortedlist_t* sortedlist123 = func0(&params3, rng(), loopsFactor);
            free(params3.data);
            if(sortedlist123 != NULL && sortedlist123->n > 0){
                 cell_t* cell279 = sortedlist123->root;
                 cell_t* tmp279  = NULL;
                 while(cell279 != NULL) {
                      tmp279 = cell279->next;
                      free(cell279);
                      cell279 = tmp279;
                 }
                 free(sortedlist123);
            }
         }
         unsigned int loop122 = 0;
         unsigned int loopLimit122 = (rand()%loopsFactor)/3 + 1;
         for(; loop122 < loopLimit122; loop122++) {
            if(sortedlist51 != NULL && sortedlist51->n > 0) {
                 cell_t* cell280 = sortedlist51->root;
                 if(sortedlist51->n == 0) {
                     sortedlist51->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist51->root->val  = 98;
                     sortedlist51->root->next = NULL;
                     sortedlist51->n++;
                 } else {
                     while(cell280 != NULL)
                     {
                         if(cell280->next == NULL && cell280->val < 98) {
                             cell280->next = (cell_t*)malloc(sizeof(cell_t));
                             cell280->next->next = NULL;
                             cell280->next->val  = 98;
                             sortedlist51->n++;
                             break;
                         } else if(98 < cell280->val) {
                             cell_t* tmp280 = cell280->next;
                             cell280->next = (cell_t*)malloc(sizeof(cell_t));
                             cell280->next->next = tmp280;
                             int tmp_val280 = cell280->val;
                             cell280->val = 98;
                             cell280->next->val = tmp_val280;
                             sortedlist51->n++;
                             break;
                         }
                         cell280 = cell280->next;
                     }
                 }
            }
            if(sortedlist65 != NULL && sortedlist65->n > 0)
            {
                cell_t* cell281 = sortedlist65->root;
                if(cell281->val == 98)
                {
                    cell281 = cell281->next;
                    sortedlist65->n--;
                }else{
                    while(cell281->next != NULL && cell281->next->val != 98) cell281 = cell281->next;
                    if(cell281->next != NULL)
                    {
                        cell281 = cell281->next->next;
                        sortedlist65->n--;
                    }
                 }
            }
            if(sortedlist51 != NULL && sortedlist51->n > 0)
            {
                cell_t* cell282 = sortedlist51->root;
                if(cell282->val == 24)
                {
                    cell282 = cell282->next;
                    sortedlist51->n--;
                }else{
                    while(cell282->next != NULL && cell282->next->val != 24) cell282 = cell282->next;
                    if(cell282->next != NULL)
                    {
                        cell282 = cell282->next->next;
                        sortedlist51->n--;
                    }
                 }
            }
         }
         if(sortedlist117 != NULL && sortedlist117->n > 0){
              cell_t* cell283 = sortedlist117->root;
              cell_t* tmp283  = NULL;
              while(cell283 != NULL) {
                   tmp283 = cell283->next;
                   free(cell283);
                   cell283 = tmp283;
              }
              free(sortedlist117);
         }
         if(sortedlist86 != NULL && sortedlist86->n > 0){
              cell_t* cell284 = sortedlist86->root;
              cell_t* tmp284  = NULL;
              while(cell284 != NULL) {
                   tmp284 = cell284->next;
                   free(cell284);
                   cell284 = tmp284;
              }
              free(sortedlist86);
         }
         if(sortedlist82 != NULL && sortedlist82->n > 0){
              cell_t* cell285 = sortedlist82->root;
              cell_t* tmp285  = NULL;
              while(cell285 != NULL) {
                   tmp285 = cell285->next;
                   free(cell285);
                   cell285 = tmp285;
              }
              free(sortedlist82);
         }
      }
      if(sortedlist65 != NULL && sortedlist65->n > 0){
           cell_t* cell286 = sortedlist65->root;
           cell_t* tmp286  = NULL;
           while(cell286 != NULL) {
                tmp286 = cell286->next;
                free(cell286);
                cell286 = tmp286;
           }
           free(sortedlist65);
      }
      if(sortedlist57 != NULL && sortedlist57->n > 0){
           cell_t* cell287 = sortedlist57->root;
           cell_t* tmp287  = NULL;
           while(cell287 != NULL) {
                tmp287 = cell287->next;
                free(cell287);
                cell287 = tmp287;
           }
           free(sortedlist57);
      }
      if(sortedlist54 != NULL && sortedlist54->n > 0){
           cell_t* cell288 = sortedlist54->root;
           cell_t* tmp288  = NULL;
           while(cell288 != NULL) {
                tmp288 = cell288->next;
                free(cell288);
                cell288 = tmp288;
           }
           free(sortedlist54);
      }
      if(sortedlist51 != NULL && sortedlist51->n > 0){
           cell_t* cell289 = sortedlist51->root;
           cell_t* tmp289  = NULL;
           while(cell289 != NULL) {
                tmp289 = cell289->next;
                free(cell289);
                cell289 = tmp289;
           }
           free(sortedlist51);
      }
      if(sortedlist44 != NULL && sortedlist44->n > 0){
           cell_t* cell290 = sortedlist44->root;
           cell_t* tmp290  = NULL;
           while(cell290 != NULL) {
                tmp290 = cell290->next;
                free(cell290);
                cell290 = tmp290;
           }
           free(sortedlist44);
      }
      if(sortedlist0 != NULL && sortedlist0->n > 0){
           cell_t* cell291 = sortedlist0->root;
           cell_t* tmp291  = NULL;
           while(cell291 != NULL) {
                tmp291 = cell291->next;
                free(cell291);
                cell291 = tmp291;
           }
           free(sortedlist0);
      }
   }
   return 0;
}

