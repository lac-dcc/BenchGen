#include "P5_SL.h" 
unsigned long rng() {
   unsigned long n = rand();
   return (n << 32) | rand();
}

