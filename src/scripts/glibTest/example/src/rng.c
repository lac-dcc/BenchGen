#include "tmpaeyzc_i_.h" 
int rng() {
   static int seed = 42;
   seed = (885*seed+271)&((1<<10)-1);
   return seed;
}

