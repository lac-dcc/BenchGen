#include "ex8_4.h" 
unsigned long rng() {
   unsigned long n = rand();
   return (n << 32) | rand();
}

