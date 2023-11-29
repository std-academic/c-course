#include <stdio.h>

int cnt[114], i, j;
char s[114], *ch;

int main() {
    gets(s);
    for (ch = s; *ch; ++ch)
        ++cnt[*ch];

    for (i = 0; i < 256; ++i)
        if (cnt[i])
            putchar(i);
    return 0;
}
