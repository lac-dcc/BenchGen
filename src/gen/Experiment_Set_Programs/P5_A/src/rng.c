#include "P5_A.h" 
unsigned long rng() {
   unsigned long n = rand();
   return (n << 32) | rand();
}

