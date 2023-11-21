#include <stdio.h>

#define yuanshen(op, v, d) if (j op v) { v = j; d = i; }

int main() {
    int n, mx = -1145141919, i, j, Mx;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &j);
        yuanshen(>, mx, Mx)
    }
    printf("%d %d\n", mx, Mx);
    return 0;
}