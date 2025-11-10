#include "tmpaeyzc_i_.h" 
ghash_t* func3(ghash_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   ghash_t* ghash5;
   if (pCounter > 0) {
      ghash5 = vars->data[--pCounter];
      ghash5->refC++;
      DEBUG_COPY(ghash5->id);
   } else {
      ghash5 = (ghash_t*)malloc(sizeof(ghash_t));
      ghash5->refC = 1;
      ghash5->id = 5;
      ghash5->hash = g_hash_table_new(g_direct_hash, g_direct_equal);
      DEBUG_NEW(ghash5->id);
   }
   return ghash5;
}

