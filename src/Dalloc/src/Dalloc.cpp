// Used for printf()
#include <stdio.h>
// Used for malloc_usable_size()
#include <malloc.h>
#include "Dalloc.h"

void *__wrap_malloc(size_t size) {
	void *ptr = __real_malloc(size);
	debug_print(ptr, size, MALLOC);
	return ptr;
}

void __wrap_free(void* ptr) {
	//malloc_usable_size shows the actual size allocated, not the size requested by the user. This means that the value may differ from the malloc.
	size_t size = malloc_usable_size(ptr);
	__real_free(ptr);
	debug_print(ptr, size, FREE);
	return;
}

void debug_print(void* ptr, size_t size, operation op){
	char o;
	switch (op){
		case MALLOC:
			o = 'm'; break;
		case FREE:
			o = 'f'; break;
		default:
			// This servers as a guard for future operations.
			exit(1);
	}
	printf("[%lld, %p, %ld, %c]\n", millitime(), ptr, size, o);
	return;
}

// Used for clock_gettime
#include <time.h>

// returns the time in milliseconds
long long millitime(){
	struct timespec t;
	clock_gettime(CLOCK_REALTIME, &t);
	return t.tv_sec * 1000 + t.tv_nsec / 1000000;
}

