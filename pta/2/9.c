#include <stdio.h>

int main() {
    int f;
    scanf("%d", &f);
    printf("Celsius = %d\n", (int)((f*1.-32)/9*5));
    return 0;
}