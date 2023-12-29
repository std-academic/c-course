#include <stdio.h>

int main() {
    int a, b, c, d; char dummy;
    scanf("%d%c%d%d%c%d", &a,&dummy,&b,&c,&dummy,&d);

    long long det = 1ll*a*d-1ll*c*b;
    char res = '=';
    if (det > 0) res = '>';
    if (det < 0) res = '<';
    printf("%d/%d %c %d/%d\n", a,b,res,c,d);
    return 0;
}
