// gcc program.c -o Inline -ggdb -masm=intel -m64

#include <stdio.h>
#include <stdlib.h>

long myadd(long a, long b) {
    long c = 0;
    asm(
        "mov %%rax, %1;"
        "add rbx, rax;"
        "inc rbx;"
        "mov %0, rbx;"
        : "=r" (c)
        : "r" (a), "r" (b)
        : "rbx"
    );
    return c;
}

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("usage: a.out a b\n");
        exit(0);
    }
    printf("%ld\n", myadd(atoi(argv[1]), atoi(argv[2])));
}