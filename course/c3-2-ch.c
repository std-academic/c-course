#include <stdio.h>

int main() {
    int i, sum;

    sum = 0;

    for (i=1; i<=100; ++i) {
        sum = sum + i;
    }

    printf("sum = %d\n", sum);

    return 0;
}
