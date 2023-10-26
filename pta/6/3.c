#include <stdio.h>

int main() {
    int n, f[1145], i;
    f[1] = f[2] = 1;

    scanf("%d", &n);

    if (n == 1) return !puts("1");
    for (i = 3; f[i - 1] < n; ++i)
        f[i] = f[i - 1] + f[i - 2];
    printf("%d\n", i - 1);
    return 0;
}
