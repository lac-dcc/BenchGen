#include "tmpaeyzc_i_.h" 
unsigned long get_path() {
   const char* path = getenv("BENCH_PATH");
   if(path != NULL) { 
      return atoi(path);
   }else {
      unsigned long n = rand();
      return (n << 32) | rand();
   }
}

