#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; double a;
    scanf("%d", &n);
    if (n<0) {
        puts("Invalid Value!");
        exit(0);
    }
    if (n <= 50) {
        a = n*0.53;
    } else {
        a = 50*0.53 + (n-50) * (0.53+0.05);
    }
    printf("cost = %.2lf\n", a);
    return 0;
}