#include <stdio.h>

int cnt[114], i, j;
char s[114], *ch;

int main() {
    gets(s);
    for (ch = s; *ch; ++ch) if (isupper(*ch)) {
        ++cnt[*ch];
        if (cnt[*ch] == 1) {
            putchar(*ch);
            cnt[0] = 1;
        }
    }
    if (!cnt[0])
        puts("Not Found");
    return 0;
}
