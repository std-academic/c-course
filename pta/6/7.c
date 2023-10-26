#include <stdio.h>

int main() {
    int x, c = 0, i, k = 0, leading = 1;

    scanf("%d", &x); // now calc 111..... / x until it ends

    do {
        ++c;
        k = k * 10 + 1;

        i = k / x;
        k = k % x;
        if (!i && !leading) {
            putchar('0');
        }
        if (i) {
            putchar(i + '0');
            leading = 0;
        }
    } while(k);
    printf(" %d\n", c);
    return 0;
}