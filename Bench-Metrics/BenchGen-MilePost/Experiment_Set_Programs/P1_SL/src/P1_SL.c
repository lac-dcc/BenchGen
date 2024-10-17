#include "P1_SL.h"

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
   if(sortedlist0 != NULL && sortedlist0->n > 0){
        cell_t* cell0 = sortedlist0->root;
        while(cell0 != NULL && cell0->val != 86) cell0 = cell0->next;
   }
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      if(sortedlist0 != NULL && sortedlist0->n > 0) {
           cell_t* cell1 = sortedlist0->root;
           if(sortedlist0->n == 0) {
               sortedlist0->root = (cell_t*)malloc(sizeof(cell_t));
               sortedlist0->root->val  = 15;
               sortedlist0->root->next = NULL;
               sortedlist0->n++;
           } else {
               while(cell1 != NULL)
               {
                   if(cell1->next == NULL && cell1->val < 15) {
                       cell1->next = (cell_t*)malloc(sizeof(cell_t));
                       cell1->next->next = NULL;
                       cell1->next->val  = 15;
                       sortedlist0->n++;
                       break;
                   } else if(15 < cell1->val) {
                       cell_t* tmp1 = cell1->next;
                       cell1->next = (cell_t*)malloc(sizeof(cell_t));
                       cell1->next->next = tmp1;
                       int tmp_val1 = cell1->val;
                       cell1->val = 15;
                       cell1->next->val = tmp_val1;
                       sortedlist0->n++;
                       break;
                   }
                   cell1 = cell1->next;
               }
           }
      }
      sortedlist_t_param params0;
      params0.size = 1;
      params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
      params0.data[0] = sortedlist0;
      sortedlist_t* sortedlist1 = func0(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop43 = 0;
      unsigned int loopLimit43 = (rand()%loopsFactor)/2 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         if(sortedlist0 != NULL && sortedlist0->n > 0)
         {
             cell_t* cell198 = sortedlist0->root;
             if(cell198->val == 99)
             {
                 cell198 = cell198->next;
                 sortedlist0->n--;
             }else{
                 while(cell198->next != NULL && cell198->next->val != 99) cell198 = cell198->next;
                 if(cell198->next != NULL)
                 {
                     cell198 = cell198->next->next;
                     sortedlist0->n--;
                 }
              }
         }
      }
      sortedlist_t* sortedlist108 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist108->n = 0;
      sortedlist108->root = NULL;
      if(rng() & 1) {
         unsigned int loop44 = 0;
         unsigned int loopLimit44 = (rand()%loopsFactor)/2 + 1;
         for(; loop44 < loopLimit44; loop44++) {
            sortedlist_t* sortedlist109 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist109->n = 0;
            sortedlist109->root = NULL;
            if(sortedlist109 != NULL && sortedlist109->n > 0)
            {
                cell_t* cell199 = sortedlist109->root;
                if(cell199->val == 46)
                {
                    cell199 = cell199->next;
                    sortedlist109->n--;
                }else{
                    while(cell199->next != NULL && cell199->next->val != 46) cell199 = cell199->next;
                    if(cell199->next != NULL)
                    {
                        cell199 = cell199->next->next;
                        sortedlist109->n--;
                    }
                 }
            }
            if(sortedlist0 != NULL && sortedlist0->n > 0){
                 cell_t* cell200 = sortedlist0->root;
                 while(cell200 != NULL && cell200->val != 40) cell200 = cell200->next;
            }
            if(sortedlist109 != NULL && sortedlist109->n > 0){
                 cell_t* cell201 = sortedlist109->root;
                 cell_t* tmp201  = NULL;
                 while(cell201 != NULL) {
                      tmp201 = cell201->next;
                      free(cell201);
                      cell201 = tmp201;
                 }
                 free(sortedlist109);
            }
         }
      }
      else {
         sortedlist_t_param params1;
         params1.size = 3;
         params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
         params1.data[0] = sortedlist0;
         params1.data[1] = sortedlist1;
         params1.data[2] = sortedlist108;
         sortedlist_t* sortedlist110 = func9(&params1, rng(), loopsFactor);
         free(params1.data);
         if(sortedlist110 != NULL && sortedlist110->n > 0){
              cell_t* cell212 = sortedlist110->root;
              cell_t* tmp212  = NULL;
              while(cell212 != NULL) {
                   tmp212 = cell212->next;
                   free(cell212);
                   cell212 = tmp212;
              }
              free(sortedlist110);
         }
      }
      sortedlist_t_param params1;
      params1.size = 3;
      params1.data = (sortedlist_t**)malloc(params1.size*sizeof(sortedlist_t*));
      params1.data[0] = sortedlist0;
      params1.data[1] = sortedlist1;
      params1.data[2] = sortedlist108;
      sortedlist_t* sortedlist117 = func6(&params1, rng(), loopsFactor);
      free(params1.data);
      unsigned int loop55 = 0;
      unsigned int loopLimit55 = (rand()%loopsFactor)/2 + 1;
      for(; loop55 < loopLimit55; loop55++) {
         if(sortedlist108 != NULL && sortedlist108->n > 0) {
              cell_t* cell252 = sortedlist108->root;
              if(sortedlist108->n == 0) {
                  sortedlist108->root = (cell_t*)malloc(sizeof(cell_t));
                  sortedlist108->root->val  = 84;
                  sortedlist108->root->next = NULL;
                  sortedlist108->n++;
              } else {
                  while(cell252 != NULL)
                  {
                      if(cell252->next == NULL && cell252->val < 84) {
                          cell252->next = (cell_t*)malloc(sizeof(cell_t));
                          cell252->next->next = NULL;
                          cell252->next->val  = 84;
                          sortedlist108->n++;
                          break;
                      } else if(84 < cell252->val) {
                          cell_t* tmp252 = cell252->next;
                          cell252->next = (cell_t*)malloc(sizeof(cell_t));
                          cell252->next->next = tmp252;
                          int tmp_val252 = cell252->val;
                          cell252->val = 84;
                          cell252->next->val = tmp_val252;
                          sortedlist108->n++;
                          break;
                      }
                      cell252 = cell252->next;
                  }
              }
         }
      }
      sortedlist_t_param params2;
      params2.size = 4;
      params2.data = (sortedlist_t**)malloc(params2.size*sizeof(sortedlist_t*));
      params2.data[0] = sortedlist0;
      params2.data[1] = sortedlist1;
      params2.data[2] = sortedlist108;
      params2.data[3] = sortedlist117;
      sortedlist_t* sortedlist139 = func3(&params2, rng(), loopsFactor);
      free(params2.data);
      sortedlist_t* sortedlist145 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist145->n = 0;
      sortedlist145->root = NULL;
      if(rng() & 1) {
         unsigned int loop57 = 0;
         unsigned int loopLimit57 = (rand()%loopsFactor)/2 + 1;
         for(; loop57 < loopLimit57; loop57++) {
            sortedlist_t* sortedlist146 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
            sortedlist146->n = 0;
            sortedlist146->root = NULL;
            if(sortedlist108 != NULL && sortedlist108->n > 0)
            {
                cell_t* cell262 = sortedlist108->root;
                if(cell262->val == 59)
                {
                    cell262 = cell262->next;
                    sortedlist108->n--;
                }else{
                    while(cell262->next != NULL && cell262->next->val != 59) cell262 = cell262->next;
                    if(cell262->next != NULL)
                    {
                        cell262 = cell262->next->next;
                        sortedlist108->n--;
                    }
                 }
            }
            if(sortedlist145 != NULL && sortedlist145->n > 0){
                 cell_t* cell263 = sortedlist145->root;
                 while(cell263 != NULL && cell263->val != 36) cell263 = cell263->next;
            }
            if(sortedlist146 != NULL && sortedlist146->n > 0){
                 cell_t* cell264 = sortedlist146->root;
                 cell_t* tmp264  = NULL;
                 while(cell264 != NULL) {
                      tmp264 = cell264->next;
                      free(cell264);
                      cell264 = tmp264;
                 }
                 free(sortedlist146);
            }
         }
      }
      else {
         sortedlist_t_param params3;
         params3.size = 6;
         params3.data = (sortedlist_t**)malloc(params3.size*sizeof(sortedlist_t*));
         params3.data[0] = sortedlist0;
         params3.data[1] = sortedlist1;
         params3.data[2] = sortedlist108;
         params3.data[3] = sortedlist117;
         params3.data[4] = sortedlist139;
         params3.data[5] = sortedlist145;
         sortedlist_t* sortedlist147 = func7(&params3, rng(), loopsFactor);
         free(params3.data);
         if(sortedlist147 != NULL && sortedlist147->n > 0){
              cell_t* cell275 = sortedlist147->root;
              cell_t* tmp275  = NULL;
              while(cell275 != NULL) {
                   tmp275 = cell275->next;
                   free(cell275);
                   cell275 = tmp275;
              }
              free(sortedlist147);
         }
      }
      sortedlist_t_param params3;
      params3.size = 6;
      params3.data = (sortedlist_t**)malloc(params3.size*sizeof(sortedlist_t*));
      params3.data[0] = sortedlist0;
      params3.data[1] = sortedlist1;
      params3.data[2] = sortedlist108;
      params3.data[3] = sortedlist117;
      params3.data[4] = sortedlist139;
      params3.data[5] = sortedlist145;
      sortedlist_t* sortedlist154 = func4(&params3, rng(), loopsFactor);
      free(params3.data);
      if(sortedlist0 != NULL && sortedlist0->n > 0){
           cell_t* cell306 = sortedlist0->root;
           while(cell306 != NULL && cell306->val != 98) cell306 = cell306->next;
      }
      if(sortedlist154 != NULL && sortedlist154->n > 0){
           cell_t* cell307 = sortedlist154->root;
           cell_t* tmp307  = NULL;
           while(cell307 != NULL) {
                tmp307 = cell307->next;
                free(cell307);
                cell307 = tmp307;
           }
           free(sortedlist154);
      }
      if(sortedlist145 != NULL && sortedlist145->n > 0){
           cell_t* cell308 = sortedlist145->root;
           cell_t* tmp308  = NULL;
           while(cell308 != NULL) {
                tmp308 = cell308->next;
                free(cell308);
                cell308 = tmp308;
           }
           free(sortedlist145);
      }
      if(sortedlist139 != NULL && sortedlist139->n > 0){
           cell_t* cell309 = sortedlist139->root;
           cell_t* tmp309  = NULL;
           while(cell309 != NULL) {
                tmp309 = cell309->next;
                free(cell309);
                cell309 = tmp309;
           }
           free(sortedlist139);
      }
      if(sortedlist117 != NULL && sortedlist117->n > 0){
           cell_t* cell310 = sortedlist117->root;
           cell_t* tmp310  = NULL;
           while(cell310 != NULL) {
                tmp310 = cell310->next;
                free(cell310);
                cell310 = tmp310;
           }
           free(sortedlist117);
      }
      if(sortedlist108 != NULL && sortedlist108->n > 0){
           cell_t* cell311 = sortedlist108->root;
           cell_t* tmp311  = NULL;
           while(cell311 != NULL) {
                tmp311 = cell311->next;
                free(cell311);
                cell311 = tmp311;
           }
           free(sortedlist108);
      }
      if(sortedlist1 != NULL && sortedlist1->n > 0){
           cell_t* cell312 = sortedlist1->root;
           cell_t* tmp312  = NULL;
           while(cell312 != NULL) {
                tmp312 = cell312->next;
                free(cell312);
                cell312 = tmp312;
           }
           free(sortedlist1);
      }
   }
   if(rng() & 1) {
      if(sortedlist0 != NULL && sortedlist0->n > 0){
           cell_t* cell313 = sortedlist0->root;
           while(cell313 != NULL && cell313->val != 24) cell313 = cell313->next;
      }
   }
   else {
      sortedlist_t* sortedlist171 = (sortedlist_t*)malloc(sizeof(sortedlist_t));
      sortedlist171->n = 0;
      sortedlist171->root = NULL;
      if(sortedlist171 != NULL && sortedlist171->n > 0){
           cell_t* cell314 = sortedlist171->root;
           cell_t* tmp314  = NULL;
           while(cell314 != NULL) {
                tmp314 = cell314->next;
                free(cell314);
                cell314 = tmp314;
           }
           free(sortedlist171);
      }
   }
   sortedlist_t_param params0;
   params0.size = 1;
   params0.data = (sortedlist_t**)malloc(params0.size*sizeof(sortedlist_t*));
   params0.data[0] = sortedlist0;
   sortedlist_t* sortedlist172 = func1(&params0, loopsFactor);
   free(params0.data);
   if(sortedlist172 != NULL && sortedlist172->n > 0){
        cell_t* cell316 = sortedlist172->root;
        cell_t* tmp316  = NULL;
        while(cell316 != NULL) {
             tmp316 = cell316->next;
             free(cell316);
             cell316 = tmp316;
        }
        free(sortedlist172);
   }
   if(sortedlist0 != NULL && sortedlist0->n > 0){
        cell_t* cell317 = sortedlist0->root;
        cell_t* tmp317  = NULL;
        while(cell317 != NULL) {
             tmp317 = cell317->next;
             free(cell317);
             cell317 = tmp317;
        }
        free(sortedlist0);
   }
   return 0;
}

