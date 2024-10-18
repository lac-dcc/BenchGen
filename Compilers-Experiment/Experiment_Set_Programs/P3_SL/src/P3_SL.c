#include "P3_SL.h"

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
      unsigned int loop1 = 0;
      unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         sortedlist_t* sortedlist0 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist0->n = 0;
         sortedlist0->root = NULL;
         if(sortedlist0 != NULL && sortedlist0->n > 0) {
              cell_t* cell0 = sortedlist0->root;
              if(sortedlist0->n == 0) {
                  sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist0->root->val  = 86;
                  sortedlist0->root->next = NULL;
                  sortedlist0->n++;
              } else {
                  while(cell0 != NULL)
                  {
                      if(cell0->next == NULL && cell0->val < 86) {
                          cell0->next = (cell_t*)malloc(sizeof(cell_t));
                          cell0->next->next = NULL;
                          cell0->next->val  = 86;
                          sortedlist0->n++;
                          break;
                      } else if(86 < cell0->val) {
                          cell_t* tmp0 = cell0->next;
                          cell0->next = (cell_t*)malloc(sizeof(cell_t));
                          cell0->next->next = tmp0;
                          int tmp_val0 = cell0->val;
                          cell0->val = 86;
                          cell0->next->val = tmp_val0;
                          sortedlist0->n++;
                          break;
                      }
                      cell0 = cell0->next;
                  }
              }
         }
         sortedlist_t* sortedlist1 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist1->n = 0;
         sortedlist1->root = NULL;
         if(rng() & 1) {
            unsigned int loop2 = 0;
            unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
            for(; loop2 < loopLimit2; loop2++) {
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
                  unsigned int loop3 = 0;
                  unsigned int loopLimit3 = (rand()%loopsFactor)/4 + 1;
                  for(; loop3 < loopLimit3; loop3++) {
                     sortedlist_t* sortedlist4 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
                     sortedlist4->n = 0;
                     sortedlist4->root = NULL;
                     if(sortedlist3 != NULL && sortedlist3->n > 0){
                          cell_t* cell2 = sortedlist3->root;
                          while(cell2 != NULL && cell2->val != 35) cell2 = cell2->next;
                     }
                     unsigned int loop4 = 0;
                     unsigned int loopLimit4 = (rand()%loopsFactor)/5 + 1;
                     for(; loop4 < loopLimit4; loop4++) {
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
                  sortedlist_t* sortedlist5 = func7(&params0, loopsFactor);
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
               sortedlist_t_param params0;
               params0.size = 4;
               params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
               params0.data[0] = sortedlist0;
               params0.data[1] = sortedlist1;
               params0.data[2] = sortedlist2;
               params0.data[3] = sortedlist3;
               sortedlist_t* sortedlist7 = func4(&params0, rng(), loopsFactor);
               free(params0.data);
               unsigned int loop16 = 0;
               unsigned int loopLimit16 = (rand()%loopsFactor)/4 + 1;
               for(; loop16 < loopLimit16; loop16++) {
                  if(sortedlist2 != NULL && sortedlist2->n > 0)
                  {
                      cell_t* cell22 = sortedlist2->root;
                      if(cell22->val == 93)
                      {
                          cell22 = cell22->next;
                          sortedlist2->n--;
                      }else{
                          while(cell22->next != NULL && cell22->next->val != 93) cell22 = cell22->next;
                          if(cell22->next != NULL)
                          {
                              cell22 = cell22->next->next;
                              sortedlist2->n--;
                          }
                       }
                  }
               }
               unsigned int loop17 = 0;
               unsigned int loopLimit17 = (rand()%loopsFactor)/4 + 1;
               for(; loop17 < loopLimit17; loop17++) {
                  if(sortedlist1 != NULL && sortedlist1->n > 0) {
                       cell_t* cell23 = sortedlist1->root;
                       if(sortedlist1->n == 0) {
                           sortedlist1->root = (cell_t*)malloc(sizeof(cell_t));
                           sortedlist1->root->val  = 11;
                           sortedlist1->root->next = NULL;
                           sortedlist1->n++;
                       } else {
                           while(cell23 != NULL)
                           {
                               if(cell23->next == NULL && cell23->val < 11) {
                                   cell23->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell23->next->next = NULL;
                                   cell23->next->val  = 11;
                                   sortedlist1->n++;
                                   break;
                               } else if(11 < cell23->val) {
                                   cell_t* tmp23 = cell23->next;
                                   cell23->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell23->next->next = tmp23;
                                   int tmp_val23 = cell23->val;
                                   cell23->val = 11;
                                   cell23->next->val = tmp_val23;
                                   sortedlist1->n++;
                                   break;
                               }
                               cell23 = cell23->next;
                           }
                       }
                  }
               }
               if(sortedlist7 != NULL && sortedlist7->n > 0){
                    cell_t* cell24 = sortedlist7->root;
                    cell_t* tmp24  = NULL;
                    while(cell24 != NULL) {
                         tmp24 = cell24->next;
                         free(cell24);
                         cell24 = tmp24;
                    }
                    free(sortedlist7);
               }
               if(sortedlist3 != NULL && sortedlist3->n > 0){
                    cell_t* cell25 = sortedlist3->root;
                    cell_t* tmp25  = NULL;
                    while(cell25 != NULL) {
                         tmp25 = cell25->next;
                         free(cell25);
                         cell25 = tmp25;
                    }
                    free(sortedlist3);
               }
               if(sortedlist2 != NULL && sortedlist2->n > 0){
                    cell_t* cell26 = sortedlist2->root;
                    cell_t* tmp26  = NULL;
                    while(cell26 != NULL) {
                         tmp26 = cell26->next;
                         free(cell26);
                         cell26 = tmp26;
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
            sortedlist_t* sortedlist14 = func1(&params0, rng(), loopsFactor);
            free(params0.data);
            if(sortedlist14 != NULL && sortedlist14->n > 0){
                 cell_t* cell54 = sortedlist14->root;
                 cell_t* tmp54  = NULL;
                 while(cell54 != NULL) {
                      tmp54 = cell54->next;
                      free(cell54);
                      cell54 = tmp54;
                 }
                 free(sortedlist14);
            }
         }
         if(sortedlist0 != NULL && sortedlist0->n > 0) {
              cell_t* cell55 = sortedlist0->root;
              if(sortedlist0->n == 0) {
                  sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist0->root->val  = 45;
                  sortedlist0->root->next = NULL;
                  sortedlist0->n++;
              } else {
                  while(cell55 != NULL)
                  {
                      if(cell55->next == NULL && cell55->val < 45) {
                          cell55->next = (cell_t*)malloc(sizeof(cell_t));
                          cell55->next->next = NULL;
                          cell55->next->val  = 45;
                          sortedlist0->n++;
                          break;
                      } else if(45 < cell55->val) {
                          cell_t* tmp55 = cell55->next;
                          cell55->next = (cell_t*)malloc(sizeof(cell_t));
                          cell55->next->next = tmp55;
                          int tmp_val55 = cell55->val;
                          cell55->val = 45;
                          cell55->next->val = tmp_val55;
                          sortedlist0->n++;
                          break;
                      }
                      cell55 = cell55->next;
                  }
              }
         }
         if(rng() & 1) {
            if(sortedlist0 != NULL && sortedlist0->n > 0){
                 cell_t* cell56 = sortedlist0->root;
                 while(cell56 != NULL && cell56->val != 67) cell56 = cell56->next;
            }
         }
         else {
            if(rng() & 1) {
               if(sortedlist0 != NULL && sortedlist0->n > 0){
                    cell_t* cell57 = sortedlist0->root;
                    while(cell57 != NULL && cell57->val != 64) cell57 = cell57->next;
               }
            }
            else {
               if(sortedlist1 != NULL && sortedlist1->n > 0) {
                    cell_t* cell58 = sortedlist1->root;
                    if(sortedlist1->n == 0) {
                        sortedlist1->root = (cell_t*)malloc(sizeof(cell_t));
                        sortedlist1->root->val  = 50;
                        sortedlist1->root->next = NULL;
                        sortedlist1->n++;
                    } else {
                        while(cell58 != NULL)
                        {
                            if(cell58->next == NULL && cell58->val < 50) {
                                cell58->next = (cell_t*)malloc(sizeof(cell_t));
                                cell58->next->next = NULL;
                                cell58->next->val  = 50;
                                sortedlist1->n++;
                                break;
                            } else if(50 < cell58->val) {
                                cell_t* tmp58 = cell58->next;
                                cell58->next = (cell_t*)malloc(sizeof(cell_t));
                                cell58->next->next = tmp58;
                                int tmp_val58 = cell58->val;
                                cell58->val = 50;
                                cell58->next->val = tmp_val58;
                                sortedlist1->n++;
                                break;
                            }
                            cell58 = cell58->next;
                        }
                    }
               }
            }
         }
         if(sortedlist1 != NULL && sortedlist1->n > 0)
         {
             cell_t* cell59 = sortedlist1->root;
             if(cell59->val == 8)
             {
                 cell59 = cell59->next;
                 sortedlist1->n--;
             }else{
                 while(cell59->next != NULL && cell59->next->val != 8) cell59 = cell59->next;
                 if(cell59->next != NULL)
                 {
                     cell59 = cell59->next->next;
                     sortedlist1->n--;
                 }
              }
         }
         unsigned int loop32 = 0;
         unsigned int loopLimit32 = (rand()%loopsFactor)/3 + 1;
         for(; loop32 < loopLimit32; loop32++) {
            if(sortedlist0 != NULL && sortedlist0->n > 0)
            {
                cell_t* cell60 = sortedlist0->root;
                if(cell60->val == 78)
                {
                    cell60 = cell60->next;
                    sortedlist0->n--;
                }else{
                    while(cell60->next != NULL && cell60->next->val != 78) cell60 = cell60->next;
                    if(cell60->next != NULL)
                    {
                        cell60 = cell60->next->next;
                        sortedlist0->n--;
                    }
                 }
            }
         }
         sortedlist_t* sortedlist30 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist30->n = 0;
         sortedlist30->root = NULL;
         if(rng() & 1) {
            unsigned int loop33 = 0;
            unsigned int loopLimit33 = (rand()%loopsFactor)/3 + 1;
            for(; loop33 < loopLimit33; loop33++) {
               sortedlist_t* sortedlist31 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
               sortedlist31->n = 0;
               sortedlist31->root = NULL;
               if(sortedlist0 != NULL && sortedlist0->n > 0){
                    cell_t* cell61 = sortedlist0->root;
                    while(cell61 != NULL && cell61->val != 84) cell61 = cell61->next;
               }
               unsigned int loop34 = 0;
               unsigned int loopLimit34 = (rand()%loopsFactor)/4 + 1;
               for(; loop34 < loopLimit34; loop34++) {
                  if(sortedlist31 != NULL && sortedlist31->n > 0) {
                       cell_t* cell62 = sortedlist31->root;
                       if(sortedlist31->n == 0) {
                           sortedlist31->root = (cell_t*)malloc(sizeof(cell_t));
                           sortedlist31->root->val  = 51;
                           sortedlist31->root->next = NULL;
                           sortedlist31->n++;
                       } else {
                           while(cell62 != NULL)
                           {
                               if(cell62->next == NULL && cell62->val < 51) {
                                   cell62->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell62->next->next = NULL;
                                   cell62->next->val  = 51;
                                   sortedlist31->n++;
                                   break;
                               } else if(51 < cell62->val) {
                                   cell_t* tmp62 = cell62->next;
                                   cell62->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell62->next->next = tmp62;
                                   int tmp_val62 = cell62->val;
                                   cell62->val = 51;
                                   cell62->next->val = tmp_val62;
                                   sortedlist31->n++;
                                   break;
                               }
                               cell62 = cell62->next;
                           }
                       }
                  }
               }
               if(sortedlist31 != NULL && sortedlist31->n > 0){
                    cell_t* cell63 = sortedlist31->root;
                    cell_t* tmp63  = NULL;
                    while(cell63 != NULL) {
                         tmp63 = cell63->next;
                         free(cell63);
                         cell63 = tmp63;
                    }
                    free(sortedlist31);
               }
            }
         }
         else {
            sortedlist_t_param params0;
            params0.size = 3;
            params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
            params0.data[0] = sortedlist0;
            params0.data[1] = sortedlist1;
            params0.data[2] = sortedlist30;
            sortedlist_t* sortedlist32 = func7(&params0, loopsFactor);
            free(params0.data);
            if(sortedlist32 != NULL && sortedlist32->n > 0){
                 cell_t* cell64 = sortedlist32->root;
                 cell_t* tmp64  = NULL;
                 while(cell64 != NULL) {
                      tmp64 = cell64->next;
                      free(cell64);
                      cell64 = tmp64;
                 }
                 free(sortedlist32);
            }
         }
         sortedlist_t_param params0;
         params0.size = 3;
         params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
         params0.data[0] = sortedlist0;
         params0.data[1] = sortedlist1;
         params0.data[2] = sortedlist30;
         sortedlist_t* sortedlist33 = func4(&params0, rng(), loopsFactor);
         free(params0.data);
         unsigned int loop35 = 0;
         unsigned int loopLimit35 = (rand()%loopsFactor)/3 + 1;
         for(; loop35 < loopLimit35; loop35++) {
            if(sortedlist30 != NULL && sortedlist30->n > 0)
            {
                cell_t* cell65 = sortedlist30->root;
                if(cell65->val == 99)
                {
                    cell65 = cell65->next;
                    sortedlist30->n--;
                }else{
                    while(cell65->next != NULL && cell65->next->val != 99) cell65 = cell65->next;
                    if(cell65->next != NULL)
                    {
                        cell65 = cell65->next->next;
                        sortedlist30->n--;
                    }
                 }
            }
         }
         unsigned int loop36 = 0;
         unsigned int loopLimit36 = (rand()%loopsFactor)/3 + 1;
         for(; loop36 < loopLimit36; loop36++) {
            if(sortedlist0 != NULL && sortedlist0->n > 0) {
                 cell_t* cell66 = sortedlist0->root;
                 if(sortedlist0->n == 0) {
                     sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist0->root->val  = 60;
                     sortedlist0->root->next = NULL;
                     sortedlist0->n++;
                 } else {
                     while(cell66 != NULL)
                     {
                         if(cell66->next == NULL && cell66->val < 60) {
                             cell66->next = (cell_t*)malloc(sizeof(cell_t));
                             cell66->next->next = NULL;
                             cell66->next->val  = 60;
                             sortedlist0->n++;
                             break;
                         } else if(60 < cell66->val) {
                             cell_t* tmp66 = cell66->next;
                             cell66->next = (cell_t*)malloc(sizeof(cell_t));
                             cell66->next->next = tmp66;
                             int tmp_val66 = cell66->val;
                             cell66->val = 60;
                             cell66->next->val = tmp_val66;
                             sortedlist0->n++;
                             break;
                         }
                         cell66 = cell66->next;
                     }
                 }
            }
         }
         sortedlist_t* sortedlist34 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
         sortedlist34->n = 0;
         sortedlist34->root = NULL;
         if(rng() & 1) {
            unsigned int loop37 = 0;
            unsigned int loopLimit37 = (rand()%loopsFactor)/3 + 1;
            for(; loop37 < loopLimit37; loop37++) {
               sortedlist_t* sortedlist35 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
               sortedlist35->n = 0;
               sortedlist35->root = NULL;
               if(sortedlist30 != NULL && sortedlist30->n > 0){
                    cell_t* cell67 = sortedlist30->root;
                    while(cell67 != NULL && cell67->val != 68) cell67 = cell67->next;
               }
               sortedlist_t_param params1;
               params1.size = 6;
               params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
               params1.data[0] = sortedlist0;
               params1.data[1] = sortedlist1;
               params1.data[2] = sortedlist30;
               params1.data[3] = sortedlist33;
               params1.data[4] = sortedlist34;
               params1.data[5] = sortedlist35;
               sortedlist_t* sortedlist36 = func9(&params1, rng(), loopsFactor);
               free(params1.data);
               unsigned int loop38 = 0;
               unsigned int loopLimit38 = (rand()%loopsFactor)/4 + 1;
               for(; loop38 < loopLimit38; loop38++) {
                  if(sortedlist0 != NULL && sortedlist0->n > 0)
                  {
                      cell_t* cell68 = sortedlist0->root;
                      if(cell68->val == 12)
                      {
                          cell68 = cell68->next;
                          sortedlist0->n--;
                      }else{
                          while(cell68->next != NULL && cell68->next->val != 12) cell68 = cell68->next;
                          if(cell68->next != NULL)
                          {
                              cell68 = cell68->next->next;
                              sortedlist0->n--;
                          }
                       }
                  }
               }
               unsigned int loop39 = 0;
               unsigned int loopLimit39 = (rand()%loopsFactor)/4 + 1;
               for(; loop39 < loopLimit39; loop39++) {
                  if(sortedlist34 != NULL && sortedlist34->n > 0) {
                       cell_t* cell69 = sortedlist34->root;
                       if(sortedlist34->n == 0) {
                           sortedlist34->root = (cell_t*)malloc(sizeof(cell_t));
                           sortedlist34->root->val  = 86;
                           sortedlist34->root->next = NULL;
                           sortedlist34->n++;
                       } else {
                           while(cell69 != NULL)
                           {
                               if(cell69->next == NULL && cell69->val < 86) {
                                   cell69->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell69->next->next = NULL;
                                   cell69->next->val  = 86;
                                   sortedlist34->n++;
                                   break;
                               } else if(86 < cell69->val) {
                                   cell_t* tmp69 = cell69->next;
                                   cell69->next = (cell_t*)malloc(sizeof(cell_t));
                                   cell69->next->next = tmp69;
                                   int tmp_val69 = cell69->val;
                                   cell69->val = 86;
                                   cell69->next->val = tmp_val69;
                                   sortedlist34->n++;
                                   break;
                               }
                               cell69 = cell69->next;
                           }
                       }
                  }
               }
               if(sortedlist36 != NULL && sortedlist36->n > 0){
                    cell_t* cell70 = sortedlist36->root;
                    cell_t* tmp70  = NULL;
                    while(cell70 != NULL) {
                         tmp70 = cell70->next;
                         free(cell70);
                         cell70 = tmp70;
                    }
                    free(sortedlist36);
               }
               if(sortedlist35 != NULL && sortedlist35->n > 0){
                    cell_t* cell71 = sortedlist35->root;
                    cell_t* tmp71  = NULL;
                    while(cell71 != NULL) {
                         tmp71 = cell71->next;
                         free(cell71);
                         cell71 = tmp71;
                    }
                    free(sortedlist35);
               }
            }
         }
         else {
            sortedlist_t_param params1;
            params1.size = 5;
            params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
            params1.data[0] = sortedlist0;
            params1.data[1] = sortedlist1;
            params1.data[2] = sortedlist30;
            params1.data[3] = sortedlist33;
            params1.data[4] = sortedlist34;
            sortedlist_t* sortedlist37 = func6(&params1, loopsFactor);
            free(params1.data);
            if(sortedlist37 != NULL && sortedlist37->n > 0){
                 cell_t* cell76 = sortedlist37->root;
                 cell_t* tmp76  = NULL;
                 while(cell76 != NULL) {
                      tmp76 = cell76->next;
                      free(cell76);
                      cell76 = tmp76;
                 }
                 free(sortedlist37);
            }
         }
         sortedlist_t_param params1;
         params1.size = 5;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist0;
         params1.data[1] = sortedlist1;
         params1.data[2] = sortedlist30;
         params1.data[3] = sortedlist33;
         params1.data[4] = sortedlist34;
         sortedlist_t* sortedlist40 = func2(&params1, rng(), loopsFactor);
         free(params1.data);
         sortedlist_t_param params2;
         params2.size = 6;
         params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
         params2.data[0] = sortedlist0;
         params2.data[1] = sortedlist1;
         params2.data[2] = sortedlist30;
         params2.data[3] = sortedlist33;
         params2.data[4] = sortedlist34;
         params2.data[5] = sortedlist40;
         sortedlist_t* sortedlist55 = func0(&params2, rng(), loopsFactor);
         free(params2.data);
         unsigned int loop80 = 0;
         unsigned int loopLimit80 = (rand()%loopsFactor)/3 + 1;
         for(; loop80 < loopLimit80; loop80++) {
            if(sortedlist30 != NULL && sortedlist30->n > 0) {
                 cell_t* cell152 = sortedlist30->root;
                 if(sortedlist30->n == 0) {
                     sortedlist30->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist30->root->val  = 7;
                     sortedlist30->root->next = NULL;
                     sortedlist30->n++;
                 } else {
                     while(cell152 != NULL)
                     {
                         if(cell152->next == NULL && cell152->val < 7) {
                             cell152->next = (cell_t*)malloc(sizeof(cell_t));
                             cell152->next->next = NULL;
                             cell152->next->val  = 7;
                             sortedlist30->n++;
                             break;
                         } else if(7 < cell152->val) {
                             cell_t* tmp152 = cell152->next;
                             cell152->next = (cell_t*)malloc(sizeof(cell_t));
                             cell152->next->next = tmp152;
                             int tmp_val152 = cell152->val;
                             cell152->val = 7;
                             cell152->next->val = tmp_val152;
                             sortedlist30->n++;
                             break;
                         }
                         cell152 = cell152->next;
                     }
                 }
            }
            if(sortedlist40 != NULL && sortedlist40->n > 0){
                 cell_t* cell153 = sortedlist40->root;
                 while(cell153 != NULL && cell153->val != 21) cell153 = cell153->next;
            }
            if(sortedlist0 != NULL && sortedlist0->n > 0){
                 cell_t* cell154 = sortedlist0->root;
                 while(cell154 != NULL && cell154->val != 95) cell154 = cell154->next;
            }
            if(sortedlist0 != NULL && sortedlist0->n > 0) {
                 cell_t* cell155 = sortedlist0->root;
                 if(sortedlist0->n == 0) {
                     sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
                     sortedlist0->root->val  = 37;
                     sortedlist0->root->next = NULL;
                     sortedlist0->n++;
                 } else {
                     while(cell155 != NULL)
                     {
                         if(cell155->next == NULL && cell155->val < 37) {
                             cell155->next = (cell_t*)malloc(sizeof(cell_t));
                             cell155->next->next = NULL;
                             cell155->next->val  = 37;
                             sortedlist0->n++;
                             break;
                         } else if(37 < cell155->val) {
                             cell_t* tmp155 = cell155->next;
                             cell155->next = (cell_t*)malloc(sizeof(cell_t));
                             cell155->next->next = tmp155;
                             int tmp_val155 = cell155->val;
                             cell155->val = 37;
                             cell155->next->val = tmp_val155;
                             sortedlist0->n++;
                             break;
                         }
                         cell155 = cell155->next;
                     }
                 }
            }
         }
         if(sortedlist55 != NULL && sortedlist55->n > 0){
              cell_t* cell156 = sortedlist55->root;
              cell_t* tmp156  = NULL;
              while(cell156 != NULL) {
                   tmp156 = cell156->next;
                   free(cell156);
                   cell156 = tmp156;
              }
              free(sortedlist55);
         }
         if(sortedlist40 != NULL && sortedlist40->n > 0){
              cell_t* cell157 = sortedlist40->root;
              cell_t* tmp157  = NULL;
              while(cell157 != NULL) {
                   tmp157 = cell157->next;
                   free(cell157);
                   cell157 = tmp157;
              }
              free(sortedlist40);
         }
         if(sortedlist34 != NULL && sortedlist34->n > 0){
              cell_t* cell158 = sortedlist34->root;
              cell_t* tmp158  = NULL;
              while(cell158 != NULL) {
                   tmp158 = cell158->next;
                   free(cell158);
                   cell158 = tmp158;
              }
              free(sortedlist34);
         }
         if(sortedlist33 != NULL && sortedlist33->n > 0){
              cell_t* cell159 = sortedlist33->root;
              cell_t* tmp159  = NULL;
              while(cell159 != NULL) {
                   tmp159 = cell159->next;
                   free(cell159);
                   cell159 = tmp159;
              }
              free(sortedlist33);
         }
         if(sortedlist30 != NULL && sortedlist30->n > 0){
              cell_t* cell160 = sortedlist30->root;
              cell_t* tmp160  = NULL;
              while(cell160 != NULL) {
                   tmp160 = cell160->next;
                   free(cell160);
                   cell160 = tmp160;
              }
              free(sortedlist30);
         }
         if(sortedlist1 != NULL && sortedlist1->n > 0){
              cell_t* cell161 = sortedlist1->root;
              cell_t* tmp161  = NULL;
              while(cell161 != NULL) {
                   tmp161 = cell161->next;
                   free(cell161);
                   cell161 = tmp161;
              }
              free(sortedlist1);
         }
         if(sortedlist0 != NULL && sortedlist0->n > 0){
              cell_t* cell162 = sortedlist0->root;
              cell_t* tmp162  = NULL;
              while(cell162 != NULL) {
                   tmp162 = cell162->next;
                   free(cell162);
                   cell162 = tmp162;
              }
              free(sortedlist0);
         }
      }
   }
   return 0;
}

