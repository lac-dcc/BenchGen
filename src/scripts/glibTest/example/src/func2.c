#include "tmpaeyzc_i_.h" 
ghash_t* func2(ghash_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (rand()%loopsFactor)/4 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      ghash_t_param params0;
      params0.size = 0;
      params0.data = (ghash_t**)malloc(params0.size*sizeof(ghash_t*));
      ghash_t* ghash4 = func3(&params0, loopsFactor);
      DEBUG_RETURN(ghash4->id);
      free(params0.data);
      ghash4->refC--;
      if(ghash4->refC == 0){
      	g_hash_table_remove_all(ghash4->hash);
        DEBUG_FREE(ghash4->id);
      	free(ghash4);
      }
   }
   ghash_t* ghash6;
   if (pCounter > 0) {
      ghash6 = vars->data[--pCounter];
      ghash6->refC++;
      DEBUG_COPY(ghash6->id);
   } else {
      ghash6 = (ghash_t*)malloc(sizeof(ghash_t));
      ghash6->refC = 1;
      ghash6->id = 6;
      ghash6->hash = g_hash_table_new(g_direct_hash, g_direct_equal);
      DEBUG_NEW(ghash6->id);
   }
   return ghash6;
}

