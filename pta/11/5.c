#include <stdio.h>
#include <ctype.h>

int main() {
    char s[114], *ch;
    int n;
    
    gets(s);
    scanf("%d", &n);
    for (ch = s; *ch; ++ch)
        if (isupper(*ch))
            putchar((25 - (*ch - 'A')) + 'A');
        else
            putchar(*ch);
    return 0;
}
