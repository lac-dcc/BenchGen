// Used for printf()
#include <stdio.h>
#include "Dalloc.h"

void *__wrap_malloc(size_t size) {
	void *ptr = __real_malloc(size);
	long long abbreviated_timestamp = (microtime()%100000);
	debug_print(ptr, size, MALLOC, abbreviated_timestamp);
	return ptr;
}

void __wrap_free(void* ptr) {
	long long abbreviated_timestamp = (microtime()%100000);
	debug_print(ptr, -1, FREE, abbreviated_timestamp);
	__real_free(ptr);
	return;
}

void debug_print(void* ptr, size_t size, enum operation op, long long timestamp){
	char o;
	switch (op){
		case MALLOC:
			o = 'm'; break;
		case FREE:
			o = 'f'; break;
		default:
			exit(1);
	}
	
	unsigned long long abbreviated_address = ((unsigned long long)ptr&0xFFFFF);

	if((int)size >= 0) printf("[%lld, %llx, %ld, %c]\n", timestamp, abbreviated_address, size, o);
	else printf("[%lld, %llx, %c]\n", timestamp, abbreviated_address,o);
	
	return;
}

// returns the time in microseconds
long long microtime(){
	struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000000LL + tv.tv_usec;
}
