#include "Mybench.h"

int main(int argc, char** argv) {
int loopsFactor = 100;
   if (argc < 2 || argc > 3) {
      printf("Usage: %s <paths seed> <loops factor (optional)>\n", argv[0]);
      return 1;
   }
   if (argc == 3) {
      loopsFactor = atoi(argv[2]);
   }
   srand(atol(argv[1]));
   Array array0 = func0(loopsFactor);
   if (array0.size > 0) {
      free(array0.data);
      array0.size = 0;
   }
   return 0;
}

