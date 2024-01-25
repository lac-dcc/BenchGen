#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void A() {
    printf("INSERTED!\n");
    if (1 < 2) {
        printf("NEW!\n");
        A();
    } else {
        B();
    }
}

void B() {
    printf("REMOVED!\n");
}

int main() {
    for (int i0 = 0; i0 < 10; i0++) {
        A();
        B();
    }
    return 0;
}
