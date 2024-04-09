// gcc program.c -c

#include <stdio.h>
#include <stdlib.h>

extern long myadd(long a, long b);

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("usage: a.out a b\n");
        exit(0);
    }
    printf("%ld\n", myadd(atoi(argv[1]), atoi(argv[2])));
}