#include <stdio.h>
#include <stdlib.h>

extern int myfunc(int, int, int, int);

int main(int argc, char **argv) {
    printf("%d\n", myfunc(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4])));
}