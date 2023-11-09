#include <stdio.h>

int n;
int a[14];
int flag[14];

void perm(int x) {
    int i;

    if (x == n + 1) {
        for (i = 1; i <= n; ++i)
            printf("%d", a[i]);
        putchar('\n');
    } else {
        for (i = 1; i <= n; ++i)
            if (!flag[i]) {
                flag[i] = 1;
                a[x] = i;
                perm(x + 1);
                flag[i] = 0;
            }
    }
}

int main() {
    memset(flag, 0, sizeof(flag));

    scanf("%d", &n);
    perm(1);
    return 0;
}