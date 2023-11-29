#include <stdio.h>

int main() {
    char s[114], *ch;
    
    gets(s);
    for (ch = s; *ch; ++ch);

    do {
        --ch; putchar(*ch);
    } while (ch != s);
    return 0;
}