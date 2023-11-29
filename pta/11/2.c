#include <stdio.h>

char s[1145], *ch;
char t[1145];
int p = 0;

int be(char c) {
    static char s[] = "0123456789ABCDEFabcdef";
    int i; for (i = 0; i < 22; ++i)
        if (s[i] == c) return 1;
    return 0;
}

int main() {
    gets(s);
    int neg = 0, start = 1;
    for (ch = s; *ch; ++ch) {
        if (*ch == '-' && start)
            neg = 1;
        if (be(*ch)) {
            start = 0;
            t[p++] = *ch;
        }
    }
    sscanf(t, "%x", &p);
    printf("%s%d\n", neg&&p?"-":"", p);
    return 0;
}