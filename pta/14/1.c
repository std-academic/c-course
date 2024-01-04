#include <stdio.h>

int main() {
    char s[114];
    scanf("%s", s);
    if (!strcmp(s, "red")) puts("1");
    else if (!strcmp(s, "blue")) puts("2");
    else if (!strcmp(s, "yellow")) puts("3");
    else if (!strcmp(s, "green")) puts("4");
    else if (!strcmp(s, "black")) puts("5");
    else puts("Not Found");
    return 0;
}
