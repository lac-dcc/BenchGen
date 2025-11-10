#include "tmpaeyzc_i_.h" 
ghash_t* func0(ghash_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (rand()%loopsFactor)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      ghash_t_param params0;
      params0.size = 0;
      params0.data = (ghash_t**)malloc(params0.size*sizeof(ghash_t*));
      ghash_t* ghash2 = func1(&params0, loopsFactor);
      DEBUG_RETURN(ghash2->id);
      free(params0.data);
      unsigned int loop4 = 0;
      unsigned int loopLimit4 = (rand()%loopsFactor)/3 + 1;
      for(; loop4 < loopLimit4; loop4++) {
         ghash_t_param params1;
         params1.size = 1;
         params1.data = (ghash_t**)malloc(params1.size*sizeof(ghash_t*));
         params1.data[0] = ghash2;
         ghash_t* ghash8 = func3(&params1, loopsFactor);
         DEBUG_RETURN(ghash8->id);
         free(params1.data);
         ghash8->refC--;
         if(ghash8->refC == 0){
         	g_hash_table_remove_all(ghash8->hash);
           DEBUG_FREE(ghash8->id);
         	free(ghash8);
         }
      }
      g_hash_table_remove(ghash2->hash,GINT_TO_POINTER(rng()));
      COUNT_REMOVE();
      g_hash_table_contains(ghash2->hash,GINT_TO_POINTER(rng()));
      COUNT_CONTAINS();
      g_hash_table_contains(ghash2->hash,GINT_TO_POINTER(rng()));
      COUNT_CONTAINS();
      g_hash_table_contains(ghash2->hash,GINT_TO_POINTER(rng()));
      COUNT_CONTAINS();
      g_hash_table_insert(ghash2->hash,GINT_TO_POINTER(rng()),0);
      COUNT_INSERT();
      g_hash_table_remove(ghash2->hash,GINT_TO_POINTER(rng()));
      COUNT_REMOVE();
      unsigned int loop5 = 0;
      unsigned int loopLimit5 = (rand()%loopsFactor)/3 + 1;
      for(; loop5 < loopLimit5; loop5++) {
         ghash_t_param params1;
         params1.size = 1;
         params1.data = (ghash_t**)malloc(params1.size*sizeof(ghash_t*));
         params1.data[0] = ghash2;
         ghash_t* ghash9 = func3(&params1, loopsFactor);
         DEBUG_RETURN(ghash9->id);
         free(params1.data);
         ghash9->refC--;
         if(ghash9->refC == 0){
         	g_hash_table_remove_all(ghash9->hash);
           DEBUG_FREE(ghash9->id);
         	free(ghash9);
         }
      }
      ghash2->refC--;
      if(ghash2->refC == 0){
      	g_hash_table_remove_all(ghash2->hash);
        DEBUG_FREE(ghash2->id);
      	free(ghash2);
      }
   }
   ghash_t* ghash10;
   if (pCounter > 0) {
      ghash10 = vars->data[--pCounter];
      ghash10->refC++;
      DEBUG_COPY(ghash10->id);
   } else {
      ghash10 = (ghash_t*)malloc(sizeof(ghash_t));
      ghash10->refC = 1;
      ghash10->id = 10;
      ghash10->hash = g_hash_table_new(g_direct_hash, g_direct_equal);
      DEBUG_NEW(ghash10->id);
   }
   return ghash10;
}

