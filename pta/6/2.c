#include <stdio.h>

int main() {
    int n; char s[114], *c;

    scanf("%d", &n); getchar();
    while (n--) {
        gets(s);
        for (c = s; *c != 'T'; ++c);
        printf("%d", *(c-2) - 'A' + 1);
    }
    return 0;
}
