#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    int s=a+b+c+d;
    printf("Sum = %d; Average = %.1lf\n",
          s, s*1./4);
    return 0;
}