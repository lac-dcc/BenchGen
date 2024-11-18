#ifndef DEBUG_ALLOC
#define DEBUG_ALLOC

#include <stdlib.h>
#include <sys/time.h>
// In case future operations are added, make sure to change debug_print to accomodate them.
enum operation {MALLOC, FREE};

// extern "C" has to be used to keep function names equal throughout the compilation process. Otherwise, --wrap doesn't work.

void *__real_malloc(size_t size);
void *__wrap_malloc(size_t size);

void __real_free(void* ptr);
void __wrap_free(void* ptr);


// Calculates time in microseconds. 
long long microtime();
// Prints debug info to terminal.
void debug_print(void*, size_t, enum operation op, long long timestamp);

#endif
