#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("usage: anton seconds\n");
        return 0;
    }
    long long seconds = atoi(argv[1]);

    long long vals[seconds];

    // wait for a second to start
    int start = time(NULL);
    while (time(NULL) - start < 1) {}
    
    for (long long s = 0; s < seconds; s++) {
        int start = time(NULL);
        long long i;
        for (i = 0; time(NULL) - start < 1; i++) {
            printf("%lld. Hello Anton!\n", i);
        }
        vals[s] = i;
    }
    long long sum = 0;
    for (long long i = 0; i < seconds; i++) {
        printf("%lld. iteration: %lld\n", i + 1, vals[i]);
        sum += vals[i];
    }

    printf("average: %f\n", (float)sum / seconds);

    return 0;
}