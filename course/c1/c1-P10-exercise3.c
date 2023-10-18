#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Print random 6x6 char array to console

const int N = 6;

int main() {
    srand(time(0));

    int i, j, c;

    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            c = rand() % 26;
            printf("%c", c + 'A');
        }
        puts("");
    }

    return 0;
}