#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void func0();

int main() {
   if(1 < 2) {
      for(int i1 = 0; i1 < 10; i1++) {
         func0();
      }
   }
   else {
      printf("INSERT!\n");
      printf("INSERT!\n");
      printf("INSERT!\n");
      printf("INSERT!\n");
      printf("REMOVE!\n");
      printf("REMOVE!\n");
      printf("REMOVE!\n");
      printf("REMOVE!\n");
   }
   return 0;
}

void func0() {
   printf("INSERT!\n");
   printf("INSERT!\n");
   printf("INSERT!\n");
   printf("REMOVE!\n");
   printf("REMOVE!\n");
   printf("REMOVE!\n");
   printf("INSERT!\n");
   printf("INSERT!\n");
   printf("REMOVE!\n");
   printf("REMOVE!\n");
   printf("INSERT!\n");
   printf("REMOVE!\n");
}

