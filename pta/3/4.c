#include <stdio.h>

int main() {
    int l, h, i;
    double j;
    scanf("%d%d", &l, &h);

    if (l > h || h > 100) {
        return !printf("Invalid.");
    }
    
    puts("fahr celsius");
    for (i = l; i <= h; i += 2) {
        j = 5 * (i - 32) / 9.;
        printf("%d%6.1lf\n", i, j);
    }
    return 0;
}
