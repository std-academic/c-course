#include <stdio.h>

int main() {
    int s, i;
    scanf("%d", &s);
    if (s <= 2000 || s > 2100) {
        puts("Invalid year!");
    } else if (s < 2004) {
        puts("None");
    } else {
        for (i = 2004; i <= s; ++i) if (i % 4 == 0 && i != 2100) {
            printf("%d\n", i);
        }
    }
    return 0;
}