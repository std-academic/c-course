#include <stdio.h>

int a[10];

int main() {
    char s[114], *c;
    char msk[3] = "";
    int n = 0, i, j, k = 0;

    scanf("%s", s);
    for (c = s; *c; ++c) // count digits in s
        ++a[*c - '0'], ++n;

    for (i = n - 1; i >= 0; --i) { // multiply s by 2
        j = k + (s[i] - '0') * 2;
        s[i] = (j % 10) + '0';
        k = j / 10;
    }
    if (k != 0) { // new digit at head
        --a[k];
        msk[1] = 0; msk[0] = k + '0';
    }

    for (c = s; *c; ++c) // count digits in s * 2
        --a[*c - '0'];
    
    k = 1;
    for (i = 0; i < 10; ++i)
        k &= a[i] == 0;
    
    printf("%s\n%s%s\n", k ? "Yes" : "No", msk, s);
    return 0;
}
