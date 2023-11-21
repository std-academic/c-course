#include <stdio.h>

int dice[1145], n;

#define MARK(i, j) (dice[i] |= 1 << (6 - j))
#define GET(i) (6 - __builtin_ctz(~dice[i]))
// love those bit hacks

int main() {
    int i, x, j;
    for (i = 0; i < 6; ++i) {
        scanf("%d", &x);
        MARK(i, x);
    }
    scanf("%d", &n);
    for (i = 0; i < n - 1; ++i) {
        for (j = 0; j < 6; ++j) 
            MARK(j, GET(j));
    }
    for (j = 0; j < 5; ++j)
        printf("%d ", GET(j));
    return !printf("%d\n", GET(5));
}