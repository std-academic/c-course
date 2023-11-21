#include <stdio.h>

int main() {
    int n, a[114], i; scanf("%d", &n);
    for (i = n - 1; i >= 0; --i) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; ++i)
        printf("%d ", a[i]);
    return !printf("%d\n", a[n - 1]);
}
