#include <stdio.h>

char s[114][114];

int main() {
    int n, i;
    char *Ms, *ms;
    double M, m, x;

    scanf("%d", &n); getchar();
    gets(s[0]); scanf("%lf", &x); getchar();
    M = m = x; Ms = ms = s[0];

    for (i = 1; i < n; ++i) {
        gets(s[i]); scanf("%lf", &x); getchar();
        if (x > M) M = x, Ms = s[i];
        if (x < m) m = x, ms = s[i];
    }
    printf("%.2f, %s\n%.2f, %s\n", M, Ms, m, ms);
    return 0;
}
