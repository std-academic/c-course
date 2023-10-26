#include <stdio.h>

int main() {
    double e, item;
    int i, j, n;

    printf("Enter n:");
    scanf("%d", &n);

    e = 0;
    item = 1;

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j)
            item *= j;

        e += 1.0 / item;
    }

    printf("e=%.4f\n", e);

    return 0;
}
