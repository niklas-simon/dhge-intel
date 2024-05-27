// nasm -f elf64 -o myadd.o myadd.asm
// gcc -o out program.c myadd.o

#include <stdio.h>
#include <stdlib.h>

extern int myadd(int, int, int, int);

int main(int argc, char **argv) {
    if (argc < 5) {
        printf("usage: a.out a b c d\n");
        exit(0);
    }
    printf("%d\n", myadd(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4])));
}