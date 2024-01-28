#include <stdlib.h>
#include <unistd.h>

// Quick example program using the replaced malloc.
int main(void) {
	int* ptr = (int*) malloc(sizeof(int));
	sleep(1);
	free(ptr);
	return 0;
}

