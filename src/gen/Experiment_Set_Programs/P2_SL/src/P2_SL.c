#include "P2_SL.h"

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
            if(sortedlist0 != NULL && sortedlist0->n > 0)
            {
                cell_t* cell1 = sortedlist0->root;
                if(cell1->val == 15)
                {
                    cell1 = cell1->next;
                    sortedlist0->n--;
                }else{
                    while(cell1->next != NULL && cell1->next->val != 15) cell1 = cell1->next;
                    if(cell1->next != NULL)
                    {
                        cell1 = cell1->next->next;
                        sortedlist0->n--;
                    }
                 }
            }
            if(sortedlist2 != NULL && sortedlist2->n > 0){
                 cell_t* cell2 = sortedlist2->root;
                 while(cell2 != NULL && cell2->val != 35) cell2 = cell2->next;
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
                  if(sortedlist1 != NULL && sortedlist1->n > 0)
                  {
                      cell_t* cell3 = sortedlist1->root;
                      if(cell3->val == 92)
                      {
                          cell3 = cell3->next;
                          sortedlist1->n--;
                      }else{
                          while(cell3->next != NULL && cell3->next->val != 92) cell3 = cell3->next;
                          if(cell3->next != NULL)
                          {
                              cell3 = cell3->next->next;
                              sortedlist1->n--;
                          }
                       }
                  }
                  if(sortedlist4 != NULL && sortedlist4->n > 0){
                       cell_t* cell4 = sortedlist4->root;
                       while(cell4 != NULL && cell4->val != 21) cell4 = cell4->next;
                  }
                  sortedlist_t* sortedlist5 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
                  sortedlist5->n = 0;
                  sortedlist5->root = NULL;
                  if(rng() & 1) {
                     unsigned int loop3 = 0;
                     unsigned int loopLimit3 = (rand()%loopsFactor)/4 + 1;
                     for(; loop3 < loopLimit3; loop3++) {
                        sortedlist_t* sortedlist6 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
                        sortedlist6->n = 0;
                        sortedlist6->root = NULL;
                        if(sortedlist2 != NULL && sortedlist2->n > 0)
                        {
                            cell_t* cell5 = sortedlist2->root;
                            if(cell5->val == 27)
                            {
                                cell5 = cell5->next;
                                sortedlist2->n--;
                            }else{
                                while(cell5->next != NULL && cell5->next->val != 27) cell5 = cell5->next;
                                if(cell5->next != NULL)
                                {
                                    cell5 = cell5->next->next;
                                    sortedlist2->n--;
                                }
                             }
                        }
                        if(sortedlist6 != NULL && sortedlist6->n > 0){
                             cell_t* cell6 = sortedlist6->root;
                             while(cell6 != NULL && cell6->val != 59) cell6 = cell6->next;
                        }
                        unsigned int loop4 = 0;
                        unsigned int loopLimit4 = (rand()%loopsFactor)/5 + 1;
                        for(; loop4 < loopLimit4; loop4++) {
                           if(sortedlist6 != NULL && sortedlist6->n > 0) {
                                cell_t* cell7 = sortedlist6->root;
                                if(sortedlist6->n == 0) {
                                    sortedlist6->root = (cell_t*)malloc(sizeof(cell_t));
                                    sortedlist6->root->val  = 26;
                                    sortedlist6->root->next = NULL;
                                    sortedlist6->n++;
                                } else {
                                    while(cell7 != NULL)
                                    {
                                        if(cell7->next == NULL && cell7->val < 26) {
                                            cell7->next = (cell_t*)malloc(sizeof(cell_t));
                                            cell7->next->next = NULL;
                                            cell7->next->val  = 26;
                                            sortedlist6->n++;
                                            break;
                                        } else if(26 < cell7->val) {
                                            cell_t* tmp7 = cell7->next;
                                            cell7->next = (cell_t*)malloc(sizeof(cell_t));
                                            cell7->next->next = tmp7;
                                            int tmp_val7 = cell7->val;
                                            cell7->val = 26;
                                            cell7->next->val = tmp_val7;
                                            sortedlist6->n++;
                                            break;
                                        }
                                        cell7 = cell7->next;
                                    }
                                }
                           }
                        }
                        if(sortedlist6 != NULL && sortedlist6->n > 0){
                             cell_t* cell8 = sortedlist6->root;
                             cell_t* tmp8  = NULL;
                             while(cell8 != NULL) {
                                  tmp8 = cell8->next;
                                  free(cell8);
                                  cell8 = tmp8;
                             }
                             free(sortedlist6);
                        }
                     }
                  }
                  else {
                     sortedlist_t_param params0;
                     params0.size = 6;
                     params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
                     params0.data[0] = sortedlist0;
                     params0.data[1] = sortedlist1;
                     params0.data[2] = sortedlist2;
                     params0.data[3] = sortedlist3;
                     params0.data[4] = sortedlist4;
                     params0.data[5] = sortedlist5;
                     sortedlist_t* sortedlist7 = func14(&params0, loopsFactor);
                     free(params0.data);
                     if(sortedlist7 != NULL && sortedlist7->n > 0){
                          cell_t* cell10 = sortedlist7->root;
                          cell_t* tmp10  = NULL;
                          while(cell10 != NULL) {
                               tmp10 = cell10->next;
                               free(cell10);
                               cell10 = tmp10;
                          }
                          free(sortedlist7);
                     }
                  }
                  sortedlist_t_param params0;
                  params0.size = 6;
                  params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
                  params0.data[0] = sortedlist0;
                  params0.data[1] = sortedlist1;
                  params0.data[2] = sortedlist2;
                  params0.data[3] = sortedlist3;
                  params0.data[4] = sortedlist4;
                  params0.data[5] = sortedlist5;
                  sortedlist_t* sortedlist9 = func11(&params0, rng(), loopsFactor);
                  free(params0.data);
                  unsigned int loop10 = 0;
                  unsigned int loopLimit10 = (rand()%loopsFactor)/4 + 1;
                  for(; loop10 < loopLimit10; loop10++) {
                     if(sortedlist0 != NULL && sortedlist0->n > 0)
                     {
                         cell_t* cell25 = sortedlist0->root;
                         if(cell25->val == 84)
                         {
                             cell25 = cell25->next;
                             sortedlist0->n--;
                         }else{
                             while(cell25->next != NULL && cell25->next->val != 84) cell25 = cell25->next;
                             if(cell25->next != NULL)
                             {
                                 cell25 = cell25->next->next;
                                 sortedlist0->n--;
                             }
                          }
                     }
                  }
                  unsigned int loop11 = 0;
                  unsigned int loopLimit11 = (rand()%loopsFactor)/4 + 1;
                  for(; loop11 < loopLimit11; loop11++) {
                     if(sortedlist3 != NULL && sortedlist3->n > 0) {
                          cell_t* cell26 = sortedlist3->root;
                          if(sortedlist3->n == 0) {
                              sortedlist3->root = (cell_t*)malloc(sizeof(cell_t));
                              sortedlist3->root->val  = 98;
                              sortedlist3->root->next = NULL;
                              sortedlist3->n++;
                          } else {
                              while(cell26 != NULL)
                              {
                                  if(cell26->next == NULL && cell26->val < 98) {
                                      cell26->next = (cell_t*)malloc(sizeof(cell_t));
                                      cell26->next->next = NULL;
                                      cell26->next->val  = 98;
                                      sortedlist3->n++;
                                      break;
                                  } else if(98 < cell26->val) {
                                      cell_t* tmp26 = cell26->next;
                                      cell26->next = (cell_t*)malloc(sizeof(cell_t));
                                      cell26->next->next = tmp26;
                                      int tmp_val26 = cell26->val;
                                      cell26->val = 98;
                                      cell26->next->val = tmp_val26;
                                      sortedlist3->n++;
                                      break;
                                  }
                                  cell26 = cell26->next;
                              }
                          }
                     }
                  }
                  if(sortedlist9 != NULL && sortedlist9->n > 0){
                       cell_t* cell27 = sortedlist9->root;
                       cell_t* tmp27  = NULL;
                       while(cell27 != NULL) {
                            tmp27 = cell27->next;
                            free(cell27);
                            cell27 = tmp27;
                       }
                       free(sortedlist9);
                  }
                  if(sortedlist5 != NULL && sortedlist5->n > 0){
                       cell_t* cell28 = sortedlist5->root;
                       cell_t* tmp28  = NULL;
                       while(cell28 != NULL) {
                            tmp28 = cell28->next;
                            free(cell28);
                            cell28 = tmp28;
                       }
                       free(sortedlist5);
                  }
                  if(sortedlist4 != NULL && sortedlist4->n > 0){
                       cell_t* cell29 = sortedlist4->root;
                       cell_t* tmp29  = NULL;
                       while(cell29 != NULL) {
                            tmp29 = cell29->next;
                            free(cell29);
                            cell29 = tmp29;
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
               sortedlist_t* sortedlist15 = func8(&params0, loopsFactor);
               free(params0.data);
               if(sortedlist15 != NULL && sortedlist15->n > 0){
                    cell_t* cell41 = sortedlist15->root;
                    cell_t* tmp41  = NULL;
                    while(cell41 != NULL) {
                         tmp41 = cell41->next;
                         free(cell41);
                         cell41 = tmp41;
                    }
                    free(sortedlist15);
               }
            }
            sortedlist_t_param params0;
            params0.size = 4;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist0;
            params0.data[1] = sortedlist1;
            params0.data[2] = sortedlist2;
            params0.data[3] = sortedlist3;
            sortedlist_t* sortedlist21 = func5(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop33 = 0;
            unsigned int loopLimit33 = (rand()%loopsFactor)/3 + 1;
            for(; loop33 < loopLimit33; loop33++) {
               if(sortedlist1 != NULL && sortedlist1->n > 0)
               {
                   cell_t* cell86 = sortedlist1->root;
                   if(cell86->val == 75)
                   {
                       cell86 = cell86->next;
                       sortedlist1->n--;
                   }else{
                       while(cell86->next != NULL && cell86->next->val != 75) cell86 = cell86->next;
                       if(cell86->next != NULL)
                       {
                           cell86 = cell86->next->next;
                           sortedlist1->n--;
                       }
                    }
               }
            }
            unsigned int loop34 = 0;
            unsigned int loopLimit34 = (rand()%loopsFactor)/3 + 1;
            for(; loop34 < loopLimit34; loop34++) {
               if(sortedlist21 != NULL && sortedlist21->n > 0) {
                    cell_t* cell87 = sortedlist21->root;
                    if(sortedlist21->n == 0) {
                        sortedlist21->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist21->root->val  = 27;
                        sortedlist21->root->next = NULL;
                        sortedlist21->n++;
                    } else {
                        while(cell87 != NULL)
                        {
                            if(cell87->next == NULL && cell87->val < 27) {
                                cell87->next = (cell_t*)malloc(sizeof(cell_t));
                                cell87->next->next = NULL;
                                cell87->next->val  = 27;
                                sortedlist21->n++;
                                break;
                            } else if(27 < cell87->val) {
                                cell_t* tmp87 = cell87->next;
                                cell87->next = (cell_t*)malloc(sizeof(cell_t));
                                cell87->next->next = tmp87;
                                int tmp_val87 = cell87->val;
                                cell87->val = 27;
                                cell87->next->val = tmp_val87;
                                sortedlist21->n++;
                                break;
                            }
                            cell87 = cell87->next;
                        }
                    }
               }
            }
            if(sortedlist21 != NULL && sortedlist21->n > 0){
                 cell_t* cell88 = sortedlist21->root;
                 cell_t* tmp88  = NULL;
                 while(cell88 != NULL) {
                      tmp88 = cell88->next;
                      free(cell88);
                      cell88 = tmp88;
                 }
                 free(sortedlist21);
            }
            if(sortedlist3 != NULL && sortedlist3->n > 0){
                 cell_t* cell89 = sortedlist3->root;
                 cell_t* tmp89  = NULL;
                 while(cell89 != NULL) {
                      tmp89 = cell89->next;
                      free(cell89);
                      cell89 = tmp89;
                 }
                 free(sortedlist3);
            }
            if(sortedlist2 != NULL && sortedlist2->n > 0){
                 cell_t* cell90 = sortedlist2->root;
                 cell_t* tmp90  = NULL;
                 while(cell90 != NULL) {
                      tmp90 = cell90->next;
                      free(cell90);
                      cell90 = tmp90;
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
         sortedlist_t* sortedlist40 = func2(&params0, rng(), loopsFactor);
         free(params0.data);
         if(sortedlist40 != NULL && sortedlist40->n > 0){
              cell_t* cell141 = sortedlist40->root;
              cell_t* tmp141  = NULL;
              while(cell141 != NULL) {
                   tmp141 = cell141->next;
                   free(cell141);
                   cell141 = tmp141;
              }
              free(sortedlist40);
         }
      }
      if(sortedlist0 != NULL && sortedlist0->n > 0)
      {
          cell_t* cell142 = sortedlist0->root;
          if(cell142->val == 4)
          {
              cell142 = cell142->next;
              sortedlist0->n--;
          }else{
              while(cell142->next != NULL && cell142->next->val != 4) cell142 = cell142->next;
              if(cell142->next != NULL)
              {
                  cell142 = cell142->next->next;
                  sortedlist0->n--;
              }
           }
      }
      unsigned int loop55 = 0;
      unsigned int loopLimit55 = (rand()%loopsFactor)/2 + 1;
      for(; loop55 < loopLimit55; loop55++) {
         if(sortedlist1 != NULL && sortedlist1->n > 0)
         {
             cell_t* cell143 = sortedlist1->root;
             if(cell143->val == 63)
             {
                 cell143 = cell143->next;
                 sortedlist1->n--;
             }else{
                 while(cell143->next != NULL && cell143->next->val != 63) cell143 = cell143->next;
                 if(cell143->next != NULL)
                 {
                     cell143 = cell143->next->next;
                     sortedlist1->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist62 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist62->n = 0;
      sortedlist62->root = NULL;
      if(rng() & 1) {
         unsigned int loop56 = 0;
         unsigned int loopLimit56 = (rand()%loopsFactor)/2 + 1;
         for(; loop56 < loopLimit56; loop56++) {
            sortedlist_t* sortedlist63 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist63->n = 0;
            sortedlist63->root = NULL;
            if(sortedlist1 != NULL && sortedlist1->n > 0)
            {
                cell_t* cell144 = sortedlist1->root;
                if(cell144->val == 38)
                {
                    cell144 = cell144->next;
                    sortedlist1->n--;
                }else{
                    while(cell144->next != NULL && cell144->next->val != 38) cell144 = cell144->next;
                    if(cell144->next != NULL)
                    {
                        cell144 = cell144->next->next;
                        sortedlist1->n--;
                    }
                 }
            }
            if(sortedlist62 != NULL && sortedlist62->n > 0){
                 cell_t* cell145 = sortedlist62->root;
                 while(cell145 != NULL && cell145->val != 40) cell145 = cell145->next;
            }
            sortedlist_t* sortedlist64 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist64->n = 0;
            sortedlist64->root = NULL;
            if(rng() & 1) {
               unsigned int loop57 = 0;
               unsigned int loopLimit57 = (rand()%loopsFactor)/3 + 1;
               for(; loop57 < loopLimit57; loop57++) {
                  sortedlist_t* sortedlist65 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
                  sortedlist65->n = 0;
                  sortedlist65->root = NULL;
                  if(sortedlist64 != NULL && sortedlist64->n > 0)
                  {
                      cell_t* cell146 = sortedlist64->root;
                      if(cell146->val == 18)
                      {
                          cell146 = cell146->next;
                          sortedlist64->n--;
                      }else{
                          while(cell146->next != NULL && cell146->next->val != 18) cell146 = cell146->next;
                          if(cell146->next != NULL)
                          {
                              cell146 = cell146->next->next;
                              sortedlist64->n--;
                          }
                       }
                  }
                  if(sortedlist0 != NULL && sortedlist0->n > 0){
                       cell_t* cell147 = sortedlist0->root;
                       while(cell147 != NULL && cell147->val != 88) cell147 = cell147->next;
                  }
                  unsigned int loop58 = 0;
                  unsigned int loopLimit58 = (rand()%loopsFactor)/4 + 1;
                  for(; loop58 < loopLimit58; loop58++) {
                     if(sortedlist63 != NULL && sortedlist63->n > 0) {
                          cell_t* cell148 = sortedlist63->root;
                          if(sortedlist63->n == 0) {
                              sortedlist63->root = (cell_t*)malloc(sizeof(cell_t));
                              sortedlist63->root->val  = 17;
                              sortedlist63->root->next = NULL;
                              sortedlist63->n++;
                          } else {
                              while(cell148 != NULL)
                              {
                                  if(cell148->next == NULL && cell148->val < 17) {
                                      cell148->next = (cell_t*)malloc(sizeof(cell_t));
                                      cell148->next->next = NULL;
                                      cell148->next->val  = 17;
                                      sortedlist63->n++;
                                      break;
                                  } else if(17 < cell148->val) {
                                      cell_t* tmp148 = cell148->next;
                                      cell148->next = (cell_t*)malloc(sizeof(cell_t));
                                      cell148->next->next = tmp148;
                                      int tmp_val148 = cell148->val;
                                      cell148->val = 17;
                                      cell148->next->val = tmp_val148;
                                      sortedlist63->n++;
                                      break;
                                  }
                                  cell148 = cell148->next;
                              }
                          }
                     }
                  }
                  if(sortedlist65 != NULL && sortedlist65->n > 0){
                       cell_t* cell149 = sortedlist65->root;
                       cell_t* tmp149  = NULL;
                       while(cell149 != NULL) {
                            tmp149 = cell149->next;
                            free(cell149);
                            cell149 = tmp149;
                       }
                       free(sortedlist65);
                  }
               }
            }
            else {
               sortedlist_t_param params0;
               params0.size = 5;
               params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
               params0.data[0] = sortedlist0;
               params0.data[1] = sortedlist1;
               params0.data[2] = sortedlist62;
               params0.data[3] = sortedlist63;
               params0.data[4] = sortedlist64;
               sortedlist_t* sortedlist66 = func14(&params0, loopsFactor);
               free(params0.data);
               if(sortedlist66 != NULL && sortedlist66->n > 0){
                    cell_t* cell150 = sortedlist66->root;
                    cell_t* tmp150  = NULL;
                    while(cell150 != NULL) {
                         tmp150 = cell150->next;
                         free(cell150);
                         cell150 = tmp150;
                    }
                    free(sortedlist66);
               }
            }
            sortedlist_t_param params0;
            params0.size = 5;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist0;
            params0.data[1] = sortedlist1;
            params0.data[2] = sortedlist62;
            params0.data[3] = sortedlist63;
            params0.data[4] = sortedlist64;
            sortedlist_t* sortedlist67 = func11(&params0, rng(), loopsFactor);
            free(params0.data);
            unsigned int loop59 = 0;
            unsigned int loopLimit59 = (rand()%loopsFactor)/3 + 1;
            for(; loop59 < loopLimit59; loop59++) {
               if(sortedlist67 != NULL && sortedlist67->n > 0)
               {
                   cell_t* cell151 = sortedlist67->root;
                   if(cell151->val == 96)
                   {
                       cell151 = cell151->next;
                       sortedlist67->n--;
                   }else{
                       while(cell151->next != NULL && cell151->next->val != 96) cell151 = cell151->next;
                       if(cell151->next != NULL)
                       {
                           cell151 = cell151->next->next;
                           sortedlist67->n--;
                       }
                    }
               }
            }
            unsigned int loop60 = 0;
            unsigned int loopLimit60 = (rand()%loopsFactor)/3 + 1;
            for(; loop60 < loopLimit60; loop60++) {
               if(sortedlist62 != NULL && sortedlist62->n > 0) {
                    cell_t* cell152 = sortedlist62->root;
                    if(sortedlist62->n == 0) {
                        sortedlist62->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist62->root->val  = 43;
                        sortedlist62->root->next = NULL;
                        sortedlist62->n++;
                    } else {
                        while(cell152 != NULL)
                        {
                            if(cell152->next == NULL && cell152->val < 43) {
                                cell152->next = (cell_t*)malloc(sizeof(cell_t));
                                cell152->next->next = NULL;
                                cell152->next->val  = 43;
                                sortedlist62->n++;
                                break;
                            } else if(43 < cell152->val) {
                                cell_t* tmp152 = cell152->next;
                                cell152->next = (cell_t*)malloc(sizeof(cell_t));
                                cell152->next->next = tmp152;
                                int tmp_val152 = cell152->val;
                                cell152->val = 43;
                                cell152->next->val = tmp_val152;
                                sortedlist62->n++;
                                break;
                            }
                            cell152 = cell152->next;
                        }
                    }
               }
            }
            if(sortedlist67 != NULL && sortedlist67->n > 0){
                 cell_t* cell153 = sortedlist67->root;
                 cell_t* tmp153  = NULL;
                 while(cell153 != NULL) {
                      tmp153 = cell153->next;
                      free(cell153);
                      cell153 = tmp153;
                 }
                 free(sortedlist67);
            }
            if(sortedlist64 != NULL && sortedlist64->n > 0){
                 cell_t* cell154 = sortedlist64->root;
                 cell_t* tmp154  = NULL;
                 while(cell154 != NULL) {
                      tmp154 = cell154->next;
                      free(cell154);
                      cell154 = tmp154;
                 }
                 free(sortedlist64);
            }
            if(sortedlist63 != NULL && sortedlist63->n > 0){
                 cell_t* cell155 = sortedlist63->root;
                 cell_t* tmp155  = NULL;
                 while(cell155 != NULL) {
                      tmp155 = cell155->next;
                      free(cell155);
                      cell155 = tmp155;
                 }
                 free(sortedlist63);
            }
         }
      }
      else {
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist0;
         params0.data[1] = sortedlist1;
         params0.data[2] = sortedlist62;
         sortedlist_t* sortedlist68 = func8(&params0, loopsFactor);
         free(params0.data);
         if(sortedlist68 != NULL && sortedlist68->n > 0){
              cell_t* cell156 = sortedlist68->root;
              cell_t* tmp156  = NULL;
              while(cell156 != NULL) {
                   tmp156 = cell156->next;
                   free(cell156);
                   cell156 = tmp156;
              }
              free(sortedlist68);
         }
      }
      sortedlist_t_param params0;
      params0.size = 3;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist0;
      params0.data[1] = sortedlist1;
      params0.data[2] = sortedlist62;
      sortedlist_t* sortedlist69 = func5(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop61 = 0;
      unsigned int loopLimit61 = (rand()%loopsFactor)/2 + 1;
      for(; loop61 < loopLimit61; loop61++) {
         if(sortedlist62 != NULL && sortedlist62->n > 0)
         {
             cell_t* cell157 = sortedlist62->root;
             if(cell157->val == 83)
             {
                 cell157 = cell157->next;
                 sortedlist62->n--;
             }else{
                 while(cell157->next != NULL && cell157->next->val != 83) cell157 = cell157->next;
                 if(cell157->next != NULL)
                 {
                     cell157 = cell157->next->next;
                     sortedlist62->n--;
                 }
              }
         }
      }
      unsigned int loop62 = 0;
      unsigned int loopLimit62 = (rand()%loopsFactor)/2 + 1;
      for(; loop62 < loopLimit62; loop62++) {
         if(sortedlist62 != NULL && sortedlist62->n > 0) {
              cell_t* cell158 = sortedlist62->root;
              if(sortedlist62->n == 0) {
                  sortedlist62->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist62->root->val  = 99;
                  sortedlist62->root->next = NULL;
                  sortedlist62->n++;
              } else {
                  while(cell158 != NULL)
                  {
                      if(cell158->next == NULL && cell158->val < 99) {
                          cell158->next = (cell_t*)malloc(sizeof(cell_t));
                          cell158->next->next = NULL;
                          cell158->next->val  = 99;
                          sortedlist62->n++;
                          break;
                      } else if(99 < cell158->val) {
                          cell_t* tmp158 = cell158->next;
                          cell158->next = (cell_t*)malloc(sizeof(cell_t));
                          cell158->next->next = tmp158;
                          int tmp_val158 = cell158->val;
                          cell158->val = 99;
                          cell158->next->val = tmp_val158;
                          sortedlist62->n++;
                          break;
                      }
                      cell158 = cell158->next;
                  }
              }
         }
      }
      sortedlist_t_param params1;
      params1.size = 4;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist0;
      params1.data[1] = sortedlist1;
      params1.data[2] = sortedlist62;
      params1.data[3] = sortedlist69;
      sortedlist_t* sortedlist70 = func3(&params1, rng(), loopsFactor);
      free(params1.data);
      unsigned int loop68 = 0;
      unsigned int loopLimit68 = (rand()%loopsFactor)/2 + 1;
      for(; loop68 < loopLimit68; loop68++) {
         if(sortedlist69 != NULL && sortedlist69->n > 0) {
              cell_t* cell173 = sortedlist69->root;
              if(sortedlist69->n == 0) {
                  sortedlist69->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist69->root->val  = 99;
                  sortedlist69->root->next = NULL;
                  sortedlist69->n++;
              } else {
                  while(cell173 != NULL)
                  {
                      if(cell173->next == NULL && cell173->val < 99) {
                          cell173->next = (cell_t*)malloc(sizeof(cell_t));
                          cell173->next->next = NULL;
                          cell173->next->val  = 99;
                          sortedlist69->n++;
                          break;
                      } else if(99 < cell173->val) {
                          cell_t* tmp173 = cell173->next;
                          cell173->next = (cell_t*)malloc(sizeof(cell_t));
                          cell173->next->next = tmp173;
                          int tmp_val173 = cell173->val;
                          cell173->val = 99;
                          cell173->next->val = tmp_val173;
                          sortedlist69->n++;
                          break;
                      }
                      cell173 = cell173->next;
                  }
              }
         }
         sortedlist_t* sortedlist77 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist77->n = 0;
         sortedlist77->root = NULL;
         if(rng() & 1) {
            unsigned int loop69 = 0;
            unsigned int loopLimit69 = (rand()%loopsFactor)/3 + 1;
            for(; loop69 < loopLimit69; loop69++) {
               sortedlist_t* sortedlist78 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
               sortedlist78->n = 0;
               sortedlist78->root = NULL;
               if(sortedlist77 != NULL && sortedlist77->n > 0)
               {
                   cell_t* cell174 = sortedlist77->root;
                   if(cell174->val == 46)
                   {
                       cell174 = cell174->next;
                       sortedlist77->n--;
                   }else{
                       while(cell174->next != NULL && cell174->next->val != 46) cell174 = cell174->next;
                       if(cell174->next != NULL)
                       {
                           cell174 = cell174->next->next;
                           sortedlist77->n--;
                       }
                    }
               }
               if(sortedlist1 != NULL && sortedlist1->n > 0){
                    cell_t* cell175 = sortedlist1->root;
                    while(cell175 != NULL && cell175->val != 40) cell175 = cell175->next;
               }
               sortedlist_t* sortedlist79 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
               sortedlist79->n = 0;
               sortedlist79->root = NULL;
               if(rng() & 1) {
                  unsigned int loop70 = 0;
                  unsigned int loopLimit70 = (rand()%loopsFactor)/4 + 1;
                  for(; loop70 < loopLimit70; loop70++) {
                     sortedlist_t* sortedlist80 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
                     sortedlist80->n = 0;
                     sortedlist80->root = NULL;
                     if(sortedlist70 != NULL && sortedlist70->n > 0)
                     {
                         cell_t* cell176 = sortedlist70->root;
                         if(cell176->val == 11)
                         {
                             cell176 = cell176->next;
                             sortedlist70->n--;
                         }else{
                             while(cell176->next != NULL && cell176->next->val != 11) cell176 = cell176->next;
                             if(cell176->next != NULL)
                             {
                                 cell176 = cell176->next->next;
                                 sortedlist70->n--;
                             }
                          }
                     }
                     if(sortedlist1 != NULL && sortedlist1->n > 0){
                          cell_t* cell177 = sortedlist1->root;
                          while(cell177 != NULL && cell177->val != 5) cell177 = cell177->next;
                     }
                     sortedlist_t_param params2;
                     params2.size = 9;
                     params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
                     params2.data[0] = sortedlist0;
                     params2.data[1] = sortedlist1;
                     params2.data[2] = sortedlist62;
                     params2.data[3] = sortedlist69;
                     params2.data[4] = sortedlist70;
                     params2.data[5] = sortedlist77;
                     params2.data[6] = sortedlist78;
                     params2.data[7] = sortedlist79;
                     params2.data[8] = sortedlist80;
                     sortedlist_t* sortedlist81 = func16(&params2, rng(), loopsFactor);
                     free(params2.data);
                     unsigned int loop71 = 0;
                     unsigned int loopLimit71 = (rand()%loopsFactor)/5 + 1;
                     for(; loop71 < loopLimit71; loop71++) {
                        if(sortedlist1 != NULL && sortedlist1->n > 0)
                        {
                            cell_t* cell178 = sortedlist1->root;
                            if(cell178->val == 61)
                            {
                                cell178 = cell178->next;
                                sortedlist1->n--;
                            }else{
                                while(cell178->next != NULL && cell178->next->val != 61) cell178 = cell178->next;
                                if(cell178->next != NULL)
                                {
                                    cell178 = cell178->next->next;
                                    sortedlist1->n--;
                                }
                             }
                        }
                     }
                     unsigned int loop72 = 0;
                     unsigned int loopLimit72 = (rand()%loopsFactor)/5 + 1;
                     for(; loop72 < loopLimit72; loop72++) {
                        if(sortedlist0 != NULL && sortedlist0->n > 0) {
                             cell_t* cell179 = sortedlist0->root;
                             if(sortedlist0->n == 0) {
                                 sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
                                 sortedlist0->root->val  = 78;
                                 sortedlist0->root->next = NULL;
                                 sortedlist0->n++;
                             } else {
                                 while(cell179 != NULL)
                                 {
                                     if(cell179->next == NULL && cell179->val < 78) {
                                         cell179->next = (cell_t*)malloc(sizeof(cell_t));
                                         cell179->next->next = NULL;
                                         cell179->next->val  = 78;
                                         sortedlist0->n++;
                                         break;
                                     } else if(78 < cell179->val) {
                                         cell_t* tmp179 = cell179->next;
                                         cell179->next = (cell_t*)malloc(sizeof(cell_t));
                                         cell179->next->next = tmp179;
                                         int tmp_val179 = cell179->val;
                                         cell179->val = 78;
                                         cell179->next->val = tmp_val179;
                                         sortedlist0->n++;
                                         break;
                                     }
                                     cell179 = cell179->next;
                                 }
                             }
                        }
                     }
                     if(sortedlist81 != NULL && sortedlist81->n > 0){
                          cell_t* cell180 = sortedlist81->root;
                          cell_t* tmp180  = NULL;
                          while(cell180 != NULL) {
                               tmp180 = cell180->next;
                               free(cell180);
                               cell180 = tmp180;
                          }
                          free(sortedlist81);
                     }
                     if(sortedlist80 != NULL && sortedlist80->n > 0){
                          cell_t* cell181 = sortedlist80->root;
                          cell_t* tmp181  = NULL;
                          while(cell181 != NULL) {
                               tmp181 = cell181->next;
                               free(cell181);
                               cell181 = tmp181;
                          }
                          free(sortedlist80);
                     }
                  }
               }
               else {
                  sortedlist_t_param params2;
                  params2.size = 8;
                  params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
                  params2.data[0] = sortedlist0;
                  params2.data[1] = sortedlist1;
                  params2.data[2] = sortedlist62;
                  params2.data[3] = sortedlist69;
                  params2.data[4] = sortedlist70;
                  params2.data[5] = sortedlist77;
                  params2.data[6] = sortedlist78;
                  params2.data[7] = sortedlist79;
                  sortedlist_t* sortedlist82 = func13(&params2, loopsFactor);
                  free(params2.data);
                  if(sortedlist82 != NULL && sortedlist82->n > 0){
                       cell_t* cell182 = sortedlist82->root;
                       cell_t* tmp182  = NULL;
                       while(cell182 != NULL) {
                            tmp182 = cell182->next;
                            free(cell182);
                            cell182 = tmp182;
                       }
                       free(sortedlist82);
                  }
               }
               sortedlist_t_param params2;
               params2.size = 8;
               params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
               params2.data[0] = sortedlist0;
               params2.data[1] = sortedlist1;
               params2.data[2] = sortedlist62;
               params2.data[3] = sortedlist69;
               params2.data[4] = sortedlist70;
               params2.data[5] = sortedlist77;
               params2.data[6] = sortedlist78;
               params2.data[7] = sortedlist79;
               sortedlist_t* sortedlist83 = func10(&params2, rng(), loopsFactor);
               free(params2.data);
               unsigned int loop73 = 0;
               unsigned int loopLimit73 = (rand()%loopsFactor)/4 + 1;
               for(; loop73 < loopLimit73; loop73++) {
                  if(sortedlist77 != NULL && sortedlist77->n > 0)
                  {
                      cell_t* cell183 = sortedlist77->root;
                      if(cell183->val == 20)
                      {
                          cell183 = cell183->next;
                          sortedlist77->n--;
                      }else{
                          while(cell183->next != NULL && cell183->next->val != 20) cell183 = cell183->next;
                          if(cell183->next != NULL)
                          {
                              cell183 = cell183->next->next;
                              sortedlist77->n--;
                          }
                       }
                  }
               }
               unsigned int loop74 = 0;
               unsigned int loopLimit74 = (rand()%loopsFactor)/4 + 1;
               for(; loop74 < loopLimit74; loop74++) {
                  if(sortedlist83 != NULL && sortedlist83->n > 0) {
                       cell_t* cell184 = sortedlist83->root;
                       if(sortedlist83->n == 0) {
                           sortedlist83->root = (cell_t*)malloc(sizeof(cell_t));
                           sortedlist83->root->val  = 44;
                           sortedlist83->root->next = NULL;
                           sortedlist83->n++;
                       } else {
                           while(cell184 != NULL)
                           {
                               if(cell184->next == NULL && cell184->val < 44) {
                                   cell184->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell184->next->next = NULL;
                                   cell184->next->val  = 44;
                                   sortedlist83->n++;
                                   break;
                               } else if(44 < cell184->val) {
                                   cell_t* tmp184 = cell184->next;
                                   cell184->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell184->next->next = tmp184;
                                   int tmp_val184 = cell184->val;
                                   cell184->val = 44;
                                   cell184->next->val = tmp_val184;
                                   sortedlist83->n++;
                                   break;
                               }
                               cell184 = cell184->next;
                           }
                       }
                  }
               }
               if(sortedlist83 != NULL && sortedlist83->n > 0){
                    cell_t* cell185 = sortedlist83->root;
                    cell_t* tmp185  = NULL;
                    while(cell185 != NULL) {
                         tmp185 = cell185->next;
                         free(cell185);
                         cell185 = tmp185;
                    }
                    free(sortedlist83);
               }
               if(sortedlist79 != NULL && sortedlist79->n > 0){
                    cell_t* cell186 = sortedlist79->root;
                    cell_t* tmp186  = NULL;
                    while(cell186 != NULL) {
                         tmp186 = cell186->next;
                         free(cell186);
                         cell186 = tmp186;
                    }
                    free(sortedlist79);
               }
               if(sortedlist78 != NULL && sortedlist78->n > 0){
                    cell_t* cell187 = sortedlist78->root;
                    cell_t* tmp187  = NULL;
                    while(cell187 != NULL) {
                         tmp187 = cell187->next;
                         free(cell187);
                         cell187 = tmp187;
                    }
                    free(sortedlist78);
               }
            }
         }
         else {
            sortedlist_t_param params2;
            params2.size = 6;
            params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
            params2.data[0] = sortedlist0;
            params2.data[1] = sortedlist1;
            params2.data[2] = sortedlist62;
            params2.data[3] = sortedlist69;
            params2.data[4] = sortedlist70;
            params2.data[5] = sortedlist77;
            sortedlist_t* sortedlist84 = func7(&params2, rng(), loopsFactor);
            free(params2.data);
            if(sortedlist84 != NULL && sortedlist84->n > 0){
                 cell_t* cell200 = sortedlist84->root;
                 cell_t* tmp200  = NULL;
                 while(cell200 != NULL) {
                      tmp200 = cell200->next;
                      free(cell200);
                      cell200 = tmp200;
                 }
                 free(sortedlist84);
            }
         }
         sortedlist_t_param params2;
         params2.size = 6;
         params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
         params2.data[0] = sortedlist0;
         params2.data[1] = sortedlist1;
         params2.data[2] = sortedlist62;
         params2.data[3] = sortedlist69;
         params2.data[4] = sortedlist70;
         params2.data[5] = sortedlist77;
         sortedlist_t* sortedlist91 = func4(&params2, rng(), loopsFactor);
         free(params2.data);
         unsigned int loop97 = 0;
         unsigned int loopLimit97 = (rand()%loopsFactor)/3 + 1;
         for(; loop97 < loopLimit97; loop97++) {
            if(sortedlist91 != NULL && sortedlist91->n > 0)
            {
                cell_t* cell245 = sortedlist91->root;
                if(cell245->val == 21)
                {
                    cell245 = cell245->next;
                    sortedlist91->n--;
                }else{
                    while(cell245->next != NULL && cell245->next->val != 21) cell245 = cell245->next;
                    if(cell245->next != NULL)
                    {
                        cell245 = cell245->next->next;
                        sortedlist91->n--;
                    }
                 }
            }
         }
         if(rng() & 1) {
            if(sortedlist62 != NULL && sortedlist62->n > 0){
                 cell_t* cell246 = sortedlist62->root;
                 while(cell246 != NULL && cell246->val != 39) cell246 = cell246->next;
            }
         }
         else {
            sortedlist_t* sortedlist111 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist111->n = 0;
            sortedlist111->root = NULL;
            if(sortedlist111 != NULL && sortedlist111->n > 0){
                 cell_t* cell247 = sortedlist111->root;
                 cell_t* tmp247  = NULL;
                 while(cell247 != NULL) {
                      tmp247 = cell247->next;
                      free(cell247);
                      cell247 = tmp247;
                 }
                 free(sortedlist111);
            }
         }
         sortedlist_t_param params3;
         params3.size = 7;
         params3.data = (sortedlist_t**)malloc(params3.size*sizeof(sortedlist_t*));
         params3.data[0] = sortedlist0;
         params3.data[1] = sortedlist1;
         params3.data[2] = sortedlist62;
         params3.data[3] = sortedlist69;
         params3.data[4] = sortedlist70;
         params3.data[5] = sortedlist77;
         params3.data[6] = sortedlist91;
         sortedlist_t* sortedlist112 = func0(&params3, rng(), loopsFactor);
         free(params3.data);
         if(sortedlist112 != NULL && sortedlist112->n > 0){
              cell_t* cell270 = sortedlist112->root;
              cell_t* tmp270  = NULL;
              while(cell270 != NULL) {
                   tmp270 = cell270->next;
                   free(cell270);
                   cell270 = tmp270;
              }
              free(sortedlist112);
         }
         if(sortedlist91 != NULL && sortedlist91->n > 0){
              cell_t* cell271 = sortedlist91->root;
              cell_t* tmp271  = NULL;
              while(cell271 != NULL) {
                   tmp271 = cell271->next;
                   free(cell271);
                   cell271 = tmp271;
              }
              free(sortedlist91);
         }
         if(sortedlist77 != NULL && sortedlist77->n > 0){
              cell_t* cell272 = sortedlist77->root;
              cell_t* tmp272  = NULL;
              while(cell272 != NULL) {
                   tmp272 = cell272->next;
                   free(cell272);
                   cell272 = tmp272;
              }
              free(sortedlist77);
         }
      }
      if(sortedlist70 != NULL && sortedlist70->n > 0){
           cell_t* cell273 = sortedlist70->root;
           cell_t* tmp273  = NULL;
           while(cell273 != NULL) {
                tmp273 = cell273->next;
                free(cell273);
                cell273 = tmp273;
           }
           free(sortedlist70);
      }
      if(sortedlist69 != NULL && sortedlist69->n > 0){
           cell_t* cell274 = sortedlist69->root;
           cell_t* tmp274  = NULL;
           while(cell274 != NULL) {
                tmp274 = cell274->next;
                free(cell274);
                cell274 = tmp274;
           }
           free(sortedlist69);
      }
      if(sortedlist62 != NULL && sortedlist62->n > 0){
           cell_t* cell275 = sortedlist62->root;
           cell_t* tmp275  = NULL;
           while(cell275 != NULL) {
                tmp275 = cell275->next;
                free(cell275);
                cell275 = tmp275;
           }
           free(sortedlist62);
      }
      if(sortedlist1 != NULL && sortedlist1->n > 0){
           cell_t* cell276 = sortedlist1->root;
           cell_t* tmp276  = NULL;
           while(cell276 != NULL) {
                tmp276 = cell276->next;
                free(cell276);
                cell276 = tmp276;
           }
           free(sortedlist1);
      }
   }
   if(sortedlist0 != NULL && sortedlist0->n > 0){
        cell_t* cell277 = sortedlist0->root;
        cell_t* tmp277  = NULL;
        while(cell277 != NULL) {
             tmp277 = cell277->next;
             free(cell277);
             cell277 = tmp277;
        }
        free(sortedlist0);
   }
   return 0;
}

