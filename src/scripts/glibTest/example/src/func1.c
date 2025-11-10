#include "tmpaeyzc_i_.h" 
ghash_t* func1(ghash_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop2 = 0;
   unsigned int loopLimit2 = (rand()%loopsFactor)/3 + 1;
   for(; loop2 < loopLimit2; loop2++) {
      ghash_t_param params0;
      params0.size = 0;
      params0.data = (ghash_t**)malloc(params0.size*sizeof(ghash_t*));
      ghash_t* ghash3 = func2(&params0, loopsFactor);
      DEBUG_RETURN(ghash3->id);
      free(params0.data);
      g_hash_table_remove(ghash3->hash,GINT_TO_POINTER(rng()));
      COUNT_REMOVE();
      g_hash_table_contains(ghash3->hash,GINT_TO_POINTER(rng()));
      COUNT_CONTAINS();
      g_hash_table_contains(ghash3->hash,GINT_TO_POINTER(rng()));
      COUNT_CONTAINS();
      g_hash_table_contains(ghash3->hash,GINT_TO_POINTER(rng()));
      COUNT_CONTAINS();
      g_hash_table_insert(ghash3->hash,GINT_TO_POINTER(rng()),0);
      COUNT_INSERT();
      g_hash_table_remove(ghash3->hash,GINT_TO_POINTER(rng()));
      COUNT_REMOVE();
      ghash3->refC--;
      if(ghash3->refC == 0){
      	g_hash_table_remove_all(ghash3->hash);
        DEBUG_FREE(ghash3->id);
      	free(ghash3);
      }
   }
   ghash_t* ghash7;
   if (pCounter > 0) {
      ghash7 = vars->data[--pCounter];
      ghash7->refC++;
      DEBUG_COPY(ghash7->id);
   } else {
      ghash7 = (ghash_t*)malloc(sizeof(ghash_t));
      ghash7->refC = 1;
      ghash7->id = 7;
      ghash7->hash = g_hash_table_new(g_direct_hash, g_direct_equal);
      DEBUG_NEW(ghash7->id);
   }
   return ghash7;
}

