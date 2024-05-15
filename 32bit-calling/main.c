#include <stdio.h>
#include <stdlib.h>

extern int adder(int, int);

//int adder(int a, int b) { return a + b; }

int main(int argc, char **argv) {
    printf("%d\n", adder(atoi(argv[1]), atoi(argv[2])));
}