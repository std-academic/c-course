#include <stdio.h>

int main() {
    int n, i, j, s = 0, x;
    scanf("%d", &n);

    for (i = 1; i < n; ++i) {
        for (j = 1; j < n; ++j) {
            scanf("%d", &x);
            if (i + j != n + 1)
                s += x;
        }
        scanf("%d", &x);
    }
    printf("%d\n", s);
    return 0;
}
