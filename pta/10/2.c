#include <stdio.h>
#include <string.h>

int main() {
    int a[114][114];
    int m, n, i, j;

    scanf("%d%d", &m, &n);
    m %= n;

    for (i = 0; i < n; ++i) for (j = 0; j < n; ++j)
        scanf("%d", &a[j][i]);  // Swap col-row for memcpy()
    
    for (j = n-1; j >= 0; --j)
        memcpy(a[j+m], a[j], sizeof(a[0])); // Column j copy to Column j+m

    for (j = n; j < n + m; ++j)
        memcpy(a[j-n], a[j], sizeof(a[0])); // Vice versa

    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j)
            printf("%d ", a[j][i]);
        puts("");
    }
    return 0;
}
