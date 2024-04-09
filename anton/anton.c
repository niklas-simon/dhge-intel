#include <stdio.h>
#include <stdlib.h>

void active_wait(long long n) {
    for (long long i = 0; i < n; i++) {}
}

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("usage: anton outer inner\n");
        return 0;
    }
    long long outer = atoi(argv[1]);
    long long inner = atoi(argv[2]);

    for (long long i = 0; i < outer; i++) {
        active_wait(inner);
        printf("%lld. Hello Anton!\n", i);
    }

    return 0;
}