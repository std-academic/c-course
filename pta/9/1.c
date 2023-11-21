#include <stdio.h>

int main() {
    int n, x, i, j;
    scanf("%d%d", &n,&x);
    for (i = 0; i < n; ++i) {
        scanf("%d", &j);
        if (x == j) {
            printf("%d\n", i);
            return 0;
        }
    }
    puts("Not Found");
    return 0;
}