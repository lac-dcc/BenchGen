#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void func0();

int main() {
   if(1 < 2) {
      for(int i0 = 0; i0 < 10; i0++) {
         func0();
      }
   }
else {
      printf("INSERTED!\n");
      printf("INSERTED!\n");
      printf("REMOVE!\n");
      printf("REMOVE!\n");
   }
   return 0;
}

void func0() {
   printf("INSERTED!\n");
   printf("REMOVE!\n");
}

