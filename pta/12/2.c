#include <stdio.h>

int main() {
    char dummy;
    int h, m, s, n;
    scanf("%d%c%d%c%d", &h,&dummy,&m,&dummy,&s);
    scanf("%d", &n);
    
    s += n;
    m += s / 60; s %= 60;
    h += m / 60; m %= 60;
    h %= 24;
    printf("%02d:%02d:%02d\n", h,m,s);
    return 0;
}
